#include "assets/objects/gameplay_keep/gameplay_keep_deku_flower.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

static Vtx gameplay_keepVtx_00EB90[] = {
#include "assets/objects/gameplay_keep/deku_flower/gameplay_keepVtx_00EB90.vtx.inc"
};

static Vtx gameplay_keepVtx_00EEC8[] = {
#include "assets/objects/gameplay_keep/deku_flower/gameplay_keepVtx_00EEC8.vtx.inc"
};

static Vtx gameplay_keepVtx_011910[] = {
#include "assets/objects/gameplay_keep/deku_flower/gameplay_keepVtx_011910.vtx.inc"
};

static Vtx gameplay_keepVtx_011CF0[] = {
#include "assets/objects/gameplay_keep/deku_flower/gameplay_keepVtx_011CF0.vtx.inc"
};

static u64 gPinkDekuFlowerPetalAndCenterTex[] = {
#include "assets/objects/gameplay_keep/deku_flower/pink_deku_flower_petal_and_center.rgba16.inc.c"
};

static u64 gPinkDekuFlowerLeafAndCenterTex[] = {
#include "assets/objects/gameplay_keep/deku_flower/pink_deku_flower_leaf_and_center.rgba16.inc.c"
};

static u64 gPinkDekuFlowerBaseLeafTex[] = {
#include "assets/objects/gameplay_keep/deku_flower/pink_deku_flower_base_leaf.rgba16.inc.c"
};

static u64 gGoldDekuFlowerPetalAndCenterTex[] = {
#include "assets/objects/gameplay_keep/deku_flower/gold_deku_flower_petal_and_center.rgba16.inc.c"
};

static u64 gGoldDekuFlowerBaseLeafTex[] = {
#include "assets/objects/gameplay_keep/deku_flower/gold_deku_flower_base_leaf.rgba16.inc.c"
};

Gfx gPinkDekuFlowerIdleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_00EB90, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00EB90[9], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gPinkDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00EB90[18], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerBaseDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_00EEC8, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerCenterDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[45], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00EEC8[54], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerBackLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[37], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerLeftLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[33], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerFrontLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[29], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerRightLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[25], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerBackRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[21], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerFrontRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[17], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerFrontLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[13], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gPinkDekuFlowerBackLeafDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gPinkDekuFlowerLeafAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00EEC8[41], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx gGoldDekuFlowerIdleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_011910, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 7, 0, 12, 13, 2, 0),
    gsSP2Triangles(14, 15, 2, 0, 16, 17, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gGoldDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011910[18], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 13, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 23, 16, 25, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerBaseDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerBaseLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_keepVtx_011CF0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 13, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 23, 16, 25, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerCenterDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[58], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsSPVertex(&gameplay_keepVtx_011CF0[67], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 7, 1, 8, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerBackLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[50], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[46], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerFrontLeftPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[42], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[38], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerBackRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[34], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerFrontRightPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerFrontPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[26], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Gfx gGoldDekuFlowerBackPetalDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoldDekuFlowerPetalAndCenterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_011CF0[54], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static StandardLimb gPinkDekuFlowerBaseLimb = { 
    { 0, 0, 0 }, PINK_DEKU_FLOWER_LIMB_CENTER - 1, LIMB_DONE, gPinkDekuFlowerBaseDL
};

static StandardLimb gPinkDekuFlowerCenterLimb = { 
    { 0, 600, 0 }, PINK_DEKU_FLOWER_LIMB_BACK_LEAF - 1, LIMB_DONE, gPinkDekuFlowerCenterDL
};

static StandardLimb gPinkDekuFlowerBackLeafLimb = { 
    { 0, -1300, 0 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_FRONT_LEAF - 1, gPinkDekuFlowerBackLeafDL
};

static StandardLimb gPinkDekuFlowerFrontLeafLimb = { 
    { 0, 1300, 0 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL - 1, gPinkDekuFlowerFrontLeafDL
};

static StandardLimb gPinkDekuFlowerFrontRightPetalLimb = { 
    { 0, 919, -919 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL - 1, gPinkDekuFlowerFrontRightPetalDL
};

static StandardLimb gPinkDekuFlowerBackRightPetalLimb = { 
    { 0, -919, -919 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_RIGHT_LEAF - 1, gPinkDekuFlowerBackRightPetalDL
};

static StandardLimb gPinkDekuFlowerRightLeafLimb = { 
    { 0, 0, -1300 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL - 1, gPinkDekuFlowerRightLeafDL
};

static StandardLimb gPinkDekuFlowerFrontLeftPetalLimb = { 
    { 0, 919, 919 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_LEFT_LEAF - 1, gPinkDekuFlowerFrontLeftPetalDL
};

static StandardLimb gPinkDekuFlowerLeftLeafLimb = { 
    { 0, 0, 1300 }, LIMB_DONE, PINK_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL - 1, gPinkDekuFlowerLeftLeafDL
};

static StandardLimb gPinkDekuFlowerBackLeftPetalLimb = { 
    { 0, -919, 919 }, LIMB_DONE, LIMB_DONE, gPinkDekuFlowerBackLeftPetalDL
};

static void* gPinkDekuFlowerSkelLimbs[] = {
    &gPinkDekuFlowerBaseLimb,
    &gPinkDekuFlowerCenterLimb,
    &gPinkDekuFlowerBackLeafLimb,
    &gPinkDekuFlowerFrontLeafLimb,
    &gPinkDekuFlowerFrontRightPetalLimb,
    &gPinkDekuFlowerBackRightPetalLimb,
    &gPinkDekuFlowerRightLeafLimb,
    &gPinkDekuFlowerFrontLeftPetalLimb,
    &gPinkDekuFlowerLeftLeafLimb,
    &gPinkDekuFlowerBackLeftPetalLimb,
};

SkeletonHeader gPinkDekuFlowerSkel = { 
    gPinkDekuFlowerSkelLimbs, ARRAY_COUNT(gPinkDekuFlowerSkelLimbs)
};

static StandardLimb gGoldDekuFlowerBaseLimb = { 
    { 0, 0, 0 }, GOLD_DEKU_FLOWER_LIMB_CENTER - 1, LIMB_DONE, gGoldDekuFlowerBaseDL
};

static StandardLimb gGoldDekuFlowerCenterLimb = { 
    { 0, 1000, 0 }, GOLD_DEKU_FLOWER_LIMB_BACK_PETAL - 1, LIMB_DONE, gGoldDekuFlowerCenterDL
};

static StandardLimb gGoldDekuFlowerBackPetalLimb = { 
    { 0, -1300, 0 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_FRONT_PETAL - 1, gGoldDekuFlowerBackPetalDL
};

static StandardLimb gGoldDekuFlowerFrontPetalLimb = { 
    { 0, 1300, 0 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_FRONT_RIGHT_PETAL - 1, gGoldDekuFlowerFrontPetalDL
};

static StandardLimb gGoldDekuFlowerFrontRightPetalLimb = { 
    { 0, 919, -919 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_BACK_RIGHT_PETAL - 1, gGoldDekuFlowerFrontRightPetalDL
};

static StandardLimb gGoldDekuFlowerBackRightPetalLimb = { 
    { 0, -919, -919 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_RIGHT_PETAL - 1, gGoldDekuFlowerBackRightPetalDL
};

static StandardLimb gGoldDekuFlowerRightPetalLimb = { 
    { 0, 0, -1300 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_FRONT_LEFT_PETAL - 1, gGoldDekuFlowerRightPetalDL
};

static StandardLimb gGoldDekuFlowerFrontLeftPetalLimb = { 
    { 0, 919, 919 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_LEFT_PETAL - 1, gGoldDekuFlowerFrontLeftPetalDL
};

static StandardLimb gGoldDekuFlowerLeftPetalLimb = { 
    { 0, 0, 1300 }, LIMB_DONE, GOLD_DEKU_FLOWER_LIMB_BACK_LEFT_PETAL - 1, gGoldDekuFlowerLeftPetalDL
};

static StandardLimb gGoldDekuFlowerBackLeftPetalLimb = { 
    { 0, -919, 919 }, LIMB_DONE, LIMB_DONE, gGoldDekuFlowerBackLeftPetalDL
};

static void* gGoldDekuFlowerSkelLimbs[] = {
    &gGoldDekuFlowerBaseLimb,
    &gGoldDekuFlowerCenterLimb,
    &gGoldDekuFlowerBackPetalLimb,
    &gGoldDekuFlowerFrontPetalLimb,
    &gGoldDekuFlowerFrontRightPetalLimb,
    &gGoldDekuFlowerBackRightPetalLimb,
    &gGoldDekuFlowerRightPetalLimb,
    &gGoldDekuFlowerFrontLeftPetalLimb,
    &gGoldDekuFlowerLeftPetalLimb,
    &gGoldDekuFlowerBackLeftPetalLimb,
};

FlexSkeletonHeader gGoldDekuFlowerSkel = { 
    { gGoldDekuFlowerSkelLimbs, ARRAY_COUNT(gGoldDekuFlowerSkelLimbs) }, 10
};

static BgCamInfo gPinkDekuFlowerColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

static SurfaceType gPinkDekuFlowerColSurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_6,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_GRASS,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    }, {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_6,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ true,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_GRASS,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

static CollisionPoly gPinkDekuFlowerColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xF7B3},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF7B3},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xF7B3},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xF7B3},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x8001, 0xF7B3},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x8001, 0xF7B3},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xF7B3},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xF7B3},
    {0x0001, 0x0008, 0x4009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFD44},
    {0x0001, 0x0008, 0x400B, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFD44},
};

static Vec3s gPinkDekuFlowerColVertices[] = {
    {  -2125,    600,   2125 },
    {   2125,    600,   2125 },
    {   2125,    600,  -2125 },
    {  -2125,    600,  -2125 },
    {   2125,      0,   2125 },
    {  -2125,      0,   2125 },
    {   2125,      0,  -2125 },
    {  -2125,      0,  -2125 },
    {  -1530,    700,   1530 },
    {   1530,    700,  -1530 },
    {  -1530,    700,  -1530 },
    {   1530,    700,   1530 },
};

CollisionHeader gPinkDekuFlowerCol = { 
    { -2125, 0, -2125 },
    { 2125, 700, 2125 },
    ARRAY_COUNT(gPinkDekuFlowerColVertices), gPinkDekuFlowerColVertices,
    ARRAY_COUNT(gPinkDekuFlowerColPolygons), gPinkDekuFlowerColPolygons,
    gPinkDekuFlowerColSurfaceType,
    gPinkDekuFlowerColCamDataList,
    0, NULL
};

static BgCamInfo gGoldDekuFlowerColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

static SurfaceType gGoldDekuFlowerColSurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_6,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_GRASS,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

static CollisionPoly gGoldDekuFlowerColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x6828, 0x4A65, 0xF7C5},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x6828, 0x4A65, 0xF7C5},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x4A65, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0006, 0x0001, 0x0004, 0x4A65, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x6828, 0xB59B, 0xF7C5},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x6828, 0xB59B, 0xF7C5},
    {0x0000, 0x0005, 0x0000, 0x0003, 0xB59B, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0005, 0x0003, 0x0007, 0xB59B, 0x6828, 0x0000, 0xF7C5},
    {0x0000, 0x0008, 0x4009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFBB4},
    {0x0000, 0x0008, 0x400B, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFBB4},
};

static Vec3s gGoldDekuFlowerColVertices[] = {
    {  -2225,   1000,   2225 },
    {   2225,   1000,   2225 },
    {   2225,   1000,  -2225 },
    {  -2225,   1000,  -2225 },
    {   3625,      0,   3625 },
    {  -3625,      0,   3625 },
    {   3625,      0,  -3625 },
    {  -3625,      0,  -3625 },
    {  -1530,   1100,   1530 },
    {   1530,   1100,  -1530 },
    {  -1530,   1100,  -1530 },
    {   1530,   1100,   1530 },
};

CollisionHeader gGoldDekuFlowerCol = { 
    { -3625, 0, -3625 },
    { 3625, 1100, 3625 },
    ARRAY_COUNT(gGoldDekuFlowerColVertices), gGoldDekuFlowerColVertices,
    ARRAY_COUNT(gGoldDekuFlowerColPolygons), gGoldDekuFlowerColPolygons,
    gGoldDekuFlowerColSurfaceType,
    gGoldDekuFlowerColCamDataList,
    0, NULL
};

static s16 sDekuFlowerBounceAnimFrameData[] = {
    0x0000, 0x0004, 0x4000, 0x0000, 0x0420, 0x06E6, 0x01D0, 0xFA1D, 0xF306, 0xEFC3, 0xF195, 0xF660, 0xFC54, 0x019D, 
    0x0469, 0x03ED, 0x0161, 0xFDF4, 0xFAD6, 0xF935, 0xF9FE, 0xFC5C, 0xFED9, 0x0000, 0x40D1, 0x4908, 0x5030, 0x48C3, 
    0x3CFA, 0x3639, 0x3AA1, 0x4411, 0x4981, 0x474E, 0x41DA, 0x3C29, 0x393D, 0x3AA5, 0x3E84, 0x42C1, 0x4544, 0x451B, 
    0x4384, 0x41B0, 0x40D1, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x8000, 0x4000, 0x3D2C, 0x3872, 0x3772, 0x3F1A, 0xCA7B, 0xD06C, 0xCCF1, 0xC4FE, 0x3CCB, 0x3891, 
    0x399B, 0x3D57, 0xC231, 0xC68F, 0xC8DE, 0xC86B, 0xC648, 0xC37A, 0xC10A, 0x4000, 0x4000, 0x42D4, 0x478E, 0x488E, 
    0x40E6, 0x3585, 0x2F94, 0x330F, 0x3B02, 0x4335, 0x476F, 0x4665, 0x42A9, 0x3DCF, 0x3971, 0x3722, 0x3795, 0x39B8, 
    0x3C86, 0x3EF6, 0x4000, 0x0000, 0xF80B, 0xEC17, 0xE809, 0xEEDE, 0xFFC9, 0x0A83, 0x0808, 0xFF6E, 0xF651, 0xF249, 
    0xF3D4, 0xF857, 0xFE75, 0x0421, 0x0750, 0x0776, 0x05CE, 0x034E, 0x0101, 0x0000, 0x2000, 0x1F34, 0x1A2A, 0x169D, 
    0x1BE6, 0x2000, 0x1E95, 0x1F30, 0x1FFF, 0x1ECE, 0x1D80, 0x1E10, 0x1F43, 0x1FF9, 0x1FCA, 0x1F54, 0x1F4D, 0x1F95, 
    0x1FDE, 0x1FFD, 0x2000, 0x4000, 0x34AC, 0x226C, 0x1B3F, 0x26ED, 0x3FB3, 0x4F0A, 0x4B70, 0x3F32, 0x322C, 0x2C32, 
    0x2E82, 0x351A, 0x3DD1, 0x45D9, 0x4A66, 0x4A9D, 0x483D, 0x44AE, 0x416C, 0x4000, 0x0000, 0x07F5, 0x93E9, 0x97F7, 
    0x9122, 0x0037, 0xF57D, 0xF7F8, 0x0092, 0x09AF, 0x8DB7, 0x0C2C, 0x07A9, 0x018B, 0xFBDF, 0xF8B0, 0xF88A, 0xFA32, 
    0xFCB2, 0xFEFF, 0x0000, 0x6000, 0x60CC, 0x1A2A, 0x169D, 0x1BE6, 0x6000, 0x616B, 0x60D0, 0x6001, 0x6132, 0x1D80, 
    0x61F0, 0x60BD, 0x6007, 0x6036, 0x60AC, 0x60B3, 0x606B, 0x6022, 0x6003, 0x6000, 0x4000, 0x4B54, 0xDD94, 0xE4C1, 
    0xD913, 0x404D, 0x30F6, 0x3490, 0x40CE, 0x4DD4, 0xD3CE, 0x517E, 0x4AE6, 0x422F, 0x3A27, 0x359A, 0x3563, 0x37C3, 
    0x3B52, 0x3E94, 0x4000, 0xE000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xE000, 0x4000, 0x42D4, 0x478E, 0x488E, 
    0x40E6, 0x3585, 0x2F94, 0x330F, 0x3B02, 0x4335, 0x476F, 0x4665, 0x42A9, 0x3DCF, 0x3971, 0x3722, 0x3795, 0x39B8, 
    0x3C86, 0x3EF6, 0x4000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0x07F5, 0x13E9, 0x17F7, 
    0x1122, 0x0037, 0xF57D, 0xF7F8, 0x0092, 0x09AF, 0x0DB7, 0x0C2C, 0x07A9, 0x018B, 0xFBDF, 0xF8B0, 0xF88A, 0xFA32, 
    0xFCB2, 0xFEFF, 0x0000, 0xE000, 0xE0CC, 0xE5D6, 0xE963, 0xE41A, 0xE000, 0xE16B, 0xE0D0, 0xE001, 0xE132, 0xE280, 
    0xE1F0, 0xE0BD, 0xE007, 0xE036, 0xE0AC, 0xE0B3, 0xE06B, 0xE022, 0xE003, 0xE000, 0x4000, 0x34AC, 0x226C, 0x1B3F, 
    0x26ED, 0x3FB3, 0x4F0A, 0x4B70, 0x3F32, 0x322C, 0x2C32, 0x2E82, 0x351A, 0x3DD1, 0x45D9, 0x4A66, 0x4A9D, 0x483D, 
    0x44AE, 0x416C, 0x4000, 0x2000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x2000, 0xC000, 0xBD2C, 0xB872, 0xB772, 
    0xBF1A, 0xCA7B, 0xD06C, 0xCCF1, 0xC4FE, 0xBCCB, 0xB891, 0xB99B, 0xBD57, 0xC231, 0xC68F, 0xC8DE, 0xC86B, 0xC648, 
    0xC37A, 0xC10A, 0xC000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x0000, 0xF80B, 0x6C17, 0x6809, 
    0x6EDE, 0xFFC9, 0x0A83, 0x0808, 0xFF6E, 0xF651, 0x7249, 0xF3D4, 0xF857, 0xFE75, 0x0421, 0x0750, 0x0776, 0x05CE, 
    0x034E, 0x0101, 0x0000, 0xA000, 0x9F34, 0xE5D6, 0xE963, 0xE41A, 0xA000, 0x9E95, 0x9F30, 0x9FFF, 0x9ECE, 0xE280, 
    0x9E11, 0x9F43, 0x9FF9, 0x9FCA, 0x9F54, 0x9F4D, 0x9F95, 0x9FDE, 0x9FFD, 0xA000, 0x4000, 0x4B54, 0xDD94, 0xE4C1, 
    0xD913, 0x404D, 0x30F6, 0x3490, 0x40CE, 0x4DD4, 0xD3CE, 0x517E, 0x4AE6, 0x422F, 0x3A27, 0x359A, 0x3563, 0x37C3, 
    0x3B52, 0x3E94, 0x4000, 0x0000, 
};

static JointIndex sDekuFlowerBounceAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0018, 0x0001, 0x0002 },
    { 0x002D, 0x0042, 0x0057 },
    { 0x0000, 0x0000, 0x006C },
    { 0x0081, 0x0096, 0x00AB },
    { 0x00C0, 0x00D5, 0x00EA },
    { 0x00FF, 0x0114, 0x0129 },
    { 0x013E, 0x0153, 0x0168 },
    { 0x017D, 0x0192, 0x01A7 },
    { 0x01BC, 0x01D1, 0x01E6 },
};

AnimationHeader gDekuFlowerBounceAnim = { 
    { 21 }, sDekuFlowerBounceAnimFrameData, sDekuFlowerBounceAnimJointIndices, 3
};

static s16 sDekuFlowerRustleAnimFrameData[] = {
    0x0000, 0x40D1, 0x0004, 0x4000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x8000, 0xCE50, 0xD256, 0xCAB9, 0x3DF0, 0x3622, 0x371C, 0x3BE3, 0xC176, 0xC4CF, 0xC4C0, 0xC305, 0xC0FC, 
    0x4000, 0x31B0, 0x2DAA, 0x3547, 0x4210, 0x49DE, 0x48E4, 0x441D, 0x3E8A, 0x3B31, 0x3B40, 0x3CFB, 0x3F04, 0x4000, 
    0xF61E, 0xFC5D, 0x061B, 0x0B1C, 0x0917, 0x038F, 0xFD5D, 0xF9D2, 0xF9A8, 0xFB10, 0xFD31, 0xFF25, 0x0000, 0x1EC1, 
    0x1FD6, 0x1F89, 0x1E68, 0x1EF4, 0x1FD8, 0x1FEA, 0x1F86, 0x1F7F, 0x1FB3, 0x1FE7, 0x1FFE, 0x2000, 0x31E2, 0x3ADA, 
    0x48AB, 0x4FEC, 0x4CF7, 0x4509, 0x3C44, 0x373A, 0x36FD, 0x3900, 0x3C06, 0x3ECA, 0x4000, 0x09E2, 0x03A3, 0xF9E5, 
    0xF4E4, 0xF6E9, 0xFC71, 0x02A3, 0x062E, 0x0658, 0x04F0, 0x02CF, 0x00DB, 0x0000, 0x613F, 0x602A, 0x6077, 0x6198, 
    0x610C, 0x6028, 0x6016, 0x607A, 0x6081, 0x604D, 0x6019, 0x6002, 0x6000, 0x4E1E, 0x4526, 0x3755, 0x3014, 0x3309, 
    0x3AF7, 0x43BC, 0x48C6, 0x4903, 0x4700, 0x43FA, 0x4136, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xE000, 0x31B0, 0x2DAA, 0x3547, 0x4210, 0x49DE, 0x48E4, 0x441D, 
    0x3E8A, 0x3B31, 0x3B40, 0x3CFB, 0x3F04, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0x09E2, 0x03A3, 0xF9E5, 0xF4E4, 0xF6E9, 0xFC71, 0x02A3, 0x062E, 0x0658, 
    0x04F0, 0x02CF, 0x00DB, 0x0000, 0xE13F, 0xE02A, 0xE077, 0xE198, 0xE10C, 0xE028, 0xE016, 0xE07A, 0xE081, 0xE04D, 
    0xE019, 0xE002, 0xE000, 0x31E2, 0x3ADA, 0x48AB, 0x4FEC, 0x4CF7, 0x4509, 0x3C44, 0x373A, 0x36FD, 0x3900, 0x3C06, 
    0x3ECA, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x2000, 0xCE50, 0xD256, 0xCAB9, 0xBDF0, 0xB622, 0xB71C, 0xBBE3, 0xC176, 0xC4CF, 0xC4C0, 0xC305, 0xC0FC, 0xC000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x2000, 0xF61E, 
    0xFC5D, 0x061B, 0x0B1C, 0x0917, 0x038F, 0xFD5D, 0xF9D2, 0xF9A8, 0xFB10, 0xFD31, 0xFF25, 0x0000, 0x9EC1, 0x9FD6, 
    0x9F89, 0x9E68, 0x9EF4, 0x9FD8, 0x9FEA, 0x9F86, 0x9F7F, 0x9FB3, 0x9FE7, 0x9FFE, 0xA000, 0x4E1F, 0x4526, 0x3755, 
    0x3014, 0x3309, 0x3AF7, 0x43BC, 0x48C6, 0x4903, 0x4700, 0x43FA, 0x4136, 0x4000, 
};

static JointIndex sDekuFlowerRustleAnimJointIndices[] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0003 },
    { 0x0004, 0x0011, 0x001E },
    { 0x0000, 0x0000, 0x002B },
    { 0x0038, 0x0045, 0x0052 },
    { 0x005F, 0x006C, 0x0079 },
    { 0x0086, 0x0093, 0x00A0 },
    { 0x00AD, 0x00BA, 0x00C7 },
    { 0x00D4, 0x00E1, 0x00EE },
    { 0x00FB, 0x0108, 0x0115 },
};

AnimationHeader gDekuFlowerRustleAnim = { 
    { 13 }, sDekuFlowerRustleAnimFrameData, sDekuFlowerRustleAnimJointIndices, 4
};
