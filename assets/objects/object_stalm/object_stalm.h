#ifndef OBJECT_STALM_H
#define OBJECT_STALM_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectStalmSkel {
    /* 0x00 */ STALMASTER_LIMB_ROOT_TRANSLATE,
    /* 0x01 */ STALMASTER_LIMB_CENTER,
    /* 0x02 */ STALMASTER_LIMB_BACKBONE01,
    /* 0x03 */ STALMASTER_LIMB_BACKBONE02,
    /* 0x04 */ STALMASTER_LIMB_ARMLD01,
    /* 0x05 */ STALMASTER_LIMB_ARMLD02,
    /* 0x06 */ STALMASTER_LIMB_HANDLD,
    /* 0x07 */ STALMASTER_LIMB_FINGERLD01,
    /* 0x08 */ STALMASTER_LIMB_FINGERLD02,
    /* 0x09 */ STALMASTER_LIMB_LOC_SWORDD,
    /* 0x0A */ STALMASTER_LIMB_PADLD,
    /* 0x0B */ STALMASTER_LIMB_ARMLU01,
    /* 0x0C */ STALMASTER_LIMB_ARMLU02,
    /* 0x0D */ STALMASTER_LIMB_HANDLU,
    /* 0x0E */ STALMASTER_LIMB_FINGERLU01,
    /* 0x0F */ STALMASTER_LIMB_FINGERLU02,
    /* 0x10 */ STALMASTER_LIMB_LOC_SWORDA,
    /* 0x11 */ STALMASTER_LIMB_PADLU,
    /* 0x12 */ STALMASTER_LIMB_ARMRD01,
    /* 0x13 */ STALMASTER_LIMB_ARMRD02,
    /* 0x14 */ STALMASTER_LIMB_HANDRD,
    /* 0x15 */ STALMASTER_LIMB_FINGERRD01,
    /* 0x16 */ STALMASTER_LIMB_FINGERRD02,
    /* 0x17 */ STALMASTER_LIMB_LOC_SWORDC,
    /* 0x18 */ STALMASTER_LIMB_PADRD,
    /* 0x19 */ STALMASTER_LIMB_ARMRU01,
    /* 0x1A */ STALMASTER_LIMB_ARMRU02,
    /* 0x1B */ STALMASTER_LIMB_HANDRU,
    /* 0x1C */ STALMASTER_LIMB_FINGERRU01,
    /* 0x1D */ STALMASTER_LIMB_FINGERRU02,
    /* 0x1E */ STALMASTER_LIMB_LOC_SWORDB,
    /* 0x1F */ STALMASTER_LIMB_PADRU,
    /* 0x20 */ STALMASTER_LIMB_NECK,
    /* 0x21 */ STALMASTER_LIMB_HEAD,
    /* 0x22 */ STALMASTER_LIMB_BAND01,
    /* 0x23 */ STALMASTER_LIMB_BAND02,
    /* 0x24 */ STALMASTER_LIMB_BAND03,
    /* 0x25 */ STALMASTER_LIMB_BAND04,
    /* 0x26 */ STALMASTER_LIMB_BAND05,
    /* 0x27 */ STALMASTER_LIMB_CHIN,
    /* 0x28 */ STALMASTER_LIMB_WAIST,
    /* 0x29 */ STALMASTER_LIMB_LEGL01,
    /* 0x2A */ STALMASTER_LIMB_LEGL02,
    /* 0x2B */ STALMASTER_LIMB_FOOTL,
    /* 0x2C */ STALMASTER_LIMB_TOEL,
    /* 0x2D */ STALMASTER_LIMB_LEGR01,
    /* 0x2E */ STALMASTER_LIMB_LEGR02,
    /* 0x2F */ STALMASTER_LIMB_FOOTR,
    /* 0x30 */ STALMASTER_LIMB_TOER,
    /* 0x31 */ STALMASTER_LIMB_LOC_SWORDC2,
    /* 0x32 */ STALMASTER_LIMB_LOC_SWORDD2,
    /* 0x33 */ STALMASTER_LIMB_MAX
} ObjectStalmSkel;

extern AnimationHeader Stalfos4_ao2counterAnim;
extern AnimationHeader Stalfos4_ao2guardAnim;
extern AnimationHeader Stalfos4_ao2walkAnim;
extern AnimationHeader Stalfos4_ao4counterAnim;
extern AnimationHeader Stalfos4_ao4guardAnim;
extern AnimationHeader Stalfos4_ao4walkAnim;
extern AnimationHeader Stalfos4_aoAttackaAnim;
extern AnimationHeader Stalfos4_aoAttackbAnim;
extern AnimationHeader Stalfos4_aoAttackcAnim;
extern AnimationHeader Stalfos4_aoAttackdAnim;
extern AnimationHeader Stalfos4_aoSwordposeAnim;
extern AnimationHeader Stalfos4_ao4posecAnim;

extern Gfx HelmetDL[];
extern Gfx ChestplateDL[];
extern Gfx Forearm_L[];
extern Gfx Forearm_R[];
extern Gfx Pad_L[];
extern Gfx Pad_R[];
extern Gfx SwordADL[];
extern Gfx SwordB[];
extern Gfx SwordC[];
extern Gfx SwordC2[];
extern Gfx SwordD[];
extern Gfx SwordD2[];
extern Gfx Tail[];
extern Gfx Tip[];
extern Gfx Arm_L[];
extern Gfx Arm_R[];
extern Gfx Head[];
extern Gfx Backbone[];

extern FlexSkeletonHeader Stalfos4_ao;

#endif
