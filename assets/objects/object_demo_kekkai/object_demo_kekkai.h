#ifndef OBJECT_DEMO_KEKKAI_H
#define OBJECT_DEMO_KEKKAI_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gTowerBarrierDL_00000000_Tex_WIDTH 32
#define gTowerBarrierDL_00000000_Tex_HEIGHT 64
extern u64 gTowerBarrierDL_00000000_Tex[TEX_LEN(u64, gTowerBarrierDL_00000000_Tex_WIDTH, gTowerBarrierDL_00000000_Tex_HEIGHT, 8)];
#define gTrialBarrierEnergyDL_00000800_Tex_WIDTH 32
#define gTrialBarrierEnergyDL_00000800_Tex_HEIGHT 64
extern u64 gTrialBarrierEnergyDL_00000800_Tex[TEX_LEN(u64, gTrialBarrierEnergyDL_00000800_Tex_WIDTH, gTrialBarrierEnergyDL_00000800_Tex_HEIGHT, 8)];
#define gGanonsCastleDoorDL_00001000_Tex_WIDTH 32
#define gGanonsCastleDoorDL_00001000_Tex_HEIGHT 64
extern u64 gGanonsCastleDoorDL_00001000_Tex[TEX_LEN(u64, gGanonsCastleDoorDL_00001000_Tex_WIDTH, gGanonsCastleDoorDL_00001000_Tex_HEIGHT, 16)];
extern Vtx gGanonsCastleDoorDL_06002000_Vtx[];
extern Gfx gGanonsCastleDoorDL[22];
extern Vtx gSpiritTrialLightSourceDL_06002180_Vtx_fused_[];
extern Gfx gSpiritTrialLightSourceDL[37];
#define gSpiritTrialLightFloorDL_00002450_Tex_WIDTH 32
#define gSpiritTrialLightFloorDL_00002450_Tex_HEIGHT 64
extern u64 gSpiritTrialLightFloorDL_00002450_Tex[TEX_LEN(u64, gSpiritTrialLightFloorDL_00002450_Tex_WIDTH, gSpiritTrialLightFloorDL_00002450_Tex_HEIGHT, 16)];
extern Vtx gSpiritTrialLightFloorDL_06003450_Vtx[];
extern Gfx gSpiritTrialLightFloorDL[31];
#define gWaterTrialIceBlockDL_000036A0_Tex_WIDTH 32
#define gWaterTrialIceBlockDL_000036A0_Tex_HEIGHT 32
extern u64 gWaterTrialIceBlockDL_000036A0_Tex[TEX_LEN(u64, gWaterTrialIceBlockDL_000036A0_Tex_WIDTH, gWaterTrialIceBlockDL_000036A0_Tex_HEIGHT, 16)];
#define gWaterTrialIceBlockDL_00003EA0_Tex_WIDTH 32
#define gWaterTrialIceBlockDL_00003EA0_Tex_HEIGHT 32
extern u64 gWaterTrialIceBlockDL_00003EA0_Tex[TEX_LEN(u64, gWaterTrialIceBlockDL_00003EA0_Tex_WIDTH, gWaterTrialIceBlockDL_00003EA0_Tex_HEIGHT, 8)];
extern Vtx gWaterTrialIceBlockDL_060042A0_Vtx[];
extern Gfx gWaterTrialIceBlockDL[30];
extern BgCamInfo gWaterTrialIceBlockBgCamList[];
extern SurfaceType gWaterTrialIceBlockSurfaceTypes[];
extern CollisionPoly gWaterTrialIceBlockPolyList[];
extern Vec3s gWaterTrialIceBlockVtxList[];
extern CollisionHeader gWaterTrialIceBlockCol;
extern Vtx gTowerBarrierDL_06004650_Vtx_fused_[];
extern Gfx gTowerBarrierDL[49];
#define gTrialBarrierFloorDL_00004AC0_Tex_WIDTH 32
#define gTrialBarrierFloorDL_00004AC0_Tex_HEIGHT 32
extern u64 gTrialBarrierFloorDL_00004AC0_Tex[TEX_LEN(u64, gTrialBarrierFloorDL_00004AC0_Tex_WIDTH, gTrialBarrierFloorDL_00004AC0_Tex_HEIGHT, 8)];
extern Vtx gTrialBarrierFloorDL_06004EC0_Vtx[];
extern Gfx gTrialBarrierFloorDL[26];
extern Vtx gTrialBarrierEnergyVtx[];
extern Vtx gTrialBarrierOrbDL_06005630_Vtx_fused_[];
extern Gfx gTrialBarrierEnergyDL[80];
extern Gfx gTrialBarrierOrbDL[47];
extern Vtx gDemoKekkaiDL_005FF0_06005E30_Vtx[];
extern Gfx gDemoKekkaiDL_005FF0[41];
#define gSpiritTrialLightSourceDL_00006140_Tex_WIDTH 8
#define gSpiritTrialLightSourceDL_00006140_Tex_HEIGHT 128
extern u64 gSpiritTrialLightSourceDL_00006140_Tex[TEX_LEN(u64, gSpiritTrialLightSourceDL_00006140_Tex_WIDTH, gSpiritTrialLightSourceDL_00006140_Tex_HEIGHT, 16)];
#define gSpiritTrialWebDL_00006940_Tex_WIDTH 64
#define gSpiritTrialWebDL_00006940_Tex_HEIGHT 64
extern u64 gSpiritTrialWebDL_00006940_Tex[TEX_LEN(u64, gSpiritTrialWebDL_00006940_Tex_WIDTH, gSpiritTrialWebDL_00006940_Tex_HEIGHT, 8)];
extern Vtx gSpiritTrialWebDL_06007940_Vtx_fused_[];
extern Gfx gSpiritTrialWebDL[54];
#define gShadowTrialPathDL_00007DB0_Tex_WIDTH 32
#define gShadowTrialPathDL_00007DB0_Tex_HEIGHT 32
extern u64 gShadowTrialPathDL_00007DB0_Tex[TEX_LEN(u64, gShadowTrialPathDL_00007DB0_Tex_WIDTH, gShadowTrialPathDL_00007DB0_Tex_HEIGHT, 16)];
extern Vtx gShadowTrialPathDL_060085B0_Vtx_fused_[];
extern Gfx gShadowTrialPathDL[36];
#define gLightTrialFakeWallDL_000089D0_Tex_WIDTH 32
#define gLightTrialFakeWallDL_000089D0_Tex_HEIGHT 32
extern u64 gLightTrialFakeWallDL_000089D0_Tex[TEX_LEN(u64, gLightTrialFakeWallDL_000089D0_Tex_WIDTH, gLightTrialFakeWallDL_000089D0_Tex_HEIGHT, 16)];
extern Vtx gLightTrialFakeWallDL_060091D0_Vtx[];
extern Gfx gLightTrialFakeWallDL[19];
#define gGanonsCastleScrubsFakeWallDL_0000A440_Tex_WIDTH 64
#define gGanonsCastleScrubsFakeWallDL_0000A440_Tex_HEIGHT 32
extern u64 gGanonsCastleScrubsFakeWallDL_0000A440_Tex[TEX_LEN(u64, gGanonsCastleScrubsFakeWallDL_0000A440_Tex_WIDTH, gGanonsCastleScrubsFakeWallDL_0000A440_Tex_HEIGHT, 16)];
extern Vtx gGanonsCastleScrubsFakeWallDL_0600B440_Vtx[];
extern Gfx gGanonsCastleScrubsFakeWallDL[19];
#define gClearBlockDL_0000B540_Tex_WIDTH 32
#define gClearBlockDL_0000B540_Tex_HEIGHT 32
extern u64 gClearBlockDL_0000B540_Tex[TEX_LEN(u64, gClearBlockDL_0000B540_Tex_WIDTH, gClearBlockDL_0000B540_Tex_HEIGHT, 16)];
extern Vtx gClearBlockDL_0600BD40_Vtx[];
extern Gfx gClearBlockDL[23];
extern BgCamInfo gClearBlockBgCamList[];
extern SurfaceType gClearBlockSurfaceTypes[];
extern CollisionPoly gClearBlockPolyList[];
extern Vec3s gClearBlockVtxList[];
extern CollisionHeader gClearBlockCol;
#define gFireTrialPlatformDL_0000C0B0_Tex_WIDTH 32
#define gFireTrialPlatformDL_0000C0B0_Tex_HEIGHT 32
extern u64 gFireTrialPlatformDL_0000C0B0_Tex[TEX_LEN(u64, gFireTrialPlatformDL_0000C0B0_Tex_WIDTH, gFireTrialPlatformDL_0000C0B0_Tex_HEIGHT, 16)];
#define gFireTrialPlatformDL_0000C8B0_Tex_WIDTH 32
#define gFireTrialPlatformDL_0000C8B0_Tex_HEIGHT 64
extern u64 gFireTrialPlatformDL_0000C8B0_Tex[TEX_LEN(u64, gFireTrialPlatformDL_0000C8B0_Tex_WIDTH, gFireTrialPlatformDL_0000C8B0_Tex_HEIGHT, 16)];
extern Vtx gFireTrialPlatformDL_0600D8B0_Vtx_fused_[];
extern Gfx gFireTrialPlatformDL[131];
extern BgCamInfo gFireTrialPlatformBgCamList[];
extern SurfaceType gFireTrialPlatformSurfaceTypes[];
extern CollisionPoly gFireTrialPlatformPolyList[];
extern Vec3s gFireTrialPlatformVtxList[];
extern CollisionHeader gFireTrialPlatformCol;

#endif
