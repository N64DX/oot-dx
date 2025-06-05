#include "assets/objects/gameplay_field_keep/gameplay_field_keep.h"

#include "array_count.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "camera.h"

Gfx gHanaFlower1DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower1DL.inc.c"
};

Gfx gHanaFlower2DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower2DL.inc.c"
};

Gfx gHanaFlower3DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower3DL.inc.c"
};

Gfx gHanaLeaf1DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf1DL.inc.c"
};

Gfx gHanaLeaf2DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf2DL.inc.c"
};

Gfx gHanaLeaf3DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf3DL.inc.c"
};

Gfx gHanaLeaf4DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf4DL.inc.c"
};

Gfx gHanaLeaf5DL[20] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf5DL.inc.c"
};

Gfx gHanaDL[9] = {
#include "assets/objects/gameplay_field_keep/gHanaDL.inc.c"
};

Vtx gHanaFlower1DL_05000548_Vtx_fused_[] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower1DL_05000548_Vtx_fused_.inc.c"
};

u8 gameplay_field_keep_zeros_000748[8] = { 0 };

u64 gHanaFlowerTex[TEX_LEN(u64, gHanaFlowerTex_WIDTH, gHanaFlowerTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gHanaFlowerTex.rgba16.inc.c"
};

u64 gHanaLeafTex[TEX_LEN(u64, gHanaLeafTex_WIDTH, gHanaLeafTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gHanaLeafTex.rgba16.inc.c"
};

Vtx gGrottoDL_05001350_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gGrottoDL_05001350_Vtx.inc.c"
};

Gfx gGrottoDL[18] = {
#include "assets/objects/gameplay_field_keep/gGrottoDL.inc.c"
};

u64 gGrottoTex[TEX_LEN(u64, gGrottoTex_WIDTH, gGrottoTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gGrottoTex.ia16.inc.c"
};

s16 gButterflyFrameData[] = {
#include "assets/objects/gameplay_field_keep/gButterflyFrameData.inc.c"
};

JointIndex gButterflyJointIndices[] = {
#include "assets/objects/gameplay_field_keep/gButterflyJointIndices.inc.c"
};

AnimationHeader gButterflyAnim = {
#include "assets/objects/gameplay_field_keep/gButterflyAnim.inc.c"
};

Gfx gButterflyDL_002480[20] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002480.inc.c"
};

Gfx gButterflyDL_002520[2] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002520.inc.c"
};

Gfx gButterflySkel_050036D4_Limbs_050036A4_StandardLimb_05002530_DL[2] = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_050036A4_StandardLimb_05002530_DL.inc.c"
};

Vtx gButterflyDL_002480_05002540_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002480_05002540_Vtx.inc.c"
};

Gfx gButterflyDL_002580[20] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002580.inc.c"
};

Gfx gButterflyDL_002620[2] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002620.inc.c"
};

Gfx gButterflySkel_050036D4_Limbs_050036C8_StandardLimb_05002630_DL[2] = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_050036C8_StandardLimb_05002630_DL.inc.c"
};

Vtx gButterflyDL_002580_05002640_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002580_05002640_Vtx.inc.c"
};

u64 gButterflyWingTex[TEX_LEN(u64, gButterflyWingTex_WIDTH, gButterflyWingTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gButterflyWingTex.rgba16.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_05003680_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_05003680_StandardLimb.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_0500368C_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_0500368C_StandardLimb.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_05003698_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_05003698_StandardLimb.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_050036A4_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_050036A4_StandardLimb.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_050036B0_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_050036B0_StandardLimb.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_050036BC_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_050036BC_StandardLimb.inc.c"
};

StandardLimb gButterflySkel_050036D4_Limbs_050036C8_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs_050036C8_StandardLimb.inc.c"
};

void* gButterflySkel_050036D4_Limbs[] = {
#include "assets/objects/gameplay_field_keep/gButterflySkel_050036D4_Limbs.inc.c"
};

SkeletonHeader gButterflySkel = {
#include "assets/objects/gameplay_field_keep/gButterflySkel.inc.c"
};

u8 gameplay_field_keep_zeros_0036F8[8] = { 0 };

u64 gBgBombwallTLUT[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallTLUT.tlut.rgba16.inc.c"
};

u64 gBgBombwallNormalTex[TEX_LEN(u64, gBgBombwallNormalTex_WIDTH, gBgBombwallNormalTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallNormalTex.ci4.tlut_gBgBombwallTLUT.inc.c"
};

u64 gBgBombWallBrokenTex[TEX_LEN(u64, gBgBombWallBrokenTex_WIDTH, gBgBombWallBrokenTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gBgBombWallBrokenTex.ci4.tlut_gBgBombwallTLUT.inc.c"
};

Vtx gBgBombwallNormalDL_05003F20_Vtx_fused_[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallNormalDL_05003F20_Vtx_fused_.inc.c"
};

Gfx gBgBombwallNormalDL[25] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallNormalDL.inc.c"
};

Gfx gBgBombwallBrokenDL[25] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallBrokenDL.inc.c"
};

BgCamInfo gBgBombwallBgCamList[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallBgCamList.inc.c"
};

SurfaceType gBgBombwallSurfaceTypes[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallSurfaceTypes.inc.c"
};

CollisionPoly gBgBombwallPolyList[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallPolyList.inc.c"
};

Vec3s gBgBombwallVtxList[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallVtxList.inc.c"
};

CollisionHeader gBgBombwallCol = {
#include "assets/objects/gameplay_field_keep/gBgBombwallCol.inc.c"
};

u8 gameplay_field_keep_zeros_0041DC[4] = { 0 };

Vtx gFieldDoorLeftDL_050041E0_Vtx_fused_[] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorLeftDL_050041E0_Vtx_fused_.inc.c"
};

Gfx gFieldDoorDL_004720[16] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorDL_004720.inc.c"
};

Gfx gFieldDoorLeftDL[59] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorLeftDL.inc.c"
};

Gfx gFieldDoorRightDL[58] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorRightDL.inc.c"
};

u8 gameplay_field_keep_zeros_004B48[8] = { 0 };

u64 gFieldDoorKnobTopHalfTex[TEX_LEN(u64, gFieldDoorKnobTopHalfTex_WIDTH, gFieldDoorKnobTopHalfTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorKnobTopHalfTex.rgba16.inc.c"
};

u64 gFieldDoorKnobTex[TEX_LEN(u64, gFieldDoorKnobTex_WIDTH, gFieldDoorKnobTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorKnobTex.rgba16.inc.c"
};

u64 gFieldDoor1Tex[TEX_LEN(u64, gFieldDoor1Tex_WIDTH, gFieldDoor1Tex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gFieldDoor1Tex.i4.inc.c"
};

s16 gFieldUnusedFishFrameData[] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishFrameData.inc.c"
};

JointIndex gFieldUnusedFishJointIndices[] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishJointIndices.inc.c"
};

AnimationHeader gFieldUnusedFishAnim = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishAnim.inc.c"
};

Gfx gFieldUnusedFishDL[61] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishDL.inc.c"
};

Gfx gFieldSkelUnusedFishDL_0061E8[2] = {
#include "assets/objects/gameplay_field_keep/gFieldSkelUnusedFishDL_0061E8.inc.c"
};

Gfx gFieldUnusedFishSkel_050088E4_Limbs_050088D8_StandardLimb_050061F8_DL[2] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088D8_StandardLimb_050061F8_DL.inc.c"
};

Vtx gFieldUnusedFishDL_05006208_Vtx_fused_[] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishDL_05006208_Vtx_fused_.inc.c"
};

Gfx gFieldSkelUnusedFishDL_0063A8[20] = {
#include "assets/objects/gameplay_field_keep/gFieldSkelUnusedFishDL_0063A8.inc.c"
};

Gfx gFieldSkelUnusedFishDL_006448[2] = {
#include "assets/objects/gameplay_field_keep/gFieldSkelUnusedFishDL_006448.inc.c"
};

Gfx gFieldUnusedFishSkel_050088E4_Limbs_050088CC_StandardLimb_05006458_DL[2] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088CC_StandardLimb_05006458_DL.inc.c"
};

Vtx gFieldSkelUnusedFishDL_0063A8_05006468_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldSkelUnusedFishDL_0063A8_05006468_Vtx.inc.c"
};

u64 gFieldUnusedFishTex[TEX_LEN(u64, gFieldUnusedFishTex_WIDTH, gFieldUnusedFishTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishTex.rgba16.inc.c"
};

u64 gFieldUnusedFishBottomTex[TEX_LEN(u64, gFieldUnusedFishBottomTex_WIDTH, gFieldUnusedFishBottomTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishBottomTex.rgba16.inc.c"
};

u64 gFieldUnusedFishFinTex[TEX_LEN(u64, gFieldUnusedFishFinTex_WIDTH, gFieldUnusedFishFinTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishFinTex.rgba16.inc.c"
};

StandardLimb gFieldUnusedFishSkel_050088E4_Limbs_050088A8_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088A8_StandardLimb.inc.c"
};

StandardLimb gFieldUnusedFishSkel_050088E4_Limbs_050088B4_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088B4_StandardLimb.inc.c"
};

StandardLimb gFieldUnusedFishSkel_050088E4_Limbs_050088C0_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088C0_StandardLimb.inc.c"
};

StandardLimb gFieldUnusedFishSkel_050088E4_Limbs_050088CC_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088CC_StandardLimb.inc.c"
};

StandardLimb gFieldUnusedFishSkel_050088E4_Limbs_050088D8_StandardLimb = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs_050088D8_StandardLimb.inc.c"
};

void* gFieldUnusedFishSkel_050088E4_Limbs[] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel_050088E4_Limbs.inc.c"
};

SkeletonHeader gFieldUnusedFishSkel = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel.inc.c"
};

u64 gFieldBeehiveTex[TEX_LEN(u64, gFieldBeehiveTex_WIDTH, gFieldBeehiveTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveTex.rgba16.inc.c"
};

Vtx gFieldBeehiveDL_05009100_Vtx_fused_[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveDL_05009100_Vtx_fused_.inc.c"
};

Gfx gFieldBeehiveDL[44] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveDL.inc.c"
};

u64 gFieldBeehiveFragmentTex[TEX_LEN(u64, gFieldBeehiveFragmentTex_WIDTH, gFieldBeehiveFragmentTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveFragmentTex.rgba16.inc.c"
};

Vtx gFieldBeehiveFragmentDL_05009910_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveFragmentDL_05009910_Vtx.inc.c"
};

Gfx gFieldBeehiveFragmentDL[18] = {
#include "assets/objects/gameplay_field_keep/gFieldBeehiveFragmentDL.inc.c"
};

u64 gFieldSilverRockTLUT[] = {
#include "assets/objects/gameplay_field_keep/gFieldSilverRockTex.tlut.rgba16.inc.c"
};

u8 gameplay_field_keep_zeros_0099F0[8] = { 0 };

u64 gFieldSilverRockTex[TEX_LEN(u64, gFieldSilverRockTex_WIDTH, gFieldSilverRockTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gFieldSilverRockTex.ci4.inc.c"
};

Vtx gSilverRockDL_0500A1F8_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gSilverRockDL_0500A1F8_Vtx.inc.c"
};

Gfx gSilverRockDL[34] = {
#include "assets/objects/gameplay_field_keep/gSilverRockDL.inc.c"
};

Vtx gSilverRockFragmentsDL_0500A4C8_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gSilverRockFragmentsDL_0500A4C8_Vtx.inc.c"
};

Gfx gSilverRockFragmentsDL[28] = {
#include "assets/objects/gameplay_field_keep/gSilverRockFragmentsDL.inc.c"
};

u8 gameplay_field_keep_zeros_00A6C8[8] = { 0 };

Vtx gFieldKakeraDL_0500A6D0_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldKakeraDL_0500A6D0_Vtx.inc.c"
};

Gfx gFieldKakeraDL[23] = {
#include "assets/objects/gameplay_field_keep/gFieldKakeraDL.inc.c"
};

u8 gameplay_field_keep_zeros_00A938[8] = { 0 };

u64 gFieldKakeraTex[TEX_LEN(u64, gFieldKakeraTex_WIDTH, gFieldKakeraTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldKakeraTex.rgba16.inc.c"
};

u64 gFieldBushTex[TEX_LEN(u64, gFieldBushTex_WIDTH, gFieldBushTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldBushTex.rgba16.inc.c"
};

Vtx gFieldBushDL_0500B940_Vtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldBushDL_0500B940_Vtx.inc.c"
};

Gfx gFieldBushDL[19] = {
#include "assets/objects/gameplay_field_keep/gFieldBushDL.inc.c"
};

u8 gameplay_field_keep_zeros_00BA68[8] = { 0 };

u64 gFieldSandstorm1Tex[TEX_LEN(u64, gFieldSandstorm1Tex_WIDTH, gFieldSandstorm1Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_field_keep/gFieldSandstorm1Tex.i8.inc.c"
};

u64 gFieldSandstorm2Tex[TEX_LEN(u64, gFieldSandstorm2Tex_WIDTH, gFieldSandstorm2Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_field_keep/gFieldSandstorm2Tex.ia8.inc.c"
};

Gfx gFieldSandstormDL[24] = {
#include "assets/objects/gameplay_field_keep/gFieldSandstormDL.inc.c"
};

u64 gFieldKeepTex_00CB30[TEX_LEN(u64, gFieldKeepTex_00CB30_WIDTH, gFieldKeepTex_00CB30_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldKeepTex_00CB30.rgba16.inc.c"
};

