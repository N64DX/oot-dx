#include "assets/objects/object_ganon2/object_ganon2.h"

#include "array_count.h"
#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

s16 gGanonFinalBlowFrameData[] = {
#include "assets/objects/object_ganon2/gGanonFinalBlowFrameData.inc.c"
};

JointIndex gGanonFinalBlowJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonFinalBlowJointIndices.inc.c"
};

AnimationHeader gGanonFinalBlowAnim = {
#include "assets/objects/object_ganon2/gGanonFinalBlowAnim.inc.c"
};

s16 gGanonDeadStartFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDeadStartFrameData.inc.c"
};

JointIndex gGanonDeadStartJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDeadStartJointIndices.inc.c"
};

AnimationHeader gGanonDeadStartAnim = {
#include "assets/objects/object_ganon2/gGanonDeadStartAnim.inc.c"
};

s16 gGanonDeadLoopFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDeadLoopFrameData.inc.c"
};

JointIndex gGanonDeadLoopJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDeadLoopJointIndices.inc.c"
};

AnimationHeader gGanonDeadLoopAnim = {
#include "assets/objects/object_ganon2/gGanonDeadLoopAnim.inc.c"
};

s16 gGanonGuardToWalk_06008ED0_FrameData[] = {
#include "assets/objects/object_ganon2/gGanonGuardToWalk_06008ED0_FrameData.inc.c"
};

JointIndex gGanonGuardToWalk_06009538_JointIndices[] = {
#include "assets/objects/object_ganon2/gGanonGuardToWalk_06009538_JointIndices.inc.c"
};

AnimationHeader gGanonGuardToWalk = {
#include "assets/objects/object_ganon2/gGanonGuardToWalk.inc.c"
};

s16 gGanonLeftSwordSwingFrameData[] = {
#include "assets/objects/object_ganon2/gGanonLeftSwordSwingFrameData.inc.c"
};

JointIndex gGanonLeftSwordSwingJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonLeftSwordSwingJointIndices.inc.c"
};

AnimationHeader gGanonLeftSwordSwingAnim = {
#include "assets/objects/object_ganon2/gGanonLeftSwordSwingAnim.inc.c"
};

s16 gGanonRightSwordSwingFrameData[] = {
#include "assets/objects/object_ganon2/gGanonRightSwordSwingFrameData.inc.c"
};

JointIndex gGanonRightSwordSwingJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonRightSwordSwingJointIndices.inc.c"
};

AnimationHeader gGanonRightSwordSwingAnim = {
#include "assets/objects/object_ganon2/gGanonRightSwordSwingAnim.inc.c"
};

s16 gGanonDamageFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDamageFrameData.inc.c"
};

JointIndex gGanonDamageJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDamageJointIndices.inc.c"
};

AnimationHeader gGanonDamageAnim = {
#include "assets/objects/object_ganon2/gGanonDamageAnim.inc.c"
};

s16 gGanonGuardWalkFrameData[] = {
#include "assets/objects/object_ganon2/gGanonGuardWalkFrameData.inc.c"
};

JointIndex gGanonGuardWalkJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonGuardWalkJointIndices.inc.c"
};

AnimationHeader gGanonGuardWalkAnim = {
#include "assets/objects/object_ganon2/gGanonGuardWalkAnim.inc.c"
};

s16 gGanonGuardSidestepFrameData[] = {
#include "assets/objects/object_ganon2/gGanonGuardSidestepFrameData.inc.c"
};

JointIndex gGanonGuardSidestepJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonGuardSidestepJointIndices.inc.c"
};

AnimationHeader gGanonGuardSidestepAnim = {
#include "assets/objects/object_ganon2/gGanonGuardSidestepAnim.inc.c"
};

s16 gGanonGuardIdleFrameData[] = {
#include "assets/objects/object_ganon2/gGanonGuardIdleFrameData.inc.c"
};

JointIndex gGanonGuardIdleJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonGuardIdleJointIndices.inc.c"
};

AnimationHeader gGanonGuardIdleAnim = {
#include "assets/objects/object_ganon2/gGanonGuardIdleAnim.inc.c"
};

Vtx gGanonRightHair3Vtx[] = {
#include "assets/objects/object_ganon2/gGanonRightHair3Vtx.inc.c"
};

Vtx gGanonRightHair2Vtx[] = {
#include "assets/objects/object_ganon2/gGanonRightHair2Vtx.inc.c"
};

Vtx gGanonRightHair1Vtx[] = {
#include "assets/objects/object_ganon2/gGanonRightHair1Vtx.inc.c"
};

Vtx gGanonLeftHair3Vtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftHair3Vtx.inc.c"
};

Vtx gGanonLeftHair2Vtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftHair2Vtx.inc.c"
};

Vtx gGanonLeftHair1Vtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftHair1Vtx.inc.c"
};

Vtx gGanonMiddleHair3Vtx[] = {
#include "assets/objects/object_ganon2/gGanonMiddleHair3Vtx.inc.c"
};

Vtx gGanonMiddleHair2Vtx[] = {
#include "assets/objects/object_ganon2/gGanonMiddleHair2Vtx.inc.c"
};

Vtx gGanonMiddleHair1Vtx[] = {
#include "assets/objects/object_ganon2/gGanonMiddleHair1Vtx.inc.c"
};

Vtx gGanonJawVtx[] = {
#include "assets/objects/object_ganon2/gGanonJawVtx.inc.c"
};

Vtx gGanonMouthVtx[] = {
#include "assets/objects/object_ganon2/gGanonMouthVtx.inc.c"
};

Vtx gGanonSnoutVtx[] = {
#include "assets/objects/object_ganon2/gGanonSnoutVtx.inc.c"
};

Vtx gGanonHeadVtx[] = {
#include "assets/objects/object_ganon2/gGanonHeadVtx.inc.c"
};

Vtx gGanonNeckVtx[] = {
#include "assets/objects/object_ganon2/gGanonNeckVtx.inc.c"
};

Vtx gGanonRightWristVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightWristVtx.inc.c"
};

Vtx gGanonRightForearmVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightForearmVtx.inc.c"
};

Vtx gGanonRightUpperArmVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightUpperArmVtx.inc.c"
};

Vtx gGanonRightShoulderVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightShoulderVtx.inc.c"
};

Vtx gGanonLeftWristVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftWristVtx.inc.c"
};

Vtx gGanonLeftForearmVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftForearmVtx.inc.c"
};

Vtx gGanonLeftUpperArmVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftUpperArmVtx.inc.c"
};

Vtx gGanonLeftShoulderVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftShoulderVtx.inc.c"
};

Vtx gGanonTorsoVtx[] = {
#include "assets/objects/object_ganon2/gGanonTorsoVtx.inc.c"
};

Vtx gGanonLeftFootVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftFootVtx.inc.c"
};

Vtx gGanonLeftShinVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftShinVtx.inc.c"
};

Vtx gGanonLeftThighVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftThighVtx.inc.c"
};

Vtx gGanonRightFootVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightFootVtx.inc.c"
};

Vtx gGanonRightShinVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightShinVtx.inc.c"
};

Vtx gGanonRightThighVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightThighVtx.inc.c"
};

Vtx gGanonTail1Vtx[] = {
#include "assets/objects/object_ganon2/gGanonTail1Vtx.inc.c"
};

Vtx gGanonTail2Vtx[] = {
#include "assets/objects/object_ganon2/gGanonTail2Vtx.inc.c"
};

Vtx gGanonTail3Vtx[] = {
#include "assets/objects/object_ganon2/gGanonTail3Vtx.inc.c"
};

Vtx gGanonTail4Vtx[] = {
#include "assets/objects/object_ganon2/gGanonTail4Vtx.inc.c"
};

Vtx gGanonTail5Vtx[] = {
#include "assets/objects/object_ganon2/gGanonTail5Vtx.inc.c"
};

Vtx gGanonPelvisVtx[] = {
#include "assets/objects/object_ganon2/gGanonPelvisVtx.inc.c"
};

Gfx gGanonPelvisDL[72] = {
#include "assets/objects/object_ganon2/gGanonPelvisDL.inc.c"
};

Gfx gGanonTail1DL[34] = {
#include "assets/objects/object_ganon2/gGanonTail1DL.inc.c"
};

Gfx gGanonTail2DL[52] = {
#include "assets/objects/object_ganon2/gGanonTail2DL.inc.c"
};

Gfx gGanonTail3DL[57] = {
#include "assets/objects/object_ganon2/gGanonTail3DL.inc.c"
};

Gfx gGanonTail4DL[40] = {
#include "assets/objects/object_ganon2/gGanonTail4DL.inc.c"
};

Gfx gGanonTail5DL[37] = {
#include "assets/objects/object_ganon2/gGanonTail5DL.inc.c"
};

Gfx gGanonRightShinDL[78] = {
#include "assets/objects/object_ganon2/gGanonRightShinDL.inc.c"
};

Gfx gGanonRightFootDL[60] = {
#include "assets/objects/object_ganon2/gGanonRightFootDL.inc.c"
};

Gfx gGanonRightThighDL[152] = {
#include "assets/objects/object_ganon2/gGanonRightThighDL.inc.c"
};

Gfx gGanonLeftShinDL[94] = {
#include "assets/objects/object_ganon2/gGanonLeftShinDL.inc.c"
};

Gfx gGanonLeftFootDL[60] = {
#include "assets/objects/object_ganon2/gGanonLeftFootDL.inc.c"
};

Gfx gGanonLeftThighDL[152] = {
#include "assets/objects/object_ganon2/gGanonLeftThighDL.inc.c"
};

Gfx gGanonNeckDL[38] = {
#include "assets/objects/object_ganon2/gGanonNeckDL.inc.c"
};

Gfx gGanonHeadDL[174] = {
#include "assets/objects/object_ganon2/gGanonHeadDL.inc.c"
};

Gfx gGanonRightHair3DL[30] = {
#include "assets/objects/object_ganon2/gGanonRightHair3DL.inc.c"
};

Gfx gGanonRightHair2DL[29] = {
#include "assets/objects/object_ganon2/gGanonRightHair2DL.inc.c"
};

Gfx gGanonRightHair1DL[22] = {
#include "assets/objects/object_ganon2/gGanonRightHair1DL.inc.c"
};

Gfx gGanonLeftHair3DL[30] = {
#include "assets/objects/object_ganon2/gGanonLeftHair3DL.inc.c"
};

Gfx gGanonLeftHair2DL[29] = {
#include "assets/objects/object_ganon2/gGanonLeftHair2DL.inc.c"
};

Gfx gGanonLeftHair1DL[22] = {
#include "assets/objects/object_ganon2/gGanonLeftHair1DL.inc.c"
};

Gfx gGanonJawDL[104] = {
#include "assets/objects/object_ganon2/gGanonJawDL.inc.c"
};

Gfx gGanonMouthDL[110] = {
#include "assets/objects/object_ganon2/gGanonMouthDL.inc.c"
};

Gfx gGanonSnoutDL[36] = {
#include "assets/objects/object_ganon2/gGanonSnoutDL.inc.c"
};

Gfx gGanonMiddleHair3DL[30] = {
#include "assets/objects/object_ganon2/gGanonMiddleHair3DL.inc.c"
};

Gfx gGanonMiddleHair2DL[30] = {
#include "assets/objects/object_ganon2/gGanonMiddleHair2DL.inc.c"
};

Gfx gGanonMiddleHair1DL[22] = {
#include "assets/objects/object_ganon2/gGanonMiddleHair1DL.inc.c"
};

Gfx gGanonTorsoDL[144] = {
#include "assets/objects/object_ganon2/gGanonTorsoDL.inc.c"
};

Gfx gGanonRightShoulderDL[69] = {
#include "assets/objects/object_ganon2/gGanonRightShoulderDL.inc.c"
};

Gfx gGanonRightForearmDL[92] = {
#include "assets/objects/object_ganon2/gGanonRightForearmDL.inc.c"
};

Gfx gGanonRightWristDL[33] = {
#include "assets/objects/object_ganon2/gGanonRightWristDL.inc.c"
};

Gfx gGanonRightUpperArmDL[146] = {
#include "assets/objects/object_ganon2/gGanonRightUpperArmDL.inc.c"
};

Gfx gGanonLeftShoulderDL[69] = {
#include "assets/objects/object_ganon2/gGanonLeftShoulderDL.inc.c"
};

Gfx gGanonLeftForearmDL[92] = {
#include "assets/objects/object_ganon2/gGanonLeftForearmDL.inc.c"
};

Gfx gGanonLeftWristDL[33] = {
#include "assets/objects/object_ganon2/gGanonLeftWristDL.inc.c"
};

Gfx gGanonLeftUpperArmDL[146] = {
#include "assets/objects/object_ganon2/gGanonLeftUpperArmDL.inc.c"
};

u64 gGanonBodyTLUT[] = {
#include "assets/objects/object_ganon2/gGanonBodyTex.tlut.rgba16.inc.c"
};

u64 gGanonHairFringeTLUT[] = {
#include "assets/objects/object_ganon2/gGanonHairFringeTex.tlut.rgba16.inc.c"
};

u64 gGanonGerudoFabricTLUT[] = {
#include "assets/objects/object_ganon2/gGanonGerudoFabricTex.tlut.rgba16.inc.c"
};

u64 gGanonRedFabricTLUT[] = {
#include "assets/objects/object_ganon2/gGanonRedFabricTLUT.tlut.rgba16.inc.c"
};

u64 gGanonBlackLeatherAndPauldronTLUT[] = {
#include "assets/objects/object_ganon2/gGanonBlackLeatherAndPauldronTLUT.tlut.rgba16.inc.c"
};

u64 gGanonLeatherTLUT[] = {
#include "assets/objects/object_ganon2/gGanonLeatherTex.tlut.rgba16.inc.c"
};

u64 gGanonHoofTLUT[] = {
#include "assets/objects/object_ganon2/gGanonHoofTex.tlut.rgba16.inc.c"
};

u64 gGanonTailTLUT[] = {
#include "assets/objects/object_ganon2/gGanonTailTex.tlut.rgba16.inc.c"
};

u64 gGanonHairTex[TEX_LEN(u64, gGanonHairTex_WIDTH, gGanonHairTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonHairTex.rgba16.inc.c"
};

u64 gGanonMouthTex[TEX_LEN(u64, gGanonMouthTex_WIDTH, gGanonMouthTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonMouthTex.rgba16.inc.c"
};

u64 gGanonFacialHairTex[TEX_LEN(u64, gGanonFacialHairTex_WIDTH, gGanonFacialHairTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonFacialHairTex.rgba16.inc.c"
};

u64 gGanonBodyTex[TEX_LEN(u64, gGanonBodyTex_WIDTH, gGanonBodyTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonBodyTex.ci8.inc.c"
};

u64 gGanonSnoutFrontTex[TEX_LEN(u64, gGanonSnoutFrontTex_WIDTH, gGanonSnoutFrontTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonSnoutFrontTex.rgba16.inc.c"
};

u64 gGanonSnoutSideTex[TEX_LEN(u64, gGanonSnoutSideTex_WIDTH, gGanonSnoutSideTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonSnoutSideTex.rgba16.inc.c"
};

u64 gGanonHairFringeTex[TEX_LEN(u64, gGanonHairFringeTex_WIDTH, gGanonHairFringeTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonHairFringeTex.ci8.inc.c"
};

u64 gGanonGerudoFabricTex[TEX_LEN(u64, gGanonGerudoFabricTex_WIDTH, gGanonGerudoFabricTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonGerudoFabricTex.ci8.inc.c"
};

u64 gGanonFurTuftTex[TEX_LEN(u64, gGanonFurTuftTex_WIDTH, gGanonFurTuftTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonFurTuftTex.rgba16.inc.c"
};

u64 gGanonRedFabricTex[TEX_LEN(u64, gGanonRedFabricTex_WIDTH, gGanonRedFabricTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonRedFabricTex.ci8.tlut_gGanonRedFabricTLUT.inc.c"
};

u64 gGanonPauldronTex[TEX_LEN(u64, gGanonPauldronTex_WIDTH, gGanonPauldronTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonPauldronTex.ci8.tlut_gGanonBlackLeatherAndPauldronTLUT.inc.c"
};

u64 gGanonCapeFasteningTex[TEX_LEN(u64, gGanonCapeFasteningTex_WIDTH, gGanonCapeFasteningTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonCapeFasteningTex.ci8.tlut_gGanonRedFabricTLUT.inc.c"
};

u64 gGanonBlackLeatherTex[TEX_LEN(u64, gGanonBlackLeatherTex_WIDTH, gGanonBlackLeatherTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonBlackLeatherTex.ci8.tlut_gGanonBlackLeatherAndPauldronTLUT.inc.c"
};

u64 gGanonLeatherTex[TEX_LEN(u64, gGanonLeatherTex_WIDTH, gGanonLeatherTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonLeatherTex.ci8.inc.c"
};

u64 gGanonHoofTex[TEX_LEN(u64, gGanonHoofTex_WIDTH, gGanonHoofTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonHoofTex.ci8.inc.c"
};

u64 gGanonUnderSkirtTex[TEX_LEN(u64, gGanonUnderSkirtTex_WIDTH, gGanonUnderSkirtTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonUnderSkirtTex.rgba16.inc.c"
};

u64 gGanonTailTex[TEX_LEN(u64, gGanonTailTex_WIDTH, gGanonTailTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonTailTex.ci8.inc.c"
};

u64 gGanonEyesTLUT[] = {
#include "assets/objects/object_ganon2/gGanonEyesTLUT.tlut.rgba16.inc.c"
};

u64 gGanonHandTLUT[] = {
#include "assets/objects/object_ganon2/gGanonHandTex.tlut.rgba16.inc.c"
};

u64 gGanonHandTex[TEX_LEN(u64, gGanonHandTex_WIDTH, gGanonHandTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonHandTex.ci8.inc.c"
};

u64 gGanonJewelTex[TEX_LEN(u64, gGanonJewelTex_WIDTH, gGanonJewelTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonJewelTex.rgba16.inc.c"
};

u64 gGanonClawAndTeethTex[TEX_LEN(u64, gGanonClawAndTeethTex_WIDTH, gGanonClawAndTeethTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonClawAndTeethTex.rgba16.inc.c"
};

u64 gGanonEyeOpenTex[TEX_LEN(u64, gGanonEyeOpenTex_WIDTH, gGanonEyeOpenTex_HEIGHT, 4)] = {
#include "assets/objects/object_ganon2/gGanonEyeOpenTex.ci4.tlut_gGanonEyesTLUT.inc.c"
};

u64 gGanonLipsTex[TEX_LEN(u64, gGanonLipsTex_WIDTH, gGanonLipsTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonLipsTex.rgba16.inc.c"
};

u64 gGanonHornBaseTex[TEX_LEN(u64, gGanonHornBaseTex_WIDTH, gGanonHornBaseTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonHornBaseTex.rgba16.inc.c"
};

u64 gGanonHornTex[TEX_LEN(u64, gGanonHornTex_WIDTH, gGanonHornTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonHornTex.rgba16.inc.c"
};

u64 gGanonSwordBladeTex[TEX_LEN(u64, gGanonSwordBladeTex_WIDTH, gGanonSwordBladeTex_HEIGHT, 4)] = {
#include "assets/objects/object_ganon2/gGanonSwordBladeTex.i4.inc.c"
};

u64 gGanonSwordGuardTex[TEX_LEN(u64, gGanonSwordGuardTex_WIDTH, gGanonSwordGuardTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonSwordGuardTex.rgba16.inc.c"
};

u64 gGanonSwordGripTex[TEX_LEN(u64, gGanonSwordGripTex_WIDTH, gGanonSwordGripTex_HEIGHT, 16)] = {
#include "assets/objects/object_ganon2/gGanonSwordGripTex.rgba16.inc.c"
};

u64 gGanonEyeHalfTex[TEX_LEN(u64, gGanonEyeHalfTex_WIDTH, gGanonEyeHalfTex_HEIGHT, 4)] = {
#include "assets/objects/object_ganon2/gGanonEyeHalfTex.ci4.tlut_gGanonEyesTLUT.inc.c"
};

u64 gGanonEyeClosedTex[TEX_LEN(u64, gGanonEyeClosedTex_WIDTH, gGanonEyeClosedTex_HEIGHT, 4)] = {
#include "assets/objects/object_ganon2/gGanonEyeClosedTex.ci4.tlut_gGanonEyesTLUT.inc.c"
};

Vtx gGanonEyesVtx[] = {
#include "assets/objects/object_ganon2/gGanonEyesVtx.inc.c"
};

Vtx gGanonJewelVtx[] = {
#include "assets/objects/object_ganon2/gGanonJewelVtx.inc.c"
};

Vtx gGanonRightHornVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightHornVtx.inc.c"
};

Vtx gGanonLeftHornVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftHornVtx.inc.c"
};

Vtx gGanonRightHandVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightHandVtx.inc.c"
};

Vtx gGanonLeftHandVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftHandVtx.inc.c"
};

Vtx gGanonRightSwordVtx[] = {
#include "assets/objects/object_ganon2/gGanonRightSwordVtx.inc.c"
};

Vtx gGanonLeftSwordVtx[] = {
#include "assets/objects/object_ganon2/gGanonLeftSwordVtx.inc.c"
};

Vtx gGanonOuterTeethVtx[] = {
#include "assets/objects/object_ganon2/gGanonOuterTeethVtx.inc.c"
};

Vtx gGanonInnerTeethVtx[] = {
#include "assets/objects/object_ganon2/gGanonInnerTeethVtx.inc.c"
};

Gfx gGanonEyesDL[25] = {
#include "assets/objects/object_ganon2/gGanonEyesDL.inc.c"
};

Gfx gGanonJewelDL[20] = {
#include "assets/objects/object_ganon2/gGanonJewelDL.inc.c"
};

Gfx gGanonRightHornDL[45] = {
#include "assets/objects/object_ganon2/gGanonRightHornDL.inc.c"
};

Gfx gGanonLeftHornDL[45] = {
#include "assets/objects/object_ganon2/gGanonLeftHornDL.inc.c"
};

Gfx gGanonRightHandDL[58] = {
#include "assets/objects/object_ganon2/gGanonRightHandDL.inc.c"
};

Gfx gGanonLeftHandDL[58] = {
#include "assets/objects/object_ganon2/gGanonLeftHandDL.inc.c"
};

Gfx gGanonRightSwordDL[92] = {
#include "assets/objects/object_ganon2/gGanonRightSwordDL.inc.c"
};

Gfx gGanonLeftSwordDL[93] = {
#include "assets/objects/object_ganon2/gGanonLeftSwordDL.inc.c"
};

Gfx gGanonOuterTeethDL[36] = {
#include "assets/objects/object_ganon2/gGanonOuterTeethDL.inc.c"
};

Gfx gGanonInnerTeethDL[23] = {
#include "assets/objects/object_ganon2/gGanonInnerTeethDL.inc.c"
};

u64 gGanonTitleCardTex[TEX_LEN(u64, gGanonTitleCardTex_WIDTH, gGanonTitleCardTex_HEIGHT, 8)] = {
#include "assets/objects/object_ganon2/gGanonTitleCardTex.ia8.inc.c"
};

StandardLimb gGanonRootLimb = {
#include "assets/objects/object_ganon2/gGanonRootLimb.inc.c"
};

StandardLimb gGanonTorsoLimb = {
#include "assets/objects/object_ganon2/gGanonTorsoLimb.inc.c"
};

StandardLimb gGanonLeftShoulderLimb = {
#include "assets/objects/object_ganon2/gGanonLeftShoulderLimb.inc.c"
};

StandardLimb gGanonLeftUpperArmLimb = {
#include "assets/objects/object_ganon2/gGanonLeftUpperArmLimb.inc.c"
};

StandardLimb gGanonLeftForearmLimb = {
#include "assets/objects/object_ganon2/gGanonLeftForearmLimb.inc.c"
};

StandardLimb gGanonLeftWristLimb = {
#include "assets/objects/object_ganon2/gGanonLeftWristLimb.inc.c"
};

StandardLimb gGanonLeftSwordLimb = {
#include "assets/objects/object_ganon2/gGanonLeftSwordLimb.inc.c"
};

StandardLimb gGanonLeftHandLimb = {
#include "assets/objects/object_ganon2/gGanonLeftHandLimb.inc.c"
};

StandardLimb gGanonRightShoulderLimb = {
#include "assets/objects/object_ganon2/gGanonRightShoulderLimb.inc.c"
};

StandardLimb gGanonRightUpperArmLimb = {
#include "assets/objects/object_ganon2/gGanonRightUpperArmLimb.inc.c"
};

StandardLimb gGanonRightForearmLimb = {
#include "assets/objects/object_ganon2/gGanonRightForearmLimb.inc.c"
};

StandardLimb gGanonRightWristLimb = {
#include "assets/objects/object_ganon2/gGanonRightWristLimb.inc.c"
};

StandardLimb gGanonRightSwordLimb = {
#include "assets/objects/object_ganon2/gGanonRightSwordLimb.inc.c"
};

StandardLimb gGanonRightHandLimb = {
#include "assets/objects/object_ganon2/gGanonRightHandLimb.inc.c"
};

StandardLimb gGanonNeckLimb = {
#include "assets/objects/object_ganon2/gGanonNeckLimb.inc.c"
};

StandardLimb gGanonJewelLimb = {
#include "assets/objects/object_ganon2/gGanonJewelLimb.inc.c"
};

StandardLimb gGanonSnoutLimb = {
#include "assets/objects/object_ganon2/gGanonSnoutLimb.inc.c"
};

StandardLimb gGanonOuterTeethLimb = {
#include "assets/objects/object_ganon2/gGanonOuterTeethLimb.inc.c"
};

StandardLimb gGanonMouthLimb = {
#include "assets/objects/object_ganon2/gGanonMouthLimb.inc.c"
};

StandardLimb gGanonInnerTeethLimb = {
#include "assets/objects/object_ganon2/gGanonInnerTeethLimb.inc.c"
};

StandardLimb gGanonJawLimb = {
#include "assets/objects/object_ganon2/gGanonJawLimb.inc.c"
};

StandardLimb gGanonMiddleHair1Limb = {
#include "assets/objects/object_ganon2/gGanonMiddleHair1Limb.inc.c"
};

StandardLimb gGanonMiddleHair2Limb = {
#include "assets/objects/object_ganon2/gGanonMiddleHair2Limb.inc.c"
};

StandardLimb gGanonMiddleHair3Limb = {
#include "assets/objects/object_ganon2/gGanonMiddleHair3Limb.inc.c"
};

StandardLimb gGanonLeftHair1Limb = {
#include "assets/objects/object_ganon2/gGanonLeftHair1Limb.inc.c"
};

StandardLimb gGanonLeftHair2Limb = {
#include "assets/objects/object_ganon2/gGanonLeftHair2Limb.inc.c"
};

StandardLimb gGanonLeftHair3Limb = {
#include "assets/objects/object_ganon2/gGanonLeftHair3Limb.inc.c"
};

StandardLimb gGanonRightHair1Limb = {
#include "assets/objects/object_ganon2/gGanonRightHair1Limb.inc.c"
};

StandardLimb gGanonRightHair2Limb = {
#include "assets/objects/object_ganon2/gGanonRightHair2Limb.inc.c"
};

StandardLimb gGanonRightHair3Limb = {
#include "assets/objects/object_ganon2/gGanonRightHair3Limb.inc.c"
};

StandardLimb gGanonEyesLimb = {
#include "assets/objects/object_ganon2/gGanonEyesLimb.inc.c"
};

StandardLimb gGanonHeadLimb = {
#include "assets/objects/object_ganon2/gGanonHeadLimb.inc.c"
};

StandardLimb gGanonLeftHornLimb = {
#include "assets/objects/object_ganon2/gGanonLeftHornLimb.inc.c"
};

StandardLimb gGanonRightHornLimb = {
#include "assets/objects/object_ganon2/gGanonRightHornLimb.inc.c"
};

StandardLimb gGanonPelvisLimb = {
#include "assets/objects/object_ganon2/gGanonPelvisLimb.inc.c"
};

StandardLimb gGanonLeftThighLimb = {
#include "assets/objects/object_ganon2/gGanonLeftThighLimb.inc.c"
};

StandardLimb gGanonLeftShinLimb = {
#include "assets/objects/object_ganon2/gGanonLeftShinLimb.inc.c"
};

StandardLimb gGanonLeftFootLimb = {
#include "assets/objects/object_ganon2/gGanonLeftFootLimb.inc.c"
};

StandardLimb gGanonRightThighLimb = {
#include "assets/objects/object_ganon2/gGanonRightThighLimb.inc.c"
};

StandardLimb gGanonRightShinLimb = {
#include "assets/objects/object_ganon2/gGanonRightShinLimb.inc.c"
};

StandardLimb gGanonRightFootLimb = {
#include "assets/objects/object_ganon2/gGanonRightFootLimb.inc.c"
};

StandardLimb gGanonTail1Limb = {
#include "assets/objects/object_ganon2/gGanonTail1Limb.inc.c"
};

StandardLimb gGanonTail2Limb = {
#include "assets/objects/object_ganon2/gGanonTail2Limb.inc.c"
};

StandardLimb gGanonTail3Limb = {
#include "assets/objects/object_ganon2/gGanonTail3Limb.inc.c"
};

StandardLimb gGanonTail4Limb = {
#include "assets/objects/object_ganon2/gGanonTail4Limb.inc.c"
};

StandardLimb gGanonTail5Limb = {
#include "assets/objects/object_ganon2/gGanonTail5Limb.inc.c"
};

void* gGanonSkel_060244B8_Limbs[] = {
#include "assets/objects/object_ganon2/gGanonSkel_060244B8_Limbs.inc.c"
};

FlexSkeletonHeader gGanonSkel = {
#include "assets/objects/object_ganon2/gGanonSkel.inc.c"
};

s16 gGanonStunStartFrameData[] = {
#include "assets/objects/object_ganon2/gGanonStunStartFrameData.inc.c"
};

JointIndex gGanonStunStartJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonStunStartJointIndices.inc.c"
};

AnimationHeader gGanonStunStartAnim = {
#include "assets/objects/object_ganon2/gGanonStunStartAnim.inc.c"
};

s16 gGanonStunLoopFrameData[] = {
#include "assets/objects/object_ganon2/gGanonStunLoopFrameData.inc.c"
};

JointIndex gGanonStunLoopJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonStunLoopJointIndices.inc.c"
};

AnimationHeader gGanonStunLoopAnim = {
#include "assets/objects/object_ganon2/gGanonStunLoopAnim.inc.c"
};

s16 gGanonStunEndFrameData[] = {
#include "assets/objects/object_ganon2/gGanonStunEndFrameData.inc.c"
};

JointIndex gGanonStunEndJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonStunEndJointIndices.inc.c"
};

AnimationHeader gGanonStunEndAnim = {
#include "assets/objects/object_ganon2/gGanonStunEndAnim.inc.c"
};

s16 gGanonDownedStartFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDownedStartFrameData.inc.c"
};

JointIndex gGanonDownedStartJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDownedStartJointIndices.inc.c"
};

AnimationHeader gGanonDownedStartAnim = {
#include "assets/objects/object_ganon2/gGanonDownedStartAnim.inc.c"
};

s16 gGanonStunEndToWalkFrameData[] = {
#include "assets/objects/object_ganon2/gGanonStunEndToWalkFrameData.inc.c"
};

JointIndex gGanonStunEndToWalkJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonStunEndToWalkJointIndices.inc.c"
};

AnimationHeader gGanonStunEndToWalkAnim = {
#include "assets/objects/object_ganon2/gGanonStunEndToWalkAnim.inc.c"
};

s16 gGanonDuplicateStunStartFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDuplicateStunStartFrameData.inc.c"
};

JointIndex gGanonDuplicateStunStartJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDuplicateStunStartJointIndices.inc.c"
};

AnimationHeader gGanonDuplicateStunStartAnim = {
#include "assets/objects/object_ganon2/gGanonDuplicateStunStartAnim.inc.c"
};

s16 gGanonDuplicateStunLoopFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDuplicateStunLoopFrameData.inc.c"
};

JointIndex gGanonDuplicateStunLoopJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDuplicateStunLoopJointIndices.inc.c"
};

AnimationHeader gGanonDuplicateStunLoopAnim = {
#include "assets/objects/object_ganon2/gGanonDuplicateStunLoopAnim.inc.c"
};

s16 gGanonGetUpFrameData[] = {
#include "assets/objects/object_ganon2/gGanonGetUpFrameData.inc.c"
};

JointIndex gGanonGetUpJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonGetUpJointIndices.inc.c"
};

AnimationHeader gGanonGetUpAnim = {
#include "assets/objects/object_ganon2/gGanonGetUpAnim.inc.c"
};

s16 gGanonDownedLoopFrameData[] = {
#include "assets/objects/object_ganon2/gGanonDownedLoopFrameData.inc.c"
};

JointIndex gGanonDownedLoopJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonDownedLoopJointIndices.inc.c"
};

AnimationHeader gGanonDownedLoopAnim = {
#include "assets/objects/object_ganon2/gGanonDownedLoopAnim.inc.c"
};

s16 gGanonWalkFrameData[] = {
#include "assets/objects/object_ganon2/gGanonWalkFrameData.inc.c"
};

JointIndex gGanonWalkJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonWalkJointIndices.inc.c"
};

AnimationHeader gGanonWalkAnim = {
#include "assets/objects/object_ganon2/gGanonWalkAnim.inc.c"
};

s16 gGanonWalkToGuardFrameData[] = {
#include "assets/objects/object_ganon2/gGanonWalkToGuardFrameData.inc.c"
};

JointIndex gGanonWalkToGuardJointIndices[] = {
#include "assets/objects/object_ganon2/gGanonWalkToGuardJointIndices.inc.c"
};

AnimationHeader gGanonWalkToGuardAnim = {
#include "assets/objects/object_ganon2/gGanonWalkToGuardAnim.inc.c"
};
