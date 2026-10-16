#ifndef OBJECT_EG_H
#define OBJECT_EG_H

#include "bgcheck.h"
#include "animation.h"
#include "ultra64.h"

typedef enum EyegoreLimb {
    /* 0x00 */ EYEGORE_LIMB_NONE,
    /* 0x01 */ EYEGORE_LIMB_ROOT,
    /* 0x02 */ EYEGORE_LIMB_TORSO,
    /* 0x03 */ EYEGORE_LIMB_HEAD,
    /* 0x04 */ EYEGORE_LIMB_LEFT_SHOULDER,
    /* 0x05 */ EYEGORE_LIMB_LEFT_ARM,
    /* 0x06 */ EYEGORE_LIMB_LEFT_HAND,
    /* 0x07 */ EYEGORE_LIMB_RIGHT_SHOULDER,
    /* 0x08 */ EYEGORE_LIMB_RIGHT_ARM,
    /* 0x09 */ EYEGORE_LIMB_RIGHT_HAND,
    /* 0x0A */ EYEGORE_LIMB_UPPER_EYELID,
    /* 0x0B */ EYEGORE_LIMB_LOWER_EYELID,
    /* 0x0C */ EYEGORE_LIMB_PUPIL,
    /* 0x0D */ EYEGORE_LIMB_LASER_ATTACH,
    /* 0x0E */ EYEGORE_LIMB_EYE_COLLIDER,
    /* 0x0F */ EYEGORE_LIMB_EYEBALL,
    /* 0x10 */ EYEGORE_LIMB_HIPS,
    /* 0x11 */ EYEGORE_LIMB_LEFT_THIGH,
    /* 0x12 */ EYEGORE_LIMB_LEFT_SHIN,
    /* 0x13 */ EYEGORE_LIMB_LEFT_FOOT,
    /* 0x14 */ EYEGORE_LIMB_RIGHT_THIGH,
    /* 0x15 */ EYEGORE_LIMB_RIGHT_SHIN,
    /* 0x16 */ EYEGORE_LIMB_RIGHT_FOOT,
    /* 0x17 */ EYEGORE_LIMB_FAULDS,
    /* 0x18 */ EYEGORE_LIMB_MAX
} EyegoreLimb;

extern Gfx gEyegoreEffectImpactDL[];
extern Gfx gEyegoreEffectLargeBodyPieceDL[];
extern Gfx gEyegoreEffectSmallBodyPieceDL[];
extern Gfx gEyegoreEffectSolidDebrisDL[];
extern Gfx gEyegoreLaserDL[];
extern Gfx gEyegoreStoneDL[];

extern FlexSkeletonHeader gEyegoreSkel;

extern CollisionHeader gEyegoreBlockCol;

extern AnimationHeader gEyegoreSlamAnim;
extern AnimationHeader gEyegoreSlamWaitAnim;
extern AnimationHeader gEyegoreSlamEndAnim;
extern AnimationHeader gEyegoreLaserAnim;
extern AnimationHeader gEyegoreDamagedAnim;
extern AnimationHeader gEyegoreDeathAnim;
extern AnimationHeader gEyegoreRetreatAnim;
extern AnimationHeader gEyegoreLeftPunchAnim;
extern AnimationHeader gEyegoreRightPunchAnim;
extern AnimationHeader gEyegoreStunnedAnim;
extern AnimationHeader gEyegoreStunEndAnim;
extern AnimationHeader gEyegoreSitAnim;
extern AnimationHeader gEyegoreStandAnim;
extern AnimationHeader gEyegoreWalkAnim;

#endif
