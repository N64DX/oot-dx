#ifndef Z_EN_SLIM_H
#define Z_EN_SLIM_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_slime/object_slime.h"

struct EnSlim;

typedef void (*EnSlimActionFunc)(struct EnSlim*, struct PlayState*);

typedef enum {
    /* -2 */ TEKSLIM_BLUE = -2,
    /* -1 */ TEKSLIM_RED
} EnSlimType;

typedef enum {
    /* 0x0 */ TEKSLIM_DEATH_CRY,
    /* 0x1 */ TEKSLIM_UNK_1,
    /* 0x2 */ TEKSLIM_UNK_2,
    /* 0x3 */ TEKSLIM_RECOIL,
    /* 0x4 */ TEKSLIM_UNK_4,
    /* 0x5 */ TEKSLIM_FALL_APART,
    /* 0x6 */ TEKSLIM_IDLE,
    /* 0x7 */ TEKSLIM_STUNNED,
    /* 0x8 */ TEKSLIM_UNK_8,
    /* 0x9 */ TEKSLIM_ATTACK,
    /* 0xA */ TEKSLIM_TURN_TOWARD_PLAYER,
    /* 0xB */ TEKSLIM_UNK9,
    /* 0xC */ TEKSLIM_MOVE_TOWARD_PLAYER
} EnSlimAction;

typedef enum {
    /* 0x0 */ TEKSLIM_BEGIN_LUNGE,
    /* 0x1 */ TEKSLIM_MID_LUNGE,
    /* 0x2 */ TEKSLIM_LANDED,
    /* 0x2 */ TEKSLIM_SUBMERGED
} EnSlimAttackState;

typedef enum {
    /* 0x0 */ TEKSLIM_INITIAL,
    /* 0x1 */ TEKSLIM_UNFLIPPED,
    /* 0x2 */ TEKSLIM_FLIPPED
} EnSlimFlipState;

typedef struct EnSlim {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ Vec3s jointTable[25];
    /* 0x0226 */ Vec3s morphTable[25];
    /* 0x02BC */ u8 action;
    /* 0x02BD */ u8 flipState;
    /* 0x02C0 */ EnSlimActionFunc actionFunc;
    /* 0x02C4 */ BodyBreak bodyBreak; // Data for EnPart which is spawned at death
    /* 0x02DC */ s32 unk_2DC; // flags related to bgCheck drawn effects
    /* 0x02E0 */ s16 actionVar1; // Usage depends on current action function
    /* 0x02E2 */ u8 actionVar2; // Usage depends on current action function
    /* 0x02E3 */ u8 spawnIceTimer;
    /* 0x02E4 */ u8 damageEffect;
    /* 0x02E8 */ ColliderJntSph collider;
    /* 0x0308 */ ColliderJntSphElement colliderItem;
    /* 0x0348 */ Vec3f frontLeftFootPos;
    /* 0x0354 */ Vec3f frontRightFootPos;
    /* 0x0360 */ Vec3f backRightFootPos;
    /* 0x036C */ Vec3f backLeftFootPos;
    /*        */ s16 deformationCounter;
                 u8 timer;
} EnSlim; // size = 0x0378

#endif
