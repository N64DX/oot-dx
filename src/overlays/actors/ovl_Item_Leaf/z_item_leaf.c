/*
 * File: z_item_leaf.c
 * Overlay: ovl_Item_Leaf
 * Description: Wind-glide Deku Leaf held by Link. Spawned when standing in a wind
 *              current while airborne. Despawns when Link is no longer its parent.
 */

#include "z_item_leaf.h"

#include "gfx.h"
#include "gfx_setupdl.h"
#include "ichain.h"
#include "sys_matrix.h"
#include "play_state.h"

#include "assets/objects/gameplay_keep/gameplay_keep_extra.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void ItemLeaf_Init(Actor* thisx, PlayState* play);
void ItemLeaf_Destroy(Actor* thisx, PlayState* play);
void ItemLeaf_Update(Actor* thisx, PlayState* play);
void ItemLeaf_Draw(Actor* thisx, PlayState* play);

ActorProfile Item_Leaf_Profile = {
    /**/ ACTOR_ITEM_LEAF,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(ItemLeaf),
    /**/ ItemLeaf_Init,
    /**/ ItemLeaf_Destroy,
    /**/ ItemLeaf_Update,
    /**/ ItemLeaf_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_F32(gravity, 0, ICHAIN_CONTINUE),
    ICHAIN_F32(lockOnArrowOffset, 0, ICHAIN_STOP),
};

void ItemLeaf_Init(Actor* thisx, PlayState* play) {
    ItemLeaf* this = (ItemLeaf*)thisx;

    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->actor.colChkInfo.mass = 0;
    Actor_SetScale(&this->actor, 0.16f);
}

void ItemLeaf_Destroy(Actor* thisx, PlayState* play) {}

void ItemLeaf_Update(Actor* thisx, PlayState* play) {
    Player* player = GET_PLAYER(play);

    if (Actor_HasNoParent(thisx, play)) {
        Actor_Kill(thisx);
        return;
    }

    thisx->world.pos.x = (player->bodyPartsPos[PLAYER_BODYPART_L_HAND].x + player->bodyPartsPos[PLAYER_BODYPART_R_HAND].x) * 0.5f;
    thisx->world.pos.y = (player->bodyPartsPos[PLAYER_BODYPART_L_HAND].y + player->bodyPartsPos[PLAYER_BODYPART_R_HAND].y) * 0.5f;
    thisx->world.pos.z = (player->bodyPartsPos[PLAYER_BODYPART_L_HAND].z + player->bodyPartsPos[PLAYER_BODYPART_R_HAND].z) * 0.5f;
    thisx->shape.rot.y = player->actor.shape.rot.y;
    thisx->shape.rot.x = thisx->world.rot.x;
    thisx->shape.rot.z = thisx->world.rot.z;
}

void ItemLeaf_Draw(Actor* thisx, PlayState* play) {
    GraphicsContext* gfxCtx = play->state.gfxCtx;

    OPEN_DISPS(gfxCtx, "../z_item_leaf.c", __LINE__);
    Gfx_SetupDL_25Opa(gfxCtx);
    Matrix_Translate(thisx->world.pos.x, thisx->world.pos.y + 5.0f, thisx->world.pos.z, MTXMODE_NEW);
    Matrix_RotateY(BINANG_TO_RAD(thisx->shape.rot.y) + M_PI, MTXMODE_APPLY);
    Matrix_RotateX(-M_PI / 2, MTXMODE_APPLY);
    Matrix_Scale(thisx->scale.x, thisx->scale.y, thisx->scale.z, MTXMODE_APPLY);
    MATRIX_FINALIZE_AND_LOAD(POLY_OPA_DISP++, gfxCtx, "../z_item_leaf.c", __LINE__);
    gSPDisplayList(POLY_OPA_DISP++, gDekuLeafDL);
    CLOSE_DISPS(gfxCtx, "../z_item_leaf.c", __LINE__);
}
