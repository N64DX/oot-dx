#include "object_lbfshot.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_lbfshotVtx_000000[] = {
#include "assets/objects/object_lbfshot/object_lbfshotVtx_000000.vtx.inc"
};

u64 object_lbfshot_Tex_000340[] = {
#include "assets/objects/object_lbfshot/tex_000340.rgba16.inc.c"
};

u64 object_lbfshot_Tex_000B40[] = {
#include "assets/objects/object_lbfshot/tex_000B40.rgba16.inc.c"
};

Gfx object_lbfshot_DL_000228[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_lbfshot_Tex_000340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_lbfshotVtx_000000, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(3, 2, 12, 0, 3, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_lbfshot_Tex_000B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_lbfshotVtx_000000[14], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_lbfshot_Colheader_0014D8CamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType object_lbfshot_Colheader_0014D8SurfaceType[] = {
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
                SURFACE_MATERIAL_STONE,
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
                SURFACE_MATERIAL_STONE,
                FLOOR_EFFECT_0,
                /* lightSetting */ 31,
                /* echo */ 0,
                /* canHookshot */ true,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly object_lbfshot_Colheader_0014D8Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xFF38},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xFF38},
    {0x0000, 0x0004, 0x0005, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFF38},
    {0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFF38},
    {0x0000, 0x0006, 0x0007, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFF38},
    {0x0000, 0x0006, 0x0005, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFF38},
    {0x0000, 0x0003, 0x0002, 0x0007, 0x0000, 0x0000, 0x8001, 0xFF38},
    {0x0000, 0x0003, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xFF38},
    {0x0001, 0x0008, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFB50},
    {0x0001, 0x0008, 0x000A, 0x000B, 0x0000, 0x7FFF, 0x0000, 0xFB50},
    {0x0001, 0x000C, 0x000A, 0x0009, 0x8001, 0x0000, 0x0000, 0xFF10},
    {0x0001, 0x000C, 0x0009, 0x000D, 0x8001, 0x0000, 0x0000, 0xFF10},
    {0x0001, 0x000E, 0x000B, 0x000A, 0x0000, 0x0000, 0x7FFF, 0xFF10},
    {0x0001, 0x000E, 0x000A, 0x000C, 0x0000, 0x0000, 0x7FFF, 0xFF10},
    {0x0001, 0x000F, 0x0008, 0x000B, 0x7FFF, 0x0000, 0x0000, 0xFF10},
    {0x0001, 0x000F, 0x000B, 0x000E, 0x7FFF, 0x0000, 0x0000, 0xFF10},
    {0x0001, 0x000D, 0x0009, 0x0008, 0x0000, 0x0000, 0x8001, 0xFF10},
    {0x0001, 0x000D, 0x0008, 0x000F, 0x0000, 0x0000, 0x8001, 0xFF10},
};

Vec3s object_lbfshot_Colheader_0014D8Vertices[] = {
    {   -200,      0,    200 },
    {   -200,    800,    200 },
    {   -200,    800,   -200 },
    {   -200,      0,   -200 },
    {    200,      0,    200 },
    {    200,    800,    200 },
    {    200,      0,   -200 },
    {    200,    800,   -200 },
    {    240,   1200,   -240 },
    {   -240,   1200,   -240 },
    {   -240,   1200,    240 },
    {    240,   1200,    240 },
    {   -240,    760,    240 },
    {   -240,    760,   -240 },
    {    240,    760,    240 },
    {    240,    760,   -240 },
};

CollisionHeader object_lbfshot_Colheader_0014D8 = { 
    { -240, 0, -240 },
    { 240, 1200, 240 },
    ARRAY_COUNT(object_lbfshot_Colheader_0014D8Vertices), object_lbfshot_Colheader_0014D8Vertices,
    ARRAY_COUNT(object_lbfshot_Colheader_0014D8Polygons), object_lbfshot_Colheader_0014D8Polygons,
    object_lbfshot_Colheader_0014D8SurfaceType,
    object_lbfshot_Colheader_0014D8CamDataList,
    0, NULL
};
