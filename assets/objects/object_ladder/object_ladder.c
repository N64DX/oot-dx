#include "object_ladder.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

#include "array_count.h"
#include "camera.h"
#include "gfx.h"

Vtx object_ladderVtx_000000[] = {
#include "assets/objects/object_ladder/object_ladderVtx_000000.vtx.inc"
};

Gfx gWoodenLadder12RungDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWoodenLadderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ladderVtx_000000, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gWoodenLadder12RungColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gWoodenLadder12RungColSurfaceType[] = {
    {0x00600000, 0x000007CA},   {0x00400000, 0x000007CA},
};

CollisionPoly gWoodenLadder12RungColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0001, 0x2004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
    {0x0001, 0x2004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
};

Vec3s gWoodenLadder12RungColVertices[] = {
    {   -100,   2000,      0 },
    {    100,   2000,      0 },
    {    100,   1800,      0 },
    {   -100,   1800,      0 },
    {    100,   1950,     40 },
    {   -100,   1950,     40 },
    {   -100,      0,     40 },
    {    100,      0,     40 },
};

CollisionHeader gWoodenLadder12RungCol = { 
    { -100, 0, 0 },
    { 100, 2000, 40 },
    ARRAY_COUNT(gWoodenLadder12RungColVertices), gWoodenLadder12RungColVertices,
    ARRAY_COUNT(gWoodenLadder12RungColPolygons), gWoodenLadder12RungColPolygons,
    gWoodenLadder12RungColSurfaceType,
    gWoodenLadder12RungColCamDataList,
    0, NULL
};

Vtx object_ladderVtx_000210[] = {
#include "assets/objects/object_ladder/object_ladderVtx_000210.vtx.inc"
};

Gfx gWoodenLadder16RungDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWoodenLadderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ladderVtx_000210, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gWoodenLadder16RungColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gWoodenLadder16RungColSurfaceType[] = {
    {0x00600000, 0x000007CA},   {0x00400000, 0x000007CA},
};

CollisionPoly gWoodenLadder16RungColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0001, 0x2004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
    {0x0001, 0x2004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
};

Vec3s gWoodenLadder16RungColVertices[] = {
    {   -100,   2600,      0 },
    {    100,   2600,      0 },
    {    100,   2400,      0 },
    {   -100,   2400,      0 },
    {    100,   2550,     40 },
    {   -100,   2550,     40 },
    {   -100,      0,     40 },
    {    100,      0,     40 },
};

CollisionHeader gWoodenLadder16RungCol = { 
    { -100, 0, 0 },
    { 100, 2600, 40 },
    ARRAY_COUNT(gWoodenLadder16RungColVertices), gWoodenLadder16RungColVertices,
    ARRAY_COUNT(gWoodenLadder16RungColPolygons), gWoodenLadder16RungColPolygons,
    gWoodenLadder16RungColSurfaceType,
    gWoodenLadder16RungColCamDataList,
    0, NULL
};

u8 object_ladder_possiblePadding_000434[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx object_ladderVtx_000440[] = {
#include "assets/objects/object_ladder/object_ladderVtx_000440.vtx.inc"
};

Gfx gWoodenLadder20RungDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWoodenLadderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ladderVtx_000440, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gWoodenLadder20RungColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gWoodenLadder20RungColSurfaceType[] = {
    {0x00600000, 0x000007CA},   {0x00400000, 0x000007CA},
};

CollisionPoly gWoodenLadder20RungColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0001, 0x2004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
    {0x0001, 0x2004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
};

Vec3s gWoodenLadder20RungColVertices[] = {
    {   -100,   3200,      0 },
    {    100,   3200,      0 },
    {    100,   3000,      0 },
    {   -100,   3000,      0 },
    {    100,   3150,     40 },
    {   -100,   3150,     40 },
    {   -100,      0,     40 },
    {    100,      0,     40 },
};

CollisionHeader gWoodenLadder20RungCol = { 
    { -100, 0, 0 },
    { 100, 3200, 40 },
    ARRAY_COUNT(gWoodenLadder20RungColVertices), gWoodenLadder20RungColVertices,
    ARRAY_COUNT(gWoodenLadder20RungColPolygons), gWoodenLadder20RungColPolygons,
    gWoodenLadder20RungColSurfaceType,
    gWoodenLadder20RungColCamDataList,
    0, NULL
};

Vtx object_ladderVtx_000670[] = {
#include "assets/objects/object_ladder/object_ladderVtx_000670.vtx.inc"
};

Gfx gWoodenLadder24RungDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPDisplayList(0x0C000010),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gWoodenLadderTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_ladderVtx_000670, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gWoodenLadder24RungColCamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType gWoodenLadder24RungColSurfaceType[] = {
    {0x00600000, 0x000007CA},   {0x00400000, 0x000007CA},
};

CollisionPoly gWoodenLadder24RungColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0x0000},
    {0x0001, 0x2004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
    {0x0001, 0x2004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFFD8},
};

Vec3s gWoodenLadder24RungColVertices[] = {
    {   -100,   3800,      0 },
    {    100,   3800,      0 },
    {    100,   3600,      0 },
    {   -100,   3600,      0 },
    {    100,   3750,     40 },
    {   -100,   3750,     40 },
    {   -100,      0,     40 },
    {    100,      0,     40 },
};

CollisionHeader gWoodenLadder24RungCol = { 
    { -100, 0, 0 },
    { 100, 3800, 40 },
    ARRAY_COUNT(gWoodenLadder24RungColVertices), gWoodenLadder24RungColVertices,
    ARRAY_COUNT(gWoodenLadder24RungColPolygons), gWoodenLadder24RungColPolygons,
    gWoodenLadder24RungColSurfaceType,
    gWoodenLadder24RungColCamDataList,
    0, NULL
};

u64 gWoodenLadderTex[] = {
#include "assets/objects/object_ladder/wooden_ladder.rgba16.inc.c"
};
