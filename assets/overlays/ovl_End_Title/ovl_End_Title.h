#ifndef OVL_END_TITLE_H
#define OVL_END_TITLE_H

#include "tex_len.h"
#include "ultra64.h"
#include "versions.h"

#if OOT_VERSION == IQUE_CN

static Gfx sEmptyDL1[1];
#define sIQueTop_WIDTH 128
#define sIQueTop_HEIGHT 24
static u64 sIQueTop[TEX_LEN(u64, sIQueTop_WIDTH, sIQueTop_HEIGHT, 8)];
#define sIQueBottom_WIDTH 128
#define sIQueBottom_HEIGHT 24
static u64 sIQueBottom[TEX_LEN(u64, sIQueBottom_WIDTH, sIQueBottom_HEIGHT, 8)];
static Gfx sEmptyDL2[1];
#define sNintendoLeftTex_WIDTH 64
#define sNintendoLeftTex_HEIGHT 48
static u64 sNintendoLeftTex[TEX_LEN(u64, sNintendoLeftTex_WIDTH, sNintendoLeftTex_HEIGHT, 8)];
static Gfx sEmptyDL3[1];
#define sNintendoRightTex_WIDTH 64
#define sNintendoRightTex_HEIGHT 48
static u64 sNintendoRightTex[TEX_LEN(u64, sNintendoRightTex_WIDTH, sNintendoRightTex_HEIGHT, 8)];
static Gfx sEmptyDL4[1];
#define sPresentedByTex_WIDTH 96
#define sPresentedByTex_HEIGHT 16
static u64 sPresentedByTex[TEX_LEN(u64, sPresentedByTex_WIDTH, sPresentedByTex_HEIGHT, 8)];
static Gfx sEmptyDL5[1];
#define sTheEndTex_WIDTH 80
#define sTheEndTex_HEIGHT 24
static u64 sTheEndTex[TEX_LEN(u64, sTheEndTex_WIDTH, sTheEndTex_HEIGHT, 8)];
static Gfx sEmptyDL6[1];
#define sTheLegendOfZeldaTex_WIDTH 120
#define sTheLegendOfZeldaTex_HEIGHT 24
static u64 sTheLegendOfZeldaTex[TEX_LEN(u64, sTheLegendOfZeldaTex_WIDTH, sTheLegendOfZeldaTex_HEIGHT, 8)];
static Gfx sEmptyDL7[1];
#define sOcarinaOfTimeTex_WIDTH 112
#define sOcarinaOfTimeTex_HEIGHT 16
static u64 sOcarinaOfTimeTex[TEX_LEN(u64, sOcarinaOfTimeTex_WIDTH, sOcarinaOfTimeTex_HEIGHT, 8)];
static Vtx sTriforceVtx[6];
static Gfx sTriforceDL[12];
static Gfx sPresentedByNintendoDL[57];

#else

#define sTheLegendOfZeldaTex_WIDTH 120
#define sTheLegendOfZeldaTex_HEIGHT 24
static u64 sTheLegendOfZeldaTex[TEX_LEN(u64, sTheLegendOfZeldaTex_WIDTH, sTheLegendOfZeldaTex_HEIGHT, 8)];
#define sOcarinaOfTimeTex_WIDTH 112
#define sOcarinaOfTimeTex_HEIGHT 16
static u64 sOcarinaOfTimeTex[TEX_LEN(u64, sOcarinaOfTimeTex_WIDTH, sOcarinaOfTimeTex_HEIGHT, 8)];
#define sTheEndTex_WIDTH 80
#define sTheEndTex_HEIGHT 24
static u64 sTheEndTex[TEX_LEN(u64, sTheEndTex_WIDTH, sTheEndTex_HEIGHT, 8)];
#define sNintendoLeftTex_WIDTH 64
#define sNintendoLeftTex_HEIGHT 48
static u64 sNintendoLeftTex[TEX_LEN(u64, sNintendoLeftTex_WIDTH, sNintendoLeftTex_HEIGHT, 8)];
#define sNintendoRightTex_WIDTH 64
#define sNintendoRightTex_HEIGHT 48
static u64 sNintendoRightTex[TEX_LEN(u64, sNintendoRightTex_WIDTH, sNintendoRightTex_HEIGHT, 8)];
#define sPresentedByTex_WIDTH 96
#define sPresentedByTex_HEIGHT 16
static u64 sPresentedByTex[TEX_LEN(u64, sPresentedByTex_WIDTH, sPresentedByTex_HEIGHT, 8)];
static Vtx sTriforceVtx[6];
static Gfx sTriforceDL[12];
static Gfx sPresentedByNintendoDL[37];

#endif

#endif
