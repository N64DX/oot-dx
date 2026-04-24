#include "object_icefloe.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_icefloeVtx_000000[] = {
#include "assets/objects/object_icefloe/object_icefloeVtx_000000.vtx.inc"
};

u64 gIcefloePlatformTex[] = {
#include "assets/objects/object_icefloe/icefloe_iceplatform.rgba16.inc.c"
};

Gfx gIcefloeIcePlatformDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gIcefloePlatformTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_icefloeVtx_000000, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 10, 8, 0),
    gsSP2Triangles(12, 8, 13, 0, 13, 8, 6, 0),
    gsSP2Triangles(13, 6, 14, 0, 14, 6, 5, 0),
    gsSP2Triangles(14, 5, 15, 0, 16, 3, 1, 0),
    gsSP2Triangles(16, 1, 17, 0, 17, 1, 0, 0),
    gsSP2Triangles(17, 0, 18, 0, 18, 0, 10, 0),
    gsSP2Triangles(18, 10, 12, 0, 19, 20, 21, 0),
    gsSP2Triangles(0, 22, 10, 0, 21, 23, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 23, 24, 0),
    gsSP2Triangles(24, 27, 28, 0, 28, 29, 24, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gIcefloePlatformColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gIcefloePlatformColSurfaceType[] = {
    {0x00000000, 0x000007CC},
};

CollisionPoly gIcefloePlatformColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0xAC3B, 0x60C6, 0xFEAC},
    {0x0000, 0x0001, 0x0003, 0x0002, 0xAC36, 0xAC36, 0x3066, 0xFEAC},
    {0x0000, 0x0003, 0x0004, 0x0002, 0xAC36, 0xAC36, 0xCF9A, 0xFEAC},
    {0x0000, 0x0004, 0x0005, 0x0002, 0x0000, 0xAC3B, 0x9F3A, 0xFEAC},
    {0x0000, 0x0005, 0x0006, 0x0002, 0x53CA, 0xAC36, 0xCF9A, 0xFEAC},
    {0x0000, 0x0007, 0x0006, 0x0005, 0x6ED6, 0x0000, 0xBFFB, 0xFEEB},
    {0x0000, 0x0007, 0x0005, 0x0008, 0x6ED6, 0x0000, 0xBFFB, 0xFEEB},
    {0x0000, 0x0008, 0x0005, 0x0004, 0x0000, 0x0000, 0x8001, 0xFEEB},
    {0x0000, 0x0008, 0x0004, 0x0009, 0x0000, 0x0000, 0x8001, 0xFEEB},
    {0x0000, 0x0009, 0x0004, 0x0003, 0x912A, 0x0000, 0xBFFB, 0xFEEB},
    {0x0000, 0x0009, 0x0003, 0x000A, 0x912A, 0x0000, 0xBFFB, 0xFEEB},
    {0x0000, 0x000A, 0x0003, 0x0001, 0x912A, 0x0000, 0x4005, 0xFEEB},
    {0x0000, 0x000A, 0x0001, 0x000B, 0x912A, 0x0000, 0x4005, 0xFEEB},
    {0x0000, 0x000B, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFEEB},
    {0x0000, 0x000B, 0x0000, 0x000C, 0x0000, 0x0000, 0x7FFF, 0xFEEB},
    {0x0000, 0x000C, 0x0000, 0x0006, 0x6ED6, 0x0000, 0x4005, 0xFEEB},
    {0x0000, 0x000C, 0x0006, 0x0007, 0x6ED6, 0x0000, 0x4005, 0xFEEB},
    {0x0000, 0x0000, 0x0002, 0x0006, 0x53CA, 0xAC36, 0x3066, 0xFEAC},
    {0x0000, 0x000B, 0x000C, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x000B, 0x0007, 0x000A, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0008, 0x0009, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0007, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0x0000},
};

Vec3s gIcefloePlatformColVertices[] = {
    {    160,   -200,    277 },
    {   -160,   -200,    277 },
    {      0,   -520,      0 },
    {   -320,   -200,      0 },
    {   -160,   -200,   -277 },
    {    160,   -200,   -277 },
    {    320,   -200,      0 },
    {    320,      0,      0 },
    {    160,      0,   -277 },
    {   -160,      0,   -277 },
    {   -320,      0,      0 },
    {   -160,      0,    277 },
    {    160,      0,    277 },
};

CollisionHeader gIcefloePlatformCol = { 
    { -320, -520, -277 },
    { 320, 0, 277 },
    ARRAY_COUNT(gIcefloePlatformColVertices), gIcefloePlatformColVertices,
    ARRAY_COUNT(gIcefloePlatformColPolygons), gIcefloePlatformColPolygons,
    gIcefloePlatformColSurfaceType,
    gIcefloePlatformColCamDataList,
    0, NULL
};
