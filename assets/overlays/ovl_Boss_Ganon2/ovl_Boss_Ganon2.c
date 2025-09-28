#include "ovl_Boss_Ganon2.h"
#include "extracted/ntsc-1.0/assets/objects/gameplay_keep/gameplay_keep.h"

#include "gfx.h"
#include "sys_matrix.h"

static u64 gGanonLightOrbTex[TEX_LEN(u64, gGanonLightOrbTex_WIDTH, gGanonLightOrbTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightOrbTex.i8.inc.c"
};

Vtx gGanonLightOrbModelDL_80B103B8_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightOrbModelDL_80B103B8_Vtx.inc.c"
};

static Gfx gGanonLightOrbMaterialDL[14] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightOrbMaterialDL.inc.c"
};

static Gfx gGanonLightOrbModelDL[3] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightOrbModelDL.inc.c"
};

Vtx gGanonShadowModelDL_80B10480_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonShadowModelDL_80B10480_Vtx.inc.c"
};

static Gfx gGanonShadowMaterialDL[4] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonShadowMaterialDL.inc.c"
};

static Gfx gGanonShadowModelDL[6] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonShadowModelDL.inc.c"
};

static u64 gGanonSwordTrailTex[TEX_LEN(u64, gGanonSwordTrailTex_WIDTH, gGanonSwordTrailTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonSwordTrailTex.i8.inc.c"
};

static u64 gGanonSwordTrailMaskTex[TEX_LEN(u64, gGanonSwordTrailMaskTex_WIDTH, gGanonSwordTrailMaskTex_HEIGHT, 4)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonSwordTrailMaskTex.i4.inc.c"
};

static Vtx gGanonSwordTrailVtx[22] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonSwordTrailVtx.inc.c"
};

static Gfx gGanonSwordTrailDL[35] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonSwordTrailDL.inc.c"
};

static u64 gGanonTriforceTex[TEX_LEN(u64, gGanonTriforceTex_WIDTH, gGanonTriforceTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonTriforceTex.i8.inc.c"
};

Vtx gGanonTriforceDL_80B11D88_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonTriforceDL_80B11D88_Vtx.inc.c"
};

static Gfx gGanonTriforceDL[16] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonTriforceDL.inc.c"
};

static u64 gGanonLightningTex[TEX_LEN(u64, gGanonLightningTex_WIDTH, gGanonLightningTex_HEIGHT, 4)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightningTex.i4.inc.c"
};

Vtx gGanonLightningDL_80B12848_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightningDL_80B12848_Vtx.inc.c"
};

static Gfx gGanonLightningDL[17] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonLightningDL.inc.c"
};

static u64 gGanonFireRingTex[TEX_LEN(u64, gGanonFireRingTex_WIDTH, gGanonFireRingTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonFireRingTex.i8.inc.c"
};

Vtx gGanonFireRingDL_80B13110_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonFireRingDL_80B13110_Vtx.inc.c"
};

static Gfx gGanonFireRingDL[36] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonFireRingDL.inc.c"
};

static u64 gGanonZeldaMagicTex[TEX_LEN(u64, gGanonZeldaMagicTex_WIDTH, gGanonZeldaMagicTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonZeldaMagicTex.i8.inc.c"
};

Vtx gGanonZeldaMagicDL_80B13BD0_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonZeldaMagicDL_80B13BD0_Vtx.inc.c"
};

static Gfx gGanonZeldaMagicDL[33] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonZeldaMagicDL.inc.c"
};

static u64 gGanonMasterSwordShadowTex[TEX_LEN(u64, gGanonMasterSwordShadowTex_WIDTH, gGanonMasterSwordShadowTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordShadowTex.i8.inc.c"
};

Vtx gGanonMasterSwordShadowDL_80B14238_Vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordShadowDL_80B14238_Vtx.inc.c"
};

static Gfx gGanonMasterSwordShadowDL[16] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordShadowDL.inc.c"
};

static u64 gGanonMasterSwordPommelTex[TEX_LEN(u64, gGanonMasterSwordPommelTex_WIDTH, gGanonMasterSwordPommelTex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordPommelTex.rgba16.inc.c"
};

static u64 gGanonMasterSwordGuardTex[TEX_LEN(u64, gGanonMasterSwordGuardTex_WIDTH, gGanonMasterSwordGuardTex_HEIGHT, 16)] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordGuardTex.rgba16.inc.c"
};

Vtx gGanonMasterSwordDL_80B14CF8_Vtx_fused_[] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordDL_80B14CF8_Vtx_fused_.inc.c"
};

static Gfx gGanonMasterSwordDL[122] = {
#include "assets/overlays/ovl_Boss_Ganon2/gGanonMasterSwordDL.inc.c"
};

u64 gSwordMetalTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_metal.i8.inc.c"
};

u64 gRazorSwordHandleDesignTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle_design.rgba16.inc.c"
};

u64 gRazorSwordHandleGripTex[] = {
#include "assets/objects/object_link_child/swords/razor_sword_handle_grip.rgba16.inc.c"
};

Vtx razor_sword_handle_vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/razor_sword_handle.vtx.inc"
};

Vtx razor_sword_blade_vtx[] = {
#include "assets/overlays/ovl_Boss_Ganon2/razor_sword_blade.vtx.inc"
};

Gfx gGanonRazorSwordDL[] = {
    // Part 1
    gsSPTexture(0x0708, 0x0C80, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 2, 0),
    gsSP2Triangles(0, 5, 2, 0, 0, 2, 1, 0),
	
	// Part 2
    gsSPTexture(0x0384, 0x1068, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[7], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 4, 9, 0),
	
	// Part 3
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[17], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 0, 0, 3, 9, 8, 0),
    gsSP2Triangles(10, 11, 6, 0, 7, 11, 10, 0),
	
	// Part 4
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gRazorSwordHandleDesignTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_handle_vtx[29], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 4, 6, 0),
    gsSP2Triangles(5, 4, 10, 0, 2, 9, 8, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(11, 12, 13, 0, 13, 14, 11, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 17, 16, 0, 18, 20, 16, 0),
    gsSP2Triangles(21, 17, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(21, 22, 17, 0, 21, 18, 22, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 29, 30, 27, 0),
    gsSPVertex(&razor_sword_handle_vtx[60], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 6, 11, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRazorSwordHandleGripTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&razor_sword_handle_vtx[72], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 2, 4, 0, 0),
	
	// Part 1
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 4, 0),
    gsSP1Triangle(3, 4, 6, 0),
	
	// Part 2
    gsSPTexture(0x0BB8, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[7], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	
	// Part 3
    gsSPTexture(0x07D0, 0x04B0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[11], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
	
	// Part 4
    gsSPTexture(0x07D0, 0x04B0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[15], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 3, 4, 0),
    gsSP1Triangle(4, 6, 5, 0),
	
	// Part 5
    gsSPTexture(0x0320, 0x0514, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(9, 10, 0, 0, 5, 11, 8, 0),
    gsSP2Triangles(5, 8, 3, 0, 8, 11, 5, 0),
    gsSP1Triangle(8, 5, 6, 0),
	
	// Part 6
    gsSPTexture(0x05DC, 0x0834, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 2, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE  | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[34], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
	
	// Part 7
    gsSPTexture(0x0A8C, 0x0640, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 60, 60, 128, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gSwordMetalTex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, 3, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(&razor_sword_blade_vtx[37], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    
	gsSPEndDisplayList(),
};
