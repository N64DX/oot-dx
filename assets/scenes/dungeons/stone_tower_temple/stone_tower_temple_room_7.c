#include "stone_tower_temple_scene.h"
#include "stone_tower_temple_room_7.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "item.h"

SceneCmd stone_tower_temple_room_7[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_room_7RoomShapeCullable_000290),
    SCENE_CMD_OBJECT_LIST(14, stone_tower_temple_room_7ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(32, stone_tower_temple_room_7ActorEntry_000074),
    SCENE_CMD_END(),
};

s16 stone_tower_temple_room_7ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_BOX,
    OBJECT_KIBAKO2,
    OBJECT_KUSA,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_D_HSBLOCK,
    OBJECT_ICEFLOE,
  //OBJECT_SPINYROLL,
    OBJECT_NY,
  //OBJECT_WDHAND,
  //OBJECT_PR,
    OBJECT_CROW,
  //OBJECT_EG,
  //OBJECT_PP,
    OBJECT_GMO,
    OBJECT_MKK,
};

ActorEntry stone_tower_temple_room_7ActorEntry_000074[] = {
    { ACTOR_MIR_RAY3,        { 1290,  -20, -1770 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_MKK,          { 1020,  -20, -2220 }, {    0,      0,    0 }, 0xFF00 },
    { ACTOR_EN_MKK,          { 1560,  -20, -2700 }, {    0,      0,    0 }, 0xFF00 },
    { ACTOR_EN_MKK,          { 1560,  -20, -2220 }, { 0x8C,      0,    0 }, 0x6404 },
    { ACTOR_EN_MKK,          { 1020,  -20, -2700 }, { 0x3C,      0,    0 }, 0x7804 },
    { ACTOR_OBJ_TSUBO,       { 1230,  -20, -1770 }, {    0,      0,    0 }, 0x018A },
    { ACTOR_OBJ_TSUBO,       { 1350,  -20, -1770 }, {    0,      0,    0 }, 0x018C },
  //{ ACTOR_BG_IKANA_DHARMA, { 1290,  -20, -2040 }, {    0,      0,    0 }, 0x6602 },
    { ACTOR_BG_IKANA_MIRROR, {  960,  -20, -2490 }, {    0, 0x4000,    0 }, 0x0000 },
    { ACTOR_BG_IKANA_MIRROR, { 1230,  -20, -2370 }, {    0, 0xE000,    0 }, 0x0000 },
    { ACTOR_BG_IKANA_MIRROR, { 1350,  -20, -2370 }, {    0, 0x2000,    0 }, 0x0000 },
    { ACTOR_OBJ_LIGHTSWITCH, { 1510,   90, -2115 }, {    0, 0xC000,    0 }, 0x1200 },
    { ACTOR_OBJ_LIGHTSWITCH, { 1070,   90, -2115 }, {    0, 0x4000,    0 }, 0x1030 },
    { ACTOR_OBJ_LIGHTSWITCH, { 1070,   90, -2040 }, {    0, 0x4000,    0 }, 0x1130 },
    { ACTOR_OBJ_LIGHTSWITCH, { 1070,   90, -1965 }, {    0, 0x4000,    0 }, 0x1330 },
    { ACTOR_OBJ_LIGHTSWITCH, { 1510,   90, -2040 }, {    0, 0xC000,    0 }, 0x1430 },
    { ACTOR_OBJ_LIGHTSWITCH, { 1510,   90, -1965 }, {    0, 0xC000,    0 }, 0x1530 },
    { ACTOR_OBJ_LIGHTBLOCK,  { 1720,  -20, -2430 }, {    0,      0,    6 }, 0x0101 }, // Switch: 01
    { ACTOR_OBJ_LIGHTBLOCK,  { 1290,  -20, -2860 }, {    0,      0,    5 }, 0x0201 }, // Switch: 02
    { ACTOR_EN_WEATHER_TAG,  { 1290, -280, -2460 }, {    0,      0,    0 }, 0x0F0A },
    { ACTOR_ELF_MSG2,        { 1290,   35, -1950 }, {  0x2,   0x67,    0 }, 0x1A3C },
    { ACTOR_ELF_MSG2,        {  980,   30, -2490 }, {  0x2,      0,    0 }, 0x4054 },
    { ACTOR_ELF_MSG2,        { 1215,   30, -2355 }, {  0x2,      0,    0 }, 0x4054 },
    { ACTOR_ELF_MSG2,        { 1365,   30, -2355 }, {  0x2,      0,    0 }, 0x4054 },
    { ACTOR_EN_BAGUO,        { 1095,  -20, -2910 }, {    0, 0x4000,  0x2 }, 0x0000 },
    { ACTOR_EN_BAGUO,        { 1485,  -20, -2910 }, {    0, 0xC000,  0x2 }, 0x0000 },
    { ACTOR_EN_BAGUO,        { 1920,  -20, -2430 }, {    0, 0xC000,  0x7 }, 0x0000 },
    { ACTOR_MIR_RAY2,        { 1290,  -20, -2040 }, {  0xF,      0,    0 }, 0x7E0F },
    { ACTOR_MIR_RAY2,        { 1290,   40, -2040 }, {  0xF,      0,    0 }, 0x7E0F },
    { ACTOR_OBJ_KIBAKO2,     { 1530,  -20, -2910 }, {  0x9, 0xC000, 0x36 }, 0xFFFF }, // Collect: 36, Arrows (10)
    { ACTOR_OBJ_KIBAKO2,     { 1050,  -20, -2910 }, {  0x3, 0x4000, 0x37 }, 0xFFFF }, // Collect: 37, Recovery Heart
    { ACTOR_EN_BOX,          { 1380,  -20, -2520 }, {    0, 0x6000, 0x12 }, 0xC22F }, // Checks switch: 12
    { ACTOR_EN_BOX,          { 1980,  -20, -2430 }, {    0, 0xC000,    0 }, 0x522B },
};

RoomShapeCullable stone_tower_temple_room_7RoomShapeCullable_000290 = { 
    2, 9,
    stone_tower_temple_room_7RoomShapeCullableEntry_00029C,
    stone_tower_temple_room_7RoomShapeCullableEntry_00029C + ARRAY_COUNTU(stone_tower_temple_room_7RoomShapeCullableEntry_00029C)
};

RoomShapeCullableEntry stone_tower_temple_room_7RoomShapeCullableEntry_00029C[9] = {
    { {   1290,    136,  -2041 },    172, NULL, stone_tower_temple_room_7DL_0031B0 },
    { {   1800,    110,  -2430 },    292, stone_tower_temple_room_7DL_0006D0, NULL },
    { {   1290,    110,  -2430 },    212, stone_tower_temple_room_7DL_000BC8, NULL },
    { {   1290,    110,  -2460 },    858, stone_tower_temple_room_7DL_001008, NULL },
    { {   1290,     80,  -2370 },    720, stone_tower_temple_room_7DL_001520, NULL },
    { {   1290,     80,  -2460 },    760, stone_tower_temple_room_7DL_001950, NULL },
    { {   1290,    210,  -2460 },    754, stone_tower_temple_room_7DL_002068, NULL },
    { {   1290,    110,  -2460 },    792, stone_tower_temple_room_7DL_0026B0, NULL },
    { {   1290,    255,  -2039 },    132, stone_tower_temple_room_7DL_002D50, NULL },
};

s32 stone_tower_temple_room_7_terminatorMaybe_00032C = { 0x01000000 };

Vtx stone_tower_temple_room_7Vtx_000330[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_000330.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_0009B8[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_0009B8.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_000D48[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_000D48.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_001220[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_001220.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_001610[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_001610.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_001A48[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_001A48.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_0021F0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_0021F0.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_002900[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_002900.vtx.inc"
};

Vtx stone_tower_temple_room_7Vtx_002F80[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Vtx_002F80.vtx.inc"
};

u64 stone_tower_temple_room_7Tex_003310[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_7Tex_003310.ia16.inc.c"
};

Gfx stone_tower_temple_room_7DL_0006D0[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_000330[50], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00F2B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_000330, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0102B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_000330[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0106B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_000330[16], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0111B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_000330[22], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_000330[30], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_000BC8[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_0009B8[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_0009B8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010BB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_0009B8[9], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_001008[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_000D48[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00EAB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_000D48, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 0, 0, 4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0106B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_000D48[8], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0111B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_000D48[20], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 11, 1, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(10, 5, 4, 0, 10, 4, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_001520[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_001220[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00F2B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_001220, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_7Vtx_001220[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_001950[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_001610[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00F2B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_001610, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_7Vtx_001610[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_002068[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_001A48[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0102B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_001A48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_temple_room_7Vtx_001A48[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_7Vtx_001A48[62], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_0026B0[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_0021F0[68], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00EAB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_0021F0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 7, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_0021F0[8], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_0021F0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_7Vtx_0021F0[64], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_002D50[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_002900[61], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0102B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_002900, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 1, 0, 15, 1, 0, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_7Vtx_002900[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0111B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_7Vtx_002900[48], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 6, 5, 4, 0),
    gsSP2Triangles(3, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 12, 11, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_7DL_0031B0[] = {
    gsSPVertex(&stone_tower_temple_room_7Vtx_002F80[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 235, 245, 255, 67),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_room_7Tex_003310, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 3, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_temple_room_7Tex_003310, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, 15, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_7Vtx_002F80, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 1, 0, 17, 1, 0, 0),
    gsSP2Triangles(0, 18, 19, 0, 0, 19, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 15, 0),
    gsSP2Triangles(15, 20, 21, 0, 15, 21, 13, 0),
    gsSP2Triangles(13, 21, 22, 0, 13, 22, 11, 0),
    gsSP2Triangles(11, 22, 23, 0, 11, 23, 9, 0),
    gsSP2Triangles(9, 23, 24, 0, 9, 24, 7, 0),
    gsSP2Triangles(7, 24, 25, 0, 7, 25, 4, 0),
    gsSP2Triangles(3, 26, 18, 0, 3, 18, 0, 0),
    gsSPEndDisplayList(),
};
