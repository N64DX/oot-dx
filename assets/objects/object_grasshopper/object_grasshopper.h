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

extern s16 sDragonflyAttackAnimFrameData[];
extern JointIndex sDragonflyAttackAnimJointIndices[];
extern AnimationHeader gDragonflyAttackAnim;
extern s16 sDragonflyDeadAnimFrameData[];
extern JointIndex sDragonflyDeadAnimJointIndices[];
extern AnimationHeader gDragonflyDeadAnim;
extern s16 sDragonflyFallAnimFrameData[];
extern JointIndex sDragonflyFallAnimJointIndices[];
extern AnimationHeader gDragonflyFallAnim;
extern s16 sDragonflyFlyAnimFrameData[];
extern JointIndex sDragonflyFlyAnimJointIndices[];
extern AnimationHeader gDragonflyFlyAnim;
extern Vtx object_grasshopperVtx_001CB0[];
extern Gfx gDragonflyBackRightFootDL[];
extern Gfx gDragonflyBackLeftLowerLegDL[];
extern Gfx gDragonflyBackRightLowerLegDL[];
extern Gfx gDragonflyFrontLeftUpperLegDL[];
extern Gfx gDragonflyFrontRightUpperLegDL[];
extern Gfx gDragonflyFrontLeftLowerLegDL[];
extern Gfx gDragonflyFrontRightLowerLegDL[];
extern Gfx gDragonflyLeftWingDL[];
extern Gfx gDragonflyRightWingDL[];
extern Gfx gDragonflyBackRightUpperLegDL[];
extern Gfx gDragonflyBackLeftUpperLegDL[];
extern Gfx gDragonflyTailTipDL[];
extern Gfx gDragonflyTailSegment4DL[];
extern Gfx gDragonflyTailSegment3DL[];
extern Gfx gDragonflyTailSegment2DL[];
extern Gfx gDragonflyTailSegment1DL[];
extern Gfx gDragonflyThoraxDL[];
extern Gfx gDragonflyJawDL[];
extern Gfx gDragonflyHeadDL[];
extern Gfx gDragonflyBackLeftFootDL[];
extern Gfx gDragonflyFrontLeftFootDL[];
extern Gfx gDragonflyFrontRightFootDL[];
extern StandardLimb gDragonflyRootLimb;
extern StandardLimb gDragonflyTailSegment1Limb;
extern StandardLimb gDragonflyTailSegment2Limb;
extern StandardLimb gDragonflyTailSegment3Limb;
extern StandardLimb gDragonflyTailSegment4Limb;
extern StandardLimb gDragonflyTailTipLimb;
extern StandardLimb gDragonflyThoraxLimb;
extern StandardLimb gDragonflyLeftWingLimb;
extern StandardLimb gDragonflyRightWingLimb;
extern StandardLimb gDragonflyBackLeftUpperLegLimb;
extern StandardLimb gDragonflyBackLeftLowerLegLimb;
extern StandardLimb gDragonflyBackLeftFootLimb;
extern StandardLimb gDragonflyBackRightUpperLegLimb;
extern StandardLimb gDragonflyBackRightLowerLegLimb;
extern StandardLimb gDragonflyBackRightFootLimb;
extern StandardLimb gDragonflyFrontLeftUpperLegLimb;
extern StandardLimb gDragonflyFrontLeftLowerLegLimb;
extern StandardLimb gDragonflyFrontLeftFootLimb;
extern StandardLimb gDragonflyFrontRightUpperLegLimb;
extern StandardLimb gDragonflyFrontRightLowerLegLimb;
extern StandardLimb gDragonflyFrontRightFootLimb;
extern StandardLimb gDragonflyHeadLimb;
extern StandardLimb gDragonflyJawLimb;
extern void* gDragonflySkelLimbs[];
extern SkeletonHeader gDragonflySkel;
extern s16 sDragonflyRaiseTailAnimFrameData[];
extern JointIndex sDragonflyRaiseTailAnimJointIndices[];
extern AnimationHeader gDragonflyRaiseTailAnim;
extern s16 sDragonflyDamageAnimFrameData[];
extern JointIndex sDragonflyDamageAnimJointIndices[];
extern AnimationHeader gDragonflyDamageAnim;
extern s16 sDragonflyLowerTailAnimFrameData[];
extern JointIndex sDragonflyLowerTailAnimJointIndices[];
extern AnimationHeader gDragonflyLowerTailAnim;
extern s16 sDragonflyHoverAnimFrameData[];
extern JointIndex sDragonflyHoverAnimJointIndices[];
extern AnimationHeader gDragonflyHoverAnim;
#endif
