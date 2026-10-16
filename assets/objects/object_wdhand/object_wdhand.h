#ifndef OBJECT_WDHAND_H
#define OBJECT_WDHAND_H

#include "animation.h"
#include "ultra64.h"

typedef enum DexihandLimb {
    /* 0x00 */ DEXIHAND_LIMB_NONE,
    /* 0x01 */ DEXIHAND_LIMB_01,
    /* 0x02 */ DEXIHAND_LIMB_02,
    /* 0x03 */ DEXIHAND_LIMB_03,
    /* 0x04 */ DEXIHAND_LIMB_04,
    /* 0x05 */ DEXIHAND_LIMB_05,
    /* 0x06 */ DEXIHAND_LIMB_06,
    /* 0x07 */ DEXIHAND_LIMB_07,
    /* 0x08 */ DEXIHAND_LIMB_MAX
} DexihandLimb;

extern Gfx gDexihandBaseDL[];
extern Gfx gDexihandArmSegmentDL[];

extern FlexSkeletonHeader gDexihandSkel;

extern AnimationHeader gDexihandCloseAnim;
extern AnimationHeader object_wdhand_Anim_000364;
extern AnimationHeader gDexihandOpenAnim;
extern AnimationHeader gDexihandIdleAnim;

#endif
