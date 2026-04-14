#ifndef OBJECT_JG_H
#define OBJECT_JG_H

#include "bgcheck.h"
#include "animation.h"
#include "ultra64.h"

typedef enum GoronElderLimb {
    /* 0x00 */ GORON_ELDER_LIMB_NONE,
    /* 0x01 */ GORON_ELDER_LIMB_ROOT,
    /* 0x02 */ GORON_ELDER_LIMB_UPPER_BODY_ROOT,
    /* 0x03 */ GORON_ELDER_LIMB_LOWER_TORSO,
    /* 0x04 */ GORON_ELDER_LIMB_UPPER_TORSO,
    /* 0x05 */ GORON_ELDER_LIMB_LEFT_ARM_ROOT,
    /* 0x06 */ GORON_ELDER_LIMB_LEFT_SHOULDER_AND_UPPER_ARM,
    /* 0x07 */ GORON_ELDER_LIMB_LEFT_FOREARM,
    /* 0x08 */ GORON_ELDER_LIMB_LEFT_WRIST,
    /* 0x09 */ GORON_ELDER_LIMB_LEFT_HAND_AND_THUMB,
    /* 0x0A */ GORON_ELDER_LIMB_LEFT_FINGERS,
    /* 0x0B */ GORON_ELDER_LIMB_RIGHT_ARM_ROOT,
    /* 0x0C */ GORON_ELDER_LIMB_RIGHT_SHOULDER_AND_UPPER_ARM,
    /* 0x0D */ GORON_ELDER_LIMB_RIGHT_FOREARM,
    /* 0x0E */ GORON_ELDER_LIMB_RIGHT_WRIST,
    /* 0x0F */ GORON_ELDER_LIMB_RIGHT_HAND_AND_THUMB,
    /* 0x10 */ GORON_ELDER_LIMB_RIGHT_FINGERS,
    /* 0x11 */ GORON_ELDER_LIMB_NECK,
    /* 0x12 */ GORON_ELDER_LIMB_LEFT_HAIR_END,
    /* 0x13 */ GORON_ELDER_LIMB_RIGHT_HAIR_END,
    /* 0x14 */ GORON_ELDER_LIMB_HAIR_BACK,
    /* 0x15 */ GORON_ELDER_LIMB_HEAD,
    /* 0x16 */ GORON_ELDER_LIMB_LOWER_LIP,
    /* 0x17 */ GORON_ELDER_LIMB_BEARD_ROOT,
    /* 0x18 */ GORON_ELDER_LIMB_UPPER_BEARD,
    /* 0x19 */ GORON_ELDER_LIMB_LOWER_BEARD,
    /* 0x1A */ GORON_ELDER_LIMB_PELVIS,
    /* 0x1B */ GORON_ELDER_LIMB_LEFT_LEG_ROOT,
    /* 0x1C */ GORON_ELDER_LIMB_LEFT_THIGH,
    /* 0x1D */ GORON_ELDER_LIMB_LEFT_SHIN,
    /* 0x1E */ GORON_ELDER_LIMB_LEFT_FOOT,
    /* 0x1F */ GORON_ELDER_LIMB_RIGHT_LEG_ROOT,
    /* 0x20 */ GORON_ELDER_LIMB_RIGHT_THIGH,
    /* 0x21 */ GORON_ELDER_LIMB_RIGHT_SHIN,
    /* 0x22 */ GORON_ELDER_LIMB_RIGHT_FOOT,
    /* 0x23 */ GORON_ELDER_LIMB_MAX
} GoronElderLimb;

typedef enum GoronElderDrumLimb {
    /* 0x00 */ GORON_ELDER_DRUM_LIMB_NONE,
    /* 0x01 */ GORON_ELDER_DRUM_LIMB_ROOT,
    /* 0x02 */ GORON_ELDER_DRUM_LIMB_MAX
} GoronElderDrumLimb;

extern AnimationHeader gGoronElderThinkingAnim;
extern AnimationHeader gGoronElderWalkAnim;
extern AnimationHeader gGoronElderCradleAnim;
extern AnimationHeader gGoronElderWavingAnim;
extern AnimationHeader gGoronElderHeadShakeAnim;
extern AnimationHeader gGoronElderRememberingAnim;
extern AnimationHeader gGoronElderSurpriseStartAnim;
extern AnimationHeader gGoronElderSurpriseLoopAnim;
extern AnimationHeader gGoronElderStrongRememberingAnim;
extern AnimationHeader gGoronElderTakeOutDrumAnim;
extern AnimationHeader gGoronElderDrumIdleAnim;
extern AnimationHeader gGoronElderPlayingDrumAnim;
extern AnimationHeader gGoronElderAngryAnim;
extern AnimationHeader gGoronElderDepressedAnim;
extern AnimationHeader gGoronElderIdleAnim;
extern AnimationHeader gGoronElderDrumTakeOutAnim;
extern FlexSkeletonHeader gGoronElderSkel;

#endif
