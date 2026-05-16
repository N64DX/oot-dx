#ifndef OBJECT_KGY_H
#define OBJECT_KGY_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectKgyLimb {
    /* 0x00 */ OBJECT_KGY_LIMB_NONE,
    /* 0x01 */ OBJECT_KGY_LIMB_01,
    /* 0x02 */ OBJECT_KGY_LIMB_02,
    /* 0x03 */ OBJECT_KGY_LIMB_03,
    /* 0x04 */ OBJECT_KGY_LIMB_04,
    /* 0x05 */ OBJECT_KGY_LIMB_05,
    /* 0x06 */ OBJECT_KGY_LIMB_06,
    /* 0x07 */ OBJECT_KGY_LIMB_07,
    /* 0x08 */ OBJECT_KGY_LIMB_08,
    /* 0x09 */ OBJECT_KGY_LIMB_09,
    /* 0x0A */ OBJECT_KGY_LIMB_0A,
    /* 0x0B */ OBJECT_KGY_LIMB_0B,
    /* 0x0C */ OBJECT_KGY_LIMB_0C,
    /* 0x0D */ OBJECT_KGY_LIMB_0D,
    /* 0x0E */ OBJECT_KGY_LIMB_0E,
    /* 0x0F */ OBJECT_KGY_LIMB_0F,
    /* 0x10 */ OBJECT_KGY_LIMB_10,
    /* 0x11 */ OBJECT_KGY_LIMB_11,
    /* 0x12 */ OBJECT_KGY_LIMB_12,
    /* 0x13 */ OBJECT_KGY_LIMB_13,
    /* 0x14 */ OBJECT_KGY_LIMB_14,
    /* 0x15 */ OBJECT_KGY_LIMB_15,
    /* 0x16 */ OBJECT_KGY_LIMB_16,
    /* 0x17 */ OBJECT_KGY_LIMB_MAX
} ObjectKgyLimb;

extern AnimationHeader object_kgy_Anim_0008FC;
extern AnimationHeader object_kgy_Anim_001764;
extern AnimationHeader object_kgy_Anim_001EA4;
extern AnimationHeader object_kgy_Anim_00292C;
extern AnimationHeader object_kgy_Anim_003334;
extern AnimationHeader object_kgy_Anim_003D88;
extern AnimationHeader object_kgy_Anim_0042E4;
extern AnimationHeader object_kgy_Anim_004B98;
extern AnimationHeader object_kgy_Anim_0101F0;
extern AnimationHeader object_kgy_Anim_010B84;

extern FlexSkeletonHeader object_kgy_Skel_00F910;

#endif
