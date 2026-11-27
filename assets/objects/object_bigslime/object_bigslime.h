#ifndef OBJECT_BIGSLIME_H
#define OBJECT_BIGSLIME_H

#include "animation.h"
#include "ultra64.h"

typedef enum GekkoLimb {
    /* 0x00 */ GEKKO_LIMB_NONE,
    /* 0x01 */ GEKKO_LIMB_ROOT,
    /* 0x02 */ GEKKO_LIMB_WAIST,
    /* 0x03 */ GEKKO_LIMB_LEFT_THIGH,
    /* 0x04 */ GEKKO_LIMB_LEFT_SHIN,
    /* 0x05 */ GEKKO_LIMB_LEFT_ANKLE,
    /* 0x06 */ GEKKO_LIMB_LEFT_FOOT,
    /* 0x07 */ GEKKO_LIMB_RIGHT_THIGH,
    /* 0x08 */ GEKKO_LIMB_RIGHT_SHIN,
    /* 0x09 */ GEKKO_LIMB_RIGHT_ANKLE,
    /* 0x0A */ GEKKO_LIMB_RIGHT_FOOT,
    /* 0x0B */ GEKKO_LIMB_TORSO,
    /* 0x0C */ GEKKO_LIMB_LEFT_UPPER_ARM,
    /* 0x0D */ GEKKO_LIMB_LEFT_FOREARM,
    /* 0x0E */ GEKKO_LIMB_LEFT_WRIST,
    /* 0x0F */ GEKKO_LIMB_LEFT_HAND,
    /* 0x10 */ GEKKO_LIMB_RIGHT_UPPER_ARM,
    /* 0x11 */ GEKKO_LIMB_RIGHT_FOREARM,
    /* 0x12 */ GEKKO_LIMB_RIGHT_WRIST,
    /* 0x13 */ GEKKO_LIMB_RIGHT_HAND,
    /* 0x14 */ GEKKO_LIMB_HEAD,
    /* 0x15 */ GEKKO_LIMB_JAW,
    /* 0x16 */ GEKKO_LIMB_LEFT_EYE,
    /* 0x17 */ GEKKO_LIMB_RIGHT_EYE,
    /* 0x18 */ GEKKO_LIMB_MAX
} GekkoLimb;

extern FlexSkeletonHeader gGekkoSkel;

extern AnimationHeader gGekkoFullFistPumpAnim;
extern AnimationHeader gGekkoSurpriseJumpAnim;
extern AnimationHeader gGekkoCallAnim;
extern AnimationHeader gGekkoCrawlAnim;
extern AnimationHeader gGekkoFallInAirAnim;
extern AnimationHeader gGekkoFloorIdleAnim;
extern AnimationHeader gGekkoDamagedAnim;
extern AnimationHeader gGekkoJumpUpAnim;
extern AnimationHeader gGekkoRecoverAnim;
extern AnimationHeader gGekkoJabPunchAnim;
extern AnimationHeader gGekkoJumpForwardAnim;
extern AnimationHeader gGekkoKickAnim;
extern AnimationHeader gGekkoFallOnGroundAnim;
extern AnimationHeader gGekkoStandingIdleAnim;
extern AnimationHeader gGekkoJumpOnSnapperAnim;
extern AnimationHeader gGekkoQuickFistPumpAnim;
extern AnimationHeader gGekkoSqueezeAnim;
extern AnimationHeader gGekkoLandOnSnapperAnim;
extern AnimationHeader gGekkoWiggleAnim;
extern AnimationHeader gGekkoKnockbackAnim;
extern AnimationHeader gGekkoLookAroundAnim;
extern AnimationHeader gGekkoNervousIdleAnim;
extern AnimationHeader gGekkoHookPunchAnim;
extern AnimationHeader gGekkoSwimForwardAnim;
extern AnimationHeader gGekkoWindupPunchAnim;
extern AnimationHeader gGekkoSwimUpAnim;
extern AnimationHeader gGekkoBoxingStanceAnim;

#endif
