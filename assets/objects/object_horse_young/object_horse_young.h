#ifndef OBJECT_HORSE_YOUNG_H
#define OBJECT_HORSE_YOUNG_H 1

#include "animation.h"
#include "skin.h"
#include "ultra64.h"

typedef enum ObjectHorseLinkYoungLimb {
    /* 0x00 */ object_horse_young_LIMB_NONE,
    /* 0x01 */ object_horse_young_LIMB_01,
    /* 0x02 */ object_horse_young_LIMB_02,
    /* 0x03 */ object_horse_young_LIMB_03,
    /* 0x04 */ object_horse_young_LIMB_04,
    /* 0x05 */ object_horse_young_LIMB_05,
    /* 0x06 */ object_horse_young_LIMB_06,
    /* 0x07 */ object_horse_young_LIMB_07,
    /* 0x08 */ object_horse_young_LIMB_08,
    /* 0x09 */ object_horse_young_LIMB_09,
    /* 0x0A */ object_horse_young_LIMB_0A,
    /* 0x0B */ object_horse_young_LIMB_0B,
    /* 0x0C */ object_horse_young_LIMB_0C,
    /* 0x0D */ object_horse_young_LIMB_0D,
    /* 0x0E */ object_horse_young_LIMB_0E,
    /* 0x0F */ object_horse_young_LIMB_0F,
    /* 0x10 */ object_horse_young_LIMB_10,
    /* 0x11 */ object_horse_young_LIMB_11,
    /* 0x12 */ object_horse_young_LIMB_12,
    /* 0x13 */ object_horse_young_LIMB_13,
    /* 0x14 */ object_horse_young_LIMB_14,
    /* 0x15 */ object_horse_young_LIMB_15,
    /* 0x16 */ object_horse_young_LIMB_16,
    /* 0x17 */ object_horse_young_LIMB_17,
    /* 0x18 */ object_horse_young_LIMB_18,
    /* 0x19 */ object_horse_young_LIMB_19,
    /* 0x1A */ object_horse_young_LIMB_1A,
    /* 0x1B */ object_horse_young_LIMB_1B,
    /* 0x1C */ object_horse_young_LIMB_1C,
    /* 0x1D */ object_horse_young_LIMB_1D,
    /* 0x1E */ object_horse_young_LIMB_1E,
    /* 0x1F */ object_horse_young_LIMB_1F,
    /* 0x20 */ object_horse_young_LIMB_20,
    /* 0x21 */ object_horse_young_LIMB_21,
    /* 0x22 */ object_horse_young_LIMB_22,
    /* 0x23 */ object_horse_young_LIMB_23,
    /* 0x24 */ object_horse_young_LIMB_24,
    /* 0x25 */ object_horse_young_LIMB_25,
    /* 0x26 */ object_horse_young_LIMB_26,
    /* 0x27 */ object_horse_young_LIMB_27,
    /* 0x28 */ object_horse_young_LIMB_28,
    /* 0x29 */ object_horse_young_LIMB_29,
    /* 0x2A */ object_horse_young_LIMB_2A,
    /* 0x2B */ object_horse_young_LIMB_2B,
    /* 0x2C */ object_horse_young_LIMB_2C,
    /* 0x2D */ object_horse_young_LIMB_2D,
    /* 0x2E */ object_horse_young_LIMB_2E,
    /* 0x2F */ object_horse_young_LIMB_MAX
} ObjectHorseLinkYoungLimb;

extern AnimationHeader gYoungEponaGallopAnim;
extern AnimationHeader object_horse_young_Anim_0035B0;
extern AnimationHeader object_horse_young_Anim_003D38;
extern AnimationHeader gYoungEponaTrotAnim;
extern AnimationHeader object_horse_young_Anim_004DE8;
extern AnimationHeader object_horse_young_Anim_005F64;
extern AnimationHeader gYoungEponaIdleAnim;
extern AnimationHeader gYoungEponaWhinnyAnim;
extern AnimationHeader gYoungEponaWalkAnim;
extern AnimationHeader object_horse_young_Anim_00A8DC;
extern AnimationHeader object_horse_young_Anim_00AD08;
extern AnimationHeader object_horse_young_Anim_00B3E0;
extern AnimationHeader object_horse_young_Anim_00BDE0;
extern AnimationHeader object_horse_young_Anim_00D178;
extern AnimationHeader object_horse_young_Anim_00D4E8;

extern u64 gYoungEponaEyeHalfTex[];
extern u64 gYoungEponaEyeClosedTex[];
extern u64 gYoungEponaEyeOpenTex[];

extern SkeletonHeader gYoungEponaSkel;

#endif
