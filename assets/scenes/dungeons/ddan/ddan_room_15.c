#include "ultra64.h"
#include "z64.h"
#include "ddan_room_15.h"
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
#include "ddan_room_12.h"
#include "ddan_room_13.h"
#include "ddan_room_14.h"
#include "ddan_room_16.h"

SceneCmd ddan_room_15Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ddan_room_15QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ddan_room_15RoomShapeCullable_0000B0),
    SCENE_CMD_OBJECT_LIST(5, ddan_room_15ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(6, ddan_room_15ActorEntry_00004C),
    SCENE_CMD_END(),
};

SceneCmd* ddan_room_15QuestHeaders[] = {
    ddan_mq_room_15Set,
};

s16 ddan_room_15ObjectList_000040[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_BWALL,
    OBJECT_AM,
    OBJECT_BOX,
    OBJECT_BOMBF,
};

ActorEntry ddan_room_15ActorEntry_00004C[] = {
    { ACTOR_EN_AM,    {  -1955,      0,   -329 }, {      0, 0X8000,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF, {  -2166,      0,   -663 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_BOMBF, {  -1750,      0,   -661 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_EN_AM,    {  -2012,      0,   -277 }, {      0, 0XC000,      0 }, 0x0000 },
    { ACTOR_EN_AM,    {  -1891,      0,   -276 }, {      0, 0X4000,      0 }, 0x0000 },
    { ACTOR_EN_BOX,   {  -1953,      0,   -275 }, {      0,      0,      0 }, 0x0805 },
};

u8 ddan_room_15_possiblePadding_0000AC[] = {
    0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable ddan_room_15RoomShapeCullable_0000B0 = { 
    2, 1,
    ddan_room_15RoomShapeCullableEntry_0000BC,
    ddan_room_15RoomShapeCullableEntry_0000BC + ARRAY_COUNTU(ddan_room_15RoomShapeCullableEntry_0000BC)
};

RoomShapeCullableEntry ddan_room_15RoomShapeCullableEntry_0000BC[1] = {
    { {  -1960,    200,   -480 },    406, ddan_room_15DL_0006A0, NULL },
};

s32 ddan_room_15_terminatorMaybe_0000CC = { 0x01000000 };

SceneCmd ddan_mq_room_15Set[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ddan_room_15RoomShapeCullable_0000B0),
    SCENE_CMD_OBJECT_LIST(5, ddan_mq_room_15ObjectList),
    SCENE_CMD_ACTOR_LIST(20, ddan_mq_room_15ActorEntry),
    SCENE_CMD_END(),
};

s16 ddan_mq_room_15ObjectList[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_TIMEBLOCK,
    OBJECT_ST,
    OBJECT_GI_SUTARU,
    OBJECT_EFC_TW,
};

ActorEntry ddan_mq_room_15ActorEntry[] = {
    { ACTOR_EN_SW,         {  -2157,     39,   -226 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_ST,         {  -2060,    360,   -448 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_ST,         {  -1958,    360,   -248 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_ST,         {  -1758,    360,   -352 }, {      0, 0X8000,      0 }, 0x0000 },
    { ACTOR_EN_SW,         {  -1760,      0,   -254 }, {      0, 0X8000,      0 }, 0x8208 },
    { ACTOR_OBJ_TIMEBLOCK, {  -2158,      0,   -470 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -2158,      0,   -370 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -2158,      0,   -270 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -2058,      0,   -270 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -2058,      0,   -370 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -2058,      0,   -470 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1958,      0,   -270 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1958,      0,   -370 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1958,      0,   -470 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1858,      0,   -270 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1858,      0,   -370 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1858,      0,   -470 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1758,      0,   -370 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1758,      0,   -470 }, {      0,      0,      0 }, 0x88FF },
    { ACTOR_OBJ_TIMEBLOCK, {  -1758,      0,   -270 }, {      0,      0,      0 }, 0x88FF },
};

Vtx ddan_room_15Vtx_0000D0[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15Vtx_0000D0.vtx.inc"
};

Gfx ddan_room_15DL_0006A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ddan_room_15Vtx_0000D0[85], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ddan_room_15Tex_001C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gDCSceneTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ddan_room_15Vtx_0000D0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_002448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[3], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[6], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 0, 5, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_000C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_002448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[16], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[21], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTextureBlock(ddan_room_15Tex_001C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[33], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTextureBlock(ddan_room_15Tex_001C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[36], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[40], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP1Triangle(7, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[49], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_002448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[54], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 2, 0),
    gsSP2Triangles(5, 2, 6, 0, 1, 8, 4, 0),
    gsSP2Triangles(1, 4, 3, 0, 9, 8, 1, 0),
    gsSP2Triangles(7, 10, 2, 0, 2, 10, 0, 0),
    gsSP2Triangles(0, 9, 1, 0, 6, 2, 3, 0),
    gsSP1Triangle(2, 1, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001448, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[65], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 9, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_15Tex_001C48, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_15Vtx_0000D0[75], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 8, 9, 6, 0),
    gsSPEndDisplayList(),
};

u8 ddan_room_15_unaccounted_000C38[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0xA0, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ddan_room_15Tex_000C48[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15Tex_000C48.ci8.inc.c"
};

u64 ddan_room_15Tex_001448[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15Tex_001448.ci8.inc.c"
};

u64 ddan_room_15Tex_001C48[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15Tex_001C48.ci8.inc.c"
};

u64 ddan_room_15Tex_002448[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15Tex_002448.ci8.inc.c"
};

