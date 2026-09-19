/*
 * File: z_bg_kin2_fence.c
 * Overlay: ovl_Bg_Kin2_Fence
 * Description: Ocean Spider House - Fireplace Grate
 */

#include "z_bg_kin2_fence.h"

#include "ichain.h"
#include "one_point_cutscene.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "sys_math3d.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"
#include "array_count.h"

#include "assets/objects/object_kin2_obj/object_kin2_obj.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void BgKin2Fence_Init(Actor* thisx, struct PlayState* play);
void BgKin2Fence_Destroy(Actor* thisx, struct PlayState* play);
void BgKin2Fence_Update(Actor* thisx, struct PlayState* play);
void BgKin2Fence_Draw(Actor* thisx, struct PlayState* play);

void BgKin2Fence_SetupHandleMaskCode(BgKin2Fence* this);
void BgKin2Fence_HandleMaskCode(BgKin2Fence* this, struct PlayState* play);
void BgKin2Fence_SetupWaitBeforeOpen(BgKin2Fence* this);
void BgKin2Fence_WaitBeforeOpen(BgKin2Fence* this, struct PlayState* play);
void BgKin2Fence_SetupRaiseFence(BgKin2Fence* this);
void BgKin2Fence_RaiseFence(BgKin2Fence* this, struct PlayState* play);
void BgKin2Fence_SetupDoNothing(BgKin2Fence* this);
void BgKin2Fence_DoNothing(BgKin2Fence* this, struct PlayState* play);

ActorProfile Bg_Kin2_Fence_Profile = {
    /**/ ACTOR_BG_KIN2_FENCE,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_KIN2_OBJ,
    /**/ sizeof(BgKin2Fence),
    /**/ BgKin2Fence_Init,
    /**/ BgKin2Fence_Destroy,
    /**/ BgKin2Fence_Update,
    /**/ BgKin2Fence_Draw,
};

static ColliderJntSphElementInit sJntSphElementsInit[4] = {
    {
        {
            ELEM_MATERIAL_UNK4,
            { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x0001F8A0, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { 0, { { -2040, 1400, 350 }, 28 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK4,
            { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x0001F8A0, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { 0, { { -1140, 1400, 350 }, 28 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK4,
            { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x0001F8A0, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { 0, { { 1140, 1400, 350 }, 28 }, 100 },
    },
    {
        {
            ELEM_MATERIAL_UNK4,
            { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
            { 0x0001F8A0, HIT_BACKLASH_NONE, 0x00 },
            ATELEM_NONE | ATELEM_SFX_NORMAL,
            ACELEM_ON,
            OCELEM_NONE,
        },
        { 0, { { 2040, 1400, 350 }, 28 }, 100 },
    },
};

static ColliderJntSphInit sJntSphInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_JNTSPH,
    },
    ARRAY_COUNT(sJntSphElementsInit),
    sJntSphElementsInit,
};

s8 BgKin2Fence_CheckHitMask(BgKin2Fence* this) {
    s8 i;

    for (i=0; i<ARRAY_COUNT(this->colliderElements); i++)
        if (this->collider.elements[i].base.acElemFlags & ACELEM_HIT)
            return i;
    return -1;
}

static Vec3f sEyeSparkleSpawnPositions[][2] = {
    { { -215.0f, 139.0f, 50.0f }, { -193.0f, 139.0f, 50.0f } },
    { { -125.0f, 139.0f, 50.0f }, { -103.0f, 139.0f, 50.0f } },
    { { 103.0f, 139.0f, 50.0f }, { 125.0f, 139.0f, 50.0f } },
    { { 193.0f, 139.0f, 50.0f }, { 215.0f, 139.0f, 50.0f } },
};

void BgKin2Fence_SpawnEyeSparkles(BgKin2Fence* this, PlayState* play, s32 mask) {
    static Color_RGBA8 sPrimColor = { 255, 255, 255, 0 };
    static Color_RGBA8 sEnvColor = { 0, 128, 128, 0 };
    u8 i;
    Vec3f sp58;

    Matrix_SetTranslateRotateYXZ(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, &this->dyna.actor.shape.rot);

    for (i=0; i<2; i++) {
        Matrix_MultVec3f(&sEyeSparkleSpawnPositions[mask][i], &sp58);
        EffectSsKiraKira_SpawnDispersed(play, &sp58, &gZeroVec3f, &gZeroVec3f, &sPrimColor, &sEnvColor, 6000, -10);
    }
}

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 2000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 100, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

void BgKin2Fence_Init(Actor* thisx, PlayState* play) {
    BgKin2Fence* this = (BgKin2Fence*)thisx;
    
    CollisionHeader* header = NULL;
    u8 i;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    CollisionHeader_GetVirtual(&gOceanSpiderHouseFireplaceGrateCol, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
    Collider_InitJntSph(play, &this->collider);
    Collider_SetJntSph(play, &this->collider, &this->dyna.actor, &sJntSphInit, this->colliderElements);
    Matrix_SetTranslateRotateYXZ(this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, &this->dyna.actor.shape.rot);
    Matrix_Scale(this->dyna.actor.scale.x, this->dyna.actor.scale.y, this->dyna.actor.scale.z, MTXMODE_APPLY);

    this->spiderHouseMaskOrder[0] = 1;
    this->spiderHouseMaskOrder[1] = 3;
    this->spiderHouseMaskOrder[2] = 0;
    this->spiderHouseMaskOrder[3] = 2;
    this->spiderHouseMaskOrder[4] = 3;
    this->spiderHouseMaskOrder[5] = 1;

    for (i=0; i<4; i++)
        Collider_UpdateSpheres(i, &this->collider);

    if (Flags_GetSwitch(play, BG_KIN2_FENCE_GET_SWITCH_FLAG(&this->dyna.actor))) {
        BgKin2Fence_SetupDoNothing(this);
        return;
    }
    BgKin2Fence_SetupHandleMaskCode(this);
}

void BgKin2Fence_Destroy(Actor* thisx, PlayState* play) {
    BgKin2Fence* this = (BgKin2Fence*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    Collider_DestroyJntSph(play, &this->collider);
}

void BgKin2Fence_SetupHandleMaskCode(BgKin2Fence* this) {
    this->masksHit = 0;
    this->actionFunc = BgKin2Fence_HandleMaskCode;
}

void BgKin2Fence_HandleMaskCode(BgKin2Fence* this, PlayState* play) {
    s8 hitMask, nextMask;

    if (this->collider.base.acFlags & AC_HIT) {
        hitMask = BgKin2Fence_CheckHitMask(this);
        if (hitMask >= 0) {
            nextMask = this->spiderHouseMaskOrder[this->masksHit];
            if (hitMask == nextMask) {
                Audio_PlaySfxGeneral(NA_SE_SY_TRE_BOX_APPEAR, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
                this->masksHit += 1;
                BgKin2Fence_SpawnEyeSparkles(this, play, nextMask);
            } else {
                Audio_PlaySfxGeneral(NA_SE_SY_ERROR, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
                this->masksHit = 0;
            }
        }
        this->collider.base.acFlags &= ~AC_HIT;
        this->cooldownTimer = 5;
        if (this->masksHit > 5) {
            OnePointCutscene_Attention(play, &this->dyna.actor);
            Flags_SetSwitch(play, BG_KIN2_FENCE_GET_SWITCH_FLAG(&this->dyna.actor));
            BgKin2Fence_SetupWaitBeforeOpen(this);
            return;
        }
    } else {
        if (this->cooldownTimer > 0) {
            this->cooldownTimer -= 1;
            return;
        }
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    }
}

void BgKin2Fence_SetupWaitBeforeOpen(BgKin2Fence* this) {
    this->waitBeforeOpenTimer = 14;
    this->actionFunc = BgKin2Fence_WaitBeforeOpen;
}

void BgKin2Fence_WaitBeforeOpen(BgKin2Fence* this, PlayState* play) {
    if (this->waitBeforeOpenTimer > 0)
        this->waitBeforeOpenTimer -= 1;
    else BgKin2Fence_SetupRaiseFence(this);
}

void BgKin2Fence_SetupRaiseFence(BgKin2Fence* this) {
    this->actionFunc = BgKin2Fence_RaiseFence;
}

void BgKin2Fence_RaiseFence(BgKin2Fence* this, PlayState* play) {
    if (Math_StepToF(&this->dyna.actor.world.pos.y, this->dyna.actor.home.pos.y + 58.0f, 5.0f))
        BgKin2Fence_SetupDoNothing(this);
}
void BgKin2Fence_SetupDoNothing(BgKin2Fence* this) {
    this->actionFunc = BgKin2Fence_DoNothing;
    this->dyna.actor.world.pos.y = this->dyna.actor.home.pos.y + 58.0f;
}

void BgKin2Fence_DoNothing(BgKin2Fence* this, PlayState* play) { }

void BgKin2Fence_Update(Actor* thisx, PlayState* play) {
    BgKin2Fence* this = (BgKin2Fence*)thisx;

    this->actionFunc(this, play);
}

void BgKin2Fence_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, gOceanSpiderHouseFireplaceGrateDL);
}
