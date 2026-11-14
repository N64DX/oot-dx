#ifndef OBJECT_RAT_H
#define OBJECT_RAT_H

#include "animation.h"
#include "ultra64.h"

typedef enum RealBombchuLimb {
    /* 0x00 */ REAL_BOMBCHU_LIMB_NONE,
    /* 0x01 */ REAL_BOMBCHU_LIMB_BODY,
    /* 0x02 */ REAL_BOMBCHU_LIMB_HEAD,
    /* 0x03 */ REAL_BOMBCHU_LIMB_TAIL_BASE,
    /* 0x04 */ REAL_BOMBCHU_LIMB_TAIL_MIDDLE,
    /* 0x05 */ REAL_BOMBCHU_LIMB_TAIL_END,
    /* 0x06 */ REAL_BOMBCHU_LIMB_FRONT_LEFT_LEG,
    /* 0x07 */ REAL_BOMBCHU_LIMB_BACK_LEFT_LEG,
    /* 0x08 */ REAL_BOMBCHU_LIMB_FRONT_RIGHT_LEG,
    /* 0x09 */ REAL_BOMBCHU_LIMB_BACK_RIGHT_LEG,
    /* 0x0A */ REAL_BOMBCHU_LIMB_MAX
} RealBombchuLimb;

extern FlexSkeletonHeader gRealBombchuSkel;

extern AnimationHeader gRealBombchuSpotAnim;
extern AnimationHeader gRealBombchuRunAnim;

#endif
