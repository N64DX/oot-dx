#include "overlays/actors/ovl_En_Bom/z_en_bom.h"

void EnArrow_Link(Actor* arrow, Actor* bomb, PlayState* play) {
    Player* player = GET_PLAYER(play);
    u8 i;

    for (i=0; i<MAX_BOMB_ARROWS; i++)
        if (player->sBombArrowLinks[i].arrow == NULL) {
            player->sBombArrowLinks[i].arrow = arrow;
            player->sBombArrowLinks[i].bomb = bomb;
            player->sBombArrowLinks[i].loosed = false;
            ((EnArrow*)arrow)->collider.elem.atDmgInfo.dmgFlags = DMG_ARROW_UNK1;
            return;
        }
}

BombArrowLink* EnArrow_FindLinkByArrow(Actor* arrow, PlayState* play) {
    Player* player = GET_PLAYER(play);
    u8 i;

    if (player == NULL)
        return NULL;

    for (i=0; i<MAX_BOMB_ARROWS; i++)
        if (player->sBombArrowLinks[i].arrow == arrow)
            return &player->sBombArrowLinks[i];

    return NULL;
}

u8 EnArrow_IsLoosed(Actor* arrow, PlayState* play) {
    if (arrow == NULL)
        return false;
    return Actor_HasNoParent(arrow, play);
}

void EnArrow_InitializeBombArrow(Actor* arrow, PlayState* play) {
    Player* player = GET_PLAYER(play);
    EnBom* bomb;

    if (play == NULL || arrow == NULL  || !gSaveContext.save.info.obtainedItems.bombArrow || arrow->params != ARROW_NORMAL || AMMO(ITEM_BOMB) <= 0 || EnArrow_IsLoosed(arrow, play) || EnArrow_FindLinkByArrow(arrow, play) != NULL) // Existing normal arrow is still nocked, and bomb arrows became equipped. Upgrade it in-place by attaching a bomb.
        return;

    bomb = (EnBom*)Actor_SpawnAsChild(&play->actorCtx, arrow, play, ACTOR_EN_BOM, arrow->world.pos.x, arrow->world.pos.y, arrow->world.pos.z, 0, 0, 0, BOMB_BODY);

    if (bomb != NULL) {
        Actor_SetScale(&bomb->actor, 0.0025f);
        bomb->bombCollider.base.acFlags = AC_NONE; // Prevent the arrow's collider from immediately hitting its own bomb.
        EnArrow_Link(arrow, &bomb->actor, play);
    }
}

void EnArrow_Submerge(Actor* arrow, PlayState* play) {
    BombArrowLink* link;
    Actor* bomb;
    Vec3f effPos;

    if (arrow == NULL)
        return;

    link = EnArrow_FindLinkByArrow(arrow, play);
    if (link == NULL)
        return;

    bomb = link->bomb;
    if (bomb == NULL)
        return;

    if (bomb->depthInWater >= 3.0f) {
        bomb = BombArrow_Unlink(arrow, play);
        effPos.x = bomb->world.pos.x;
        effPos.y = bomb->world.pos.y + bomb->depthInWater;
        effPos.z = bomb->world.pos.z;
        effPos.y += 10.0f;
        EffectSsGSplash_Spawn(play, &effPos, NULL, NULL, 1, 500);
        SfxSource_PlaySfxAtFixedWorldPos(play, &bomb->world.pos, 30, NA_SE_IT_BOMB_UNEXPLOSION);
        Actor_Kill(bomb);
    } else Actor_PlaySfx(bomb, NA_SE_EV_BOMB_DROP_WATER);
}

u8 EnArrow_IsBombExploding(Actor* bomb) {
    return bomb != NULL && bomb->params == BOMB_EXPLOSION;
}

void EnArrow_TryDetonate(Actor* arrow, PlayState* play) {
    BombArrowLink* link = NULL;
    u8 loosed;
    EnBom* bomb = NULL;

    if (arrow == NULL)
        return;

    link = EnArrow_FindLinkByArrow(arrow, play);
    if (link == NULL)
        return;

    loosed = link->loosed;
    bomb = (EnBom*)BombArrow_Unlink(arrow, play);
    if (bomb == NULL)
        return;

    if (EnArrow_IsBombExploding(&bomb->actor)) // The bomb has already entered its explosion actor state. Do not kill it or force timer to 0, because EnBom_Explode needs to run its full countdown to fade the environment lighting back down
        return;

    if (loosed) { // Arrow either collided with something, or despawned likely because it flew too far. Drop fuse timer to zero, resulting in immediate detonation.
        bomb->timer = 0; // Forcibly despawn arrow to prevent bounce off / geometry embed animation, since the explosion would destroy it.
        Actor_Kill(arrow);
    } else Actor_Kill(&bomb->actor); // Arrow actor destroyed likely because equipment has been swapped. Despawn bomb.
}

void EnArrow_UpdateAttachedBomb(Actor* arrow, PlayState* play) {
    BombArrowLink* link = EnArrow_FindLinkByArrow(arrow, play);
    Actor* bomb;
    static Vec3f loosedBombOffset = { 0, 0, 4 }; // Local-space offset from the center of the arrow shaft
    Vec3f bombPos;
    MtxF bombMf;

    if (link == NULL || link->bomb == NULL)
        return;

    bomb = link->bomb;

    if (arrow->params == ARROW_NORMAL_LIT) // Arrow has been lit on fire. Detonate bomb
        EnArrow_TryDetonate(arrow, play);

    if (!link->loosed) {
        if (!EnArrow_IsLoosed(arrow, play))
            return;

        Inventory_ChangeAmmo(ITEM_BOMB, -1);
        if (EnArrow_IsBombExploding(bomb)) // Bomb is exploding whilst nocked. Expend an arrow also, as the explosion destroys it.
            Inventory_ChangeAmmo(ITEM_BOW, -1);

        link->loosed = true;
    }

    Actor_SetScale(bomb, 0.0025f);

    Matrix_Push();
    Matrix_SetTranslateRotateYXZ(arrow->world.pos.x, arrow->world.pos.y, arrow->world.pos.z, &arrow->shape.rot);
    Matrix_MultVec3f(&loosedBombOffset, &bombPos);
    Matrix_Get(&bombMf);
    Matrix_Pop();
    Math_Vec3f_Copy(&bomb->world.pos, &bombPos);
    Math_Vec3f_Copy(&bomb->prevPos, &bombPos);
    Matrix_MtxFToYXZRotS(&bombMf, &bomb->world.rot, false);
    Math_Vec3s_Copy(&bomb->shape.rot, &bomb->world.rot);
}
