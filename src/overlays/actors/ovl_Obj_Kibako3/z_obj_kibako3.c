/*
 * File: z_obj_kibako3.c
 * Overlay: ovl_Obj_Kibako3
 * Description: Large crate
 */

#include "z_obj_kibako3.h"
#include "overlays/effects/ovl_Effect_Ss_Kakera/z_eff_ss_kakera.h"

#include "libc64/qrand.h"
#include "ichain.h"
#include "printf.h"
#include "sfx.h"
#include "translation.h"
#include "z_en_item00.h"
#include "z_lib.h"
#include "effect.h"
#include "play_state.h"

#include "assets/objects/object_kibako2/object_kibako2.h"

#define FLAGS 0

void ObjKibako3_Init(Actor* thisx, PlayState* play);
void ObjKibako3_Destroy(Actor* thisx, PlayState* play);
void ObjKibako3_Update(Actor* thisx, PlayState* play);
void ObjKibako3_Draw(Actor* thisx, PlayState* play);
void ObjKibako3_Idle(ObjKibako3* this, PlayState* play);
void ObjKibako3_Kill(ObjKibako3* this, PlayState* play);

ActorProfile Obj_Kibako3_Profile = {
    /**/ ACTOR_OBJ_KIBAKO3,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_KIBAKO2,
    /**/ sizeof(ObjKibako3),
    /**/ ObjKibako3_Init,
    /**/ ObjKibako3_Destroy,
    /**/ ObjKibako3_Update,
    /**/ ObjKibako3_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x40000040, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 31, 48, 0, { 0, 0, 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 3000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 1000, ICHAIN_STOP),
};

void ObjKibako3_InitCollider(Actor* thisx, PlayState* play) {
    ObjKibako3* this = (ObjKibako3*)thisx;

    Collider_InitCylinder(play, &this->collider);
    Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &sCylinderInit);
    Collider_UpdateCylinder(&this->dyna.actor, &this->collider);
}

void ObjKibako3_Break(ObjKibako3* this, PlayState* play) {
    Vec3f* thisPos;
    Vec3f pos;
    Vec3f velocity;
    s16 angle;
    s32 i;

    thisPos = &this->dyna.actor.world.pos;
    for (i=0, angle=0; i<0x10; i++, angle += 0x4E20) {
        f32 sn = Math_SinS(angle);
        f32 cs = Math_CosS(angle);
        f32 temp_rand;
        s32 phi_s0;

        temp_rand = Rand_ZeroOne() * 30.0f;
        pos.x = sn * temp_rand;
        pos.y = (Rand_ZeroOne() * 10.0f) + 2.0f;
        pos.z = cs * temp_rand;
        velocity.x = pos.x * 0.2f;
        velocity.y = (Rand_ZeroOne() * 10.0f) + 2.0f;
        velocity.z = pos.z * 0.2f;
        pos.x += thisPos->x;
        pos.y += thisPos->y;
        pos.z += thisPos->z;
        temp_rand = Rand_ZeroOne();
        if (temp_rand < 0.05f)
            phi_s0 = 0x60;
        else if (temp_rand < 0.7f)
            phi_s0 = 0x40;
        else phi_s0 = 0x20;
        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, -200, phi_s0, 28, 2, 0, (Rand_ZeroOne() * 30.0f) + 5.0f, 0, 0, 70, KAKERA_COLOR_NONE, OBJECT_KIBAKO2, gLargeCrateFragmentDL);
    }
    func_80033480(play, thisPos, 90.0f, 6, 100, 160, 1);
}

void ObjKibako3_Init(Actor* thisx, PlayState* play) {
    ObjKibako3* this = (ObjKibako3*)thisx;
    CollisionHeader* colHeader = NULL;
    u32 bgId;

    DynaPolyActor_Init(&this->dyna, 0);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    ObjKibako3_InitCollider(thisx, play);
    CollisionHeader_GetVirtual(&gLargeCrateCol, &colHeader);
    bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
    this->dyna.bgId = bgId;
    this->actionFunc = ObjKibako3_Idle;
    this->dyna.actor.home.rot.z = this->dyna.actor.world.rot.z = this->dyna.actor.shape.rot.z = this->dyna.actor.world.rot.x = this->dyna.actor.shape.rot.x = 0;
}

void ObjKibako3_Destroy(Actor* thisx, PlayState* play) {
    ObjKibako3* this = (ObjKibako3*)thisx;

    Collider_DestroyCylinder(play, &this->collider);
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void ObjKibako3_Idle(ObjKibako3* this, PlayState* play) {
    if ((this->collider.base.acFlags & AC_HIT) || this->dyna.actor.home.rot.z != 0 || func_80033684(play, &this->dyna.actor) != NULL) {
        ObjKibako3_Break(this, play);
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.world.pos, 20, NA_SE_EV_WOODBOX_BREAK);
        this->dyna.actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
        DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
        this->dyna.actor.draw = NULL;
        this->actionFunc = ObjKibako3_Kill;
    } else if (this->dyna.actor.xzDistToPlayer < 600.0f)
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
}

void ObjKibako3_Kill(ObjKibako3* this, PlayState* play) {
    if (PARAMS_GET_NOSHIFT(this->dyna.actor.params, 15, 1) == 0)
        Actor_Spawn(&play->actorCtx, play, ACTOR_EN_FR, this->dyna.actor.world.pos.x, this->dyna.actor.world.pos.y, this->dyna.actor.world.pos.z, this->dyna.actor.world.pos.y, this->dyna.actor.shape.rot.y, 0, this->dyna.actor.params);
    Actor_Kill(&this->dyna.actor);
}

void ObjKibako3_Update(Actor* thisx, PlayState* play) {
    ObjKibako3* this = (ObjKibako3*)thisx;

    this->actionFunc(this, play);
}

void ObjKibako3_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, gLargeCrateDL);
}
