#ifndef GAMEPLAY_FIELD_KEEP_H
#define GAMEPLAY_FIELD_KEEP_H

#include "animation.h"
#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Gfx gHanaFlower1DL[20];
extern Gfx gHanaFlower2DL[20];
extern Gfx gHanaFlower3DL[20];
extern Gfx gHanaLeaf1DL[20];
extern Gfx gHanaLeaf2DL[20];
extern Gfx gHanaLeaf3DL[20];
extern Gfx gHanaLeaf4DL[20];
extern Gfx gHanaLeaf5DL[20];
extern Gfx gHanaDL[9];
extern Vtx gHanaFlower1DL_05000548_Vtx_fused_[];
#define gHanaFlowerTex_WIDTH 16
#define gHanaFlowerTex_HEIGHT 32
extern u64 gHanaFlowerTex[TEX_LEN(u64, gHanaFlowerTex_WIDTH, gHanaFlowerTex_HEIGHT, 16)];
#define gHanaLeafTex_WIDTH 32
#define gHanaLeafTex_HEIGHT 32
extern u64 gHanaLeafTex[TEX_LEN(u64, gHanaLeafTex_WIDTH, gHanaLeafTex_HEIGHT, 16)];
extern Vtx gGrottoDL_05001350_Vtx[];
extern Gfx gGrottoDL[18];
#define gGrottoTex_WIDTH 32
#define gGrottoTex_HEIGHT 64
extern u64 gGrottoTex[TEX_LEN(u64, gGrottoTex_WIDTH, gGrottoTex_HEIGHT, 16)];
extern s16 gButterflyFrameData[];
extern JointIndex gButterflyJointIndices[];
extern AnimationHeader gButterflyAnim;
extern Gfx gButterflyDL_002480[20];
extern Gfx gButterflyDL_002520[2];
extern Gfx gButterflySkel_050036D4_Limbs_050036A4_StandardLimb_05002530_DL[2];
extern Vtx gButterflyDL_002480_05002540_Vtx[];
extern Gfx gButterflyDL_002580[20];
extern Gfx gButterflyDL_002620[2];
extern Gfx gButterflySkel_050036D4_Limbs_050036C8_StandardLimb_05002630_DL[2];
extern Vtx gButterflyDL_002580_05002640_Vtx[];
#define gButterflyWingTex_WIDTH 32
#define gButterflyWingTex_HEIGHT 64
extern u64 gButterflyWingTex[TEX_LEN(u64, gButterflyWingTex_WIDTH, gButterflyWingTex_HEIGHT, 16)];
extern StandardLimb gButterflySkel_050036D4_Limbs_05003680_StandardLimb;
extern StandardLimb gButterflySkel_050036D4_Limbs_0500368C_StandardLimb;
extern StandardLimb gButterflySkel_050036D4_Limbs_05003698_StandardLimb;
extern StandardLimb gButterflySkel_050036D4_Limbs_050036A4_StandardLimb;
extern StandardLimb gButterflySkel_050036D4_Limbs_050036B0_StandardLimb;
extern StandardLimb gButterflySkel_050036D4_Limbs_050036BC_StandardLimb;
extern StandardLimb gButterflySkel_050036D4_Limbs_050036C8_StandardLimb;
extern void* gButterflySkel_050036D4_Limbs[];
typedef enum gButterflySkelLimb {
    /*  0 */ LIMB_GAMEPLAY_FIELD_KEEP_0036F0_NONE,
    /*  1 */ LIMB_GAMEPLAY_FIELD_KEEP_003680,
    /*  2 */ LIMB_GAMEPLAY_FIELD_KEEP_00368C,
    /*  3 */ LIMB_GAMEPLAY_FIELD_KEEP_003698,
    /*  4 */ LIMB_GAMEPLAY_FIELD_KEEP_0036A4,
    /*  5 */ LIMB_GAMEPLAY_FIELD_KEEP_0036B0,
    /*  6 */ LIMB_GAMEPLAY_FIELD_KEEP_0036BC,
    /*  7 */ LIMB_GAMEPLAY_FIELD_KEEP_0036C8,
    /*  8 */ LIMB_GAMEPLAY_FIELD_KEEP_0036F0_MAX
} gButterflySkelLimb;
extern SkeletonHeader gButterflySkel;
//#define gBgBombwallTLUT_TLUT_COUNT 16
extern u64 gBgBombwallTLUT[];
#define gBgBombwallNormalTex_WIDTH 32
#define gBgBombwallNormalTex_HEIGHT 64
extern u64 gBgBombwallNormalTex[TEX_LEN(u64, gBgBombwallNormalTex_WIDTH, gBgBombwallNormalTex_HEIGHT, 4)];
#define gBgBombWallBrokenTex_WIDTH 32
#define gBgBombWallBrokenTex_HEIGHT 64
extern u64 gBgBombWallBrokenTex[TEX_LEN(u64, gBgBombWallBrokenTex_WIDTH, gBgBombWallBrokenTex_HEIGHT, 4)];
extern Vtx gBgBombwallNormalDL_05003F20_Vtx_fused_[];
extern Gfx gBgBombwallNormalDL[25];
extern Gfx gBgBombwallBrokenDL[25];
extern BgCamInfo gBgBombwallBgCamList[];
extern SurfaceType gBgBombwallSurfaceTypes[];
extern CollisionPoly gBgBombwallPolyList[];
extern Vec3s gBgBombwallVtxList[];
extern CollisionHeader gBgBombwallCol;
extern Vtx gFieldDoorLeftDL_050041E0_Vtx_fused_[];
extern Gfx gFieldDoorDL_004720[16];
extern Gfx gFieldDoorLeftDL[59];
extern Gfx gFieldDoorRightDL[58];
#define gFieldDoorKnobTopHalfTex_WIDTH 16
#define gFieldDoorKnobTopHalfTex_HEIGHT 16
extern u64 gFieldDoorKnobTopHalfTex[TEX_LEN(u64, gFieldDoorKnobTopHalfTex_WIDTH, gFieldDoorKnobTopHalfTex_HEIGHT, 16)];
#define gFieldDoorKnobTex_WIDTH 16
#define gFieldDoorKnobTex_HEIGHT 16
extern u64 gFieldDoorKnobTex[TEX_LEN(u64, gFieldDoorKnobTex_WIDTH, gFieldDoorKnobTex_HEIGHT, 16)];
#define gFieldDoor1Tex_WIDTH 64
#define gFieldDoor1Tex_HEIGHT 128
extern u64 gFieldDoor1Tex[TEX_LEN(u64, gFieldDoor1Tex_WIDTH, gFieldDoor1Tex_HEIGHT, 4)];
//#define gFieldSilverRockTLUT_TLUT_COUNT 16
extern u64 gFieldSilverRockTLUT[];
#define gFieldSilverRockTex_WIDTH 64
#define gFieldSilverRockTex_HEIGHT 64
extern u64 gFieldSilverRockTex[TEX_LEN(u64, gFieldSilverRockTex_WIDTH, gFieldSilverRockTex_HEIGHT, 4)];
extern Vtx gSilverRockDL_0500A1F8_Vtx[];
extern Gfx gSilverRockDL[34];
extern Vtx gSilverRockFragmentsDL_0500A4C8_Vtx[];
extern Gfx gSilverRockFragmentsDL[28];
#define gFieldBushTex_WIDTH 32
#define gFieldBushTex_HEIGHT 32
extern u64 gFieldBushTex[TEX_LEN(u64, gFieldBushTex_WIDTH, gFieldBushTex_HEIGHT, 16)];
extern Vtx gFieldBushDL_0500B940_Vtx[];
extern Gfx gFieldBushDL[19];
#define gFieldSandstorm1Tex_WIDTH 64
#define gFieldSandstorm1Tex_HEIGHT 32
extern u64 gFieldSandstorm1Tex[TEX_LEN(u64, gFieldSandstorm1Tex_WIDTH, gFieldSandstorm1Tex_HEIGHT, 8)];
#define gFieldSandstorm2Tex_WIDTH 64
#define gFieldSandstorm2Tex_HEIGHT 32
extern u64 gFieldSandstorm2Tex[TEX_LEN(u64, gFieldSandstorm2Tex_WIDTH, gFieldSandstorm2Tex_HEIGHT, 8)];
extern Gfx gFieldSandstormDL[24];
#define gFieldKeepTex_00CB30_WIDTH 32
#define gFieldKeepTex_00CB30_HEIGHT 32
extern u64 gFieldKeepTex_00CB30[TEX_LEN(u64, gFieldKeepTex_00CB30_WIDTH, gFieldKeepTex_00CB30_HEIGHT, 16)];

#endif
