#ifndef OBJECT_BDOOR_H
#define OBJECT_BDOOR_H

#include "tex_len.h"
#include "ultra64.h"

#define gBossDoorGanonsCastleTex_WIDTH 32
#define gBossDoorGanonsCastleTex_HEIGHT 64
extern u64 gBossDoorGanonsCastleTex[TEX_LEN(u64, gBossDoorGanonsCastleTex_WIDTH, gBossDoorGanonsCastleTex_HEIGHT, 16)];
extern Vtx gBossDoorVtx[];
extern Gfx gBossDoorDL[23];
extern Vtx gBossDoorLockVtx[];
extern Gfx gBossDoorLockDL[29];
extern Vtx gBossDoorChainVtx[];
extern Gfx gBossDoorChainDL[18];
#define gBossDoorSpiritTex_WIDTH 32
#define gBossDoorSpiritTex_HEIGHT 64
extern u64 gBossDoorSpiritTex[TEX_LEN(u64, gBossDoorSpiritTex_WIDTH, gBossDoorSpiritTex_HEIGHT, 16)];
#define gBossDoorForestTex_WIDTH 32
#define gBossDoorForestTex_HEIGHT 64
extern u64 gBossDoorForestTex[TEX_LEN(u64, gBossDoorForestTex_WIDTH, gBossDoorForestTex_HEIGHT, 16)];
#define gBossDoorFireTex_WIDTH 32
#define gBossDoorFireTex_HEIGHT 64
extern u64 gBossDoorFireTex[TEX_LEN(u64, gBossDoorFireTex_WIDTH, gBossDoorFireTex_HEIGHT, 16)];
#define gBossDoorShadowTex_WIDTH 32
#define gBossDoorShadowTex_HEIGHT 64
extern u64 gBossDoorShadowTex[TEX_LEN(u64, gBossDoorShadowTex_WIDTH, gBossDoorShadowTex_HEIGHT, 16)];
#define gBossDoorWaterTex_WIDTH 32
#define gBossDoorWaterTex_HEIGHT 64
extern u64 gBossDoorWaterTex[TEX_LEN(u64, gBossDoorWaterTex_WIDTH, gBossDoorWaterTex_HEIGHT, 16)];
#define gBossDoorDefaultTex_WIDTH 32
#define gBossDoorDefaultTex_HEIGHT 64
extern u64 gBossDoorDefaultTex[TEX_LEN(u64, gBossDoorDefaultTex_WIDTH, gBossDoorDefaultTex_HEIGHT, 16)];
extern u64 gBossDoorWoodfallTex[];

#endif
