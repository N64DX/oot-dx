#include "object_gi_shield_2_mm.h"

#include "gfx.h"

Vtx object_gi_shield_2_mmVtx[] = {
#include "assets/objects/object_gi_shield_2_mm/object_gi_shield_2_mmVtx.inc.c"
};

u64 gGiHerosShieldEmblem1Tex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiHerosShieldEmblem1Tex.i8.inc.c"
};

u64 gGiHerosShieldBase1Tex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiHerosShieldBase1Tex.i4.inc.c"
};

u64 gGiHerosShieldEmblem2Tex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiHerosShieldEmblem2Tex.i8.inc.c"
};

u64 gGiHerosShieldBase2Tex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiHerosShieldBase2Tex.i4.inc.c"
};

Gfx gGiHerosShieldDL[] = {
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 205, 205, 255, 255),
    gsDPSetEnvColor(0, 0, 40, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_INTER2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gGiHerosShieldBase2Tex, G_IM_FMT_I, 16, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_shield_2_mmVtx[39], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(13, 2, 12, 0, 10, 14, 11, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 8, 15, 0),
    gsSP2Triangles(16, 17, 4, 0, 16, 18, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 2, 0, 23, 24, 2, 0),
    gsSP2Triangles(24, 0, 2, 0, 3, 25, 4, 0),
    gsSP2Triangles(25, 26, 4, 0, 26, 16, 4, 0),
    gsSP2Triangles(18, 20, 19, 0, 19, 21, 27, 0),
    gsSP2Triangles(9, 28, 29, 0, 9, 29, 30, 0),
    gsSP2Triangles(9, 30, 7, 0, 8, 5, 31, 0),
    gsSPVertex(&object_gi_shield_2_mmVtx[71], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 20, 22, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 5, 0),
    gsSP2Triangles(25, 5, 4, 0, 27, 28, 26, 0),
    gsSP2Triangles(27, 26, 25, 0, 1, 29, 30, 0),
    gsSP1Triangle(1, 30, 2, 0),
    gsSPVertex(&object_gi_shield_2_mmVtx[102], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 14, 12, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 18, 0),
    gsSP2Triangles(19, 18, 17, 0, 21, 22, 20, 0),
    gsSP2Triangles(21, 20, 19, 0, 23, 24, 22, 0),
    gsSP2Triangles(23, 22, 21, 0, 1, 0, 24, 0),
    gsSP2Triangles(1, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 25, 28, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPLoadTextureBlock_4b(gGiHerosShieldBase2Tex, G_IM_FMT_I, 16, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, 2, 1),
    gsSPVertex(&object_gi_shield_2_mmVtx[132], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 0, 255),
    gsDPLoadTextureBlock_4b(gGiHerosShieldBase2Tex, G_IM_FMT_I, 16, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, 2, 1),
    gsSPVertex(&object_gi_shield_2_mmVtx[138], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 65, 50, 0, 255),
    gsDPSetEnvColor(155, 120, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_INTER2),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(gGiHerosShieldBase1Tex, G_IM_FMT_I, 16, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_gi_shield_2_mmVtx[147], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx gGiHerosShieldEmblemDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 0, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiHerosShieldEmblem1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_gi_shield_2_mmVtx, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 9, 7, 0, 0, 10, 11, 0),
    gsSP2Triangles(0, 12, 1, 0, 12, 13, 1, 0),
    gsSP2Triangles(13, 14, 4, 0, 14, 0, 4, 0),
    gsSP2Triangles(8, 5, 0, 0, 0, 2, 10, 0),
    gsSP2Triangles(0, 11, 9, 0, 0, 6, 3, 0),
    gsSP2Triangles(15, 16, 9, 0, 15, 9, 11, 0),
    gsSP2Triangles(17, 18, 10, 0, 17, 10, 2, 0),
    gsSP2Triangles(13, 19, 1, 0, 4, 20, 13, 0),
    gsSP2Triangles(21, 22, 3, 0, 21, 3, 6, 0),
    gsSP2Triangles(23, 24, 5, 0, 23, 5, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0xFF, 255, 0, 0, 255),
    gsDPSetEnvColor(255, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGiHerosShieldEmblem2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 48, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_gi_shield_2_mmVtx[25], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 1, 0, 4, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 0, 8, 0),
    gsSP2Triangles(0, 2, 8, 0, 0, 9, 10, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 11, 3, 0),
    gsSP2Triangles(0, 12, 9, 0, 0, 7, 13, 0),
    gsSP2Triangles(7, 6, 13, 0, 0, 13, 12, 0),
    gsSPEndDisplayList(),
};

Vtx gGiMetalShieldFrameVtx[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldFrameVtx.inc.c"
};

Vtx gGiMetalShieldSymbolVtx[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldSymbolVtx.inc.c"
};

u64 gGiMetalShieldFrameTex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldFrameTex.ci4.inc.c"
};

u64 gGiMetalShieldFrameTLUT[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldFrameTex.tlut.rgba16.inc.c"
};

u64 gGiMetalShieldSymbolTex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldSymbolTex.ci8.inc.c"
};

u64 gGiMetalShieldSymbolTLUT[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldSymbolTex.tlut.rgba16.inc.c"
};

u64 gGiMetalShieldBackTex[] = {
#include "assets/objects/object_gi_shield_2_mm/gGiMetalShieldBackTex.rgba16.inc.c"
};

Gfx gGiMetalShieldFrameDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, 0, G_ON),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGiMetalShieldBackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 0, 0, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_CLIPPING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gGiMetalShieldFrameVtx, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
    gsSP2Triangles(5, 2, 6, 0, 6, 2, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 9, 13, 7, 0),
    gsSP2Triangles(11, 9, 8, 0, 14, 12, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 18, 0, 17, 22, 15, 0),
    gsSP2Triangles(19, 17, 16, 0, 21, 19, 18, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(gGiMetalShieldFrameTex, G_IM_FMT_CI, 64, 64, 0, 0, 0, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gGiMetalShieldFrameTLUT),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 15),
    gsDPPipeSync(),
    gsSPVertex(&gGiMetalShieldFrameVtx[23], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 5, 16, 0, 1, 0, 12, 0),
    gsSP2Triangles(2, 16, 5, 0, 12, 6, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gGiMetalShieldSymbolDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0x7CF, 0x9C3, 0, 0, G_ON),
    gsDPLoadTLUT_pal256(gGiMetalShieldSymbolTLUT),
    gsDPLoadTextureBlock(gGiMetalShieldSymbolTex, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, 0, 0, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_CLIPPING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(gGiMetalShieldSymbolVtx, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 4, 15, 5, 0),
    gsSP2Triangles(1, 16, 2, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 19, 23, 24, 0),
    gsSP2Triangles(10, 12, 14, 0, 11, 10, 14, 0),
    gsSP2Triangles(12, 10, 9, 0, 13, 12, 9, 0),
    gsSP2Triangles(25, 20, 22, 0, 21, 26, 24, 0),
    gsSP2Triangles(27, 17, 26, 0, 27, 6, 8, 0),
    gsSPEndDisplayList(),
};
