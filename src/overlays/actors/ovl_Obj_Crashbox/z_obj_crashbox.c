/*
 * File: z_obj_crashbox.c
 * Overlay: ovl_Obj_Crashbox
 * Description: Destructible box in Dodongo's Cavern (Spaceworld '97)
 */
#include "z_obj_crashbox.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sfx.h"
#include "sys_matrix.h"
#include "z_lib.h"
#include "play_state.h"
#include "effect.h"

#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"
#include "assets/objects/object_crashbox/object_crashbox.h"

#define FLAGS 0

void ObjCrashbox_Init(Actor* thisx, struct PlayState* play);
void ObjCrashbox_Destroy(Actor* thisx, struct PlayState* play);
void ObjCrashbox_Update(Actor* thisx, struct PlayState* play);
void ObjCrashbox_Draw(Actor* thisx, struct PlayState* play);

void ObjCrashbox_Wait(ObjCrashbox* this, struct PlayState* play);

ActorProfile Obj_Crashbox_Profile = {
    /**/ ACTOR_OBJ_CRASHBOX,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_CRASHBOX,
    /**/ sizeof(ObjCrashbox),
    /**/ ObjCrashbox_Init,
    /**/ ObjCrashbox_Destroy,
    /**/ ObjCrashbox_Update,
    /**/ ObjCrashbox_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK2,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xFFCFFFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 50, 70, 0, { 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 3000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 1000, ICHAIN_STOP),
};

static f32 sObjCrashboxSize[] = { 0.5f, 0.75f, 1.0f };

void ObjCrashbox_Init(Actor* thisx, PlayState* play) {
    ObjCrashbox* this = (ObjCrashbox*)thisx;
    CollisionHeader* colHeader = NULL;

    this->timer = 5;

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &sCylinderInit);

    DynaPolyActor_Init(&this->dyna, 1);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    CollisionHeader_GetVirtual(&gCrashboxCol, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    this->dyna.actor.velocity.x = this->dyna.actor.velocity.y = this->dyna.actor.velocity.z = 0.0f;
    this->dyna.actor.gravity = -1.0f;
    this->dyna.actor.colChkInfo.mass = MASS_IMMOVABLE;
    this->actionFunc = ObjCrashbox_Wait;

    this->type = (this->dyna.actor.params >> 4) & 1;
    Actor_SetScale(&this->dyna.actor, sObjCrashboxSize[this->dyna.actor.params & 3]);
}

void ObjCrashbox_Destroy(Actor* thisx, PlayState* play) {
    ObjCrashbox* this = (ObjCrashbox*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
}

static Vec3f posOffsets[] = {
    { 60.0f, 0.0f, 0.0f },   { -60.0f, 0.0f, 0.0f },   { 0.0f, 0.0f, 60.0f },   { 0.0f, 0.0f, -60.0f },
    { 60.0f, 60.0f, 0.0f },  { -60.0f, 60.0f, 0.0f },  { 0.0f, 60.0f, 60.0f },  { 0.0f, 60.0f, -60.0f },
    { 60.0f, 120.0f, 0.0f }, { -60.0f, 120.0f, 0.0f }, { 0.0f, 120.0f, 60.0f }, { 0.0f, 120.0f, -60.0f },
};

void ObjCrashbox_Break(ObjCrashbox* this, PlayState* play) {
    s32 i, j;
    Vec3f velocity, pos;
    s16 arg5, arg9;
    Actor* thisx = &this->dyna.actor;
    f32 sin = Math_SinS(thisx->shape.rot.y);
    f32 cos = Math_CosS(thisx->shape.rot.y);
    f32 tmp1, tmp2;
    f32 scale;

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
            arg9 *= 0.75f;
            arg5 = (arg9 > 20) ? 32 : 64;

            if (Rand_ZeroOne() < 5.0f)
                arg5 |= 1;

            EffectSsKakera_Spawn(play, &pos, &velocity, &thisx->world.pos, -650, arg5, 20, 20, 0, arg9, 2, 32, 100, KAKERA_COLOR_NONE, OBJECT_GAMEPLAY_DANGEON_KEEP, gBrownFragmentDL);
        }
    }

    for (i=0; i<ARRAY_COUNT(posOffsets); i++) {
        Vec3f dustPos = this->dyna.actor.world.pos;
        Vec3f dustVel = { 0.0f, -4.0f, 0.0f };
        Vec3f dustAccel = { 0.0f, -0.1f, 0.0f };

        dustPos.x += posOffsets[i].x + (Rand_ZeroOne() * 10.0f);
        dustPos.y += posOffsets[i].y + (Rand_ZeroOne() * 10.0f);
        dustPos.z += posOffsets[i].z + (Rand_ZeroOne() * 10.0f);

        scale = (s16)((Rand_ZeroOne() * 1000) * 0.2f) + 1000;

        func_800287AC(play, &dustPos, &dustVel, &dustAccel, scale, 20, 100);
    }
}

void ObjCrashbox_Wait(ObjCrashbox* this, PlayState* play) {
    u32 dmgFlags = DMG_HAMMER_SWING | DMG_HAMMER_JUMP;
    if (this->type == OBJ_CRASHBOX_ALL)
        dmgFlags |= DMG_EXPLOSIVE;

    if (((this->collider.base.acFlags & AC_HIT) && (this->collider.elem.acHitElem->atDmgInfo.dmgFlags & dmgFlags) && (this->dyna.actor.bgCheckFlags & BGCHECKFLAG_GROUND))) {
        ObjCrashbox_Break(this, play);
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.world.pos, 80, NA_SE_EV_WOODBOX_BREAK);
        Actor_Kill(&this->dyna.actor);
    } else this->collider.base.acFlags &= ~AC_HIT;
}

void ObjCrashbox_Update(Actor* thisx, PlayState* play) {
    ObjCrashbox* this = (ObjCrashbox*)thisx;

    if (this->timer > 0)
        this->timer--;

    if (this->actionFunc != NULL)
        this->actionFunc(this, play);

    CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
    Actor_MoveXZGravity(&this->dyna.actor);
    Actor_UpdateBgCheckInfo(play, &this->dyna.actor, 7.5f, 35.0f, 0.0f, 0xC5);
    Collider_UpdateCylinder(&this->dyna.actor, &this->collider);

    if (this->timer == 0 && (this->dyna.actor.bgCheckFlags & BGCHECKFLAG_GROUND_TOUCH))
        Actor_PlaySfx(&this->dyna.actor, NA_SE_EV_BLOCK_BOUND);
}

void ObjCrashbox_Draw(Actor* thisx, PlayState* play) {
    ObjCrashbox* this = (ObjCrashbox*)thisx;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    Gfx_SetupDL_25Opa(play->state.gfxCtx);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, play->state.gfxCtx,  __FILE__, __LINE__);

    if (this->type == OBJ_CRASHBOX_HAMMER) {
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 0, 0, 255);
    } else {
        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, 255);
    }

    gSPDisplayList(POLY_OPA_DISP++, gCrashboxDL);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
