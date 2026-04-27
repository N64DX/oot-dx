#include "assets/objects/object_demo_kekkai/object_demo_kekkai.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 object_demo_kekkai_000000_Tex[TEX_LEN(u64, object_demo_kekkai_000000_Tex_WIDTH, object_demo_kekkai_000000_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_000000_Tex.i8.inc.c"
};

u64 object_demo_kekkai_000800_Tex[TEX_LEN(u64, object_demo_kekkai_000800_Tex_WIDTH, object_demo_kekkai_000800_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_000800_Tex.i8.inc.c"
};

u64 object_demo_kekkai_001000_Tex[TEX_LEN(u64, object_demo_kekkai_001000_Tex_WIDTH, object_demo_kekkai_001000_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_001000_Tex.rgba16.inc.c"
};

Vtx gGanonsCastleDoorVtx[] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleDoorVtx.inc.c"
};

Gfx gGanonsCastleDoorDL[22] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleDoorDL.inc.c"
};

Vtx gSpiritTrialLightSourceVtx[] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightSourceVtx.inc.c"
};

Gfx gSpiritTrialLightSourceDL[37] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightSourceDL.inc.c"
};

u64 object_demo_kekkai_002450_Tex[TEX_LEN(u64, object_demo_kekkai_002450_Tex_WIDTH, object_demo_kekkai_002450_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_002450_Tex.rgba16.inc.c"
};

Vtx gSpiritTrialLightFloorVtx[] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightFloorVtx.inc.c"
};

Gfx gSpiritTrialLightFloorDL[31] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightFloorDL.inc.c"
};

u64 object_demo_kekkai_0036A0_Tex[TEX_LEN(u64, object_demo_kekkai_0036A0_Tex_WIDTH, object_demo_kekkai_0036A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_0036A0_Tex.rgba16.inc.c"
};

u64 object_demo_kekkai_003EA0_Tex[TEX_LEN(u64, object_demo_kekkai_003EA0_Tex_WIDTH, object_demo_kekkai_003EA0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_003EA0_Tex.i8.inc.c"
};

Vtx gWaterTrialIceBlockVtx[] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockVtx.inc.c"
};

Gfx gWaterTrialIceBlockDL[30] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockDL.inc.c"
};

BgCamInfo gWaterTrialIceBlockBgCamList[] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockBgCamList.inc.c"
};

SurfaceType gWaterTrialIceBlockSurfaceTypes[] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockSurfaceTypes.inc.c"
};

CollisionPoly gWaterTrialIceBlockPolyList[] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockPolyList.inc.c"
};

Vec3s gWaterTrialIceBlockVtxList[] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockVtxList.inc.c"
};

CollisionHeader gWaterTrialIceBlockCol = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockCol.inc.c"
};

Vtx gTowerBarrierVtx[] = {
#include "assets/objects/object_demo_kekkai/gTowerBarrierVtx.inc.c"
};

Gfx gTowerBarrierDL[49] = {
#include "assets/objects/object_demo_kekkai/gTowerBarrierDL.inc.c"
};

u64 object_demo_kekkai_004AC0_Tex[TEX_LEN(u64, object_demo_kekkai_004AC0_Tex_WIDTH, object_demo_kekkai_004AC0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_004AC0_Tex.i8.inc.c"
};

Vtx gTrialBarrierFloorVtx[] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierFloorVtx.inc.c"
};

Gfx gTrialBarrierFloorDL[26] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierFloorDL.inc.c"
};

Vtx gTrialBarrierEnergyVtx[] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierEnergyVtx.inc.c"
};

Vtx gTrialBarrierOrbVtx[] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierOrbVtx.inc.c"
};

Gfx gTrialBarrierEnergyDL[80] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierEnergyDL.inc.c"
};

Gfx gTrialBarrierOrbDL[47] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierOrbDL.inc.c"
};

Vtx gDemoKekkaiVtx_005E30[] = {
#include "assets/objects/object_demo_kekkai/gDemoKekkaiVtx_005E30.inc.c"
};

Gfx gDemoKekkaiDL_005FF0[41] = {
#include "assets/objects/object_demo_kekkai/gDemoKekkaiDL_005FF0.inc.c"
};

u64 object_demo_kekkai_006140_Tex[TEX_LEN(u64, object_demo_kekkai_006140_Tex_WIDTH, object_demo_kekkai_006140_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_006140_Tex.ia16.inc.c"
};

u64 object_demo_kekkai_006940_Tex[TEX_LEN(u64, object_demo_kekkai_006940_Tex_WIDTH, object_demo_kekkai_006940_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_006940_Tex.ia8.inc.c"
};

Vtx gSpiritTrialWebVtx[] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialWebVtx.inc.c"
};

Gfx gSpiritTrialWebDL[54] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialWebDL.inc.c"
};

u64 object_demo_kekkai_007DB0_Tex[TEX_LEN(u64, object_demo_kekkai_007DB0_Tex_WIDTH, object_demo_kekkai_007DB0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_007DB0_Tex.rgba16.inc.c"
};

Vtx gShadowTrialPathVtx[] = {
#include "assets/objects/object_demo_kekkai/gShadowTrialPathVtx.inc.c"
};

Gfx gShadowTrialPathDL[36] = {
#include "assets/objects/object_demo_kekkai/gShadowTrialPathDL.inc.c"
};

u64 object_demo_kekkai_0089D0_Tex[TEX_LEN(u64, object_demo_kekkai_0089D0_Tex_WIDTH, object_demo_kekkai_0089D0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_0089D0_Tex.rgba16.inc.c"
};

Vtx gLightTrialFakeWallVtx[] = {
#include "assets/objects/object_demo_kekkai/gLightTrialFakeWallVtx.inc.c"
};

Gfx gLightTrialFakeWallDL[19] = {
#include "assets/objects/object_demo_kekkai/gLightTrialFakeWallDL.inc.c"
};

u64 object_demo_kekkai_0092D0_Tex[TEX_LEN(u64, object_demo_kekkai_0092D0_Tex_WIDTH, object_demo_kekkai_0092D0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_0092D0_Tex.rgba16.inc.c"
};

u64 object_demo_kekkai_00A440_Tex[TEX_LEN(u64, object_demo_kekkai_00A440_Tex_WIDTH, object_demo_kekkai_00A440_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_00A440_Tex.rgba16.inc.c"
};

Vtx gGanonsCastleScrubsFakeWallVtx[] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleScrubsFakeWallVtx.inc.c"
};

Gfx gGanonsCastleScrubsFakeWallDL[19] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleScrubsFakeWallDL.inc.c"
};

u64 object_demo_kekkai_00B540_Tex[TEX_LEN(u64, object_demo_kekkai_00B540_Tex_WIDTH, object_demo_kekkai_00B540_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_00B540_Tex.ia16.inc.c"
};

Vtx gClearBlockVtx[] = {
#include "assets/objects/object_demo_kekkai/gClearBlockVtx.inc.c"
};

Gfx gClearBlockDL[23] = {
#include "assets/objects/object_demo_kekkai/gClearBlockDL.inc.c"
};

BgCamInfo gClearBlockBgCamList[] = {
#include "assets/objects/object_demo_kekkai/gClearBlockBgCamList.inc.c"
};

SurfaceType gClearBlockSurfaceTypes[] = {
#include "assets/objects/object_demo_kekkai/gClearBlockSurfaceTypes.inc.c"
};

CollisionPoly gClearBlockPolyList[] = {
#include "assets/objects/object_demo_kekkai/gClearBlockPolyList.inc.c"
};

Vec3s gClearBlockVtxList[] = {
#include "assets/objects/object_demo_kekkai/gClearBlockVtxList.inc.c"
};

CollisionHeader gClearBlockCol = {
#include "assets/objects/object_demo_kekkai/gClearBlockCol.inc.c"
};

u64 object_demo_kekkai_00C0B0_Tex[TEX_LEN(u64, object_demo_kekkai_00C0B0_Tex_WIDTH, object_demo_kekkai_00C0B0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_00C0B0_Tex.rgba16.inc.c"
};

u64 object_demo_kekkai_00C8B0_Tex[TEX_LEN(u64, object_demo_kekkai_00C8B0_Tex_WIDTH, object_demo_kekkai_00C8B0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/object_demo_kekkai_00C8B0_Tex.rgba16.inc.c"
};

Vtx gFireTrialPlatformVtx[] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformVtx.inc.c"
};

Gfx gFireTrialPlatformDL[131] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformDL.inc.c"
};

BgCamInfo gFireTrialPlatformBgCamList[] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformBgCamList.inc.c"
};

SurfaceType gFireTrialPlatformSurfaceTypes[] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformSurfaceTypes.inc.c"
};

CollisionPoly gFireTrialPlatformPolyList[] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformPolyList.inc.c"
};

Vec3s gFireTrialPlatformVtxList[] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformVtxList.inc.c"
};

CollisionHeader gFireTrialPlatformCol = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformCol.inc.c"
};
