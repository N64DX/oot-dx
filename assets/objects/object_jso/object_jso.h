#ifndef OBJECT_JSO_H
#define OBJECT_JSO_H

#include "animation.h"
#include "ultra64.h"

typedef enum GaroMasterLimb {
    /* 0x00 */ GARO_MASTER_LIMB_NONE,
    /* 0x01 */ GARO_MASTER_LIMB_ROOT,
    /* 0x02 */ GARO_MASTER_LIMB_TORSO,
    /* 0x03 */ GARO_MASTER_LIMB_LEFT_ARM,
    /* 0x04 */ GARO_MASTER_LIMB_LEFT_SWORD,
    /* 0x05 */ GARO_MASTER_LIMB_RIGHT_ARM,
    /* 0x06 */ GARO_MASTER_LIMB_RIGHT_SWORD,
    /* 0x07 */ GARO_MASTER_LIMB_ROBE_TOP,
    /* 0x08 */ GARO_MASTER_LIMB_ROBE_BACK,
    /* 0x09 */ GARO_MASTER_LIMB_ROBE_LEFT,
    /* 0x0A */ GARO_MASTER_LIMB_ROBE_RIGHT,
    /* 0x0B */ GARO_MASTER_LIMB_ROBE_FRONT,
    /* 0x0C */ GARO_MASTER_LIMB_HEAD,
    /* 0x0D */ GARO_MASTER_LIMB_LOWER_BODY_ROOT,
    /* 0x0E */ GARO_MASTER_LIMB_RIGHT_THIGH,
    /* 0x0F */ GARO_MASTER_LIMB_RIGHT_SHIN,
    /* 0x10 */ GARO_MASTER_LIMB_RIGHT_FOOT,
    /* 0x11 */ GARO_MASTER_LIMB_LEFT_THIGH,
    /* 0x12 */ GARO_MASTER_LIMB_LEFT_SHIN,
    /* 0x13 */ GARO_MASTER_LIMB_LEFT_FOOT,
    /* 0x14 */ GARO_MASTER_LIMB_MAX
} GaroMasterLimb;

typedef enum GaroLimb {
    /* 0x00 */ GARO_LIMB_NONE,
    /* 0x01 */ GARO_LIMB_ROOT,
    /* 0x02 */ GARO_LIMB_TORSO,
    /* 0x03 */ GARO_LIMB_LEFT_ARM,
    /* 0x04 */ GARO_LIMB_LEFT_SWORD,
    /* 0x05 */ GARO_LIMB_RIGHT_ARM,
    /* 0x06 */ GARO_LIMB_RIGHT_SWORD,
    /* 0x07 */ GARO_LIMB_ROBE_TOP,
    /* 0x08 */ GARO_LIMB_ROBE_BACK,
    /* 0x09 */ GARO_LIMB_ROBE_LEFT,
    /* 0x0A */ GARO_LIMB_ROBE_RIGHT,
    /* 0x0B */ GARO_LIMB_ROBE_FRONT,
    /* 0x0C */ GARO_LIMB_HEAD,
    /* 0x0D */ GARO_LIMB_LOWER_BODY_ROOT,
    /* 0x0E */ GARO_LIMB_RIGHT_THIGH,
    /* 0x0F */ GARO_LIMB_RIGHT_SHIN,
    /* 0x10 */ GARO_LIMB_RIGHT_FOOT,
    /* 0x11 */ GARO_LIMB_LEFT_THIGH,
    /* 0x12 */ GARO_LIMB_LEFT_SHIN,
    /* 0x13 */ GARO_LIMB_LEFT_FOOT,
    /* 0x14 */ GARO_LIMB_MAX
} GaroLimb;

extern FlexSkeletonHeader gGaroMasterSkel;

extern AnimationHeader gGaroStaticJumpPoseAnim;
extern AnimationHeader gGaroDashAttackAnim;
extern AnimationHeader gGaroSlashStartAnim;
extern AnimationHeader gGaroSlashLoopAnim;
extern AnimationHeader gGaroJumpBackAnim;
extern AnimationHeader gGaroTakeOutBombAnim;
extern AnimationHeader gGaroLandAnim;
extern AnimationHeader gGaroDamagedAnim;
extern AnimationHeader gGaroGuardAnim;
extern AnimationHeader gGaroAppearAndDrawSwordsAnim;
extern AnimationHeader gGaroFallDownAnim;
extern AnimationHeader gGaroKnockedBackAnim;
extern AnimationHeader gGaroTrembleAnim;
extern AnimationHeader gGaroCollapseAnim;
extern AnimationHeader gGaroDrawSwordsAnim;
extern AnimationHeader gGaroJumpDownAnim;
extern AnimationHeader gGaroSpinAttackAnim;
extern AnimationHeader gGaroLookAroundAnim;
extern AnimationHeader gGaroCowerAnim;
extern AnimationHeader gGaroAppearAnim;

extern FlexSkeletonHeader gGaroSkel;

extern AnimationHeader gGaroIdleAnim;
extern AnimationHeader gGaroLaughAnim;
extern AnimationHeader gGaroBounceAnim;

#endif
