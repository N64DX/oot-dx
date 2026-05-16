#ifndef OBJECT_KBT_H
#define OBJECT_KBT_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectKbtLimb {
    /* 0x00 */ OBJECT_KBT_LIMB_NONE,
    /* 0x01 */ OBJECT_KBT_LIMB_01,
    /* 0x02 */ OBJECT_KBT_LIMB_02,
    /* 0x03 */ OBJECT_KBT_LIMB_03,
    /* 0x04 */ OBJECT_KBT_LIMB_04,
    /* 0x05 */ OBJECT_KBT_LIMB_05,
    /* 0x06 */ OBJECT_KBT_LIMB_06,
    /* 0x07 */ OBJECT_KBT_LIMB_07,
    /* 0x08 */ OBJECT_KBT_LIMB_08,
    /* 0x09 */ OBJECT_KBT_LIMB_09,
    /* 0x0A */ OBJECT_KBT_LIMB_0A,
    /* 0x0B */ OBJECT_KBT_LIMB_0B,
    /* 0x0C */ OBJECT_KBT_LIMB_0C,
    /* 0x0D */ OBJECT_KBT_LIMB_0D,
    /* 0x0E */ OBJECT_KBT_LIMB_0E,
    /* 0x0F */ OBJECT_KBT_LIMB_0F,
    /* 0x10 */ OBJECT_KBT_LIMB_10,
    /* 0x11 */ OBJECT_KBT_LIMB_11,
    /* 0x12 */ OBJECT_KBT_LIMB_12,
    /* 0x13 */ OBJECT_KBT_LIMB_13,
    /* 0x14 */ OBJECT_KBT_LIMB_MAX
} ObjectKbtLimb;

extern AnimationHeader object_kbt_Anim_000670;
extern AnimationHeader object_kbt_Anim_000FE8;
extern AnimationHeader object_kbt_Anim_001674;
extern AnimationHeader object_kbt_Anim_001940;
extern AnimationHeader object_kbt_Anim_001BF4;
extern AnimationHeader object_kbt_Anim_002084;
extern AnimationHeader object_kbt_Anim_002710;
extern AnimationHeader object_kbt_Anim_002DE0;
extern AnimationHeader object_kbt_Anim_003414;
extern AnimationHeader object_kbt_Anim_003D24;
extern AnimationHeader object_kbt_Anim_004274;
extern AnimationHeader object_kbt_Anim_00E7BC;
extern AnimationHeader object_kbt_Anim_00F0C8;

extern u64 object_kbt_Tex_00A5B8[];
extern u64 object_kbt_Tex_00ADB8[];
extern u64 object_kbt_Tex_00B5B8[];
extern u64 object_kbt_Tex_00BDB8[];
extern u64 object_kbt_Tex_00C5B8[];
extern u64 object_kbt_Tex_00CDB8[];
extern u64 object_kbt_Tex_00D5B8[];

extern FlexSkeletonHeader object_kbt_Skel_00DEE8;

#endif
