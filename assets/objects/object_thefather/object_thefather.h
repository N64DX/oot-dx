#ifndef OBJECT_THEFATHER_H
#define OBJECT_THEFATHER_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectThefatherSkel {
    /* 0x00 */ GTHEFATHER_ROOT_POS_LIMB,
    /* 0x01 */ GTHEFATHER_ROOT_ROT_LIMB,
    /* 0x02 */ GTHEFATHER_HIP_LIMB,
    /* 0x03 */ GTHEFATHER_UPPERLEG_L_LIMB,
    /* 0x04 */ GTHEFATHER_SHIN_L_LIMB,
    /* 0x05 */ GTHEFATHER_HOOF_L_LIMB,
    /* 0x06 */ GTHEFATHER_UPPERLEG_R_LIMB,
    /* 0x07 */ GTHEFATHER_SHIN_R_LIMB,
    /* 0x08 */ GTHEFATHER_HOOF_R_LIMB,
    /* 0x09 */ GTHEFATHER_TORSO_LIMB,
    /* 0x0A */ GTHEFATHER_CHEST_LIMB,
    /* 0x0B */ GTHEFATHER_NECK_LIMB,
    /* 0x0C */ GTHEFATHER_HEAD_LIMB,
    /* 0x0D */ GTHEFATHER_JAW_LIMB,
    /* 0x0E */ GTHEFATHER_SHOULDER_L_LIMB,
    /* 0x0F */ GTHEFATHER_ARM_L_LIMB,
    /* 0x10 */ GTHEFATHER_HAND_L_LIMB,
    /* 0x11 */ GTHEFATHER_INDEXF_L_LIMB,
    /* 0x12 */ GTHEFATHER_INDEX2L_LIMB,
    /* 0x13 */ GTHEFATHER_MIDDLEF_L_LIMB,
    /* 0x14 */ GTHEFATHER_MIDDLE2L_LIMB,
    /* 0x15 */ GTHEFATHER_PINKYF_L_LIMB,
    /* 0x16 */ GTHEFATHER_PINKY2L_LIMB,
    /* 0x17 */ GTHEFATHER_RINGF_L_LIMB,
    /* 0x18 */ GTHEFATHER_RING2L_LIMB,
    /* 0x19 */ GTHEFATHER_THUMBF_L_LIMB,
    /* 0x1A */ GTHEFATHER_THUMB2L_LIMB,
    /* 0x1B */ GTHEFATHER_SHOULDER_R_LIMB,
    /* 0x1C */ GTHEFATHER_ARM_R_LIMB,
    /* 0x1D */ GTHEFATHER_HAND_R_LIMB,
    /* 0x1E */ GTHEFATHER_INDEXF_R_LIMB,
    /* 0x1F */ GTHEFATHER_INDEX2R_LIMB,
    /* 0x20 */ GTHEFATHER_MIDDLEF_R_LIMB,
    /* 0x21 */ GTHEFATHER_MIDDLE2R_LIMB,
    /* 0x22 */ GTHEFATHER_PINKYF_R_LIMB,
    /* 0x23 */ GTHEFATHER_PINKY2R_LIMB,
    /* 0x24 */ GTHEFATHER_RINGF_R_LIMB,
    /* 0x25 */ GTHEFATHER_RING2R_LIMB,
    /* 0x26 */ GTHEFATHER_THUMBF_R_LIMB,
    /* 0x27 */ GTHEFATHER_THUMB2R_LIMB,
    /* 0x28 */ GTHEFATHER_NUM_LIMBS
} ObjectThefatherSkel;

extern AnimationHeader gThefatherAttack1Anim;
extern AnimationHeader gThefatherAttack2Anim;
extern AnimationHeader gThefatherAttack3Anim;
extern AnimationHeader gThefatherAttack4Anim;
extern AnimationHeader gThefatherAttack5Anim;
extern AnimationHeader gThefatherAttack6Anim;
extern AnimationHeader gThefatherAttack7Anim;
extern AnimationHeader gThefatherAttack8Anim;
extern AnimationHeader gThefatherAttack9Anim;
extern AnimationHeader gThefatherAttack10Anim;
extern AnimationHeader gThefatherAttack11Anim;
extern AnimationHeader gThefatherAttack12Anim;
extern AnimationHeader gThefatherAttack13Anim;
extern AnimationHeader gThefatherAttack13hitAnim;
extern AnimationHeader gThefatherAttack13missAnim;
extern AnimationHeader gThefatherBackwalkAnim;
extern AnimationHeader gThefatherFriendlyAnim;
extern AnimationHeader gThefatherFriendly2Anim;
extern AnimationHeader gThefatherHurtAnim;
extern AnimationHeader gThefatherIdleAnim;
extern AnimationHeader gThefatherWalkAnim;
extern AnimationHeader gThefatherDeathAnim;

extern FlexSkeletonHeader gThefatherSkel;

extern u64 gBlackBeastTitleCardTex[];
extern u64 gBlackBeastTitleCardPalTex[];

#endif
