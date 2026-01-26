#ifndef OBJECT_TL_H
#define OBJECT_TL_H

#include "animation.h"
#include "ultra64.h"

typedef enum SpikedSnapperLimb {
    /* 0x00 */ SPIKED_SNAPPER_LIMB_NONE,
    /* 0x01 */ SPIKED_SNAPPER_LIMB_BODY,
    /* 0x02 */ SPIKED_SNAPPER_LIMB_SHELL,
    /* 0x03 */ SPIKED_SNAPPER_LIMB_SPIKES,
    /* 0x04 */ SPIKED_SNAPPER_LIMB_MAX
} SpikedSnapperLimb;

typedef enum SnapperLimb {
    /* 0x00 */ SNAPPER_LIMB_NONE,
    /* 0x01 */ SNAPPER_LIMB_BODY,
    /* 0x02 */ SNAPPER_LIMB_HEAD,
    /* 0x03 */ SNAPPER_LIMB_JAW,
    /* 0x04 */ SNAPPER_LIMB_EYES,
    /* 0x05 */ SNAPPER_LIMB_FRONT_LEFT_LEG,
    /* 0x06 */ SNAPPER_LIMB_FRONT_LEFT_FOOT,
    /* 0x07 */ SNAPPER_LIMB_FRONT_RIGHT_LEG,
    /* 0x08 */ SNAPPER_LIMB_FRONT_RIGHT_FOOT,
    /* 0x09 */ SNAPPER_LIMB_BACK_LEFT_LEG,
    /* 0x0A */ SNAPPER_LIMB_BACK_LEFT_FOOT,
    /* 0x0B */ SNAPPER_LIMB_BACK_RIGHT_LEG,
    /* 0x0C */ SNAPPER_LIMB_BACK_RIGHT_FOOT,
    /* 0x0D */ SNAPPER_LIMB_MAX
} SnapperLimb;

extern s16 sSnapperRearUpAnimFrameData[];
extern JointIndex sSnapperRearUpAnimJointIndices[];
extern AnimationHeader gSnapperRearUpAnim;
extern s16 sSnapperDamageAnimFrameData[];
extern JointIndex sSnapperDamageAnimJointIndices[];
extern AnimationHeader gSnapperDamageAnim;
extern s16 sSnapperDeathAnimFrameData[];
extern JointIndex sSnapperDeathAnimJointIndices[];
extern AnimationHeader gSnapperDeathAnim;
extern s16 sSpikedSnapperIdleAnimFrameData[];
extern JointIndex sSpikedSnapperIdleAnimJointIndices[];
extern AnimationHeader gSpikedSnapperIdleAnim;
extern Vtx object_tlVtx_000B40[];
extern Gfx gSpikedSnapperBodyDL[];
extern Gfx gSpikedSnapperShellDL[];
extern Gfx gSpikedSnapperSpikesDL[];
extern StandardLimb gSpikedSnapperBodyLimb;
extern StandardLimb gSpikedSnapperShellLimb;
extern StandardLimb gSpikedSnapperSpikesLimb;
extern void* gSpikedSnapperSkelLimbs[];
extern FlexSkeletonHeader gSpikedSnapperSkel;
extern s16 sSnapperRetreatIntoShellAnimFrameData[];
extern JointIndex sSnapperRetreatIntoShellAnimJointIndices[];
extern AnimationHeader gSnapperRetreatIntoShellAnim;
extern s16 sSnapperFlipUprightAnimFrameData[];
extern JointIndex sSnapperFlipUprightAnimJointIndices[];
extern AnimationHeader gSnapperFlipUprightAnim;
extern s16 sSnapperWiggleLegsAnimFrameData[];
extern JointIndex sSnapperWiggleLegsAnimJointIndices[];
extern AnimationHeader gSnapperWiggleLegsAnim;
extern s16 sSnapperFailToFlipUprightAnimFrameData[];
extern JointIndex sSnapperFailToFlipUprightAnimJointIndices[];
extern AnimationHeader gSnapperFailToFlipUprightAnim;
extern s16 sSnapperEmergeFromShellAnimFrameData[];
extern JointIndex sSnapperEmergeFromShellAnimJointIndices[];
extern AnimationHeader gSnapperEmergeFromShellAnim;
extern s16 sSnapperBouncedUprightAnimFrameData[];
extern JointIndex sSnapperBouncedUprightAnimJointIndices[];
extern AnimationHeader gSnapperBouncedUprightAnim;
extern void* object_tlTexCycleTexPtrs_003600[];
extern u8 object_tlTexCycleTexIndices_00360C[];
extern s16 sSnapperFlipOverAnimFrameData[];
extern JointIndex sSnapperFlipOverAnimJointIndices[];
extern AnimationHeader gSnapperFlipOverAnim;
extern s16 sSnapperIdleAnimFrameData[];
extern JointIndex sSnapperIdleAnimJointIndices[];
extern AnimationHeader gSnapperIdleAnim;
extern u64 gSnapperShellTex[];
extern u64 gSnapperBodyTex[];
extern u64 gSnapperLegTex[];
extern u64 gSnapperHeadTex[];
extern u64 gSnapperMouthTex[];
extern u64 gSnapperHoleTex[];
extern u64 gSnapperSpikeSkinTex[];
extern u64 gSnapperSpikeTex[];
extern u64 gSnapperEyeOpenTex[];
extern u64 gSnapperEyeHalfTex[];
extern u64 gSnapperEyeClosedTex[];
extern Vtx object_tlVtx_005BA0[];
extern Gfx gSnapperBodyDL[];
extern Gfx gSnapperBackRightLegDL[];
extern Gfx gSnapperBackRightFootDL[];
extern Gfx gSnapperBackLeftLegDL[];
extern Gfx gSnapperBackLeftFootDL[];
extern Gfx gSnapperFrontRightLegDL[];
extern Gfx gSnapperFrontRightFootDL[];
extern Gfx gSnapperFrontLeftLegDL[];
extern Gfx gSnapperFrontLeftFootDL[];
extern Gfx gSnapperHeadDL[];
extern Gfx gSnapperEyesDL[];
extern Gfx gSnapperJawDL[];
extern StandardLimb gSnapperBodyLimb;
extern StandardLimb gSnapperHeadLimb;
extern StandardLimb gSnapperJawLimb;
extern StandardLimb gSnapperEyesLimb;
extern StandardLimb gSnapperFrontLeftLegLimb;
extern StandardLimb gSnapperFrontLeftFootLimb;
extern StandardLimb gSnapperFrontRightLegLimb;
extern StandardLimb gSnapperFrontRightFootLimb;
extern StandardLimb gSnapperBackLeftLegLimb;
extern StandardLimb gSnapperBackLeftFootLimb;
extern StandardLimb gSnapperBackRightLegLimb;
extern StandardLimb gSnapperBackRightFootLimb;
extern void* gSnapperSkelLimbs[];
extern FlexSkeletonHeader gSnapperSkel;
extern s16 sSnapperWalkAnimFrameData[];
extern JointIndex sSnapperWalkAnimJointIndices[];
extern AnimationHeader gSnapperWalkAnim;
#endif
