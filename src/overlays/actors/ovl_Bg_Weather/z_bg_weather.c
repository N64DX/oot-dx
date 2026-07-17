/*
 * File: z_bg_weather.c
 * Overlay: ovl_Bg_Weather
 * Description: Standalone ground mist and rain-fog actor.
 */

#include "z_bg_weather.h"
#include "play_state.h"
#include "actor.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "save.h"
#include "sys_math.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

/*
 * Tuning knobs
 */
#define RAIN_FOG_INTENSITY              0.85f
#define RAIN_FOG_WIND_SPEED_X           10.50f
#define RAIN_FOG_WIND_SPEED_Z           6.90f
#define RAIN_FOG_WIND_SWAY              72.0f
#define RAIN_FOG_OPACITY                255.0f
#define RAIN_FOG_GROUND_OPACITY         255.0f
#define RAIN_FOG_MAX_ALPHA              155.0f
#define RAIN_FOG_NEAR_FADE              180.0f
#define RAIN_FOG_DEPTH_START            160.0f
#define RAIN_FOG_PRIM_BLEND             0.78f

#define NIGHT_MIST_WIND_SPEED_X         1.52f
#define NIGHT_MIST_WIND_SPEED_Z         1.20f
#define NIGHT_MIST_WIND_SWAY            38.0f
#define NIGHT_MIST_ALPHA_SCALE          165.0f
#define NIGHT_MIST_MAX_ALPHA            115.0f
#define NIGHT_MIST_PRIM_R               220
#define NIGHT_MIST_PRIM_G               238
#define NIGHT_MIST_PRIM_B               255
#define NIGHT_MIST_LAYER0_HEIGHT        24.0f
#define NIGHT_MIST_LAYER0_SPREAD        950.0f
#define NIGHT_MIST_LAYER0_WIDTH         340.0f
#define NIGHT_MIST_LAYER0_HEIGHT_SIZE   90.0f
#define NIGHT_MIST_LAYER0_ALPHA         0.42f
#define NIGHT_MIST_LAYER1_HEIGHT        52.0f
#define NIGHT_MIST_LAYER1_SPREAD        720.0f
#define NIGHT_MIST_LAYER1_WIDTH         280.0f
#define NIGHT_MIST_LAYER1_HEIGHT_SIZE   75.0f
#define NIGHT_MIST_LAYER1_ALPHA         0.30f

#define FOG_GRID_DIM                    5
#define FOG_PUFF_SUBDIV                 4
#define FOG_PUFFS_PER_LAYER             (FOG_GRID_DIM * FOG_GRID_DIM)
#define FOG_VERTS_PER_PUFF              (FOG_PUFF_SUBDIV * FOG_PUFF_SUBDIV)
#define RAIN_FOG_NUM_LAYERS             2
#define RAIN_FOG_GROUND_LAYER           2

#define NIGHT_MIST_LAYERS               2
#define NIGHT_MIST_GRID_DIM             5
#define NIGHT_MIST_PUFFS_PER_LAYER      (NIGHT_MIST_GRID_DIM * NIGHT_MIST_GRID_DIM)
#define NIGHT_MIST_PUFF_SUBDIV          4
#define NIGHT_MIST_VERTS_PER_PUFF       (NIGHT_MIST_PUFF_SUBDIV * NIGHT_MIST_PUFF_SUBDIV)

typedef struct {
    f32 heightOffset;
    f32 spreadRadius;
    f32 puffHalfW;
    f32 puffHalfH;
    f32 peakAlpha;
    u64* tex;
    s16 driftS;
    s16 driftT;
} FogLayer;

static const FogLayer sRainFogLayers[] = {
    { 250.0f, 1450.0f, 420.0f, 300.0f, 0.45f, (u64*)gDust8Tex,  2,  1 },
    {  95.0f, 1100.0f, 360.0f, 250.0f, 0.55f, (u64*)gDust5Tex, -3,  3 },
    {  18.0f,  760.0f, 290.0f, 180.0f, 0.45f, (u64*)gDust3Tex,  5, -4 },
    { 155.0f, 1350.0f, 400.0f, 280.0f, 0.36f, (u64*)gDust8Tex, -2,  2 },
};

static const u8 sRainFogLayerOrder[RAIN_FOG_NUM_LAYERS] = { 1, RAIN_FOG_GROUND_LAYER };

static const FogLayer sNightMistLayers[NIGHT_MIST_LAYERS] = {
    { NIGHT_MIST_LAYER0_HEIGHT, NIGHT_MIST_LAYER0_SPREAD, NIGHT_MIST_LAYER0_WIDTH, NIGHT_MIST_LAYER0_HEIGHT_SIZE, NIGHT_MIST_LAYER0_ALPHA, (u64*)gDust5Tex,  2, 1 },
    { NIGHT_MIST_LAYER1_HEIGHT, NIGHT_MIST_LAYER1_SPREAD, NIGHT_MIST_LAYER1_WIDTH, NIGHT_MIST_LAYER1_HEIGHT_SIZE, NIGHT_MIST_LAYER1_ALPHA, (u64*)gDust3Tex, -3, 2 },
};

void BgWeather_Init(Actor* thisx, PlayState* play);
void BgWeather_Destroy(Actor* thisx, PlayState* play);
void BgWeather_Update(Actor* thisx, PlayState* play);
void BgWeather_Draw(Actor* thisx, PlayState* play);

ActorProfile Bg_Weather_Profile = {
    /**/ ACTOR_BG_WEATHER,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(BgWeather),
    /**/ BgWeather_Init,
    /**/ BgWeather_Destroy,
    /**/ BgWeather_Update,
    /**/ BgWeather_Draw,
};

static f32 BgWeather_AbsF(f32 value) {
    return (value < 0.0f) ? -value : value;
}

static f32 BgWeather_MaxF(f32 a, f32 b) {
    return (a > b) ? a : b;
}

static f32 BgWeather_Lerpf(f32 a, f32 b, f32 t) {
    return a + (b - a) * t;
}

static s32 BgWeather_FloorToGridCell(f32 value, f32 cellSize) {
    s32 cell = value / cellSize;

    if (value < 0.0f && value != cell * cellSize)
        cell--;

    return cell;
}

static f32 BgWeather_HashToUnit(s32 layer, s32 gx, s32 gz, s32 salt) {
    u32 hash = (u32)(layer * 0x45D9F3B) ^ (u32)(gx * 0x119DE1F3) ^ (u32)(gz * 0x3449B529) ^ (u32)salt;

    hash ^= hash >> 16;
    hash *= 0x7FEB352D;
    hash ^= hash >> 15;
    hash *= 0x846CA68B;
    hash ^= hash >> 16;

    return (hash & 0xFFFF) * (1.0f / 65535.0f);
}

static void BgWeather_GetWindStep(PlayState* play, f32 fallbackX, f32 fallbackZ, f32* stepX, f32* stepZ) {
    f32 dirX = play->envCtx.windDirection.x;
    f32 dirZ = play->envCtx.windDirection.z;
    f32 speed = play->envCtx.windSpeed;
    f32 lenSq = SQ(dirX) + SQ(dirZ);

    if ((speed > 0.0f) && (lenSq > 0.001f)) {
        f32 step = speed * (1.0f / 64.0f);
        f32 invLen = 1.0f / sqrtf(lenSq);

        *stepX = dirX * invLen * step;
        *stepZ = dirZ * invLen * step;
    } else {
        *stepX = fallbackX;
        *stepZ = fallbackZ;
    }
}

static f32 BgWeather_GetPuffFade(f32 rFrac, f32 uFrac) {
    f32 edge = 1.0f - BgWeather_MaxF(BgWeather_AbsF(rFrac), BgWeather_AbsF(uFrac));
    f32 radial = 1.0f - CLAMP((SQ(rFrac) + SQ(uFrac)) * 0.5f, 0.0f, 1.0f);

    return edge * edge * (0.35f + 0.65f * radial);
}

static f32 BgWeather_GetPuffGlowFade(f32 rFrac, f32 uFrac) {
    f32 fade = BgWeather_GetPuffFade(rFrac, uFrac);

    return CLAMP((fade * 0.72f) + (sqrtf(fade) * 0.28f), 0.0f, 1.0f);
}

static f32 BgWeather_GetPlayerY(PlayState* play, f32 fallbackY) {
    Actor* player = play->actorCtx.actorLists[ACTORCAT_PLAYER].head;

    return (player != NULL) ? player->world.pos.y : fallbackY;
}

static f32 BgWeather_GetAnchorY(BgWeather* this, PlayState* play) {
    return BgWeather_GetPlayerY(play, this->actor.world.pos.y);
}

static f32 BgWeather_GetNightFactor(void) {
    if (gSaveContext.save.dayTime >= CLOCK_TIME(18, 30))
        return CLAMP((gSaveContext.save.dayTime - CLOCK_TIME(18, 30)) / (f32)(CLOCK_TIME(19, 30) - CLOCK_TIME(18, 30)), 0.0f, 1.0f);
    if (gSaveContext.save.dayTime < CLOCK_TIME(4, 30))
        return 1.0f;
    if (gSaveContext.save.dayTime < CLOCK_TIME(5, 30))
        return 1.0f - CLAMP((gSaveContext.save.dayTime - CLOCK_TIME(4, 30)) / (f32)(CLOCK_TIME(5, 30) - CLOCK_TIME(4, 30)), 0.0f, 1.0f);
    return 0.0f;
}

void BgWeather_Init(Actor* thisx, PlayState* play) {
    BgWeather* this = (BgWeather*)thisx;

    if (GET_EVENTCHKINF(EVENTCHKINF_CLEANSED_STONE_TOWER))
        Actor_Kill(&this->actor);

    this->rainFogIntensity = RAIN_FOG_INTENSITY;
    this->nightMistIntensity = BgWeather_GetNightFactor();
    this->fogLastEye = play->mainCamera.eye;
    this->fogWakeX = this->fogWakeZ = 0.0f;
    this->fogWakeInitialized = true;
}

void BgWeather_Destroy(Actor* thisx, PlayState* play) { }

void BgWeather_Update(Actor* thisx, PlayState* play) {
    BgWeather* this = (BgWeather*)thisx;

    Math_SmoothStepToF(&this->nightMistIntensity, BgWeather_GetNightFactor(), 0.08f, 0.02f, 0.001f);
    Math_SmoothStepToF(&this->rainFogIntensity, RAIN_FOG_INTENSITY, 0.12f, 0.03f, 0.001f);
}

static void BgWeather_LoadFogState(GraphicsContext* gfxCtx, Gfx** gfxP, u8 primR, u8 primG, u8 primB) {
    Gfx* gfx = gfxCtx->polyXlu.p;

    Gfx_SetupDL_38Xlu(gfxCtx);
    gfx = gfxCtx->polyXlu.p;

    gDPPipeSync(gfx++);
    gSPTexture(gfx++, 0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON);
    gDPSetTextureFilter(gfx++, G_TF_BILERP);
    gDPSetAlphaDither(gfx++, G_AD_DISABLE);
    gSPClearGeometryMode(gfx++, G_CULL_BACK | G_LIGHTING | G_FOG);
    gDPSetCombineLERP(gfx++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, SHADE, 0);
    gDPSetRenderMode(gfx++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
    gDPSetPrimColor(gfx++, 0, 0, primR, primG, primB, 255);

    *gfxP = gfx;
}

static void BgWeather_DrawFogPuffGrid(GraphicsContext* gfxCtx, Gfx** gfxP, Vtx* vtx, s32 drawCount, s32 vertsPerPuff, s32 puffSubdiv, u64* tex) {
    Gfx* gfx = *gfxP;
    s32 pi;

    if (drawCount == 0)
        return;

    gDPPipeSync(gfx++);
    gDPLoadTextureBlock(gfx++, tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_CLAMP, G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD);

    for (pi=0; pi<drawCount; pi++) {
        s32 ri;
        gSPVertex(gfx++, &vtx[pi * vertsPerPuff], vertsPerPuff, 0);
        for (ri=0; ri<puffSubdiv - 1; ri++) {
            s32 ui;
            for (ui = 0; ui < puffSubdiv - 1; ui++) {
                s32 v00 = ri * puffSubdiv + ui;
                s32 v10 = (ri + 1) * puffSubdiv + ui;
                s32 v01 = ri * puffSubdiv + ui + 1;
                s32 v11 = (ri + 1) * puffSubdiv + ui + 1;
                gSP2Triangles(gfx++, v00, v10, v01, 0, v10, v11, v01, 0);
            }
        }
    }

    *gfxP = gfx;
}

static void BgWeather_DrawNightMist(BgWeather* this, PlayState* play) {
    GraphicsContext* gfxCtx = play->state.gfxCtx;
    Gfx* gfx;
    f32 mistIntensity = this->nightMistIntensity;
    f32 eyeX, eyeY, eyeZ, groundY, billRightX, billRightZ, windStepX, windStepZ, fwdX, fwdZ, fwdLen;
    s32 li;

    if (mistIntensity < 0.01f)
        return;

    eyeX = play->mainCamera.eye.x;
    eyeY = play->mainCamera.eye.y;
    eyeZ = play->mainCamera.eye.z;
    groundY = BgWeather_GetAnchorY(this, play);
    //groundY = this->actor.world.pos.y;
    BgWeather_GetWindStep(play, NIGHT_MIST_WIND_SPEED_X, NIGHT_MIST_WIND_SPEED_Z, &windStepX, &windStepZ);

    fwdX = play->mainCamera.at.x - eyeX;
    fwdZ = play->mainCamera.at.z - eyeZ;
    fwdLen = sqrtf(fwdX * fwdX + fwdZ * fwdZ);

    if (fwdLen > 0.001f) {
        f32 inv = 1.0f / fwdLen;
        billRightX = -fwdZ * inv;
        billRightZ = fwdX * inv;
    } else {
        billRightX = 1.0f;
        billRightZ = 0.0f;
    }

    OPEN_DISPS(gfxCtx, __FILE__, __LINE__);

    BgWeather_LoadFogState(gfxCtx, &gfx, NIGHT_MIST_PRIM_R, NIGHT_MIST_PRIM_G, NIGHT_MIST_PRIM_B);

    Matrix_Push();
    Matrix_Translate(eyeX, eyeY, eyeZ, MTXMODE_NEW);
    MATRIX_FINALIZE_AND_LOAD(gfx++, gfxCtx, __FILE__, __LINE__);

    for (li=0; li<NIGHT_MIST_LAYERS; li++) {
        const FogLayer* layer = &sNightMistLayers[li];
        f32 deltaY = groundY + layer->heightOffset - eyeY;
        f32 spacing = (layer->spreadRadius * 2.0f) / (NIGHT_MIST_GRID_DIM - 1);
        f32 windX = play->gameplayFrames * windStepX + li * 95.0f;
        f32 windZ = play->gameplayFrames * windStepZ - li * 70.0f;
        s32 baseCellX = BgWeather_FloorToGridCell(eyeX - windX, spacing) - (NIGHT_MIST_GRID_DIM / 2);
        s32 baseCellZ = BgWeather_FloorToGridCell(eyeZ - windZ, spacing) - (NIGHT_MIST_GRID_DIM / 2);
        u8 baseAlpha = (u8)CLAMP(layer->peakAlpha * mistIntensity * NIGHT_MIST_ALPHA_SCALE, 0.0f, NIGHT_MIST_MAX_ALPHA);
        Vtx* vtx;
        s32 drawCount = 0;
        s32 gx, gz;

        if (baseAlpha < 3)
            continue;

        vtx = Graph_Alloc(gfxCtx, sizeof(Vtx) * NIGHT_MIST_VERTS_PER_PUFF * NIGHT_MIST_PUFFS_PER_LAYER);

        for (gx=0; gx<NIGHT_MIST_GRID_DIM; gx++) {
            for (gz = 0; gz < NIGHT_MIST_GRID_DIM; gz++) {
                s32 cellX = baseCellX + gx;
                s32 cellZ = baseCellZ + gz;
                f32 localX = (cellX + 0.5f) * spacing + windX - eyeX;
                f32 localZ = (cellZ + 0.5f) * spacing + windZ - eyeZ;
                f32 jitterX = (BgWeather_HashToUnit(9 + li, cellX, cellZ, 0x1729) - 0.5f) * spacing * 0.34f;
                f32 jitterZ = (BgWeather_HashToUnit(9 + li, cellX, cellZ, 0x283D) - 0.5f) * spacing * 0.34f;
                f32 scale = 0.85f + BgWeather_HashToUnit(9 + li, cellX, cellZ, 0x39AF) * 0.35f;
                f32 dist, distFrac, nearFrac, rx, rz, puffHalfH;
                u8 puffAlpha;
                Vtx* base;
                s32 ri, ui;

                localX += jitterX;
                localZ += jitterZ;
                localX += Math_SinS((s16)(play->gameplayFrames * (75 + li * 13) + BgWeather_HashToUnit(9 + li, cellX, cellZ, 0x51ED) * 65535.0f)) * NIGHT_MIST_WIND_SWAY;
                localZ += Math_CosS((s16)(play->gameplayFrames * (61 + li * 11) + BgWeather_HashToUnit(9 + li, cellX, cellZ, 0x6B4F) * 65535.0f)) * NIGHT_MIST_WIND_SWAY;

                dist = sqrtf(localX * localX + localZ * localZ);
                distFrac = CLAMP(dist / layer->spreadRadius, 0.0f, 1.0f);
                nearFrac = CLAMP(dist / RAIN_FOG_NEAR_FADE, 0.0f, 1.0f);
                puffAlpha = (u8)(baseAlpha * (1.0f - distFrac * distFrac) * nearFrac);

                if (puffAlpha < 3)
                    continue;

                rx = billRightX * layer->puffHalfW * scale;
                rz = billRightZ * layer->puffHalfW * scale;
                puffHalfH = layer->puffHalfH * (0.85f + BgWeather_HashToUnit(9 + li, cellX, cellZ, 0x4CE1) * 0.25f);
                base = &vtx[drawCount * NIGHT_MIST_VERTS_PER_PUFF];

                for (ri=0; ri<NIGHT_MIST_PUFF_SUBDIV; ri++) {
                    f32 rFrac = ((f32)ri / (NIGHT_MIST_PUFF_SUBDIV - 1)) * 2.0f - 1.0f;

                    for (ui = 0; ui < NIGHT_MIST_PUFF_SUBDIV; ui++) {
                        f32 uFrac = ((f32)ui / (NIGHT_MIST_PUFF_SUBDIV - 1)) * 2.0f - 1.0f;
                        Vtx* v = &base[ri * NIGHT_MIST_PUFF_SUBDIV + ui];

                        v->v.ob[0] = (s16)(localX + rFrac * rx);
                        v->v.ob[1] = (s16)(deltaY + uFrac * puffHalfH);
                        v->v.ob[2] = (s16)(localZ + rFrac * rz);
                        v->v.flag = 0;
                        v->v.tc[0] = (s16)((rFrac + 1.0f) * 512.0f);
                        v->v.tc[1] = (s16)((uFrac + 1.0f) * 512.0f);
                        v->v.cn[0] = v->v.cn[1] = v->v.cn[2] = 255;
                        v->v.cn[3] = (u8)(puffAlpha * BgWeather_GetPuffGlowFade(rFrac, uFrac));
                    }
                }
                drawCount++;
            }
        }

        BgWeather_DrawFogPuffGrid(gfxCtx, &gfx, vtx, drawCount, NIGHT_MIST_VERTS_PER_PUFF, NIGHT_MIST_PUFF_SUBDIV, layer->tex);
    }

    Matrix_Pop();
    POLY_XLU_DISP = gfx;
    CLOSE_DISPS(gfxCtx, __FILE__, __LINE__);
}

static void BgWeather_DrawRainFog(BgWeather* this, PlayState* play) {
    GraphicsContext* gfxCtx = play->state.gfxCtx;
    Gfx* gfx;
    f32 eyeX = play->mainCamera.eye.x;
    f32 eyeY = play->mainCamera.eye.y;
    f32 eyeZ = play->mainCamera.eye.z;
    f32 groundY = BgWeather_GetAnchorY(this, play);
    f32 heightFactor = 1.0f - ((eyeY - groundY) / 1200.0f);
    f32 dayFogFactor = 1.0f - BgWeather_GetNightFactor();
    f32 dayFogAlphaBoost = 1.0f + dayFogFactor * 0.10f;
    f32 billForwardX, billForwardZ, billRightX, billRightZ, windStepX, windStepZ, fwdX, fwdZ, fwdLen;
    u8 fr, fg, fb;
    s32 li;

    if (this->rainFogIntensity < 0.01f)
        return;

    heightFactor = CLAMP(heightFactor, 0.3f, 1.4f);
    BgWeather_GetWindStep(play, RAIN_FOG_WIND_SPEED_X, RAIN_FOG_WIND_SPEED_Z, &windStepX, &windStepZ);

    if (!this->fogWakeInitialized) {
        this->fogLastEye = play->mainCamera.eye;
        this->fogWakeX = 0.0f;
        this->fogWakeZ = 0.0f;
        this->fogWakeInitialized = true;
    } else {
        f32 dx = eyeX - this->fogLastEye.x;
        f32 dz = eyeZ - this->fogLastEye.z;
        f32 wakeLen;

        this->fogWakeX = this->fogWakeX * 0.82f + dx * 2.35f;
        this->fogWakeZ = this->fogWakeZ * 0.82f + dz * 2.35f;
        wakeLen = sqrtf(SQ(this->fogWakeX) + SQ(this->fogWakeZ));

        if (wakeLen > 220.0f) {
            f32 wakeScale = 220.0f / wakeLen;
            this->fogWakeX *= wakeScale;
            this->fogWakeZ *= wakeScale;
        }

        this->fogLastEye = play->mainCamera.eye;
    }

    fr = (u8)CLAMP(BgWeather_Lerpf((f32)play->envCtx.lightSettings.fogColor[0], 232.0f, RAIN_FOG_PRIM_BLEND), 180.0f, 245.0f);
    fg = (u8)CLAMP(BgWeather_Lerpf((f32)play->envCtx.lightSettings.fogColor[1], 236.0f, RAIN_FOG_PRIM_BLEND), 190.0f, 245.0f);
    fb = (u8)CLAMP(BgWeather_Lerpf((f32)play->envCtx.lightSettings.fogColor[2], 242.0f, RAIN_FOG_PRIM_BLEND), 200.0f, 250.0f);

    fwdX = play->mainCamera.at.x - eyeX;
    fwdZ = play->mainCamera.at.z - eyeZ;
    fwdLen = sqrtf(fwdX * fwdX + fwdZ * fwdZ);

    if (fwdLen > 0.001f) {
        f32 inv = 1.0f / fwdLen;
        billForwardX = fwdX * inv;
        billForwardZ = fwdZ * inv;
        billRightX = -billForwardZ;
        billRightZ = billForwardX;
    } else {
        billForwardX = 0.0f;
        billForwardZ = 1.0f;
        billRightX = 1.0f;
        billRightZ = 0.0f;
    }

    OPEN_DISPS(gfxCtx, __FILE__, __LINE__);

    BgWeather_LoadFogState(gfxCtx, &gfx, fr, fg, fb);

    Matrix_Push();
    Matrix_Translate(eyeX, eyeY, eyeZ, MTXMODE_NEW);
    MATRIX_FINALIZE_AND_LOAD(gfx++, gfxCtx, __FILE__, __LINE__);

    for (li = 0; li < RAIN_FOG_NUM_LAYERS; li++) {
        u8 layerIndex = sRainFogLayerOrder[li];
        const FogLayer* layer = &sRainFogLayers[layerIndex];
        f32 opacity = (layerIndex == RAIN_FOG_GROUND_LAYER) ? RAIN_FOG_GROUND_OPACITY : RAIN_FOG_OPACITY;
        f32 deltaY = groundY + layer->heightOffset - eyeY;
        f32 windX = play->gameplayFrames * windStepX + layerIndex * 180.0f;
        f32 windZ = play->gameplayFrames * windStepZ - layerIndex * 130.0f;
        f32 cellSize = layer->spreadRadius * 0.50f;
        s32 baseCellX = BgWeather_FloorToGridCell(eyeX - windX, cellSize) - (FOG_GRID_DIM / 2);
        s32 baseCellZ = BgWeather_FloorToGridCell(eyeZ - windZ, cellSize) - (FOG_GRID_DIM / 2);
        u8 baseAlpha = (u8)CLAMP(layer->peakAlpha * this->rainFogIntensity * heightFactor * dayFogAlphaBoost * opacity, 0.0f, RAIN_FOG_MAX_ALPHA);
        Vtx* vtx;
        s32 drawCount = 0;
        s32 gx, gz;

        if (baseAlpha < 3)
            continue;

        vtx = Graph_Alloc(gfxCtx, sizeof(Vtx) * FOG_VERTS_PER_PUFF * FOG_PUFFS_PER_LAYER);

        for (gx = 0; gx < FOG_GRID_DIM; gx++) {
            for (gz = 0; gz < FOG_GRID_DIM; gz++) {
                s32 cellX = baseCellX + gx;
                s32 cellZ = baseCellZ + gz;
                f32 worldCenterX = (cellX + 0.5f) * cellSize + windX;
                f32 worldCenterZ = (cellZ + 0.5f) * cellSize + windZ;
                f32 jitterX = (BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x0471) - 0.5f) * cellSize * 0.62f;
                f32 jitterZ = (BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x0937) - 0.5f) * cellSize * 0.62f;
                f32 scale = 1.02f + BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x1231) * 0.38f;
                f32 alphaScale = 0.90f + BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x1B57) * 0.45f;
                f32 localX, localZ, dist, distFrac, nearFrac, forwardDot, forwardFade, volumeFade, rx, rz, puffHalfH;
                u8 puffAlpha;
                Vtx* base;
                s32 ri, ui;

                worldCenterX += jitterX;
                worldCenterZ += jitterZ;
                worldCenterX += Math_SinS((s16)(play->gameplayFrames * (68 + layerIndex * 17) + BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x51ED) * 65535.0f)) * RAIN_FOG_WIND_SWAY;
                worldCenterZ += Math_CosS((s16)(play->gameplayFrames * (57 + layerIndex * 19) + BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x6B4F) * 65535.0f)) * RAIN_FOG_WIND_SWAY;

                localX = worldCenterX - eyeX - this->fogWakeX;
                localZ = worldCenterZ - eyeZ - this->fogWakeZ;
                dist = sqrtf(localX * localX + localZ * localZ);
                distFrac = CLAMP(dist / layer->spreadRadius, 0.0f, 1.0f);
                nearFrac = CLAMP((dist - RAIN_FOG_DEPTH_START) / RAIN_FOG_NEAR_FADE, 0.0f, 1.0f);
                forwardDot = (dist > 1.0f) ? ((localX * billForwardX + localZ * billForwardZ) / dist) : 0.0f;
                forwardFade = CLAMP((forwardDot + 0.45f) / 1.45f, 0.25f, 1.0f);
                volumeFade = (1.0f - distFrac * distFrac) * forwardFade;
                puffAlpha = (u8)(baseAlpha * alphaScale * volumeFade * nearFrac);

                if (puffAlpha < 2)
                    continue;

                rx = billRightX * layer->puffHalfW * scale;
                rz = billRightZ * layer->puffHalfW * scale;
                puffHalfH = layer->puffHalfH * (0.88f + BgWeather_HashToUnit(layerIndex, gx, gz, 0x2C13) * 0.28f);
                base = &vtx[drawCount * FOG_VERTS_PER_PUFF];

                for (ri=0; ri<FOG_PUFF_SUBDIV; ri++) {
                    f32 rFrac = ((f32)ri / (FOG_PUFF_SUBDIV - 1)) * 2.0f - 1.0f;

                    for (ui = 0; ui < FOG_PUFF_SUBDIV; ui++) {
                        f32 uFrac = ((f32)ui / (FOG_PUFF_SUBDIV - 1)) * 2.0f - 1.0f;
                        Vtx* v = &base[ri * FOG_PUFF_SUBDIV + ui];

                        v->v.ob[0] = (s16)(localX + rFrac * rx);
                        v->v.ob[1] = (s16)(deltaY + uFrac * puffHalfH + (BgWeather_HashToUnit(layerIndex, cellX, cellZ, 0x45CD) - 0.5f) * 95.0f);
                        v->v.ob[2] = (s16)(localZ + rFrac * rz);
                        v->v.flag = 0;
                        v->v.tc[0] = (s16)((rFrac + 1.0f) * 512.0f);
                        v->v.tc[1] = (s16)((uFrac + 1.0f) * 512.0f);
                        v->v.cn[0] = v->v.cn[1] = v->v.cn[2] = 255;
                        v->v.cn[3] = (u8)(puffAlpha * BgWeather_GetPuffGlowFade(rFrac, uFrac));
                    }
                }
                drawCount++;
            }
        }

        BgWeather_DrawFogPuffGrid(gfxCtx, &gfx, vtx, drawCount, FOG_VERTS_PER_PUFF, FOG_PUFF_SUBDIV, layer->tex);
    }

    Matrix_Pop();
    POLY_XLU_DISP = gfx;
    CLOSE_DISPS(gfxCtx, __FILE__, __LINE__);
}

void BgWeather_Draw(Actor* thisx, PlayState* play) {
    BgWeather* this = (BgWeather*)thisx;

    BgWeather_DrawRainFog(this, play);
    BgWeather_DrawNightMist(this, play);
}
