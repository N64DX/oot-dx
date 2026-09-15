#ifndef Z_BG_KIN2_FENCE_H
#define Z_BG_KIN2_FENCE_H

#include "ultra64.h"
#include "actor.h"

struct BgKin2Fence;

typedef void (*BgKin2FenceActionFunc)(struct BgKin2Fence*, struct PlayState*);

#define BG_KIN2_FENCE_GET_SWITCH_FLAG(thisx) (((thisx)->params) & 0x7F)

typedef struct BgKin2Fence {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ColliderJntSph collider;
    /* 0x17C */ ColliderJntSphElement colliderElements[4];
    /* 0x27C */ BgKin2FenceActionFunc actionFunc;
    /* 0x280 */ s8 masksHit;
    /* 0x281 */ s8 cooldownTimer;
    /* 0x282 */ s8 waitBeforeOpenTimer;
    /* 0x283 */ s8 spiderHouseMaskOrder[6];
} BgKin2Fence; // size = 0x28C

#endif
