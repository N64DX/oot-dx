#include "object_ice_block.h"
//#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_ice_blockVtx_000000[] = {
#include "assets/objects/object_ice_block/object_ice_blockVtx_000000.vtx.inc"
};

Vtx object_ice_blockVtx_000470[] = {
#include "assets/objects/object_ice_block/object_ice_blockVtx_000470.vtx.inc"
};

Vtx object_ice_blockVtx_0009E0[] = {
#include "assets/objects/object_ice_block/object_ice_blockVtx_0009E0.vtx.inc"
};

u64 gIceBlockIce1Tex[] = {
#include "assets/objects/object_ice_block/iceblock_ice_1.i4.inc.c"
};

u64 gIceBlockIce2Tex[] = {
#include "assets/objects/object_ice_block/iceblock_ice_2.i4.inc.c"
};

Gfx gIceBlockCubeDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, TEXEL1, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x6E, 255, 255, 255, 255),
    gsDPSetEnvColor(60, 135, 135, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gIceBlockIce2Tex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gIceBlockIce2Tex, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 2, 2),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ice_blockVtx_000000, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(40, 135, 135, 255),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(gIceBlockIce1Tex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_ice_blockVtx_000000[16], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 2, 1, 3, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx gIceBlockIceBergDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT, TEXEL1, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x6E, 255, 255, 255, 255),
    gsDPSetEnvColor(60, 135, 135, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gIceBlockIce2Tex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gIceBlockIce2Tex, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 2, 2),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ice_blockVtx_000470, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&object_ice_blockVtx_000470[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 5, 0, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(gIceBlockIce2Tex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gIceBlockIce2Tex, 0x0000, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 2, 2),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_ice_blockVtx_000470[40], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gIceBlockShardEffectDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetEnvColor(95, 155, 155, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gIceBlockIce1Tex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ice_blockVtx_0009E0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gIceBlockColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gIceBlockColSurfaceType[] = {
    {0x00000000, 0x000007CC},   {0x00E00000, 0x000007CC},
};

CollisionPoly gIceBlockColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0xFED4},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0xFED4},
    {0x0001, 0x2003, 0x0002, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0x2003, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0x2006, 0x0007, 0x0001, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0x2006, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x2007, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFED4},
    {0x0000, 0x2007, 0x0005, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xFED4},
    {0x0001, 0x2006, 0x0000, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0001, 0x2006, 0x0003, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0001, 0x2001, 0x0007, 0x0004, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0001, 0x2001, 0x0004, 0x0002, 0x0000, 0x0000, 0x8001, 0xFED4},
};

Vec3s gIceBlockColVertices[] = {
    {   -300,   -300,    300 },
    {   -300,   -300,   -300 },
    {    300,   -300,   -300 },
    {    300,   -300,    300 },
    {    300,    300,   -300 },
    {    300,    300,    300 },
    {   -300,    300,    300 },
    {   -300,    300,   -300 },
};

CollisionHeader gIceBlockCol = { 
    { -300, -300, -300 },
    { 300, 300, 300 },
    ARRAY_COUNT(gIceBlockColVertices), gIceBlockColVertices,
    ARRAY_COUNT(gIceBlockColPolygons), gIceBlockColPolygons,
    gIceBlockColSurfaceType,
    gIceBlockColCamDataList,
    0, NULL
};