#ifndef OBJECT_WIZ_H
#define OBJECT_WIZ_H

#include "bgcheck.h"
#include "animation.h"

typedef enum WizrobeLimb {
    /* 0x00 */ WIZROBE_LIMB_NONE,
    /* 0x01 */ WIZROBE_LIMB_PELVIS,
    /* 0x02 */ WIZROBE_LIMB_TORSO,
    /* 0x03 */ WIZROBE_LIMB_LEFT_UPPER_ARM,
    /* 0x04 */ WIZROBE_LIMB_LEFT_FOREARM,
    /* 0x05 */ WIZROBE_LIMB_LEFT_HAND,
    /* 0x06 */ WIZROBE_LIMB_RIGHT_UPPER_ARM,
    /* 0x07 */ WIZROBE_LIMB_RIGHT_FOREARM,
    /* 0x08 */ WIZROBE_LIMB_RIGHT_HAND,
    /* 0x09 */ WIZROBE_LIMB_STAFF,
    /* 0x0A */ WIZROBE_LIMB_NECK,
    /* 0x0B */ WIZROBE_LIMB_HEAD,
    /* 0x0C */ WIZROBE_LIMB_JAW,
    /* 0x0D */ WIZROBE_LIMB_LOINCLOTH,
    /* 0x0E */ WIZROBE_LIMB_LEFT_THIGH,
    /* 0x0F */ WIZROBE_LIMB_LEFT_SHIN,
    /* 0x10 */ WIZROBE_LIMB_LEFT_FOOT,
    /* 0x11 */ WIZROBE_LIMB_RIGHT_THIGH,
    /* 0x12 */ WIZROBE_LIMB_RIGHT_SHIN,
    /* 0x13 */ WIZROBE_LIMB_RIGHT_FOOT,
    /* 0x14 */ WIZROBE_LIMB_MAX
} WizrobeLimb;

extern Gfx gWizrobeIceSmokeMaterialDL[];
extern Gfx gWizrobeIceSmokeModelDL[];
extern Gfx gWizrobePlatformDL[];
extern Gfx gWizrobePlatformLightDL[];
extern Gfx gWizrobeSmallFlameDL[];
extern Gfx gWizrobeMagicProjectileDL[];
extern Gfx gWizrobeFirePoolDL[];
extern Gfx gWizrobeFireSmokeDL[];
extern Gfx gWizrobeBigFlameDL[];
extern Gfx gWizrobeIcePoolDL[];
extern Gfx gWizrobeIcePoolShineDL[];
extern Gfx gWizrobePlatformCenterDL[];

extern FlexSkeletonHeader gWizrobeSkel;

extern CollisionHeader gWizrobePlatformCol;

extern AnimationHeader gWizrobeAttackAnim;
extern AnimationHeader gWizrobeDamageAnim;
extern AnimationHeader gWizrobeDanceAnim;
extern AnimationHeader gWizrobeRunAnim;
extern AnimationHeader gWizrobeWindUpAnim;
extern AnimationHeader gWizrobeIdleAnim;

#endif
