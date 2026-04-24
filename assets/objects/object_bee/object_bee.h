#ifndef OBJECT_BEE_H
#define OBJECT_BEE_H

#include "gfx.h"
#include "animation.h"
#include "ultra64.h"

typedef enum ObjectBeeLimb {
    /* 0x00 */ OBJECT_BEE_LIMB_NONE,
    /* 0x01 */ OBJECT_BEE_LIMB_ROOT,
    /* 0x02 */ OBJECT_BEE_LIMB_WINGS_ROOT,
    /* 0x03 */ OBJECT_BEE_LIMB_LEFT_WING_ROOT,
    /* 0x04 */ OBJECT_BEE_LIMB_LEFT_WING,
    /* 0x05 */ OBJECT_BEE_LIMB_RIGHT_WING_ROOT,
    /* 0x06 */ OBJECT_BEE_LIMB_RIGHT_WING,
    /* 0x07 */ OBJECT_BEE_LIMB_BODY,
    /* 0x08 */ OBJECT_BEE_LIMB_ANTENNAE,
    /* 0x09 */ OBJECT_BEE_LIMB_HEAD,
    /* 0x0A */ OBJECT_BEE_LIMB_MAX
} ObjectBeeLimb;

extern Gfx gBeeBodyDL[];
extern Gfx gBeeHeadDL[];
extern Gfx gBeeAntennaeDL[];
extern Gfx gBeeRightWingDL[];
extern Gfx gBeeLeftWingDL[];
extern AnimationHeader gBeeFlyingAnim;
extern SkeletonHeader gBeeSkel;

#endif
