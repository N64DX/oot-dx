#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 gameplay_dangeon_keep_000000_Tex[TEX_LEN(u64, gameplay_dangeon_keep_000000_Tex_WIDTH, gameplay_dangeon_keep_000000_Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_000000_Tex.i8.inc.c"
};

u64 gameplay_dangeon_keep_000200_Tex[TEX_LEN(u64, gameplay_dangeon_keep_000200_Tex_WIDTH, gameplay_dangeon_keep_000200_Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_000200_Tex.i8.inc.c"
};

Vtx gUnusedCandleVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gUnusedCandleVtx.inc.c"
};

Gfx gUnusedCandleDL[24] = {
#include "assets/objects/gameplay_dangeon_keep/gUnusedCandleDL.inc.c"
};

Vtx gBrownFragmentVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gBrownFragmentVtx.inc.c"
};

Gfx gBrownFragmentDL[18] = {
#include "assets/objects/gameplay_dangeon_keep/gBrownFragmentDL.inc.c"
};

u64 gameplay_dangeon_keep_0005C0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0005C0_Tex_WIDTH, gameplay_dangeon_keep_0005C0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0005C0_Tex.rgba16.inc.c"
};

Vtx gDoorLockVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gDoorLockVtx.inc.c"
};

Gfx gDoorLockDL[22] = {
#include "assets/objects/gameplay_dangeon_keep/gDoorLockDL.inc.c"
};

Vtx gDoorChainVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gDoorChainVtx.inc.c"
};

Gfx gDoorChainDL[18] = {
#include "assets/objects/gameplay_dangeon_keep/gDoorChainDL.inc.c"
};

u64 gameplay_dangeon_keep_001280_Tex[TEX_LEN(u64, gameplay_dangeon_keep_001280_Tex_WIDTH, gameplay_dangeon_keep_001280_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_001280_Tex.rgba16.inc.c"
};

u64 gUnusedGoldLockTex[TEX_LEN(u64, gUnusedGoldLockTex_WIDTH, gUnusedGoldLockTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gUnusedGoldLockTex.rgba16.inc.c"
};

u64 gDoorChainTex[TEX_LEN(u64, gDoorChainTex_WIDTH, gDoorChainTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gDoorChainTex.rgba16.inc.c"
};

u64 gPushBlockSilverTex[TEX_LEN(u64, gPushBlockSilverTex_WIDTH, gPushBlockSilverTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockSilverTex.i4.inc.c"
};

u64 gPushBlockBaseTex[TEX_LEN(u64, gPushBlockBaseTex_WIDTH, gPushBlockBaseTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockBaseTex.i4.inc.c"
};

u64 gPushBlockGrayTex[TEX_LEN(u64, gPushBlockGrayTex_WIDTH, gPushBlockGrayTex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockGrayTex.i4.inc.c"
};

Vtx gPushBlockVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockVtx.inc.c"
};

Gfx gPushBlockDL[23] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockDL.inc.c"
};

BgCamInfo gPushBlockBgCamList[] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockBgCamList.inc.c"
};

SurfaceType gPushBlockSurfaceTypes[] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockSurfaceTypes.inc.c"
};

CollisionPoly gPushBlockPolyList[] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockPolyList.inc.c"
};

Vec3s gPushBlockVtxList[] = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockVtxList.inc.c"
};

CollisionHeader gPushBlockCol = {
#include "assets/objects/gameplay_dangeon_keep/gPushBlockCol.inc.c"
};

Vtx gWoodenPlatofrmVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gWoodenPlatofrmVtx.inc.c"
};

Gfx gWoodenPlatofrmDL[23] = {
#include "assets/objects/gameplay_dangeon_keep/gWoodenPlatofrmDL.inc.c"
};

Vtx gSmallWoodenBoxVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gSmallWoodenBoxVtx.inc.c"
};

Gfx gSmallWoodenBoxDL[23] = {
#include "assets/objects/gameplay_dangeon_keep/gSmallWoodenBoxDL.inc.c"
};

Vtx gSmallWoodenBoxFragmentVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gSmallWoodenBoxFragmentVtx.inc.c"
};

Gfx gSmallWoodenBoxFragmentDL[18] = {
#include "assets/objects/gameplay_dangeon_keep/gSmallWoodenBoxFragmentDL.inc.c"
};

Vtx gMagicJarSpriteVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gMagicJarSpriteVtx.inc.c"
};

Gfx gMagicJarSpriteDL[18] = {
#include "assets/objects/gameplay_dangeon_keep/gMagicJarSpriteDL.inc.c"
};

Vtx gFloorSwitch1Vtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitch1Vtx.inc.c"
};

Gfx gFloorSwitch1DL[41] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitch1DL.inc.c"
};

Vtx gRustyFloorSwitchVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gRustyFloorSwitchVtx.inc.c"
};

Gfx gRustyFloorSwitchDL[32] = {
#include "assets/objects/gameplay_dangeon_keep/gRustyFloorSwitchDL.inc.c"
};

Vtx gFloorSwitch2Vtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitch2Vtx.inc.c"
};

Gfx gFloorSwitch2DL[41] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitch2DL.inc.c"
};

BgCamInfo gFloorSwitchBgCamList[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitchBgCamList.inc.c"
};

SurfaceType gFloorSwitchSurfaceTypes[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitchSurfaceTypes.inc.c"
};

CollisionPoly gFloorSwitchPolyList[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitchPolyList.inc.c"
};

Vec3s gFloorSwitchVtxList[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitchVtxList.inc.c"
};

CollisionHeader gFloorSwitchCol = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitchCol.inc.c"
};

Vtx gFloorSwitch3Vtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitch3Vtx.inc.c"
};

Gfx gFloorSwitch3DL[32] = {
#include "assets/objects/gameplay_dangeon_keep/gFloorSwitch3DL.inc.c"
};

Vtx gEyeSwitch1Vtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitch1Vtx.inc.c"
};

Gfx gEyeSwitch1DL[26] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitch1DL.inc.c"
};

Vtx gEyeSwitch2Vtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitch2Vtx.inc.c"
};

Gfx gEyeSwitch2DL[26] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitch2DL.inc.c"
};

Vtx gCrystalSwitchCoreOpaVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchCoreOpaVtx.inc.c"
};

Vtx gCrystalSwitchCoreXluVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchCoreXluVtx.inc.c"
};

Gfx gCrystalSwitchCoreOpaDL[42] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchCoreOpaDL.inc.c"
};

Gfx gCrystalSwitchCoreXluDL[22] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchCoreXluDL.inc.c"
};

Vtx gCrystalSwitchDiamondOpaVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchDiamondOpaVtx.inc.c"
};

Vtx gCrystalSwitchDiamondXluVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchDiamondXluVtx.inc.c"
};

Gfx gCrystalSwitchDiamondOpaDL[41] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchDiamondOpaDL.inc.c"
};

Gfx gCrystalSwitchDiamondXluDL[22] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchDiamondXluDL.inc.c"
};

u64 gameplay_dangeon_keep_0078A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0078A0_Tex_WIDTH, gameplay_dangeon_keep_0078A0_Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0078A0_Tex.i8.inc.c"
};

u64 gameplay_dangeon_keep_007CA0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_007CA0_Tex_WIDTH, gameplay_dangeon_keep_007CA0_Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_007CA0_Tex.i8.inc.c"
};

u64 gameplay_dangeon_keep_0088A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0088A0_Tex_WIDTH, gameplay_dangeon_keep_0088A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0088A0_Tex.rgba16.inc.c"
};

u64 gEyeSwitchGoldClosedTex[TEX_LEN(u64, gEyeSwitchGoldClosedTex_WIDTH, gEyeSwitchGoldClosedTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchGoldClosedTex.rgba16.inc.c"
};

u64 gEyeSwitchGoldOpeningTex[TEX_LEN(u64, gEyeSwitchGoldOpeningTex_WIDTH, gEyeSwitchGoldOpeningTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchGoldOpeningTex.rgba16.inc.c"
};

u64 gEyeSwitchGoldClosingTex[TEX_LEN(u64, gEyeSwitchGoldClosingTex_WIDTH, gEyeSwitchGoldClosingTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchGoldClosingTex.rgba16.inc.c"
};

u64 gEyeSwitchGoldOpenTex[TEX_LEN(u64, gEyeSwitchGoldOpenTex_WIDTH, gEyeSwitchGoldOpenTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchGoldOpenTex.rgba16.inc.c"
};

u64 gEyeSwitchSilverOpenTex[TEX_LEN(u64, gEyeSwitchSilverOpenTex_WIDTH, gEyeSwitchSilverOpenTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchSilverOpenTex.rgba16.inc.c"
};

u64 gEyeSwitchSilverHalfTex[TEX_LEN(u64, gEyeSwitchSilverHalfTex_WIDTH, gEyeSwitchSilverHalfTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchSilverHalfTex.rgba16.inc.c"
};

u64 gEyeSwitchSilverClosedTex[TEX_LEN(u64, gEyeSwitchSilverClosedTex_WIDTH, gEyeSwitchSilverClosedTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gEyeSwitchSilverClosedTex.rgba16.inc.c"
};

u64 gDungeonKeepTex_00C8A0[TEX_LEN(u64, gDungeonKeepTex_00C8A0_WIDTH, gDungeonKeepTex_00C8A0_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gDungeonKeepTex_00C8A0.rgba16.inc.c"
};

u64 gDungeonkeepTex_00D0A0[TEX_LEN(u64, gDungeonkeepTex_00D0A0_WIDTH, gDungeonkeepTex_00D0A0_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gDungeonkeepTex_00D0A0.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_00D8A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_00D8A0_Tex_WIDTH, gameplay_dangeon_keep_00D8A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_00D8A0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_00E0A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_00E0A0_Tex_WIDTH, gameplay_dangeon_keep_00E0A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_00E0A0_Tex.rgba16.inc.c"
};

u64 gDungeonKeepTex_00E8A0[TEX_LEN(u64, gDungeonKeepTex_00E8A0_WIDTH, gDungeonKeepTex_00E8A0_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gDungeonKeepTex_00E8A0.i8.inc.c"
};

u64 gDungeonKeepTex_00ECA0[TEX_LEN(u64, gDungeonKeepTex_00ECA0_WIDTH, gDungeonKeepTex_00ECA0_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gDungeonKeepTex_00ECA0.i8.inc.c"
};

u64 gDungeonKeepTex_00F0A0[TEX_LEN(u64, gDungeonKeepTex_00F0A0_WIDTH, gDungeonKeepTex_00F0A0_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gDungeonKeepTex_00F0A0.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_00F8A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_00F8A0_Tex_WIDTH, gameplay_dangeon_keep_00F8A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_00F8A0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_0108A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0108A0_Tex_WIDTH, gameplay_dangeon_keep_0108A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0108A0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_0118A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0118A0_Tex_WIDTH, gameplay_dangeon_keep_0118A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0118A0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_011AA0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_011AA0_Tex_WIDTH, gameplay_dangeon_keep_011AA0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_011AA0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_011CA0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_011CA0_Tex_WIDTH, gameplay_dangeon_keep_011CA0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_011CA0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_012CA0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_012CA0_Tex_WIDTH, gameplay_dangeon_keep_012CA0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_012CA0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_0134A0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0134A0_Tex_WIDTH, gameplay_dangeon_keep_0134A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0134A0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_013CA0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_013CA0_Tex_WIDTH, gameplay_dangeon_keep_013CA0_Tex_HEIGHT, 8)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_013CA0_Tex.ia8.inc.c"
};

u64 gameplay_dangeon_keep_013CB0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_013CB0_Tex_WIDTH, gameplay_dangeon_keep_013CB0_Tex_HEIGHT, 4)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_013CB0_Tex.i4.inc.c"
};

u64 gCrystalSwitchRedTex[TEX_LEN(u64, gCrystalSwitchRedTex_WIDTH, gCrystalSwitchRedTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchRedTex.rgba16.inc.c"
};

u64 gCrystalSwitchBlueTex[TEX_LEN(u64, gCrystalSwitchBlueTex_WIDTH, gCrystalSwitchBlueTex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gCrystalSwitchBlueTex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_015CB0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_015CB0_Tex_WIDTH, gameplay_dangeon_keep_015CB0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_015CB0_Tex.rgba16.inc.c"
};

u64 gameplay_dangeon_keep_0164B0_Tex[TEX_LEN(u64, gameplay_dangeon_keep_0164B0_Tex_WIDTH, gameplay_dangeon_keep_0164B0_Tex_HEIGHT, 16)] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep_0164B0_Tex.rgba16.inc.c"
};

Vtx gPotVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gPotVtx.inc.c"
};

Gfx gPotDL[56] = {
#include "assets/objects/gameplay_dangeon_keep/gPotDL.inc.c"
};

Vtx gPotFragmentVtx[] = {
#include "assets/objects/gameplay_dangeon_keep/gPotFragmentVtx.inc.c"
};

Gfx gPotFragmentDL[18] = {
#include "assets/objects/gameplay_dangeon_keep/gPotFragmentDL.inc.c"
};
