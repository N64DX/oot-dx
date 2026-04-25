/*
 * File: z_bg_breakwall2.c
 * Overlay: Bg_Breakwall2
 * Description: Bombable Wall (Spaceworld '97)
 */

#include "z_bg_breakwall2.h"

#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "rand.h"
#include "regs.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"

#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "assets/objects/object_bwall2/object_bwall2.h"
#include "assets/objects/object_kingdodongo/object_kingdodongo.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"

#define FLAGS ACTOR_FLAG_UPDATE_CULLING_DISABLED

typedef struct BombableWall2Info {
    CollisionHeader* colHeader;
    Gfx* dList;
    Gfx* tunnelDList;
    s8 colType;
} BombableWall2Info;

void BgBreakwall2_Init(Actor* thisx, PlayState* play);
void BgBreakwall2_Destroy(Actor* thisx, PlayState* play);
void BgBreakwall2_Update(Actor* thisx, PlayState* play);
void BgBreakwall2_Draw(Actor* thisx, PlayState* play);

void BgBreakwall2_DoNothing(BgBreakwall2* this, PlayState* play);
void BgBreakwall2_SetupWait(BgBreakwall2* this, PlayState* play);
void BgBreakwall2_Wait(BgBreakwall2* this, PlayState* play);
void BgBreakwall2_LavaCoverMove(BgBreakwall2* this, PlayState* play);

ActorProfile Bg_Breakwall2_Profile = {
    /**/ ACTOR_BG_BREAKWALL2,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(BgBreakwall2),
    /**/ BgBreakwall2_Init,
    /**/ BgBreakwall2_Destroy,
    /**/ BgBreakwall2_Update,
    /**/ NULL,
};

static ColliderQuadInit sQuadInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER | AC_TYPE_OTHER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_QUAD,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000048, 0x00, 0x00 },
        { 0x00000048, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { { { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f }, { 0.0f, 0.0f, 0.0f } } },
};

static BombableWall2Info sBombableWallInfo[] = {
    { &gDCBombableWallCol,            gDCBombableWallDL,            gDCTunnel1, 0 },
    { &gDCBombableWallCol,            gDCBombableWallDL,            gDCTunnel2, 0 },
    { &gDCBombableWallCol,            gDCBombableWallDL,            gDCTunnel3, 0 },
    { &object_kingdodongo_Col_0264A8, object_kingdodongo_DL_025BD0, NULL,       1 },
    { &object_kingdodongo_Col_025B64, NULL,                         NULL,      -1 },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 400, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 400, ICHAIN_STOP),
};

void BgBreakwall2_SetupAction(BgBreakwall2* this, BgBreakwall2ActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void BgBreakwall2_Init(Actor* thisx, PlayState* play) {
    BgBreakwall2* this = (BgBreakwall2*)thisx;
    s32 wallType = ((this->dyna.actor.params >> 13) & 3) & 0xFF;

    if ((this->dyna.actor.params >> 6) & 1)
        wallType = BWALL_KD_LAVA_COVER;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    this->bombableWallDList = sBombableWallInfo[wallType].dList;
    this->tunnelDList = sBombableWallInfo[wallType].tunnelDList;
    this->colType = sBombableWallInfo[wallType].colType;

    if (wallType <= BWALL_DC_3)
        Actor_SetScale(&this->dyna.actor, 1.0f);

    if (this->colType == 1)
        this->dyna.actor.world.rot.x = 0x4000;

    if (this->bombableWallDList != NULL) {
        if (Flags_GetSwitch(play, this->dyna.actor.params & 0x3F)) {
            if (wallType > BWALL_DC_3) {
                Actor_Kill(&this->dyna.actor);
                return;
            }
        }

        ActorShape_Init(&this->dyna.actor.shape, 0.0f, NULL, 0.0f);
        Collider_InitQuad(play, &this->collider);
        Collider_SetQuad(play, &this->collider, &this->dyna.actor, &sQuadInit);
    } else if (wallType != BWALL_KD_LAVA_COVER)
        this->dyna.actor.world.pos.y -= 40.0f;

    this->bankIndex = (wallType >= BWALL_KD_FLOOR) ? Object_GetSlot(&play->objectCtx, OBJECT_KINGDODONGO) : Object_GetSlot(&play->objectCtx, OBJECT_BWALL2);

    if (this->bankIndex < 0)
        Actor_Kill(&this->dyna.actor);
    else BgBreakwall2_SetupAction(this, BgBreakwall2_SetupWait);
}

void BgBreakwall2_Destroy(Actor* thisx, PlayState* play) {
    BgBreakwall2* this = (BgBreakwall2*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgBreakwall2_FloorBreak(BgBreakwall2* this, PlayState* play) {
    s32 i;
    s32 j;
    Vec3f velocity;
    Vec3f pos;
    s16 arg5;
    Actor* thisx = &this->dyna.actor;
    f32 sin = Math_SinS(thisx->shape.rot.y);
    f32 cos = Math_CosS(thisx->shape.rot.y);
    f32 tmp1;
    f32 tmp2;
    s16 arg9;

    pos.y = thisx->world.pos.y + 10.0f;

    for (i=0; i<5; i++) {
        for (j=0; j<5; j++) {
            tmp1 = 24 * (i - 2);
            tmp2 = 24 * (j - 2);

            pos.x = (tmp2 * sin) + (tmp1 * cos) + thisx->world.pos.x;
            pos.z = (tmp2 * cos) - (tmp1 * sin) + thisx->world.pos.z;

            tmp1 = 8.0f * Rand_ZeroOne() * (i - 2);
            tmp2 = 8.0f * Rand_ZeroOne() * (j - 2);

            velocity.x = (tmp2 * sin) + (tmp1 * cos);
            velocity.y = 30.0f * Rand_ZeroOne();
            velocity.z = (tmp2 * cos) - (tmp1 * sin);

            arg9 = ((Rand_ZeroOne() - 0.5f) * 11.0f * 1.4f) + 11.0f;

            arg5 = (((i == 0) || (i == 4)) && ((j == 0) || (j == 4))) ? 65 : 64;

            EffectSsKakera_Spawn(play, &pos, &velocity, &thisx->world.pos, -550, arg5, 15, 15, 0, arg9, 2, 16, 100, KAKERA_COLOR_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP, gBrownFragmentDL);
        }
    }
}

void BgBreakwall2_LargeWallBreak(BgBreakwall2* this, PlayState* play) {
    s32 i;
    s32 j;
    Vec3f velocity;
    Vec3f pos;
    s16 arg5;
    Actor* thisx = &this->dyna.actor;
    f32 sin = Math_SinS(thisx->shape.rot.y);
    f32 cos = Math_CosS(thisx->shape.rot.y);
    f32 tmp1;
    f32 tmp2;
    s16 arg9;

    for (i=0; i<5; i++) {
        pos.y = (24 * i) + thisx->world.pos.y;
        for (j=0; j<5; j++) {
            tmp1 = 28 * (j - 2);

            pos.x = (tmp1 * cos) + thisx->world.pos.x;
            pos.z = -(tmp1 * sin) + thisx->world.pos.z;

            tmp1 = 6.0f * Rand_ZeroOne() * (j - 2);
            tmp2 = 6.0f * Rand_ZeroOne();

            velocity.x = (tmp2 * sin) + (tmp1 * cos);
            velocity.y = 34.0f * Rand_ZeroOne();
            velocity.z = (tmp2 * cos) - (tmp1 * sin);

            arg9 = ((Rand_ZeroOne() - 0.5f) * 14.0f * 1.6f) + 14.0f;
            arg5 = (arg9 > 20) ? 32 : 64;

            if (Rand_ZeroOne() < 5.0f)
                arg5 |= 1;

            EffectSsKakera_Spawn(play, &pos, &velocity, &thisx->world.pos, -650, arg5, 20, 20, 0, arg9, 2, 32, 100, KAKERA_COLOR_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP, gBrownFragmentDL);
        }
    }
}

void BgBreakwall2_DoNothing(BgBreakwall2* this, PlayState* play) { }

/**
 * Sets up the collision model as well is the object dependency and action function to use.
 */
void BgBreakwall2_SetupWait(BgBreakwall2* this, PlayState* play) {
    if (Object_IsLoaded(&play->objectCtx, this->bankIndex)) {
        CollisionHeader* colHeader = NULL;
        s32 wallType = ((this->dyna.actor.params >> 13) & 3) & 0xFF;

        if ((this->dyna.actor.params >> 6) & 1)
            wallType = BWALL_KD_LAVA_COVER;

        this->dyna.actor.objectSlot = this->bankIndex;
        Actor_SetObjectDependency(play, &this->dyna.actor);
        this->dyna.actor.flags &= ~0x10;
        this->dyna.actor.draw = BgBreakwall2_Draw;

        if (wallType != BWALL_KD_LAVA_COVER && Flags_GetSwitch(play, this->dyna.actor.params & 0x3F))
            BgBreakwall2_SetupAction(this, BgBreakwall2_DoNothing);
        else {
            CollisionHeader_GetVirtual(sBombableWallInfo[wallType].colHeader, &colHeader);
            this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

            if (wallType == BWALL_KD_LAVA_COVER)
                BgBreakwall2_SetupAction(this, BgBreakwall2_LavaCoverMove);
            else BgBreakwall2_SetupAction(this, BgBreakwall2_Wait);
        }
    }
}

/**
 * Checks for an explosion using quad collision. If the wall or floor is exploded then it will spawn fragments and despawn itself.
 */
void BgBreakwall2_Wait(BgBreakwall2* this, PlayState* play) {
    if (this->collider.base.acFlags & 2) {
        Vec3f effectPos;
        s32 wallType = ((this->dyna.actor.params >> 13) & 3) & 0xFF;

        if ((this->dyna.actor.params >> 6) & 1)
            wallType = BWALL_KD_LAVA_COVER;

        DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
        effectPos.y = effectPos.z = effectPos.x = 0.0f;

        if (this->dyna.actor.world.rot.x == 0)
            effectPos.y = 55.0f;
        else {
            effectPos.z = 25.0f;
            effectPos.y = -10.0f;
        }

        if (wallType >= BWALL_DC_1 && wallType <= BWALL_DC_3)
            BgBreakwall2_FloorBreak(this, play);
        else if (wallType == BWALL_KD_FLOOR)
            BgBreakwall2_LargeWallBreak(this, play);

        Flags_SetSwitch(play, this->dyna.actor.params & 0x3F);

        if (wallType == BWALL_KD_FLOOR)
            Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_EXPLOSION);
        else Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_WALL_BROKEN);

        if (this->dyna.actor.params < 0)
            Audio_PlaySfxGeneral(NA_SE_SY_TRE_BOX_APPEAR, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);

        if (wallType <= BWALL_DC_3)
            this->actionFunc = BgBreakwall2_DoNothing;
        else Actor_Kill(&this->dyna.actor);
    }
}

/**
 * Moves the actor's y position to cover the lava floor in King Dodongo's lair after he is defeated so the player is no longer hurt by the lava.
 */
void BgBreakwall2_LavaCoverMove(BgBreakwall2* this, PlayState* play) {
    Math_StepToF(&this->dyna.actor.world.pos.y, KREG(80) + this->dyna.actor.home.pos.y, 1.0f);
}

void BgBreakwall2_Update(Actor* thisx, PlayState* play) {
    BgBreakwall2* this = (BgBreakwall2*)thisx;

    this->actionFunc(this, play);
}

void BgBreakwall2_DrawTunnels(BgBreakwall2* this, PlayState* play) {
    if (this->tunnelDList != NULL) {
        OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

        Gfx_SetupDL_25Opa(play->state.gfxCtx);
        gSPMatrix(POLY_OPA_DISP++, MATRIX_FINALIZE(play->state.gfxCtx, __FILE__, __LINE__), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, this->tunnelDList);

        CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    }
}

/**
 * These are the quads used for the wall and floor collision. These are used for the detecting when a bomb explosion has collided with a wall, and can be adjusted for different wall or floor sizes.
 */
static Vec3f sColQuadList[][4] = {
    { { 80.0f, 160.0f, 10.0f }, { -80.0f, 160.0f, 10.0f }, { 80.0f, 0.0f, 10.0f }, { -80.0f, 0.0f, 10.0f } },
    { { 10.0f, 0.0f, 10.0f }, { -10.0f, 0.0f, 10.0f }, { 10.0f, 0.0f, -10.0f }, { -10.0f, 0.0f, -10.0f } },
};

void BgBreakwall2_Draw(Actor* thisx, PlayState* play) {
    BgBreakwall2* this = (BgBreakwall2*)thisx;

    BgBreakwall2_DrawTunnels(this, play);
    if (this->actionFunc != BgBreakwall2_DoNothing && this->bombableWallDList != NULL) {
        OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

        Gfx_SetupDL_25Opa(play->state.gfxCtx);
        gSPMatrix(POLY_OPA_DISP++, MATRIX_FINALIZE(play->state.gfxCtx, __FILE__, __LINE__), G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
        gSPDisplayList(POLY_OPA_DISP++, this->bombableWallDList);

        if (this->colType >= 0) {
            Vec3f colQuad[4];
            Vec3f* src = &sColQuadList[this->colType][0];
            Vec3f* dst = &colQuad[0];
            s32 i;

            for (i=0; i<4; i++)
                Matrix_MultVec3f(src++, dst++);

            Collider_SetQuadVertices(&this->collider, &colQuad[0], &colQuad[1], &colQuad[2], &colQuad[3]);
            CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        }

        CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    }
}
