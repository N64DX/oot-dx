#ifndef GAMEPLAY_KEEP_DEKU_FLOWER_H
#define GAMEPLAY_KEEP_DEKU_FLOWER_H

#include "animation.h"
#include "bgcheck.h"
#include "ultra64.h"

typedef enum PinkDekuFlowerLimb {
    /* 0x00 */ PINK_DEKU_FLOWER_LIMB_NONE,
    /* 0x01 */ PINK_DEKU_FLOWER_LIMB_BASE,
    /* 0x02 */ PINK_DEKU_FLOWER_LIMB_CENTER,
    /* 0x03 */ PINK_DEKU_FLOWER_LIMB_BACK_LEAF,
    /* 0x04 */ PINK_DEKU_FLOWER_LIMB_FRONT_LEAF,
    /* 0x05 */ PINK_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL,
    /* 0x06 */ PINK_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL,
    /* 0x07 */ PINK_DEKU_FLOWER_LIMB_RIGHT_LEAF,
    /* 0x08 */ PINK_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL,
    /* 0x09 */ PINK_DEKU_FLOWER_LIMB_LEFT_LEAF,
    /* 0x0A */ PINK_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL,
    /* 0x0B */ PINK_DEKU_FLOWER_LIMB_MAX
} PinkDekuFlowerLimb;

typedef enum GoldDekuFlowerLimb {
    /* 0x00 */ GOLD_DEKU_FLOWER_LIMB_NONE,
    /* 0x01 */ GOLD_DEKU_FLOWER_LIMB_BASE,
    /* 0x02 */ GOLD_DEKU_FLOWER_LIMB_CENTER,
    /* 0x03 */ GOLD_DEKU_FLOWER_LIMB_BACK_PETAL,
    /* 0x04 */ GOLD_DEKU_FLOWER_LIMB_FRONT_PETAL,
    /* 0x05 */ GOLD_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL,
    /* 0x06 */ GOLD_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL,
    /* 0x07 */ GOLD_DEKU_FLOWER_LIMB_RIGHT_PETAL,
    /* 0x08 */ GOLD_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL,
    /* 0x09 */ GOLD_DEKU_FLOWER_LIMB_LEFT_PETAL,
    /* 0x0A */ GOLD_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL,
    /* 0x0B */ GOLD_DEKU_FLOWER_LIMB_MAX
} GoldDekuFlowerLimb;

extern Gfx gPinkDekuFlowerIdleDL[];
extern Gfx gGoldDekuFlowerIdleDL[];

extern SkeletonHeader gPinkDekuFlowerSkel;
extern FlexSkeletonHeader gGoldDekuFlowerSkel;

extern CollisionHeader gPinkDekuFlowerCol;
extern CollisionHeader gGoldDekuFlowerCol;

extern AnimationHeader gDekuFlowerBounceAnim;
extern AnimationHeader gDekuFlowerRustleAnim;

#endif
