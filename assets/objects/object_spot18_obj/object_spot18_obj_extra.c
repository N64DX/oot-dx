#include "assets/objects/object_spot18_obj/object_spot18_obj.h"
#include "object_spot18_obj_extra.h"

#include "array_count.h"
#include "gfx.h"

u64 gGoronShrineDoorTex[] = {
#include "assets/objects/object_spot18_obj/gGoronShrineDoorTex.rgba16.inc.c"
};

Vtx gGoronShrineDoorVtx[] = {
    VTX(72, 0, 12, 2048, 2048, 1, 172, 84, 48),
	VTX(72, 124, 12, 2048, 0, 1, 0, 119, 200),
	VTX(-72, 124, 12, 0, 0, 1, 0, 119, 200),
	VTX(-72, 0, 12, 0, 2048, 1, 172, 84, 48),
	VTX(-72, 0, -12, 0, 2048, 255, 172, 172, 48),
	VTX(-72, 124, -12, 0, 0, 255, 0, 137, 48),
	VTX(72, 124, -12, 2048, 0, 255, 0, 137, 48),
	VTX(72, 0, -12, 2048, 2048, 255, 172, 172, 48),
};

Gfx gGoronShrineDoorDL[19] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gGoronShrineDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(gGoronShrineDoorVtx, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 0, 0, 4, 0, 3, 0),
    gsSPEndDisplayList(),
};

CollisionPoly gGoronShrineDoorColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFFF4}, {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFFF4}, {0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFFF4},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFFF4}, {0x0000, 0x0004, 0x0007, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000}, {0x0000, 0x0004, 0x0000, 0x0003, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s gGoronShrineDoorColVertices[] = {
    { 72, 0, 12 }, { 72, 124, 12 }, { -72, 124, 12 }, { -72, 0, 12 }, { -72, 0, -12 }, { -72, 124, -12 }, { 72, 124, -12 }, { 72, 0, -12 },
};

CollisionHeader gGoronShrineDoorCol = { 
    { -72, 0, -12 }, { 72, 124, 12 },
    ARRAY_COUNT(gGoronShrineDoorColVertices), gGoronShrineDoorColVertices,
    ARRAY_COUNT(gGoronShrineDoorColPolygons), gGoronShrineDoorColPolygons,
    gGoronCityDoorSurfaceTypes,
    gGoronCityDoorBgCamList,
    0, NULL
};
