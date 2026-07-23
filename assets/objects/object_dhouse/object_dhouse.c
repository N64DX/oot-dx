#include "object_dhouse.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_dhouseVtx_004E30[] = {
#include "assets/objects/object_dhouse/object_dhouseVtx_004E30.vtx.inc"
};

u64 object_dhouse_TLUT_000000[] = {
#include "assets/objects/object_dhouse/tex_000040.tlut.rgba16.inc.c"
};

u64 object_dhouse_TLUT_000020[] = {
#include "assets/objects/object_dhouse/tex_002040.tlut.rgba16.inc.c"
};

u64 object_dhouse_Tex_000040[] = {
#include "assets/objects/object_dhouse/tex_000040.ci4.inc.c"
};

u64 object_dhouse_Tex_000840[] = {
#include "assets/objects/object_dhouse/tex_000840.rgba16.inc.c"
};

u64 object_dhouse_Tex_001040[] = {
#include "assets/objects/object_dhouse/tex_001040.rgba16.inc.c"
};

u64 object_dhouse_Tex_002040[] = {
#include "assets/objects/object_dhouse/tex_002040.ci4.inc.c"
};

Gfx object_dhouse_DL_005A78[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_dhouse_TLUT_000020),
    gsDPLoadTextureBlock_4b(object_dhouse_Tex_002040, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_dhouseVtx_004E30, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&object_dhouseVtx_004E30[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_dhouse_Tex_001040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_dhouseVtx_004E30[46], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 0, 9, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 11, 0),
    gsSP2Triangles(14, 11, 10, 0, 2, 5, 3, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_dhouse_Tex_000840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_dhouseVtx_004E30[67], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, object_dhouse_TLUT_000000),
    gsDPLoadTextureBlock_4b(object_dhouse_Tex_000040, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_dhouseVtx_004E30[75], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_dhouseVtx_004E30[106], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_dhouseVtx_004E30[138], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 13, 17, 0, 13, 12, 6, 0),
    gsSP2Triangles(5, 13, 6, 0, 5, 17, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(18, 22, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_dhouseVtx_004E30[170], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 16, 15, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(18, 19, 20, 0, 9, 21, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 23, 24, 22, 0),
    gsSP1Triangle(23, 25, 24, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_dhouse_Colheader_008040CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_dhouse_Colheader_008040SurfaceType[] = {
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
                /* lightSetting */ 0,
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
                /* bgCamIndex */ 194,
                /* exitIndex */ 7,
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
                /* lightSetting */ 0,
                /* echo */ 0,
                /* canHookshot */ false,
                CONVEYOR_SPEED_DISABLED,
                CONVEYOR_DIRECTION_FROM_BINANG(0x0),
                /* unk27 */ false
            ),
        },
    },
};

CollisionPoly object_dhouse_Colheader_008040Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0xFF76, 0xFF6F, 0x8002, 0x0391},
    {0x0000, 0x0000, 0x0002, 0x0003, 0xFF9B, 0xFFC1, 0x8001, 0x038F},
    {0x0000, 0x0002, 0x0004, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0002, 0x0005, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x0009, 0xFE9F, 0x7FFD, 0xFB39},
    {0x0000, 0x0004, 0x0007, 0x0005, 0x0059, 0xFF85, 0x7FFF, 0xFB35},
    {0x0000, 0x0008, 0x0009, 0x0001, 0x4019, 0x6ECA, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x000A, 0x000B, 0x0032, 0x000F, 0x7FFF, 0xFB3A},
    {0x0000, 0x000A, 0x000C, 0x000B, 0x0032, 0xFF6B, 0x7FFF, 0xFB37},
    {0x0000, 0x000B, 0x000C, 0x000D, 0x287A, 0x8692, 0x0000, 0xFCB4},
    {0x0000, 0x000B, 0x000D, 0x000E, 0x287A, 0x8692, 0x0000, 0xFCB4},
    {0x0000, 0x0000, 0x000F, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0000, 0x0008, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0010, 0x000B, 0x000E, 0xD786, 0x8692, 0x0000, 0xFEDA},
    {0x0000, 0x0010, 0x000E, 0x0011, 0xD786, 0x8692, 0x0000, 0xFEDA},
    {0x0000, 0x000B, 0x0010, 0x0007, 0xFFE9, 0xFFBC, 0x7FFF, 0xFB3A},
    {0x0000, 0x0006, 0x000B, 0x0007, 0xFFF3, 0xFFB0, 0x7FFF, 0xFB3A},
    {0x0000, 0x0010, 0x0012, 0x0007, 0xFFA2, 0xFFD1, 0x7FFF, 0xFB3E},
    {0x0000, 0x0013, 0x0012, 0x0010, 0x8D84, 0xC6C2, 0x0000, 0x03BC},
    {0x0000, 0x0013, 0x0010, 0x0011, 0x8D84, 0xC6C2, 0x0000, 0x03BC},
    {0x0000, 0x0014, 0x0015, 0x0016, 0x0091, 0x00A5, 0x7FFE, 0x034F},
    {0x0000, 0x0014, 0x0016, 0x0017, 0x0062, 0x0039, 0x7FFF, 0x0351},
    {0x0000, 0x0018, 0x0014, 0x0017, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0018, 0x0017, 0x0019, 0x0000, 0x7FFF, 0x0000, 0xFDA8},
    {0x0000, 0x0019, 0x001A, 0x001B, 0xFFE2, 0x0083, 0x8001, 0xFB67},
    {0x0000, 0x0019, 0x001B, 0x0018, 0xFF99, 0x0141, 0x8003, 0xFB68},
    {0x0000, 0x0015, 0x001C, 0x0008, 0x3FD7, 0x6EF0, 0x0000, 0x0000},
    {0x0000, 0x000D, 0x001B, 0x000E, 0xFFE6, 0x004F, 0x8001, 0xFB67},
    {0x0000, 0x001B, 0x001A, 0x000E, 0xFFD9, 0x003F, 0x8001, 0xFB67},
    {0x0000, 0x0011, 0x000E, 0x001A, 0x0000, 0x0000, 0x8001, 0xFB65},
    {0x0000, 0x0016, 0x0015, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0000},
    {0x0000, 0x0016, 0x0008, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x0000},
};

Vec3s object_dhouse_Colheader_008040Vertices[] = {
    {   1667,      0,    906 },
    {      0,      0,    913 },
    {    320,    600,    909 },
    {   1293,    600,    906 },
    {    238,    600,   1229 },
    {   1339,    600,   1226 },
    {     52,    -54,   1222 },
    {   1725,     82,   1223 },
    {      0,      0,      0 },
    {   -261,    151,    506 },
    {    211,   -600,   1222 },
    {    869,   -600,   1221 },
    {    269,   -800,   1221 },
    {    269,   -800,  -1179 },
    {    869,   -600,  -1179 },
    {   1706,      0,     94 },
    {   1469,   -800,   1221 },
    {   1469,   -800,  -1179 },
    {   1669,  -1200,   1221 },
    {   1669,  -1200,    -84 },
    {    223,    600,   -851 },
    {      0,      0,   -847 },
    {   1583,      0,   -854 },
    {   1567,    600,   -855 },
    {    138,    600,  -1171 },
    {   1725,    600,  -1176 },
    {   1505,   -200,  -1179 },
    {    148,     -9,  -1177 },
    {   -212,    122,   -217 },
};

CollisionHeader object_dhouse_Colheader_008040 = { 
    { -261, -1200, -1179 },
    { 1725, 600, 1229 },
    ARRAY_COUNT(object_dhouse_Colheader_008040Vertices), object_dhouse_Colheader_008040Vertices,
    ARRAY_COUNT(object_dhouse_Colheader_008040Polygons), object_dhouse_Colheader_008040Polygons,
    object_dhouse_Colheader_008040SurfaceType,
    object_dhouse_Colheader_008040CamDataList,
    0, NULL
};
