#include "object_hsstump.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_hsstumpVtx_000000[] = {
#include "assets/objects/object_hsstump/object_hsstumpVtx_000000.vtx.inc"
};

u64 object_hsstump_Tex_0005A0[] = {
#include "assets/objects/object_hsstump/tex_0005A0.rgba16.inc.c"
};

u64 object_hsstump_TLUT_0007A0[] = {
#include "assets/objects/object_hsstump/tex_0007C0.tlut.rgba16.inc.c"
};

u64 object_hsstump_Tex_0007C0[] = {
#include "assets/objects/object_hsstump/tex_0007C0.ci4.inc.c"
};

Gfx object_hsstump_DL_0003B8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xAF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_hsstump_TLUT_0007A0),
    gsDPLoadTextureBlock_4b(object_hsstump_Tex_0007C0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, object_hsstump_TLUT_0007A0),
    gsDPLoadMultiBlock_4b(object_hsstump_Tex_0007C0, 0x0000, 1, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_hsstumpVtx_000000, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 2, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(7, 13, 14, 0, 7, 6, 13, 0),
    gsSP2Triangles(0, 15, 16, 0, 0, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_hsstumpVtx_000000[30], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 22, 0),
    gsSP1Triangle(23, 24, 25, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_hsstump_Tex_0005A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_hsstumpVtx_000000[56], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_hsstump_Colheader_0011B0CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_hsstump_Colheader_0011B0SurfaceType[] = {
    {0x00000000, 0x000207CA},
};

CollisionPoly object_hsstump_Colheader_0011B0Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x6DB2, 0x21B3, 0x38B1, 0xFF59},
    {0x0000, 0x0001, 0x0003, 0x0002, 0x4AA6, 0x105E, 0x9952, 0xFF70},
    {0x0000, 0x0003, 0x0004, 0x0002, 0x0D88, 0x0FB8, 0x81B2, 0xFF85},
    {0x0000, 0x0002, 0x0004, 0x0005, 0xBCA0, 0x194E, 0x9628, 0xFF8B},
    {0x0000, 0x0005, 0x0006, 0x0007, 0x9094, 0x0204, 0x3EF6, 0xFFA4},
    {0x0000, 0x0006, 0x0000, 0x0007, 0x2025, 0xFDF7, 0x7BE1, 0xFFA7},
    {0x0000, 0x0005, 0x0008, 0x0006, 0x8090, 0xF42C, 0x01B2, 0xFFD9},
    {0x0000, 0x0005, 0x0004, 0x0008, 0x816B, 0xF4F8, 0xF093, 0xFFDA},
    {0x0000, 0x0000, 0x0009, 0x0001, 0x511A, 0x01F7, 0x6301, 0xFFA0},
    {0x0000, 0x0000, 0x0006, 0x0009, 0x22CD, 0xFD41, 0x7B25, 0xFFA9},
    {0x0000, 0x0000, 0x000A, 0x0007, 0x23CF, 0xD398, 0x7295, 0x002A},
    {0x0000, 0x0000, 0x000B, 0x000A, 0x7649, 0x30BF, 0x03E9, 0xFF4F},
    {0x0000, 0x000B, 0x000C, 0x000A, 0x573A, 0x5913, 0x1CFF, 0xFE6D},
    {0x0000, 0x0000, 0x0005, 0x000B, 0x5687, 0x320B, 0xB00D, 0xFF8E},
    {0x0000, 0x0005, 0x000D, 0x000B, 0xB1EF, 0x4BA1, 0xBC68, 0xFEC2},
    {0x0000, 0x000D, 0x000C, 0x000B, 0xB287, 0x53C3, 0xC5FE, 0xFE93},
    {0x0000, 0x0005, 0x0007, 0x000D, 0x87A0, 0xD65C, 0x0C96, 0x004A},
    {0x0000, 0x0007, 0x000A, 0x000D, 0xBD1E, 0xD4A2, 0x6425, 0x0015},
    {0x0000, 0x000A, 0x000C, 0x000D, 0xE222, 0x880E, 0x213B, 0x01D5},
    {0x0000, 0x0001, 0x0009, 0x000E, 0x2047, 0x4BE1, 0x61E5, 0xFFBA},
    {0x0000, 0x000F, 0x0009, 0x0006, 0x4339, 0x345C, 0x5F83, 0xFFAA},
    {0x0000, 0x0006, 0x0008, 0x000F, 0x9335, 0x3196, 0xD24D, 0xFFE1},
    {0x0000, 0x0003, 0x0001, 0x000E, 0x17ED, 0x4BEE, 0x9BC6, 0xFF96},
    {0x0000, 0x0000, 0x0002, 0x0005, 0x1151, 0x5539, 0x5DEB, 0xFEBD},
};

Vec3s object_hsstump_Colheader_0011B0Vertices[] = {
    {     32,    380,     90 },
    {    187,     79,    -31 },
    {     59,    531,    -52 },
    {     89,     -1,   -115 },
    {    -23,     -1,   -127 },
    {    -83,    475,     25 },
    {    -45,     77,    105 },
    {    -38,    370,    108 },
    {    -39,     -2,      5 },
    {     62,     -2,     73 },
    {    -47,    564,    186 },
    {    -57,    593,    127 },
    {   -165,    633,    329 },
    {   -102,    568,    151 },
    {    400,      0,    -40 },
    {   -120,      0,    200 },
};

CollisionHeader object_hsstump_Colheader_0011B0 = { 
    { -165, -2, -127 },
    { 400, 633, 329 },
    ARRAY_COUNT(object_hsstump_Colheader_0011B0Vertices), object_hsstump_Colheader_0011B0Vertices,
    ARRAY_COUNT(object_hsstump_Colheader_0011B0Polygons), object_hsstump_Colheader_0011B0Polygons,
    object_hsstump_Colheader_0011B0SurfaceType,
    object_hsstump_Colheader_0011B0CamDataList,
    0, NULL
};
