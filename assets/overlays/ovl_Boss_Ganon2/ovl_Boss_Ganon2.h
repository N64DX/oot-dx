#ifndef OVL_BOSS_GANON2_H
#define OVL_BOSS_GANON2_H

#include "tex_len.h"
#include "ultra64.h"

#define gGanonLightOrbTex_WIDTH 64
#define gGanonLightOrbTex_HEIGHT 64
static u64 gGanonLightOrbTex[TEX_LEN(u64, gGanonLightOrbTex_WIDTH, gGanonLightOrbTex_HEIGHT, 8)];
extern Vtx gGanonLightOrbModelDL_80B103B8_Vtx[];
static Gfx gGanonLightOrbMaterialDL[14];
static Gfx gGanonLightOrbModelDL[3];
extern Vtx gGanonShadowModelDL_80B10480_Vtx[];
static Gfx gGanonShadowMaterialDL[4];
static Gfx gGanonShadowModelDL[6];
#define gGanonSwordTrailTex_WIDTH 32
#define gGanonSwordTrailTex_HEIGHT 32
static u64 gGanonSwordTrailTex[TEX_LEN(u64, gGanonSwordTrailTex_WIDTH, gGanonSwordTrailTex_HEIGHT, 8)];
#define gGanonSwordTrailMaskTex_WIDTH 32
#define gGanonSwordTrailMaskTex_HEIGHT 32
static u64 gGanonSwordTrailMaskTex[TEX_LEN(u64, gGanonSwordTrailMaskTex_WIDTH, gGanonSwordTrailMaskTex_HEIGHT, 4)];
static Vtx gGanonSwordTrailVtx[22];
static Gfx gGanonSwordTrailDL[35];
#define gGanonTriforceTex_WIDTH 64
#define gGanonTriforceTex_HEIGHT 64
static u64 gGanonTriforceTex[TEX_LEN(u64, gGanonTriforceTex_WIDTH, gGanonTriforceTex_HEIGHT, 8)];
extern Vtx gGanonTriforceDL_80B11D88_Vtx[];
static Gfx gGanonTriforceDL[16];
#define gGanonLightningTex_WIDTH 32
#define gGanonLightningTex_HEIGHT 160
static u64 gGanonLightningTex[TEX_LEN(u64, gGanonLightningTex_WIDTH, gGanonLightningTex_HEIGHT, 4)];
extern Vtx gGanonLightningDL_80B12848_Vtx[];
static Gfx gGanonLightningDL[17];
#define gGanonFireRingTex_WIDTH 32
#define gGanonFireRingTex_HEIGHT 64
static u64 gGanonFireRingTex[TEX_LEN(u64, gGanonFireRingTex_WIDTH, gGanonFireRingTex_HEIGHT, 8)];
extern Vtx gGanonFireRingDL_80B13110_Vtx[];
static Gfx gGanonFireRingDL[36];
#define gGanonZeldaMagicTex_WIDTH 32
#define gGanonZeldaMagicTex_HEIGHT 64
static u64 gGanonZeldaMagicTex[TEX_LEN(u64, gGanonZeldaMagicTex_WIDTH, gGanonZeldaMagicTex_HEIGHT, 8)];
extern Vtx gGanonZeldaMagicDL_80B13BD0_Vtx[];
static Gfx gGanonZeldaMagicDL[33];
#define gGanonMasterSwordShadowTex_WIDTH 32
#define gGanonMasterSwordShadowTex_HEIGHT 32
static u64 gGanonMasterSwordShadowTex[TEX_LEN(u64, gGanonMasterSwordShadowTex_WIDTH, gGanonMasterSwordShadowTex_HEIGHT, 8)];
extern Vtx gGanonMasterSwordShadowDL_80B14238_Vtx[];
static Gfx gGanonMasterSwordShadowDL[16];
#define gGanonMasterSwordPommelTex_WIDTH 16
#define gGanonMasterSwordPommelTex_HEIGHT 16
static u64 gGanonMasterSwordPommelTex[TEX_LEN(u64, gGanonMasterSwordPommelTex_WIDTH, gGanonMasterSwordPommelTex_HEIGHT, 16)];
#define gGanonMasterSwordGuardTex_WIDTH 32
#define gGanonMasterSwordGuardTex_HEIGHT 32
static u64 gGanonMasterSwordGuardTex[TEX_LEN(u64, gGanonMasterSwordGuardTex_WIDTH, gGanonMasterSwordGuardTex_HEIGHT, 16)];
extern Vtx gGanonMasterSwordDL_80B14CF8_Vtx_fused_[];
static Gfx gGanonMasterSwordDL[122];

extern Gfx gGanonRazorSwordDL[];

#endif
