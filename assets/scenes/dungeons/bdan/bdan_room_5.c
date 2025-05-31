#include "ultra64.h"
#include "z64.h"
#include "bdan_room_5.h"
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
#include "bdan_room_6.h"
#include "bdan_room_7.h"
#include "bdan_room_8.h"
#include "bdan_room_9.h"
#include "bdan_room_10.h"
#include "bdan_room_11.h"
#include "bdan_room_12.h"
#include "bdan_room_13.h"
#include "bdan_room_14.h"
#include "bdan_room_15.h"

SceneCmd bdan_room_5Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(bdan_room_5QuestHeaders),
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_5AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_5RoomShapeNormal_0000F0),
    SCENE_CMD_OBJECT_LIST(10, bdan_room_5ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(8, bdan_room_5ActorEntry_00006C),
    SCENE_CMD_END(),
};

SceneCmd* bdan_room_5QuestHeaders[] = {
    bdan_mq_room_5Set,
};

SceneCmd* bdan_room_5AlternateHeaders0x000048[] = {
    NULL,
    NULL,
    NULL,
    bdan_room_5Set_000110,
};

s16 bdan_room_5ObjectList_000058[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_OKUTA,
    OBJECT_BUBBLE,
    OBJECT_BL,
    OBJECT_VALI,
    OBJECT_EI,
    OBJECT_BROB,
    OBJECT_ST,
    OBJECT_GI_SUTARU,
};

ActorEntry bdan_room_5ActorEntry_00006C[] = {
    { ACTOR_ELF_MSG,        {   1547,    -80,  -1518 }, {      0,      0,      0 }, 0xAC39 },
    { ACTOR_EN_BILI,        {   1374,   -440,  -1323 }, {      0, 0X91C7,      0 }, 0xFFFF },
    { ACTOR_EN_BILI,        {   1626,   -420,  -1829 }, {      0, 0XBB06,      0 }, 0xFFFF },
    { ACTOR_EN_BILI,        {   1622,   -203,  -1619 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BILI,        {   1352,   -197,  -1467 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BILI,        {   1253,    -85,  -1438 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_BG_BDAN_SWITCH, {   1351,     21,  -1716 }, { 0X8000,      0,      0 }, 0x3D04 },
    { ACTOR_EN_SW,          {   1640,   -274,  -1505 }, {      0, 0X5E94,      0 }, 0x8304 },
};

u8 bdan_room_5_possiblePadding_0000EC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

RoomShapeNormal bdan_room_5RoomShapeNormal_0000F0 = { 
    0, 1,
    bdan_room_5RoomShapeDListsEntry_0000FC,
    bdan_room_5RoomShapeDListsEntry_0000FC + ARRAY_COUNTU(bdan_room_5RoomShapeDListsEntry_0000FC)
};

RoomShapeDListsEntry bdan_room_5RoomShapeDListsEntry_0000FC[1] = {
    { bdan_room_5DL_002428, bdan_room_5DL_004000 },
};

s32 bdan_room_5_terminatorMaybe_000104 = { 0x01000000 };

u8 bdan_room_5_possiblePadding_000108[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

SceneCmd bdan_mq_room_5Set[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_5AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_5RoomShapeNormal_0000F0),
    SCENE_CMD_OBJECT_LIST(10, bdan_mq_room_5ObjectList),
    SCENE_CMD_ACTOR_LIST(15, bdan_mq_room_5ActorEntry),
    SCENE_CMD_END(),
};

s16 bdan_mq_room_5ObjectList[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RR,
    OBJECT_COW,
    OBJECT_D_HSBLOCK,
    OBJECT_BOX,
    OBJECT_KUSA,
    OBJECT_GI_SHIELD_2,
    OBJECT_GI_SHIELD_1,
    OBJECT_GI_SUTARU,
    OBJECT_ST,
};

ActorEntry bdan_mq_room_5ActorEntry[] = {
    { ACTOR_OBJ_HSBLOCK,    {   1455,   -160,  -1156 }, {      0,      0,      0 }, 0x3DC1 },
    { ACTOR_OBJ_HSBLOCK,    {   1455,   -251,  -1156 }, {      0,      0,      0 }, 0x3EC1 },
    { ACTOR_EN_KUSA,        {   1477,   -440,  -1366 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {   1691,   -440,  -1576 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_RR,          {   1345,    387,  -1448 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_RR,          {   1642,    480,  -1686 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_COW,         {   1456,   -242,  -1156 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_COW,         {   1898,   -155,  -1688 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_SW,          {   1392,     42,  -1677 }, { 0X5DDE, 0X2222,      0 }, 0x8302 },
    { ACTOR_EN_WONDER_ITEM, {   1458,   -226,  -1224 }, {      0,      0,    0X4 }, 0x193E },
    { ACTOR_EN_WONDER_ITEM, {   1830,   -134,  -1688 }, {      0,      0,    0X4 }, 0x1968 },
    { ACTOR_EN_WONDER_ITEM, {   1451,   -136,  -1233 }, {      0,      0,    0X4 }, 0x1AFD },
    { ACTOR_OBJ_SWITCH,     {   1456,    -60,  -1188 }, {      0,      0,      0 }, 0x1403 },
    { ACTOR_OBJ_TSUBO,      {   1305,   -294,  -2005 }, {      0,      0,      0 }, 0x6212 },
    { ACTOR_EN_BOX,         {   1293,   -126,  -1930 }, {      0, 0XBF4A,   0X28 }, 0x852A },
};

SceneCmd bdan_room_5Set_000110[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_5RoomShapeNormal_0000F0),
    SCENE_CMD_OBJECT_LIST(4, bdan_room_5ObjectList_000150),
    SCENE_CMD_ACTOR_LIST(4, bdan_room_5ActorEntry_000158),
    SCENE_CMD_END(),
};

s16 bdan_room_5ObjectList_000150[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_BL,
    OBJECT_BROB,
};

ActorEntry bdan_room_5ActorEntry_000158[] = {
    { ACTOR_EN_BILI, {   1277,   -440,  -1473 }, {      0, 0X91C7,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {   1525,   -420,  -1646 }, {      0, 0XBB06,      0 }, 0xFFFF },
    { ACTOR_EN_BROB, {   1177,   -440,  -1703 }, {      0, 0XC000,      0 }, 0x0014 },
    { ACTOR_EN_BROB, {   1361,   -420,  -1813 }, {      0,      0,      0 }, 0x0014 },
};

u8 bdan_room_5_possiblePadding_000198[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx bdan_room_5Vtx_0001A0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Vtx_0001A0.vtx.inc"
};

Gfx bdan_room_5DL_001850[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_5Vtx_0001A0[355], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(bdan_sceneTLUT_0139D0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(bdan_room_5Vtx_0001A0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[4], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[16], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[28], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002838, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[32], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 3, 8, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 7, 0),
    gsSP2Triangles(2, 1, 13, 0, 10, 9, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[47], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[53], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(18, 17, 24, 0, 17, 25, 24, 0),
    gsSP2Triangles(23, 22, 26, 0, 23, 26, 27, 0),
    gsSP2Triangles(28, 9, 8, 0, 28, 29, 9, 0),
    gsSP2Triangles(30, 31, 13, 0, 30, 13, 12, 0),
    gsSP2Triangles(24, 25, 28, 0, 25, 29, 28, 0),
    gsSP2Triangles(27, 26, 31, 0, 27, 31, 30, 0),
    gsSPVertex(&bdan_room_5Vtx_0001A0[85], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[101], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 5, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[114], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 4, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 7, 0),
    gsSP2Triangles(12, 10, 13, 0, 10, 7, 13, 0),
    gsSP2Triangles(14, 15, 10, 0, 14, 10, 12, 0),
    gsSP2Triangles(16, 17, 14, 0, 17, 15, 14, 0),
    gsSP2Triangles(17, 18, 15, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 17, 16, 0, 20, 21, 17, 0),
    gsSP2Triangles(21, 22, 17, 0, 22, 23, 17, 0),
    gsSP2Triangles(24, 9, 21, 0, 24, 21, 20, 0),
    gsSP2Triangles(13, 9, 24, 0, 13, 7, 9, 0),
    gsSP2Triangles(4, 25, 26, 0, 4, 26, 3, 0),
    gsSP2Triangles(25, 16, 14, 0, 25, 14, 26, 0),
    gsSP2Triangles(3, 26, 27, 0, 3, 27, 2, 0),
    gsSP2Triangles(26, 14, 12, 0, 26, 12, 27, 0),
    gsSP2Triangles(2, 27, 28, 0, 2, 28, 0, 0),
    gsSP2Triangles(27, 12, 13, 0, 27, 13, 28, 0),
    gsSP2Triangles(0, 28, 29, 0, 0, 29, 5, 0),
    gsSP2Triangles(28, 13, 24, 0, 28, 24, 29, 0),
    gsSP2Triangles(5, 29, 30, 0, 5, 30, 6, 0),
    gsSP2Triangles(29, 24, 20, 0, 29, 20, 30, 0),
    gsSP2Triangles(6, 30, 25, 0, 6, 25, 4, 0),
    gsSP2Triangles(30, 20, 16, 0, 30, 16, 25, 0),
    gsSP2Triangles(9, 31, 21, 0, 9, 8, 31, 0),
    gsSP1Triangle(31, 22, 21, 0),
    gsSPVertex(&bdan_room_5Vtx_0001A0[146], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
    gsSP2Triangles(5, 10, 6, 0, 10, 11, 9, 0),
    gsSP2Triangles(10, 9, 6, 0, 12, 10, 5, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 19, 15, 0, 20, 15, 21, 0),
    gsSP2Triangles(15, 14, 22, 0, 15, 22, 21, 0),
    gsSP2Triangles(19, 20, 23, 0, 19, 23, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002838, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[170], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 4, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(8, 12, 9, 0, 8, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 14, 19, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[190], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 5, 15, 3, 0),
    gsSP2Triangles(5, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 20, 0),
    gsSP1Triangle(27, 29, 28, 0),
    gsSPVertex(&bdan_room_5Vtx_0001A0[220], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 6, 0, 17, 18, 6, 0),
    gsSP2Triangles(17, 5, 19, 0, 17, 16, 5, 0),
    gsSP2Triangles(19, 1, 20, 0, 19, 5, 1, 0),
    gsSP2Triangles(20, 0, 21, 0, 20, 1, 0, 0),
    gsSP1Triangle(6, 18, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[242], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[245], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[251], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[255], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(7, 6, 8, 0, 2, 1, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(11, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 21, 19, 0, 21, 22, 19, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 23, 26, 0, 25, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[282], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[286], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002838, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[289], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[297], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(3, 2, 1, 0, 6, 8, 9, 0),
    gsSP2Triangles(0, 2, 8, 0, 0, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[309], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 9, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(14, 10, 9, 0, 14, 9, 13, 0),
    gsSP2Triangles(13, 12, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 14, 13, 0, 17, 13, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[331], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[335], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_002438, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[339], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(bdan_room_5Tex_003038, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&bdan_room_5Vtx_0001A0[343], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 0, 0, 8, 0, 2, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 5, 0),
    gsSPEndDisplayList(),
};

Gfx bdan_room_5DL_002428[] = {
    gsSPDisplayList(bdan_room_5DL_001850),
    gsSPEndDisplayList(),
};

u64 bdan_room_5Tex_002438[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Tex_002438.ci8.inc.c"
};

u64 bdan_room_5Tex_002838[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Tex_002838.ci8.inc.c"
};

u64 bdan_room_5Tex_003038[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Tex_003038.ci8.inc.c"
};

u8 bdan_room_5_possiblePadding_003838[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx bdan_room_5Vtx_003840[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Vtx_003840.vtx.inc"
};

Gfx bdan_room_5DL_003AB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_5Vtx_003840[31], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_room_5Tex_005020, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 153),
    gsSPVertex(bdan_room_5Vtx_003840, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 9, 8, 0),
    gsSP2Triangles(8, 3, 1, 0, 8, 1, 6, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 4, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 15, 17, 14, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(15, 27, 28, 0, 27, 29, 28, 0),
    gsSP2Triangles(27, 30, 29, 0, 27, 24, 30, 0),
    gsSP2Triangles(13, 25, 24, 0, 13, 27, 11, 0),
    gsSP2Triangles(27, 14, 11, 0, 27, 15, 14, 0),
    gsSP1Triangle(13, 24, 27, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_5Vtx_003BD0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Vtx_003BD0.vtx.inc"
};

Gfx bdan_room_5DL_003CA0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_5Vtx_003BD0[5], 8, 0),
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
    gsSPVertex(bdan_room_5Vtx_003BD0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_5Vtx_003D90[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Vtx_003D90.vtx.inc"
};

Gfx bdan_room_5DL_003F10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_5Vtx_003D90[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(bdan_room_5Tex_004020, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, TEXEL1, 0, PRIM_LOD_FRAC,
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 153),
    gsSPVertex(bdan_room_5Vtx_003D90, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsSPVertex(&bdan_room_5Vtx_003D90[10], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx bdan_room_5DL_004000[] = {
    gsSPDisplayList(bdan_room_5DL_003AB0),
    gsSPDisplayList(bdan_room_5DL_003CA0),
    gsSPDisplayList(bdan_room_5DL_003F10),
    gsSPEndDisplayList(),
};

u64 bdan_room_5Tex_004020[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Tex_004020.rgba16.inc.c"
};

u64 bdan_room_5Tex_005020[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5Tex_005020.ia16.inc.c"
};

