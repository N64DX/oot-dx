#include "assets/objects/gameplay_field_keep/gameplay_field_keep.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"

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

Vtx gHanaFlower1Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower1Vtx.inc.c"
};

Vtx gHanaFlower2Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower2Vtx.inc.c"
};

Vtx gHanaFlower3Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaFlower3Vtx.inc.c"
};

Vtx gHanaLeaf1Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf1Vtx.inc.c"
};

Vtx gHanaLeaf2Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf2Vtx.inc.c"
};

Vtx gHanaLeaf3Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf3Vtx.inc.c"
};

Vtx gHanaLeaf4Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf4Vtx.inc.c"
};

Vtx gHanaLeaf5Vtx[] = {
#include "assets/objects/gameplay_field_keep/gHanaLeaf5Vtx.inc.c"
};

u64 gHanaFlowerTex[TEX_LEN(u64, gHanaFlowerTex_WIDTH, gHanaFlowerTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gHanaFlowerTex.rgba16.inc.c"
};

u64 gHanaLeafTex[TEX_LEN(u64, gHanaLeafTex_WIDTH, gHanaLeafTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gHanaLeafTex.rgba16.inc.c"
};

Vtx gGrottoVtx[] = {
#include "assets/objects/gameplay_field_keep/gGrottoVtx.inc.c"
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

Gfx gameplay_field_keep_002530_DL[2] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_002530_DL.inc.c"
};

Vtx gameplay_field_keep_Vtx_002540[] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_Vtx_002540.inc.c"
};

Gfx gButterflyDL_002580[20] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002580.inc.c"
};

Gfx gButterflyDL_002620[2] = {
#include "assets/objects/gameplay_field_keep/gButterflyDL_002620.inc.c"
};

Gfx gameplay_field_keep_002630_DL[2] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_002630_DL.inc.c"
};

Vtx gameplay_field_keep_Vtx_002640[] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_Vtx_002640.inc.c"
};

u64 gButterflyWingTex[TEX_LEN(u64, gButterflyWingTex_WIDTH, gButterflyWingTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gButterflyWingTex.rgba16.inc.c"
};

StandardLimb gameplay_field_keep_003680_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_003680_Limb.inc.c"
};

StandardLimb gameplay_field_keep_00368C_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_00368C_Limb.inc.c"
};

StandardLimb gameplay_field_keep_003698_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_003698_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0036A4_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0036A4_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0036B0_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0036B0_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0036BC_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0036BC_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0036C8_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0036C8_Limb.inc.c"
};

void* gButterflyLimbs[] = {
#include "assets/objects/gameplay_field_keep/gButterflyLimbs.inc.c"
};

SkeletonHeader gButterflySkel = {
#include "assets/objects/gameplay_field_keep/gButterflySkel.inc.c"
};

u64 gBgBombwallTLUT[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallTLUT.tlut.rgba16.inc.c"
};

u64 gBgBombwallNormalTex[TEX_LEN(u64, gBgBombwallNormalTex_WIDTH, gBgBombwallNormalTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallNormalTex.ci4.tlut_gBgBombwallTLUT.inc.c"
};

u64 gBgBombWallBrokenTex[TEX_LEN(u64, gBgBombWallBrokenTex_WIDTH, gBgBombWallBrokenTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gBgBombWallBrokenTex.ci4.tlut_gBgBombwallTLUT.inc.c"
};

Vtx gBgBombwallNormalVtx[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallNormalVtx.inc.c"
};

Vtx gBgBombwallBrokenVtx[] = {
#include "assets/objects/gameplay_field_keep/gBgBombwallBrokenVtx.inc.c"
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

Vtx gFieldDoorLeftVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorLeftVtx.inc.c"
};

Vtx gFieldDoorRightVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldDoorRightVtx.inc.c"
};

Vtx gameplay_field_keep_Vtx_004620[] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_Vtx_004620.inc.c"
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

Gfx gameplay_field_keep_0061F8_DL[2] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0061F8_DL.inc.c"
};

Vtx gFieldUnusedFishVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishVtx.inc.c"
};

Gfx gFieldSkelUnusedFishDL_0063A8[20] = {
#include "assets/objects/gameplay_field_keep/gFieldSkelUnusedFishDL_0063A8.inc.c"
};

Gfx gFieldSkelUnusedFishDL_006448[2] = {
#include "assets/objects/gameplay_field_keep/gFieldSkelUnusedFishDL_006448.inc.c"
};

Gfx gameplay_field_keep_006458_DL[2] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_006458_DL.inc.c"
};

Vtx gameplay_field_keep_Vtx_006468[] = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_Vtx_006468.inc.c"
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

StandardLimb gameplay_field_keep_0088A8_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0088A8_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0088B4_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0088B4_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0088C0_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0088C0_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0088CC_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0088CC_Limb.inc.c"
};

StandardLimb gameplay_field_keep_0088D8_Limb = {
#include "assets/objects/gameplay_field_keep/gameplay_field_keep_0088D8_Limb.inc.c"
};

void* gFieldUnusedFishLimbs[] = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishLimbs.inc.c"
};

SkeletonHeader gFieldUnusedFishSkel = {
#include "assets/objects/gameplay_field_keep/gFieldUnusedFishSkel.inc.c"
};

u64 gFieldSilverRockTLUT[] = {
#include "assets/objects/gameplay_field_keep/gFieldSilverRockTex.tlut.rgba16.inc.c"
};

u64 gFieldSilverRockTex[TEX_LEN(u64, gFieldSilverRockTex_WIDTH, gFieldSilverRockTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_field_keep/gFieldSilverRockTex.ci4.inc.c"
};

Vtx gSilverRockVtx[] = {
#include "assets/objects/gameplay_field_keep/gSilverRockVtx.inc.c"
};

Gfx gSilverRockDL[34] = {
#include "assets/objects/gameplay_field_keep/gSilverRockDL.inc.c"
};

Vtx gSilverRockFragmentsVtx[] = {
#include "assets/objects/gameplay_field_keep/gSilverRockFragmentsVtx.inc.c"
};

Gfx gSilverRockFragmentsDL[28] = {
#include "assets/objects/gameplay_field_keep/gSilverRockFragmentsDL.inc.c"
};

u64 gFieldBushTex[TEX_LEN(u64, gFieldBushTex_WIDTH, gFieldBushTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_field_keep/gFieldBushTex.rgba16.inc.c"
};

Vtx gFieldBushVtx[] = {
#include "assets/objects/gameplay_field_keep/gFieldBushVtx.inc.c"
};

Gfx gFieldBushDL[19] = {
#include "assets/objects/gameplay_field_keep/gFieldBushDL.inc.c"
};

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

