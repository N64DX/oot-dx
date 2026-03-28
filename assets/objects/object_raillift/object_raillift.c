#include "object_raillift.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_railliftVtx_000000[] = {
#include "assets/objects/object_raillift/object_railliftVtx_000000.vtx.inc"
};

Vtx object_railliftVtx_001B70[] = {
#include "assets/objects/object_raillift/object_railliftVtx_001B70.vtx.inc"
};

Vtx object_railliftVtx_004900[] = {
#include "assets/objects/object_raillift/object_railliftVtx_004900.vtx.inc"
};

Vtx object_railliftVtx_007030[] = {
#include "assets/objects/object_raillift/object_railliftVtx_007030.vtx.inc"
};

u64 object_raillift_Tex_000370[] = {
#include "assets/objects/object_raillift/tex_000370.rgba16.inc.c"
};

u64 object_raillift_Tex_000B70[] = {
#include "assets/objects/object_raillift/tex_000B70.rgba16.inc.c"
};

u64 object_raillift_Tex_001370[] = {
#include "assets/objects/object_raillift/tex_001370.rgba16.inc.c"
};

u64 object_raillift_Tex_005030[] = {
#include "assets/objects/object_raillift/tex_005030.rgba16.inc.c"
};

u64 object_raillift_Tex_005830[] = {
#include "assets/objects/object_raillift/tex_005830.rgba16.inc.c"
};

u64 object_raillift_Tex_006030[] = {
#include "assets/objects/object_raillift/tex_006030.rgba16.inc.c"
};

u64 object_raillift_Tex_006830[] = {
#include "assets/objects/object_raillift/tex_006830.i4.inc.c"
};

u64 object_raillift_Tex_0072B0[] = {
#include "assets/objects/object_raillift/tex_0072B0.rgba16.inc.c"
};

u64 object_raillift_Tex_007AB0[] = {
#include "assets/objects/object_raillift/tex_007AB0.rgba16.inc.c"
};

Gfx object_raillift_DL_000208[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_raillift_Tex_001370, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_railliftVtx_000000, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_raillift_Tex_000B70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_railliftVtx_000000[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_raillift_Tex_000370, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_railliftVtx_000000[20], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(7, 6, 11, 0, 7, 11, 10, 0),
    gsSPEndDisplayList(),
};

Gfx object_raillift_DL_004BF0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_raillift_Tex_005030, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(object_raillift_Tex_005830, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(object_railliftVtx_004900, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_raillift_Tex_005030, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(object_raillift_Tex_006030, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_railliftVtx_004900[23], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(object_raillift_Tex_006830, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&object_railliftVtx_004900[43], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx object_raillift_DL_0071B8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_raillift_Tex_007AB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_railliftVtx_007030, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_raillift_Tex_0072B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_railliftVtx_007030[16], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_raillift_Colheader_0048D0CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_raillift_Colheader_0048D0SurfaceType[] = {
    {0x00000000, 0x000007C2},
};

CollisionPoly object_raillift_Colheader_0048D0Polygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0xFE0C},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0xFE0C},
    {0x0000, 0x2004, 0x0005, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x2004, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x2006, 0x0007, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFE0C},
    {0x0000, 0x2006, 0x0005, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFE0C},
    {0x0000, 0x2003, 0x0002, 0x0007, 0x8001, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x2003, 0x0007, 0x0006, 0x8001, 0x0000, 0x0000, 0xFE0C},
    {0x0000, 0x2006, 0x0004, 0x0000, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x2006, 0x0000, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x2002, 0x0001, 0x0005, 0x0000, 0x8001, 0x0000, 0xFF38},
    {0x0000, 0x2002, 0x0005, 0x0007, 0x0000, 0x8001, 0x0000, 0xFF38},
};

Vec3s object_raillift_Colheader_0048D0Vertices[] = {
    {    500,      0,   -500 },
    {    500,   -200,   -500 },
    {   -500,   -200,   -500 },
    {   -500,      0,   -500 },
    {    500,      0,    500 },
    {    500,   -200,    500 },
    {   -500,      0,    500 },
    {   -500,   -200,    500 },
};

CollisionHeader object_raillift_Colheader_0048D0 = { 
    { -500, -200, -500 },
    { 500, 0, 500 },
    ARRAY_COUNT(object_raillift_Colheader_0048D0Vertices), object_raillift_Colheader_0048D0Vertices,
    ARRAY_COUNT(object_raillift_Colheader_0048D0Polygons), object_raillift_Colheader_0048D0Polygons,
    object_raillift_Colheader_0048D0SurfaceType,
    object_raillift_Colheader_0048D0CamDataList,
    0, NULL
};

BgCamInfo object_raillift_Colheader_004FF8CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_raillift_Colheader_004FF8SurfaceType[] = {
    {0x00000000, 0x000007C2},   {0x00000000, 0x000207C2},
};

CollisionPoly object_raillift_Colheader_004FF8Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0002, 0x0004, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0002, 0x0005, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0000, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x0000, 0x0007, 0x0001, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x0001, 0x0007, 0x0004, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0001, 0x0004, 0x0002, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0005, 0x0004, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0005, 0x0007, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0008, 0x0009, 0x000A, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0008, 0x000A, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x000B, 0x000C, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x000B, 0x0003, 0x000D, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x000C, 0x000E, 0x0000, 0x8001, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x000C, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x000E, 0x000F, 0x0006, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x000E, 0x0006, 0x0000, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x000F, 0x0008, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x000F, 0x0005, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0008, 0x000F, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0008, 0x000E, 0x000C, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0001, 0x000D, 0x000A, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0001, 0x000D, 0x0009, 0x000B, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
};

Vec3s object_raillift_Colheader_004FF8Vertices[] = {
    {   -600,   -350,   -600 },
    {   -600,   -600,   -600 },
    {   -600,   -600,    600 },
    {   -600,   -350,    600 },
    {    600,   -600,    600 },
    {    600,   -350,    600 },
    {    600,   -350,   -600 },
    {    600,   -600,   -600 },
    {    600,      0,    600 },
    {    200,      0,    600 },
    {    200,   -350,    600 },
    {   -200,      0,    600 },
    {   -600,      0,    600 },
    {   -200,   -350,    600 },
    {   -600,      0,   -600 },
    {    600,      0,   -600 },
};

CollisionHeader object_raillift_Colheader_004FF8 = { 
    { -600, -600, -600 },
    { 600, 0, 600 },
    ARRAY_COUNT(object_raillift_Colheader_004FF8Vertices), object_raillift_Colheader_004FF8Vertices,
    ARRAY_COUNT(object_raillift_Colheader_004FF8Polygons), object_raillift_Colheader_004FF8Polygons,
    object_raillift_Colheader_004FF8SurfaceType,
    object_raillift_Colheader_004FF8CamDataList,
    0, NULL
};
