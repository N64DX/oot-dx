/*
 * File: z_en_wonder_item.c
 * Overlay: ovl_En_Wonder_Item
 * Description: Invisible Collectable; Used in MQ to create "Cow" switches
 */

#include "z_en_wonder_item.h"

#define FLAGS 0x00000000

#define THIS ((EnWonderItem*)thisx)

#define WONDERITEM_DAMAGE_SLASH 0x702
#define WONDERITEM_DAMAGE_ARROW 0x1F820
#define WONDERITEM_DAMAGE_HOOKSHOT 0x80
#define WONDERITEM_DAMAGE_BOOMERANG 0x10
#define WONDERITEM_DAMAGE_SLINGSHOT 0x4
#define WONDERITEM_DAMAGE_BOMB 0x8
#define WONDERITEM_DAMAGE_HAMMER 0x40

void EnWonderItem_Init(Actor* thisx, GlobalContext* globalCtx);
void EnWonderItem_Destroy(Actor* thisx, GlobalContext* globalCtx);
void EnWonderItem_Update(Actor* thisx, GlobalContext* globalCtx);

void func_80B38570(EnWonderItem* this, GlobalContext* globalCtx);
void func_80B38788(EnWonderItem* this, GlobalContext* globalCtx);
void func_80B387F0(EnWonderItem* this, GlobalContext* globalCtx);
void func_80B38824(EnWonderItem* this, GlobalContext* globalCtx);
void func_80B388AC(EnWonderItem* this, GlobalContext* globalCtx);
void func_80B38AD8(EnWonderItem* this, GlobalContext* globalCtx);
void func_80B38B78(EnWonderItem* this, GlobalContext* globalCtx);

static ColliderCylinderInit sCylinderInit = {
    { COLTYPE_UNK10, 0x00, 0x09, 0x00, 0x20, COLSHAPE_CYLINDER },
    { 0x00, { 0x00000000, 0x00, 0x00 }, { 0xFFCFFFFF, 0x00, 0x00 }, 0x00, 0x01, 0x00 },
    { 20, 30, 0, { 0, 0, 0 } },
};

const ActorInit En_Wonder_Item_InitVars = {
    ACTOR_EN_WONDER_ITEM,
    ACTORTYPE_PROP,
    FLAGS,
    OBJECT_GAMEPLAY_KEEP,
    sizeof(EnWonderItem),
    (ActorFunc)EnWonderItem_Init,
    (ActorFunc)EnWonderItem_Destroy,
    (ActorFunc)EnWonderItem_Update,
    NULL,
};

Vec3f sTagPointsFree[9];
Vec3f sTagPointsOrdered[9];

void EnWonderItem_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    EnWonderItem* this = THIS;

    if ((this->collider.dim.radius != 0) || (this->collider.dim.height != 0)) {
        Collider_DestroyCylinder(globalCtx, &this->collider);
    }
}

void func_80B380A0(EnWonderItem* this, GlobalContext* globalCtx, s32 autoCollect) {
    static s16 dropTable[] = {
        ITEM00_NUTS,        ITEM00_HEART_PIECE,  ITEM00_MAGIC_LARGE,   ITEM00_MAGIC_SMALL,
        ITEM00_HEART,       ITEM00_ARROWS_SMALL, ITEM00_ARROWS_MEDIUM, ITEM00_ARROWS_LARGE,
        ITEM00_RUPEE_GREEN, ITEM00_RUPEE_BLUE,   ITEM00_RUPEE_RED,     ITEM00_FLEXIBLE,
    };
    s32 i;
    s32 randomDrop;

    func_80078884(NA_SE_SY_GET_ITEM);

    if (this->dropCount == 0) {
        this->dropCount++;
    }
    for (i = this->dropCount; i > 0; i--) {
        if (this->itemDrop < WONDERITEM_RANDOM) {
            if ((this->itemDrop == WONDERITEM_FLEXIBLE) || !autoCollect) {
                Item_DropCollectible(globalCtx, &this->actor.posRot.pos, dropTable[this->itemDrop]);
            } else {
                Item_DropCollectible(globalCtx, &this->actor.posRot.pos, dropTable[this->itemDrop] | 0x8000);
            }
        } else {
            randomDrop = this->itemDrop - WONDERITEM_RANDOM;
            if (!autoCollect) {
                Item_DropCollectibleRandom(globalCtx, NULL, &this->actor.posRot.pos, randomDrop);
            } else {
                Item_DropCollectibleRandom(globalCtx, NULL, &this->actor.posRot.pos, randomDrop | 0x8000);
            }
        }
    }
    if (this->switchFlag >= 0) {
        Flags_SetSwitch(globalCtx, this->switchFlag);
    }
    Actor_Kill(&this->actor);
}

void EnWonderItem_Init(Actor* thisx, GlobalContext* globalCtx) {
    static u32 collisionTypes[] = {
        WONDERITEM_DAMAGE_SLASH,     WONDERITEM_DAMAGE_ARROW,     WONDERITEM_DAMAGE_HAMMER,   WONDERITEM_DAMAGE_BOMB,
        WONDERITEM_DAMAGE_SLINGSHOT, WONDERITEM_DAMAGE_BOOMERANG, WONDERITEM_DAMAGE_HOOKSHOT,
    };
    s32 pad;
    s16 colTypeIndex;
    EnWonderItem* this = THIS;
    s16 rotZover10;
    s16 tagIndex;

    osSyncPrintf("\n\n");
    // Mysterious mystery
    osSyncPrintf("\x1b[32m☆☆☆☆☆ 不思議不思議まか不思議 \t   ☆☆☆☆☆ %x\n\x1b[m", this->actor.params);
    this->actor.flags &= ~1;

    this->wonderMode = (this->actor.params >> 0xB) & 0x1F;
    this->itemDrop = (this->actor.params >> 6) & 0x1F;
    this->switchFlag = this->actor.params & 0x3F;
    if (this->switchFlag == 0x3F) {
        this->switchFlag = -1;
    }
    this->actor.unk_1F = 1;
    if ((this->switchFlag >= 0) && Flags_GetSwitch(globalCtx, this->switchFlag)) {
        osSyncPrintf("\x1b[32m☆☆☆☆☆ Ｙｏｕ ａｒｅ Ｓｈｏｃｋ！  ☆☆☆☆☆ %d\n\x1b[m", this->switchFlag);
        Actor_Kill(&this->actor);
        return;
    }
    switch (this->wonderMode) {
        case WONDERITEM_MULTITAG_FREE:
            this->numTagPoints = this->actor.posRot.rot.z & 0xF;
            rotZover10 = 0;
            if (this->actor.posRot.rot.z >= 10) {
                rotZover10 = this->actor.posRot.rot.z / 10;
                this->timerMod = rotZover10 * 20;
            }
            this->numTagPoints = this->actor.posRot.rot.z - rotZover10 * 10;
            // i.e timerMod = rot.z / 10 seconds, numTagPoints = rot.z % 10
            this->updateFunc = func_80B38570;
            break;
        case WONDERITEM_TAG_POINT_FREE:
            tagIndex = this->actor.posRot.rot.z & 0xFF;
            sTagPointsFree[tagIndex] = this->actor.posRot.pos;
            Actor_Kill(&this->actor);
            break;
        case WONDERITEM_PROXIMITY_DROP:
            this->dropCount = this->actor.posRot.rot.z & 0xFF;
            this->updateFunc = func_80B38788;
            break;
        case WONDERITEM_INTERACT_SWITCH:
            colTypeIndex = this->actor.posRot.rot.z & 0xFF;
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
            this->collider.body.bumper.flags = collisionTypes[colTypeIndex];
            this->collider.dim.radius = 20;
            this->collider.dim.height = 30;
            this->updateFunc = func_80B387F0;
            break;
        case WONDERITEM_UNUSED:
            break;
        case WONDERITEM_MULTITAG_ORDERED:
            this->numTagPoints = this->actor.posRot.rot.z & 0xF;
            rotZover10 = 0;
            if (this->actor.posRot.rot.z >= 10) {
                rotZover10 = this->actor.posRot.rot.z / 10;
                this->timerMod = rotZover10 * 20;
            }
            this->numTagPoints = this->actor.posRot.rot.z - rotZover10 * 10;
            // i.e timerMod = rot.z / 10 seconds, numTagPoints = rot.z % 10
            this->updateFunc = func_80B388AC;
            break;
        case WONDERITEM_TAG_POINT_ORDERED:
            tagIndex = this->actor.posRot.rot.z & 0xFF;
            sTagPointsOrdered[tagIndex] = this->actor.posRot.pos;
            Actor_Kill(&this->actor);
            break;
        case WONDERITEM_PROXIMITY_SWITCH:
            this->updateFunc = func_80B38824;
            break;
        case WONDERITEM_BOMB_SOLDIER:
            Collider_InitCylinder(globalCtx, &this->collider);
            Collider_SetCylinder(globalCtx, &this->collider, &this->actor, &sCylinderInit);
            this->collider.body.bumper.flags = WONDERITEM_DAMAGE_SLINGSHOT;
            this->unkPos = this->actor.posRot.pos;
            this->collider.dim.radius = 35;
            this->collider.dim.height = 75;
            this->updateFunc = func_80B38AD8;
            break;
        case WONDERITEM_ROLL_DROP:
            this->dropCount = this->actor.posRot.rot.z & 0xFF;
            this->updateFunc = func_80B38B78;
            break;
        default:
            Actor_Kill(&this->actor);
            break;
    }
}

void func_80B38570(EnWonderItem* this, GlobalContext* globalCtx) {
    s32 mask;
    s32 i;
    f32 dx;
    f32 dy;
    f32 dz;
    Player* player = PLAYER;
    s32 prevTagFlags = this->tagFlags;

    for (i = 0, mask = 1; i < this->numTagPoints; i++, mask <<= 1) {
        if (!(prevTagFlags & mask)) {
            dx = player->actor.posRot.pos.x - sTagPointsFree[i].x;
            dy = player->actor.posRot.pos.y - sTagPointsFree[i].y;
            dz = player->actor.posRot.pos.z - sTagPointsFree[i].z;
            if (sqrtf(SQ(dx) + SQ(dy) + SQ(dz)) < 50.0f) {
                this->tagFlags |= mask;
                this->tagCount++;
                this->timer = this->timerMod + 81;
                return;
            }
            if (BREG(0) != 0) {
                DebugDisplay_AddObject(sTagPointsFree[i].x, sTagPointsFree[i].y, sTagPointsFree[i].z,
                                       this->actor.posRot.rot.x, this->actor.posRot.rot.y, this->actor.posRot.rot.z,
                                       1.0f, 1.0f, 1.0f, 0, 255, 0, 255, 4, globalCtx->state.gfxCtx);
            }
        }
    }
    if (this->timer == 1) {
        Actor_Kill(&this->actor);
        return;
    }
    if (this->tagCount == this->numTagPoints) {
        if (this->switchFlag >= 0) {
            Flags_SetSwitch(globalCtx, this->switchFlag);
        }
        func_80B380A0(this, globalCtx, true);
    }
}

void func_80B38788(EnWonderItem* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if ((this->actor.xzDistFromLink < 50.0f) &&
        (fabsf(this->actor.posRot.pos.y - player->actor.posRot.pos.y) < 30.0f)) {
        func_80B380A0(this, globalCtx, true);
    }
}

void func_80B387F0(EnWonderItem* this, GlobalContext* globalCtx) {
    if (this->collider.base.acFlags & 2) {
        this->collider.base.acFlags &= ~2;
        func_80B380A0(this, globalCtx, false);
    }
}

void func_80B38824(EnWonderItem* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if ((this->actor.xzDistFromLink < 50.0f) &&
        (fabsf(this->actor.posRot.pos.y - player->actor.posRot.pos.y) < 30.0f)) {
        if (this->switchFlag >= 0) {
            Flags_SetSwitch(globalCtx, this->switchFlag);
        }
        Actor_Kill(&this->actor);
    }
}

void func_80B388AC(EnWonderItem* this, GlobalContext* globalCtx) {
    f32 dx;
    f32 dy;
    f32 dz;
    s32 mask;
    s32 i;
    Player* player = PLAYER;
    s32 prevTagFlags = this->tagFlags;

    for (i = 0, mask = 1; i < this->numTagPoints; i++, mask <<= 1) {
        if (!(prevTagFlags & mask)) {
            dx = player->actor.posRot.pos.x - sTagPointsOrdered[i].x;
            dy = player->actor.posRot.pos.y - sTagPointsOrdered[i].y;
            dz = player->actor.posRot.pos.z - sTagPointsOrdered[i].z;
            if (sqrtf(SQ(dx) + SQ(dy) + SQ(dz)) < 50.0f) {
                if (prevTagFlags & mask) {
                    return;
                } else if (i == this->nextTag) {
                    this->tagFlags |= mask;
                    this->tagCount++;
                    this->nextTag++;
                    this->timer = this->timerMod + 81;
                    return;
                } else {
                    Actor_Kill(&this->actor);
                    return;
                }
            } else if (BREG(0) != 0) {
                DebugDisplay_AddObject(sTagPointsOrdered[i].x, sTagPointsOrdered[i].y, sTagPointsOrdered[i].z,
                                       this->actor.posRot.rot.x, this->actor.posRot.rot.y, this->actor.posRot.rot.z,
                                       1.0f, 1.0f, 1.0f, 0, 0, 255, 255, 4, globalCtx->state.gfxCtx);
            }
        }
    }
    if (this->timer == 1) {
        Actor_Kill(&this->actor);
        return;
    }
    if (this->tagCount == this->numTagPoints) {
        func_80B380A0(this, globalCtx, true);
    }
}

void func_80B38AD8(EnWonderItem* this, GlobalContext* globalCtx) {
    if (this->collider.base.acFlags & 2) {
        this->collider.base.acFlags &= ~2;
        if (Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_HEISHI2, this->actor.posRot.pos.x,
                        this->actor.posRot.pos.y, this->actor.posRot.pos.z, 0, this->actor.yawTowardsLink, 0,
                        9) != NULL) {
            // Inadvertently complete the soldier set
            osSyncPrintf("\x1b[33m☆☆☆☆☆ うっかり兵セット完了 ☆☆☆☆☆ \n\x1b[m");
        }
        if (this->switchFlag >= 0) {
            Flags_SetSwitch(globalCtx, this->switchFlag);
        }
        Actor_Kill(&this->actor);
    }
}

void func_80B38B78(EnWonderItem* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if ((this->actor.xzDistFromLink < 50.0f) && (player->invincibilityTimer < 0) &&
        (fabsf(this->actor.posRot.pos.y - player->actor.posRot.pos.y) < 30.0f)) {
        func_80B380A0(this, globalCtx, 1);
    }
}

void EnWonderItem_Update(Actor* thisx, GlobalContext* globalCtx) {
    static s16 debugTextColors[] = {
        255, 255, 0,   255, 0,   255, 0,   255, 255, 255, 0,   0, 0, 255, 0,   0, 0, 255, 128, 128,
        128, 128, 128, 0,   128, 0,   128, 0,   128, 0,   128, 0, 0, 0,   128, 0, 0, 0,   128,
    }; // These seem to be mistyped.
    s32 pad;
    EnWonderItem* this = THIS;
    s32 wonderIndex;

    DECR(this->timer);
    this->updateFunc(this, globalCtx);

    if (this->wonderMode == WONDERITEM_UNUSED) {
        Actor_SetHeight(&this->actor, this->unkHeight);
    }
    if ((this->wonderMode == WONDERITEM_INTERACT_SWITCH) || (this->wonderMode == WONDERITEM_BOMB_SOLDIER)) {
        Collider_CylinderUpdate(&this->actor, &this->collider);
        CollisionCheck_SetAC(globalCtx, &globalCtx->colChkCtx, &this->collider.base);
    }

    wonderIndex = this->wonderMode;
    if (this->wonderMode > 12) {
        wonderIndex = 0;
    }
    if (BREG(0) != 0) {
        DebugDisplay_AddObject(this->actor.posRot.pos.x, this->actor.posRot.pos.y, this->actor.posRot.pos.z,
                               this->actor.posRot.rot.x, this->actor.posRot.rot.y, this->actor.posRot.rot.z, 1.0f, 1.0f,
                               1.0f, debugTextColors[wonderIndex], debugTextColors[wonderIndex + 1],
                               debugTextColors[wonderIndex + 2], 255, 4, globalCtx->state.gfxCtx);
    }
}
