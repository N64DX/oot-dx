#include "object_f40_obj.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_f40_objVtx_003800[] = {
#include "assets/objects/object_f40_obj/object_f40_objVtx_003800.vtx.inc"
};

Vtx object_f40_objVtx_003EB0[] = {
#include "assets/objects/object_f40_obj/object_f40_objVtx_003EB0.vtx.inc"
};

Vtx object_f40_objVtx_004270[] = {
#include "assets/objects/object_f40_obj/object_f40_objVtx_004270.vtx.inc"
};

u64 gStoneTowerPlatformsTopTex[] = {
#include "assets/objects/object_f40_obj/stone_tower_platforms_top.i8.inc.c"
};

u64 gStoneTowerPlatformsSidesTex[] = {
#include "assets/objects/object_f40_obj/stone_tower_platforms_sides.rgba16.inc.c"
};

u64 gStoneTowerBlockBackgroundTex[] = {
#include "assets/objects/object_f40_obj/stone_tower_block_background.rgba16.inc.c"
};

u64 gStoneTowerBlockPatternTex[] = {
#include "assets/objects/object_f40_obj/stone_tower_block_pattern.i4.inc.c"
};

u64 gStoneTowerBlockSidesTex[] = {
#include "assets/objects/object_f40_obj/stone_tower_block_sides.i4.inc.c"
};

Gfx gStoneTowerVerticallyOscillatingPlatformDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStoneTowerPlatformsSidesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_f40_objVtx_003800, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gStoneTowerPlatformsTopTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_f40_objVtx_003800[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gStoneTowerTempleSquareElevatorDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStoneTowerPlatformsTopTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_f40_objVtx_003EB0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gStoneTowerPlatformsSidesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_f40_objVtx_003EB0[8], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gStoneTowerBlockDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(gStoneTowerBlockSidesTex, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gStoneTowerBlockBackgroundTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_f40_objVtx_004270, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(gStoneTowerBlockPatternTex, G_IM_FMT_I, 32, 128, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gStoneTowerBlockBackgroundTex, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_f40_objVtx_004270[8], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gStoneTowerVerticallyOscillatingPlatformColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType gStoneTowerVerticallyOscillatingPlatformColSurfaceType[] = {
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
    },
};

CollisionPoly gStoneTowerVerticallyOscillatingPlatformColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0003, 0x0004, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0005, 0x0006, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0000, 0x0006, 0x0007, 0x0000, 0x8001, 0x0000, 0xFDA8},
    {0x0000, 0x0008, 0x0005, 0x0004, 0x8001, 0x0000, 0x0000, 0xFC18},
    {0x0000, 0x0008, 0x0004, 0x0009, 0x8001, 0x0000, 0x0000, 0xFC18},
    {0x0000, 0x000A, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000, 0xFC18},
    {0x0000, 0x000A, 0x0000, 0x000B, 0x7FFF, 0x0000, 0x0000, 0xFC18},
    {0x0000, 0x0008, 0x0009, 0x000C, 0x0000, 0x7FFF, 0x0000, 0xFD85},
    {0x0000, 0x0008, 0x000C, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFD85},
    {0x0000, 0x0008, 0x000D, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFD85},
    {0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x7FFF, 0x0000, 0xFD85},
    {0x0000, 0x0008, 0x000B, 0x000E, 0x0000, 0x7FFF, 0x0000, 0xFD85},
    {0x0000, 0x0008, 0x000E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0xFD85},
    {0x0000, 0x000C, 0x0009, 0x0004, 0xBE2C, 0x0000, 0x6DC5, 0xF143},
    {0x0000, 0x000C, 0x0004, 0x0003, 0xBE2C, 0x0000, 0x6DC5, 0xF143},
    {0x0000, 0x000C, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xEF98},
    {0x0000, 0x000C, 0x0002, 0x000D, 0x0000, 0x0000, 0x7FFF, 0xEF98},
    {0x0000, 0x000D, 0x0002, 0x0001, 0x41D4, 0x0000, 0x6DC5, 0xF143},
    {0x0000, 0x000D, 0x0001, 0x000A, 0x41D4, 0x0000, 0x6DC5, 0xF143},
    {0x0000, 0x000B, 0x0000, 0x0007, 0x41D4, 0x0000, 0x923B, 0xF143},
    {0x0000, 0x000B, 0x0007, 0x000E, 0x41D4, 0x0000, 0x923B, 0xF143},
    {0x0000, 0x000E, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xEF98},
    {0x0000, 0x000E, 0x0006, 0x000F, 0x0000, 0x0000, 0x8001, 0xEF98},
    {0x0000, 0x000F, 0x0006, 0x0005, 0xBE2C, 0x0000, 0x923B, 0xF143},
    {0x0000, 0x000F, 0x0005, 0x0008, 0xBE2C, 0x0000, 0x923B, 0xF143},
};

Vec3s gStoneTowerVerticallyOscillatingPlatformColVertices[] = {
    {   1000,   -600,  -3800 },
    {   1000,   -600,   3800 },
    {    333,   -600,   4200 },
    {   -333,   -600,   4200 },
    {  -1000,   -600,   3800 },
    {  -1000,   -600,  -3800 },
    {   -333,   -600,  -4200 },
    {    333,   -600,  -4200 },
    {  -1000,    635,  -3800 },
    {  -1000,    635,   3800 },
    {   1000,    635,   3800 },
    {   1000,    635,  -3800 },
    {   -333,    635,   4200 },
    {    333,    635,   4200 },
    {    333,    635,  -4200 },
    {   -333,    635,  -4200 },
};

CollisionHeader gStoneTowerVerticallyOscillatingPlatformCol = { 
    { -1000, -600, -4200 },
    { 1000, 635, 4200 },
    ARRAY_COUNT(gStoneTowerVerticallyOscillatingPlatformColVertices),
    gStoneTowerVerticallyOscillatingPlatformColVertices,
    ARRAY_COUNT(gStoneTowerVerticallyOscillatingPlatformColPolygons),
    gStoneTowerVerticallyOscillatingPlatformColPolygons,
    gStoneTowerVerticallyOscillatingPlatformColSurfaceType,
    gStoneTowerVerticallyOscillatingPlatformColCamDataList,
    0, NULL
};

BgCamInfo gStoneTowerTempleSquareElevatorColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType gStoneTowerTempleSquareElevatorColSurfaceType[] = {
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
    },
};

CollisionPoly gStoneTowerTempleSquareElevatorColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0003, 0x0002, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xF830},
    {0x0000, 0x0003, 0x0004, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF830},
    {0x0000, 0x0005, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0005, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF830},
    {0x0000, 0x0007, 0x0006, 0x0001, 0x0000, 0x0000, 0x8001, 0xF830},
    {0x0000, 0x0007, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xF830},
    {0x0000, 0x0000, 0x0003, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0000, 0x0005, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFC18},
    {0x0000, 0x0006, 0x0004, 0x0002, 0x0000, 0x8001, 0x0000, 0xFC18},
    {0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x8001, 0x0000, 0xFC18},
};

Vec3s gStoneTowerTempleSquareElevatorColVertices[] = {
    {  -2000,   1000,  -2000 },
    {  -2000,  -1000,  -2000 },
    {  -2000,  -1000,   2000 },
    {  -2000,   1000,   2000 },
    {   2000,  -1000,   2000 },
    {   2000,   1000,   2000 },
    {   2000,  -1000,  -2000 },
    {   2000,   1000,  -2000 },
};

CollisionHeader gStoneTowerTempleSquareElevatorCol = { 
    { -2000, -1000, -2000 },
    { 2000, 1000, 2000 },
    ARRAY_COUNT(gStoneTowerTempleSquareElevatorColVertices), gStoneTowerTempleSquareElevatorColVertices,
    ARRAY_COUNT(gStoneTowerTempleSquareElevatorColPolygons), gStoneTowerTempleSquareElevatorColPolygons,
    gStoneTowerTempleSquareElevatorColSurfaceType,
    gStoneTowerTempleSquareElevatorColCamDataList,
    0, NULL
};

BgCamInfo gStoneTowerBlockColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType gStoneTowerBlockColSurfaceType[] = {
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
    },
};

CollisionPoly gStoneTowerBlockColPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFCE0},
    {0x0000, 0x0000, 0x0002, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xFCE0},
    {0x0000, 0x0004, 0x0005, 0x0006, 0x8001, 0x0000, 0x0000, 0xFCE0},
    {0x0000, 0x0004, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0xFCE0},
    {0x0000, 0x0003, 0x0004, 0x0007, 0x0000, 0x8001, 0x0000, 0xFCE0},
    {0x0000, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0x0000, 0xFCE0},
    {0x0000, 0x0003, 0x0002, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFCE0},
    {0x0000, 0x0003, 0x0005, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFCE0},
    {0x0000, 0x0007, 0x0006, 0x0001, 0x0000, 0x0000, 0x8001, 0xFCE0},
    {0x0000, 0x0007, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xFCE0},
    {0x0000, 0x0001, 0x0006, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFCE0},
    {0x0000, 0x0001, 0x0005, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFCE0},
};

Vec3s gStoneTowerBlockColVertices[] = {
    {    800,   -800,   -800 },
    {    800,    800,   -800 },
    {    800,    800,    800 },
    {    800,   -800,    800 },
    {   -800,   -800,    800 },
    {   -800,    800,    800 },
    {   -800,    800,   -800 },
    {   -800,   -800,   -800 },
};

CollisionHeader gStoneTowerBlockCol = { 
    { -800, -800, -800 },
    { 800, 800, 800 },
    ARRAY_COUNT(gStoneTowerBlockColVertices), gStoneTowerBlockColVertices,
    ARRAY_COUNT(gStoneTowerBlockColPolygons), gStoneTowerBlockColPolygons,
    gStoneTowerBlockColSurfaceType,
    gStoneTowerBlockColCamDataList,
    0, NULL
};
