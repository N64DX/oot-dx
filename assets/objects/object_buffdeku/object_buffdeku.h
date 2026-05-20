#ifndef OBJECT_BUFFDEKU_H
#define OBJECT_BUFFDEKU_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectBuffDekuSkel {
    /* 0x00 */ BUFFDEKUSKEL_ROOT_POS_LIMB,
    /* 0x01 */ BUFFDEKUSKEL_ROOT_ROT_LIMB,
    /* 0x02 */ BUFFDEKUSKEL_TORSO_LIMB,
    /* 0x03 */ BUFFDEKUSKEL_BOOB_L_LIMB,
    /* 0x04 */ BUFFDEKUSKEL_BOOB_R_LIMB,
    /* 0x05 */ BUFFDEKUSKEL_COLLAR_LIMB,
    /* 0x06 */ BUFFDEKUSKEL_HEAD_LIMB,
    /* 0x07 */ BUFFDEKUSKEL_SHOULDER_L_LIMB,
    /* 0x08 */ BUFFDEKUSKEL_FOREARM_L_LIMB,
    /* 0x09 */ BUFFDEKUSKEL_HAND_L_LIMB,
    /* 0x0A */ BUFFDEKUSKEL_SHOULDER_R_LIMB,
    /* 0x0B */ BUFFDEKUSKEL_FOREARM_R_LIMB,
    /* 0x0C */ BUFFDEKUSKEL_HAND_R_LIMB,
    /* 0x0D */ BUFFDEKUSKEL_WAIST_LIMB,
    /* 0x0E */ BUFFDEKUSKEL_THIGH_L_LIMB,
    /* 0x0F */ BUFFDEKUSKEL_FOOT_L_LIMB,
    /* 0x10 */ BUFFDEKUSKEL_THIGH_R_LIMB,
    /* 0x11 */ BUFFDEKUSKEL_FOOT_R_LIMB,
    /* 0x12 */ BUFFDEKUSKEL_NUM_LIMBS
} ObjectBuffDekuSkel;

extern AnimationHeader BuffDekuSkelGetoutgroundAnim;
extern AnimationHeader BuffDekuSkelPunchAnim;
extern AnimationHeader BuffDekuSkelWalkcycleAnim;
extern AnimationHeader BuffDekuSkelTaunt1Anim;
extern AnimationHeader BuffDekuSkelTaunt2Anim;
extern AnimationHeader BuffDekuSkelTaunt3Anim;
extern AnimationHeader BuffDekuSkelTaunt4Anim;
extern AnimationHeader BuffDekuSkelSpinAnim;
extern AnimationHeader BuffDekuSkelDeathAnim;
extern AnimationHeader BuffDekuSkelPanicAnim;

extern FlexSkeletonHeader BuffDekuSkel;

extern u64 gKingDekuTitleCardTex[];
extern u64 gKingDekuTitleCardPalTex[];

#endif
