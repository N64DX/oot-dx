#include "ultra64.h"
#include "z64.h"
#include "HAKAdanCH_room_5.h"
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
#include "HAKAdanCH_room_6.h"

SceneCmd HAKAdanCH_room_5Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(HAKAdanCH_room_5QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&HAKAdanCH_room_5RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(10, HAKAdanCH_room_5ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(6, HAKAdanCH_room_5ActorEntry_000054),
    SCENE_CMD_END(),
};

SceneCmd* HAKAdanCH_room_5QuestHeaders[] = {
    HAKAdanCH_mq_room_5Set,
};

s16 HAKAdanCH_room_5ObjectList_000040[] = {
    OBJECT_HAKACH_OBJECTS,
    OBJECT_HAKA_DOOR,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
    OBJECT_ST,
    OBJECT_KUSA,
    OBJECT_FIREFLY,
    OBJECT_BOMBF,
    OBJECT_BOMBIWA,
    OBJECT_GI_SUTARU,
};

ActorEntry HAKAdanCH_room_5ActorEntry_000054[] = {
    { ACTOR_EN_FIREFLY,     {    247,    150,   -998 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,     {    260,     57,  -1211 }, {      0, 0X1A50,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,     {    314,    110,  -1096 }, {      0,      0,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,     {    393,     66,  -1078 }, {      0, 0XDBBC,      0 }, 0x0003 },
    { ACTOR_BG_HAKA_MEGANE, {    380,      0,  -1230 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_SW,          {    101,    126,  -1208 }, { 0X4000, 0X4000,      0 }, 0x8902 },
};

RoomShapeCullable HAKAdanCH_room_5RoomShapeCullable_0000C0 = { 
    2, 5,
    HAKAdanCH_room_5RoomShapeCullableEntry_0000CC,
    HAKAdanCH_room_5RoomShapeCullableEntry_0000CC + ARRAY_COUNTU(HAKAdanCH_room_5RoomShapeCullableEntry_0000CC)
};

RoomShapeCullableEntry HAKAdanCH_room_5RoomShapeCullableEntry_0000CC[5] = {
    { {    160,    100,  -1280 },     56, HAKAdanCH_room_5DL_001070, NULL },
    { {    310,      0,  -1100 },    276, HAKAdanCH_room_5DL_000EE0, NULL },
    { {    310,   -150,  -1090 },    434, HAKAdanCH_room_5DL_000BE8, NULL },
    { {    372,   -720,  -1160 },    357, HAKAdanCH_room_5DL_0003F0, NULL },
    { {    372,   -600,  -1160 },    376, HAKAdanCH_room_5DL_000240, NULL },
};

s32 HAKAdanCH_room_5_terminatorMaybe_00011C = { 0x01000000 };

SceneCmd HAKAdanCH_mq_room_5Set[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&HAKAdanCH_room_5RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(14, HAKAdanCH_mq_room_5ObjectList),
    SCENE_CMD_ACTOR_LIST(9, HAKAdanCH_mq_room_5ActorEntry),
    SCENE_CMD_END(),
};

s16 HAKAdanCH_mq_room_5ObjectList[] = {
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

ActorEntry HAKAdanCH_mq_room_5ActorEntry[] = {
    { ACTOR_EN_WONDER_ITEM, {    160,     97,  -1275 }, {      0,      0,    0X4 }, 0x18BF },
    { ACTOR_EN_WONDER_ITEM, {    160,     97,  -1275 }, {      0,      0,    0X4 }, 0x18BF },
    { ACTOR_EN_WONDER_ITEM, {    160,     97,  -1275 }, {      0,      0,    0X4 }, 0x19FF },
    { ACTOR_EN_WONDER_ITEM, {    160,     97,  -1275 }, {      0,      0,    0X4 }, 0x1AFF },
    { ACTOR_BG_HAKA_MEGANE, {    380,      0,  -1230 }, {      0,      0,      0 }, 0x0002 },
    { ACTOR_EN_ITEM00,      {    140,      0,  -1218 }, {      0,      0,      0 }, 0x0111 },
    { ACTOR_OBJ_TSUBO,      {    288,      0,  -1240 }, {      0,      0,      0 }, 0x4803 },
    { ACTOR_OBJ_TSUBO,      {    438,      0,  -1234 }, {      0,      0,      0 }, 0x4A03 },
    { ACTOR_OBJ_TSUBO,      {    444,      0,  -1114 }, {      0,      0,      0 }, 0x4C03 },
};

Vtx HAKAdanCH_room_5Vtx_000120[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Vtx_000120.vtx.inc"
};

Gfx HAKAdanCH_room_5DL_000240[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_5Vtx_000120[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_sceneTex_00A560, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR |
                G_TX_WRAP, 5, G_TX_NOLOD),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_5Vtx_000120, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_5Vtx_000320[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Vtx_000320.vtx.inc"
};

Gfx HAKAdanCH_room_5DL_0003F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_5Vtx_000320[5], 8, 0),
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
    gsSPVertex(HAKAdanCH_room_5Vtx_000320, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_5Vtx_0004E8[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Vtx_0004E8.vtx.inc"
};

Gfx HAKAdanCH_room_5DL_000BE8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_5Vtx_0004E8[104], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_room_5Tex_002160, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(HAKAdanCH_sceneTex_00BD60, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR |
                       G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_5Vtx_0004E8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&HAKAdanCH_room_5Vtx_0004E8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 0, 5, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&HAKAdanCH_room_5Vtx_0004E8[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(5, 14, 13, 0, 5, 13, 12, 0),
    gsSP2Triangles(9, 14, 5, 0, 9, 5, 10, 0),
    gsSP2Triangles(15, 0, 2, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 17, 20, 21, 0),
    gsSP2Triangles(17, 21, 18, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 23, 26, 27, 0),
    gsSP2Triangles(23, 27, 24, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&HAKAdanCH_room_5Vtx_0004E8[94], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_5Vtx_000DE0[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Vtx_000DE0.vtx.inc"
};

Gfx HAKAdanCH_room_5DL_000EE0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_5Vtx_000DE0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_sceneTex_00B560, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_5Vtx_000DE0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx HAKAdanCH_room_5Vtx_000FA0[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Vtx_000FA0.vtx.inc"
};

Gfx HAKAdanCH_room_5DL_001070[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&HAKAdanCH_room_5Vtx_000FA0[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(HAKAdanCH_room_5Tex_001160, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(HAKAdanCH_room_5Vtx_000FA0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 2, 4, 0),
    gsSPEndDisplayList(),
};

u64 HAKAdanCH_room_5Tex_001160[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Tex_001160.rgba16.inc.c"
};

u64 HAKAdanCH_room_5Tex_002160[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5Tex_002160.rgba16.inc.c"
};
