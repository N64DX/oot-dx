#ifndef OBJECT_FAMOS_H
#define OBJECT_FAMOS_H

#include "animation.h"
#include "ultra64.h"

typedef enum FamosLimb {
    /* 0x00 */ FAMOS_LIMB_NONE,
    /* 0x01 */ FAMOS_LIMB_BODY,
    /* 0x02 */ FAMOS_LIMB_EMBLEM,
    /* 0x03 */ FAMOS_LIMB_SWORD,
    /* 0x04 */ FAMOS_LIMB_SHIELD,
    /* 0x05 */ FAMOS_LIMB_HEAD,
    /* 0x06 */ FAMOS_LIMB_MAX
} FamosLimb;

extern SkeletonHeader gFamosSkel;

extern AnimationHeader gFamosShakeAnim;
extern AnimationHeader gFamosIdleAnim;

#endif
