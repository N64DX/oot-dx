#include "ultra64.h"
#include "z64.h"
#include "ydan_room_2.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "ydan_scene.h"
#include "ydan_room_0.h"
#include "ydan_room_1.h"
#include "ydan_room_3.h"
#include "ydan_room_4.h"
#include "ydan_room_5.h"
#include "ydan_room_6.h"
#include "ydan_room_7.h"
#include "ydan_room_8.h"
#include "ydan_room_9.h"
#include "ydan_room_10.h"
#include "ydan_room_11.h"

SceneCmd ydan_room_2Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ydan_room_2QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_2RoomShapeCullable_000100),
    SCENE_CMD_OBJECT_LIST(11, ydan_room_2ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(10, ydan_room_2ActorEntry_000058),
    SCENE_CMD_END(),
};

SceneCmd* ydan_room_2QuestHeaders[] = {
    ydan_mq_room_2Set,
};

s16 ydan_room_2ObjectList_000040[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_HINTNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_D_LIFT,
    OBJECT_GI_SUTARU,
};

ActorEntry ydan_room_2ActorEntry_000058[] = {
    { ACTOR_EN_KUSA,        {  -1229,    280,   1006 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1280,    280,   1026 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1005,    280,   1216 }, {      0, 0XC71C,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1018,    280,   1263 }, {      0, 0XC71C,      0 }, 0xFF01 },
    { ACTOR_ELF_MSG2,       {  -1065,    590,   1074 }, {    0X5,   0X24,    0X1 }, 0x3F04 },
    { ACTOR_BG_YDAN_SP,     {  -1047,    613,   1077 }, {  0XCCD, 0XE5B0,  0XEEF }, 0x1FFF },
    { ACTOR_EN_BOX,         {  -1391,    480,   1391 }, {      0, 0XE000,      0 }, 0x00A1 },
    { ACTOR_EN_BOX,         {  -1108,    656,   1582 }, {      0, 0X2000,      0 }, 0x5905 },
    { ACTOR_OBJ_LIFT,       {  -1188,    390,   1190 }, {      0, 0XE000,      0 }, 0x0050 },
    { ACTOR_BG_YDAN_MARUTA, {  -1066,    560,   1066 }, {      0, 0XE000,      0 }, 0x0123 },
};

u8 ydan_room_2_possiblePadding_0000F8[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable ydan_room_2RoomShapeCullable_000100 = { 
    2, 1,
    ydan_room_2RoomShapeCullableEntry_00010C,
    ydan_room_2RoomShapeCullableEntry_00010C + ARRAY_COUNTU(ydan_room_2RoomShapeCullableEntry_00010C)
};

RoomShapeCullableEntry ydan_room_2RoomShapeCullableEntry_00010C[1] = {
    { {  -1223,    568,   1307 },    509, ydan_room_2DL_001060, ydan_room_2DL_004D50 },
};

s32 ydan_room_2_terminatorMaybe_00011C = { 0x01000000 };

SceneCmd ydan_mq_room_2Set[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_2RoomShapeCullable_000100),
    SCENE_CMD_OBJECT_LIST(14, ydan_mq_room_2ObjectList),
    SCENE_CMD_ACTOR_LIST(26, ydan_mq_room_2ActorEntry),
    SCENE_CMD_END(),
};

s16 ydan_mq_room_2ObjectList[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_DEKUNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_GI_SUTARU,
    OBJECT_D_LIFT,
    OBJECT_BOMBIWA,
    OBJECT_TIMEBLOCK,
    OBJECT_EFC_TW,
};

ActorEntry ydan_mq_room_2ActorEntry[] = {
    { ACTOR_EN_SW,          {  -1181,    381,   1399 }, { 0X4000, 0X5F4A,      0 }, 0x0000 },
    { ACTOR_EN_SW,          {  -1395,    401,   1187 }, { 0X4000, 0X6000,      0 }, 0x0000 },
    { ACTOR_EN_ST,          {  -1257,    748,   1249 }, {      0, 0X616C,      0 }, 0x0000 },
    { ACTOR_EN_KUSA,        {  -1004,    280,   1214 }, {      0, 0XC71C,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1017,    280,   1261 }, {      0, 0XC71C,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1228,    280,   1004 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,        {  -1279,    280,   1024 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_ELF_MSG,        {  -1394,    280,   1188 }, {      0,      0,      0 }, 0x1F02 },
    { ACTOR_ELF_MSG,        {  -1186,    355,   1398 }, {      0,      0,      0 }, 0x1F02 },
    { ACTOR_ELF_MSG,        {  -1176,    480,   1485 }, {      0,      0,      0 }, 0x1F02 },
    { ACTOR_OBJ_LIFT,       {  -1214,    390,   1208 }, {      0, 0XE000,      0 }, 0x0080 },
    { ACTOR_EN_ITEM00,      {  -1128,    656,   1571 }, {      0,      0,      0 }, 0x2203 },
    { ACTOR_EN_SW,          {  -1057,    770,   1648 }, { 0X4000, 0XA000,      0 }, 0x8108 },
    { ACTOR_EN_GOMA,        {  -1306,    280,   1117 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_EN_GOMA,        {  -1347,    480,   1355 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_OBJ_TIMEBLOCK,  {  -1208,    547,   1390 }, {      0, 0XE000,      0 }, 0x39FF },
    { ACTOR_OBJ_TIMEBLOCK,  {  -1166,    547,   1348 }, {      0, 0XE000,      0 }, 0x39FF },
    { ACTOR_OBJ_TIMEBLOCK,  {  -1165,    547,   1432 }, {      0, 0XE000,      0 }, 0x39FF },
    { ACTOR_OBJ_TIMEBLOCK,  {  -1123,    547,   1390 }, {      0, 0XE000,      0 }, 0x39FF },
    { ACTOR_ELF_MSG2,       {  -1065,    590,   1074 }, {    0X5,   0X22,    0X1 }, 0x3F04 },
    { ACTOR_OBJ_BOMBIWA,    {  -1129,    656,   1469 }, {      0, 0XA000,      0 }, 0x0003 },
    { ACTOR_OBJ_BOMBIWA,    {  -1183,    656,   1522 }, {      0, 0XA000,      0 }, 0x0004 },
    { ACTOR_OBJ_BOMBIWA,    {  -1237,    656,   1558 }, {      0, 0XA000,      0 }, 0x0008 },
    { ACTOR_EN_BOX,         {  -1391,    480,   1391 }, {      0, 0XE000,      0 }, 0x0801 },
    { ACTOR_BG_YDAN_SP,     {  -1047,    613,   1077 }, {  0XCCD, 0XE5B0,  0XEEF }, 0x1FFF },
    { ACTOR_BG_YDAN_MARUTA, {  -1066,    560,   1066 }, {      0, 0XE000,      0 }, 0x0121 },
};

Vtx ydan_room_2Vtx_000120[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Vtx_000120.vtx.inc"
};

Gfx ydan_room_2DL_001060[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_2Vtx_000120[236], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_2Tex_001C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_sceneTLUT_00B800),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_room_2Vtx_000120, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[8], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_004408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[22], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_004408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[34], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[42], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_001C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[46], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[50], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_001C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[58], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 6, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(5, 8, 7, 0, 5, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[68], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[80], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[85], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_004408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[92], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 2, 7, 0, 6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[101], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP1Triangle(6, 9, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[111], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_001C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[116], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[122], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[126], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(2, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(0, 2, 6, 0, 3, 0, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[134], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[142], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 2, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 7, 0),
    gsSP2Triangles(10, 11, 7, 0, 11, 8, 7, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 10, 0),
    gsSP2Triangles(13, 10, 9, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 12, 10, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 17, 18, 15, 0),
    gsSP2Triangles(17, 15, 14, 0, 16, 0, 3, 0),
    gsSP2Triangles(16, 3, 17, 0, 3, 5, 18, 0),
    gsSP1Triangle(3, 18, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[161], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[167], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 0, 3, 15, 0),
    gsSP2Triangles(16, 15, 3, 0, 2, 16, 3, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_004408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[188], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[196], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_001C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[204], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_004408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[208], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[213], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_004408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[217], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_002C08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[222], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_2Tex_003408, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_2Vtx_000120[229], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPEndDisplayList(),
};

u8 ydan_room_2_unaccounted_001BF8[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x10, 0x60, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ydan_room_2Tex_001C08[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_001C08.ci8.inc.c"
};

u64 ydan_room_2Tex_002408[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_002408.ci8.inc.c"
};

u64 ydan_room_2Tex_002C08[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_002C08.ci8.inc.c"
};

u64 ydan_room_2Tex_003408[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_003408.ci8.inc.c"
};

u64 ydan_room_2Tex_003C08[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_003C08.ci8.inc.c"
};

u64 ydan_room_2Tex_004408[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_004408.ci8.inc.c"
};

u8 ydan_room_2_possiblePadding_004C08[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

Vtx ydan_room_2Vtx_004C10[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Vtx_004C10.vtx.inc"
};

Gfx ydan_room_2DL_004D50[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_2Vtx_004C10[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_2Tex_004E28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPVertex(ydan_room_2Vtx_004C10, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

u8 ydan_room_2_unaccounted_004E18[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x4D, 0x50, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ydan_room_2Tex_004E28[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2Tex_004E28.rgba16.inc.c"
};

