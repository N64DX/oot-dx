#ifndef OBJECT_HAMMERGEIST_H
#define OBJECT_HAMMERGEIST_H 1

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectHammergeistSkel {
    /* 0x00 */ GHAMMERGEISTSKEL_ROOT_POS_LIMB,
    /* 0x01 */ GHAMMERGEISTSKEL_ROOT_ROT_LIMB,
    /* 0x02 */ GHAMMERGEISTSKEL_BODY_LIMB,
    /* 0x03 */ GHAMMERGEISTSKEL_ARM_L_LIMB,
    /* 0x04 */ GHAMMERGEISTSKEL_ARM2_L_LIMB,
    /* 0x05 */ GHAMMERGEISTSKEL_HAND_L_LIMB,
    /* 0x06 */ GHAMMERGEISTSKEL_HAMMERL_LIMB,
    /* 0x07 */ GHAMMERGEISTSKEL_ARM_R_LIMB,
    /* 0x08 */ GHAMMERGEISTSKEL_ARM2_R_LIMB,
    /* 0x09 */ GHAMMERGEISTSKEL_HAND_R_LIMB,
    /* 0x0A */ GHAMMERGEISTSKEL_HAMMERR_LIMB,
    /* 0x1B */ GHAMMERGEISTSKEL_FOOT_L_LIMB,
    /* 0x1C */ GHAMMERGEISTSKEL_FOOT_R_LIMB,
    /* 0x1D */ GHAMMERGEISTSKEL_HEAD_LIMB,
    /* 0x1E */ GHAMMERGEISTSKEL_NUM_LIMBS
} ObjectHammergeistSkel;

extern AnimationHeader gHammergeistSkelDamageAnim;
extern AnimationHeader gHammergeistSkelDieAnim;
extern AnimationHeader gHammergeistSkelExplosionAnim;
extern AnimationHeader gHammergeistSkelInfuseAnim;
extern AnimationHeader gHammergeistSkelSlamheavyAnim;
extern AnimationHeader gHammergeistSkelSlamlAnim;
extern AnimationHeader gHammergeistSkelSlamrAnim;
extern AnimationHeader gHammergeistSkelWalkAnim;
extern AnimationHeader gHammergeistSkelIdleAnim;
extern AnimationHeader gHammergeistSkelFlexAnim;

extern u64 gHammergeistSkel_normal_ci8[];
extern u64 gHammergeistSkel_laugh_ci8[];
extern u64 gHammergeistSkel_mouth_open_ci8[];
extern u64 gHammergeistSkel_metal2_rgba16[];
extern u64 gHammergeistSkel_hammerfire_1_rgba16[];
extern u64 gHammergeistSkel_hammerfire_2_rgba16[];
extern u64 gHammergeistSkel_hammerice_1_rgba16[];
extern u64 gHammergeistSkel_hammerice_2_rgba16[];

extern FlexSkeletonHeader gHammergeistSkel;

#endif
