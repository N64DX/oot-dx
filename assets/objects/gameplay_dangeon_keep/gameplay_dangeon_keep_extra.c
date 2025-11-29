#include "gameplay_dangeon_keep_extra.h"

Vtx gameplay_dangeon_keepVtx_01C120[] = {
#include "assets/objects/gameplay_dangeon_keep/gameplay_dangeon_keepVtx_01C120.vtx.inc"
};

u64 gameplay_dangeon_keep_Tex_01C2D8[] = {
#include "assets/objects/gameplay_dangeon_keep/tex_01C2D8.rgba16.inc.c"
};

Gfx gameplay_dangeon_keep_DL_01C228[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gameplay_dangeon_keep_Tex_01C2D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(gameplay_dangeon_keepVtx_01C120, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 0, 12, 0, 0, 15, 12, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gameplay_dangeon_keep_Colheader_01D488CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gameplay_dangeon_keep_Colheader_01D488SurfaceType[] = {
    {0x00E00000, 0x000007C2},   {0x00200000, 0x000007C2},
};

CollisionPoly gameplay_dangeon_keep_Colheader_01D488Polygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0000, 0x2001, 0x0005, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0000, 0x2001, 0x0002, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x2002, 0x0006, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x2002, 0x0003, 0x0006, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0000, 0x2003, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0000, 0x2003, 0x0000, 0x0007, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0x2000, 0x0004, 0x0007, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0x2004, 0x0005, 0x0008, 0x0000, 0x6A80, 0x4700, 0xFD66},
    {0x0001, 0x2005, 0x0006, 0x0008, 0x4700, 0x6A80, 0x0000, 0xFD66},
    {0x0001, 0x2006, 0x0007, 0x0008, 0x0000, 0x6A80, 0xB900, 0xFD66},
    {0x0001, 0x2007, 0x0004, 0x0008, 0xB900, 0x6A80, 0x0000, 0xFD66},
    {0x0001, 0xA004, 0x8005, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0001, 0xA005, 0x800A, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xFED4},
    {0x0001, 0xA005, 0x8006, 0x000A, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0xA006, 0x800B, 0x000A, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0xA006, 0x8007, 0x000B, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0001, 0xA007, 0x800C, 0x000B, 0x0000, 0x0000, 0x8001, 0xFED4},
    {0x0001, 0xA007, 0x8004, 0x000C, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0001, 0xA004, 0x8009, 0x000C, 0x8001, 0x0000, 0x0000, 0xFED4},
};

Vec3s gameplay_dangeon_keep_Colheader_01D488Vertices[] = {
    {   -300,      0,    300 },
    {    300,      0,    300 },
    {    300,      0,   -300 },
    {   -300,      0,   -300 },
    {   -300,    600,    300 },
    {    300,    600,    300 },
    {    300,    600,   -300 },
    {   -300,    600,   -300 },
    {      0,    800,      0 },
    {   -300,   1600,    300 },
    {    300,   1600,    300 },
    {    300,   1600,   -300 },
    {   -300,   1600,   -300 },
};

CollisionHeader gameplay_dangeon_keep_Colheader_01D488 = { 
    { -300, 0, -300 },
    { 300, 1600, 300 },
    ARRAY_COUNT(gameplay_dangeon_keep_Colheader_01D488Vertices), gameplay_dangeon_keep_Colheader_01D488Vertices,
    ARRAY_COUNT(gameplay_dangeon_keep_Colheader_01D488Polygons), gameplay_dangeon_keep_Colheader_01D488Polygons,
    gameplay_dangeon_keep_Colheader_01D488SurfaceType,
    gameplay_dangeon_keep_Colheader_01D488CamDataList,
    0, NULL
};
