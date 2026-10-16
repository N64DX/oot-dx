#include "object_lightblock.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_lightblockVtx_000000[] = {
#include "assets/objects/object_lightblock/object_lightblockVtx_000000.vtx.inc"
};

u64 gSunBlockTex[] = {
#include "assets/objects/object_lightblock/sun_block.ci4.inc.c"
};

u64 gSunBlockTLUT[] = {
#include "assets/objects/object_lightblock/sun_block.tlut.rgba16.inc.c"
};

Gfx gSunBlockDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x08000000),
    gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, PRIMITIVE, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, gSunBlockTLUT),
    gsDPLoadTextureBlock_4b(gSunBlockTex, G_IM_FMT_CI, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(object_lightblockVtx_000000, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 2, 0, 12, 2, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gSunBlockColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType gSunBlockColSurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_0,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_DIRT,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly gSunBlockColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFDA8},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0002, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0002, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFB50},
    {0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFB50},
    {0x0000, 0x0005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xFDA8},
    {0x0000, 0x0006, 0x0004, 0x0005, 0x0000, 0x0000, 0x8001, 0xFDA8},
    {0x0000, 0x0006, 0x0005, 0x0007, 0x0000, 0x0000, 0x8001, 0xFDA8},
};

Vec3s gSunBlockColVertices[] = {
    {   -600,      0,    600 },
    {    600,      0,    600 },
    {    600,   1200,    600 },
    {   -600,   1200,    600 },
    {    600,      0,   -600 },
    {   -600,      0,   -600 },
    {    600,   1200,   -600 },
    {   -600,   1200,   -600 },
};

CollisionHeader gSunBlockCol = { 
    { -600, 0, -600 },
    { 600, 1200, 600 },
    ARRAY_COUNT(gSunBlockColVertices), gSunBlockColVertices,
    ARRAY_COUNT(gSunBlockColPolygons), gSunBlockColPolygons,
    gSunBlockColSurfaceType,
    gSunBlockColCamDataList,
    0, NULL
};
