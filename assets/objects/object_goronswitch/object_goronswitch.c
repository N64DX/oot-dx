#include "object_goronswitch.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_goronswitchVtx_000000[] = {
#include "assets/objects/object_goronswitch/object_goronswitchVtx_000000.vtx.inc"
};

Vtx object_goronswitchVtx_000600[] = {
#include "assets/objects/object_goronswitch/object_goronswitchVtx_000600.vtx.inc"
};

u64 object_goronswitch_TLUT_000970[] = {
#include "assets/objects/object_goronswitch/tex_0019B0.tlut.rgba16.inc.c"
};

u64 object_goronswitch_TLUT_000990[] = {
#include "assets/objects/object_goronswitch/tex_0021B0.tlut.rgba16.inc.c"
};

u64 object_goronswitch_Tex_0009B0[] = {
#include "assets/objects/object_goronswitch/tex_0009B0.i8.inc.c"
};

u64 object_goronswitch_Tex_0019B0[] = {
#include "assets/objects/object_goronswitch/tex_0019B0.ci4.inc.c"
};

u64 object_goronswitch_Tex_0021B0[] = {
#include "assets/objects/object_goronswitch/tex_0021B0.ci4.inc.c"
};

Gfx object_goronswitch_DL_000268[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_goronswitch_TLUT_000970),
    gsDPLoadTextureBlock_4b(object_goronswitch_Tex_0019B0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_goronswitchVtx_000000, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 16, 0, 3, 16, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_goronswitch_Tex_0009B0, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_goronswitchVtx_000000[18], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 14, 15, 6, 0),
    gsSP2Triangles(16, 17, 3, 0, 18, 19, 1, 0),
    gsSPEndDisplayList(),
};

Gfx object_goronswitch_DL_0007D8[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_goronswitch_TLUT_000990),
    gsDPLoadTextureBlock_4b(object_goronswitch_Tex_0021B0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_goronswitchVtx_000600, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 1, 0, 7, 8, 1, 0),
    gsSP2Triangles(8, 9, 1, 0, 9, 10, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, object_goronswitch_TLUT_000970),
    gsDPLoadTextureBlock_4b(object_goronswitch_Tex_0019B0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_goronswitchVtx_000600[11], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 16, 0, 3, 16, 17, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_goronswitch_Colheader_0005C8CamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType object_goronswitch_Colheader_0005C8SurfaceType[] = {
    {0x00000000, 0x000007C2},
};

CollisionPoly object_goronswitch_Colheader_0005C8Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0001, 0x0003, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0001, 0x0004, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0001, 0x0005, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0000, 0x0006, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0006, 0x0007, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0007, 0x0008, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0008, 0x0005, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xF8F8},
    {0x0000, 0x0009, 0x0003, 0x0004, 0xCEEE, 0x0000, 0x7637, 0xFDD6},
    {0x0000, 0x0009, 0x0004, 0x000A, 0xCEEE, 0x0000, 0x7637, 0xFDD6},
    {0x0000, 0x000B, 0x0002, 0x0003, 0x3112, 0x0000, 0x7637, 0xFDD6},
    {0x0000, 0x000B, 0x0003, 0x0009, 0x3112, 0x0000, 0x7637, 0xFDD6},
    {0x0000, 0x000C, 0x0000, 0x0002, 0x7637, 0x0000, 0x3112, 0xFDD6},
    {0x0000, 0x000C, 0x0002, 0x000B, 0x7637, 0x0000, 0x3112, 0xFDD6},
    {0x0000, 0x000D, 0x0006, 0x0000, 0x7637, 0x0000, 0xCEEE, 0xFDD6},
    {0x0000, 0x000D, 0x0000, 0x000C, 0x7637, 0x0000, 0xCEEE, 0xFDD6},
    {0x0000, 0x000E, 0x0007, 0x0006, 0x3112, 0x0000, 0x89C9, 0xFDD6},
    {0x0000, 0x000E, 0x0006, 0x000D, 0x3112, 0x0000, 0x89C9, 0xFDD6},
    {0x0000, 0x000F, 0x0008, 0x0007, 0xCEEE, 0x0000, 0x89C9, 0xFDD6},
    {0x0000, 0x000F, 0x0007, 0x000E, 0xCEEE, 0x0000, 0x89C9, 0xFDD6},
    {0x0000, 0x0010, 0x0005, 0x0008, 0x89C9, 0x0000, 0xCEEE, 0xFDD6},
    {0x0000, 0x0010, 0x0008, 0x000F, 0x89C9, 0x0000, 0xCEEE, 0xFDD6},
    {0x0000, 0x000A, 0x0004, 0x0005, 0x89C9, 0x0000, 0x3112, 0xFDD6},
    {0x0000, 0x000A, 0x0005, 0x0010, 0x89C9, 0x0000, 0x3112, 0xFDD6},
};

Vec3s object_goronswitch_Colheader_0005C8Vertices[] = {
    {    600,   1800,      0 },
    {      0,   1800,      0 },
    {    424,   1800,    424 },
    {      0,   1800,    600 },
    {   -424,   1800,    424 },
    {   -600,   1800,      0 },
    {    424,   1800,   -424 },
    {      0,   1800,   -600 },
    {   -424,   1800,   -424 },
    {      0,      0,    600 },
    {   -424,      0,    424 },
    {    424,      0,    424 },
    {    600,      0,      0 },
    {    424,      0,   -424 },
    {      0,      0,   -600 },
    {   -424,      0,   -424 },
    {   -600,      0,      0 },
};

CollisionHeader object_goronswitch_Colheader_0005C8 = { 
    { -600, 0, -600 },
    { 600, 1800, 600 },
    ARRAY_COUNT(object_goronswitch_Colheader_0005C8Vertices), object_goronswitch_Colheader_0005C8Vertices,
    ARRAY_COUNT(object_goronswitch_Colheader_0005C8Polygons), object_goronswitch_Colheader_0005C8Polygons,
    object_goronswitch_Colheader_0005C8SurfaceType,
    object_goronswitch_Colheader_0005C8CamDataList,
    0, NULL
};
