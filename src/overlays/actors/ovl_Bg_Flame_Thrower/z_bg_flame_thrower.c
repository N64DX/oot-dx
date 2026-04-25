/*
 * File: z_bg_flamethrower.c
 * Overlay: ovl_Bg_Flamethrower
 * Description: Flamethrower in Dodongo's Cavern (Spaceworld '97)
 */

#include "z_bg_flame_thrower.h"

#include "array_count.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "segmented_address.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_DRAW_CULLING_DISABLED)

void BgFlameThrower_Init(Actor* thisx, struct PlayState* play);
void BgFlameThrower_Destroy(Actor* thisx, struct PlayState* play);
void BgFlameThrower_Update(Actor* thisx, struct PlayState* play);
void BgFlameThrower_Draw(Actor* thisx, struct PlayState* play);

ActorProfile Bg_Flame_Thrower_Profile = {
    /**/ ACTOR_BG_FLAME_THROWER,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_HIDAN_OBJECTS,
    /**/ sizeof(BgFlameThrower),
    /**/ BgFlameThrower_Init,
    /**/ BgFlameThrower_Destroy,
    /**/ BgFlameThrower_Update,
    /**/ BgFlameThrower_Draw,
};

static ColliderJntSphElementInit sJntSphElementsInit[] = {
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x20000000, 0x01, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NONE,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 30, 40 }, 25 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x20000000, 0x01, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NONE,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 32, 77 }, 32 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x20000000, 0x01, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NONE,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 35, 130 }, 42 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x20000000, 0x01, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NONE,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { 1, { { -0, 35, 181 }, 52 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK0,
            { 0x20000000, 0x01, 0x10 },
            { 0x00000000, 0x00, 0x00 },
            ATELEM_ON | ATELEM_SFX_NONE,
            ACELEM_NONE,
            OCELEM_NONE,
        },
        { 1, { { 0, 35, 235 }, 62 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_NONE,
        AT_ON | AT_TYPE_ENEMY,
        AC_NONE,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphElementsInit),
    sJntSphElementsInit,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 400, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 1500, ICHAIN_STOP),
};

static u64* sFireballsTexs[] = { gFireTempleFireball0Tex, gFireTempleFireball1Tex, gFireTempleFireball2Tex, gFireTempleFireball3Tex, gFireTempleFireball4Tex, gFireTempleFireball5Tex, gFireTempleFireball6Tex, gFireTempleFireball7Tex };

void BgFlameThrower_Init(Actor* thisx, PlayState* play) {
    BgFlameThrower* this = (BgFlameThrower*)thisx;
    s32 i;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Collider_InitJntSph(play, &this->colliderSph);
    Collider_SetJntSph(play, &this->colliderSph, &this->dyna.actor, &sJntSphInit, this->colliderItems);

    for (i=0; i<ARRAY_COUNT(this->colliderItems); i++)
        this->colliderSph.elements[i].dim.worldSphere.radius = this->colliderSph.elements[i].dim.modelSphere.radius;

    this->unk_170 = 0;
    this->timer = (this->dyna.actor.world.rot.y < 0) ? 0 : FLAME_DURATION;
}

void BgFlameThrower_Destroy(Actor* thisx, PlayState* play) {
    BgFlameThrower* this = (BgFlameThrower*)thisx;

    Collider_DestroyJntSph(play, &this->colliderSph);
}

void BgFlameThrower_Update(Actor* thisx, PlayState* play) {
    BgFlameThrower* this = (BgFlameThrower*)thisx;
    s32 i;
    ColliderJntSphElement* sphere;
    f32 yawSine, yawCosine;
    
    this->timer--;
    if (this->timer <= -FLAME_DURATION)
        this->timer = FLAME_DURATION;

    if (this->unk_170 != 0)
        this->unk_170--;
    if (this->unk_170 == 0)
        this->unk_170 = 4;

    yawSine = Math_SinS(this->dyna.actor.shape.rot.y);
    yawCosine = Math_CosS(this->dyna.actor.shape.rot.y);

    for (i=0; i<ARRAY_COUNT(this->colliderItems); i++) {
        sphere = &this->colliderSph.elements[i];
        sphere->dim.worldSphere.center.x = this->dyna.actor.home.pos.x + yawCosine * sphere->dim.modelSphere.center.x + yawSine * sphere->dim.modelSphere.center.z;
        sphere->dim.worldSphere.center.y = (s16)this->dyna.actor.home.pos.y + sphere->dim.modelSphere.center.y;
        sphere->dim.worldSphere.center.z = (this->dyna.actor.home.pos.z - yawSine * sphere->dim.modelSphere.center.x) + yawCosine * sphere->dim.modelSphere.center.z;
    }

   if (this->timer > 0) {
        Player* player = GET_PLAYER(play);

        if (player->actor.world.pos.y >= this->dyna.actor.world.pos.y - 300.0f) { // Is currently flaming and player is on this floor
            CollisionCheck_SetAT(play, &play->colChkCtx, &this->colliderSph.base);
            Actor_PlaySfx_Flagged(&this->dyna.actor, NA_SE_EV_FIRE_PILLAR - SFX_FLAG);
        }
    }
}

Gfx* BgFlameThrower_DrawFlame(PlayState* play, BgFlameThrower* this, s16 frame, MtxF* mtx, Gfx* displayList) {
    f32 phi_f12;

    u8 index = (((this->timer + frame) % 8) * 7) * (1 / 7.0f);
    gSPSegment(displayList++, 9, SEGMENTED_TO_VIRTUAL(sFireballsTexs[index]));
    frame++;
    if (frame != 4)
        phi_f12 = frame + ((4 - this->unk_170) / 4.0f);
    else phi_f12 = frame;
    gDPSetPrimColor(displayList++, 0, 1, 255, 255, 0, 150);
    gDPSetEnvColor(displayList++, 255, 0, 0, 255);

    mtx->xx = mtx->yy = mtx->zz = (0.7f * phi_f12) + 0.5f;

    mtx->xw = ((((mtx->xx * 3.0f)  * phi_f12) + 20.0f) * Math_SinS(this->dyna.actor.shape.rot.y - 0x2000)) + this->dyna.actor.world.pos.x;
    mtx->yw = this->dyna.actor.world.pos.y + 50.0f + (0.7f * phi_f12);
    mtx->zw = ((((mtx->xx * 25.0f) * phi_f12) + 20.0f) * Math_CosS(this->dyna.actor.shape.rot.y - 0x2000)) + this->dyna.actor.world.pos.z;

    gSPMatrix(displayList++, Matrix_MtxFToMtx(MATRIX_CHECK_FLOATS(mtx, __FILE__, __LINE__), GRAPH_ALLOC(play->state.gfxCtx, sizeof(Mtx))), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(displayList++, gFireTempleFireballDL);

    return displayList;
}

Gfx* BgFlameThrower_DrawSetupFlame(PlayState* play, BgFlameThrower* this, Gfx* displayList) {
    s8 i, phi_s1, phi_s2;
    MtxF mtx;

    if (this->timer < 4) {
        phi_s1 = 4 - this->timer;
        phi_s2 = 4;
    } else {
        phi_s1 = 0;
        phi_s2 = FLAME_DURATION - this->timer;
        phi_s2 = CLAMP_MAX(phi_s2, 4);
    }

    Matrix_MtxFCopy(&mtx, &gIdentityMtxF);

    for (i=phi_s2-1; i>=phi_s1; i--)
        displayList = BgFlameThrower_DrawFlame(play, this, i, &mtx, displayList);

    return displayList;
}

void BgFlameThrower_Draw(Actor* thisx, PlayState* play) {
    BgFlameThrower* this = (BgFlameThrower*)thisx;

    OPEN_DISPS(play->state.gfxCtx,  __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx,  __FILE__, __LINE__);
    POLY_XLU_DISP = Gfx_SetupDL(POLY_XLU_DISP, SETUPDL_20);
    POLY_XLU_DISP = BgFlameThrower_DrawSetupFlame(play, this, POLY_XLU_DISP);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
