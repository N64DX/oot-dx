/*
 * File: z_obj_lost_woods.c
 * Overlay: obj_lost_woods
 * Description: Various actors used outside in the Forbidden Woods
 */

#include "z_obj_lost_woods.h"

#include "libc64/qrand.h"
#include "array_count.h"
#include "effect.h"
#include "sfx.h"
#include "play_state.h"
#include "z_en_item00.h"

#define FLAGS 0

void ObjLostWoods_Init(Actor* thisx, struct PlayState* play);
void ObjLostWoods_Destroy(Actor* thisx, struct PlayState* play);
void ObjLostWoods_Update(Actor* thisx, struct PlayState* play);
void ObjLostWoods_Draw(Actor* thisx, struct PlayState* play);

ActorProfile Obj_Lost_Woods_Profile = {
    ACTOR_OBJ_LOST_WOODS,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_LOST_WOODS,
    sizeof(ObjLostWoods),
    ObjLostWoods_Init,
    ObjLostWoods_Destroy,
    ObjLostWoods_Update,
    ObjLostWoods_Draw,
};

s32 ObjLostWoods_HasCollider(s16 params) {
    params &= 0x00FF;

    if (params == 0x0017 || params == 0x0006 || params == 0x0015 || params == 0x001A || params == 0x001F || params == 0x0018 || params == 0x0020 || params == 0x0023 || params == 0x0005)
        return true;
    else return false;
}

void ObjLostWoods_Init(Actor* thisx, struct PlayState* play) {
    CollisionHeader* colHeader;
    ObjLostWoods* this = (ObjLostWoods*)thisx;;

    this->dyna.actor.cullingVolumeDistance = 3000.0f;
    this->dyna.actor.cullingVolumeScale = 1000.0f;
    this->dyna.actor.cullingVolumeDownward = 1400.0f;

    switch (thisx->params & 0x00FF) {
        case 0x15: { // Porcino / Kakariko beta tree
            static ColliderCylinderInit kakarikoTreeCylinderInit = {
                {
                    COL_MATERIAL_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEM_MATERIAL_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    ATELEM_NONE,
                    ACELEM_ON,
                    OCELEM_ON,
                },
                { 50, 60, 0, { 0, 0, 0 } },
            };

            thisx->shape.yOffset = -20.0f;
            Actor_SetScale(thisx, 0.3f);
            Collider_InitCylinder(play, &this->collider);
            Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &kakarikoTreeCylinderInit);
        } break;
        case 0x16: // Forest Temple fern
            Actor_SetScale(thisx, 1.0f);
            break;
        case 0x17: { // Hyrule Field Tree
            static ColliderCylinderInit treeCylinderInit = {
                {
                    COL_MATERIAL_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEM_MATERIAL_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    ATELEM_NONE,
                    ACELEM_ON,
                    OCELEM_ON,
                },
                { 28, 60, 0, { 0, 0, 0 } },
            };

            Actor_SetScale(thisx, 1.25f);
            Collider_InitCylinder(play, &this->collider);
            Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &treeCylinderInit);
        } break;
        case 0x18: { // Porcino / Kakariko beta tree large
            static ColliderCylinderInit largeKakarikoTreeCylinderInit = {
                {
                    COL_MATERIAL_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEM_MATERIAL_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    ATELEM_NONE,
                    ACELEM_ON,
                    OCELEM_ON,
                },
                { 70, 60, 0, { 0, 0, 0 } },
            };

            thisx->shape.yOffset = -20.0f;
            Actor_SetScale(thisx, 0.4f);
            Collider_InitCylinder(play, &this->collider);
            Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &largeKakarikoTreeCylinderInit);
        } break;
        case 0x1A: { // Huge tree without top
            static ColliderCylinderInit hugeTreeCylinderInit = {
                {
                    COL_MATERIAL_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEM_MATERIAL_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    ATELEM_NONE,
                    ACELEM_ON,
                    OCELEM_ON,
                },
                { 100, 60, 0, { 0, 0, 0 } }, // radius, height
            };
            thisx->shape.yOffset = -28.0f;
            Actor_SetScale(thisx, 0.75f);
            Collider_InitCylinder(play, &this->collider);
            Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &hugeTreeCylinderInit);
        } break;
        case 0x1B: // Log tunnel
            DynaPolyActor_Init(&this->dyna, 1);
            CollisionHeader_GetVirtual(&gTunnelWoodCol_collisionHeader, &colHeader);
            this->dyna.bgId = DynaPoly_SetBgActor(play, &play->colCtx.dyna, &this->dyna.actor, colHeader);
            Actor_SetScale(thisx, 1.0f);
            break;
        case 0x20: { // Wood02 Tree 03
            static ColliderCylinderInit tree03CylinderInit = {
                {
                    COL_MATERIAL_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEM_MATERIAL_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    ATELEM_NONE,
                    ACELEM_ON,
                    OCELEM_ON,
                },
                { 28, 60, 0, { 0, 0, 0 } },
            };

            Actor_SetScale(thisx, 1.25f);
            Collider_InitCylinder(play, &this->collider);
            Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &tree03CylinderInit);
        } break;
        case 0x22: // Bush01
            Actor_SetScale(thisx, 1.0f);
            break;
        case 0x23: { // Beta tree stump
            static ColliderCylinderInit treeStumpCylinderInit = {
                {
                    COL_MATERIAL_TREE,
                    AT_NONE,
                    AC_ON | AC_HARD | AC_TYPE_PLAYER,
                    OC1_ON | OC1_TYPE_ALL,
                    OC2_TYPE_1,
                    COLSHAPE_CYLINDER,
                },
                {
                    ELEM_MATERIAL_UNK5,
                    { 0x00000000, 0x00, 0x00 },
                    { 0x0FC0074A, 0x00, 0x00 },
                    ATELEM_NONE,
                    ACELEM_ON,
                    OCELEM_ON,
                },
                { 100, 60, 0, { 0, 0, 0 } },
            };
            thisx->shape.yOffset = -25.0f;
            Actor_SetScale(thisx, 1.0f);
            Collider_InitCylinder(play, &this->collider);
            Collider_SetCylinder(play, &this->collider, &this->dyna.actor, &treeStumpCylinderInit);
        } break;
    }
}

void ObjLostWoods_Destroy(Actor* thisx, struct PlayState* play) {
    ObjLostWoods* this = (ObjLostWoods*)thisx;;

    if (thisx->params == 0x001B || thisx->params == 0x001E || thisx->params == 0x000C) {
        DynaPoly_DeleteBgActor(play, &play->colCtx.dyna, this->dyna.bgId);
    }

    if (ObjLostWoods_HasCollider(thisx->params)) {
        Collider_DestroyCylinder(play, &this->collider);
    }
}

static Vec3f D_80A9C23C_FKeep[] = {
    { 0.0f, 0.7071f, 0.7071f },
    { 0.7071f, 0.7071f, 0.0f },
    { 0.0f, 0.7071f, -0.7071f },
    { -0.7071f, 0.7071f, 0.0f },
};

static s16 D_80A9C26C_FKeep[] = { 108, 102, 96, 84, 66, 55, 42, 38 };

void ObjLostWoods_EnKusa_SpawnFragments(ObjLostWoods* this, struct PlayState* play) {
    Vec3f velocity;
    Vec3f pos;
    s32 i;
    s32 index;
    Vec3f* scale;
    s32 pad;

    for (i = 0; i < ARRAY_COUNT(D_80A9C23C_FKeep); i++) {
        scale = &D_80A9C23C_FKeep[i];

        pos.x = this->dyna.actor.world.pos.x + (scale->x * this->dyna.actor.scale.x * 20.0f);
        pos.y = this->dyna.actor.world.pos.y + (scale->y * this->dyna.actor.scale.y * 20.0f) + 10.0f;
        pos.z = this->dyna.actor.world.pos.z + (scale->z * this->dyna.actor.scale.z * 20.0f);

        velocity.x = (Rand_ZeroOne() - 0.5f) * 8.0f;
        velocity.y = Rand_ZeroOne() * 10.0f;
        velocity.z = (Rand_ZeroOne() - 0.5f) * 8.0f;

        index = (s32)(Rand_ZeroOne() * 111.1f) & 7;

        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, -100, 64, 40, 3, 0, D_80A9C26C_FKeep[index], 0, 0, 80, -1, OBJECT_GAMEPLAY_KEEP, gStreeFragment);

        pos.x = this->dyna.actor.world.pos.x + (scale->x * this->dyna.actor.scale.x * 40.0f);
        pos.y = this->dyna.actor.world.pos.y + (scale->y * this->dyna.actor.scale.y * 40.0f) + 10.0f;
        pos.z = this->dyna.actor.world.pos.z + (scale->z * this->dyna.actor.scale.z * 40.0f);

        velocity.x = (Rand_ZeroOne() - 0.5f) * 6.0f;
        velocity.y = Rand_ZeroOne() * 10.0f;
        velocity.z = (Rand_ZeroOne() - 0.5f) * 6.0f;

        index = (s32)(Rand_ZeroOne() * 111.1f) % 7;

        EffectSsKakera_Spawn(play, &pos, &velocity, &pos, -100, 64, 40, 3, 0, D_80A9C26C_FKeep[index], 0, 0, 80, -1, OBJECT_GAMEPLAY_KEEP, gStreeFragment2);
    }
}

void ObjLostWoods_Update(Actor* thisx, struct PlayState* play) {
    ObjLostWoods* this = (ObjLostWoods*)thisx;;

    if (thisx->textId == 0x0203) {
        Actor_OfferTalk(&this->dyna.actor, play, 75.0f);
        thisx->flags |= 1;
        Actor_SetFocus(&this->dyna.actor, 20.0f);
    }

    if (thisx->params == 0x05 && !this->cut && this->collider.base.acFlags & AC_HIT) {
        this->collider.base.acFlags &= ~AC_HIT;
        ObjLostWoods_EnKusa_SpawnFragments(this, play);
        Item_DropCollectibleRandom(play, NULL, &this->dyna.actor.world.pos, 0);
        SfxSource_PlaySfxAtFixedWorldPos(play, &this->dyna.actor.world.pos, 20, NA_SE_EV_PLANT_BROKEN);
        this->cut = true;
        this->collider.dim.radius = 10;
    }

    if (ObjLostWoods_HasCollider(thisx->params) && (thisx->xzDistToPlayer < 600.0f)) {
        Collider_UpdateCylinder(thisx, &this->collider);
        CollisionCheck_SetAC(play, &play->colChkCtx, &this->collider.base);
        CollisionCheck_SetOC(play, &play->colChkCtx, &this->collider.base);
    }
}

void ObjLostWoods_Draw(Actor* thisx, struct PlayState* play) {
    ObjLostWoods* this = (ObjLostWoods*)thisx;

    switch (thisx->params & 0x00FF) {
        case 0x15: // Porcino / Kakariko beta tree
            Gfx_DrawDListOpa(play, gBetaTree01);
            break;
        case 0x16: // Forest Temple fern
            Gfx_DrawDListOpa(play, gFernDL);
            break;
        case 0x17: // Hyrule Field tree
            Gfx_DrawDListXlu(play, gPineGreenDL);
            Gfx_DrawDListOpa(play, gPineLogDL);
            break;
        case 0x18: // Porcino / Kakariko beta tree large
            Gfx_DrawDListOpa(play, gBetaTree01);
            break;
        case 0x1A: // Huge tree without top
            Gfx_DrawDListOpa(play, sBetaTallTreeDList);
            break;
        case 0x1B: // Log tunnel
            Gfx_DrawDListOpa(play, sBetaLogTunnelDList);
            break;
        case 0x20: // Wood_02 tree03
            Gfx_DrawDListXlu(play, gTree03GreenDL);
            Gfx_DrawDListOpa(play, gTree03PostDL);
            break;
        case 0x22: // Bush01
            Gfx_DrawDListXlu(play, gBush01DL);
            break;
        case 0x23: // Beta tree stump
            Gfx_DrawDListOpa(play, sBetaStumpDList);
            break;
    }
}
