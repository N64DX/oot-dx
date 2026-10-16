#ifndef OBJECT_PP_H
#define OBJECT_PP_H

#include "animation.h"
#include "ultra64.h"

typedef enum HiploopLimb {
    /* 0x00 */ HIPLOOP_LIMB_NONE,
    /* 0x01 */ HIPLOOP_LIMB_BODY,
    /* 0x02 */ HIPLOOP_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x03 */ HIPLOOP_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x04 */ HIPLOOP_LIMB_FRONT_LEFT_FOOT,
    /* 0x05 */ HIPLOOP_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x06 */ HIPLOOP_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x07 */ HIPLOOP_LIMB_FRONT_RIGHT_FOOT,
    /* 0x08 */ HIPLOOP_LIMB_MASK,
    /* 0x09 */ HIPLOOP_LIMB_LEFT_WING_BASE,
    /* 0x0A */ HIPLOOP_LIMB_LEFT_WING_MIDDLE,
    /* 0x0B */ HIPLOOP_LIMB_LEFT_WING_TIP,
    /* 0x0C */ HIPLOOP_LIMB_BACK_RIGHT_UPPER_LEG,
    /* 0x0D */ HIPLOOP_LIMB_BACK_RIGHT_LOWER_LEG,
    /* 0x0E */ HIPLOOP_LIMB_BACK_RIGHT_FOOT,
    /* 0x0F */ HIPLOOP_LIMB_RIGHT_WING_BASE,
    /* 0x10 */ HIPLOOP_LIMB_RIGHT_WING_MIDDLE,
    /* 0x11 */ HIPLOOP_LIMB_RIGHT_WING_TIP,
    /* 0x12 */ HIPLOOP_LIMB_CENTER_WING_BASE,
    /* 0x13 */ HIPLOOP_LIMB_CENTER_WING_MIDDLE,
    /* 0x14 */ HIPLOOP_LIMB_CENTER_WING_TIP,
    /* 0x15 */ HIPLOOP_LIMB_BACK_LEFT_UPPER_LEG,
    /* 0x16 */ HIPLOOP_LIMB_BACK_LEFT_LOWER_LEG,
    /* 0x17 */ HIPLOOP_LIMB_BACK_LEFT_FOOT,
    /* 0x18 */ HIPLOOP_LIMB_RIGHT_EYE,
    /* 0x19 */ HIPLOOP_LIMB_LEFT_EYE,
    /* 0x1A */ HIPLOOP_LIMB_MAX
} HiploopLimb;

extern FlexSkeletonHeader gHiploopSkel;

extern AnimationHeader gHiploopAttackAnim;
extern AnimationHeader gHiploopChargeAnim;
extern AnimationHeader gHiploopDamageAnim;
extern AnimationHeader gHiploopRoarAnim;
extern AnimationHeader gHiploopWindUpAnim;
extern AnimationHeader gHiploopIdleAnim;
extern AnimationHeader gHiploopWalkAnim;

#endif
