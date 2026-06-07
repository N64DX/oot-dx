#ifndef OBJECT_GOOMBA_H
#define OBJECT_GOOMBA_H

#include "ultra64.h"
#include "animation.h"

typedef enum ObjectGoombaSkel {
    /* 0x00 */ GGOOMBASKEL_ROOT_POS_LIMB,
    /* 0x01 */ GGOOMBASKEL_ROOT_ROT_LIMB,
    /* 0x02 */ GGOOMBASKEL_BODY1_LIMB,
    /* 0x03 */ GGOOMBASKEL_BODYNECK_LIMB,
    /* 0x04 */ GGOOMBASKEL_HEAD_LIMB,
    /* 0x05 */ GGOOMBASKEL_LEFTBACK1_L_LIMB,
    /* 0x06 */ GGOOMBASKEL_LEFTBACK2_L_LIMB,
    /* 0x07 */ GGOOMBASKEL_LEFTFRONT1_L_LIMB,
    /* 0x08 */ GGOOMBASKEL_LEFTFRONT2_L_LIMB,
    /* 0x09 */ GGOOMBASKEL_RIGHTBACK1_R_LIMB,
    /* 0x0A */ GGOOMBASKEL_RIGHTBACK_R_LIMB,
    /* 0x0B */ GGOOMBASKEL_RIGHTFRONT1_R_LIMB,
    /* 0x0C */ GGOOMBASKEL_RIGHTFRONT2_R_LIMB,
    /* 0x0D */ GGOOMBASKEL_NUM_LIMBS
} ObjectGoombaSkel;

extern AnimationHeader gGoombaSkelIdleAnim;
extern AnimationHeader gGoombaSkelWalkingAnim;
extern AnimationHeader gGoombaSkelJump_attackAnim;
extern AnimationHeader gGoombaSkelAttackAnim;
extern AnimationHeader gGoombaSkelDyingAnim;
extern AnimationHeader gGoombaSkelNoticeAnim;

extern u64 gGoombaSkel_mouth2_ci8[];
extern u64 gGoombaSkel_mouth2a_ci8[];
extern u64 gGoombaSkel_eye3_ci8[];
extern u64 gGoombaSkel_eye3a_ci8[];
extern u64 gGoombaSkel_eye3b_ci8[];

extern FlexSkeletonHeader gGoombaSkel;

#endif
