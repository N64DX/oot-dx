/*
 * File: z_en_test1.c
 * Overlay: ovl_En_Test1
 * Description: Various crater marks (e.g., Goron Link punch/pound, Moon's Tear crash, etc.)
 */

#include "z_en_test1.h"

#include "libc64/qrand.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "array_count.h"

#include "assets/objects/gameplay_keep/gameplay_keep_extra.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void EnTest1_Init(Actor* thisx, struct PlayState* play);
void EnTest1_Destroy(Actor* thisx, struct PlayState* play);
void EnTest1_Update(Actor* thisx, struct PlayState* play);
void EnTest1_Draw(Actor* thisx, struct PlayState* play);

ActorProfile En_Test1_Profile = {
    /**/ ACTOR_EN_TEST1,
    /**/ ACTORCAT_ITEMACTION,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnTest1),
    /**/ EnTest1_Init,
    /**/ EnTest1_Destroy,
    /**/ EnTest1_Update,
    /**/ EnTest1_Draw,
};

void EnTest1_80862B70(EnTest1Struct* arg0) {
    u8 i;

    for (i=0; i<20; i++) {
        EnTest1Struct* ptr = &arg0[i];

        ptr->unk_00 = false;
        ptr->unk_04 = 0;
        ptr->unk_08.x = 0.0f;
        ptr->unk_08.y = 0.0f;
        ptr->unk_08.z = 0.0f;
        ptr->unk_14.x = 0.0f;
        ptr->unk_14.y = 0.0f;
        ptr->unk_14.z = 0.0f;
        ptr->unk_20.x = 0.0f;
        ptr->unk_20.y = 0.0f;
        ptr->unk_20.z = 0.0f;
        ptr->unk_2C = 0.001f;
        ptr->unk_30.x = 0;
        ptr->unk_30.y = 0;
        ptr->unk_30.z = 0;
        ptr->unk_36.x = 0;
        ptr->unk_36.y = 0;
        ptr->unk_36.z = 0;
    }
}

void EnTest1_80862CBC(EnTest1Struct* arg0, Vec3f* arg1) {
    EnTest1Struct* ptr;
    u8 i;

    for (i=0; i<20; i++) {
        ptr = &arg0[i];

        if (!ptr->unk_00) {
            s16 sp26 = Rand_ZeroOne() * 0xFFFF;
            f32 sp20;

            ptr->unk_00 = true;
            ptr->unk_08.x = (Math_CosS(sp26) * 20.0f) + arg1->x;
            ptr->unk_08.y = arg1->y;
            ptr->unk_08.z = (Math_SinS(sp26) * 20.0f) + arg1->z;
            sp20 = Rand_ZeroOne();
            ptr->unk_14.x = Math_CosS(sp26) * 13.0f * sp20;
            ptr->unk_14.y = (Rand_ZeroOne() * 5.0f) + 8.0f;
            ptr->unk_14.z = (Math_SinS(sp26) * 13.0f) * sp20;
            ptr->unk_20.x = 0.0f;
            ptr->unk_20.z = 0.0f;
            ptr->unk_20.y = -2.0f;
            ptr->unk_2C = (Rand_ZeroOne() * 0.0004f) + 0.0004f;
            ptr->unk_30.x = Rand_ZeroOne() * 0x7FFE;
            ptr->unk_30.y = Rand_ZeroOne() * 0x7FFE;
            ptr->unk_30.z = Rand_ZeroOne() * 0x7FFE;
            ptr->unk_36.x = Rand_ZeroOne() * 0x2000;
            ptr->unk_36.y = Rand_ZeroOne() * 0x2000;
            ptr->unk_36.z = Rand_ZeroOne() * 0x2000;
            ptr->unk_04 = 10;
            break;
        }
    }
}

void EnTest1_80862EDC(EnTest1Struct* arg0) {
    EnTest1Struct* ptr;
    u8 i;

    for (i=0; i<20; i++) {
        ptr = &arg0[i];

        if (ptr->unk_00) {
            ptr->unk_04--;
            if (ptr->unk_04 < 0)
                ptr->unk_00 = false;
            ptr->unk_08.x += ptr->unk_14.x;
            ptr->unk_08.y += ptr->unk_14.y;
            ptr->unk_08.z += ptr->unk_14.z;
            ptr->unk_14.x += ptr->unk_20.x;
            ptr->unk_14.y += ptr->unk_20.y;
            ptr->unk_14.z += ptr->unk_20.z;
            ptr->unk_30.x += ptr->unk_36.x;
            ptr->unk_30.y += ptr->unk_36.y;
            ptr->unk_30.z += ptr->unk_36.z;
        }
    }
}

void EnTest1_80863048(PlayState* play, EnTest1Struct* arg1) {
    EnTest1Struct* ptr;
    Mtx* mtx;
    u8 i;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0x80, 255, 255, 255, 255);
    gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);

    for (i=0; i<20; i++) {
        ptr = &arg1[i];

        if (!ptr->unk_00)
            continue;

        Matrix_Translate(ptr->unk_08.x, ptr->unk_08.y, ptr->unk_08.z, MTXMODE_NEW);
        Matrix_RotateZYX(ptr->unk_30.x, ptr->unk_30.y, ptr->unk_30.z, MTXMODE_APPLY);
        Matrix_Scale(ptr->unk_2C, ptr->unk_2C, ptr->unk_2C, MTXMODE_APPLY);
        mtx = MATRIX_FINALIZE(play->state.gfxCtx, __FILE__, __LINE__);
        gSPMatrix(POLY_OPA_DISP++, mtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, gFloorImpactDL);
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void EnTest1_Init(Actor* thisx, PlayState* play) {
    EnTest1* this = (EnTest1*)thisx;

    MtxF sp38;
    s32 bgId;

    this->unk_209 = 0;
    this->unk_174 = 0;

    if (thisx->params > 0) {
        Actor_SetScale(thisx, thisx->params / 100000.0f);
        this->surfaceMaterial = SURFACE_MATERIAL_DIRT;
    } else {
        thisx->floorPoly = NULL;
        thisx->world.pos.y += 10.0f;
        thisx->floorHeight = BgCheck_EntityRaycastDown3(&play->colCtx, &thisx->floorPoly, &bgId, &thisx->world.pos);

        if (thisx->floorPoly == NULL || thisx->floorHeight == BGCHECK_Y_MIN) {
            Actor_Kill(thisx);
            return;
        }

        thisx->world.pos.y = thisx->floorHeight;
        func_80038A28(thisx->floorPoly, thisx->world.pos.x, thisx->floorHeight, thisx->world.pos.z, &sp38);
        Matrix_MtxFToYXZRotS(&sp38, &thisx->shape.rot, true);
        thisx->world.rot = thisx->shape.rot;
        this->surfaceMaterial = SurfaceType_GetMaterial(&play->colCtx, thisx->floorPoly, bgId);
    }

    Keyframe_InitFlex(&this->kfSkelAnime, &gameplay_keep_KFSkel_06EB70, &gameplay_keep_KFAnim_06BB0C, this->jointTable, this->morphTable, NULL);
    Keyframe_FlexPlayOnce(&this->kfSkelAnime, &gameplay_keep_KFAnim_06BB0C);
    this->kfSkelAnime.frameCtrl.curTime = 9.0f;
    EnTest1_80862B70(this->unk_20C);
}

void EnTest1_Destroy(Actor* thisx, PlayState* play) {
    EnTest1* this = (EnTest1*)thisx;

    Keyframe_DestroyFlex(&this->kfSkelAnime);
}

void EnTest1_Update(Actor* thisx, PlayState* play) {
    EnTest1* this = (EnTest1*)thisx;
    u8 i;

    this->unk_208 = this->kfSkelAnime.frameCtrl.curTime;

    if (Keyframe_UpdateFlex(&this->kfSkelAnime) && this->actor.parent == NULL && this->actor.params != -1) {
        this->unk_209++;
        if (this->unk_209 > 20)
            Actor_Kill(&this->actor);
    }

    if (this->actor.params != -1 && this->unk_208 >= 2) {
        if (!(this->unk_174 & 1)) {
            this->unk_174 |= 1;

            for (i=0; i<ARRAY_COUNT(this->unk_20C); i++)
                EnTest1_80862CBC(this->unk_20C, &this->actor.world.pos);
        }
    }
    EnTest1_80862EDC(this->unk_20C);
}

s32 EnTest1_OverrideLimbDraw(PlayState* play, KFSkelAnimeFlex* kfSkelAnime, s32 limbIndex, Gfx** dList, u8* flags, void* thisx, Vec3f* scale, Vec3s* rot, Vec3f* pos) {
    EnTest1* this = (EnTest1*)thisx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    if (this->actor.params == -1 && (limbIndex == 1 || limbIndex == 2))
        *dList = NULL;
    if (this->actor.params == -2 && limbIndex == 3)
        *dList = NULL;

    if (limbIndex == 3) {
        gDPSetPrimColor(POLY_XLU_DISP++, 0, 0x80, 0, 0, 0, ((20 - this->unk_209) * 255.0f) / 20.0f);
        gDPSetEnvColor(POLY_XLU_DISP++, 0, 0, 0, ((20 - this->unk_209) * 255.0f) / 20.0f);
    }

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    return true;
}

static const EnTest1EnvColor  sEnTest1DirtEnvColors1[]        = { { 155,   0,  0, 255 }, { 255,   0,   0, 255 }, { 155, 155, 155, 255 }, { 155,   0,   0, 255 }, { 155, 0, 0, 0 } };
static const EnTest1EnvColor  sEnTest1SnowEnvColors1[]        = { { 155, 155, 55, 255 }, { 255, 255, 255, 255 }, { 255, 255, 255, 255 }, { 255, 255, 255, 255 } };
static const EnTest1PrimColor sEnTest1DirtPrimColors0[]       = { { 255, 255, 255, 255, 128 }, { 255, 255, 255, 70, 128 }, { 255, 255, 255,  0, 128 }, { 255, 255, 255, 0, 128 } };
static const EnTest1PrimColor sEnTest1DirtPrimColors1[]       = { { 255, 155, 0,    80, 128 }, { 255, 155,   0, 80, 128 }, { 255, 155,   0, 40, 128 }, { 255, 155,   0, 0, 128 }, { 255, 155, 0, 0, 128 } };
static const EnTest1PrimColor sEnTest1SnowPrimColors0[]       = { { 255, 255, 255, 255, 128 }, { 255, 255, 255, 70, 128 }, { 255, 255, 255,  0, 128 }, { 255, 255, 255, 0, 128 } };
static const EnTest1PrimColor sEnTest1SnowPrimColors1[]       = { { 255, 255, 155,  80, 128 }, { 255, 255, 255, 80, 128 }, { 255, 255, 255, 80, 128 }, { 255, 255, 255, 0, 128 } };
static const u16 sEnTest1DirtKeyFrames0[]                     = { 0, 9, 12, 29 };
static const u16 sEnTest1DirtKeyFrames1[]                     = { 0, 7, 17, 29, 35 };
static const u16 sEnTest1SnowKeyFrames0[]                     = { 0, 10, 13, 29 };
static const u16 sEnTest1SnowKeyFrames1[]                     = { 0, 7, 17, 29 };
static const EnTest1ColorParams sEnTest1DirtColorParams0      = { 30, ARRAY_COUNT(sEnTest1DirtPrimColors0), sEnTest1DirtPrimColors0, NULL,                   sEnTest1DirtKeyFrames0 };
static const EnTest1ColorParams sEnTest1DirtColorParams1      = { 36, ARRAY_COUNT(sEnTest1DirtPrimColors1), sEnTest1DirtPrimColors1, sEnTest1DirtEnvColors1, sEnTest1DirtKeyFrames1 };
static const EnTest1ColorParams sEnTest1SnowColorParams0      = { 30, ARRAY_COUNT(sEnTest1SnowPrimColors0), sEnTest1SnowPrimColors0, NULL,                   sEnTest1SnowKeyFrames0 };
static const EnTest1ColorParams sEnTest1SnowColorParams1      = { 30, ARRAY_COUNT(sEnTest1SnowPrimColors1), sEnTest1SnowPrimColors1, sEnTest1SnowEnvColors1, sEnTest1SnowKeyFrames1 };
static const EnTest1TexScrollParams sEnTest1TexScrollParams[] = { { 3, 0, 0x40, 0x40 }, { -5, 0, 0x40, 0x40 } };
static const EnTest1Material sEnTest1DirtMaterial             = { { &sEnTest1DirtColorParams0, &sEnTest1DirtColorParams1 }, sEnTest1TexScrollParams };
static const EnTest1Material sEnTest1SnowMaterial             = { { &sEnTest1SnowColorParams0, &sEnTest1SnowColorParams1 }, sEnTest1TexScrollParams };

f32 EnTest1_LagrangeInterp(s32 count, const f32* x, const f32* fx, f32 xp) {
    f32 weights[5];
    f32 intp = 0.0f, m;
    u8 i, j;

    for (i=0; i<count; i++) {
        m = 1.0f;
        for (j=0; j<count; j++)
            if (j != i)
                m *= x[i] - x[j];
        weights[i] = fx[i] / m;
    }

    for (i=0; i < count; i++) {
        m = 1.0f;
        for (j=0; j<count; j++)
            if (j != i)
                m *= xp - x[j];
        intp += weights[i] * m;
    }

    return intp;
}

u8 EnTest1_LagrangeInterpColor(s32 count, const f32* x, const f32* fx, f32 xp) {
    return CLAMP((s32)EnTest1_LagrangeInterp(count, x, fx, xp), 0, 255);
}

void EnTest1_SetColorSegment(GraphicsContext* gfxCtx, s32 segment, const EnTest1ColorParams* params, s32 step) {
    Gfx* gfx;
    f32 curFrame = step % params->keyFrameLength;
    f32 x[5], fxPrimR[5], fxPrimG[5], fxPrimB[5], fxPrimA[5], fxPrimLodFrac[5], fxEnvR[5], fxEnvG[5], fxEnvB[5], fxEnvA[5];
    u8 i;

    OPEN_DISPS(gfxCtx, __FILE__, __LINE__);

    for (i=0; i<params->keyFrameCount; i++) {
        x[i] = params->keyFrames[i];
        fxPrimR[i] = params->primColors[i].r;
        fxPrimG[i] = params->primColors[i].g;
        fxPrimB[i] = params->primColors[i].b;
        fxPrimA[i] = params->primColors[i].a;
        fxPrimLodFrac[i] = params->primColors[i].lodFrac;

        if (params->envColors != NULL) {
            fxEnvR[i] = params->envColors[i].r;
            fxEnvG[i] = params->envColors[i].g;
            fxEnvB[i] = params->envColors[i].b;
            fxEnvA[i] = params->envColors[i].a;
        }
    }

    gfx = GRAPH_ALLOC(gfxCtx, 3 * sizeof(Gfx));
    gSPSegment(POLY_OPA_DISP++, segment, gfx);
    gSPSegment(POLY_XLU_DISP++, segment, gfx);
    gDPSetPrimColor(gfx++, 0, EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxPrimLodFrac, curFrame), EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxPrimR, curFrame), EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxPrimG, curFrame),
                              EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxPrimB, curFrame), EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxPrimA, curFrame));

    if (params->envColors != NULL)
        gDPSetEnvColor(gfx++, EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxEnvR, curFrame), EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxEnvG, curFrame), EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxEnvB, curFrame), EnTest1_LagrangeInterpColor(params->keyFrameCount, x, fxEnvA, curFrame));
    
    gSPEndDisplayList(gfx);
    CLOSE_DISPS(gfxCtx, __FILE__, __LINE__);
}

void EnTest1_SetMaterialSegments(PlayState* play, s32 step, s32 snow) {
    const EnTest1Material* material = snow ? &sEnTest1SnowMaterial : &sEnTest1DirtMaterial;
    Gfx* texScroll;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    EnTest1_SetColorSegment(play->state.gfxCtx, 0x08, material->colorParams[0], step);
    EnTest1_SetColorSegment(play->state.gfxCtx, 0x09, material->colorParams[1], step);
    texScroll = Gfx_TwoTexScroll(play->state.gfxCtx, 0, (u32)(material->texScrollParams[0].xStep * step), (u32)(-material->texScrollParams[0].yStep * step), material->texScrollParams[0].width, material->texScrollParams[0].height, 1,
        (u32)(material->texScrollParams[1].xStep * step), (u32)(-material->texScrollParams[1].yStep * step), material->texScrollParams[1].width, material->texScrollParams[1].height);
    gSPSegment(POLY_OPA_DISP++, 0x0A, texScroll);
    gSPSegment(POLY_XLU_DISP++, 0x0A, texScroll);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void EnTest1_Draw(Actor* thisx, PlayState* play) {
    EnTest1* this = (EnTest1*)thisx;

    Mtx* mtxStack;
    s32 sp2C = this->unk_208 - 1;

    if (sp2C >= 29)
        sp2C = 29;

    EnTest1_SetMaterialSegments(play, sp2C, (this->surfaceMaterial == SURFACE_MATERIAL_MAX) || (this->surfaceMaterial == SURFACE_MATERIAL_SNOW));
    mtxStack = GRAPH_ALLOC(play->state.gfxCtx, this->kfSkelAnime.skeleton->dListCount * sizeof(Mtx));

    if (mtxStack != NULL) {
        Gfx_SetupDL_25Xlu(play->state.gfxCtx);
        Keyframe_DrawFlex(play, &this->kfSkelAnime, mtxStack, EnTest1_OverrideLimbDraw, NULL, thisx);
        EnTest1_80863048(play, this->unk_20C);
    }
}
