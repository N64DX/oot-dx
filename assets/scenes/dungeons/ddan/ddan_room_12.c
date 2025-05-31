#include "ultra64.h"
#include "z64.h"
#include "ddan_room_12.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "ddan_scene.h"
#include "ddan_room_0.h"
#include "ddan_room_1.h"
#include "ddan_room_2.h"
#include "ddan_room_3.h"
#include "ddan_room_4.h"
#include "ddan_room_5.h"
#include "ddan_room_6.h"
#include "ddan_room_7.h"
#include "ddan_room_8.h"
#include "ddan_room_9.h"
#include "ddan_room_10.h"
#include "ddan_room_11.h"
#include "ddan_room_13.h"
#include "ddan_room_14.h"
#include "ddan_room_15.h"
#include "ddan_room_16.h"

SceneCmd ddan_room_12Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ddan_room_12QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ddan_room_12RoomShapeCullable_0000D0),
    SCENE_CMD_OBJECT_LIST(15, ddan_room_12ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(7, ddan_room_12ActorEntry_000060),
    SCENE_CMD_END(),
};

SceneCmd* ddan_room_12QuestHeaders[] = {
    ddan_mq_room_12Set,
};

s16 ddan_room_12ObjectList_000040[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_BWALL,
    OBJECT_FIREFLY,
    OBJECT_BOMBF,
    OBJECT_BOX,
    OBJECT_DODOJR,
    OBJECT_AM,
    OBJECT_TRAP,
    OBJECT_KUSA,
    OBJECT_VM,
    OBJECT_GI_SOUL,
    OBJECT_SHOPNUTS,
    OBJECT_ST,
    OBJECT_KA,
    OBJECT_GS,
};

ActorEntry ddan_room_12ActorEntry_000060[] = {
    { ACTOR_EN_WONDER_TALK2,  {   3088,    592,   -608 }, {      0,      0,      0 }, 0x8A3F },
    { ACTOR_BG_HIDAN_CURTAIN, {   3109,    531,   -919 }, {      0,      0,      0 }, 0x2FF9 },
    { ACTOR_OBJ_SWITCH,       {   2688,    731,   -920 }, {      0, 0X4000,      0 }, 0x3902 },
    { ACTOR_BG_HIDAN_CURTAIN, {   2927,    531,   -921 }, {      0,      0,      0 }, 0x2FFA },
    { ACTOR_OBJ_SWITCH,       {   3088,    593,   -608 }, {      0, 0X8000,      0 }, 0x3A02 },
    { ACTOR_OBJ_TSUBO,        {   2705,    411,  -1086 }, {      0,      0,      0 }, 0x7603 },
    { ACTOR_OBJ_TSUBO,        {   3329,    411,   -753 }, {      0,      0,      0 }, 0x7801 },
};

RoomShapeCullable ddan_room_12RoomShapeCullable_0000D0 = { 
    2, 1,
    ddan_room_12RoomShapeCullableEntry_0000DC,
    ddan_room_12RoomShapeCullableEntry_0000DC + ARRAY_COUNTU(ddan_room_12RoomShapeCullableEntry_0000DC)
};

RoomShapeCullableEntry ddan_room_12RoomShapeCullableEntry_0000DC[1] = {
    { {   3060,    591,   -860 },    740, ddan_room_12DL_001B90, NULL },
};

s32 ddan_room_12_terminatorMaybe_0000EC = { 0x01000000 };

SceneCmd ddan_mq_room_12Set[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ddan_room_12RoomShapeCullable_0000D0),
    SCENE_CMD_OBJECT_LIST(15, ddan_mq_room_12ObjectList),
    SCENE_CMD_ACTOR_LIST(12, ddan_mq_room_12ActorEntry),
    SCENE_CMD_END(),
};

s16 ddan_mq_room_12ObjectList[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_BWALL,
    OBJECT_BOMBF,
    OBJECT_BOX,
    OBJECT_AM,
    OBJECT_SHOPNUTS,
    OBJECT_D_ELEVATOR,
    OBJECT_BOMBIWA,
    OBJECT_ST,
    OBJECT_GS,
    OBJECT_SYOKUDAI,
    OBJECT_YDAN_OBJECTS,
    OBJECT_DODOJR,
    OBJECT_FIREFLY,
    OBJECT_KIBAKO2,
};

ActorEntry ddan_mq_room_12ActorEntry[] = {
    { ACTOR_EN_FIREFLY,       {   3089,    591,   -601 }, {      0, 0X8000,      0 }, 0x0003 },
    { ACTOR_EN_FIREFLY,       {   3357,    499,  -1084 }, {      0, 0XC000,      0 }, 0x0003 },
    { ACTOR_BG_HIDAN_CURTAIN, {   3112,    531,   -921 }, {      0,      0,      0 }, 0x2FF9 },
    { ACTOR_BG_HIDAN_CURTAIN, {   2926,    531,   -919 }, {      0,      0,      0 }, 0x2FFA },
    { ACTOR_OBJ_SWITCH,       {   2713,    411,   -795 }, {      0,      0,      0 }, 0x3903 },
    { ACTOR_OBJ_TSUBO,        {   3327,    411,   -805 }, {      0,      0,      0 }, 0x7610 },
    { ACTOR_OBJ_TSUBO,        {   3326,    411,   -753 }, {      0,      0,      0 }, 0x7801 },
    { ACTOR_OBJ_SWITCH,       {   2739,    411,  -1060 }, {      0,      0,      0 }, 0x3A00 },
    { ACTOR_EN_BOMBF,         {   3088,    551,   -658 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_BOMBIWA,      {   2737,    411,  -1058 }, {      0,      0,      0 }, 0x8004 },
    { ACTOR_OBJ_KIBAKO2,      {   2776,    411,   -810 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2,      {   3191,    411,   -897 }, {      0,      0,      0 }, 0xFFFF },
};

Vtx ddan_room_12Vtx_0000F0[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Vtx_0000F0.vtx.inc"
};

Gfx ddan_room_12DL_001B90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ddan_room_12Vtx_0000F0[418], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ddan_room_12Tex_007B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gDCSceneTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ddan_room_12Vtx_0000F0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 4, 0),
    gsSP2Triangles(8, 9, 4, 0, 4, 9, 10, 0),
    gsSP2Triangles(5, 4, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 11, 14, 0),
    gsSP2Triangles(15, 16, 11, 0, 17, 18, 11, 0),
    gsSP2Triangles(18, 12, 11, 0, 19, 2, 20, 0),
    gsSP2Triangles(2, 21, 20, 0, 2, 22, 23, 0),
    gsSP2Triangles(2, 1, 22, 0, 0, 2, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[24], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_007730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[28], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_007730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[36], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[40], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_007730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[44], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[48], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_007730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[52], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[60], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_008330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[64], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_003330, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[68], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 1, 0, 7, 8, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_008330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[77], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[81], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[88], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 4, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[114], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 1, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_008330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[120], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 4, 0),
    gsSP2Triangles(3, 5, 0, 0, 3, 0, 2, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 8, 0),
    gsSP2Triangles(9, 8, 6, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 2, 1, 0, 9, 1, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(15, 13, 16, 0, 15, 16, 0, 0),
    gsSP2Triangles(15, 0, 5, 0, 15, 5, 17, 0),
    gsSP2Triangles(17, 5, 18, 0, 19, 20, 12, 0),
    gsSP2Triangles(19, 12, 14, 0, 19, 21, 20, 0),
    gsSP2Triangles(19, 17, 18, 0, 19, 18, 21, 0),
    gsSP2Triangles(16, 13, 22, 0, 1, 0, 16, 0),
    gsSP2Triangles(18, 5, 4, 0, 7, 8, 23, 0),
    gsSP2Triangles(12, 20, 24, 0, 12, 24, 22, 0),
    gsSP2Triangles(22, 13, 12, 0, 24, 20, 21, 0),
    gsSP2Triangles(24, 21, 18, 0, 4, 7, 23, 0),
    gsSP2Triangles(24, 18, 4, 0, 24, 4, 23, 0),
    gsSP2Triangles(23, 8, 25, 0, 8, 10, 25, 0),
    gsSP2Triangles(26, 11, 1, 0, 26, 25, 11, 0),
    gsSP2Triangles(26, 27, 25, 0, 25, 10, 11, 0),
    gsSP2Triangles(1, 16, 22, 0, 1, 22, 26, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ddan_room_12Tex_006730, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&ddan_room_12Vtx_0000F0[148], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 6, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005730, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[159], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gDCSceneTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&ddan_room_12Vtx_0000F0[163], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[167], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[171], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 3, 5, 4, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(10, 14, 17, 0, 15, 11, 16, 0),
    gsSP2Triangles(10, 17, 8, 0, 16, 11, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[189], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[193], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_008330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[201], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 8, 12, 0),
    gsSP2Triangles(8, 11, 12, 0, 11, 14, 12, 0),
    gsSP2Triangles(3, 2, 6, 0, 2, 7, 6, 0),
    gsSP2Triangles(2, 10, 7, 0, 2, 5, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_003F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[222], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(7, 10, 9, 0, 7, 11, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_003B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[234], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[240], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSP2Triangles(20, 4, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(8, 26, 27, 0, 8, 27, 28, 0),
    gsSP2Triangles(0, 29, 30, 0, 0, 30, 31, 0),
    gsSPVertex(&ddan_room_12Vtx_0000F0[272], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 3, 2, 0),
    gsSP1Triangle(23, 2, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[297], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[301], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[305], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[309], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[313], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[317], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[321], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[325], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[329], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[333], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[337], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[341], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[345], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[349], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004730, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[353], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_002F30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[357], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_008330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[361], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_003330, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[364], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_004B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[371], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_007B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[377], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(5, 6, 1, 0, 7, 4, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(13, 8, 12, 0, 8, 14, 9, 0),
    gsSP2Triangles(15, 8, 13, 0, 15, 14, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_005330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[393], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 0, 2, 0, 8, 2, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 8, 9, 0),
    gsSP2Triangles(7, 12, 13, 0, 7, 13, 5, 0),
    gsSP2Triangles(12, 14, 13, 0, 14, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_12Tex_007B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_12Vtx_0000F0[409], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 0, 2, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 6, 5, 4, 0),
    gsSP2Triangles(1, 7, 2, 0, 7, 3, 2, 0),
    gsSP2Triangles(1, 8, 7, 0, 7, 8, 3, 0),
    gsSPEndDisplayList(),
};

u64 ddan_room_12Tex_002F30[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_002F30.ci8.inc.c"
};

u64 ddan_room_12Tex_003330[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_003330.ci8.inc.c"
};

u64 ddan_room_12Tex_003B30[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_003B30.ci8.inc.c"
};

u64 ddan_room_12Tex_003F30[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_003F30.ci8.inc.c"
};

u64 ddan_room_12Tex_004730[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_004730.ci8.inc.c"
};

u64 ddan_room_12Tex_004B30[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_004B30.ci8.inc.c"
};

u64 ddan_room_12Tex_005330[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_005330.ci8.inc.c"
};

u64 ddan_room_12Tex_005730[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_005730.rgba16.inc.c"
};

u64 ddan_room_12Tex_006730[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_006730.rgba16.inc.c"
};

u64 ddan_room_12Tex_007730[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_007730.ci8.inc.c"
};

u64 ddan_room_12Tex_007B30[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_007B30.ci8.inc.c"
};

u64 ddan_room_12Tex_008330[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_12Tex_008330.ci8.inc.c"
};
