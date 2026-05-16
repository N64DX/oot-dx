#ifndef OBJECT_BEAST_H
#define OBJECT_BEAST_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectBeastSkel {
    /* 0x00 */ GBEASTSKEL_ROOT_POS_LIMB,
    /* 0x01 */ GBEASTSKEL_ROOT_ROT_LIMB,
    /* 0x02 */ GBEASTSKEL_CHEST_LIMB,
    /* 0x03 */ GBEASTSKEL_HEAD_LIMB,
    /* 0x04 */ GBEASTSKEL_JAW_LIMB,
    /* 0x05 */ GBEASTSKEL_SHOULDER_L_LIMB,
    /* 0x06 */ GBEASTSKEL_ARM_L_LIMB,
    /* 0x07 */ GBEASTSKEL_HAND_L_LIMB,
    /* 0x08 */ GBEASTSKEL_CLAW_L_LIMB,
    /* 0x09 */ GBEASTSKEL_SHOULDER_R_LIMB,
    /* 0x0A */ GBEASTSKEL_ARM_R_LIMB,
    /* 0x0B */ GBEASTSKEL_HAND_R_LIMB,
    /* 0x0C */ GBEASTSKEL_CLAW_R_LIMB,
    /* 0x0D */ GBEASTSKEL_HIP_LIMB,
    /* 0x0E */ GBEASTSKEL_LEG_L_LIMB,
    /* 0x0F */ GBEASTSKEL_SHIN_L_LIMB,
    /* 0x10 */ GBEASTSKEL_FOOT_L_LIMB,
    /* 0x11 */ GBEASTSKEL_FCLAW_L_LIMB,
    /* 0x12 */ GBEASTSKEL_LEG_R_LIMB,
    /* 0x13 */ GBEASTSKEL_SHIN_R_LIMB,
    /* 0x14 */ GBEASTSKEL_FOOT_R_LIMB,
    /* 0x15 */ GBEASTSKEL_FCLAW_R_LIMB,
    /* 0x16 */ GBEASTSKEL_TAIL_LIMB,
    /* 0x17 */ GBEASTSKEL_NUM_LIMBS
} ObjectBeastSkel;

extern AnimationHeader gBeastSkelAttackaAnim;
extern AnimationHeader gBeastSkelAttackbAnim;
extern AnimationHeader gBeastSkelAttackcAnim;
extern AnimationHeader gBeastSkelAttackdAnim;
extern AnimationHeader gBeastSkelBackjumpAnim;
extern AnimationHeader gBeastSkelDeathAnim;
extern AnimationHeader gBeastSkelIdleAnim;
extern AnimationHeader gBeastSkelIdle2Anim;
extern AnimationHeader gBeastSkelStaggerAnim;
extern AnimationHeader gBeastSkelWalkaAnim;
extern AnimationHeader gBeastSkelAttackdaAnim;
extern AnimationHeader gBeastSkelAttackdbAnim;
extern AnimationHeader gBeastSkelAttackdcAnim;

extern FlexSkeletonHeader gBeastSkel;

#endif
