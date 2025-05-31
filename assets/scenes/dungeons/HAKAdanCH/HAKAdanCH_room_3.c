#include "ultra64.h"
#include "z64.h"
#include "HAKAdanCH_room_3.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "HAKAdanCH_scene.h"
#include "HAKAdanCH_room_0.h"
#include "HAKAdanCH_room_1.h"
#include "HAKAdanCH_room_2.h"
#include "HAKAdanCH_room_4.h"
#include "HAKAdanCH_room_5.h"
#include "HAKAdanCH_room_6.h"

SceneCmd HAKAdanCH_room_3Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(HAKAdanCH_room_3QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, true, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&HAKAdanCH_room_3RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(6, HAKAdanCH_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(7, HAKAdanCH_room_3ActorEntry_00004C),
    SCENE_CMD_END(),
};

SceneCmd* HAKAdanCH_room_3QuestHeaders[] = {
    HAKAdanCH_mq_room_3Set,
};

s16 HAKAdanCH_room_3ObjectList_000040[] = {
    OBJECT_HAKACH_OBJECTS,
    OBJECT_HAKA_DOOR,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
    OBJECT_FIREFLY,
    OBJECT_VM,
};

ActorEntry HAKAdanCH_room_3ActorEntry_00004C[] = {
    { ACTOR_EN_FIREFLY,     {    904,     68,  -1213 }, {      0, 0X199A,      0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,     {    981,    130,  -1018 }, {      0, 0X360B,      0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,     {   1104,    156,  -1161 }, {      0, 0XE16C,      0 }, 0x0000 },
    { ACTOR_BG_HAKA_MEGANE, {   1020,      0,  -1080 }, {      0,      0,      0 }, 0x0001 },
    { ACTOR_EN_VM,          {   1017,      0,  -1090 }, {      0,      0,      0 }, 0x0501 },
    { ACTOR_EN_BOX,         {   1151,      0,   -909 }, {      0,      0,      0 }, 0x552A },
    { ACTOR_OBJ_TSUBO,      {    874,      0,  -1294 }, {      0,      0,      0 }, 0x660F },
};

RoomShapeCullable HAKAdanCH_room_3RoomShapeCullable_0000C0 = { 
    2, 3,
    HAKAdanCH_room_3RoomShapeCullableEntry_0000CC,
    HAKAdanCH_room_3RoomShapeCullableEntry_0000CC + ARRAY_COUNTU(HAKAdanCH_room_3RoomShapeCullableEntry_0000CC)
};

RoomShapeCullableEntry HAKAdanCH_room_3RoomShapeCullableEntry_0000CC[3] = {
    { {   1020,   -140,  -1140 },    464, HAKAdanCH_room_3DL_000CE0, NULL },
    { {    990,   -720,  -1020 },    322, HAKAdanCH_room_3DL_001340, NULL },
    { {    990,   -600,  -1020 },    343, HAKAdanCH_room_3DL_001138, NULL },
};

s32 HAKAdanCH_room_3_terminatorMaybe_0000FC = { 0x01000000 };

SceneCmd HAKAdanCH_mq_room_3Set[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&HAKAdanCH_room_3RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(14, HAKAdanCH_mq_room_3ObjectList),
    SCENE_CMD_ACTOR_LIST(12, HAKAdanCH_mq_room_3ActorEntry),
    SCENE_CMD_END(),
};

s16 HAKAdanCH_mq_room_3ObjectList[] = {
    OBJECT_HAKACH_OBJECTS,
    OBJECT_HAKA_DOOR,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_RD,
    OBJECT_ST,
    OBJECT_GI_SUTARU,
    OBJECT_MIZU_OBJECTS,
    OBJECT_BOMBIWA,
    OBJECT_WALLMASTER,
    OBJECT_GI_KEY,
    OBJECT_GOROIWA,
    OBJECT_EFC_FLASH,
    OBJECT_GI_HEART,
};

ActorEntry HAKAdanCH_mq_room_3ActorEntry[] = {
    { ACTOR_EN_WALLMAS,      {   1004,    177,  -1066 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_FLOORMAS,     {    998,      0,  -1007 }, {      0, 0X6AAB,      0 }, 0x0000 },
    { ACTOR_BG_MIZU_SHUTTER, {    740,    -10,  -1200 }, { 0X4000, 0X4000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {    740,    -10,  -1080 }, { 0X4000, 0X4000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {    880,    -10,   -930 }, { 0X4000, 0X4000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {    940,    -10,  -1220 }, { 0X4000, 0X4000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {    980,    -10,  -1200 }, { 0X4000, 0XC000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {    980,    -10,  -1080 }, { 0X4000, 0XC000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {   1120,    -10,   -930 }, { 0X4000, 0XC000,      0 }, 0x0FFF },
    { ACTOR_BG_MIZU_SHUTTER, {   1180,    -10,  -1220 }, { 0X4000, 0XC000,      0 }, 0x0FFF },
    { ACTOR_ELF_MSG,         {   1139,      0,  -1367 }, {   0X1E,      0,    0X4 }, 0x2291 },
    { ACTOR_ELF_MSG,         {    868,      0,   -896 }, {   0X1E,      0,    0X4 }, 0x2291 },
};

Vtx HAKAdanCH_room_3Vtx_000100[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3Vtx_000100.vtx.inc"
};

Gfx HAKAdanCH_room_3DL_000CE0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000100[182], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_room_3Tex_001460, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(HAKAdanCH_sceneTex_00BD60, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_3Vtx_000100, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 30, 0),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000100[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(2, 8, 11, 0, 2, 11, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 10, 17, 0, 16, 17, 14, 0),
    gsSP2Triangles(11, 16, 14, 0, 11, 14, 13, 0),
    gsSP2Triangles(18, 12, 19, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 5, 13, 0, 21, 13, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 20, 0),
    gsSP2Triangles(25, 6, 21, 0, 25, 21, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000100[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000100[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000100[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000100[158], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 20, 21, 0, 16, 21, 17, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_3Vtx_000FB8[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3Vtx_000FB8.vtx.inc"
};

Gfx HAKAdanCH_room_3DL_001138[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_3Vtx_000FB8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_sceneTex_00B560, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsDPLoadMultiBlock(HAKAdanCH_sceneTex_00A560, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_3Vtx_000FB8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(0, 3, 14, 0, 0, 14, 13, 0),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_3Vtx_001250[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3Vtx_001250.vtx.inc"
};

Gfx HAKAdanCH_room_3DL_001340[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_3Vtx_001250[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_sceneTex_00A560, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(HAKAdanCH_sceneTex_00AD60, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_3Vtx_001250, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 3, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSPEndDisplayList(),
};

u64 HAKAdanCH_room_3Tex_001460[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3Tex_001460.rgba16.inc.c"
};
