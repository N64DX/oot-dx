#include "object_cs.h"

#include "array_count.h"
#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

s16 gGraveyardKidWalkFrameData[] = {
#include "assets/objects/object_cs/gGraveyardKidWalkFrameData.inc.c"
};

JointIndex gGraveyardKidWalkJointIndices[] = {
#include "assets/objects/object_cs/gGraveyardKidWalkJointIndices.inc.c"
};

AnimationHeader gGraveyardKidWalkAnim = {
#include "assets/objects/object_cs/gGraveyardKidWalkAnim.inc.c"
};

s16 gGraveyardKidSwingStickUpFrameData[] = {
#include "assets/objects/object_cs/gGraveyardKidSwingStickUpFrameData.inc.c"
};

JointIndex gGraveyardKidSwingStickUpJointIndices[] = {
#include "assets/objects/object_cs/gGraveyardKidSwingStickUpJointIndices.inc.c"
};

AnimationHeader gGraveyardKidSwingStickUpAnim = {
#include "assets/objects/object_cs/gGraveyardKidSwingStickUpAnim.inc.c"
};

s16 gGraveyardKidGrabStickTwoHandsFrameData[] = {
#include "assets/objects/object_cs/gGraveyardKidGrabStickTwoHandsFrameData.inc.c"
};

JointIndex gGraveyardKidGrabStickTwoHandsJointIndices[] = {
#include "assets/objects/object_cs/gGraveyardKidGrabStickTwoHandsJointIndices.inc.c"
};

AnimationHeader gGraveyardKidGrabStickTwoHandsAnim = {
#include "assets/objects/object_cs/gGraveyardKidGrabStickTwoHandsAnim.inc.c"
};

s16 gGraveyardKidIdleFrameData[] = {
#include "assets/objects/object_cs/gGraveyardKidIdleFrameData.inc.c"
};

JointIndex gGraveyardKidIdleJointIndices[] = {
#include "assets/objects/object_cs/gGraveyardKidIdleJointIndices.inc.c"
};

AnimationHeader gGraveyardKidIdleAnim = {
#include "assets/objects/object_cs/gGraveyardKidIdleAnim.inc.c"
};

u64 gGraveyardKidTLUT[] = {
#include "assets/objects/object_cs/gGraveyardKidTLUT.tlut.rgba16.inc.c"
};

u64 gGraveyardKidGradientTex[TEX_LEN(u64, gGraveyardKidGradientTex_WIDTH, gGraveyardKidGradientTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidGradientTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidHairTex[TEX_LEN(u64, gGraveyardKidHairTex_WIDTH, gGraveyardKidHairTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidHairTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidHair2Tex[TEX_LEN(u64, 16, 32, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidHair2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidEarTex[TEX_LEN(u64, gGraveyardKidEarTex_WIDTH, gGraveyardKidEarTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidEarTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidNoseTex[TEX_LEN(u64, gGraveyardKidNoseTex_WIDTH, gGraveyardKidNoseTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidNoseTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidMouthTex[TEX_LEN(u64, gGraveyardKidMouthTex_WIDTH, gGraveyardKidMouthTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidMouthTex.rgba16.inc.c"
};

u64 gGraveyardKidEyesOpenTex[TEX_LEN(u64, gGraveyardKidEyesOpenTex_WIDTH, gGraveyardKidEyesOpenTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesOpenTex.rgba16.inc.c"
};

u64 gGraveyardKidEyesOpen2Tex[TEX_LEN(u64, gGraveyardKidEyesOpenTex_WIDTH, gGraveyardKidEyesOpenTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesOpen2Tex.rgba16.inc.c"
};

u64 gGraveyardKidEyesHalfTex[TEX_LEN(u64, gGraveyardKidEyesHalfTex_WIDTH, gGraveyardKidEyesHalfTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesHalfTex.rgba16.inc.c"
};

u64 gGraveyardKidEyesHalf2Tex[TEX_LEN(u64, gGraveyardKidEyesHalfTex_WIDTH, gGraveyardKidEyesHalfTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesHalf2Tex.rgba16.inc.c"
};

u64 gGraveyardKidEyesClosedTex[TEX_LEN(u64, gGraveyardKidEyesClosedTex_WIDTH, gGraveyardKidEyesClosedTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesClosedTex.rgba16.inc.c"
};

u64 gGraveyardKidEyesClosed2Tex[TEX_LEN(u64, gGraveyardKidEyesClosedTex_WIDTH, gGraveyardKidEyesClosedTex_HEIGHT, 16)] = {
#include "assets/objects/object_cs/gGraveyardKidEyesClosed2Tex.rgba16.inc.c"
};

u64 gGraveyardKidFingersTex[TEX_LEN(u64, gGraveyardKidFingersTex_WIDTH, gGraveyardKidFingersTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidFingersTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidShirt1Tex[TEX_LEN(u64, gGraveyardKidShirt1Tex_WIDTH, gGraveyardKidShirt1Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidShirt1Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidShirt12Tex[TEX_LEN(u64, gGraveyardKidShirt1Tex_WIDTH, gGraveyardKidShirt1Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidShirt12Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidShirt2Tex[TEX_LEN(u64, gGraveyardKidShirt2Tex_WIDTH, gGraveyardKidShirt2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidShirt2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidShirt22Tex[TEX_LEN(u64, gGraveyardKidShirt2Tex_WIDTH, gGraveyardKidShirt2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidShirt22Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidStickTex[TEX_LEN(u64, gGraveyardKidStickTex_WIDTH, gGraveyardKidStickTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidStickTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidBoot2Tex[TEX_LEN(u64, gGraveyardKidBoot2Tex_WIDTH, gGraveyardKidBoot2Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidBoot2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidBoot1Tex[TEX_LEN(u64, gGraveyardKidBoot1Tex_WIDTH, gGraveyardKidBoot1Tex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidBoot1Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidPantsTex[TEX_LEN(u64, gGraveyardKidPantsTex_WIDTH, gGraveyardKidPantsTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidPantsTex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

u64 gGraveyardKidPants2Tex[TEX_LEN(u64, gGraveyardKidPantsTex_WIDTH, gGraveyardKidPantsTex_HEIGHT, 8)] = {
#include "assets/objects/object_cs/gGraveyardKidPants2Tex.ci8.tlut_gGraveyardKidTLUT.inc.c"
};

Vtx gGraveyardKidHeadVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidHeadVtx.inc.c"
};

Vtx gGraveyardKidLeftHandVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidLeftHandVtx.inc.c"
};

Vtx gGraveyardKidLeftArmVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidLeftArmVtx.inc.c"
};

Vtx gGraveyardKidLeftUpperArmVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidLeftUpperArmVtx.inc.c"
};

Vtx gGraveyardKidRightHandVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidRightHandVtx.inc.c"
};

Vtx gGraveyardKidRightArmVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidRightArmVtx.inc.c"
};

Vtx gGraveyardKidRightUpperArmVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidRightUpperArmVtx.inc.c"
};

Vtx gGraveyardKidChestVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidChestVtx.inc.c"
};

Vtx gGraveyardKidRightFootVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidRightFootVtx.inc.c"
};

Vtx gGraveyardKidRightShinVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidRightShinVtx.inc.c"
};

Vtx gGraveyardKidRightThighVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidRightThighVtx.inc.c"
};

Vtx gGraveyardKidLeftFootVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidLeftFootVtx.inc.c"
};

Vtx gGraveyardKidLeftShinVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidLeftShinVtx.inc.c"
};

Vtx gGraveyardKidLeftThighVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidLeftThighVtx.inc.c"
};

Vtx gGraveyardKidTorsoVtx[] = {
#include "assets/objects/object_cs/gGraveyardKidTorsoVtx.inc.c"
};

Gfx gGraveyardKidChestDL[75] = {
#include "assets/objects/object_cs/gGraveyardKidChestDL.inc.c"
};

Gfx gGraveyardKidChest2DL[75] = {
#include "assets/objects/object_cs/gGraveyardKidChest2DL.inc.c"
};

Gfx gGraveyardKidHeadDL[148] = {
#include "assets/objects/object_cs/gGraveyardKidHeadDL.inc.c"
};

Gfx gGraveyardKidHead2DL[148] = {
#include "assets/objects/object_cs/gGraveyardKidHead2DL.inc.c"
};

Gfx gGraveyardKidRightUpperArmDL[55] = {
#include "assets/objects/object_cs/gGraveyardKidRightUpperArmDL.inc.c"
};

Gfx gGraveyardKidRightUpperArm2DL[55] = {
#include "assets/objects/object_cs/gGraveyardKidRightUpperArm2DL.inc.c"
};

Gfx gGraveyardKidRightArmDL[73] = {
#include "assets/objects/object_cs/gGraveyardKidRightArmDL.inc.c"
};

Gfx gGraveyardKidRightArm2DL[73] = {
#include "assets/objects/object_cs/gGraveyardKidRightArm2DL.inc.c"
};

Gfx gGraveyardKidRightHandDL[92] = {
#include "assets/objects/object_cs/gGraveyardKidRightHandDL.inc.c"
};

Gfx gGraveyardKidLeftUpperArmDL[55] = {
#include "assets/objects/object_cs/gGraveyardKidLeftUpperArmDL.inc.c"
};

Gfx gGraveyardKidLeftUpperArm2DL[55] = {
#include "assets/objects/object_cs/gGraveyardKidLeftUpperArm2DL.inc.c"
};

Gfx gGraveyardKidLeftArmDL[73] = {
#include "assets/objects/object_cs/gGraveyardKidLeftArmDL.inc.c"
};

Gfx gGraveyardKidLeftArm2DL[73] = {
#include "assets/objects/object_cs/gGraveyardKidLeftArm2DL.inc.c"
};

Gfx gGraveyardKidLeftHandDL[49] = {
#include "assets/objects/object_cs/gGraveyardKidLeftHandDL.inc.c"
};

Gfx gGraveyardKidTorsoDL[36] = {
#include "assets/objects/object_cs/gGraveyardKidTorsoDL.inc.c"
};

Gfx gGraveyardKidTorso2DL[36] = {
#include "assets/objects/object_cs/gGraveyardKidTorso2DL.inc.c"
};

Gfx gGraveyardKidRightThighDL[42] = {
#include "assets/objects/object_cs/gGraveyardKidRightThighDL.inc.c"
};

Gfx gGraveyardKidRightThigh2DL[42] = {
#include "assets/objects/object_cs/gGraveyardKidRightThigh2DL.inc.c"
};

Gfx gGraveyardKidRightShinDL[51] = {
#include "assets/objects/object_cs/gGraveyardKidRightShinDL.inc.c"
};

Gfx gGraveyardKidRightFootDL[61] = {
#include "assets/objects/object_cs/gGraveyardKidRightFootDL.inc.c"
};

Gfx gGraveyardKidLeftThighDL[42] = {
#include "assets/objects/object_cs/gGraveyardKidLeftThighDL.inc.c"
};

Gfx gGraveyardKidLeftThigh2DL[42] = {
#include "assets/objects/object_cs/gGraveyardKidLeftThigh2DL.inc.c"
};

Gfx gGraveyardKidLeftShinDL[51] = {
#include "assets/objects/object_cs/gGraveyardKidLeftShinDL.inc.c"
};

Gfx gGraveyardKidLeftFootDL[77] = {
#include "assets/objects/object_cs/gGraveyardKidLeftFootDL.inc.c"
};

StandardLimb gGraveyardKidTorsoLimb = {
#include "assets/objects/object_cs/gGraveyardKidTorsoLimb.inc.c"
};

StandardLimb gGraveyardKidTorso2Limb = {
#include "assets/objects/object_cs/gGraveyardKidTorso2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftThighLimb = {
#include "assets/objects/object_cs/gGraveyardKidLeftThighLimb.inc.c"
};

StandardLimb gGraveyardKidLeftThigh2Limb = {
#include "assets/objects/object_cs/gGraveyardKidLeftThigh2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftShinLimb = {
#include "assets/objects/object_cs/gGraveyardKidLeftShinLimb.inc.c"
};

StandardLimb gGraveyardKidLeftFootLimb = {
#include "assets/objects/object_cs/gGraveyardKidLeftFootLimb.inc.c"
};

StandardLimb gGraveyardKidRightThighLimb = {
#include "assets/objects/object_cs/gGraveyardKidRightThighLimb.inc.c"
};

StandardLimb gGraveyardKidRightThigh2Limb = {
#include "assets/objects/object_cs/gGraveyardKidRightThigh2Limb.inc.c"
};

StandardLimb gGraveyardKidRightShinLimb = {
#include "assets/objects/object_cs/gGraveyardKidRightShinLimb.inc.c"
};

StandardLimb gGraveyardKidRightFootLimb = {
#include "assets/objects/object_cs/gGraveyardKidRightFootLimb.inc.c"
};

StandardLimb gGraveyardKidChestLimb = {
#include "assets/objects/object_cs/gGraveyardKidChestLimb.inc.c"
};

StandardLimb gGraveyardKidChest2Limb = {
#include "assets/objects/object_cs/gGraveyardKidChest2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftShoulderLimb = {
#include "assets/objects/object_cs/gGraveyardKidLeftShoulderLimb.inc.c"
};

StandardLimb gGraveyardKidLeftShoulder2Limb = {
#include "assets/objects/object_cs/gGraveyardKidLeftShoulder2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftArmLimb = {
#include "assets/objects/object_cs/gGraveyardKidLeftArmLimb.inc.c"
};

StandardLimb gGraveyardKidLeftArm2Limb = {
#include "assets/objects/object_cs/gGraveyardKidLeftArm2Limb.inc.c"
};

StandardLimb gGraveyardKidLeftHandLimb = {
#include "assets/objects/object_cs/gGraveyardKidLeftHandLimb.inc.c"
};

StandardLimb gGraveyardKidRightShoulderLimb = {
#include "assets/objects/object_cs/gGraveyardKidRightShoulderLimb.inc.c"
};

StandardLimb gGraveyardKidRightShoulder2Limb = {
#include "assets/objects/object_cs/gGraveyardKidRightShoulder2Limb.inc.c"
};

StandardLimb gGraveyardKidRightArmLimb = {
#include "assets/objects/object_cs/gGraveyardKidRightArmLimb.inc.c"
};

StandardLimb gGraveyardKidRightArm2Limb = {
#include "assets/objects/object_cs/gGraveyardKidRightArm2Limb.inc.c"
};

StandardLimb gGraveyardKidRightHandLimb = {
#include "assets/objects/object_cs/gGraveyardKidRightHandLimb.inc.c"
};

StandardLimb gGraveyardKidHeadLimb = {
#include "assets/objects/object_cs/gGraveyardKidHeadLimb.inc.c"
};

StandardLimb gGraveyardKidHead2Limb = {
#include "assets/objects/object_cs/gGraveyardKidHead2Limb.inc.c"
};

void* gGraveyardKidSkel_06008504_Limbs[] = {
#include "assets/objects/object_cs/gGraveyardKidSkel_06008504_Limbs.inc.c"
};

void* gGraveyardKidSkel2_06008504_Limbs[] = {
#include "assets/objects/object_cs/gGraveyardKidSkel2_06008504_Limbs.inc.c"
};

FlexSkeletonHeader gGraveyardKidSkel = {
#include "assets/objects/object_cs/gGraveyardKidSkel.inc.c"
};

FlexSkeletonHeader gGraveyardKidSkel2 = {
#include "assets/objects/object_cs/gGraveyardKidSkel2.inc.c"
};
