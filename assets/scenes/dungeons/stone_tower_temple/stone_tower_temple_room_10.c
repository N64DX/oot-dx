#include "stone_tower_temple_scene.h"
#include "stone_tower_temple_room_10.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "item.h"

SceneCmd stone_tower_temple_room_10[] = {
    SCENE_CMD_ECHO_SETTINGS(13),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_room_10RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(13, stone_tower_temple_room_10ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(1, stone_tower_temple_room_10ActorEntry_000074),
    SCENE_CMD_END(),
};

s16 stone_tower_temple_room_10ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_BOX,
    OBJECT_KIBAKO2,
    OBJECT_KUSA,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_D_HSBLOCK,
    OBJECT_ICEFLOE,
  //OBJECT_SPINYROLL,
    OBJECT_NY,
  //OBJECT_WDHAND,
  //OBJECT_PR,
    OBJECT_CROW,
  //OBJECT_EG,
  //OBJECT_PP,
    OBJECT_JSO,
};

ActorEntry stone_tower_temple_room_10ActorEntry_000074[] = {
  //{ ACTOR_EN_JSO2,        {   0,  -20, -3420 }, {               0, 0, 0 }, 0x0000 },
  //{ ACTOR_OBJ_ROOMTIMER,  { 375,  -20, -3420 }, {               0, 0, 0 }, 0x1DFF },
    { ACTOR_EN_BOX,         {   0,  -20, -3420 }, { GID_ARROW_LIGHT, 0, 0 }, 0x101B }, // Chest: 1B, Checks clear: 10, Light Arrow
};

RoomShapeCullable stone_tower_temple_room_10RoomShapeCullable_0000C0 = { 
    2, 4,
    stone_tower_temple_room_10RoomShapeCullableEntry_0000CC,
    stone_tower_temple_room_10RoomShapeCullableEntry_0000CC + ARRAY_COUNTU(stone_tower_temple_room_10RoomShapeCullableEntry_0000CC)
};

RoomShapeCullableEntry stone_tower_temple_room_10RoomShapeCullableEntry_0000CC[4] = {
    { {    480,     60,  -3420 },   -122, stone_tower_temple_room_10DL_002918, NULL },
    { {      0,    256,  -3390 },    714, stone_tower_temple_room_10DL_001220, NULL },
    { {    217,    137,  -3225 },    450, stone_tower_temple_room_10DL_0020F8, NULL },
    { {      0,    295,  -3420 },    330, stone_tower_temple_room_10DL_0026D0, NULL },
};

s32 stone_tower_temple_room_10_terminatorMaybe_00010C = { 0x01000000 };

Vtx stone_tower_temple_room_10Vtx_000110[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Vtx_000110.vtx.inc"
};

Vtx stone_tower_temple_room_10Vtx_001918[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Vtx_001918.vtx.inc"
};

Vtx stone_tower_temple_room_10Vtx_0024B0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Vtx_0024B0.vtx.inc"
};

Vtx stone_tower_temple_room_10Vtx_0027D8[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Vtx_0027D8.vtx.inc"
};

u64 stone_tower_temple_room_10Tex_002A20[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Tex_002A20.ia8.inc.c"
};

u64 stone_tower_temple_room_10Tex_003220[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Tex_003220.rgba16.inc.c"
};

u64 stone_tower_temple_room_10Tex_003A20[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Tex_003A20.ci8.inc.c"
};

u64 stone_tower_temple_room_10Tex_003E20[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Tex_003E20.ci8.inc.c"
};

u64 stone_tower_temple_room_10Tex_004220[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_10Tex_004220.ci8.inc.c"
};

Gfx stone_tower_temple_room_10DL_001220[] = {
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[265], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0106B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_10Vtx_000110, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 7, 9, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 24, 27, 0),
    gsSP2Triangles(28, 29, 0, 0, 28, 30, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010BB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[43], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(29, 28, 23, 0, 29, 23, 22, 0),
    gsSP2Triangles(30, 31, 1, 0, 30, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_10Tex_003A20, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[75], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(8, 7, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 1, 0, 11, 1, 13, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_10Tex_003E20, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[96], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 13, 17, 0, 18, 8, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[124], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 14, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[155], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[187], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0111B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[203], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 8, 9, 0, 3, 2, 8, 0),
    gsSP2Triangles(10, 6, 11, 0, 10, 7, 6, 0),
    gsSP2Triangles(8, 2, 7, 0, 8, 7, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(9, 8, 16, 0, 10, 11, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011330, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[221], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 1, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 3, 27, 0),
    gsSP2Triangles(28, 24, 29, 0, 30, 10, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_000110[253], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_10DL_0020F8[] = {
    gsSPVertex(&stone_tower_temple_room_10Vtx_001918[118], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0106B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_10Vtx_001918, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 12, 19, 0, 12, 8, 19, 0),
    gsSP2Triangles(19, 20, 16, 0, 21, 18, 17, 0),
    gsSP2Triangles(19, 8, 10, 0, 19, 10, 20, 0),
    gsSP2Triangles(13, 12, 18, 0, 13, 18, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_001918[26], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_001918[50], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_10Vtx_001918[82], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_001918[90], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_10Tex_004220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_10Vtx_001918[114], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_10DL_0026D0[] = {
    gsSPVertex(&stone_tower_temple_room_10Vtx_0024B0[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_10Vtx_0024B0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 6, 0),
    gsSP2Triangles(5, 13, 14, 0, 5, 14, 15, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 19, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_10DL_002918[] = {
    gsSPVertex(&stone_tower_temple_room_10Vtx_0027D8[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xD7, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_room_10Tex_002A20, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_temple_room_10Tex_003220, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_10Vtx_0027D8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSPEndDisplayList(),
};
