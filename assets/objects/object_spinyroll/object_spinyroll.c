#include "object_spinyroll.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_spinyrollVtx_000000[] = {
#include "assets/objects/object_spinyroll/object_spinyrollVtx_000000.vtx.inc"
};

u64 object_spinyroll_Tex_0005C0[] = {
#include "assets/objects/object_spinyroll/tex_0005C0.rgba16.inc.c"
};

Gfx object_spinyroll_DL_000460[] = {
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetColorDither(G_CD_MAGICSQ),
    gsDPSetAlphaDither(G_AD_PATTERN),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_spinyroll_Tex_0005C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPVertex(object_spinyrollVtx_000000, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 0, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 7, 5, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 12, 14, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
    gsSP2Triangles(22, 19, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&object_spinyrollVtx_000000[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 6, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 13, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&object_spinyrollVtx_000000[60], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_spinyroll_Colheader_000E68CamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType object_spinyroll_Colheader_000E68SurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_0,
                /* unk18 */ 0,
                WALL_TYPE_1,
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
    }, {
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

CollisionPoly object_spinyroll_Colheader_000E68Polygons[] = {
    {0x0000, 0xA000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFF9C},
    {0x0000, 0xA000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFF9C},
    {0x0000, 0xA004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFF9C},
    {0x0000, 0xA004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFF9C},
    {0x0001, 0x2000, 0x8004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0001, 0x2004, 0x8000, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000},
};

Vec3s object_spinyroll_Colheader_000E68Vertices[] = {
    {   -600,      0,    100 },
    {    600,      0,    100 },
    {    600,    600,    100 },
    {   -600,    600,    100 },
    {    600,      0,   -100 },
    {   -600,      0,   -100 },
    {   -600,    600,   -100 },
    {    600,    600,   -100 },
};

CollisionHeader object_spinyroll_Colheader_000E68 = { 
    { -600, 0, -100 },
    { 600, 600, 100 },
    ARRAY_COUNT(object_spinyroll_Colheader_000E68Vertices), object_spinyroll_Colheader_000E68Vertices,
    ARRAY_COUNT(object_spinyroll_Colheader_000E68Polygons), object_spinyroll_Colheader_000E68Polygons,
    object_spinyroll_Colheader_000E68SurfaceType,
    object_spinyroll_Colheader_000E68CamDataList,
    0, NULL
};

BgCamInfo object_spinyroll_Colheader_000F80CamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType object_spinyroll_Colheader_000F80SurfaceType[] = {
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

CollisionPoly object_spinyroll_Colheader_000F80Polygons[] = {
    {0x0000, 0x2000, 0x8002, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x2000, 0x8003, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0xA000, 0x0001, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFF9C},
    {0x0000, 0xA000, 0x0005, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFF9C},
    {0x0000, 0xA001, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0xA001, 0x0006, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0xA002, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xFF9C},
    {0x0000, 0xA002, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xFF9C},
    {0x0000, 0xA003, 0x0000, 0x0004, 0x8001, 0x0000, 0x0000, 0xFED4},
    {0x0000, 0xA003, 0x0004, 0x0007, 0x8001, 0x0000, 0x0000, 0xFED4},
};

Vec3s object_spinyroll_Colheader_000F80Vertices[] = {
    {   -300,      0,    100 },
    {    300,      0,    100 },
    {    300,      0,   -100 },
    {   -300,      0,   -100 },
    {   -300,   1200,    100 },
    {    300,   1200,    100 },
    {    300,   1200,   -100 },
    {   -300,   1200,   -100 },
};

CollisionHeader object_spinyroll_Colheader_000F80 = { 
    { -300, 0, -100 },
    { 300, 1200, 100 },
    ARRAY_COUNT(object_spinyroll_Colheader_000F80Vertices), object_spinyroll_Colheader_000F80Vertices,
    ARRAY_COUNT(object_spinyroll_Colheader_000F80Polygons), object_spinyroll_Colheader_000F80Polygons,
    object_spinyroll_Colheader_000F80SurfaceType,
    object_spinyroll_Colheader_000F80CamDataList,
    0, NULL
};
