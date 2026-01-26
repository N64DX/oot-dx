#include "object_bdoor.h"
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keep.h"

#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 gBossDoorGanonsCastleTex[TEX_LEN(u64, gBossDoorGanonsCastleTex_WIDTH, gBossDoorGanonsCastleTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorGanonsCastleTex.rgba16.inc.c"
};

Vtx gBossDoorVtx[] = {
#include "assets/objects/object_bdoor/gBossDoorVtx.inc.c"
};

Gfx gBossDoorDL[23] = {
#include "assets/objects/object_bdoor/gBossDoorDL.inc.c"
};

Vtx gBossDoorLockVtx[] = {
#include "assets/objects/object_bdoor/gBossDoorLockVtx.inc.c"
};

Gfx gBossDoorLockDL[29] = {
#include "assets/objects/object_bdoor/gBossDoorLockDL.inc.c"
};

Vtx gBossDoorChainVtx[] = {
#include "assets/objects/object_bdoor/gBossDoorChainVtx.inc.c"
};

Gfx gBossDoorChainDL[18] = {
#include "assets/objects/object_bdoor/gBossDoorChainDL.inc.c"
};

u64 gBossDoorSpiritTex[TEX_LEN(u64, gBossDoorSpiritTex_WIDTH, gBossDoorSpiritTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorSpiritTex.rgba16.inc.c"
};

u64 gBossDoorForestTex[TEX_LEN(u64, gBossDoorForestTex_WIDTH, gBossDoorForestTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorForestTex.rgba16.inc.c"
};

u64 gBossDoorFireTex[TEX_LEN(u64, gBossDoorFireTex_WIDTH, gBossDoorFireTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorFireTex.rgba16.inc.c"
};

u64 gBossDoorShadowTex[TEX_LEN(u64, gBossDoorShadowTex_WIDTH, gBossDoorShadowTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorShadowTex.rgba16.inc.c"
};

u64 gBossDoorWaterTex[TEX_LEN(u64, gBossDoorWaterTex_WIDTH, gBossDoorWaterTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorWaterTex.rgba16.inc.c"
};

u64 gBossDoorDefaultTex[TEX_LEN(u64, gBossDoorDefaultTex_WIDTH, gBossDoorDefaultTex_HEIGHT, 16)] = {
#include "assets/objects/object_bdoor/gBossDoorDefaultTex.rgba16.inc.c"
};

u64 gBossDoorWoodfallTex[] = {
#include "assets/objects/object_bdoor/gBossDoorWoodfallTex.rgba16.inc.c"
};
