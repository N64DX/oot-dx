#include "object_kinsta2_obj.h"

#include "gfx.h"

Vtx object_kinsta2_objVtx_000000[] = {
#include "assets/objects/object_kinsta2_obj/object_kinsta2_objVtx_000000.vtx.inc"
};

u64 gOceansideSpiderHouseDoorTex[] = {
#include "assets/objects/object_kinsta2_obj/oceanside_spider_house_door.rgba16.inc.c"
};

Gfx gOceansideSpiderHouseDoorDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gOceansideSpiderHouseDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_kinsta2_objVtx_000000, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 0, 6, 0, 1, 6, 7, 0),
    gsSP2Triangles(5, 4, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(11, 8, 4, 0, 11, 4, 2, 0),
    gsSP2Triangles(11, 2, 1, 0, 11, 1, 7, 0),
    gsSP2Triangles(9, 8, 11, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 13, 12, 0, 15, 16, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOceansideSpiderHouseDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_kinsta2_objVtx_000000[17], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 5, 0, 12, 5, 4, 0),
    gsSP2Triangles(14, 15, 9, 0, 14, 9, 8, 0),
    gsSP2Triangles(14, 13, 12, 0, 14, 12, 15, 0),
    gsSP2Triangles(6, 11, 10, 0, 6, 10, 7, 0),
    gsSP2Triangles(11, 6, 5, 0, 11, 5, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 8, 0),
    gsSP2Triangles(0, 2, 16, 0, 2, 3, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOceansideSpiderHouseDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_kinsta2_objVtx_000000[34], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 3, 0, 8, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSPEndDisplayList(),
};
