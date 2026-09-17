#include "object_f40_switch.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_f40_switchVtx_000150[] = {
#include "assets/objects/object_f40_switch/object_f40_switchVtx_000150.vtx.inc"
};

u64 gStoneTowerFloorSwitchOutlineTex[] = {
#include "assets/objects/object_f40_switch/stone_tower_switch_outline.rgba16.inc.c"
};

u64 gStoneTowerFloorSwitchTex[] = {
#include "assets/objects/object_f40_switch/stone_tower_switch.ia8.inc.c"
};

Gfx gStoneTowerFloorSwitchOutlineDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStoneTowerFloorSwitchTex, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&object_f40_switchVtx_000150[20], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx gStoneTowerFloorSwitchDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gStoneTowerFloorSwitchOutlineTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_f40_switchVtx_000150, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

BgCamInfo gStoneTowerFloorSwitchColCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType gStoneTowerFloorSwitchColCamPosData[] = {
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

CollisionPoly gStoneTowerFloorSwitchColPolygons[] = {
    {0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFFF6},
    {0x0000, 0x2004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFF92},
    {0x0000, 0x2004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF92},
    {0x0000, 0x2008, 0x0005, 0x0004, 0x5A82, 0x5A82, 0x0000, 0xFF6C},
    {0x0000, 0x2008, 0x0004, 0x0009, 0x5A82, 0x5A82, 0x0000, 0xFF6C},
    {0x0000, 0x200A, 0x0006, 0x0005, 0x0000, 0x5A82, 0xA57E, 0xFF6C},
    {0x0000, 0x200A, 0x0005, 0x0008, 0x0000, 0x5A82, 0xA57E, 0xFF6C},
    {0x0000, 0x200B, 0x0007, 0x0006, 0xA57E, 0x5A82, 0x0000, 0xFF6C},
    {0x0000, 0x200B, 0x0006, 0x000A, 0xA57E, 0x5A82, 0x0000, 0xFF6C},
    {0x0000, 0x2009, 0x0004, 0x0007, 0x0000, 0x5A82, 0x5A82, 0xFF6C},
    {0x0000, 0x2009, 0x0007, 0x000B, 0x0000, 0x5A82, 0x5A82, 0xFF6C},
};

Vec3s gStoneTowerFloorSwitchColVertices[] = {
    {    240,     10,    240 },
    {    240,     10,   -240 },
    {   -240,     10,   -240 },
    {   -240,     10,    240 },
    {    100,    110,    100 },
    {    100,    110,   -100 },
    {   -100,    110,   -100 },
    {   -100,    110,    100 },
    {    200,     10,   -200 },
    {    200,     10,    200 },
    {   -200,     10,   -200 },
    {   -200,     10,    200 },
};

CollisionHeader gStoneTowerFloorSwitchCol = { 
    { -240, 10, -240 },
    { 240, 110, 240 },
    ARRAY_COUNT(gStoneTowerFloorSwitchColVertices), gStoneTowerFloorSwitchColVertices,
    ARRAY_COUNT(gStoneTowerFloorSwitchColPolygons), gStoneTowerFloorSwitchColPolygons,
    gStoneTowerFloorSwitchColCamPosData,
    gStoneTowerFloorSwitchColCamDataList,
    0, NULL
};
