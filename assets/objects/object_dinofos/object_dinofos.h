#ifndef OBJECT_DINOFOS_H
#define OBJECT_DINOFOS_H

#include "animation.h"
#include "ultra64.h"

typedef enum DinolfosLimb {
    /* 0x00 */ DINOLFOS_LIMB_NONE,
    /* 0x01 */ DINOLFOS_LIMB_LOWER_BODY,
    /* 0x02 */ DINOLFOS_LIMB_LEFT_UPPER_LEG,
    /* 0x03 */ DINOLFOS_LIMB_LEFT_LOWER_LEG,
    /* 0x04 */ DINOLFOS_LIMB_LEFT_CLAWS,
    /* 0x05 */ DINOLFOS_LIMB_RIGHT_UPPER_LEG,
    /* 0x06 */ DINOLFOS_LIMB_RIGHT_LOWER_LEG,
    /* 0x07 */ DINOLFOS_LIMB_RIGHT_CLAWS,
    /* 0x08 */ DINOLFOS_LIMB_UPPER_BODY,
    /* 0x09 */ DINOLFOS_LIMB_LEFT_UPPER_ARM,
    /* 0x0A */ DINOLFOS_LIMB_LEFT_FOREARM,
    /* 0x0B */ DINOLFOS_LIMB_LEFT_HAND,
    /* 0x0C */ DINOLFOS_LIMB_RIGHT_UPPER_ARM,
    /* 0x0D */ DINOLFOS_LIMB_RIGHT_FOREARM,
    /* 0x0E */ DINOLFOS_LIMB_RIGHT_HAND,
    /* 0x0F */ DINOLFOS_LIMB_NECK,
    /* 0x10 */ DINOLFOS_LIMB_HEAD,
    /* 0x11 */ DINOLFOS_LIMB_JAW,
    /* 0x12 */ DINOLFOS_LIMB_UPPER_TAIL,
    /* 0x13 */ DINOLFOS_LIMB_LOWER_TAIL,
    /* 0x14 */ DINOLFOS_LIMB_KNIFE,
    /* 0x15 */ DINOLFOS_LIMB_MAX
} DinolfosLimb;

extern AnimationHeader gDinolfosWalkAnim;
extern AnimationHeader gDinolfosLandAnim;
extern AnimationHeader gDinolfosFireStartAnim;
extern AnimationHeader gDinolfosFireLoopAnim;
extern AnimationHeader gDinolfosFireEndAnim;
extern AnimationHeader gDinolfosJumpAnim;
extern AnimationHeader gDinolfosAttackAnim;
extern AnimationHeader gDinolfosIdleAnim;
extern AnimationHeader gDinolfosCryAnim;
extern AnimationHeader gDinolfosDieAnim;
extern AnimationHeader gDinolfosIntroAnim;
extern AnimationHeader gDinolfosHitAnim;
extern AnimationHeader gDinolfosSidestepAnim;

extern u64 gDinolfosEyeOpenTex[];
extern u64 gDinolfosEyeHalfTex[];
extern u64 gDinolfosEyeClosedTex[];
extern u64 gDinofosFire0Tex[];
extern u64 gDinofosFire1Tex[];
extern u64 gDinofosFire2Tex[];
extern u64 gDinofosFire3Tex[];

extern Gfx gDinofosFireDL[];

extern FlexSkeletonHeader gDinolfosSkel;

#endif
