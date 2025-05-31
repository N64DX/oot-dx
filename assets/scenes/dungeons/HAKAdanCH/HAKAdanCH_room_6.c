#include "ultra64.h"
#include "z64.h"
#include "HAKAdanCH_room_6.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "HAKAdanCH_scene.h"
#include "HAKAdanCH_room_0.h"
#include "HAKAdanCH_room_1.h"
#include "HAKAdanCH_room_2.h"
#include "HAKAdanCH_room_3.h"
#include "HAKAdanCH_room_4.h"
#include "HAKAdanCH_room_5.h"

SceneCmd HAKAdanCH_room_6Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(HAKAdanCH_room_6QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&HAKAdanCH_room_6RoomShapeCullable_0000A0),
    SCENE_CMD_OBJECT_LIST(5, HAKAdanCH_room_6ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(5, HAKAdanCH_room_6ActorEntry_00004C),
    SCENE_CMD_END(),
};

SceneCmd* HAKAdanCH_room_6QuestHeaders[] = {
    HAKAdanCH_mq_room_6Set,
};

s16 HAKAdanCH_room_6ObjectList_000040[] = {
    OBJECT_HAKACH_OBJECTS,
    OBJECT_HAKA_DOOR,
    OBJECT_DEKUBABA,
    OBJECT_ST,
    OBJECT_GI_SUTARU,
};

ActorEntry HAKAdanCH_room_6ActorEntry_00004C[] = {
    { ACTOR_EN_DEKUBABA,  {   -327,      0,  -1150 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_SW,        {   -325,    126,  -1282 }, { 0XC000, 0X8000,      0 }, 0x8904 },
    { ACTOR_EN_TUBO_TRAP, {   -241,      0,  -1238 }, {      0,      0,      0 }, 0x00B4 },
    { ACTOR_EN_TUBO_TRAP, {   -413,      0,  -1238 }, {      0,      0,      0 }, 0x00F5 },
    { ACTOR_EN_TUBO_TRAP, {   -326,      0,  -1234 }, {      0,      0,      0 }, 0x03F6 },
};

RoomShapeCullable HAKAdanCH_room_6RoomShapeCullable_0000A0 = { 
    2, 2,
    HAKAdanCH_room_6RoomShapeCullableEntry_0000AC,
    HAKAdanCH_room_6RoomShapeCullableEntry_0000AC + ARRAY_COUNTU(HAKAdanCH_room_6RoomShapeCullableEntry_0000AC)
};

RoomShapeCullableEntry HAKAdanCH_room_6RoomShapeCullableEntry_0000AC[2] = {
    { {   -330,     90,  -1090 },    249, HAKAdanCH_room_6DL_000C10, NULL },
    { {   -330,     90,  -1100 },    250, HAKAdanCH_room_6DL_0003F0, NULL },
};

s32 HAKAdanCH_room_6_terminatorMaybe_0000CC = { 0x01000000 };

SceneCmd HAKAdanCH_mq_room_6Set[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&HAKAdanCH_room_6RoomShapeCullable_0000A0),
    SCENE_CMD_OBJECT_LIST(7, HAKAdanCH_mq_room_6ObjectList),
    SCENE_CMD_ACTOR_LIST(7, HAKAdanCH_mq_room_6ActorEntry),
    SCENE_CMD_END(),
};

s16 HAKAdanCH_mq_room_6ObjectList[] = {
    OBJECT_HAKACH_OBJECTS,
    OBJECT_HAKA_DOOR,
    OBJECT_HAKA,
    OBJECT_FIREFLY,
    OBJECT_ST,
    OBJECT_GI_KEY,
    OBJECT_GI_SUTARU,
};

ActorEntry HAKAdanCH_mq_room_6ActorEntry[] = {
    { ACTOR_EN_FIREFLY, {   -360,     35,  -1103 }, {      0, 0X4000,      0 }, 0x8003 },
    { ACTOR_EN_FIREFLY, {   -333,     26,  -1134 }, {      0,      0,      0 }, 0x8003 },
    { ACTOR_EN_FIREFLY, {   -295,     31,  -1108 }, {      0, 0XC000,      0 }, 0x8003 },
    { ACTOR_EN_ST,      {   -430,      0,  -1099 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_ST,      {   -332,      0,   -997 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_BG_HAKA,    {   -329,      0,  -1085 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_SW,      {   -330,      0,  -1095 }, {      0,      0,      0 }, 0x8902 },
};

Vtx HAKAdanCH_room_6Vtx_0000D0[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6Vtx_0000D0.vtx.inc"
};

Gfx HAKAdanCH_room_6DL_0003F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_6Vtx_0000D0[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_room_6Tex_000E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(HAKAdanCH_sceneTex_00AD60, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 0, 0, 160),
    gsSPVertex(HAKAdanCH_room_6Vtx_0000D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&HAKAdanCH_room_6Vtx_0000D0[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetEnvColor(0, 0, 0, 128),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_6Vtx_000550[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6Vtx_000550.vtx.inc"
};

Gfx HAKAdanCH_room_6DL_000C10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_6Vtx_000550[100], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_room_6Tex_001680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_6Vtx_000550, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 22, 0),
    gsSP2Triangles(0, 23, 9, 0, 1, 0, 9, 0),
    gsSP2Triangles(2, 11, 10, 0, 2, 10, 24, 0),
    gsSP2Triangles(21, 19, 18, 0, 20, 22, 18, 0),
    gsSP2Triangles(6, 25, 3, 0, 7, 6, 3, 0),
    gsSP2Triangles(8, 5, 4, 0, 8, 4, 26, 0),
    gsSP2Triangles(12, 16, 15, 0, 12, 15, 27, 0),
    gsSP2Triangles(14, 13, 15, 0, 14, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(HAKAdanCH_sceneTex_00B560, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&HAKAdanCH_room_6Vtx_000550[28], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 7, 6, 0, 10, 6, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(21, 22, 19, 0, 22, 23, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 26, 0, 28, 26, 25, 0),
    gsSPVertex(&HAKAdanCH_room_6Vtx_000550[58], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(7, 10, 9, 0, 7, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 13, 12, 0, 16, 12, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(HAKAdanCH_room_6Tex_002680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&HAKAdanCH_room_6Vtx_000550[76], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 3, 5, 6, 0),
    gsSP2Triangles(1, 7, 2, 0, 4, 3, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

u64 HAKAdanCH_room_6Tex_000E80[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6Tex_000E80.rgba16.inc.c"
};

u64 HAKAdanCH_room_6Tex_001680[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6Tex_001680.rgba16.inc.c"
};

u64 HAKAdanCH_room_6Tex_002680[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6Tex_002680.rgba16.inc.c"
};
