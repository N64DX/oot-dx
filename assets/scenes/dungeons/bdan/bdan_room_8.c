#include "ultra64.h"
#include "z64.h"
#include "bdan_room_8.h"
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
#include "bdan_room_9.h"
#include "bdan_room_10.h"
#include "bdan_room_11.h"
#include "bdan_room_12.h"
#include "bdan_room_13.h"
#include "bdan_room_14.h"
#include "bdan_room_15.h"

SceneCmd bdan_room_8Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(bdan_room_8QuestHeaders),
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_8AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_8RoomShapeNormal_0000C0),
    SCENE_CMD_OBJECT_LIST(10, bdan_room_8ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(5, bdan_room_8ActorEntry_00006C),
    SCENE_CMD_END(),
};

SceneCmd* bdan_room_8QuestHeaders[] = {
    bdan_mq_room_8Set,
};

SceneCmd* bdan_room_8AlternateHeaders0x000048[] = {
    NULL,
    NULL,
    NULL,
    bdan_room_8Set_0000E0,
};

s16 bdan_room_8ObjectList_000058[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_OKUTA,
    OBJECT_BUBBLE,
    OBJECT_BL,
    OBJECT_VALI,
    OBJECT_EI,
    OBJECT_BXA,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
};

ActorEntry bdan_room_8ActorEntry_00006C[] = {
    { ACTOR_EN_BA,   {      1,     20,  -5801 }, {      0,      0,      0 }, 0x0A01 },
    { ACTOR_EN_BILI, {   -181,   -262,  -5982 }, {      0, 0X2222,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {   -184,   -271,  -5623 }, {      0, 0X5DDE,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {    184,   -253,  -5621 }, {      0, 0XA38E,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {    182,   -275,  -5978 }, {      0, 0XE000,      0 }, 0xFFFF },
};

RoomShapeNormal bdan_room_8RoomShapeNormal_0000C0 = { 
    0, 1,
    bdan_room_8RoomShapeDListsEntry_0000CC,
    bdan_room_8RoomShapeDListsEntry_0000CC + ARRAY_COUNTU(bdan_room_8RoomShapeDListsEntry_0000CC)
};

RoomShapeDListsEntry bdan_room_8RoomShapeDListsEntry_0000CC[1] = {
    { bdan_room_8DL_0037E8, NULL },
};

s32 bdan_room_8_terminatorMaybe_0000D4 = { 0x01000000 };

SceneCmd bdan_mq_room_8Set[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(bdan_room_8AlternateHeaders0x000048),
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_8RoomShapeNormal_0000C0),
    SCENE_CMD_OBJECT_LIST(4, bdan_mq_room_8ObjectList),
    SCENE_CMD_ACTOR_LIST(2, bdan_mq_room_8ActorEntry),
    SCENE_CMD_END(),
};

s16 bdan_mq_room_8ObjectList[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_BXA,
    OBJECT_BOX,
};

ActorEntry bdan_mq_room_8ActorEntry[] = {
    { ACTOR_OBJ_ROOMTIMER, {   -113,   -340,  -5669 }, {      0,      0,      0 }, 0x2FFF },
    { ACTOR_EN_BA,         {      1,     20,  -5801 }, {      0,      0,      0 }, 0x0B00 },
};

SceneCmd bdan_room_8Set_0000E0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 255),
    SCENE_CMD_ROOM_SHAPE(&bdan_room_8RoomShapeNormal_0000C0),
    SCENE_CMD_OBJECT_LIST(6, bdan_room_8ObjectList_000120),
    SCENE_CMD_ACTOR_LIST(6, bdan_room_8ActorEntry_00012C),
    SCENE_CMD_END(),
};

s16 bdan_room_8ObjectList_000120[] = {
    OBJECT_BDAN_OBJECTS,
    OBJECT_RU1,
    OBJECT_BXA,
    OBJECT_BL,
    OBJECT_BOX,
    OBJECT_EFC_FLASH,
};

ActorEntry bdan_room_8ActorEntry_00012C[] = {
    { ACTOR_EN_BA,   {      1,     20,  -5801 }, {      0,      0,      0 }, 0x3FFF },
    { ACTOR_EN_BILI, {   -181,   -262,  -5982 }, {      0, 0X2222,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {   -184,   -271,  -5623 }, {      0, 0X5DDE,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {    184,   -253,  -5621 }, {      0, 0XA38E,      0 }, 0xFFFF },
    { ACTOR_EN_BILI, {    182,   -275,  -5978 }, {      0, 0XE000,      0 }, 0xFFFF },
    { ACTOR_EN_BOX,  {    -11,   -340,  -6006 }, {      0, 0X8000,      0 }, 0x10C0 },
};

Vtx bdan_room_8Vtx_000190[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_000190.vtx.inc"
};

Gfx bdan_room_8DL_0006F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_000190[78], 8, 0),
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
    gsSPVertex(bdan_room_8Vtx_000190, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 1, 4, 0, 1, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 8, 11, 10, 0),
    gsSP2Triangles(12, 3, 0, 0, 10, 11, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 14, 11, 8, 0),
    gsSP2Triangles(8, 6, 16, 0, 17, 18, 5, 0),
    gsSP2Triangles(5, 1, 17, 0, 3, 19, 1, 0),
    gsSP2Triangles(3, 20, 19, 0, 6, 18, 16, 0),
    gsSP2Triangles(6, 5, 18, 0, 8, 16, 14, 0),
    gsSP2Triangles(1, 19, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 21, 24, 0),
    gsSP2Triangles(25, 24, 26, 0, 24, 23, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 26, 24, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 31, 22, 0),
    gsSP1Triangle(30, 22, 21, 0),
    gsSPVertex(&bdan_room_8Vtx_000190[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 0, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 9, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(15, 16, 5, 0, 15, 5, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 18, 17, 8, 0),
    gsSP2Triangles(12, 11, 16, 0, 12, 16, 15, 0),
    gsSP2Triangles(14, 12, 15, 0, 14, 15, 18, 0),
    gsSP2Triangles(19, 20, 10, 0, 19, 10, 9, 0),
    gsSP2Triangles(21, 19, 9, 0, 21, 9, 13, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&bdan_room_8Vtx_000190[64], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 5, 9, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0008F0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0008F0.vtx.inc"
};

Mtx bdan_room_8DL_000CC0Mtx_000000 = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , -6029652   , -375193599 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , -2147483648, -1073741824, 
};

Gfx bdan_room_8DL_000CC0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0008F0[49], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_000CC0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0008F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(7, 8, 1, 0, 8, 9, 1, 0),
    gsSP2Triangles(1, 10, 2, 0, 1, 9, 10, 0),
    gsSP2Triangles(2, 10, 4, 0, 10, 11, 4, 0),
    gsSP2Triangles(12, 4, 11, 0, 12, 5, 4, 0),
    gsSP2Triangles(13, 5, 12, 0, 8, 14, 9, 0),
    gsSP2Triangles(9, 14, 10, 0, 14, 15, 10, 0),
    gsSP2Triangles(10, 16, 11, 0, 10, 15, 16, 0),
    gsSP2Triangles(17, 12, 16, 0, 12, 11, 16, 0),
    gsSP2Triangles(18, 12, 17, 0, 19, 20, 14, 0),
    gsSP2Triangles(14, 21, 15, 0, 14, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(15, 21, 16, 0, 21, 23, 16, 0),
    gsSP2Triangles(25, 16, 23, 0, 25, 17, 16, 0),
    gsSP2Triangles(26, 18, 25, 0, 18, 17, 25, 0),
    gsSP2Triangles(25, 23, 27, 0, 23, 22, 27, 0),
    gsSP2Triangles(28, 21, 20, 0, 28, 24, 21, 0),
    gsSP2Triangles(29, 28, 20, 0, 27, 30, 25, 0),
    gsSP2Triangles(6, 5, 13, 0, 12, 18, 13, 0),
    gsSP2Triangles(26, 25, 30, 0, 1, 3, 7, 0),
    gsSP2Triangles(29, 20, 19, 0, 4, 6, 0, 0),
    gsSP1Triangle(14, 8, 19, 0),
    gsSPVertex(&bdan_room_8Vtx_0008F0[31], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 3, 0, 10, 3, 2, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(8, 16, 9, 0, 17, 15, 14, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_000EB8[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_000EB8.vtx.inc"
};

Mtx bdan_room_8DL_001038Mtx_000000 = { 
    -65536     , 0          , -65536     , -65536     , 
    65535      , 0          , 15793956   , -364576767 , 
    1258029056 , -1258029056, 1258029056 , 1258029056 , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001038[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_000EB8[12], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_001038Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_000EB8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 2, 4, 0, 1, 6, 7, 0),
    gsSP2Triangles(6, 1, 0, 0, 3, 1, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 5, 4, 0, 10, 4, 11, 0),
    gsSP2Triangles(6, 0, 8, 0, 0, 5, 10, 0),
    gsSP2Triangles(3, 7, 9, 0, 11, 4, 3, 0),
    gsSP2Triangles(8, 0, 10, 0, 3, 9, 11, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001178[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001178.vtx.inc"
};

Mtx bdan_room_8DL_001338Mtx_000000 = { 
    0          , 65536      , -65536     , 0          , 
    65535      , 0          , 19726116   , -380305407 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001338[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001178[16], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_001338Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001178, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 3, 0),
    gsSP2Triangles(6, 8, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(5, 9, 8, 0, 3, 7, 2, 0),
    gsSP2Triangles(2, 7, 10, 0, 5, 4, 11, 0),
    gsSP2Triangles(11, 4, 1, 0, 7, 8, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(14, 0, 10, 0, 14, 10, 15, 0),
    gsSP2Triangles(11, 1, 12, 0, 1, 0, 14, 0),
    gsSP2Triangles(8, 9, 13, 0, 15, 10, 8, 0),
    gsSP2Triangles(12, 1, 14, 0, 15, 8, 13, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001490[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001490.vtx.inc"
};

Mtx bdan_room_8DL_001610Mtx_000000 = { 
    0          , 0          , -65536     , 0          , 
    65535      , 0          , 15793956   , -396034047 , 
    -1258029056, -1258029056, 1258029056 , -1258029056, 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001610[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001490[12], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_001610Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001490, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 1, 0, 6, 0),
    gsSP2Triangles(0, 3, 7, 0, 0, 7, 6, 0),
    gsSP2Triangles(3, 2, 4, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 4, 5, 0, 10, 5, 11, 0),
    gsSP2Triangles(7, 3, 8, 0, 3, 4, 10, 0),
    gsSP2Triangles(1, 6, 9, 0, 11, 5, 1, 0),
    gsSP2Triangles(8, 3, 10, 0, 11, 1, 9, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001750[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001750.vtx.inc"
};

Mtx bdan_room_8DL_001910Mtx_000000 = { 
    65536      , 0          , 0          , 65536      , 
    65535      , 0          , 65316      , -399966207 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001910[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001750[16], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_001910Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001750, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 3, 5, 1, 0),
    gsSP2Triangles(1, 5, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(2, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 2, 7, 0, 11, 5, 3, 0),
    gsSP2Triangles(0, 2, 10, 0, 8, 5, 11, 0),
    gsSP2Triangles(11, 4, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 10, 9, 0, 14, 9, 15, 0),
    gsSP2Triangles(4, 0, 12, 0, 0, 10, 14, 0),
    gsSP2Triangles(8, 11, 13, 0, 15, 9, 8, 0),
    gsSP2Triangles(12, 0, 14, 0, 8, 13, 15, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001A68[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001A68.vtx.inc"
};

Mtx bdan_room_8DL_001BE8Mtx_000000 = { 
    0          , -65536     , 0          , 0          , 
    65535      , 0          , -15663324  , -396034047 , 
    -1258029056, 1258029056 , -1258029056, -1258029056, 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001BE8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001A68[12], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_001BE8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001A68, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(5, 2, 4, 0, 1, 6, 7, 0),
    gsSP2Triangles(6, 1, 0, 0, 1, 7, 3, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 5, 4, 0, 10, 4, 11, 0),
    gsSP2Triangles(6, 0, 8, 0, 0, 5, 10, 0),
    gsSP2Triangles(3, 7, 9, 0, 11, 4, 3, 0),
    gsSP2Triangles(8, 0, 10, 0, 11, 3, 9, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_001D28[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_001D28.vtx.inc"
};

Mtx bdan_room_8DL_001F58Mtx_000000 = { 
    0          , -65536     , 65536      , 0          , 
    65535      , 0          , -19595484  , -380305407 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_001F58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_001D28[23], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_001F58Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_001D28, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 3, 5, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 6, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 11, 9, 0, 10, 9, 12, 0),
    gsSP2Triangles(5, 13, 2, 0, 7, 4, 14, 0),
    gsSP2Triangles(14, 4, 1, 0, 12, 9, 15, 0),
    gsSP2Triangles(16, 14, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 0, 13, 0, 19, 13, 20, 0),
    gsSP2Triangles(14, 1, 17, 0, 1, 0, 19, 0),
    gsSP2Triangles(9, 11, 21, 0, 22, 15, 9, 0),
    gsSP2Triangles(17, 1, 19, 0, 22, 9, 21, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0020B0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0020B0.vtx.inc"
};

Mtx bdan_room_8DL_002230Mtx_000000 = { 
    -65536     , -65536     , 0          , -65536     , 
    65535      , 0          , -15663324  , -364576767 , 
    1258029056 , 1258029056 , -1258029056, 1258029056 , 
    0          , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_002230[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0020B0[12], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_002230Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0020B0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 0, 2, 0, 4, 3, 6, 0),
    gsSP2Triangles(4, 6, 7, 0, 3, 0, 5, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(5, 2, 10, 0, 5, 10, 11, 0),
    gsSP2Triangles(6, 3, 9, 0, 3, 5, 11, 0),
    gsSP2Triangles(1, 7, 8, 0, 10, 2, 1, 0),
    gsSP2Triangles(9, 3, 11, 0, 1, 8, 10, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002370[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002370.vtx.inc"
};

Mtx bdan_room_8DL_002480Mtx_000000 = { 
    0          , 0          , -1         , 0          , 
    65535      , -65536     , 12189676   , -391774207 , 
    -1258029056, -1258029056, -2083306052, 2083323904 , 
    -2085203869, 2085224448 , 0          , 0          , 
};

Gfx bdan_room_8DL_002480[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002370[5], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_002480Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002370, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 0, 4, 1, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002588[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002588.vtx.inc"
};

Mtx bdan_room_8DL_0026C8Mtx_000000 = { 
    65536      , 0          , 65535      , 0          , 
    65535      , -65536     , 1048556    , -395051007 , 
    0          , 0          , 20714      , -1161691136, 
    17726      , 1357512704 , 0          , 0          , 
};

Gfx bdan_room_8DL_0026C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002588[8], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_0026C8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002588, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 3, 0, 0),
    gsSP2Triangles(3, 6, 4, 0, 4, 7, 1, 0),
    gsSP2Triangles(1, 7, 2, 0, 6, 3, 5, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0027E0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0027E0.vtx.inc"
};

Mtx bdan_room_8DL_0028F0Mtx_000000 = { 
    0          , -65536     , 65535      , 0          , 
    -1         , -65536     , -11403284  , -392429567 , 
    -1258029056, 1258029056 , 2083341756 , 2083323904 , 
    2085245027 , 2085224448 , 0          , 0          , 
};

Gfx bdan_room_8DL_0028F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0027E0[5], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_0028F0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0027E0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 1, 0, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0029F8[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0029F8.vtx.inc"
};

Mtx bdan_room_8DL_002B38Mtx_000000 = { 
    0          , -65536     , 65535      , 0          , 
    -1         , 0          , -14680084  , -381288447 , 
    0          , 0          , -1161670422, 0          , 
    1357530430 , 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_002B38[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0029F8[8], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_002B38Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0029F8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(1, 5, 6, 0, 1, 6, 2, 0),
    gsSP2Triangles(7, 5, 4, 0, 7, 4, 3, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002C50[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002C50.vtx.inc"
};

Mtx bdan_room_8DL_002D60Mtx_000000 = { 
    -65536     , -65536     , 65535      , -65536     , 
    -1         , 0          , -12058644  , -368836607 , 
    1258029056 , 1258029056 , 2083341756 , -2083323904, 
    2085245027 , -2085224448, 0          , 0          , 
};

Gfx bdan_room_8DL_002D60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002C50[5], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_002D60Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002C50, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 3, 2, 0, 4, 1, 0, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_002E68[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_002E68.vtx.inc"
};

Mtx bdan_room_8DL_002FA8Mtx_000000 = { 
    -65536     , 0          , 65535      , -65536     , 
    65535      , 0          , -917524    , -365559807 , 
    0          , 0          , 20714      , 1161691136 , 
    17726      , -1357512704, 0          , 0          , 
};

Gfx bdan_room_8DL_002FA8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_002E68[8], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_002FA8Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_002E68, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 2, 3, 0, 3, 1, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 1, 0, 7, 0),
    gsSP2Triangles(1, 7, 5, 0, 6, 2, 4, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0030C0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0030C0.vtx.inc"
};

Mtx bdan_room_8DL_0031D0Mtx_000000 = { 
    -65536     , 0          , -1         , -65536     , 
    65535      , 0          , 11534316   , -368181247 , 
    1258029056 , -1258029056, -2083306052, -2083323904, 
    -2085203869, -2085224448, 0          , 0          , 
};

Gfx bdan_room_8DL_0031D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0030C0[5], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_0031D0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0030C0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 3, 2, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_0032D8[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_0032D8.vtx.inc"
};

Mtx bdan_room_8DL_003418Mtx_000000 = { 
    0          , 65536      , -1         , 0          , 
    65535      , 0          , 14811116   , -379322367 , 
    0          , 0          , 1161711850 , 0          , 
    -1357494978, 0          , 0          , 0          , 
};

Gfx bdan_room_8DL_003418[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_0032D8[8], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_003418Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_0032D8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 1, 0, 0, 0, 2, 5, 0),
    gsSP2Triangles(6, 2, 3, 0, 5, 2, 6, 0),
    gsSP2Triangles(3, 1, 7, 0, 7, 1, 4, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Vtx bdan_room_8Vtx_003530[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_8Vtx_003530.vtx.inc"
};

Mtx bdan_room_8DL_0036C0Mtx_000000 = { 
    65536      , 0          , 65535      , 0          , 
    0          , -65536     , -262084    , -380108799 , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 1073741824 , 536870912  , 
};

Gfx bdan_room_8DL_0036C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&bdan_room_8Vtx_003530[13], 8, 0),
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
    gsSPMatrix(&bdan_room_8DL_0036C0Mtx_000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(bdan_room_8Vtx_003530, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsSP2Triangles(8, 9, 2, 0, 9, 10, 2, 0),
    gsSP2Triangles(6, 11, 2, 0, 11, 12, 2, 0),
    gsSP2Triangles(12, 7, 2, 0, 0, 2, 10, 0),
    gsSPMatrix(&gIdentityMtx, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx bdan_room_8DL_0037E8[] = {
    gsSPDisplayList(bdan_room_8DL_0006F0),
    gsSPDisplayList(bdan_room_8DL_000CC0),
    gsSPDisplayList(bdan_room_8DL_001038),
    gsSPDisplayList(bdan_room_8DL_001338),
    gsSPDisplayList(bdan_room_8DL_001610),
    gsSPDisplayList(bdan_room_8DL_001910),
    gsSPDisplayList(bdan_room_8DL_001BE8),
    gsSPDisplayList(bdan_room_8DL_001F58),
    gsSPDisplayList(bdan_room_8DL_002230),
    gsSPDisplayList(bdan_room_8DL_002480),
    gsSPDisplayList(bdan_room_8DL_0026C8),
    gsSPDisplayList(bdan_room_8DL_0028F0),
    gsSPDisplayList(bdan_room_8DL_002B38),
    gsSPDisplayList(bdan_room_8DL_002D60),
    gsSPDisplayList(bdan_room_8DL_002FA8),
    gsSPDisplayList(bdan_room_8DL_0031D0),
    gsSPDisplayList(bdan_room_8DL_003418),
    gsSPDisplayList(bdan_room_8DL_0036C0),
    gsSPEndDisplayList(),
};
