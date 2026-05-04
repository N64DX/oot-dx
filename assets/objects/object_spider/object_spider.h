#ifndef OBJECT_SPIDER_H
#define OBJECT_SPIDER_H

#include "animation.h"
#include "ultra64.h"

extern FlexSkeletonHeader Armature;

typedef enum ObjectSpiderSkel {
    /* 0x00 */ ARMATURE_ROOT_POS_LIMB,
    /* 0x01 */ ARMATURE_ROOT_ROT_LIMB,
    /* 0x02 */ ARMATURE_WAIST_LIMB,
    /* 0x03 */ ARMATURE_ABDOMEN_LIMB,
    /* 0x04 */ ARMATURE_LEGL1_LIMB,
    /* 0x05 */ ARMATURE_FORELEGL1_LIMB,
    /* 0x06 */ ARMATURE_LEGL2_LIMB,
    /* 0x07 */ ARMATURE_FORELEGL2_LIMB,
    /* 0x08 */ ARMATURE_LEGL3_LIMB,
    /* 0x09 */ ARMATURE_FORELEGL3_LIMB,
    /* 0x0A */ ARMATURE_LEGL4_LIMB,
    /* 0x0B */ ARMATURE_FORELEGL4_LIMB,
    /* 0x0C */ ARMATURE_LEGR1_LIMB,
    /* 0x0D */ ARMATURE_FORELEGR1_LIMB,
    /* 0x0E */ ARMATURE_LEGR2_LIMB,
    /* 0x0F */ ARMATURE_FORELEGR2_LIMB,
    /* 0x10 */ ARMATURE_LEGR3_LIMB,
    /* 0x11 */ ARMATURE_FORELEGR3_LIMB,
    /* 0x12 */ ARMATURE_LEGR4_LIMB,
    /* 0x13 */ ARMATURE_FORELEGR4_LIMB,
    /* 0x14 */ ARMATURE_MANDIBLEL_LIMB,
    /* 0x15 */ ARMATURE_MANDIBLER_LIMB,
    /* 0x16 */ ARMATURE_NUM_LIMBS
} ObjectSpiderSkel;

extern AnimationHeader ArmatureJumpsidelAnim;
extern AnimationHeader ArmatureJumpsiderAnim;
extern AnimationHeader ArmatureMovefAnim;
extern AnimationHeader ArmatureStrafelAnim;
extern AnimationHeader ArmatureStraferAnim;
extern AnimationHeader ArmatureWebattackAnim;
extern AnimationHeader ArmatureIntroAnim;
extern AnimationHeader ArmatureIdleAnim;
extern AnimationHeader ArmatureClimbAnim;
extern AnimationHeader ArmatureClimbendAnim;
extern AnimationHeader ArmatureClimbstartAnim;
extern AnimationHeader ArmatureDeathAnim;
extern AnimationHeader ArmatureAttackAnim;
extern AnimationHeader ArmatureJumpbackAnim;

extern Gfx gWebs[];

#endif
