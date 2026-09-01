#include "object_spdweb.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_spdwebVtx_000000[] = {
#include "assets/objects/object_spdweb/object_spdwebVtx_000000.vtx.inc"
};

Vtx object_spdwebVtx_0011F0[] = {
#include "assets/objects/object_spdweb/object_spdwebVtx_0011F0.vtx.inc"
};

u64 object_spdweb_Tex_000138[] = {
#include "assets/objects/object_spdweb/tex_000138.rgba16.inc.c"
};

u64 object_spdweb_Tex_000938[] = {
#include "assets/objects/object_spdweb/tex_000938.ia8.inc.c"
};

u64 object_spdweb_Tex_001408[] = {
#include "assets/objects/object_spdweb/tex_001408.ia8.inc.c"
};

Gfx object_spdweb_DL_000060[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_spdweb_Tex_000938, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_spdweb_Tex_000138, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_spdwebVtx_000000, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 2, 5, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_spdweb_DL_0012F0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, TEXEL1, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_spdweb_Tex_001408, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_spdweb_Tex_001408, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_spdwebVtx_0011F0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 5, 8, 6, 0),
    gsSP2Triangles(4, 9, 5, 0, 1, 4, 2, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 8, 0),
    gsSP2Triangles(12, 10, 8, 0, 12, 8, 5, 0),
    gsSP2Triangles(13, 12, 5, 0, 13, 5, 9, 0),
    gsSP2Triangles(14, 13, 9, 0, 14, 9, 4, 0),
    gsSP2Triangles(6, 11, 15, 0, 6, 15, 7, 0),
    gsSP2Triangles(7, 15, 3, 0, 7, 3, 2, 0),
    gsSP2Triangles(0, 14, 4, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_spdweb_Colheader_0011C0CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_spdweb_Colheader_0011C0SurfaceType[] = {
    {0x0000C000, 0x000007C0},
};

CollisionPoly object_spdweb_Colheader_0011C0Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFF6A},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFF6A},
    {0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFF6A},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFF6A},
};

Vec3s object_spdweb_Colheader_0011C0Vertices[] = {
    {    900,      0,    150 },
    {    900,   1800,    150 },
    {   -900,   1800,    150 },
    {   -900,      0,    150 },
    {   -900,      0,   -150 },
    {   -900,   1800,   -150 },
    {    900,   1800,   -150 },
    {    900,      0,   -150 },
};

CollisionHeader object_spdweb_Colheader_0011C0 = { 
    { -900, 0, -150 },
    { 900, 1800, 150 },
    ARRAY_COUNT(object_spdweb_Colheader_0011C0Vertices), object_spdweb_Colheader_0011C0Vertices,
    ARRAY_COUNT(object_spdweb_Colheader_0011C0Polygons), object_spdweb_Colheader_0011C0Polygons,
    object_spdweb_Colheader_0011C0SurfaceType,
    object_spdweb_Colheader_0011C0CamDataList,
    0, NULL
};

BgCamInfo object_spdweb_Colheader_002678CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_spdweb_Colheader_002678SurfaceType[] = {
    {0x0000C000, 0x000007C0},   {0x00000000, 0x000007C0},
};

CollisionPoly object_spdweb_Colheader_002678Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0xF749, 0x7DF6, 0x14FE, 0x00C5},
    {0x0000, 0x0000, 0x0002, 0x0003, 0xF755, 0x7DF8, 0x14F8, 0x00C5},
    {0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0000, 0x0004, 0x0006, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0000, 0x0006, 0x0007, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0000, 0x0005, 0x0008, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0000, 0x0004, 0x0009, 0x0005, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0000, 0x0001, 0x0004, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0064},
    {0x0000, 0x000A, 0x000B, 0x0006, 0xF755, 0x7DF8, 0xEB08, 0x00C5},
    {0x0000, 0x000A, 0x0006, 0x0008, 0xF749, 0x7DF6, 0xEB02, 0x00C5},
    {0x0000, 0x000C, 0x000A, 0x0008, 0x08AE, 0x7DF7, 0xEB02, 0x00C5},
    {0x0000, 0x000C, 0x0008, 0x0005, 0x08B2, 0x7DF9, 0xEB0E, 0x00C5},
    {0x0000, 0x000D, 0x000C, 0x0005, 0x14F8, 0x7DF8, 0xF755, 0x00C5},
    {0x0000, 0x000D, 0x0005, 0x0009, 0x14FE, 0x7DF6, 0xF749, 0x00C5},
    {0x0000, 0x000E, 0x000D, 0x0009, 0x14FE, 0x7DF7, 0x08AE, 0x00C5},
    {0x0000, 0x000E, 0x0009, 0x0004, 0x14F2, 0x7DF9, 0x08B2, 0x00C5},
    {0x0000, 0x0006, 0x000B, 0x000F, 0xEB08, 0x7DF8, 0xF755, 0x00C5},
    {0x0000, 0x0006, 0x000F, 0x0007, 0xEB02, 0x7DF6, 0xF749, 0x00C5},
    {0x0000, 0x0007, 0x000F, 0x0003, 0xEB02, 0x7DF7, 0x08AE, 0x00C5},
    {0x0000, 0x0007, 0x0003, 0x0002, 0xEB0E, 0x7DF9, 0x08B2, 0x00C5},
    {0x0000, 0x0000, 0x000E, 0x0004, 0x08AB, 0x7DF8, 0x14F8, 0x00C5},
    {0x0000, 0x0000, 0x0004, 0x0001, 0x08B7, 0x7DF6, 0x14FE, 0x00C5},
    {0x0001, 0x0010, 0x0011, 0x0012, 0x0000, 0x8001, 0x0000, 0xFF06},
    {0x0001, 0x0010, 0x0012, 0x0013, 0x0000, 0x8001, 0x0000, 0xFF06},
    {0x0001, 0x0010, 0x0013, 0x0014, 0x0000, 0x8001, 0x0000, 0xFF06},
    {0x0001, 0x0010, 0x0014, 0x0015, 0x0000, 0x8001, 0x0000, 0xFF06},
    {0x0001, 0x0010, 0x0015, 0x0016, 0x0000, 0x8001, 0x0000, 0xFF06},
    {0x0001, 0x0010, 0x0016, 0x0017, 0x0000, 0x8001, 0x0000, 0xFF06},
};

Vec3s object_spdweb_Colheader_002678Vertices[] = {
    {      0,      0,  -1200 },
    {      0,   -100,   -600 },
    {    424,   -100,   -424 },
    {    849,      0,   -849 },
    {   -424,   -100,   -424 },
    {   -424,   -100,    424 },
    {    424,   -100,    424 },
    {    600,   -100,      0 },
    {      0,   -100,    600 },
    {   -600,   -100,      0 },
    {      0,      0,   1200 },
    {    849,      0,    849 },
    {   -849,      0,    849 },
    {  -1200,      0,      0 },
    {   -849,      0,   -849 },
    {   1200,      0,      0 },
    {      0,   -250,  -1200 },
    {    849,   -250,   -849 },
    {   1200,   -250,      0 },
    {    849,   -250,    849 },
    {      0,   -250,   1200 },
    {   -849,   -250,    849 },
    {  -1200,   -250,      0 },
    {   -849,   -250,   -849 },
};

CollisionHeader object_spdweb_Colheader_002678 = { 
    { -1200, -250, -1200 },
    { 1200, 0, 1200 },
    ARRAY_COUNT(object_spdweb_Colheader_002678Vertices), object_spdweb_Colheader_002678Vertices,
    ARRAY_COUNT(object_spdweb_Colheader_002678Polygons), object_spdweb_Colheader_002678Polygons,
    object_spdweb_Colheader_002678SurfaceType,
    object_spdweb_Colheader_002678CamDataList,
    0, NULL
};
