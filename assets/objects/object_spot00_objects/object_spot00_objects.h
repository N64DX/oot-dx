#ifndef OBJECT_SPOT00_OBJECTS_H
#define OBJECT_SPOT00_OBJECTS_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern Vtx gHyruleFieldCastleDrawbridgeChainsDL_06000000_Vtx_fused_[];
extern Vtx gHyruleFieldCastleDrawbridgeDL_060002B0_Vtx[];

extern Gfx gHyruleFieldCastleDrawbridgeChainsDL[28];
extern Gfx gHyruleFieldCastleDrawbridgeDL[22];

#define gHyruleFieldCastleDrawbridgeWoodTex_WIDTH 32
#define gHyruleFieldCastleDrawbridgeWoodTex_HEIGHT 64
extern u64 gHyruleFieldCastleDrawbridgeWoodTex[TEX_LEN(u64, gHyruleFieldCastleDrawbridgeWoodTex_WIDTH, gHyruleFieldCastleDrawbridgeWoodTex_HEIGHT, 16)];
#define gHyruleFieldCastleDrawbridgeChainsTex_WIDTH 16
#define gHyruleFieldCastleDrawbridgeChainsTex_HEIGHT 32
extern u64 gHyruleFieldCastleDrawbridgeChainsTex[TEX_LEN(u64, gHyruleFieldCastleDrawbridgeChainsTex_WIDTH, gHyruleFieldCastleDrawbridgeChainsTex_HEIGHT, 16)];
#define gHyruleFieldCastleDrawbridgeBoltDL_WIDTH 16
#define gHyruleFieldCastleDrawbridgeBoltDL_HEIGHT 16
extern u64 gHyruleFieldCastleDrawbridgeBoltDL[TEX_LEN(u64, gHyruleFieldCastleDrawbridgeBoltDL_WIDTH, gHyruleFieldCastleDrawbridgeBoltDL_HEIGHT, 16)];

extern CollisionHeader gHyruleFieldCastleDrawbridgeChainsCol;
extern CollisionHeader gHyruleFieldCastleDrawbridgeCol;
extern CollisionHeader gHyruleFieldCastleDrawbridgeHorseBlockedCol;

#endif
