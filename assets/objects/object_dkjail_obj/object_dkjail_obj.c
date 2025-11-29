#include "object_dkjail_obj.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_dkjail_objVtx_000000[] = {
#include "assets/objects/object_dkjail_obj/object_dkjail_objVtx_000000.vtx.inc"
};

u64 gDkjailIvyTex[] = {
#include "assets/objects/object_dkjail_obj/dkjail_ivy.rgba16.inc.c"
};

u64 gDkjailMaskTex[] = {
#include "assets/objects/object_dkjail_obj/dkjail_mask.ia8.inc.c"
};

Gfx gDkjailIvyDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gDkjailMaskTex, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 14, G_TX_NOLOD),
    gsDPLoadMultiBlock(gDkjailIvyTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_dkjail_objVtx_000000, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 2, 5, 0, 6, 7, 2, 0),
    gsSP1Triangle(7, 0, 2, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gDkjailColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gDkjailColSurfaceType[] = {
    {0x0000C000, 0x000007CA},
};

CollisionPoly gDkjailColPolygons[] = {
    {0x0000, 0x8000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000},
    {0x0000, 0x8000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0000},
};

Vec3s gDkjailColVertices[] = {
    {    600,   1125,      0 },
    {   -600,   1125,      0 },
    {   -600,      0,      0 },
    {    600,      0,      0 },
};

CollisionHeader gDkjailCol = { 
    { -600, 0, 0 },
    { 600, 1125, 0 },
    ARRAY_COUNT(gDkjailColVertices), gDkjailColVertices,
    ARRAY_COUNT(gDkjailColPolygons), gDkjailColPolygons,
    gDkjailColSurfaceType,
    gDkjailColCamDataList,
    0, NULL
};
