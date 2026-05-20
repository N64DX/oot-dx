#ifndef OBJECT_TL_H
#define OBJECT_TL_H

#include "animation.h"
#include "ultra64.h"

typedef enum SpikedSnapperLimb {
    /* 0x00 */ SPIKED_SNAPPER_LIMB_NONE,
    /* 0x01 */ SPIKED_SNAPPER_LIMB_BODY,
    /* 0x02 */ SPIKED_SNAPPER_LIMB_SHELL,
    /* 0x03 */ SPIKED_SNAPPER_LIMB_SPIKES,
    /* 0x04 */ SPIKED_SNAPPER_LIMB_MAX
} SpikedSnapperLimb;

typedef enum SnapperLimb {
    /* 0x00 */ SNAPPER_LIMB_NONE,
    /* 0x01 */ SNAPPER_LIMB_BODY,
    /* 0x02 */ SNAPPER_LIMB_HEAD,
    /* 0x03 */ SNAPPER_LIMB_JAW,
    /* 0x04 */ SNAPPER_LIMB_EYES,
    /* 0x05 */ SNAPPER_LIMB_FRONT_LEFT_LEG,
    /* 0x06 */ SNAPPER_LIMB_FRONT_LEFT_FOOT,
    /* 0x07 */ SNAPPER_LIMB_FRONT_RIGHT_LEG,
    /* 0x08 */ SNAPPER_LIMB_FRONT_RIGHT_FOOT,
    /* 0x09 */ SNAPPER_LIMB_BACK_LEFT_LEG,
    /* 0x0A */ SNAPPER_LIMB_BACK_LEFT_FOOT,
    /* 0x0B */ SNAPPER_LIMB_BACK_RIGHT_LEG,
    /* 0x0C */ SNAPPER_LIMB_BACK_RIGHT_FOOT,
    /* 0x0D */ SNAPPER_LIMB_MAX
} SnapperLimb;

extern AnimationHeader gSnapperRearUpAnim;
extern AnimationHeader gSnapperDamageAnim;
extern AnimationHeader gSnapperDeathAnim;
extern AnimationHeader gSpikedSnapperIdleAnim;
extern AnimationHeader gSnapperFlipOverAnim;
extern AnimationHeader gSnapperIdleAnim;
extern AnimationHeader gSnapperWalkAnim;
extern AnimationHeader gSnapperRetreatIntoShellAnim;
extern AnimationHeader gSnapperFlipUprightAnim;
extern AnimationHeader gSnapperWiggleLegsAnim;
extern AnimationHeader gSnapperFailToFlipUprightAnim;
extern AnimationHeader gSnapperEmergeFromShellAnim;
extern AnimationHeader gSnapperBouncedUprightAnim;

extern u64 gSnapperEyeOpenTex[];
extern u64 gSnapperEyeHalfTex[];
extern u64 gSnapperEyeClosedTex[];

extern FlexSkeletonHeader gSpikedSnapperSkel;
extern FlexSkeletonHeader gSnapperSkel;

#endif
