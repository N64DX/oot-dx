#include "oceanside_spider_house_scene.h"
#include "oceanside_spider_house_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd oceanside_spider_house_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&oceanside_spider_house_room_0RoomShapeCullable_000160),
    SCENE_CMD_OBJECT_LIST(8, oceanside_spider_house_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(11, oceanside_spider_house_room_0ActorEntry_00005C),
    SCENE_CMD_END(),
};

s16 oceanside_spider_house_room_0ObjectList_000040[] = {
  //OBJECT_KINSTA2_OBJ,
    OBJECT_ST,
    OBJECT_KIBAKO2,
    OBJECT_BOX,
  //OBJECT_SPDWEB,
  //OBJECT_SPIDERTENT,
    OBJECT_MKK,
    OBJECT_SYOKUDAI,
  //OBJECT_KIN2_OBJ,
    OBJECT_SKB,
    OBJECT_D_HSBLOCK,
    OBJECT_DEKUBABA,
  //OBJECT_STH,
};

ActorEntry oceanside_spider_house_room_0ActorEntry_00005C[] = {
    { ACTOR_EN_SW,            {   30, 325, -390 }, { 0xB4,  0xB4,    0, }, 0x0433 },
    { ACTOR_EN_SW,            {  -40, 450, -120 }, { 0xB4,  0x5A,    0, }, 0x0637 },
    { ACTOR_EN_SW,            { -122, 570, -878 }, { 0x95,     0,    0, }, 0xFF3F },
    { ACTOR_OBJ_TSUBO,        { -195, 180, -673 }, {    0,     0,    0, }, 0x5A0A },
    { ACTOR_OBJ_TSUBO,        { -255, 180, -735 }, {    0,     0,    0, }, 0x5C0E },
    { ACTOR_OBJ_TSUBO,        {  190, 180, -672 }, {    0,     0,    0, }, 0x601E },
    { ACTOR_OBJ_TSUBO,        {  252, 180, -732 }, {    0,     0,    0, }, 0x621E },
    { ACTOR_OBJ_SYOKUDAI,     {  255, 180, -855 }, {    0,     0,    0, }, 0x287F },
    { ACTOR_OBJ_SYOKUDAI,     { -255, 180, -855 }, {    0,     0,    0, }, 0x287F },
    { ACTOR_OBJ_HSBLOCK,      {    1, 475, -634 }, { 0x2A,  0xB4,    0, }, 0x0002 },
    { ACTOR_OBJ_HSBLOCK,      {    0, 329, -969 }, {    0,     0,    0, }, 0x0002 },
  //{ ACTOR_EN_STH,           {    1, 540,  476 }, {    0,  0xB4,    0, }, 0xFE04 },
  //{ ACTOR_EN_STH,           { -217, 180, -793 }, {    0,  0xF2,    0, }, 0xFE05 },
  //{ ACTOR_BG_SPDWEB,        {    4, 400, -909 }, { 0x35, 0x123, 0xFF, }, 0x0A01 },
  //{ ACTOR_BG_SPDWEB,        { -141, 450, -906 }, { 0x64, 0x123, 0xFF, }, 0x0B01 },
  //{ ACTOR_BG_KIN2_BOMBWALL, {    0, 540,  170 }, {    0,     0,    0, }, 0x0019 },
};

RoomShapeCullable oceanside_spider_house_room_0RoomShapeCullable_000160 = { 
    2, 17,
    oceanside_spider_house_room_0RoomShapeCullableEntry_00016C,
    oceanside_spider_house_room_0RoomShapeCullableEntry_00016C + ARRAY_COUNTU(oceanside_spider_house_room_0RoomShapeCullableEntry_00016C)
};

RoomShapeCullableEntry oceanside_spider_house_room_0RoomShapeCullableEntry_00016C[17] = {
    { {      0,    180,   -775 },    310, oceanside_spider_house_room_0DL_0022C0, NULL },
    { {      0,    420,   -770 },    394, oceanside_spider_house_room_0DL_000B28, NULL },
    { {      0,    590,   1040 },     60, oceanside_spider_house_room_0DL_0030F0, NULL },
    { {      0,    237,   -985 },     76, oceanside_spider_house_room_0DL_002F00, NULL },
    { {      0,    360,   -160 },    850, oceanside_spider_house_room_0DL_001270, NULL },
    { {      0,    180,   -770 },    214, oceanside_spider_house_room_0DL_003348, NULL },
    { {      0,    590,    860 },   -190, oceanside_spider_house_room_0DL_0038C8, NULL },
    { {      0,    381,   -970 },    -38, oceanside_spider_house_room_0DL_003A68, NULL },
    { {      0,    420,   -201 },    446, oceanside_spider_house_room_0DL_002AD0, NULL },
    { {      0,    360,   -200 },   -416, oceanside_spider_house_room_0DL_003C48, NULL },
    { {      0,    225,   -862 },    252, oceanside_spider_house_room_0DL_003648, NULL },
    { {      0,    328,   -770 },   -316, oceanside_spider_house_room_0DL_004128, NULL },
    { {      0,    720,    410 },    300, oceanside_spider_house_room_0DL_000360, NULL },
    { {      0,    622,    845 },    226, oceanside_spider_house_room_0DL_001FD8, NULL },
    { {      0,    300,   -970 },    218, oceanside_spider_house_room_0DL_000EE0, NULL },
    { {      0,    630,    425 },    326, oceanside_spider_house_room_0DL_0018D8, NULL },
    { {      0,    381,   -960 },     38, oceanside_spider_house_room_0DL_0024A8, NULL },
};

s32 oceanside_spider_house_room_0_terminatorMaybe_00027C = { 0x01000000 };

Vtx oceanside_spider_house_room_0Vtx_000280[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_000280.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_000448[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_000448.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_000D40[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_000D40.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_000FF0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_000FF0.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_0013B8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_0013B8.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_001A68[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_001A68.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_002160[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_002160.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_0023B8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_0023B8.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_002590[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_002590.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_002C40[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_002C40.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_003030[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_003030.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_0031C8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_0031C8.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_003448[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_003448.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_003748[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_003748.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_003988[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_003988.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_003B48[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_003B48.vtx.inc"
};

Vtx oceanside_spider_house_room_0Vtx_003D28[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Vtx_003D28.vtx.inc"
};

u64 oceanside_spider_house_room_0Tex_004318[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_004318.ia8.inc.c"
};

u64 oceanside_spider_house_room_0Tex_004B18[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_004B18.rgba16.inc.c"
};

u64 oceanside_spider_house_room_0Tex_005318[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_005318.ia8.inc.c"
};

u64 oceanside_spider_house_room_0Tex_005518[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_005518.rgba16.inc.c"
};

u64 oceanside_spider_house_room_0Tex_005D18[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_005D18.ia8.inc.c"
};

u64 oceanside_spider_house_room_0Tex_006518[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_006518.ci8.inc.c"
};

u64 oceanside_spider_house_room_0Tex_006618[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_0Tex_006618.ia16.inc.c"
};

Gfx oceanside_spider_house_room_0DL_000360[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000280[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 55, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00C6C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 14),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00B6C0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_000280, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 1, 0, 5, 1, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_000B28[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000448[102], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00D8C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_000448, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 8, 11, 0, 14, 11, 15, 0),
    gsSP2Triangles(11, 12, 15, 0, 12, 16, 15, 0),
    gsSP2Triangles(9, 17, 18, 0, 9, 18, 10, 0),
    gsSP2Triangles(18, 19, 10, 0, 19, 13, 10, 0),
    gsSP2Triangles(20, 0, 6, 0, 20, 6, 21, 0),
    gsSP2Triangles(5, 21, 6, 0, 22, 1, 0, 0),
    gsSP2Triangles(22, 0, 20, 0, 23, 24, 20, 0),
    gsSP2Triangles(23, 20, 21, 0, 21, 25, 23, 0),
    gsSP2Triangles(25, 21, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 30, 31, 0, 26, 21, 5, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000448[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 0, 5, 0),
    gsSP2Triangles(1, 5, 6, 0, 4, 1, 6, 0),
    gsSP2Triangles(6, 5, 7, 0, 4, 6, 8, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 14, 0),
    gsSP2Triangles(17, 14, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 19, 0),
    gsSP2Triangles(23, 19, 22, 0, 15, 14, 22, 0),
    gsSP2Triangles(15, 22, 21, 0, 14, 18, 23, 0),
    gsSP2Triangles(14, 23, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 25, 28, 0),
    gsSP1Triangle(29, 30, 25, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000448[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 6, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 12, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 21, 18, 22, 0),
    gsSP2Triangles(17, 23, 18, 0, 18, 23, 22, 0),
    gsSP2Triangles(24, 1, 0, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 5, 1, 0, 26, 29, 30, 0),
    gsSP2Triangles(28, 1, 24, 0, 30, 27, 26, 0),
    gsSP2Triangles(28, 29, 5, 0, 28, 30, 29, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000448[94], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_000EE0[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000D40[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00C6C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_000D40, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 6, 9, 0),
    gsSP2Triangles(6, 5, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 2, 0, 13, 0, 2, 0),
    gsSP2Triangles(14, 15, 2, 0, 1, 14, 2, 0),
    gsSP2Triangles(6, 16, 17, 0, 6, 17, 4, 0),
    gsSP2Triangles(12, 11, 8, 0, 12, 8, 10, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_001270[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_000FF0[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00CEC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00AEC0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_000FF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 3, 5, 0, 8, 5, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 14, 0, 16, 14, 13, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 16, 0, 24, 16, 13, 0),
    gsSP2Triangles(19, 26, 27, 0, 19, 27, 13, 0),
    gsSP2Triangles(24, 13, 27, 0, 28, 10, 29, 0),
    gsSP2Triangles(28, 29, 30, 0, 7, 5, 28, 0),
    gsSP2Triangles(7, 28, 30, 0, 30, 29, 9, 0),
    gsSP2Triangles(30, 9, 31, 0, 2, 7, 30, 0),
    gsSP1Triangle(2, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_0018D8[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_0013B8[74], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00C6C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00B6C0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_0013B8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 2, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 5, 9, 0),
    gsSP2Triangles(4, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 11, 15, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 17, 0),
    gsSP2Triangles(20, 6, 8, 0, 20, 8, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_0013B8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_0013B8[64], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_001FD8[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_001A68[79], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_0Tex_004B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00AEC0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_001A68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_001A68[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 8, 0, 11, 8, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 24, 18, 26, 0),
    gsSP2Triangles(24, 26, 25, 0, 18, 20, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_001A68[63], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_0022C0[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_002160[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xE5, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00D8C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_002160, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 3, 2, 0, 7, 2, 8, 0),
    gsSP2Triangles(4, 6, 10, 0, 4, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_0024A8[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_0023B8[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_0023B8, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 2, 4, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 0, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_002AD0[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_002590[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00D8C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_002590, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 19, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 7, 0, 25, 7, 6, 0),
    gsSP2Triangles(12, 11, 27, 0, 12, 27, 28, 0),
    gsSP2Triangles(17, 16, 29, 0, 17, 29, 30, 0),
    gsSP1Triangle(20, 19, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_002590[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 2, 1, 18, 0),
    gsSP2Triangles(2, 18, 19, 0, 20, 21, 4, 0),
    gsSP2Triangles(20, 4, 3, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(26, 28, 29, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_002590[62], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_002F00[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_002C40[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_002C40, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 18, 0, 22, 18, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 24, 0, 28, 24, 27, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_002C40[30], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_0030F0[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003030[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_room_0Tex_006518, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_003030, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_003348[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_0031C8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_0031C8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 3, 2, 0, 10, 2, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 5, 4, 0, 13, 4, 14, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_003648[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003448[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_0Tex_005D18, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_room_0Tex_005518, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_003448, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_0038C8[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003748[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_0Tex_006618, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 229),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_003748, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_003A68[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003988[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 0, 100),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_003988, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_003C48[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003B48[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_0Tex_005318, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, 14, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00D8C0, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_003B48, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_0DL_004128[] = {
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003D28[56], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_0Tex_004318, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00C6C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_0Vtx_003D28, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 16, 0),
    gsSP2Triangles(18, 11, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 27, 20, 26, 0),
    gsSP2Triangles(20, 22, 26, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_0Vtx_003D28[32], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 6, 11, 7, 0),
    gsSP2Triangles(6, 9, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSPEndDisplayList(),
};
