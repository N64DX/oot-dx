/*
 * File: z_bg_wood_pillar.c
 * Overlay: ovl_Bg_Wood_Pillar
 * Description: Wooden Pillar in Woodfall
 */

#include "z_bg_wood_pillar.h"

#include "ichain.h"
#include "z_lib.h"
#include "play_state.h"

#include "assets/objects/object_wood_pillar/object_wood_pillar.h"

#define FLAGS 0

void BgWoodPillar_Init(Actor* thisx, struct PlayState* play);
void BgWoodPillar_Destroy(Actor* thisx, struct PlayState* play);
void BgWoodPillar_Update(Actor* thisx, PlayState* play);
void BgWoodPillar_Draw(Actor* thisx, struct PlayState* play);

typedef struct BgWoodPillarInfo {
    /* 0x00 */ f32 scaleXZ;
    /* 0x04 */ f32 scaleY;
} BgWoodPillarInfo; // size = 0x8

ActorProfile Bg_Wood_Pillar_Profile = {
    /**/ ACTOR_BG_WOOD_PILLAR,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_WOOD_PILLAR,
    /**/ sizeof(BgWoodPillar),
    /**/ BgWoodPillar_Init,
    /**/ BgWoodPillar_Destroy,
    /**/ BgWoodPillar_Update,
    /**/ BgWoodPillar_Draw,
};

static ColliderCylinderInit sCylinderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_ENEMY,
        OC1_NONE,
        OC2_TYPE_2,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, 0x00, 0x00 },
        { 0xFFCFFFFF, 0x00, 0x00 },
        ATELEM_NONE,
        ACELEM_ON,
        OCELEM_NONE,
    },
    { 30, 150, 0, { 0, 0, 0 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F_DIV1000(scale, 100, ICHAIN_STOP),
};

static BgWoodPillarInfo sBgWoodPillarInfo[] = {
    {
        0.1f,
        0.05f,
    }, {
        0.2f,
        0.01f,
    }, {
        0.2f,
        0.15f,
    },
};

void BgWoodPillar_Init(Actor* thisx, PlayState* play) {
    BgWoodPillar* this = (BgWoodPillar*)thisx;
    CollisionHeader* colHeader = NULL;

    DynaPolyActor_Init(&this->dyna, 0);
    Actor_ProcessInitChain(&this->dyna.actor, sInitChain);
    Collider_InitCylinder(play, &this->colliderCylinder);
    Collider_SetCylinder(play, &this->colliderCylinder, &this->dyna.actor, &sCylinderInit);
    Collider_UpdateCylinder(&this->dyna.actor, &this->colliderCylinder);
    CollisionHeader_GetVirtual(&gWoodPillarCol, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);

    this->dyna.actor.scale.x = this->dyna.actor.scale.z = sBgWoodPillarInfo[this->dyna.actor.params & 1].scaleXZ;
    this->dyna.actor.scale.y = sBgWoodPillarInfo[this->dyna.actor.params & 1].scaleY;
}

void BgWoodPillar_Destroy(Actor* thisx, PlayState* play) {
    BgWoodPillar* this = (BgWoodPillar*)thisx;

    Collider_DestroyCylinder(play, &this->colliderCylinder);
    DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgWoodPillar_Update(Actor* thisx, PlayState* play) {
    BgWoodPillar* this = (BgWoodPillar*)thisx;

    if (this->dyna.actor.xzDistToPlayer > 650.0f)
        DynaPoly_DisableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
    else DynaPoly_EnableCollision(play, &play->colCtx.dyna, this->dyna.bgId);
}

void BgWoodPillar_Draw(Actor* thisx, PlayState* play) {
    Gfx_DrawDListOpa(play, gWoodPillarDL);
}
