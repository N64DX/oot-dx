#include "ultra64.h"
#include "z64.h"
#include "ydan_room_6.h"
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
#include "ydan_room_4.h"
#include "ydan_room_5.h"
#include "ydan_room_7.h"
#include "ydan_room_8.h"
#include "ydan_room_9.h"
#include "ydan_room_10.h"
#include "ydan_room_11.h"

SceneCmd ydan_room_6Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ydan_room_6QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_6RoomShapeCullable_0000E0),
    SCENE_CMD_OBJECT_LIST(10, ydan_room_6ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(8, ydan_room_6ActorEntry_000054),
    SCENE_CMD_END(),
};

SceneCmd* ydan_room_6QuestHeaders[] = {
    ydan_mq_room_6Set,
};

s16 ydan_room_6ObjectList_000040[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_DEKUNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_GI_NUTS,
};

ActorEntry ydan_room_6ActorEntry_000054[] = {
    { ACTOR_EN_KAREBABA,  {  -2038,   -760,   1252 }, {      0, 0X6000,      0 }, 0x0001 },
    { ACTOR_EN_KAREBABA,  {  -1674,   -760,   1248 }, {      0, 0XA000,      0 }, 0x0001 },
    { ACTOR_EN_KUSA,      {  -1919,   -760,    820 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {  -1796,   -760,    821 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_DEKUBABA,  {  -1843,   -760,   1033 }, {      0, 0X4000,      0 }, 0x0000 },
    { ACTOR_OBJ_SYOKUDAI, {  -1855,   -760,   1212 }, {      0,      0,      0 }, 0x2400 },
    { ACTOR_OBJ_SYOKUDAI, {  -1966,   -760,    964 }, {      0,      0,      0 }, 0x1083 },
    { ACTOR_OBJ_SYOKUDAI, {  -1743,   -760,    965 }, {      0,      0,      0 }, 0x1083 },
};

RoomShapeCullable ydan_room_6RoomShapeCullable_0000E0 = { 
    2, 1,
    ydan_room_6RoomShapeCullableEntry_0000EC,
    ydan_room_6RoomShapeCullableEntry_0000EC + ARRAY_COUNTU(ydan_room_6RoomShapeCullableEntry_0000EC)
};

RoomShapeCullableEntry ydan_room_6RoomShapeCullableEntry_0000EC[1] = {
    { {  -1835,   -580,   1060 },    388, ydan_room_6DL_0013F0, NULL },
};

s32 ydan_room_6_terminatorMaybe_0000FC = { 0x01000000 };

SceneCmd ydan_mq_room_6Set[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_6RoomShapeCullable_0000E0),
    SCENE_CMD_OBJECT_LIST(11, ydan_mq_room_6ObjectList),
    SCENE_CMD_ACTOR_LIST(12, ydan_mq_room_6ActorEntry),
    SCENE_CMD_END(),
};

s16 ydan_mq_room_6ObjectList[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_DEKUNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_FIREFLY,
    OBJECT_KIBAKO2,
};

ActorEntry ydan_mq_room_6ActorEntry[] = {
    { ACTOR_EN_FIREFLY,  {  -2019,   -501,   1225 }, {      0, 0X6000,      0 }, 0x0003 },
    { ACTOR_EN_KUSA,     {  -1795,   -760,    819 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,     {  -1918,   -760,    818 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_DEKUNUTS, {  -1847,   -760,   1066 }, {      0, 0X4000,      0 }, 0xFF00 },
    { ACTOR_EN_GOMA,     {  -1783,   -760,   1146 }, {      0,      0,      0 }, 0x0007 },
    { ACTOR_EN_GOMA,     {  -1943,   -760,   1137 }, {      0,      0,      0 }, 0x0007 },
    { ACTOR_EN_GOMA,     {  -1783,   -760,    991 }, {      0,      0,      0 }, 0x0007 },
    { ACTOR_EN_GOMA,     {  -1949,   -760,    992 }, {      0,      0,      0 }, 0x0007 },
    { ACTOR_EN_GOMA,     {  -1854,   -533,   1278 }, {      0,      0,      0 }, 0x0009 },
    { ACTOR_EN_GOMA,     {  -1861,   -524,    870 }, {      0,      0,      0 }, 0x0009 },
    { ACTOR_EN_GOMA,     {  -1856,   -445,   1068 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,     {  -2029,   -490,   1071 }, {      0,      0,      0 }, 0x0008 },
};

Vtx ydan_room_6Vtx_000100[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Vtx_000100.vtx.inc"
};

Gfx ydan_room_6DL_0013F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_6Vtx_000100[295], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_6Tex_001EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_sceneTLUT_00B800),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_room_6Vtx_000100, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 6, 3, 7, 0),
    gsSP2Triangles(0, 8, 9, 0, 0, 9, 10, 0),
    gsSP2Triangles(3, 11, 8, 0, 3, 8, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 0, 10, 14, 0),
    gsSP2Triangles(0, 14, 5, 0, 3, 2, 7, 0),
    gsSP2Triangles(3, 6, 15, 0, 3, 15, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[16], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[38], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0046C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[46], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(14, 9, 8, 0, 14, 8, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[62], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(1, 6, 3, 0, 4, 7, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0026C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[70], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[74], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 10, 0),
    gsSP2Triangles(11, 12, 9, 0, 11, 9, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 2, 15, 0, 18, 15, 19, 0),
    gsSP2Triangles(5, 9, 20, 0, 5, 20, 21, 0),
    gsSP2Triangles(22, 15, 2, 0, 22, 2, 23, 0),
    gsSP2Triangles(20, 9, 24, 0, 25, 15, 22, 0),
    gsSP2Triangles(26, 5, 21, 0, 2, 27, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[102], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
    gsSP2Triangles(2, 6, 7, 0, 2, 1, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0046C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[110], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_003EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[114], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 7, 25, 0, 24, 10, 7, 0),
    gsSP2Triangles(7, 6, 25, 0, 9, 8, 26, 0),
    gsSP2Triangles(8, 27, 26, 0, 8, 11, 27, 0),
    gsSP2Triangles(15, 14, 28, 0, 14, 29, 28, 0),
    gsSP2Triangles(14, 17, 29, 0, 30, 13, 31, 0),
    gsSP2Triangles(30, 16, 13, 0, 13, 12, 31, 0),
    gsSPVertex(&ydan_room_6Vtx_000100[146], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 16, 19, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[166], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[174], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[180], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[188], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[194], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[202], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[208], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[212], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[218], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0046C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[222], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 3, 0, 0, 7, 5, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 10, 0),
    gsSP2Triangles(4, 10, 1, 0, 10, 11, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[234], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0046C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[242], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_002EC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[246], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 5, 7, 3, 0),
    gsSP2Triangles(5, 1, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0046C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[254], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_6Tex_0036C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_6Vtx_000100[263], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(2, 6, 4, 0, 5, 7, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(10, 14, 12, 0, 13, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(18, 22, 20, 0, 21, 23, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(26, 30, 28, 0, 29, 31, 27, 0),
    gsSPEndDisplayList(),
};

u64 ydan_room_6Tex_001EC0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Tex_001EC0.ci8.inc.c"
};

u64 ydan_room_6Tex_0026C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Tex_0026C0.ci8.inc.c"
};

u64 ydan_room_6Tex_002EC0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Tex_002EC0.ci8.inc.c"
};

u64 ydan_room_6Tex_0036C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Tex_0036C0.ci8.inc.c"
};

u64 ydan_room_6Tex_003EC0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Tex_003EC0.ci8.inc.c"
};

u64 ydan_room_6Tex_0046C0[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6Tex_0046C0.ci8.inc.c"
};
