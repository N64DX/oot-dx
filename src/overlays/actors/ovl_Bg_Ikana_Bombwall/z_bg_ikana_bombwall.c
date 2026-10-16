/*
 * File: z_bg_ikana_bombwall.c
 * Overlay: ovl_Bg_Ikana_Bombwall
 * Description: Stone Tower Temple - Bombable Tan Floor Tile
 */

#include "z_bg_ikana_bombwall.h"

#include "libc64/qrand.h"
#include "z_lib.h"
#include "ichain.h"
#include "sys_matrix.h" 
#include "sys_math3d.h" 
#include "sfx.h"
#include "play_state.h"
#include "save.h"
#include "effect.h"
#include "array_count.h"

#include "z_bg_ikana_bombwall_cutscene_data.c"

#define FLAGS (ACTOR_FLAG_UCODE_POINT_LIGHT_ENABLED)

void BgIkanaBombwall_Init(Actor* thisx, struct PlayState* play);
void BgIkanaBombwall_Destroy(Actor* thisx, struct PlayState* play);
void BgIkanaBombwall_Update(Actor* thisx, struct PlayState* play);
void BgIkanaBombwall_Draw(Actor* thisx, struct PlayState* play);

void BgIkanaBombwall_80BD4F2C(BgIkanaBombwall* this, struct PlayState* play);
void BgIkanaBombwall_80BD4FF8(BgIkanaBombwall* this);
void BgIkanaBombwall_80BD503C(BgIkanaBombwall* this, struct PlayState* play);
void BgIkanaBombwall_80BD5118(BgIkanaBombwall* this);
void BgIkanaBombwall_80BD5134(BgIkanaBombwall* this, struct PlayState* play);

ActorProfile Bg_Ikana_Bombwall_Profile = {
    /**/ ACTOR_BG_IKANA_BOMBWALL,
    /**/ ACTORCAT_BG,
    /**/ FLAGS,
    /**/ OBJECT_IKANA_OBJ,
    /**/ sizeof(BgIkanaBombwall),
    /**/ BgIkanaBombwall_Init,
    /**/ BgIkanaBombwall_Destroy,
    /**/ BgIkanaBombwall_Update,
    /**/ BgIkanaBombwall_Draw,
};

static ColliderCylinderInit sCylinderInit1 = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x40000048, 0x00, 0x00 },
        ATELEM_NONE | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 80, 80, 0, { 0, 0, 0 } },
};

static ColliderCylinderInit sCylinderInit2 = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0x40000048, 0x00, 0x00 },
        ATELEM_NONE | ATELEM_SFX_NORMAL,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 50, 20, 0, { 0, 0, 0 } },
};

s16 D_80BD52C8[] = { 32, 21, 15, 8 };

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 500, ICHAIN_CONTINUE),
    ICHAIN_VEC3F_DIV1000(scale, 1000, ICHAIN_STOP),
};

Gfx* D_80BD52E0[] = {
    object_ikana_obj_DL_000378,
    object_ikana_obj_DL_000048,
};

void BgIkanaBombwall_80BD4720(BgIkanaBombwall* this, PlayState* play) {
    Vec3f pos, velocity, posOffset, velocityOffset;
    f32 offsetPosX, offsetPosY;
    s16 scale, phi_s0, phi_t0, gravity;
    u8 i;

    Matrix_Push();
    Matrix_RotateY(BINANG_TO_RAD(this->dyna.actor.shape.rot.y), MTXMODE_NEW);
    offsetPosX = 0.0f;
    offsetPosY = 0.0f;

    for (i=0; i<30; i++) {
        offsetPosX += 60.0f + (Rand_ZeroOne() * 20.0f);
        if (offsetPosX > 75.0f)
            offsetPosX -= 150.0f;

        offsetPosY += 5;
        posOffset.x = offsetPosX;
        posOffset.y = offsetPosY;
        posOffset.z = (Rand_ZeroOne() * 20.0f) - 10.0f;
        velocityOffset.x = ((Rand_ZeroOne() - 0.5f) * 5.0f) + (offsetPosX * (4.0f / 75.0f));
        velocityOffset.y = (Rand_ZeroOne() * 7.0f) - 2.0f;
        velocityOffset.z = (Rand_ZeroOne() * 4.0f) - 2.0f;
        Matrix_MultVec3f(&posOffset, &pos);
        Matrix_MultVec3f(&velocityOffset, &velocity);
        pos.x += this->dyna.actor.world.pos.x;
        pos.y += this->dyna.actor.world.pos.y;
        pos.z += this->dyna.actor.world.pos.z;

        if ((i & 3) == 0) {
            phi_s0 = 32;
            func_80033480(play, &pos, 50.0f, 2, 100, 120, 1);
        } else phi_s0 = 64;

        if (i & 1) {
            phi_s0 |= 1;
            phi_t0 = 1;
        } else phi_t0 = 0;

        scale = D_80BD52C8[i & (ARRAY_COUNT(D_80BD52C8) - 1)];

        if (scale >= 16)
            gravity = -550;
        else gravity = -450;

        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, gravity, phi_s0, 30, 0, 0, scale, phi_t0, 0, 50, -1, OBJECT_IKANA_OBJ, object_ikana_obj_DL_000288);
    }

    Matrix_Pop();
}

void BgIkanaBombwall_80BD4A14(BgIkanaBombwall* this, PlayState* play) {
    Vec3f pos, velocity;
    f32 temp_fs0, temp_fs1, temp_fs3;
    s16 scale, angle, phi_v0;
    s32 gravity, phi_v1;
    u8 i;

    temp_fs3 = 0.0f;

    for (i=0, angle=0; i<28; i++, angle+=0x924) {
        temp_fs3 += 20.0f + (Rand_ZeroOne() * 10.0f);
        if (temp_fs3 > 60.0f)
            temp_fs3 -= 60.0f;

        temp_fs0 = Math_SinS(angle);
        temp_fs1 = Math_CosS(angle);
        pos.x = (temp_fs0 * temp_fs3) + this->dyna.actor.world.pos.x;
        pos.y = this->dyna.actor.world.pos.y;
        pos.z = (temp_fs1 * temp_fs3) + this->dyna.actor.world.pos.z;
        velocity.x = ((Rand_ZeroOne() - 0.5f) * 3.0f * temp_fs0) + ((temp_fs0 * temp_fs3) * (1.0f / 30.0f));
        velocity.y = (Rand_ZeroOne() * 18.0f) + 4.0f;
        velocity.z = ((Rand_ZeroOne() - 0.5f) * 3.0f * temp_fs1) + ((temp_fs1 * temp_fs3) * (1.0f / 30.0f));
        scale = (Rand_Next() & 3) + (i >> 1) + 6;

        if ((i & 3) == 0)
            phi_v0 = 32;
        else phi_v0 = 64;

        if (scale >= 15) {
            phi_v0 |= 1;
            phi_v1 = 1;
            gravity = -550;
        } else {
            phi_v1 = 0;
            gravity = -400;
        }

        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, gravity, phi_v0, 30, 0, 0, scale, phi_v1, 0, 50, -1, OBJECT_IKANA_OBJ, object_ikana_obj_DL_000288);

        if ((i & 3) == 0) {
            pos.y += 30.0f;
            func_80033480(play, &pos, 50.0f, 2, 70, 110, 1);
        }
    }
}

void BgIkanaBombwall_Init(Actor* thisx, PlayState* play) {
    BgIkanaBombwall* this = (BgIkanaBombwall*)thisx;

    CollisionHeader* header = NULL;
    s32 sp2C = BGIKANABOMBWALL_GET_100(&this->dyna.actor);
    CollisionHeader* colHeader;
    ColliderCylinderInit* cylinderInit;

    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    DynaPolyActor_Init(&this->dyna, 0);
    Collider_InitCylinder(play, &this->collider);

    if (Flags_GetSwitch(play, BGIKANABOMBWALL_GET_SWITCH_FLAG(&this->dyna.actor))) {
        Actor_Kill(&this->dyna.actor);
        return;
    }

    if (sp2C == 0) {
        colHeader = &object_ikana_obj_Colheader_000488;
        cylinderInit = &sCylinderInit1;
    } else {
        colHeader = &object_ikana_obj_Colheader_000128;
        cylinderInit = &sCylinderInit2;
    }

    this->csId = this->dyna.actor.home.rot.z;
    this->dyna.actor.home.rot.z = this->dyna.actor.world.rot.z = this->dyna.actor.shape.rot.z = 0;
    if (this->csId > ARRAY_COUNT(cutscenes))
        this->csId = 0;

    CollisionHeader_GetVirtual(colHeader, &header);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, header);
    Collider_SetCylinder(play, &this->collider, &this->dyna.actor, cylinderInit);
    Collider_UpdateCylinder(&this->dyna.actor, &this->collider);

    this->actionFunc = BgIkanaBombwall_80BD4F2C;
}

void BgIkanaBombwall_Destroy(Actor* thisx, PlayState* play) {
    BgIkanaBombwall* this = (BgIkanaBombwall*)thisx;

    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    Collider_DestroyCylinder(play, &this->collider);
}

s32 BgIkanaBombwall_80BD4E44(BgIkanaBombwall* this) {
    f32 range = BGIKANABOMBWALL_GET_100(&this->dyna.actor) ? 80.0f : 75.0f; 

    if (this->collider.base.acFlags & AC_HIT)
        if (this->collider.base.ac != NULL && Math3D_Vec3fDistSq(&this->dyna.actor.world.pos, &this->collider.base.ac->world.pos) < SQ(range))
            return true;
    return false;
}

void BgIkanaBombwall_80BD4F2C(BgIkanaBombwall* this, PlayState* play) {
    if (BgIkanaBombwall_80BD4E44(this))
        BgIkanaBombwall_80BD4FF8(this);
    else CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
}

void BgIkanaBombwall_80BD4FF8(BgIkanaBombwall* this) {
    this->dyna.actor.flags |= ACTOR_FLAG_UPDATE_CULLING_DISABLED;
    this->actionFunc = BgIkanaBombwall_80BD503C;
}

void BgIkanaBombwall_80BD503C(BgIkanaBombwall* this, PlayState* play) {
    this->collider.base.acFlags &= ~AC_HIT;
    if (this->csId > 0 && cutscenes[this->csId] != NULL) {
        Cutscene_SetScript(play, cutscenes[this->csId - 1]);
        gSaveContext.cutsceneTrigger = 1;
        Player_SetCsActionWithHaltedActors(play, NULL, PLAYER_CSACTION_49);
    }
    if (!BGIKANABOMBWALL_GET_100(&this->dyna.actor))
        BgIkanaBombwall_80BD4720(this, play);
    else BgIkanaBombwall_80BD4A14(this, play);
    this->dyna.actor.draw = NULL;
    SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.world.pos, 60, NA_SE_EV_WALL_BROKEN);
    Flags_SetSwitch(play, BGIKANABOMBWALL_GET_SWITCH_FLAG(&this->dyna.actor));
    if (!BGIKANABOMBWALL_GET_100(&this->dyna.actor))
        DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
    BgIkanaBombwall_80BD5118(this);
}

void BgIkanaBombwall_80BD5118(BgIkanaBombwall* this) {
    this->unk_1AC = 30;
    this->actionFunc = BgIkanaBombwall_80BD5134;
}

void BgIkanaBombwall_80BD5134(BgIkanaBombwall* this, PlayState* play) {
    if (!BGIKANABOMBWALL_GET_100(&this->dyna.actor)) {
        this->unk_1AC--;
        if (this->unk_1AC <= 0)
            Actor_Kill(&this->dyna.actor);
    } else if (this->csId > 0) {
        if (gSaveContext.cutsceneTrigger == 0 && play->csCtx.state == CS_STATE_IDLE)
            Actor_Kill(&this->dyna.actor);
    } else Actor_Kill(&this->dyna.actor);
}

void BgIkanaBombwall_Update(Actor* thisx, PlayState* play) {
    BgIkanaBombwall* this = (BgIkanaBombwall*)thisx;

    this->actionFunc(this, play);
}

void BgIkanaBombwall_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, D_80BD52E0[BGIKANABOMBWALL_GET_100(thisx)]);
}
