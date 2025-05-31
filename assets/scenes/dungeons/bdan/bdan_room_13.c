#include "ultra64.h"
#include "z64.h"
#include "bdan_room_13.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "bdan_scene.h"
#include "bdan_room_0.h"
#include "bdan_room_1.h"
#include "bdan_room_2.h"
#include "bdan_room_3.h"
#include "bdan_room_4.h"
#include "bdan_room_5.h"
#include "bdan_room_6.h"
#include "bdan_room_7.h"
#include "bdan_room_8.h"
#include "bdan_room_9.h"
#include "bdan_room_10.h"
#include "bdan_room_11.h"
#include "bdan_room_12.h"
#include "bdan_room_14.h"
#include "bdan_room_15.h"

SceneCmd bdan_room_13Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(bdan_room_13QuestHeaders),
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_13AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_13RoomShapeNormal_0000F0),
    SCENE_CMD_OBJECT_LIST(9, bdan_room_13ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(8, bdan_room_13ActorEntry_00006C),
    SCENE_CMD_END(),
};

SceneCmd* bdan_room_13QuestHeaders[] = {
    bdan_mq_room_13Set,
};

SceneCmd* bdan_room_13AlternateHeaders0x000048[] = {
    NULL,
    NULL,
    NULL,
    bdan_room_13Set_000110,
};

s16 bdan_room_13ObjectList_000058[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_OKUTA,
    OBJECT_BUBBLE,
    OBJECT_BL,
    OBJECT_VALI,
    OBJECT_EI,
    OBJECT_BROB,
    OBJECT_GI_HEARTS,
};

ActorEntry bdan_room_13ActorEntry_00006C[] = {
    { ACTOR_EN_OKUTA,  {   -804,  -1140,  -2302 }, {      0, 0X6AAB,      0 }, 0xFF00 },
    { ACTOR_EN_OKUTA,  {  -1058,  -1140,  -2579 }, {      0, 0X505B,      0 }, 0xFF00 },
    { ACTOR_EN_BROB,   {   -944,  -1233,  -2426 }, {      0, 0X5C72,      0 }, 0x00FF },
    { ACTOR_OBJ_TSUBO, {  -1150,  -1113,  -2248 }, {      0, 0X5C72,      0 }, 0x4012 },
    { ACTOR_OBJ_TSUBO, {  -1127,  -1113,  -2271 }, {      0, 0X616C,      0 }, 0x4201 },
    { ACTOR_OBJ_TSUBO, {  -1178,  -1113,  -2272 }, {      0, 0X5C72,      0 }, 0x4402 },
    { ACTOR_OBJ_TSUBO, {  -1131,  -1113,  -2221 }, {      0, 0X5C72,      0 }, 0x4602 },
    { ACTOR_OBJ_TSUBO, {  -1173,  -1113,  -2227 }, {      0, 0X5D28,      0 }, 0x4801 },
};

u8 bdan_room_13_possiblePadding_0000EC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

RoomShapeNormal bdan_room_13RoomShapeNormal_0000F0 = { 
    0, 1,
    bdan_room_13RoomShapeDListsEntry_0000FC,
    bdan_room_13RoomShapeDListsEntry_0000FC + ARRAY_COUNTU(bdan_room_13RoomShapeDListsEntry_0000FC)
};

RoomShapeDListsEntry bdan_room_13RoomShapeDListsEntry_0000FC[1] = {
    { bdan_room_13DL_001578, bdan_room_13DL_002B38 },
};

s32 bdan_room_13_terminatorMaybe_000104 = { 0x01000000 };

u8 bdan_room_13_possiblePadding_000108[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd bdan_mq_room_13Set[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_13AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_13RoomShapeNormal_0000F0),
    SCENE_CMD_OBJECT_LIST(8, bdan_mq_room_13ObjectList),
    SCENE_CMD_ACTOR_LIST(11, bdan_mq_room_13ActorEntry),
    SCENE_CMD_END(),
};

s16 bdan_mq_room_13ObjectList[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_EI,
    OBJECT_FIREFLY,
    OBJECT_D_HSBLOCK,
    OBJECT_YDAN_OBJECTS,
    OBJECT_ST,
    OBJECT_GI_SUTARU,
};

ActorEntry bdan_mq_room_13ActorEntry[] = {
    { ACTOR_OBJ_HSBLOCK,    {  -1044,  -1265,  -2332 }, {      0, 0X1D28,      0 }, 0x05C1 },
    { ACTOR_EN_FIREFLY,     {  -1055,  -1113,  -2154 }, {      0,      0,      0 }, 0x8003 },
    { ACTOR_EN_FIREFLY,     {  -1300,   -974,  -2390 }, {      0, 0X3DDE,      0 }, 0x8003 },
    { ACTOR_EN_FIREFLY,     {  -1094,   -973,  -2637 }, {      0, 0X1BBC,      0 }, 0x8003 },
    { ACTOR_BG_BDAN_SWITCH, {  -1128,  -1234,  -2518 }, {      0,      0,      0 }, 0x3B02 },
    { ACTOR_EN_WEIYER,      {   -987,  -1203,  -2604 }, {      0, 0XE38E,      0 }, 0x0000 },
    { ACTOR_EN_WEIYER,      {   -871,  -1163,  -2316 }, {      0, 0XA38E,      0 }, 0x0000 },
    { ACTOR_OBJ_ROOMTIMER,  {   -992,  -1233,  -2378 }, {      0,      0,      0 }, 0x17FF },
    { ACTOR_BG_YDAN_SP,     {  -1147,  -1113,  -2243 }, {      0, 0X5DDE,      0 }, 0x1FFE },
    { ACTOR_BG_YDAN_SP,     {  -1149,  -1113,  -2242 }, {      0, 0XDDDE,      0 }, 0x1FFE },
    { ACTOR_EN_SW,          {  -1213,  -1041,  -2190 }, { 0XC000, 0XDDDE,      0 }, 0x8308 },
};

SceneCmd bdan_room_13Set_000110[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_13RoomShapeNormal_0000F0),
    SCENE_CMD_OBJECT_LIST(2, bdan_room_13ObjectList_000148),
    SCENE_CMD_END(),
};

s16 bdan_room_13ObjectList_000148[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
};

Vtx bdan_room_13Vtx_000150[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13Vtx_000150.vtx.inc"
};

Gfx bdan_room_13DL_000EA0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_13Vtx_000150[205], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_0149E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_013BD8),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_13Vtx_000150, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 5, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 2, 1, 12, 0),
    gsSP2Triangles(2, 12, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(16, 15, 17, 0, 16, 17, 19, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 0, 4, 0, 12, 1, 23, 0),
    gsSP2Triangles(24, 25, 0, 0, 24, 0, 22, 0),
    gsSP2Triangles(26, 27, 22, 0, 28, 29, 23, 0),
    gsSP2Triangles(1, 30, 31, 0, 1, 31, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0145E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_13Tex_001588, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[40], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0149E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[52], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 7, 4, 3, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 11, 10, 0, 12, 13, 11, 0),
    gsSP2Triangles(2, 13, 12, 0, 2, 1, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 17, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP1Triangle(28, 29, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_13Tex_002188, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[82], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0149E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[90], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 3, 0, 9, 10, 8, 0),
    gsSP2Triangles(9, 8, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 12, 0),
    gsSP1Triangle(15, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0145E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[107], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0149E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[113], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_13Tex_001D88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[123], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(3, 2, 1, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 6, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 5, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 11, 14, 13, 0),
    gsSP2Triangles(10, 0, 8, 0, 0, 2, 8, 0),
    gsSP2Triangles(2, 6, 8, 0, 2, 11, 5, 0),
    gsSP2Triangles(2, 4, 11, 0, 4, 14, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0145E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[138], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 1, 7, 2, 0),
    gsSP2Triangles(2, 8, 0, 0, 2, 3, 9, 0),
    gsSP2Triangles(2, 9, 8, 0, 3, 5, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0149E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[148], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(1, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 10, 0),
    gsSP2Triangles(11, 10, 13, 0, 10, 9, 14, 0),
    gsSP2Triangles(10, 14, 13, 0, 13, 14, 15, 0),
    gsSP2Triangles(1, 4, 2, 0, 13, 15, 11, 0),
    gsSP2Triangles(3, 5, 7, 0, 10, 12, 8, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 16, 0, 20, 16, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(21, 26, 22, 0, 21, 22, 25, 0),
    gsSP2Triangles(27, 28, 23, 0, 27, 23, 29, 0),
    gsSP2Triangles(26, 30, 27, 0, 26, 27, 29, 0),
    gsSPVertex(&bdan_room_13Vtx_000150[179], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 8, 0),
    gsSP2Triangles(5, 9, 6, 0, 5, 6, 8, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 12, 0),
    gsSP2Triangles(9, 13, 10, 0, 9, 10, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_013DE0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[193], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_sceneTex_0149E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_13Vtx_000150[199], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx bdan_room_13DL_001578[] = {
    gsSPDisplayList(bdan_room_13DL_000EA0),
    gsSPEndDisplayList(),
};

u64 bdan_room_13Tex_001588[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13Tex_001588.ci8.inc.c"
};

u64 bdan_room_13Tex_001D88[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13Tex_001D88.ci8.inc.c"
};

u64 bdan_room_13Tex_002188[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13Tex_002188.ci8.inc.c"
};

u8 bdan_room_13_possiblePadding_002988[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx bdan_room_13Vtx_002990[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13Vtx_002990.vtx.inc"
};

Gfx bdan_room_13DL_002A50[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_13Vtx_002990[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_sceneTex_0151E0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_0139D0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPVertex(bdan_room_13Vtx_002990, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx bdan_room_13DL_002B38[] = {
    gsSPDisplayList(bdan_room_13DL_002A50),
    gsSPEndDisplayList(),
};

