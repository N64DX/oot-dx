#include "object_spidertent.h"

#include "gfx.h"
#include "camera.h"
#include "array_count.h"

Vtx object_spidertentVtx_000000[] = {
#include "assets/objects/object_spidertent/object_spidertentVtx_000000.vtx.inc"
};

Vtx object_spidertentVtx_0011E0[] = {
#include "assets/objects/object_spidertent/object_spidertentVtx_0011E0.vtx.inc"
};

u64 object_spidertent_Tex_000110[] = {
#include "assets/objects/object_spidertent/tex_000110.ia8.inc.c"
};

u64 object_spidertent_Tex_0012F0[] = {
#include "assets/objects/object_spidertent/tex_0012F0.ia8.inc.c"
};

Gfx object_spidertent_DL_000070[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_spidertent_Tex_000110, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_spidertentVtx_000000, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 6, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx object_spidertent_DL_001250[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(object_spidertent_Tex_0012F0, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(object_spidertentVtx_0011E0, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 5, 2, 0, 1, 6, 2, 0),
    gsSPEndDisplayList(),
};

BgCamInfo object_spidertent_Colheader_0011ACCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType object_spidertent_Colheader_0011ACSurfaceType[] = {
    {0x0000C000, 0x000007CA},
};

CollisionPoly object_spidertent_Colheader_0011ACPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x3F7D, 0x6F03, 0x055B, 0xFFDD},
    {0x0000, 0x0001, 0x0003, 0x0002, 0x22FA, 0x760D, 0xDD06, 0xFFDA},
    {0x0000, 0x0003, 0x0004, 0x0002, 0xE062, 0x729B, 0xD094, 0xFFDB},
    {0x0000, 0x0004, 0x0005, 0x0002, 0xD2EF, 0x771B, 0x0CE0, 0xFFDC},
    {0x0000, 0x0005, 0x0006, 0x0002, 0xF333, 0x7736, 0x2CCE, 0xFFDC},
    {0x0000, 0x0006, 0x0000, 0x0002, 0x3821, 0x6F8F, 0x1C11, 0xFFDE},
};

Vec3s object_spidertent_Colheader_0011ACVertices[] = {
    {     69,      0,     19 },
    {     76,      0,    -64 },
    {      1,     40,     -4 },
    {     24,      0,   -116 },
    {   -111,      0,    -26 },
    {    -81,      0,     79 },
    {     24,      0,    109 },
};

CollisionHeader object_spidertent_Colheader_0011AC = { 
    { -111, 0, -116 },
    { 76, 40, 109 },
    ARRAY_COUNT(object_spidertent_Colheader_0011ACVertices), object_spidertent_Colheader_0011ACVertices,
    ARRAY_COUNT(object_spidertent_Colheader_0011ACPolygons), object_spidertent_Colheader_0011ACPolygons,
    object_spidertent_Colheader_0011ACSurfaceType,
    object_spidertent_Colheader_0011ACCamDataList,
    0, NULL
};

BgCamInfo object_spidertent_Colheader_00238CCamDataList[] = {
    { CAM_SET_NONE, 0, NULL },
};

SurfaceType object_spidertent_Colheader_00238CSurfaceType[] = {
    {
        {
            SURFACETYPE0(
                /* bgCamIndex */ 0,
                /* exitIndex */ 0,
                FLOOR_TYPE_6,
                /* unk18 */ 0,
                WALL_TYPE_0,
                FLOOR_PROPERTY_0,
                /* isSoft */ false,
                /* isHorseBlocked */ false
            ),
            SURFACETYPE1(
                SURFACE_MATERIAL_WOOD,
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

CollisionPoly object_spidertent_Colheader_00238CPolygons[] = {
    {0x0000, 0x0000, 0x0001, 0x0002, 0x3838, 0x6F80, 0x1C1C, 0xFFE6},
    {0x0000, 0x0003, 0x0000, 0x0002, 0xF2FE, 0x773C, 0x2CAF, 0xFFE5},
    {0x0000, 0x0004, 0x0003, 0x0002, 0xD2E9, 0x7722, 0x0C8E, 0xFFE5},
    {0x0000, 0x0005, 0x0004, 0x0002, 0xE09C, 0x72B6, 0xD0AE, 0xFFE4},
    {0x0000, 0x0006, 0x0005, 0x0002, 0x230D, 0x7602, 0xDCF3, 0xFFE3},
    {0x0000, 0x0001, 0x0006, 0x0002, 0x3F92, 0x6EFA, 0x0520, 0xFFE6},
};

Vec3s object_spidertent_Colheader_00238CVertices[] = {
    {     18,      0,     82 },
    {     52,      0,     14 },
    {      1,     30,     -3 },
    {    -61,      0,     59 },
    {    -83,      0,    -20 },
    {     18,      0,    -87 },
    {     57,      0,    -48 },
};

CollisionHeader object_spidertent_Colheader_00238C = { 
    { -83, 0, -87 },
    { 57, 30, 82 },
    ARRAY_COUNT(object_spidertent_Colheader_00238CVertices), object_spidertent_Colheader_00238CVertices,
    ARRAY_COUNT(object_spidertent_Colheader_00238CPolygons), object_spidertent_Colheader_00238CPolygons,
    object_spidertent_Colheader_00238CSurfaceType,
    object_spidertent_Colheader_00238CCamDataList,
    0, NULL
};
