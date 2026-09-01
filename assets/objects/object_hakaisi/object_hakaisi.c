#include "object_hakaisi.h"

#include "gfx.h"
#include "array_count.h"

Vtx object_hakaisiVtx_001D00[] = {
#include "assets/objects/object_hakaisi/object_hakaisiVtx_001D00.vtx.inc"
};

Vtx object_hakaisiVtx_002030[] = {
#include "assets/objects/object_hakaisi/object_hakaisiVtx_002030.vtx.inc"
};

Vtx object_hakaisiVtx_0022B0[] = {
#include "assets/objects/object_hakaisi/object_hakaisiVtx_0022B0.vtx.inc"
};

Vtx object_hakaisiVtx_0027C0[] = {
#include "assets/objects/object_hakaisi/object_hakaisiVtx_0027C0.vtx.inc"
};

Vtx object_hakaisiVtx_002AE0[] = {
#include "assets/objects/object_hakaisi/object_hakaisiVtx_002AE0.vtx.inc"
};

u64 object_hakaisi_Tex_000000[] = {
#include "assets/objects/object_hakaisi/tex_000000.rgba16.inc.c"
};

u64 object_hakaisi_Tex_000200[] = {
#include "assets/objects/object_hakaisi/tex_000200.i8.inc.c"
};

u64 object_hakaisi_Tex_000300[] = {
#include "assets/objects/object_hakaisi/tex_000300.rgba16.inc.c"
};

u64 object_hakaisi_Tex_000500[] = {
#include "assets/objects/object_hakaisi/tex_000500.rgba16.inc.c"
};

u64 object_hakaisi_Tex_001500[] = {
#include "assets/objects/object_hakaisi/tex_001500.rgba16.inc.c"
};

Gfx object_hakaisi_DL_001F10[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000200, G_IM_FMT_I, G_IM_SIZ_8b, 8, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_hakaisiVtx_001D00, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 12, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_hakaisiVtx_001D00[27], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx object_hakaisi_DL_0021B0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000200, G_IM_FMT_I, G_IM_SIZ_8b, 8, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_hakaisiVtx_002030, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000300, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_hakaisiVtx_002030[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx object_hakaisi_DL_002650[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_hakaisi_Tex_001500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_hakaisiVtx_0022B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&object_hakaisiVtx_0022B0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(12, 13, 6, 0, 11, 14, 15, 0),
    gsSP2Triangles(12, 6, 11, 0, 12, 11, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_hakaisiVtx_0022B0[48], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 3, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 0, 0),
    gsSPEndDisplayList(),
};

Gfx object_hakaisi_DL_0029C0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_hakaisi_Tex_001500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_hakaisiVtx_0027C0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(4, 6, 19, 0, 4, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_hakaisiVtx_0027C0[26], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 3, 5, 4, 0),
    gsSPEndDisplayList(),
};

Gfx object_hakaisi_DL_002CC0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_hakaisi_Tex_001500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_hakaisiVtx_002AE0, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(4, 6, 14, 0, 4, 14, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsSP2Triangles(21, 20, 19, 0, 21, 19, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_hakaisi_Tex_000500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_hakaisiVtx_002AE0[23], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 4, 6, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_hakaisi_Colheader_002FC4CamDataList[] = {
    { 0x0000, 0, NULL },
};

SurfaceType object_hakaisi_Colheader_002FC4SurfaceType[] = {
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

CollisionPoly object_hakaisi_Colheader_002FC4Polygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x126C, 0x7EAA, 0xFFE1},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x126C, 0x7EAA, 0xFFE1},
    {0x0000, 0x0002, 0x0004, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFFE9},
    {0x0000, 0x0002, 0x0005, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFFE9},
    {0x0000, 0x0006, 0x0001, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0007, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000},
    {0x0000, 0x0006, 0x0000, 0x0003, 0x81AF, 0x14AB, 0x0000, 0xFFDB},
    {0x0000, 0x0006, 0x0003, 0x0008, 0x81AF, 0x14AB, 0x0000, 0xFFDB},
    {0x0000, 0x0008, 0x0003, 0x0005, 0x9616, 0x47DF, 0x0000, 0xFFCA},
    {0x0000, 0x0008, 0x0005, 0x0009, 0x9616, 0x47DF, 0x0000, 0xFFCA},
    {0x0000, 0x0009, 0x0005, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xFFAD},
    {0x0000, 0x0009, 0x0004, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFFAD},
    {0x0000, 0x000A, 0x0004, 0x0002, 0x69EA, 0x47DF, 0x0000, 0xFFCA},
    {0x0000, 0x000A, 0x0002, 0x000B, 0x69EA, 0x47DF, 0x0000, 0xFFCA},
    {0x0000, 0x000B, 0x0002, 0x0001, 0x7E51, 0x14AB, 0x0000, 0xFFDB},
    {0x0000, 0x000B, 0x0001, 0x0007, 0x7E51, 0x14AB, 0x0000, 0xFFDB},
    {0x0000, 0x000C, 0x0009, 0x000A, 0x0000, 0x0000, 0x8001, 0xFFF8},
    {0x0000, 0x000C, 0x000A, 0x000D, 0x0000, 0x0000, 0x8001, 0xFFF8},
    {0x0000, 0x000C, 0x0008, 0x0009, 0xEC0A, 0x0000, 0x8192, 0xFFF7},
    {0x0000, 0x000A, 0x000B, 0x000D, 0x13F6, 0x0000, 0x8192, 0xFFF7},
    {0x0000, 0x0006, 0x0008, 0x000C, 0x071B, 0x35AB, 0x8C04, 0xFFE6},
    {0x0000, 0x000D, 0x000B, 0x0007, 0xF8E5, 0x35AB, 0x8C04, 0xFFE6},
    {0x0000, 0x0006, 0x000C, 0x000D, 0x0000, 0x393E, 0x8D84, 0xFFE4},
    {0x0000, 0x0006, 0x000D, 0x0007, 0x0000, 0x393E, 0x8D84, 0xFFE4},
};

Vec3s object_hakaisi_Colheader_002FC4Vertices[] = {
    {    -37,      0,     31 },
    {     37,      0,     31 },
    {     28,     55,     23 },
    {    -28,     55,     23 },
    {      9,     83,     23 },
    {     -9,     83,     23 },
    {    -37,      0,    -31 },
    {     37,      0,    -31 },
    {    -28,     55,     -5 },
    {     -9,     83,     -8 },
    {      9,     83,     -8 },
    {     28,     55,     -5 },
    {     -9,     46,     -8 },
    {      9,     46,     -8 },
};

CollisionHeader object_hakaisi_Colheader_002FC4 = { 
    { -37, 0, -31 },
    { 37, 83, 31 },
    ARRAY_COUNT(object_hakaisi_Colheader_002FC4Vertices), object_hakaisi_Colheader_002FC4Vertices,
    ARRAY_COUNT(object_hakaisi_Colheader_002FC4Polygons), object_hakaisi_Colheader_002FC4Polygons,
    object_hakaisi_Colheader_002FC4SurfaceType,
    object_hakaisi_Colheader_002FC4CamDataList,
    0, NULL
};

