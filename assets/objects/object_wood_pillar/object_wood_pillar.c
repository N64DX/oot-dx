#include "object_wood_pillar.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_wood_pillarVtx[] = {
#include "assets/objects/object_wood_pillar/object_wood_pillarVtx.vtx.inc"
};

u64 gWoodPillarSideTex[] = {
#include "assets/objects/object_wood_pillar/wood_pillar_side.rgba16.inc.c"
};

u64 gWoodPillarTopTex[] = {
#include "assets/objects/object_wood_pillar/wood_pillar_top.rgba16.inc.c"
};

Gfx gWoodPillarDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWoodPillarSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(object_wood_pillarVtx, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gWoodPillarSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_wood_pillarVtx[24], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gWoodPillarColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gWoodPillarColSurfaceType[] = {
    {0x00000000, 0x000007C0},
};

CollisionPoly gWoodPillarColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0xBFF2, 0x0000, 0x6ED1, 0xFF53},
    {0x0000, 0x2000, 0x0002, 0x0003, 0xBFF2, 0x0000, 0x6ED1, 0xFF53},
    {0x0000, 0x2004, 0x0005, 0x0001, 0x8001, 0x0000, 0x0000, 0xFF53},
    {0x0000, 0x2004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFF53},
    {0x0000, 0x2006, 0x0007, 0x0005, 0xBFF2, 0x0000, 0x912F, 0xFF53},
    {0x0000, 0x2006, 0x0005, 0x0004, 0xBFF2, 0x0000, 0x912F, 0xFF53},
    {0x0000, 0x2008, 0x0009, 0x0007, 0x400E, 0x0000, 0x912F, 0xFF53},
    {0x0000, 0x2008, 0x0007, 0x0006, 0x400E, 0x0000, 0x912F, 0xFF53},
    {0x0000, 0x200A, 0x000B, 0x0009, 0x7FFF, 0x0000, 0x0000, 0xFF53},
    {0x0000, 0x200A, 0x0009, 0x0008, 0x7FFF, 0x0000, 0x0000, 0xFF53},
    {0x0000, 0x2003, 0x0002, 0x000B, 0x400E, 0x0000, 0x6ED1, 0xFF53},
    {0x0000, 0x2003, 0x000B, 0x000A, 0x400E, 0x0000, 0x6ED1, 0xFF53},
    {0x0000, 0x2000, 0x0003, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xF9C0},
    {0x0000, 0x2000, 0x000A, 0x0008, 0x0000, 0x7FFF, 0x0000, 0xF9C0},
    {0x0000, 0x2000, 0x0008, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xF9C0},
    {0x0000, 0x2000, 0x0006, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xF9C0},
    {0x0000, 0x2001, 0x0005, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x2001, 0x0007, 0x0009, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x2001, 0x0009, 0x000B, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x2001, 0x000B, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gWoodPillarColVertices[] = {
    {   -173,   1600,    100 },
    {   -173,      0,    100 },
    {      0,      0,    200 },
    {      0,   1600,    200 },
    {   -173,   1600,   -100 },
    {   -173,      0,   -100 },
    {      0,   1600,   -200 },
    {      0,      0,   -200 },
    {    173,   1600,   -100 },
    {    173,      0,   -100 },
    {    173,   1600,    100 },
    {    173,      0,    100 },
};

CollisionHeader gWoodPillarCol = { 
    { -173, 0, -200 },
    { 173, 1600, 200 },
    ARRAY_COUNT(gWoodPillarColVertices), gWoodPillarColVertices,
    ARRAY_COUNT(gWoodPillarColPolygons), gWoodPillarColPolygons,
    gWoodPillarColSurfaceType,
    gWoodPillarColCamDataList,
    0, NULL
};
