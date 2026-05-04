#include "object_dblue_object.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_dblue_objectVtx_002EB0[] = {
#include "assets/objects/object_dblue_object/object_dblue_objectVtx_002EB0.vtx.inc"
};

Vtx object_dblue_objectVtx_003570[] = {
#include "assets/objects/object_dblue_object/object_dblue_objectVtx_003570.vtx.inc"
};

Vtx object_dblue_objectVtx_00AF00[] = {
#include "assets/objects/object_dblue_object/object_dblue_objectVtx_00AF00.vtx.inc"
};

u64 gGreatBayTempleObjectHorizontalWaterFoamTex[] = {
#include "assets/objects/object_dblue_object/great_bay_temple_object_horizontal_water_foam.rgba16.inc.c"
};

u64 gGreatBayTempleObjectIceTex[] = {
#include "assets/objects/object_dblue_object/great_bay_temple_object_ice.rgba16.inc.c"
};

u64 gGreatBayTempleObjectIceStalactiteRimMaskTex[] = {
#include "assets/objects/object_dblue_object/great_bay_temple_object_ice_stalactite_rim_mask.ia8.inc.c"
};

u64 gGreatBayTempleObjectWaterfallWaterTex[] = {
#include "assets/objects/object_dblue_object/great_bay_temple_object_waterfall_water.rgba16.inc.c"
};

u64 gGreatBayTempleObjectVerticalWaterFoamTex[] = {
#include "assets/objects/object_dblue_object/great_bay_temple_object_vertical_water_foam.rgba16.inc.c"
};

Gfx gGreatBayTempleObjectIceStalactiteRimDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatBayTempleObjectIceStalactiteRimMaskTex, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(gGreatBayTempleObjectIceTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&object_dblue_objectVtx_002EB0[26], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 1, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 10, 15, 0),
    gsSP2Triangles(10, 17, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 21, 19, 0, 21, 22, 19, 0),
    gsSP2Triangles(22, 12, 19, 0, 23, 4, 24, 0),
    gsSP2Triangles(4, 25, 24, 0, 25, 26, 24, 0),
    gsSP2Triangles(0, 27, 28, 0, 0, 28, 29, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPEndDisplayList(),
};

Gfx gGreatBayTempleObjectIceStalactiteDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, TEXEL1, PRIM_LOD_FRAC, TEXEL1, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x09000000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatBayTempleObjectIceTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(gGreatBayTempleObjectHorizontalWaterFoamTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_dblue_objectVtx_002EB0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 8, 9, 5, 0),
    gsSP2Triangles(10, 8, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(4, 15, 11, 0, 7, 6, 14, 0),
    gsSP2Triangles(6, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 12, 17, 0, 15, 4, 20, 0),
    gsSP2Triangles(1, 22, 23, 0, 24, 18, 25, 0),
    gsSP2Triangles(16, 6, 23, 0, 4, 3, 25, 0),
    gsSP1Triangle(22, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx gGreatBayTempleObjectFrozenWaterfallDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatBayTempleObjectWaterfallWaterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gGreatBayTempleObjectIceTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(object_dblue_objectVtx_003570, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 5, 0, 3, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 6, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(14, 15, 1, 0, 14, 1, 0, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(11, 10, 17, 0, 11, 17, 16, 0),
    gsSP2Triangles(18, 0, 3, 0, 18, 3, 19, 0),
    gsSP2Triangles(20, 21, 4, 0, 20, 4, 7, 0),
    gsSP2Triangles(21, 19, 3, 0, 21, 3, 4, 0),
    gsSP2Triangles(22, 8, 11, 0, 22, 11, 23, 0),
    gsSP2Triangles(24, 20, 7, 0, 24, 7, 13, 0),
    gsSP2Triangles(18, 25, 14, 0, 18, 14, 0, 0),
    gsSP2Triangles(26, 16, 14, 0, 26, 14, 25, 0),
    gsSP2Triangles(26, 23, 11, 0, 26, 11, 16, 0),
    gsSP2Triangles(22, 23, 27, 0, 28, 20, 24, 0),
    gsSP2Triangles(29, 22, 27, 0, 21, 20, 28, 0),
    gsSP2Triangles(21, 28, 30, 0, 21, 30, 19, 0),
    gsSP2Triangles(27, 23, 26, 0, 26, 25, 31, 0),
    gsSP2Triangles(27, 26, 31, 0, 18, 19, 30, 0),
    gsSP2Triangles(18, 30, 31, 0, 25, 18, 31, 0),
    gsSPEndDisplayList(),
};

Gfx gGreatBayTempleObjectWaterfallDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, PRIMITIVE, 0, 0, SHADE, COMBINED, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGreatBayTempleObjectVerticalWaterFoamTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 1),
    gsDPLoadMultiBlock(gGreatBayTempleObjectWaterfallWaterTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(object_dblue_objectVtx_00AF00, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 3, 2, 0, 5, 2, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 4, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(0, 14, 15, 0, 0, 15, 1, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(16, 11, 10, 0, 16, 10, 17, 0),
    gsSP2Triangles(8, 11, 18, 0, 19, 4, 12, 0),
    gsSP2Triangles(20, 8, 18, 0, 5, 4, 19, 0),
    gsSP2Triangles(5, 19, 21, 0, 5, 21, 3, 0),
    gsSP2Triangles(18, 11, 16, 0, 16, 14, 22, 0),
    gsSP2Triangles(18, 16, 22, 0, 0, 3, 21, 0),
    gsSP2Triangles(0, 21, 22, 0, 14, 0, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP2Triangles(26, 25, 28, 0, 26, 28, 27, 0),
    gsSPVertex(&object_dblue_objectVtx_00AF00[31], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(3, 2, 13, 0, 3, 13, 12, 0),
    gsSP2Triangles(3, 12, 14, 0, 3, 14, 15, 0),
    gsSP2Triangles(12, 8, 16, 0, 12, 16, 14, 0),
    gsSP2Triangles(8, 11, 17, 0, 8, 17, 16, 0),
    gsSP2Triangles(4, 7, 18, 0, 4, 18, 19, 0),
    gsSP2Triangles(0, 3, 15, 0, 0, 15, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 4, 19, 0, 22, 19, 23, 0),
    gsSP2Triangles(11, 21, 24, 0, 11, 24, 17, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gGreatBayTempleObjectIceStalactiteColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gGreatBayTempleObjectIceStalactiteColSurfaceType[] = {
    {0x0000A000, 0x000007CC},
};

CollisionPoly gGreatBayTempleObjectIceStalactiteColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0xC37A, 0xCD90, 0x64E0, 0xFCEC},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0xE5E5, 0x7D4E, 0xFD9C},
    {0x0000, 0x0000, 0x0004, 0x0005, 0x8776, 0xD4F3, 0x0000, 0xFDB3},
    {0x0000, 0x0000, 0x0005, 0x0001, 0x8558, 0xDCF5, 0xF57D, 0xFDDC},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0xE0F5, 0x83D3, 0xFDA2},
    {0x0000, 0x0004, 0x0007, 0x0005, 0xCE85, 0xC905, 0x978A, 0xFD10},
    {0x0000, 0x0002, 0x0007, 0x0006, 0x7912, 0xDC64, 0xEAA2, 0xFD48},
    {0x0000, 0x0002, 0x0006, 0x0003, 0x7D4E, 0xE5E5, 0x0000, 0xFD9C},
    {0x0000, 0x0001, 0x0005, 0x0007, 0xAC6D, 0xA324, 0xE424, 0xFC2D},
    {0x0000, 0x0001, 0x0007, 0x0002, 0xA436, 0xB382, 0xD21B, 0xFCD9},
};

Vec3s gGreatBayTempleObjectIceStalactiteColVertices[] = {
    {   -625,      0,    625 },
    {   -250,  -1200,    250 },
    {    250,  -1800,    250 },
    {    625,      0,    625 },
    {   -625,      0,   -625 },
    {   -250,  -1050,   -250 },
    {    625,      0,   -625 },
    {    250,  -1500,   -250 },
};

CollisionHeader gGreatBayTempleObjectIceStalactiteCol = { 
    { -625, -1800, -625 },
    { 625, 0, 625 },
    ARRAY_COUNT(gGreatBayTempleObjectIceStalactiteColVertices), gGreatBayTempleObjectIceStalactiteColVertices,
    ARRAY_COUNT(gGreatBayTempleObjectIceStalactiteColPolygons), gGreatBayTempleObjectIceStalactiteColPolygons,
    gGreatBayTempleObjectIceStalactiteColSurfaceType,
    gGreatBayTempleObjectIceStalactiteColCamDataList,
    0, NULL
};
