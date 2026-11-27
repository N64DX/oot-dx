#ifndef OBJECT_DEATH_H
#define OBJECT_DEATH_H

#include "animation.h"
#include "ultra64.h"

typedef enum GomessSkelLimb {
    /* 0x00 */ GOMESS_LIMB_NONE,
    /* 0x01 */ GOMESS_LIMB_1,
    /* 0x02 */ GOMESS_LIMB_CORE_POS,
    /* 0x03 */ GOMESS_LIMB_LOWER_BODY,
    /* 0x04 */ GOMESS_LIMB_TORSO,
    /* 0x05 */ GOMESS_LIMB_COLLAR,
    /* 0x06 */ GOMESS_LIMB_HEAD_LOWER,
    /* 0x07 */ GOMESS_LIMB_HEAD_UPPER,
    /* 0x08 */ GOMESS_LIMB_8,
    /* 0x09 */ GOMESS_LIMB_9,
    /* 0x0A */ GOMESS_LIMB_10,
    /* 0x0B */ GOMESS_LIMB_11,
    /* 0x0C */ GOMESS_LIMB_CLOAK_UPPER,
    /* 0x0D */ GOMESS_LIMB_CLOAK_LOWER,
    /* 0x0E */ GOMESS_LIMB_UPPER_ARM_LEFT,
    /* 0x0F */ GOMESS_LIMB_FOREARM_LEFT,
    /* 0x10 */ GOMESS_LIMB_HAND_LEFT,
    /* 0x11 */ GOMESS_LIMB_UPPER_ARM_RIGHT,
    /* 0x12 */ GOMESS_LIMB_FOREARM_RIGHT,
    /* 0x13 */ GOMESS_LIMB_HAND_RIGHT,
    /* 0x14 */ GOMESS_LIMB_SCYTHE_HANDLE,
    /* 0x15 */ GOMESS_LIMB_SCYTHE_BLADE,
    /* 0x16 */ GOMESS_LIMB_MAX
} GomessSkelLimb;

extern Gfx gGomessScytheHandleDL[];
extern Gfx gGomessScytheBladeDL[];
extern Gfx gGomessCoreDL[];
extern Gfx gGomessBatsGuardingCoreDL[];
extern Gfx gGomessBatMaterialDL[];
extern Gfx gGomessBatFrame1DL[];
extern Gfx gGomessBatFrame2DL[];
extern Gfx gGomessBatFrame3DL[];
extern Gfx gGomessBatFrame4DL[];
extern Gfx gGomessBatFrame5DL[];
extern Gfx gGomessBatFrame6DL[];
extern Gfx gGomessBatFrame7DL[];
extern Gfx gGomessBatFrame8DL[];
extern Gfx gGomessBatFrame9DL[];

extern FlexSkeletonHeader gGomessSkel;

extern AnimationHeader gGomessScytheSwingAnim;
extern AnimationHeader gGomessBatSwarmStartAnim;
extern AnimationHeader gGomessBatSwarmAnim;
extern AnimationHeader gGomessDamagedAnim;
extern AnimationHeader gGomessBeginDeathAnim;
extern AnimationHeader gGomessDeathAnim;
extern AnimationHeader gGomessFloatAnim;
extern AnimationHeader object_death_Anim_00B284;
extern AnimationHeader gGomessScytheSpinAnim;
extern AnimationHeader object_death_Anim_00CB2C;

#endif
