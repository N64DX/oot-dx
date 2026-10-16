#ifndef OBJECT_GMO_H
#define OBJECT_GMO_H

#include "animation.h"
#include "ultra64.h"

typedef enum NejironLimb {
    /* 0x00 */ NEJIRON_LIMB_NONE,
    /* 0x01 */ NEJIRON_LIMB_BODY,
    /* 0x02 */ NEJIRON_LIMB_EYES,
    /* 0x03 */ NEJIRON_LIMB_MAX
} NejironLimb;


extern u64 gNejironEyeOpenTex[];
extern u64 gNejironEyeHalfTex[];
extern u64 gNejironEyeClosedTex[];

extern SkeletonHeader gNejironSkel;

extern AnimationHeader gNejironIdleAnim;

#endif
