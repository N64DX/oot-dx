#include "ultra64.h"
#include "z64.h"
#include "ydan_room_4.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "ydan_scene.h"
#include "ydan_room_0.h"
#include "ydan_room_1.h"
#include "ydan_room_2.h"
#include "ydan_room_3.h"
#include "ydan_room_5.h"
#include "ydan_room_6.h"
#include "ydan_room_7.h"
#include "ydan_room_8.h"
#include "ydan_room_9.h"
#include "ydan_room_10.h"
#include "ydan_room_11.h"

SceneCmd ydan_room_4Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ydan_room_4QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_4RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(10, ydan_room_4ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(6, ydan_room_4ActorEntry_000054),
    SCENE_CMD_END(),
};

SceneCmd* ydan_room_4QuestHeaders[] = {
    ydan_mq_room_4Set,
};

s16 ydan_room_4ObjectList_000040[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_HINTNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_GI_NUTS,
};

ActorEntry ydan_room_4ActorEntry_000054[] = {
    { ACTOR_EN_KUSA,     {     49,   -880,    752 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,     {     79,   -880,    794 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,     {   -202,   -880,    751 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,     {   -228,   -880,    792 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_HINTNUTS, {    -66,   -880,    962 }, {      0, 0XA71C,      0 }, 0x9B00 },
    { ACTOR_OBJ_SWITCH,  {   -314,   -759,    960 }, {      0, 0X4000,      0 }, 0x0412 },
};

u8 ydan_room_4_possiblePadding_0000B4[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable ydan_room_4RoomShapeCullable_0000C0 = { 
    2, 2,
    ydan_room_4RoomShapeCullableEntry_0000CC,
    ydan_room_4RoomShapeCullableEntry_0000CC + ARRAY_COUNTU(ydan_room_4RoomShapeCullableEntry_0000CC)
};

RoomShapeCullableEntry ydan_room_4RoomShapeCullableEntry_0000CC[2] = {
    { {    -35,   -697,    960 },    284, NULL, ydan_room_4DL_003AC0 },
    { {    -95,   -741,    890 },    384, ydan_room_4DL_001020, NULL },
};

s32 ydan_room_4_terminatorMaybe_0000EC = { 0x01000000 };

SceneCmd ydan_mq_room_4Set[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_4RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(10, ydan_mq_room_4ObjectList),
    SCENE_CMD_ACTOR_LIST(12, ydan_mq_room_4ActorEntry),
    SCENE_CMD_END(),
};

s16 ydan_mq_room_4ObjectList[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_DEKUNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_KIBAKO2,
};

ActorEntry ydan_mq_room_4ActorEntry[] = {
    { ACTOR_EN_KUSA,      {     80,   -880,    792 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {     50,   -880,    750 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {   -201,   -880,    749 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {   -227,   -880,    790 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_DEKUNUTS,  {    -74,   -880,   1046 }, {      0, 0X8000,      0 }, 0xFF00 },
    { ACTOR_EN_GOMA,      {   -189,   -880,   1051 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_EN_GOMA,      {     47,   -880,   1052 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_EN_GOMA,      {    -77,   -641,    976 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_OBJ_SYOKUDAI, {   -281,   -880,    881 }, {      0,      0,      0 }, 0x1099 },
    { ACTOR_OBJ_SYOKUDAI, {   -282,   -880,   1041 }, {      0,      0,      0 }, 0x1099 },
    { ACTOR_ELF_MSG2,     {   -281,   -820,    881 }, {    0X2,   0X1A,      0 }, 0x3F06 },
    { ACTOR_ELF_MSG2,     {   -282,   -820,   1041 }, {    0X2,   0X1A,      0 }, 0x3F06 },
};

Vtx ydan_room_4Vtx_0000F0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Vtx_0000F0.vtx.inc"
};

Gfx ydan_room_4DL_001020[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_4Vtx_0000F0[235], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_sceneTLUT_00B800),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_room_4Vtx_0000F0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0030C0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[4], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 10, 11, 5, 0),
    gsSP2Triangles(12, 3, 9, 0, 12, 0, 3, 0),
    gsSP2Triangles(5, 13, 10, 0, 5, 7, 13, 0),
    gsSP2Triangles(3, 5, 11, 0, 3, 11, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[18], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 11, 0, 16, 11, 10, 0),
    gsSP2Triangles(18, 16, 10, 0, 18, 10, 14, 0),
    gsSP2Triangles(19, 20, 17, 0, 19, 17, 16, 0),
    gsSP2Triangles(21, 19, 16, 0, 21, 16, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 7, 6, 0, 28, 6, 29, 0),
    gsSP2Triangles(9, 3, 7, 0, 9, 7, 28, 0),
    gsSPVertex(&ydan_room_4Vtx_0000F0[48], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 1, 7, 6, 0),
    gsSP2Triangles(8, 3, 5, 0, 8, 9, 3, 0),
    gsSP2Triangles(10, 3, 11, 0, 3, 9, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[60], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[64], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[68], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[72], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[76], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[80], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[84], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[88], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[92], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[96], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 0, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 10, 9, 0, 6, 17, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[114], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0020C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[142], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 10, 0),
    gsSP2Triangles(11, 0, 3, 0, 12, 13, 3, 0),
    gsSP2Triangles(5, 8, 10, 0, 3, 5, 9, 0),
    gsSP2Triangles(3, 9, 12, 0, 11, 3, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[156], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(2, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[170], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[176], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 15, 12, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 20, 0),
    gsSP1Triangle(16, 21, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0028C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[198], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_4Tex_0018C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_4Vtx_0000F0[221], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP1Triangle(11, 10, 8, 0),
    gsSPEndDisplayList(),
};

u8 ydan_room_4_unaccounted_0018B0[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x10, 0x20, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ydan_room_4Tex_0018C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Tex_0018C0.ci8.inc.c"
};

u64 ydan_room_4Tex_0020C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Tex_0020C0.ci8.inc.c"
};

u64 ydan_room_4Tex_0028C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Tex_0028C0.ci8.inc.c"
};

u64 ydan_room_4Tex_0030C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Tex_0030C0.ci8.inc.c"
};

Vtx ydan_room_4Vtx_0038C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Vtx_0038C0.vtx.inc"
};

Gfx ydan_room_4DL_003AC0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_4Vtx_0038C0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_4Tex_003BC8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 229),
    gsSPVertex(ydan_room_4Vtx_0038C0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 8, 9, 6, 0),
    gsSP2Triangles(9, 7, 6, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 13, 11, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 18, 17, 15, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(22, 23, 20, 0, 23, 21, 20, 0),
    gsSPEndDisplayList(),
};

u8 ydan_room_4_unaccounted_003BB8[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3A, 0xC0, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ydan_room_4Tex_003BC8[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4Tex_003BC8.ia16.inc.c"
};

