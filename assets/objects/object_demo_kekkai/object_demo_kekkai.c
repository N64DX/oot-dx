#include "object_demo_kekkai.h"
#include "extracted/ntsc-1.0/assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"
#include "stdbool.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 gTowerBarrierDL_00000000_Tex[TEX_LEN(u64, gTowerBarrierDL_00000000_Tex_WIDTH, gTowerBarrierDL_00000000_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/gTowerBarrierDL_00000000_Tex.i8.inc.c"
};

u64 gTrialBarrierEnergyDL_00000800_Tex[TEX_LEN(u64, gTrialBarrierEnergyDL_00000800_Tex_WIDTH, gTrialBarrierEnergyDL_00000800_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierEnergyDL_00000800_Tex.i8.inc.c"
};

u64 gGanonsCastleDoorDL_00001000_Tex[TEX_LEN(u64, gGanonsCastleDoorDL_00001000_Tex_WIDTH, gGanonsCastleDoorDL_00001000_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleDoorDL_00001000_Tex.rgba16.inc.c"
};

Vtx gGanonsCastleDoorDL_06002000_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleDoorDL_06002000_Vtx.inc.c"
};

Gfx gGanonsCastleDoorDL[22] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleDoorDL.inc.c"
};

Vtx gSpiritTrialLightSourceDL_06002180_Vtx_fused_[] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightSourceDL_06002180_Vtx_fused_.inc.c"
};

Gfx gSpiritTrialLightSourceDL[37] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightSourceDL.inc.c"
};

u64 gSpiritTrialLightFloorDL_00002450_Tex[TEX_LEN(u64, gSpiritTrialLightFloorDL_00002450_Tex_WIDTH, gSpiritTrialLightFloorDL_00002450_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightFloorDL_00002450_Tex.rgba16.inc.c"
};

Vtx gSpiritTrialLightFloorDL_06003450_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightFloorDL_06003450_Vtx.inc.c"
};

Gfx gSpiritTrialLightFloorDL[31] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightFloorDL.inc.c"
};

u64 gWaterTrialIceBlockDL_000036A0_Tex[TEX_LEN(u64, gWaterTrialIceBlockDL_000036A0_Tex_WIDTH, gWaterTrialIceBlockDL_000036A0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockDL_000036A0_Tex.rgba16.inc.c"
};

u64 gWaterTrialIceBlockDL_00003EA0_Tex[TEX_LEN(u64, gWaterTrialIceBlockDL_00003EA0_Tex_WIDTH, gWaterTrialIceBlockDL_00003EA0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockDL_00003EA0_Tex.i8.inc.c"
};

Vtx gWaterTrialIceBlockDL_060042A0_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gWaterTrialIceBlockDL_060042A0_Vtx.inc.c"
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

Vtx gTowerBarrierDL_06004650_Vtx_fused_[] = {
#include "assets/objects/object_demo_kekkai/gTowerBarrierDL_06004650_Vtx_fused_.inc.c"
};

Gfx gTowerBarrierDL[49] = {
#include "assets/objects/object_demo_kekkai/gTowerBarrierDL.inc.c"
};

u64 gTrialBarrierFloorDL_00004AC0_Tex[TEX_LEN(u64, gTrialBarrierFloorDL_00004AC0_Tex_WIDTH, gTrialBarrierFloorDL_00004AC0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierFloorDL_00004AC0_Tex.i8.inc.c"
};

Vtx gTrialBarrierFloorDL_06004EC0_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierFloorDL_06004EC0_Vtx.inc.c"
};

Gfx gTrialBarrierFloorDL[26] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierFloorDL.inc.c"
};

Vtx gTrialBarrierEnergyVtx[] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierEnergyVtx.inc.c"
};

Vtx gTrialBarrierOrbDL_06005630_Vtx_fused_[] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierOrbDL_06005630_Vtx_fused_.inc.c"
};

Gfx gTrialBarrierEnergyDL[80] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierEnergyDL.inc.c"
};

Gfx gTrialBarrierOrbDL[47] = {
#include "assets/objects/object_demo_kekkai/gTrialBarrierOrbDL.inc.c"
};

Vtx gDemoKekkaiDL_005FF0_06005E30_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gDemoKekkaiDL_005FF0_06005E30_Vtx.inc.c"
};

Gfx gDemoKekkaiDL_005FF0[41] = {
#include "assets/objects/object_demo_kekkai/gDemoKekkaiDL_005FF0.inc.c"
};

u64 gSpiritTrialLightSourceDL_00006140_Tex[TEX_LEN(u64, gSpiritTrialLightSourceDL_00006140_Tex_WIDTH, gSpiritTrialLightSourceDL_00006140_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialLightSourceDL_00006140_Tex.ia16.inc.c"
};

u64 gSpiritTrialWebDL_00006940_Tex[TEX_LEN(u64, gSpiritTrialWebDL_00006940_Tex_WIDTH, gSpiritTrialWebDL_00006940_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialWebDL_00006940_Tex.ia8.inc.c"
};

Vtx gSpiritTrialWebDL_06007940_Vtx_fused_[] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialWebDL_06007940_Vtx_fused_.inc.c"
};

Gfx gSpiritTrialWebDL[54] = {
#include "assets/objects/object_demo_kekkai/gSpiritTrialWebDL.inc.c"
};

u64 gShadowTrialPathDL_00007DB0_Tex[TEX_LEN(u64, gShadowTrialPathDL_00007DB0_Tex_WIDTH, gShadowTrialPathDL_00007DB0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gShadowTrialPathDL_00007DB0_Tex.rgba16.inc.c"
};

Vtx gShadowTrialPathDL_060085B0_Vtx_fused_[] = {
#include "assets/objects/object_demo_kekkai/gShadowTrialPathDL_060085B0_Vtx_fused_.inc.c"
};

Gfx gShadowTrialPathDL[36] = {
#include "assets/objects/object_demo_kekkai/gShadowTrialPathDL.inc.c"
};

u64 gLightTrialFakeWallDL_000089D0_Tex[TEX_LEN(u64, gLightTrialFakeWallDL_000089D0_Tex_WIDTH, gLightTrialFakeWallDL_000089D0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gLightTrialFakeWallDL_000089D0_Tex.rgba16.inc.c"
};

Vtx gLightTrialFakeWallDL_060091D0_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gLightTrialFakeWallDL_060091D0_Vtx.inc.c"
};

Gfx gLightTrialFakeWallDL[19] = {
#include "assets/objects/object_demo_kekkai/gLightTrialFakeWallDL.inc.c"
};

u64 gGanonsCastleScrubsFakeWallDL_0000A440_Tex[TEX_LEN(u64, gGanonsCastleScrubsFakeWallDL_0000A440_Tex_WIDTH, gGanonsCastleScrubsFakeWallDL_0000A440_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleScrubsFakeWallDL_0000A440_Tex.rgba16.inc.c"
};

Vtx gGanonsCastleScrubsFakeWallDL_0600B440_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleScrubsFakeWallDL_0600B440_Vtx.inc.c"
};

Gfx gGanonsCastleScrubsFakeWallDL[19] = {
#include "assets/objects/object_demo_kekkai/gGanonsCastleScrubsFakeWallDL.inc.c"
};

u64 gClearBlockDL_0000B540_Tex[TEX_LEN(u64, gClearBlockDL_0000B540_Tex_WIDTH, gClearBlockDL_0000B540_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gClearBlockDL_0000B540_Tex.ia16.inc.c"
};

Vtx gClearBlockDL_0600BD40_Vtx[] = {
#include "assets/objects/object_demo_kekkai/gClearBlockDL_0600BD40_Vtx.inc.c"
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

u64 gFireTrialPlatformDL_0000C0B0_Tex[TEX_LEN(u64, gFireTrialPlatformDL_0000C0B0_Tex_WIDTH, gFireTrialPlatformDL_0000C0B0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformDL_0000C0B0_Tex.rgba16.inc.c"
};

u64 gFireTrialPlatformDL_0000C8B0_Tex[TEX_LEN(u64, gFireTrialPlatformDL_0000C8B0_Tex_WIDTH, gFireTrialPlatformDL_0000C8B0_Tex_HEIGHT, 16)] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformDL_0000C8B0_Tex.rgba16.inc.c"
};

Vtx gFireTrialPlatformDL_0600D8B0_Vtx_fused_[] = {
#include "assets/objects/object_demo_kekkai/gFireTrialPlatformDL_0600D8B0_Vtx_fused_.inc.c"
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
