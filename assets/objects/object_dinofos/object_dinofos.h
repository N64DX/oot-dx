#ifndef OBJECT_DINOFOS_H
#define OBJECT_DINOFOS_H 1

#include "animation.h"
#include "tex_len.h"
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

extern s16 sDinolfosWalkAnimFrameData[];
extern JointIndex sDinolfosWalkAnimJointIndices[];
extern AnimationHeader gDinolfosWalkAnim;
extern s16 sDinolfosLandAnimFrameData[];
extern JointIndex sDinolfosLandAnimJointIndices[];
extern AnimationHeader gDinolfosLandAnim;
extern s16 sDinolfosFireStartAnimFrameData[];
extern JointIndex sDinolfosFireStartAnimJointIndices[];
extern AnimationHeader gDinolfosFireStartAnim;
extern s16 sDinolfosFireLoopAnimFrameData[];
extern JointIndex sDinolfosFireLoopAnimJointIndices[];
extern AnimationHeader gDinolfosFireLoopAnim;
extern s16 sDinolfosFireEndAnimFrameData[];
extern JointIndex sDinolfosFireEndAnimJointIndices[];
extern AnimationHeader gDinolfosFireEndAnim;
extern s16 sDinolfosJumpAnimFrameData[];
extern JointIndex sDinolfosJumpAnimJointIndices[];
extern AnimationHeader gDinolfosJumpAnim;
extern s16 sDinolfosAttackAnimFrameData[];
extern JointIndex sDinolfosAttackAnimJointIndices[];
extern AnimationHeader gDinolfosAttackAnim;
extern s16 sDinolfosIdleAnimFrameData[];
extern JointIndex sDinolfosIdleAnimJointIndices[];
extern AnimationHeader gDinolfosIdleAnim;
extern Vtx object_dinofosVtx_002E50[];
extern Gfx gDinolfosKnifeDL[];
extern Gfx gDinolfosLowerTailDL[];
extern Gfx gDinolfosUpperTailDL[];
extern Gfx gDinolfosUpperBodyDL[];
extern Gfx gDinolfosNeckDL[];
extern Gfx gDinolfosHeadDL[];
extern Gfx gDinolfosJawDL[];
extern Gfx gDinolfosRightUpperArmDL[];
extern Gfx gDinolfosRightForearmDL[];
extern Gfx gDinolfosRightHandDL[];
extern Gfx gDinolfosLeftUpperArmDL[];
extern Gfx gDinolfosLeftForearmDL[];
extern Gfx gDinolfosLeftHandDL[];
extern Gfx gDinolfosLowerBodyDL[];
extern Gfx gDinolfosRightUpperLegDL[];
extern Gfx gDinolfosRightLowerLegDL[];
extern Gfx gDinolfosRightClawsDL[];
extern Gfx gDinolfosLeftUpperLegDL[];
extern Gfx gDinolfosLeftLowerLegDL[];
extern Gfx gDinolfosLeftClawsDL[];
extern u64 gDinolfosTLUT[];
extern u64 gDinolfosSkinTex[];
extern u64 gDinolfosScaleTex[];
extern u64 gDinolfosArmorTex[];
extern u64 gDinolfosSpikeTex[];
extern u64 gDinolfosInnerMouthTex[];
extern u64 gDinolfosKnifeHoleTex[];
extern u64 gDinolfosJawTex[];
extern u64 gDinolfosEyeHoleTex[];
extern u64 gDinolfosClawTex[];
extern u64 gDinolfosEyeOpenTex[];
extern u64 gDinolfosEyeHalfTex[];
extern u64 gDinolfosEyeClosedTex[];
extern StandardLimb gDinolfosLowerBodyLimb;
extern StandardLimb gDinolfosLeftUpperLegLimb;
extern StandardLimb gDinolfosLeftLowerLegLimb;
extern StandardLimb gDinolfosLeftClawsLimb;
extern StandardLimb gDinolfosRightUpperLegLimb;
extern StandardLimb gDinolfosRightLowerLegLimb;
extern StandardLimb gDinolfosRightClawsLimb;
extern StandardLimb gDinolfosUpperBodyLimb;
extern StandardLimb gDinolfosLeftUpperArmLimb;
extern StandardLimb gDinolfosLeftForearmLimb;
extern StandardLimb gDinolfosLeftHandLimb;
extern StandardLimb gDinolfosRightUpperArmLimb;
extern StandardLimb gDinolfosRightForearmLimb;
extern StandardLimb gDinolfosRightHandLimb;
extern StandardLimb gDinolfosNeckLimb;
extern StandardLimb gDinolfosHeadLimb;
extern StandardLimb gDinolfosJawLimb;
extern StandardLimb gDinolfosUpperTailLimb;
extern StandardLimb gDinolfosLowerTailLimb;
extern StandardLimb gDinolfosKnifeLimb;
extern void* gDinolfosSkelLimbs[];
extern FlexSkeletonHeader gDinolfosSkel;
extern s16 sDinolfosCryAnimFrameData[];
extern JointIndex sDinolfosCryAnimJointIndices[];
extern AnimationHeader gDinolfosCryAnim;
extern s16 sDinolfosDieAnimFrameData[];
extern JointIndex sDinolfosDieAnimJointIndices[];
extern AnimationHeader gDinolfosDieAnim;
extern s16 sDinolfosIntroAnimFrameData[];
extern JointIndex sDinolfosIntroAnimJointIndices[];
extern AnimationHeader gDinolfosIntroAnim;
extern s16 sDinolfosHitAnimFrameData[];
extern JointIndex sDinolfosHitAnimJointIndices[];
extern AnimationHeader gDinolfosHitAnim;
extern s16 sDinolfosSidestepAnimFrameData[];
extern JointIndex sDinolfosSidestepAnimJointIndices[];
extern AnimationHeader gDinolfosSidestepAnim;

extern u64 gDinofosFire0Tex[TEX_LEN(u64, 32, 32, 4)];
extern u64 gDinofosFire1Tex[TEX_LEN(u64, 32, 32, 4)];
extern u64 gDinofosFire2Tex[TEX_LEN(u64, 32, 32, 4)];
extern u64 gDinofosFire3Tex[TEX_LEN(u64, 32, 32, 4)];
extern Gfx gDinofosFireDL[12];

#endif
