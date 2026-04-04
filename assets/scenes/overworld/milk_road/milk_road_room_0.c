#include "milk_road_scene.h"
#include "milk_road_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd milk_road_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&milk_road_room_0RoomShapeCullable_0001D0),
    SCENE_CMD_OBJECT_LIST(4, milk_road_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(10, milk_road_room_0ActorEntry_000058),
    SCENE_CMD_END(),
};

s16 milk_road_room_0ObjectList_000040[] = {
    OBJECT_HORSE,
    OBJECT_GS,
    OBJECT_KUSA,
    OBJECT_UMAJUMP,
};

ActorEntry milk_road_room_0ActorEntry_000058[] = {
    { ACTOR_EN_GS,           { -4467,  0, 1198 }, { 0,      0, 0 }, 0xFF21 },
    { ACTOR_EN_KUSA,         { -4700,  0, 1215 }, { 0,      0, 0 }, 0x0400 },
    { ACTOR_EN_KUSA,         { -4043,  0, 1575 }, { 0,      0, 0 }, 0x0200 },
    { ACTOR_EN_KUSA,         { -4158,  0, 1593 }, { 0,      0, 0 }, 0x0200 },
    { ACTOR_EN_KUSA,         { -4070,  0, 1620 }, { 0,      0, 0 }, 0x0200 },
    { ACTOR_EN_A_OBJ,        { -3937,  0, 1753 }, { 0, 0xD8F0, 0 }, 0x4E0A },
    { ACTOR_EN_A_OBJ,        { -5499, 68, 1612 }, { 0, 0x7530, 0 }, 0x4B0A },
    { ACTOR_EN_A_OBJ,        { -4750,  0, 1800 }, { 0, 0xA240, 0 }, 0x4D0A },
    { ACTOR_EN_A_OBJ,        { -3100,  0, 1320 }, { 0, 0xF510, 0 }, 0x4C0A },
    { ACTOR_BG_UMAJUMP,      { -4880,  0, 1800 }, { 0, 0xE4A8, 0 }, 0xFFFE },
  //{ ACTOR_OBJ_HUGEBOMBIWA, { -5837, 69, 1398 }, { 0,   0x4B, 0,}, 0x0101 },
};

RoomShapeCullable milk_road_room_0RoomShapeCullable_0001D0 = { 
    2, 10,
    milk_road_room_0RoomShapeCullableEntry_0001DC,
    milk_road_room_0RoomShapeCullableEntry_0001DC + ARRAY_COUNTU(milk_road_room_0RoomShapeCullableEntry_0001DC)
};

RoomShapeCullableEntry milk_road_room_0RoomShapeCullableEntry_0001DC[10] = {
    { {  -4133,    296,   1435 },   1340, milk_road_room_0DL_000940, NULL },
    { {  -5103,    140,   1654 },   1952, milk_road_room_0DL_001468, NULL },
    { {  -3676,     34,   1391 },   1554, milk_road_room_0DL_0018C0, NULL },
    { {  -5115,     51,   1654 },   1940, milk_road_room_0DL_001CB8, NULL },
    { {  -4492,     34,   1576 },    922, milk_road_room_0DL_002980, NULL },
    { {  -2781,     20,   1376 },    634, NULL, milk_road_room_0DL_003230 },
    { {  -3116,      0,   1200 },    140, milk_road_room_0DL_002B20, NULL },
    { {  -4874,     34,   1114 },   1762, milk_road_room_0DL_002ED0, milk_road_room_0DL_002ED0 },
    { {  -2686,    161,   1308 },    638, milk_road_room_0DL_002738, NULL },
    { {  -5103,    277,   1654 },   1954, milk_road_room_0DL_002380, NULL },
};

s32 milk_road_room_0_terminatorMaybe_00027C = { 0x01000000 };

Vtx milk_road_room_0Vtx_000280[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_000280.vtx.inc"
};

Vtx milk_road_room_0Vtx_000B68[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_000B68.vtx.inc"
};

Vtx milk_road_room_0Vtx_0016E0[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_0016E0.vtx.inc"
};

Vtx milk_road_room_0Vtx_0019D8[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_0019D8.vtx.inc"
};

Vtx milk_road_room_0Vtx_001E00[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_001E00.vtx.inc"
};

Vtx milk_road_room_0Vtx_002538[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_002538.vtx.inc"
};

Vtx milk_road_room_0Vtx_002840[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_002840.vtx.inc"
};

Vtx milk_road_room_0Vtx_002A60[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_002A60.vtx.inc"
};

Vtx milk_road_room_0Vtx_002BF0[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_002BF0.vtx.inc"
};

Vtx milk_road_room_0Vtx_003070[] = {
#include "assets/scenes/overworld/milk_road/milk_road_room_0Vtx_003070.vtx.inc"
};

static u64 scene_texture_08_Tex_000000[] = {
#include "assets/misc/scene_texture_08/tex_000000.rgba16.inc.c"
};

static u64 scene_texture_08_Tex_001000[] = {
#include "assets/misc/scene_texture_08/tex_001000.rgba16.inc.c"
};

static u64 scene_texture_08_Tex_001800[] = {
#include "assets/misc/scene_texture_08/tex_001800.rgba16.inc.c"
};

static u64 scene_texture_08_Tex_002800[] = {
#include "assets/misc/scene_texture_08/tex_002800.i4.inc.c"
};

static u64 scene_texture_08_Tex_003400[] = {
#include "assets/misc/scene_texture_08/Tex_003400.ia8.inc.c"
};

static u64 scene_texture_08_Tex_004000[] = {
#include "assets/misc/scene_texture_08/tex_004000.ia8.inc.c"
};

static u64 scene_texture_08_Tex_004800[] = {
#include "assets/misc/scene_texture_08/tex_004800.rgba16.inc.c"
};

static u64 scene_texture_08_Tex_005000[] = {
#include "assets/misc/scene_texture_08/tex_005000.ia4.inc.c"
};

static u64 scene_texture_08_Tex_006000[] = {
#include "assets/misc/scene_texture_08/tex_006000.rgba16.inc.c"
};

static u64 scene_texture_08_Tex_006800[] = {
#include "assets/misc/scene_texture_08/tex_006800.ia4.inc.c"
};

static u64 scene_texture_08_Tex_007000[] = {
#include "assets/misc/scene_texture_08/tex_007000.rgba16.inc.c"
};

Gfx milk_road_room_0DL_000940[] = {
    gsSPVertex(&milk_road_room_0Vtx_000280[100], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_08_Tex_002800, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(scene_texture_08_Tex_001800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_000280, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 8, 0),
    gsSP2Triangles(12, 6, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(9, 14, 15, 0, 9, 12, 14, 0),
    gsSP2Triangles(16, 0, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(18, 19, 1, 0, 18, 1, 0, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 18, 0, 0),
    gsSP2Triangles(21, 0, 16, 0, 19, 4, 1, 0),
    gsSP2Triangles(20, 4, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 25, 0, 26, 28, 27, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 23, 0),
    gsSPVertex(&milk_road_room_0Vtx_000280[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 6, 0),
    gsSP2Triangles(5, 7, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(8, 5, 4, 0, 8, 4, 9, 0),
    gsSP2Triangles(8, 7, 5, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 12, 0, 16, 17, 13, 0),
    gsSP2Triangles(16, 13, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 20, 23, 24, 0),
    gsSP2Triangles(20, 24, 21, 0, 15, 25, 16, 0),
    gsSP2Triangles(15, 16, 18, 0, 22, 21, 26, 0),
    gsSP2Triangles(22, 26, 27, 0, 21, 24, 28, 0),
    gsSP2Triangles(21, 28, 26, 0, 29, 19, 22, 0),
    gsSP1Triangle(29, 22, 30, 0),
    gsSPVertex(&milk_road_room_0Vtx_000280[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 0, 0),
    gsSP2Triangles(9, 0, 3, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 17, 9, 0),
    gsSP2Triangles(16, 9, 18, 0, 2, 19, 16, 0),
    gsSP2Triangles(2, 16, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 28, 26, 0),
    gsSP2Triangles(25, 29, 30, 0, 25, 30, 28, 0),
    gsSPVertex(&milk_road_room_0Vtx_000280[94], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_001468[] = {
    gsSPVertex(&milk_road_room_0Vtx_000B68[136], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(milk_road_sceneTex_0026B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_000B68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 9, 0),
    gsSP2Triangles(12, 1, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(4, 12, 14, 0, 4, 14, 15, 0),
    gsSP2Triangles(16, 17, 7, 0, 16, 7, 6, 0),
    gsSP2Triangles(18, 16, 11, 0, 16, 6, 11, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 19, 0, 23, 19, 22, 0),
    gsSP2Triangles(25, 26, 20, 0, 25, 20, 27, 0),
    gsSP2Triangles(24, 28, 25, 0, 24, 25, 27, 0),
    gsSP2Triangles(29, 30, 26, 0, 29, 26, 25, 0),
    gsSP2Triangles(28, 31, 29, 0, 28, 29, 25, 0),
    gsSPVertex(&milk_road_room_0Vtx_000B68[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 3, 0, 6, 3, 2, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 9, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(15, 11, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(14, 15, 17, 0, 14, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&milk_road_room_0Vtx_000B68[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(13, 16, 14, 0, 13, 14, 10, 0),
    gsSP2Triangles(17, 18, 15, 0, 17, 15, 14, 0),
    gsSP2Triangles(16, 19, 17, 0, 16, 17, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(22, 18, 24, 0, 22, 24, 23, 0),
    gsSP2Triangles(19, 25, 23, 0, 19, 23, 24, 0),
    gsSP2Triangles(25, 26, 20, 0, 25, 20, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&milk_road_room_0Vtx_000B68[95], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 16, 11, 14, 0),
    gsSP2Triangles(17, 18, 12, 0, 17, 12, 11, 0),
    gsSP2Triangles(16, 19, 17, 0, 16, 17, 11, 0),
    gsSP2Triangles(20, 21, 18, 0, 20, 18, 17, 0),
    gsSP2Triangles(19, 22, 20, 0, 19, 20, 17, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 27, 28, 0, 25, 28, 26, 0),
    gsSP2Triangles(24, 29, 30, 0, 24, 30, 31, 0),
    gsSPVertex(&milk_road_room_0Vtx_000B68[127], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 1, 0, 6, 1, 7, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_0018C0[] = {
    gsSPVertex(&milk_road_room_0Vtx_0016E0[22], 8, 0),
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
    gsSPVertex(milk_road_room_0Vtx_0016E0, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 9, 10, 0),
    gsSP2Triangles(5, 10, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 10, 9, 0),
    gsSP2Triangles(12, 9, 13, 0, 7, 15, 8, 0),
    gsSP2Triangles(15, 16, 8, 0, 15, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 18, 0, 19, 3, 4, 0),
    gsSP2Triangles(19, 4, 20, 0, 15, 7, 21, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_001CB8[] = {
    gsSPVertex(&milk_road_room_0Vtx_0019D8[38], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x91, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(milk_road_sceneTex_001EB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_0019D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 22, 0),
    gsSP2Triangles(25, 22, 24, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 22, 0, 27, 29, 30, 0),
    gsSP2Triangles(27, 30, 28, 0, 24, 20, 21, 0),
    gsSPVertex(&milk_road_room_0Vtx_0019D8[31], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_002380[] = {
    gsSPVertex(&milk_road_room_0Vtx_001E00[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_08_Tex_005000, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(scene_texture_08_Tex_006000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_001E00, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 26, 23, 22, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPVertex(&milk_road_room_0Vtx_001E00[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 9, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 26, 23, 22, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&milk_road_room_0Vtx_001E00[64], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_002738[] = {
    gsSPVertex(&milk_road_room_0Vtx_002538[24], 8, 0),
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
    gsSPVertex(milk_road_room_0Vtx_002538, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 6, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 0, 3, 0, 22, 3, 23, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_002980[] = {
    gsSPVertex(&milk_road_room_0Vtx_002840[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x46, 255, 255, 255, 249),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004800, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_002840, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_002B20[] = {
    gsSPVertex(&milk_road_room_0Vtx_002A60[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 1, 0, TEXEL1, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x0F, 193, 193, 163, 165),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_004000, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_002A60, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_002ED0[] = {
    gsSPVertex(&milk_road_room_0Vtx_002BF0[38], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 1, 0, TEXEL1, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x0F, 193, 193, 163, 165),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_08_Tex_003400, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_002BF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 21, 0),
    gsSP2Triangles(23, 4, 7, 0, 23, 7, 24, 0),
    gsSP2Triangles(25, 23, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 2, 29, 0),
    gsSP1Triangle(28, 30, 2, 0),
    gsSPVertex(&milk_road_room_0Vtx_002BF0[31], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPEndDisplayList(),
};

Gfx milk_road_room_0DL_003230[] = {
    gsSPVertex(&milk_road_room_0Vtx_003070[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_08_Tex_007000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(scene_texture_08_Tex_006800, 0x0100, 1, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(milk_road_room_0Vtx_003070, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSPEndDisplayList(),
};
