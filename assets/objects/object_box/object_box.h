#ifndef OBJECT_BOX_H
#define OBJECT_BOX_H

#include "animation.h"
#include "bgcheck.h"
#include "curve.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern s16 gTreasureChestAnim_000128_06000000_FrameData[];
extern JointIndex gTreasureChestAnim_000128_06000108_JointIndices[];
extern AnimationHeader gTreasureChestAnim_000128;
extern s16 gTreasureChestAnim_00024C_06000140_FrameData[];
extern JointIndex gTreasureChestAnim_00024C_0600022C_JointIndices[];
extern AnimationHeader gTreasureChestAnim_00024C;
extern u8 object_box_zeroes_Blob_00025C[];
extern s16 gTreasureChestAnim_00043C_06000350_FrameData[];
extern JointIndex gTreasureChestAnim_00043C_0600041C_JointIndices[];
extern AnimationHeader gTreasureChestAnim_00043C;
extern u8 object_box_zeroes_Blob_00044C[];
extern Vtx gTreasureChestChestFrontVtx[];
extern Gfx gTreasureChestChestFrontDL[55];
extern Vtx gTreasureChestBossKeyChestFrontVtx[];
extern Gfx gTreasureChestBossKeyChestFrontDL[55];
extern Vtx gTreasureChestChestSideAndLidVtx[];
extern Gfx gTreasureChestChestSideAndLidDL[51];
extern Vtx gTreasureChestBossKeyChestSideAndTopVtx[];
extern Gfx gTreasureChestBossKeyChestSideAndTopDL[36];
#define gTreasureChestFrontTex_WIDTH 32
#define gTreasureChestFrontTex_HEIGHT 64
extern u64 gTreasureChestFrontTex[TEX_LEN(u64, gTreasureChestFrontTex_WIDTH, gTreasureChestFrontTex_HEIGHT, 16)];
#define gTreasureChestSideAndTopTex_WIDTH 32
#define gTreasureChestSideAndTopTex_HEIGHT 32
extern u64 gTreasureChestSideAndTopTex[TEX_LEN(u64, gTreasureChestSideAndTopTex_WIDTH, gTreasureChestSideAndTopTex_HEIGHT, 16)];
#define gTreasureChestBossKeySideAndTopTex_WIDTH 32
#define gTreasureChestBossKeySideAndTopTex_HEIGHT 32
extern u64 gTreasureChestBossKeySideAndTopTex[TEX_LEN(u64, gTreasureChestBossKeySideAndTopTex_WIDTH, gTreasureChestBossKeySideAndTopTex_HEIGHT, 16)];
#define gTreasureChestBossKeyFrontTex_WIDTH 32
#define gTreasureChestBossKeyFrontTex_HEIGHT 64
extern u64 gTreasureChestBossKeyFrontTex[TEX_LEN(u64, gTreasureChestBossKeyFrontTex_WIDTH, gTreasureChestBossKeyFrontTex_HEIGHT, 16)];
extern StandardLimb gTreasureChestSkel_060047C8_Limbs_06004798_StandardLimb;
extern StandardLimb gTreasureChestSkel_060047C8_Limbs_060047A4_StandardLimb;
extern StandardLimb gTreasureChestSkel_060047C8_Limbs_060047B0_StandardLimb;
extern StandardLimb gTreasureChestSkel_060047C8_Limbs_060047BC_StandardLimb;
extern void* gTreasureChestSkel_060047C8_Limbs[];
typedef enum gTreasureChestSkelLimb {
    /*  0 */ LIMB_OBJECT_BOX_0047D8_NONE,
    /*  1 */ LIMB_OBJECT_BOX_004798,
    /*  2 */ LIMB_OBJECT_BOX_0047A4,
    /*  3 */ LIMB_OBJECT_BOX_0047B0,
    /*  4 */ LIMB_OBJECT_BOX_0047BC,
    /*  5 */ LIMB_OBJECT_BOX_0047D8_MAX
} gTreasureChestSkelLimb;
extern FlexSkeletonHeader gTreasureChestSkel;
extern u8 gTreasureChestCurveAnim_4B60_060047F0_KnotCounts[];
extern s16 gTreasureChestCurveAnim_4B60_06004870_ConstantData[];
extern CurveInterpKnot gTreasureChestCurveAnim_4B60_0600495C_InterpolationData[];
extern CurveAnimationHeader gTreasureChestCurveAnim_4B60;
extern u8 gTreasureChestCurveAnim_4F70_06004B70_KnotCounts[];
extern s16 gTreasureChestCurveAnim_4F70_06004BF0_ConstantData[];
extern CurveInterpKnot gTreasureChestCurveAnim_4F70_06004CDC_InterpolationData[];
extern CurveAnimationHeader gTreasureChestCurveAnim_4F70;
#define gTreasureChestCurveSkel_Limbs__06005DE4_060059D0_DL_00004F80_Tex_WIDTH 64
#define gTreasureChestCurveSkel_Limbs__06005DE4_060059D0_DL_00004F80_Tex_HEIGHT 32
extern u64 gTreasureChestCurveSkel_Limbs__06005DE4_060059D0_DL_00004F80_Tex[TEX_LEN(u64, gTreasureChestCurveSkel_Limbs__06005DE4_060059D0_DL_00004F80_Tex_WIDTH, gTreasureChestCurveSkel_Limbs__06005DE4_060059D0_DL_00004F80_Tex_HEIGHT, 8)];
extern Vtx object_box_Vtx_005780[];
extern Vtx object_box_Vtx_0058D0[];
extern Vtx object_box_Vtx_005910[];
extern Vtx object_box_Vtx_005950[];
extern Vtx object_box_Vtx_005990[];
extern Gfx gTreasureChestCurveSkel_Limbs__06005DE4_060059D0_DL[29];
extern Gfx gTreasureChestCurveSkel_Limbs__06005E74_06005AB8_DL[25];
extern Gfx gTreasureChestCurveSkel_Limbs__06005E2C_06005B80_DL[25];
extern Gfx gTreasureChestCurveSkel_Limbs__06005E08_06005C48_DL[25];
extern Gfx gTreasureChestCurveSkel_Limbs__06005E50_06005D10_DL[25];
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005DD8;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005DE4;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005DF0;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005DFC;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E08;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E14;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E20;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E2C;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E38;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E44;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E50;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E5C;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E68;
extern SkelCurveLimb gTreasureChestCurveSkel_Limbs__06005E74;
extern SkelCurveLimb* gTreasureChestCurveSkel_Limbs_[];
extern CurveSkeletonHeader gTreasureChestCurveSkel;
extern BgCamInfo gTreasureChestBgCamList[];
extern SurfaceType gTreasureChestSurfaceTypes[];
extern CollisionPoly gTreasureChestPolyList[];
extern Vec3s gTreasureChestVtxList[];
extern CollisionHeader gTreasureChestCol;

extern u64 gTreasureChestGildedFrontTex[TEX_LEN(u64, gTreasureChestFrontTex_WIDTH, gTreasureChestFrontTex_HEIGHT, 16)];
extern u64 gTreasureChestGildedSideAndTopTex[TEX_LEN(u64, gTreasureChestSideAndTopTex_WIDTH, gTreasureChestSideAndTopTex_HEIGHT, 16)];
extern Gfx gTreasureChestGildedChestFrontDL[55];
extern Gfx gTreasureChestGildedChestSideAndLidDL[51];

extern u8 gTreasureChestDeluxeFrontTex[];
extern u8 gTreasureChestDeluxeSideAndTopTex[];
extern Gfx gTreasureChestDeluxeChestFrontDL[55];
extern Gfx gTreasureChestDeluxeChestSideAndLidDL[51];

extern u8 gTreasureChestKeyFrontTex[];
extern u8 gTreasureChestKeySideAndTopTex[];
extern Gfx gTreasureChestKeyChestFrontDL[55];
extern Gfx gTreasureChestKeyChestSideAndLidDL[51];

#endif
