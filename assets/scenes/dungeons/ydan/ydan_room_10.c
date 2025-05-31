#include "ultra64.h"
#include "z64.h"
#include "ydan_room_10.h"
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
#include "ydan_room_6.h"
#include "ydan_room_7.h"
#include "ydan_room_8.h"
#include "ydan_room_9.h"
#include "ydan_room_11.h"

SceneCmd ydan_room_10Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ydan_room_10QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_10RoomShapeCullable_000130),
    SCENE_CMD_OBJECT_LIST(11, ydan_room_10ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(13, ydan_room_10ActorEntry_000058),
    SCENE_CMD_END(),
};

SceneCmd* ydan_room_10QuestHeaders[] = {
    ydan_mq_room_10Set,
};

s16 ydan_room_10ObjectList_000040[] = {
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
    OBJECT_GI_SUTARU,
};

ActorEntry ydan_room_10ActorEntry_000058[] = {
    { ACTOR_EN_KAREBABA,  {  -1472,    840,   -157 }, {      0,  0XB61,      0 }, 0x0001 },
    { ACTOR_EN_ST,        {  -1082,    993,    268 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_KUSA,      {  -1516,    840,    142 }, {      0, 0X7333,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {  -1444,    840,    169 }, {      0, 0X727D,      0 }, 0xFF01 },
    { ACTOR_EN_DEKUBABA,  {   -884,    720,    136 }, {      0, 0XBF4A,      0 }, 0x0000 },
    { ACTOR_OBJ_SYOKUDAI, {   -635,    800,   -132 }, {      0, 0XC000,      0 }, 0x2400 },
    { ACTOR_ELF_MSG2,     {   -722,    860,    159 }, {    0X2,   0X3D,      0 }, 0x3F06 },
    { ACTOR_EN_BOX,       {  -1491,    840,      1 }, {      0, 0XC000,      0 }, 0x0802 },
    { ACTOR_EN_BOX,       {  -1082,    820,    387 }, {      0,      0,      0 }, 0x5906 },
    { ACTOR_EN_SW,        {  -1081,    866,    501 }, {      0, 0X8000,      0 }, 0x8108 },
    { ACTOR_OBJ_SYOKUDAI, {   -722,    800,    157 }, {      0, 0XC000,      0 }, 0x107C },
    { ACTOR_OBJ_SWITCH,   {   -739,    800,   -147 }, {      0,      0,      0 }, 0x3D00 },
    { ACTOR_BG_YDAN_HASI, {  -1080,    580,      0 }, {      0,      0,      0 }, 0x3D02 },
};

RoomShapeCullable ydan_room_10RoomShapeCullable_000130 = { 
    2, 2,
    ydan_room_10RoomShapeCullableEntry_00013C,
    ydan_room_10RoomShapeCullableEntry_00013C + ARRAY_COUNTU(ydan_room_10RoomShapeCullableEntry_00013C)
};

RoomShapeCullableEntry ydan_room_10RoomShapeCullableEntry_00013C[2] = {
    { {  -1070,    940,    103 },    586, ydan_room_10DL_0012F0, NULL },
    { {   -779,    840,    170 },    191, NULL, ydan_room_10DL_003CA0 },
};

s32 ydan_room_10_terminatorMaybe_00015C = { 0x01000000 };

SceneCmd ydan_mq_room_10Set[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ydan_room_10RoomShapeCullable_000130),
    SCENE_CMD_OBJECT_LIST(10, ydan_mq_room_10ObjectList),
    SCENE_CMD_ACTOR_LIST(21, ydan_mq_room_10ActorEntry),
    SCENE_CMD_END(),
};

s16 ydan_mq_room_10ObjectList[] = {
    OBJECT_YDAN_OBJECTS,
    OBJECT_GOL,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_HINTNUTS,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_KUSA,
    OBJECT_GI_HEART,
    OBJECT_KIBAKO2,
};

ActorEntry ydan_mq_room_10ActorEntry[] = {
    { ACTOR_EN_KUSA,      {  -1443,    840,    167 }, {      0, 0X727D,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {  -1515,    840,    140 }, {      0, 0X7333,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {   -636,    800,    161 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_KUSA,      {   -693,    800,    182 }, {      0,      0,      0 }, 0xFF01 },
    { ACTOR_EN_DEKUBABA,  {   -858,    720,    186 }, {      0, 0XBF4A,      0 }, 0x0000 },
    { ACTOR_EN_ITEM00,    {  -1165,    820,    325 }, {      0,      0,      0 }, 0x2603 },
    { ACTOR_EN_GOMA,      {  -1264,    720,    147 }, {      0,      0,      0 }, 0x0007 },
    { ACTOR_EN_GOMA,      {  -1417,    840,    -93 }, {      0,  0XB61,      0 }, 0x0007 },
    { ACTOR_EN_GOMA,      {  -1422,    840,     70 }, {      0,      0,      0 }, 0x0006 },
    { ACTOR_EN_GOMA,      {  -1156,    992,    453 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,      {  -1049,    975,   -272 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,      {  -1014,   1000,    320 }, {      0, 0X8000,      0 }, 0x0008 },
    { ACTOR_OBJ_SYOKUDAI, {   -653,    800,   -105 }, {      0, 0XC000,      0 }, 0x2400 },
    { ACTOR_OBJ_SYOKUDAI, {  -1067,    720,     -5 }, {      0, 0XC000,      0 }, 0x1053 },
    { ACTOR_ELF_MSG2,     {  -1067,    780,     -5 }, {    0X2,   0X14,      0 }, 0x3F06 },
    { ACTOR_OBJ_SWITCH,   {   -739,    800,   -147 }, {      0,      0,      0 }, 0x3D00 },
    { ACTOR_OBJ_KIBAKO2,  {   -805,    720,     -2 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,  {   -805,    720,    -62 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_EN_BOX,       {  -1491,   1179,      1 }, {      0, 0XC000,   0X13 }, 0x8522 },
    { ACTOR_EN_BOX,       {  -1082,    820,    387 }, {      0,      0,      0 }, 0x10A6 },
    { ACTOR_BG_YDAN_HASI, {  -1080,    600,      0 }, {      0,      0,      0 }, 0x3D02 },
};

Vtx ydan_room_10Vtx_000160[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Vtx_000160.vtx.inc"
};

Gfx ydan_room_10DL_0012F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_10Vtx_000160[273], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_10Tex_001B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(ydan_sceneTLUT_00B800),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ydan_room_10Vtx_000160, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002360, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[8], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_001B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[13], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 2, 1, 0, 5, 1, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[19], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 16, 8, 10, 0),
    gsSP2Triangles(10, 17, 18, 0, 18, 19, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_003360, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[39], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002360, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[44], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_001B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[49], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002360, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[56], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[62], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 5, 4, 0, 8, 4, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_001B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[80], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_003360, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[88], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP1Triangle(2, 1, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 2, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(4, 5, 7, 0, 5, 9, 7, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPVertex(&ydan_room_10Vtx_000160[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 7, 0, 21, 7, 6, 0),
    gsSP2Triangles(13, 12, 15, 0, 13, 15, 14, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 15, 12, 0, 26, 12, 27, 0),
    gsSP2Triangles(28, 29, 15, 0, 28, 15, 26, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSP2Triangles(25, 24, 31, 0, 25, 31, 30, 0),
    gsSPVertex(&ydan_room_10Vtx_000160[157], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 19, 0),
    gsSP2Triangles(25, 27, 26, 0, 26, 21, 19, 0),
    gsSP2Triangles(25, 5, 27, 0, 5, 7, 27, 0),
    gsSP2Triangles(25, 1, 5, 0, 25, 28, 1, 0),
    gsSP2Triangles(28, 2, 1, 0, 28, 29, 2, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&ydan_room_10Vtx_000160[188], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_003360, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[197], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 16, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[221], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 8, 15, 0, 8, 10, 15, 0),
    gsSP2Triangles(12, 2, 9, 0, 2, 3, 9, 0),
    gsSP2Triangles(13, 15, 5, 0, 15, 7, 5, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 17, 25, 0, 26, 21, 27, 0),
    gsSP2Triangles(26, 22, 21, 0, 24, 25, 28, 0),
    gsSP2Triangles(25, 17, 16, 0, 29, 26, 27, 0),
    gsSP2Triangles(27, 24, 30, 0, 27, 30, 29, 0),
    gsSP1Triangle(30, 24, 28, 0),
    gsSPVertex(&ydan_room_10Vtx_000160[252], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 1, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_001B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[258], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 5, 0, 2, 5, 6, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ydan_room_10Tex_002B60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ydan_room_10Vtx_000160[265], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSPEndDisplayList(),
};

u64 ydan_room_10Tex_001B60[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Tex_001B60.ci8.inc.c"
};

u64 ydan_room_10Tex_002360[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Tex_002360.ci8.inc.c"
};

u64 ydan_room_10Tex_002B60[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Tex_002B60.ci8.inc.c"
};

u64 ydan_room_10Tex_003360[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Tex_003360.ci8.inc.c"
};

Vtx ydan_room_10Vtx_003B60[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Vtx_003B60.vtx.inc"
};

Gfx ydan_room_10DL_003CA0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ydan_room_10Vtx_003B60[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ydan_room_10Tex_003D78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, TEXEL1, 0,
                       PRIM_LOD_FRAC, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPVertex(ydan_room_10Vtx_003B60, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

u64 ydan_room_10Tex_003D78[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10Tex_003D78.rgba16.inc.c"
};
