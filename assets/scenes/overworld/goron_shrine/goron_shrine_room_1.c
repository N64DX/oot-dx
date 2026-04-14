#include "goron_shrine_scene.h"
#include "goron_shrine_room_1.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd goron_shrine_room_1[] = {
  //SCENE_CMD_ALTERNATE_HEADER_LIST(goron_shrine_room_1AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&goron_shrine_room_1RoomShapeCullable_0000F0),
    SCENE_CMD_OBJECT_LIST(6, goron_shrine_room_1ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(6, goron_shrine_room_1ActorEntry_000058),
    SCENE_CMD_END(),
};

/*SceneCmd* goron_shrine_room_1AlternateHeaders[] = {
    NULL,
    NULL,
    goron_shrine_room_1Set_cleansed,
};*/

s16 goron_shrine_room_1ObjectList_00004C[] = {
    OBJECT_SPOT18_OBJ,
    OBJECT_OF1D_MAP,
  //OBJECT_GK,
    OBJECT_SYOKUDAI,
  //OBJECT_OBJ_CHAN,
    OBJECT_TSUBO,
    OBJECT_JG,
    OBJECT_BOX,
};

ActorEntry goron_shrine_room_1ActorEntry_000058[] = {
  //{ ACTOR_EN_GO3,       { -1723, -134, -115 }, { 0,   0x3C, 0 }, 0x7F87 },
  //{ ACTOR_EN_GO3,       { -1552, -133,   74 }, { 0,   0x49, 0 }, 0x0002 },
  //{ ACTOR_EN_GK,        { -1780, -114,  -12 }, { 0,   0x5A, 0 }, 0x1400 },
    { ACTOR_EN_JG,        { -1690, -133,    0 }, { 0, 0x4000, 0 }, 0x0000 },
    { ACTOR_OBJ_SYOKUDAI, { -1505, -134, -140 }, { 0,      0, 0 }, 0x2400 },
    { ACTOR_OBJ_SYOKUDAI, { -1505, -134,  125 }, { 0,      0, 0 }, 0x2400 },
    { ACTOR_OBJ_TSUBO,    { -1568, -134, -172 }, { 0,      0, 0 }, 0x5701 }, // Collect: 2B
    { ACTOR_OBJ_TSUBO,    { -1624, -134, -172 }, { 0,      0, 0 }, 0x5901 }, // Collect: 2C
    { ACTOR_OBJ_TSUBO,    { -1680, -134, -172 }, { 0,      0, 0 }, 0x5B01 }, // Collect: 2D
};

RoomShapeCullable goron_shrine_room_1RoomShapeCullable_0000F0 = { 
    2, 18,
    goron_shrine_room_1RoomShapeCullableEntry_0000FC,
    goron_shrine_room_1RoomShapeCullableEntry_0000FC +
    ARRAY_COUNTU(goron_shrine_room_1RoomShapeCullableEntry_0000FC)
};

RoomShapeCullableEntry goron_shrine_room_1RoomShapeCullableEntry_0000FC[18] = {
    { {  -1802,   -124,    -13 },     92, goron_shrine_room_1DL_0011A0, NULL },
    { {  -1575,     27,     -8 },    254, NULL, goron_shrine_room_1DL_006C78 },
    { {  -1481,   -134,      0 },    254, goron_shrine_room_1DL_002400, NULL },
    { {  -1641,     58,     -6 },    242, goron_shrine_room_1DL_0025D8, NULL },
    { {  -1654,     28,     -9 },    238, goron_shrine_room_1DL_0051B0, NULL },
    { {  -1641,     15,     -8 },    280, goron_shrine_room_1DL_0018F0, NULL },
    { {  -1442,    -32,     -1 },     78, goron_shrine_room_1DL_004E50, NULL },
    { {  -1641,   -124,     -8 },    284, goron_shrine_room_1DL_000FA0, NULL },
    { {  -1651,     32,     -8 },    336, goron_shrine_room_1DL_000830, NULL },
    { {  -1641,    132,     -8 },    292, goron_shrine_room_1DL_000B60, NULL },
    { {  -1341,    -74,      0 },    140, goron_shrine_room_1DL_000D60, NULL },
    { {  -1612,   -120,    164 },     94, goron_shrine_room_1DL_0044C8, NULL },
    { {  -1674,   -114,    151 },     14, goron_shrine_room_1DL_004A48, NULL },
    { {  -1630,   -127,    150 },     10, goron_shrine_room_1DL_003EC0, NULL },
    { {  -1861,    138,    -11 },     42, goron_shrine_room_1DL_004C70, NULL },
    { {  -1642,     28,    -20 },     44, goron_shrine_room_1DL_0020B8, NULL },
    { {  -1633,   -101,    160 },    102, goron_shrine_room_1DL_0033E0, goron_shrine_room_1DL_007040 },
    { {  -1640,     85,     -7 },    268, goron_shrine_room_1DL_005598, NULL },
};

s32 goron_shrine_room_1_terminatorMaybe_00021C = { 0x01000000 };

/*SceneCmd goron_shrine_room_1Set_cleansed[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&goron_shrine_room_1RoomShapeCullable_0000F0),
    SCENE_CMD_OBJECT_LIST(3, goron_shrine_room_1ObjectList_cleansed),
    SCENE_CMD_ACTOR_LIST(5, goron_shrine_room_1ActorEntry_cleansed),
    SCENE_CMD_END(),
};

s16 goron_shrine_room_1ObjectList_cleansed[] = {
    OBJECT_OF1D_MAP,
    OBJECT_SYOKUDAI,
  //OBJECT_OBJ_CHAN,
    OBJECT_TSUBO,
  //OBJECT_JG,
  //OBJECT_TAISOU,
};

ActorEntry goron_shrine_room_1ActorEntry_cleansed[] = {
    { ACTOR_OBJ_SYOKUDAI, { -1505, -134, -140 }, { 0, 0x2D, 0 }, 0x0400 },
    { ACTOR_OBJ_SYOKUDAI, { -1505, -134,  125 }, { 0, 0x2D, 0 }, 0x0400 },
    { ACTOR_OBJ_TSUBO,    { -1568, -134, -172 }, { 0,    0, 0 }, 0xC119 },
    { ACTOR_OBJ_TSUBO,    { -1624, -134, -172 }, { 0,    0, 0 }, 0xC319 },
    { ACTOR_OBJ_TSUBO,    { -1680, -134, -172 }, { 0,    0, 0 }, 0xC50F },
};*/

Vtx goron_shrine_room_1Vtx_0002D0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_0002D0.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_0009E0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_0009E0.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_000C20[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_000C20.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_000E40[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_000E40.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_001060[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_001060.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_001280[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_001280.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_001B18[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_001B18.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_002300[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_002300.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_0024D8[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_0024D8.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_0026B0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_0026B0.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_003A80[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_003A80.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_003FE8[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_003FE8.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_004608[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_004608.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_004B70[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_004B70.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_004D50[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_004D50.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_004F30[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_004F30.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_005318[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_005318.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_006B38[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_006B38.vtx.inc"
};

Vtx goron_shrine_room_1Vtx_006DC0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Vtx_006DC0.vtx.inc"
};

u64 goron_shrine_room_1Tex_005730[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Tex_005730.i4.inc.c"
};

u64 goron_shrine_room_1Tex_005930[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Tex_005930.rgba16.inc.c"
};

u64 goron_shrine_room_1Tex_006130[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Tex_006130.ci8.inc.c"
};

u64 goron_shrine_room_1Tex_006330[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Tex_006330.ci8.inc.c"
};

u64 goron_shrine_room_1Tex_006730[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Tex_006730.ci8.inc.c"
};

u64 goron_shrine_room_1Tex_007170[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_1Tex_007170.ci8.inc.c"
};

Gfx goron_shrine_room_1DL_000830[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_0002D0[78], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_sceneTex_006BC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(goron_shrine_sceneTex_008BC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_0002D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 4, 0),
    gsSP2Triangles(6, 7, 4, 0, 1, 8, 9, 0),
    gsSP2Triangles(1, 9, 2, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 7, 21, 0),
    gsSP2Triangles(20, 4, 7, 0, 7, 16, 22, 0),
    gsSP2Triangles(7, 22, 21, 0, 16, 23, 22, 0),
    gsSP2Triangles(16, 18, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_0002D0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 28, 30, 29, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_0002D0[63], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(11, 3, 12, 0, 11, 12, 8, 0),
    gsSP2Triangles(3, 5, 12, 0, 7, 13, 10, 0),
    gsSP2Triangles(7, 14, 0, 0, 7, 0, 13, 0),
    gsSP1Triangle(14, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_000B60[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_0009E0[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C7C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_0009E0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 4, 7, 0, 14, 7, 15, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_000D60[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_000C20[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_sceneTex_006BC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(goron_shrine_sceneTex_0083C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_000C20, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_000FA0[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_000E40[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_0083C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_000E40, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 5, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(11, 10, 8, 0, 11, 8, 4, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0011A0[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_001060[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_0073C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(goron_shrine_sceneTex_0093C0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_001060, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0018F0[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_001280[95], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_009BC0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_001280, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 1, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 10, 8, 2, 0),
    gsSP2Triangles(2, 11, 0, 0, 12, 11, 2, 0),
    gsSP2Triangles(13, 14, 4, 0, 13, 4, 3, 0),
    gsSP2Triangles(6, 5, 15, 0, 6, 15, 16, 0),
    gsSP2Triangles(16, 15, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 21, 23, 0, 22, 23, 24, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_room_1Tex_005930, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_1Vtx_001280[25], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 27, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_001280[57], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 26, 23, 22, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_001280[87], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0020B8[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_001B18[82], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_001B18, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_001B18[32], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_1Tex_006730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_1Vtx_001B18[51], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 0, 0, 11, 12, 3, 0),
    gsSP2Triangles(11, 3, 0, 0, 12, 13, 5, 0),
    gsSP2Triangles(12, 5, 3, 0, 8, 14, 15, 0),
    gsSP2Triangles(8, 15, 9, 0, 16, 11, 10, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 11, 0),
    gsSP2Triangles(17, 18, 13, 0, 17, 13, 12, 0),
    gsSP2Triangles(14, 19, 20, 0, 14, 20, 15, 0),
    gsSP2Triangles(21, 22, 16, 0, 22, 23, 17, 0),
    gsSP2Triangles(22, 17, 16, 0, 23, 24, 18, 0),
    gsSP2Triangles(23, 18, 17, 0, 9, 15, 23, 0),
    gsSP2Triangles(9, 23, 22, 0, 25, 8, 7, 0),
    gsSP2Triangles(25, 26, 14, 0, 25, 14, 8, 0),
    gsSP2Triangles(26, 27, 19, 0, 26, 19, 14, 0),
    gsSP2Triangles(15, 20, 24, 0, 15, 24, 23, 0),
    gsSP2Triangles(2, 1, 28, 0, 1, 4, 29, 0),
    gsSP2Triangles(1, 29, 28, 0, 4, 6, 30, 0),
    gsSP2Triangles(4, 30, 29, 0, 9, 22, 21, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_002400[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_002300[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00BBC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_002300, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0025D8[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_0024D8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_0024D8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0033E0[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[203], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_0083C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_0026B0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_007BC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[6], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(goron_shrine_room_1Tex_005930, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[14], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 18, 0, 21, 3, 22, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 0, 3, 0),
    gsSP2Triangles(24, 25, 5, 0, 24, 5, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 69, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[40], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 69, 180, 255, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[64], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 96, 255, 96, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[80], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[96], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 202, 124, 254, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[108], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 254, 150, 124, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[158], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[161], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(7, 6, 21, 0, 7, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_0026B0[191], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_003EC0[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_003A80[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_008BC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsDPLoadMultiBlock(goron_shrine_sceneTex_008BC0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_003A80, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_003A80[30], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0044C8[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_003FE8[70], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x7D, 155, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_room_1Tex_005730, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsDPLoadMultiBlock_4b(goron_shrine_room_1Tex_005730, 0x0000, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_003FE8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_003FE8[10], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_003FE8[40], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_004A48[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_004608[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0x1770, 0x1770, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 55, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_room_1Tex_005730, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsDPLoadMultiBlock_4b(goron_shrine_room_1Tex_005730, 0x0000, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_004608, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_1Vtx_004608[30], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_004C70[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_004B70[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00A3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_004B70, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_004E50[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_004D50[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00B3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_004D50, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_0051B0[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_004F30[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_1Tex_006130, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_004F30, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 12, 13, 0, 14, 13, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00A7C0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_1Vtx_004F30[16], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_005598[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_005318[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_1Tex_006330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_005318, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_006C78[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_006B38[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_1Tex_007170, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 127),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_006B38, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_sceneTex_00AFC0, G_IM_FMT_IA, 32, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_1Vtx_006B38[4], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_1DL_007040[] = {
    gsSPVertex(&goron_shrine_room_1Vtx_006DC0[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00A7C0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 106, 118, 47, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_1Vtx_006DC0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(0, 6, 5, 0, 0, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 18, 0, 20, 21, 18, 0),
    gsSP2Triangles(21, 22, 18, 0, 22, 23, 18, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
    gsSP2Triangles(28, 27, 26, 0, 29, 28, 26, 0),
    gsSP2Triangles(30, 29, 26, 0, 31, 30, 26, 0),
    gsSPEndDisplayList(),
};
