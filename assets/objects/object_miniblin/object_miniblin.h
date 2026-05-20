#ifndef OBJECT_MINIBLIN_H
#define OBJECT_MINIBLIN_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectMiniblinSkel {
    /* 0x00 */ GMINIBLINSKEL_BONE_POS_LIMB,
    /* 0x01 */ GMINIBLINSKEL_BONE_ROT_LIMB,
    /* 0x02 */ GMINIBLINSKEL_BODY_LIMB,
    /* 0x03 */ GMINIBLINSKEL_HEAD_LIMB,
    /* 0x04 */ GMINIBLINSKEL_LEFTEAR1_LIMB,
    /* 0x05 */ GMINIBLINSKEL_LEFTEAR2_LIMB,
    /* 0x06 */ GMINIBLINSKEL_RIGHTEAR1_LIMB,
    /* 0x07 */ GMINIBLINSKEL_RIGHTEAR2_LIMB,
    /* 0x08 */ GMINIBLINSKEL_HIP_L_LIMB,
    /* 0x09 */ GMINIBLINSKEL_UPPERLEG_L_LIMB,
    /* 0x0A */ GMINIBLINSKEL_LEG_L_LIMB,
    /* 0x0B */ GMINIBLINSKEL_FOOT_L_LIMB,
    /* 0x0C */ GMINIBLINSKEL_HIP_R_LIMB,
    /* 0x0D */ GMINIBLINSKEL_UPPERLEG_R_LIMB,
    /* 0x0E */ GMINIBLINSKEL_LEG_R_LIMB,
    /* 0x0F */ GMINIBLINSKEL_FOOT_R_LIMB,
    /* 0x10 */ GMINIBLINSKEL_HIPBACK_LIMB,
    /* 0x11 */ GMINIBLINSKEL_TAIL1_LIMB,
    /* 0x12 */ GMINIBLINSKEL_TAILEND_LIMB,
    /* 0x13 */ GMINIBLINSKEL_MOUTH_LIMB,
    /* 0x14 */ GMINIBLINSKEL_SHOULDER_L_LIMB,
    /* 0x15 */ GMINIBLINSKEL_UPPERARM_L_LIMB,
    /* 0x16 */ GMINIBLINSKEL_ARM_L_LIMB,
    /* 0x17 */ GMINIBLINSKEL_HAND_L_LIMB,
    /* 0x18 */ GMINIBLINSKEL_SHOULDER_R_LIMB,
    /* 0x19 */ GMINIBLINSKEL_UPPERARM_R_LIMB,
    /* 0x1A */ GMINIBLINSKEL_ARM_R_LIMB,
    /* 0x1B */ GMINIBLINSKEL_HAND_R_LIMB,
    /* 0x1C */ GMINIBLINSKEL_NUM_LIMBS
} ObjectMiniblinSkel;

extern u64 gMiniblinSkel_eye_normal_rgba16[];
extern u64 gMiniblinSkel_eye_halfclosed_rgba16[];
extern u64 gMiniblinSkel_eye_closed_rgba16[];
extern u64 gMiniblinSkel_eye_laugh_rgba16[];
extern u64 gMiniblinSkel_eye_hit_rgba16[];

extern AnimationHeader gMiniblinSkelIdleAnim;
extern AnimationHeader gMiniblinSkelJumpAnim;
extern AnimationHeader gMiniblinSkelTailattackAnim;
extern AnimationHeader gMiniblinSkelDeathAnim;
extern AnimationHeader gMiniblinSkelDamageAnim;
extern AnimationHeader gMiniblinSkelLaughAnim;
extern AnimationHeader gMiniblinSkelBombthrowAnim;

extern FlexSkeletonHeader gMiniblinSkel;

#endif
