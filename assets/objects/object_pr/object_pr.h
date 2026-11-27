#ifndef OBJECT_PR_H
#define OBJECT_PR_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectPr1Limb {
    /* 0x00 */ OBJECT_PR_1_LIMB_NONE,
    /* 0x01 */ OBJECT_PR_1_LIMB_01,
    /* 0x02 */ OBJECT_PR_1_LIMB_02,
    /* 0x03 */ OBJECT_PR_1_LIMB_03,
    /* 0x04 */ OBJECT_PR_1_LIMB_04,
    /* 0x05 */ OBJECT_PR_1_LIMB_05,
    /* 0x06 */ OBJECT_PR_1_LIMB_06,
    /* 0x07 */ OBJECT_PR_1_LIMB_07,
    /* 0x08 */ OBJECT_PR_1_LIMB_08,
    /* 0x09 */ OBJECT_PR_1_LIMB_09,
    /* 0x0A */ OBJECT_PR_1_LIMB_MAX
} ObjectPr1Limb;

typedef enum Pr2Limb {
    /* 0x00 */ PR_2_LIMB_NONE,
    /* 0x01 */ PR_2_LIMB_BODY,
    /* 0x02 */ PR_2_LIMB_SKULL,
    /* 0x03 */ PR_2_LIMB_JAW,
    /* 0x04 */ PR_2_LIMB_TAIL,
    /* 0x05 */ PR_2_LIMB_MAX
} Pr2Limb;

extern FlexSkeletonHeader object_pr_Skel_0038B8;
extern FlexSkeletonHeader gSkullFishSkel;

extern AnimationHeader object_pr_Anim_000268;
extern AnimationHeader object_pr_Anim_000740;
extern AnimationHeader object_pr_Anim_001E10;
extern AnimationHeader object_pr_Anim_0021E8;
extern AnimationHeader gSkullFishDieAnim;
extern AnimationHeader gSkullFishAttackAnim;
extern AnimationHeader gSkullFishSwimAnim;

#endif
