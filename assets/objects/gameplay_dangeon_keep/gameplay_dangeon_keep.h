#ifndef GAMEPLAY_DANGEON_KEEP_H
#define GAMEPLAY_DANGEON_KEEP_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gUnusedCandleDL_00000000_Tex_WIDTH 16
#define gUnusedCandleDL_00000000_Tex_HEIGHT 32
extern u64 gUnusedCandleDL_00000000_Tex[TEX_LEN(u64, gUnusedCandleDL_00000000_Tex_WIDTH, gUnusedCandleDL_00000000_Tex_HEIGHT, 8)];
#define gUnusedCandleDL_00000200_Tex_WIDTH 16
#define gUnusedCandleDL_00000200_Tex_HEIGHT 32
extern u64 gUnusedCandleDL_00000200_Tex[TEX_LEN(u64, gUnusedCandleDL_00000200_Tex_WIDTH, gUnusedCandleDL_00000200_Tex_HEIGHT, 8)];
extern Vtx gUnusedCandleVtx[];
extern Gfx gUnusedCandleDL[24];
extern Vtx gBrownFragmentVtx[];
extern Gfx gBrownFragmentDL[18];
#define gBrownFragmentDL_000005C0_Tex_WIDTH 16
#define gBrownFragmentDL_000005C0_Tex_HEIGHT 16
extern u64 gBrownFragmentDL_000005C0_Tex[TEX_LEN(u64, gBrownFragmentDL_000005C0_Tex_WIDTH, gBrownFragmentDL_000005C0_Tex_HEIGHT, 16)];
extern Vtx gDoorLockVtx[];
extern Gfx gDoorLockDL[22];
extern Vtx gDoorChainVtx[];
extern Gfx gDoorChainDL[18];
#define gDoorLockDL_00001280_Tex_WIDTH 32
#define gDoorLockDL_00001280_Tex_HEIGHT 32
extern u64 gDoorLockDL_00001280_Tex[TEX_LEN(u64, gDoorLockDL_00001280_Tex_WIDTH, gDoorLockDL_00001280_Tex_HEIGHT, 16)];
#define gUnusedGoldLockTex_WIDTH 32
#define gUnusedGoldLockTex_HEIGHT 32
extern u64 gUnusedGoldLockTex[TEX_LEN(u64, gUnusedGoldLockTex_WIDTH, gUnusedGoldLockTex_HEIGHT, 16)];
#define gDoorChainTex_WIDTH 16
#define gDoorChainTex_HEIGHT 128
extern u64 gDoorChainTex[TEX_LEN(u64, gDoorChainTex_WIDTH, gDoorChainTex_HEIGHT, 16)];
#define gPushBlockSilverTex_WIDTH 64
#define gPushBlockSilverTex_HEIGHT 64
extern u64 gPushBlockSilverTex[TEX_LEN(u64, gPushBlockSilverTex_WIDTH, gPushBlockSilverTex_HEIGHT, 4)];
#define gPushBlockBaseTex_WIDTH 64
#define gPushBlockBaseTex_HEIGHT 64
extern u64 gPushBlockBaseTex[TEX_LEN(u64, gPushBlockBaseTex_WIDTH, gPushBlockBaseTex_HEIGHT, 4)];
#define gPushBlockGrayTex_WIDTH 64
#define gPushBlockGrayTex_HEIGHT 64
extern u64 gPushBlockGrayTex[TEX_LEN(u64, gPushBlockGrayTex_WIDTH, gPushBlockGrayTex_HEIGHT, 4)];
extern Vtx gPushBlockVtx[];
extern Gfx gPushBlockDL[23];
extern BgCamInfo gPushBlockBgCamList[];
extern SurfaceType gPushBlockSurfaceTypes[];
extern CollisionPoly gPushBlockPolyList[];
extern Vec3s gPushBlockVtxList[];
extern CollisionHeader gPushBlockCol;
extern Vtx gWoodenPlatofrmVtx[];
extern Gfx gWoodenPlatofrmDL[23];
extern Vtx gSmallWoodenBoxVtx[];
extern Gfx gSmallWoodenBoxDL[23];
extern Vtx gSmallWoodenBoxFragmentVtx[];
extern Gfx gSmallWoodenBoxFragmentDL[18];
extern Vtx gMagicJarSpriteVtx[];
extern Gfx gMagicJarSpriteDL[18];
extern Vtx gFloorSwitch1Vtx[];
extern Gfx gFloorSwitch1DL[41];
extern Vtx gRustyFloorSwitchVtx[];
extern Gfx gRustyFloorSwitchDL[32];
extern Vtx gFloorSwitch2Vtx[];
extern Gfx gFloorSwitch2DL[41];
extern BgCamInfo gFloorSwitchBgCamList[];
extern SurfaceType gFloorSwitchSurfaceTypes[];
extern CollisionPoly gFloorSwitchPolyList[];
extern Vec3s gFloorSwitchVtxList[];
extern CollisionHeader gFloorSwitchCol;
extern Vtx gFloorSwitch3Vtx[];
extern Gfx gFloorSwitch3DL[32];
extern Vtx gEyeSwitch1Vtx[];
extern Gfx gEyeSwitch1DL[26];
extern Vtx gEyeSwitch2Vtx[];
extern Gfx gEyeSwitch2DL[26];
extern Vtx gCrystalSwitchCoreOpaVtx[];
extern Vtx gCrystalSwitchCoreXluVtx[];
extern Gfx gCrystalSwitchCoreOpaDL[42];
extern Gfx gCrystalSwitchCoreXluDL[22];
extern Vtx gCrystalSwitchDiamondOpaVtx[];
extern Vtx gCrystalSwitchDiamondXluVtx[];
extern Gfx gCrystalSwitchDiamondOpaDL[41];
extern Gfx gCrystalSwitchDiamondXluDL[22];
#define gFloorSwitch1DL_000078A0_Tex_WIDTH 32
#define gFloorSwitch1DL_000078A0_Tex_HEIGHT 32
extern u64 gFloorSwitch1DL_000078A0_Tex[TEX_LEN(u64, gFloorSwitch1DL_000078A0_Tex_WIDTH, gFloorSwitch1DL_000078A0_Tex_HEIGHT, 8)];
#define gFloorSwitch1DL_00007CA0_Tex_WIDTH 32
#define gFloorSwitch1DL_00007CA0_Tex_HEIGHT 32
extern u64 gFloorSwitch1DL_00007CA0_Tex[TEX_LEN(u64, gFloorSwitch1DL_00007CA0_Tex_WIDTH, gFloorSwitch1DL_00007CA0_Tex_HEIGHT, 8)];
#define gEyeSwitchGoldClosedTex_WIDTH 32
#define gEyeSwitchGoldClosedTex_HEIGHT 32
extern u64 gEyeSwitchGoldClosedTex[TEX_LEN(u64, gEyeSwitchGoldClosedTex_WIDTH, gEyeSwitchGoldClosedTex_HEIGHT, 16)];
#define gEyeSwitchGoldOpeningTex_WIDTH 32
#define gEyeSwitchGoldOpeningTex_HEIGHT 32
extern u64 gEyeSwitchGoldOpeningTex[TEX_LEN(u64, gEyeSwitchGoldOpeningTex_WIDTH, gEyeSwitchGoldOpeningTex_HEIGHT, 16)];
#define gEyeSwitchGoldClosingTex_WIDTH 32
#define gEyeSwitchGoldClosingTex_HEIGHT 32
extern u64 gEyeSwitchGoldClosingTex[TEX_LEN(u64, gEyeSwitchGoldClosingTex_WIDTH, gEyeSwitchGoldClosingTex_HEIGHT, 16)];
#define gEyeSwitchGoldOpenTex_WIDTH 32
#define gEyeSwitchGoldOpenTex_HEIGHT 32
extern u64 gEyeSwitchGoldOpenTex[TEX_LEN(u64, gEyeSwitchGoldOpenTex_WIDTH, gEyeSwitchGoldOpenTex_HEIGHT, 16)];
#define gEyeSwitchSilverOpenTex_WIDTH 32
#define gEyeSwitchSilverOpenTex_HEIGHT 32
extern u64 gEyeSwitchSilverOpenTex[TEX_LEN(u64, gEyeSwitchSilverOpenTex_WIDTH, gEyeSwitchSilverOpenTex_HEIGHT, 16)];
#define gEyeSwitchSilverHalfTex_WIDTH 32
#define gEyeSwitchSilverHalfTex_HEIGHT 32
extern u64 gEyeSwitchSilverHalfTex[TEX_LEN(u64, gEyeSwitchSilverHalfTex_WIDTH, gEyeSwitchSilverHalfTex_HEIGHT, 16)];
#define gEyeSwitchSilverClosedTex_WIDTH 32
#define gEyeSwitchSilverClosedTex_HEIGHT 32
extern u64 gEyeSwitchSilverClosedTex[TEX_LEN(u64, gEyeSwitchSilverClosedTex_WIDTH, gEyeSwitchSilverClosedTex_HEIGHT, 16)];
#define gDungeonKeepTex_00C8A0_WIDTH 32
#define gDungeonKeepTex_00C8A0_HEIGHT 32
extern u64 gDungeonKeepTex_00C8A0[TEX_LEN(u64, gDungeonKeepTex_00C8A0_WIDTH, gDungeonKeepTex_00C8A0_HEIGHT, 16)];
#define gDungeonkeepTex_00D0A0_WIDTH 32
#define gDungeonkeepTex_00D0A0_HEIGHT 32
extern u64 gDungeonkeepTex_00D0A0[TEX_LEN(u64, gDungeonkeepTex_00D0A0_WIDTH, gDungeonkeepTex_00D0A0_HEIGHT, 16)];
#define gRustyFloorSwitchDL_0000D8A0_Tex_WIDTH 32
#define gRustyFloorSwitchDL_0000D8A0_Tex_HEIGHT 32
extern u64 gRustyFloorSwitchDL_0000D8A0_Tex[TEX_LEN(u64, gRustyFloorSwitchDL_0000D8A0_Tex_WIDTH, gRustyFloorSwitchDL_0000D8A0_Tex_HEIGHT, 16)];
#define gRustyFloorSwitchDL_0000E0A0_Tex_WIDTH 32
#define gRustyFloorSwitchDL_0000E0A0_Tex_HEIGHT 32
extern u64 gRustyFloorSwitchDL_0000E0A0_Tex[TEX_LEN(u64, gRustyFloorSwitchDL_0000E0A0_Tex_WIDTH, gRustyFloorSwitchDL_0000E0A0_Tex_HEIGHT, 16)];
#define gDungeonKeepTex_00E8A0_WIDTH 32
#define gDungeonKeepTex_00E8A0_HEIGHT 32
extern u64 gDungeonKeepTex_00E8A0[TEX_LEN(u64, gDungeonKeepTex_00E8A0_WIDTH, gDungeonKeepTex_00E8A0_HEIGHT, 8)];
#define gDungeonKeepTex_00ECA0_WIDTH 32
#define gDungeonKeepTex_00ECA0_HEIGHT 32
extern u64 gDungeonKeepTex_00ECA0[TEX_LEN(u64, gDungeonKeepTex_00ECA0_WIDTH, gDungeonKeepTex_00ECA0_HEIGHT, 8)];
#define gDungeonKeepTex_00F0A0_WIDTH 32
#define gDungeonKeepTex_00F0A0_HEIGHT 32
extern u64 gDungeonKeepTex_00F0A0[TEX_LEN(u64, gDungeonKeepTex_00F0A0_WIDTH, gDungeonKeepTex_00F0A0_HEIGHT, 16)];
#define gWoodenPlatofrmDL_0000F8A0_Tex_WIDTH 64
#define gWoodenPlatofrmDL_0000F8A0_Tex_HEIGHT 32
extern u64 gWoodenPlatofrmDL_0000F8A0_Tex[TEX_LEN(u64, gWoodenPlatofrmDL_0000F8A0_Tex_WIDTH, gWoodenPlatofrmDL_0000F8A0_Tex_HEIGHT, 16)];
#define gPotDL_000108A0_Tex_WIDTH 32
#define gPotDL_000108A0_Tex_HEIGHT 64
extern u64 gPotDL_000108A0_Tex[TEX_LEN(u64, gPotDL_000108A0_Tex_WIDTH, gPotDL_000108A0_Tex_HEIGHT, 16)];
#define gPotDL_000118A0_Tex_WIDTH 16
#define gPotDL_000118A0_Tex_HEIGHT 16
extern u64 gPotDL_000118A0_Tex[TEX_LEN(u64, gPotDL_000118A0_Tex_WIDTH, gPotDL_000118A0_Tex_HEIGHT, 16)];
#define gPotFragmentDL_00011AA0_Tex_WIDTH 16
#define gPotFragmentDL_00011AA0_Tex_HEIGHT 16
extern u64 gPotFragmentDL_00011AA0_Tex[TEX_LEN(u64, gPotFragmentDL_00011AA0_Tex_WIDTH, gPotFragmentDL_00011AA0_Tex_HEIGHT, 16)];
#define gSmallWoodenBoxDL_00011CA0_Tex_WIDTH 32
#define gSmallWoodenBoxDL_00011CA0_Tex_HEIGHT 64
extern u64 gSmallWoodenBoxDL_00011CA0_Tex[TEX_LEN(u64, gSmallWoodenBoxDL_00011CA0_Tex_WIDTH, gSmallWoodenBoxDL_00011CA0_Tex_HEIGHT, 16)];
#define gSmallWoodenBoxFragmentDL_00012CA0_Tex_WIDTH 64
#define gSmallWoodenBoxFragmentDL_00012CA0_Tex_HEIGHT 16
extern u64 gSmallWoodenBoxFragmentDL_00012CA0_Tex[TEX_LEN(u64, gSmallWoodenBoxFragmentDL_00012CA0_Tex_WIDTH, gSmallWoodenBoxFragmentDL_00012CA0_Tex_HEIGHT, 16)];
#define gCrystalSwitchCoreOpaDL_000134A0_Tex_WIDTH 32
#define gCrystalSwitchCoreOpaDL_000134A0_Tex_HEIGHT 32
extern u64 gCrystalSwitchCoreOpaDL_000134A0_Tex[TEX_LEN(u64, gCrystalSwitchCoreOpaDL_000134A0_Tex_WIDTH, gCrystalSwitchCoreOpaDL_000134A0_Tex_HEIGHT, 16)];
#define gCrystalSwitchCoreXluDL_00013CA0_Tex_WIDTH 4
#define gCrystalSwitchCoreXluDL_00013CA0_Tex_HEIGHT 4
extern u64 gCrystalSwitchCoreXluDL_00013CA0_Tex[TEX_LEN(u64, gCrystalSwitchCoreXluDL_00013CA0_Tex_WIDTH, gCrystalSwitchCoreXluDL_00013CA0_Tex_HEIGHT, 8)];
#define gCrystalSwitchCoreOpaDL_00013CB0_Tex_WIDTH 64
#define gCrystalSwitchCoreOpaDL_00013CB0_Tex_HEIGHT 64
extern u64 gCrystalSwitchCoreOpaDL_00013CB0_Tex[TEX_LEN(u64, gCrystalSwitchCoreOpaDL_00013CB0_Tex_WIDTH, gCrystalSwitchCoreOpaDL_00013CB0_Tex_HEIGHT, 4)];
#define gCrstalSwitchRedTex_WIDTH 32
#define gCrstalSwitchRedTex_HEIGHT 32
extern u64 gCrstalSwitchRedTex[TEX_LEN(u64, gCrstalSwitchRedTex_WIDTH, gCrstalSwitchRedTex_HEIGHT, 16)];
#define gCrstalSwitchBlueTex_WIDTH 32
#define gCrstalSwitchBlueTex_HEIGHT 32
extern u64 gCrstalSwitchBlueTex[TEX_LEN(u64, gCrstalSwitchBlueTex_WIDTH, gCrstalSwitchBlueTex_HEIGHT, 16)];
#define gMagicJarSpriteDL_00015CB0_Tex_WIDTH 32
#define gMagicJarSpriteDL_00015CB0_Tex_HEIGHT 32
extern u64 gMagicJarSpriteDL_00015CB0_Tex[TEX_LEN(u64, gMagicJarSpriteDL_00015CB0_Tex_WIDTH, gMagicJarSpriteDL_00015CB0_Tex_HEIGHT, 16)];
extern Vtx gPotVtx[];
extern Gfx gPotDL[56];
extern Vtx gPotFragmentVtx[];
extern Gfx gPotFragmentDL[18];

#endif
