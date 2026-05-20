#ifndef OBJECT_GRASSHOPPER_H
#define OBJECT_GRASSHOPPER_H

#include "animation.h"
#include "ultra64.h"

typedef enum DragonflyLimb {
    /* 0x00 */ DRAGONFLY_LIMB_NONE,
    /* 0x01 */ DRAGONFLY_LIMB_ROOT,
    /* 0x02 */ DRAGONFLY_LIMB_TAIL_SEGMENT_1,
    /* 0x03 */ DRAGONFLY_LIMB_TAIL_SEGMENT_2,
    /* 0x04 */ DRAGONFLY_LIMB_TAIL_SEGMENT_3,
    /* 0x05 */ DRAGONFLY_LIMB_TAIL_SEGMENT_4,
    /* 0x06 */ DRAGONFLY_LIMB_TAIL_TIP,
    /* 0x07 */ DRAGONFLY_LIMB_THORAX,
    /* 0x08 */ DRAGONFLY_LIMB_LEFT_WING,
    /* 0x09 */ DRAGONFLY_LIMB_RIGHT_WING,
    /* 0x0A */ DRAGONFLY_LIMB_BACK_LEFT_UPPER_LEG,
    /* 0x0B */ DRAGONFLY_LIMB_BACK_LEFT_LOWER_LEG,
    /* 0x0C */ DRAGONFLY_LIMB_BACK_LEFT_FOOT,
    /* 0x0D */ DRAGONFLY_LIMB_BACK_RIGHT_UPPER_LEG,
    /* 0x0E */ DRAGONFLY_LIMB_BACK_RIGHT_LOWER_LEG,
    /* 0x0F */ DRAGONFLY_LIMB_BACK_RIGHT_FOOT,
    /* 0x10 */ DRAGONFLY_LIMB_FRONT_LEFT_UPPER_LEG,
    /* 0x11 */ DRAGONFLY_LIMB_FRONT_LEFT_LOWER_LEG,
    /* 0x12 */ DRAGONFLY_LIMB_FRONT_LEFT_FOOT,
    /* 0x13 */ DRAGONFLY_LIMB_FRONT_RIGHT_UPPER_LEG,
    /* 0x14 */ DRAGONFLY_LIMB_FRONT_RIGHT_LOWER_LEG,
    /* 0x15 */ DRAGONFLY_LIMB_FRONT_RIGHT_FOOT,
    /* 0x16 */ DRAGONFLY_LIMB_HEAD,
    /* 0x17 */ DRAGONFLY_LIMB_JAW,
    /* 0x18 */ DRAGONFLY_LIMB_MAX
} DragonflyLimb;

extern AnimationHeader gDragonflyAttackAnim;
extern AnimationHeader gDragonflyDeadAnim;
extern AnimationHeader gDragonflyFallAnim;
extern AnimationHeader gDragonflyFlyAnim;
extern AnimationHeader gDragonflyRaiseTailAnim;
extern AnimationHeader gDragonflyDamageAnim;
extern AnimationHeader gDragonflyLowerTailAnim;
extern AnimationHeader gDragonflyHoverAnim;

extern SkeletonHeader gDragonflySkel;

#endif
