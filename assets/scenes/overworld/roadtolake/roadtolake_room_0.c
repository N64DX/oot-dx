#include "roadtolake_scene.h"
#include "roadtolake_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd roadtolake_room_0Commands[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(roadtolake_room_0AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_UNK_STRETCH_1, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_WIND_SETTINGS(80, 80, 80, 0),
    SCENE_CMD_ROOM_SHAPE(&roadtolake_room_0RoomShapeCullable_000370),
    SCENE_CMD_OBJECT_LIST(4, roadtolake_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(22, roadtolake_room_0ActorEntry_00005C),
    SCENE_CMD_END(),
};

SceneCmd* roadtolake_room_0AlternateHeaders[] = {
    NULL,
    roadtolake_room_0Set_timeskip,
    NULL,
};

s16 roadtolake_room_0ObjectList_000040[] = {
    OBJECT_FIREFLY,
    OBJECT_WF,
    OBJECT_DEKUBABA,
    OBJECT_WOOD02,
};

ActorEntry roadtolake_room_0ActorEntry_00005C[] = {
    { ACTOR_EN_FIREFLY,        {   2072,     22,   2551 }, { 0, 0,      0 }, 0x0002 },
    { ACTOR_EN_FIREFLY,        {    383,    160,   2059 }, { 0, 0x5A00, 0 }, 0x0002 },
    { ACTOR_EN_FIREFLY,        {    426,     63,   2066 }, { 0, 0x2180, 0 }, 0x0002 },
    { ACTOR_EN_DEKUBABA,       {   2465,   -182,   2480 }, { 0, 0,      0 }, 0x0000 },
    { ACTOR_EN_DEKUBABA,       {   2520,   -182,   2874 }, { 0, 0,      0 }, 0x0000 },
    { ACTOR_EN_ITEM00,         {    600,   -236,   3456 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    544,   -224,   2616 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    720,   -181,   1656 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    176,   -178,    532 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    392,   -181,   1252 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {   1145,   -182,   2289 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {   1624,   -182,   2531 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {   2206,   -182,   2721 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_WOOD02,         {   1674,   -182,   2322 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   1264,   -182,   2146 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   1898,   -182,   2583 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   2323,   -182,   2657 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   1443,   -182,   2342 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   2166,   -182,   2491 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_ITEM00,         {    401,    143,   2068 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_KUSA,           {   2734,    -28,   3399 }, { 0, 0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,           {   2757,    -28,   3443 }, { 0, 0,      0 }, 0x0200 },
};

SceneCmd roadtolake_room_0Set_timeskip[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_UNK_STRETCH_1, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_WIND_SETTINGS(80, 80, 80, 0),
    SCENE_CMD_ROOM_SHAPE(&roadtolake_room_0RoomShapeCullable_000370),
    SCENE_CMD_OBJECT_LIST(5, roadtolake_room_0ObjectList_timeskip),
    SCENE_CMD_ACTOR_LIST(30, roadtolake_room_0ActorEntry_timeskip),
    SCENE_CMD_END(),
};

s16 roadtolake_room_0ObjectList_timeskip[] = {
    OBJECT_HORSE,
    OBJECT_FIREFLY,
    OBJECT_WF,
    OBJECT_DEKUBABA,
    OBJECT_WOOD02,
};

ActorEntry roadtolake_room_0ActorEntry_timeskip[] = {
    { ACTOR_EN_WF,             {    251,   -195,   2452 }, { 0, 0,      0 }, 0xFF00 },
    { ACTOR_EN_WF,             {    221,   -182,   1529 }, { 0, 0,      0 }, 0xFF00 },
    { ACTOR_EN_WF,             {    648,   -236,   3123 }, { 0, 0,      0 }, 0xFF00 },
    { ACTOR_EN_WF,             {    330,   -181,    916 }, { 0, 0,      0 }, 0xFF00 },
    { ACTOR_EN_WF,             {    732,   -181,   2093 }, { 0, 0,      0 }, 0xFF00 },
    { ACTOR_EN_FIREFLY,        {   2072,     22,   2551 }, { 0, 0,      0 }, 0x0002 },
    { ACTOR_EN_FIREFLY,        {    383,    160,   2059 }, { 0, 0x5A00, 0 }, 0x0002 },
    { ACTOR_EN_FIREFLY,        {    426,     63,   2066 }, { 0, 0x2180, 0 }, 0x0002 },
    { ACTOR_EN_DEKUBABA,       {   2465,   -182,   2480 }, { 0, 0,      0 }, 0x0000 },
    { ACTOR_EN_DEKUBABA,       {   2520,   -182,   2874 }, { 0, 0,      0 }, 0x0000 },
    { ACTOR_EN_ITEM00,         {    600,   -236,   3456 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    544,   -224,   2616 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    720,   -181,   1656 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    176,   -178,    532 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {    392,   -181,   1252 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {   1145,   -182,   2289 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {   1624,   -182,   2531 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_ITEM00,         {   2206,   -182,   2721 }, { 0, 0,      0 }, 0x3F00 },
    { ACTOR_EN_WOOD02,         {   1674,   -182,   2322 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   1264,   -182,   2146 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   1898,   -182,   2583 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   2323,   -182,   2657 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   1443,   -182,   2342 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_WOOD02,         {   2166,   -182,   2491 }, { 0, 0x5A00, 0 }, 0x0200 },
    { ACTOR_EN_ITEM00,         {    401,    143,   2068 }, { 0, 0x5A00, 0 }, 0x0106 },
    { ACTOR_DOOR_ANA,          {    104,   -182,   2202 }, { 0, 0xB80, 15 }, 0x0000 },
    { ACTOR_OBJ_MURE2,         {    104,   -182,   2202 }, { 0, 0xB80,  0 }, 0x0202 },
    { ACTOR_EN_KUSA,           {   2734,    -28,   3399 }, { 0, 0,      0 }, 0x0200 },
    { ACTOR_EN_KUSA,           {   2757,    -28,   3443 }, { 0, 0,      0 }, 0x0200 },
    { ACTOR_EN_A_OBJ,          {    980,   -182,   2136 }, { 0, 0xEC80, 0 }, 0x2C0A },
};

RoomShapeCullable roadtolake_room_0RoomShapeCullable_000370 = { 
    2, 16,
    roadtolake_room_0RoomShapeCullableEntry_00037C,
    roadtolake_room_0RoomShapeCullableEntry_00037C + ARRAY_COUNTU(roadtolake_room_0RoomShapeCullableEntry_00037C)
};

RoomShapeCullableEntry roadtolake_room_0RoomShapeCullableEntry_00037C[16] = {
    { {    303,    -47,   1811 },   2044, roadtolake_room_0DL_0052B0, NULL },
    { {   2878,    -32,   3228 },    350, roadtolake_room_0DL_003B78, NULL },
    { {   1434,     37,   1811 },   3026, roadtolake_room_0DL_000CF8, NULL },
    { {   1371,    -69,   1434 },   2550, roadtolake_room_0DL_001678, NULL },
    { {    242,   -156,   3499 },    946, roadtolake_room_0DL_001A68, NULL },
    { {    346,   -165,   2853 },    964, roadtolake_room_0DL_005460, NULL },
    { {   1119,   -141,   2062 },   1910, NULL, roadtolake_room_0DL_005FF0 },
    { {    381,      5,   2054 },    220, roadtolake_room_0DL_0046E8, NULL },
    { {    368,    217,   2039 },    428, roadtolake_room_0DL_003FC0, NULL },
    { {    413,   -210,   1849 },   1174, roadtolake_room_0DL_005638, NULL },
    { {    519,   -210,   1809 },    962, roadtolake_room_0DL_005850, NULL },
    { {   2766,    -97,   2951 },    370, roadtolake_room_0DL_0023B0, NULL },
    { {    415,    -22,   2065 },    168, roadtolake_room_0DL_003CE0, NULL },
    { {   2727,   -190,   2124 },    542, NULL, roadtolake_room_0DL_005AA8 },
    { {   1091,    165,   1816 },   2886, roadtolake_room_0DL_004F78, NULL },
    { {    384,    143,   2057 },     44, roadtolake_room_0DL_001C38, NULL },
};

s32 roadtolake_room_0_terminatorMaybe_00047C = { 0x01000000 };

Vtx roadtolake_room_0Vtx_000488[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_000488.vtx.inc"
};

Gfx roadtolake_room_0DL_000CF8[] = {
    gsSPVertex(&roadtolake_room_0Vtx_000488[127], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_08_Tex_002800, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_001800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_000488, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(1, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 16, 15, 0, 13, 17, 16, 0),
    gsSP2Triangles(18, 19, 0, 0, 19, 1, 0, 0),
    gsSP2Triangles(19, 20, 1, 0, 20, 6, 1, 0),
    gsSP2Triangles(3, 2, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(2, 25, 26, 0, 2, 26, 21, 0),
    gsSP2Triangles(2, 5, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 21, 0, 29, 30, 22, 0),
    gsSP1Triangle(29, 22, 31, 0),
    gsSPVertex(&roadtolake_room_0Vtx_000488[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(2, 1, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 8, 0, 12, 13, 8, 0),
    gsSP2Triangles(8, 14, 15, 0, 8, 13, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
    gsSP2Triangles(24, 25, 16, 0, 25, 17, 16, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 30, 0),
    gsSP1Triangle(29, 31, 26, 0),
    gsSPVertex(&roadtolake_room_0Vtx_000488[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(4, 5, 1, 0, 6, 0, 7, 0),
    gsSP2Triangles(0, 2, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 10, 15, 11, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 13, 11, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(26, 25, 27, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 30, 0, 27, 30, 28, 0),
    gsSP1Triangle(29, 31, 30, 0),
    gsSPVertex(&roadtolake_room_0Vtx_000488[96], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 6, 0, 4, 9, 10, 0),
    gsSP2Triangles(4, 10, 5, 0, 10, 7, 5, 0),
    gsSP2Triangles(7, 11, 12, 0, 7, 12, 8, 0),
    gsSP2Triangles(11, 13, 12, 0, 11, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 17, 0, 16, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_000F48[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_000F48.vtx.inc"
};

Gfx roadtolake_room_0DL_001678[] = {
    gsSPVertex(&roadtolake_room_0Vtx_000F48[107], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x46, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_000F48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(8, 11, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 25, 0, 26, 28, 29, 0),
    gsSP2Triangles(26, 29, 27, 0, 1, 30, 31, 0),
    gsSPVertex(&roadtolake_room_0Vtx_000F48[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(6, 9, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 15, 13, 0, 14, 13, 16, 0),
    gsSP2Triangles(13, 17, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 22, 24, 0),
    gsSP2Triangles(22, 25, 24, 0, 26, 0, 24, 0),
    gsSP2Triangles(0, 2, 27, 0, 0, 27, 24, 0),
    gsSP2Triangles(2, 28, 27, 0, 28, 29, 27, 0),
    gsSP2Triangles(28, 18, 29, 0, 28, 30, 18, 0),
    gsSP2Triangles(30, 8, 18, 0, 8, 16, 18, 0),
    gsSP2Triangles(8, 11, 16, 0, 11, 14, 16, 0),
    gsSP2Triangles(11, 31, 14, 0, 31, 12, 14, 0),
    gsSPVertex(&roadtolake_room_0Vtx_000F48[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 6, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 23, 0, 22, 25, 24, 0),
    gsSP2Triangles(22, 26, 25, 0, 26, 27, 25, 0),
    gsSP2Triangles(27, 24, 25, 0, 27, 23, 24, 0),
    gsSP2Triangles(27, 28, 23, 0, 28, 29, 23, 0),
    gsSP2Triangles(27, 30, 28, 0, 30, 29, 28, 0),
    gsSPVertex(&roadtolake_room_0Vtx_000F48[95], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 9, 10, 8, 0),
    gsSP1Triangle(10, 11, 8, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_0018B8[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_0018B8.vtx.inc"
};

Gfx roadtolake_room_0DL_001A68[] = {
    gsSPVertex(&roadtolake_room_0Vtx_0018B8[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x50, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtolake_sceneTex_002F30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_0018B8, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 11, 9, 0, 7, 12, 11, 0),
    gsSP2Triangles(7, 13, 12, 0, 7, 6, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 13, 14, 0),
    gsSP2Triangles(16, 11, 15, 0, 11, 12, 15, 0),
    gsSP2Triangles(15, 17, 18, 0, 17, 0, 18, 0),
    gsSP1Triangle(18, 0, 3, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_001B78[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_001B78.vtx.inc"
};

Gfx roadtolake_room_0DL_001C38[] = {
    gsSPVertex(&roadtolake_room_0Vtx_001B78[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_003B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 197, 197, 159, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_001B78, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_001D08[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_001D08.vtx.inc"
};

Vtx roadtolake_room_0Vtx_001FC0[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_001FC0.vtx.inc"
};

Gfx roadtolake_room_0DL_0023B0_1[] = {
    gsSPVertex(&roadtolake_room_0Vtx_001D08[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_006730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_001D08, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 5, 3, 0),
    gsSP2Triangles(5, 6, 7, 0, 3, 5, 7, 0),
    gsSP2Triangles(7, 6, 0, 0, 7, 0, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(10, 9, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 11, 13, 15, 0),
    gsSP2Triangles(15, 14, 8, 0, 15, 8, 11, 0),
    gsSPEndDisplayList(),
};

Gfx roadtolake_room_0DL_0023B0_2[] = {
    gsSPVertex(&roadtolake_room_0Vtx_001FC0[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtolake_sceneTLUT_007930),
    gsDPLoadTextureBlock_4b(roadtolake_sceneTex_004730, G_IM_FMT_CI, 32, 128, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_001FC0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 1, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 4, 6, 0),
    gsSP2Triangles(0, 7, 8, 0, 0, 7, 9, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 14, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 18, 20, 0),
    gsSP2Triangles(17, 21, 22, 0, 17, 21, 23, 0),
    gsSP2Triangles(17, 24, 25, 0, 17, 24, 26, 0),
    gsSP2Triangles(17, 27, 28, 0, 17, 27, 29, 0),
    gsSPVertex(&roadtolake_room_0Vtx_001FC0[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx roadtolake_room_0DL_0023B0[] = {
    gsSPDisplayList(roadtolake_room_0DL_0023B0_1),
    gsSPDisplayList(roadtolake_room_0DL_0023B0_2),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_0023C8[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_0023C8.vtx.inc"
};

Vtx roadtolake_room_0Vtx_002E78[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_002E78.vtx.inc"
};

Vtx roadtolake_room_0Vtx_003410[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_003410.vtx.inc"
};

Vtx roadtolake_room_0Vtx_003698[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_003698.vtx.inc"
};

Gfx roadtolake_room_0DL_003B78_1[] = {
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[82], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_003F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 142, 152, 102, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_0023C8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_003F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[8], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_004330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[14], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_004530, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[22], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_005B30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[38], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_005B30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 152, 112, 102, 255),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[50], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_005B30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[54], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_005F30, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[58], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 8, 15, 16, 0),
    gsSP2Triangles(8, 16, 9, 0, 15, 17, 16, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 9, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&roadtolake_room_0Vtx_0023C8[78], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx roadtolake_room_0DL_003B78_2[] = {
    gsSPVertex(&roadtolake_room_0Vtx_002E78[54], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_001800, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_000000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_002E78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 7, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 8, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 13, 12, 0),
    gsSP2Triangles(16, 17, 14, 0, 16, 14, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 4, 3, 0, 19, 3, 20, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(23, 4, 19, 0, 23, 6, 4, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 0, 2, 0, 25, 2, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSP2Triangles(30, 25, 24, 0, 30, 24, 31, 0),
    gsSPVertex(&roadtolake_room_0Vtx_002E78[32], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSPVertex(&roadtolake_room_0Vtx_002E78[42], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx roadtolake_room_0DL_003B78_3[] = {
    gsSPVertex(&roadtolake_room_0Vtx_003410[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xBE, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(scene_texture_08_Tex_000000, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0x0046, 0, 0x00C2, 0x007C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_003410, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx roadtolake_room_0DL_003B78_4[] = {
    gsSPVertex(&roadtolake_room_0Vtx_003698[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_003730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_003698, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSPVertex(&roadtolake_room_0Vtx_003698[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSPEndDisplayList(),
};

Gfx roadtolake_room_0DL_003B78[] = {
    gsSPDisplayList(roadtolake_room_0DL_003B78_1),
    gsSPDisplayList(roadtolake_room_0DL_003B78_2),
    gsSPDisplayList(roadtolake_room_0DL_003B78_3),
    gsSPDisplayList(roadtolake_room_0DL_003B78_4),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_003BA0[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_003BA0.vtx.inc"
};

Gfx roadtolake_room_0DL_003CE0[] = {
    gsSPVertex(&roadtolake_room_0Vtx_003BA0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(roadtolake_sceneTLUT_007950),
    gsDPLoadTextureBlock(roadtolake_sceneTex_005730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_003BA0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_003DC0[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_003DC0.vtx.inc"
};

Gfx roadtolake_room_0DL_003FC0[] = {
    gsSPVertex(&roadtolake_room_0Vtx_003DC0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtolake_sceneTex_006830, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 197, 197, 159, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_003DC0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_004088[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_004088.vtx.inc"
};

Gfx roadtolake_room_0DL_0046E8[] = {
    gsSPVertex(&roadtolake_room_0Vtx_004088[94], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(roadtolake_sceneTex_004F30, G_IM_FMT_IA, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 197, 197, 159, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_004088, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(13, 6, 14, 0, 13, 9, 6, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 5, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&roadtolake_room_0Vtx_004088[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 10, 9, 0),
    gsSP2Triangles(9, 6, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 11, 13, 14, 0),
    gsSP1Triangle(11, 14, 16, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(17, 18, 11, 0, 17, 11, 16, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 24, 8, 5, 0),
    gsSP2Triangles(24, 5, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 29, 30, 28, 0),
    gsSP1Triangle(31, 0, 2, 0),
    gsSPVertex(&roadtolake_room_0Vtx_004088[64], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 0, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 19, 0),
    gsSP2Triangles(9, 23, 24, 0, 9, 24, 10, 0),
    gsSP2Triangles(10, 25, 26, 0, 10, 26, 1, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 18, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_004898[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_004898.vtx.inc"
};

Gfx roadtolake_room_0DL_004F78[] = {
    gsSPVertex(&roadtolake_room_0Vtx_004898[102], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_08_Tex_005000, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_006000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_004898, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&roadtolake_room_0Vtx_004898[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&roadtolake_room_0Vtx_004898[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 31, 27, 0, 30, 27, 26, 0),
    gsSPVertex(&roadtolake_room_0Vtx_004898[96], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_005170[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_005170.vtx.inc"
};

Gfx roadtolake_room_0DL_0052B0[] = {
    gsSPVertex(&roadtolake_room_0Vtx_005170[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtolake_sceneTex_007830, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_005170, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 5, 0, 1, 3, 5, 0),
    gsSP2Triangles(4, 2, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 9, 8, 10, 0),
    gsSP2Triangles(8, 11, 10, 0, 9, 10, 6, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_005370[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_005370.vtx.inc"
};

Gfx roadtolake_room_0DL_005460[] = {
    gsSPVertex(&roadtolake_room_0Vtx_005370[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x50, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtolake_sceneTex_002F30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_005370, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 6, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_005538[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_005538.vtx.inc"
};

Gfx roadtolake_room_0DL_005638[] = {
    gsSPVertex(&roadtolake_room_0Vtx_005538[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, 1, 0, TEXEL1, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 193, 193, 163, 170),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004000, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_005538, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_005710[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_005710.vtx.inc"
};

Gfx roadtolake_room_0DL_005850[] = {
    gsSPVertex(&roadtolake_room_0Vtx_005710[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, 1, 0, TEXEL1, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 193, 193, 163, 170),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_003000, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_005710, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 8, 9, 6, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_0059E8[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_0059E8.vtx.inc"
};

Gfx roadtolake_room_0DL_005AA8[] = {
    gsSPVertex(&roadtolake_room_0Vtx_0059E8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 127),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtolake_sceneTex_002730, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(roadtolake_sceneTex_002730, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_0059E8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx roadtolake_room_0Vtx_005BB0[] = {
#include "assets/scenes/overworld/roadtolake/roadtolake_room_0Vtx_005BB0.vtx.inc"
};

Gfx roadtolake_room_0DL_005FF0[] = {
    gsSPVertex(&roadtolake_room_0Vtx_005BB0[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_007000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_08_Tex_006800, 0x0100, 1, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtolake_room_0Vtx_005BB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(22, 19, 18, 0, 22, 18, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 25, 0, 28, 25, 24, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPVertex(&roadtolake_room_0Vtx_005BB0[32], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSPEndDisplayList(),
};

u64 scene_texture_08_Tex_000000[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_000000.rgba16.inc.c"
};

u64 scene_texture_08_Tex_001000[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_001000.rgba16.inc.c"
};

u64 scene_texture_08_Tex_001800[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_001800.rgba16.inc.c"
};

u64 scene_texture_08_Tex_002800[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_002800.i4.inc.c"
};

u64 scene_texture_08_Tex_003000[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_sceneTex_007050.ia8.inc.c"
};

u64 scene_texture_08_Tex_004000[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_sceneTex_006850.ia8.inc.c"
};

u64 scene_texture_08_Tex_004800[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_004800.rgba16.inc.c"
};

u64 scene_texture_08_Tex_005000[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_005000.ia4.inc.c"
};

u64 scene_texture_08_Tex_006000[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_006000.rgba16.inc.c"
};

u64 scene_texture_08_Tex_006800[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_006800.ia4.inc.c"
};

u64 scene_texture_08_Tex_007000[] = {
#include "assets/scenes/overworld/roadtolake/scene_texture_08/tex_007000.rgba16.inc.c"
};
