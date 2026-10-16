#include "stone_tower_temple_inverted_scene.h"
#include "stone_tower_temple_inverted_room_10.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "item.h"

SceneCmd stone_tower_temple_inverted_room_10[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_inverted_room_10RoomShapeCullable_000090),
    SCENE_CMD_OBJECT_LIST(12, stone_tower_temple_inverted_room_10ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(1, stone_tower_temple_inverted_room_10ActorEntry_000070),
    SCENE_CMD_END(),
};

s16 stone_tower_temple_inverted_room_10ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_WATER_EFFECT,
    OBJECT_BDOOR,
    OBJECT_BOX,
    OBJECT_D_HSBLOCK,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_ICEFLOE,
  //OBJECT_SPINYROLL,
  //OBJECT_WDHAND,
    OBJECT_NY,
  //OBJECT_PP,
    OBJECT_BB,
  //OBJECT_FAMOS,
  //OBJECT_EG,
};

ActorEntry stone_tower_temple_inverted_room_10ActorEntry_000070[] = {
    { ACTOR_EN_BOX,         { 0,   20, -3420 }, { GID_ARROW_LIGHT, 0, 0 }, 0x101B }, // Chest: 1B, Checks clear: 10, Light Arrow
};

RoomShapeCullable stone_tower_temple_inverted_room_10RoomShapeCullable_000090 = { 
    2, 6,
    stone_tower_temple_inverted_room_10RoomShapeCullableEntry_00009C,
    stone_tower_temple_inverted_room_10RoomShapeCullableEntry_00009C + ARRAY_COUNTU(stone_tower_temple_inverted_room_10RoomShapeCullableEntry_00009C)
};

RoomShapeCullableEntry stone_tower_temple_inverted_room_10RoomShapeCullableEntry_00009C[6] = {
    { {    480,    -60,  -3420 },   -122, stone_tower_temple_inverted_room_10DL_002CC8, NULL },
    { {      0,   -532,  -3420 },    298, NULL, stone_tower_temple_inverted_room_10DL_004620 },
    { {      0,   -256,  -3390 },    714, stone_tower_temple_inverted_room_10DL_0023E0, NULL },
    { {    217,   -138,  -3180 },    430, stone_tower_temple_inverted_room_10DL_000FC8, NULL },
    { {      0,   -295,  -3420 },    330, stone_tower_temple_inverted_room_10DL_000C00, NULL },
    { {    480,   -138,  -3420 },    202, stone_tower_temple_inverted_room_10DL_0006E0, NULL },
};

s32 stone_tower_temple_inverted_room_10_terminatorMaybe_0000FC = { 0x01000000 };

Vtx stone_tower_temple_inverted_room_10Vtx_000100[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Vtx_000100.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_10Vtx_0009E0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Vtx_0009E0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_10Vtx_000D08[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Vtx_000D08.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_10Vtx_001240[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Vtx_001240.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_10Vtx_002B88[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Vtx_002B88.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_10Vtx_0041E0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Vtx_0041E0.vtx.inc"
};

u64 stone_tower_temple_inverted_room_10Tex_002DD8[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Tex_002DD8.ia8.inc.c"
};

u64 stone_tower_temple_inverted_room_10Tex_0035D8[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Tex_0035D8.rgba16.inc.c"
};

u64 stone_tower_temple_inverted_room_10Tex_003DD8[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Tex_003DD8.ci8.inc.c"
};

u64 stone_tower_temple_inverted_room_10Tex_0047D0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Tex_0047D0.rgba16.inc.c"
};

u64 stone_tower_temple_inverted_room_10Tex_004FD0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_10Tex_004FD0.rgba16.inc.c"
};

Gfx stone_tower_temple_inverted_room_10DL_0006E0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000100[86], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00E900, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_10Vtx_000100, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 14, 17, 0, 16, 10, 14, 0),
    gsSP2Triangles(19, 20, 16, 0, 18, 17, 21, 0),
    gsSP2Triangles(20, 8, 16, 0, 8, 10, 16, 0),
    gsSP2Triangles(21, 17, 14, 0, 21, 14, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000100[22], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000100[34], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000100[66], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000100[74], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_10DL_000C00[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_0009E0[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_10Vtx_0009E0, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 4, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 13, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_10DL_000FC8[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000D08[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00E900, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_10Vtx_000D08, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000D08[8], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000D08[20], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011680, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_000D08[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_10DL_0023E0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[274], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00E900, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_10Vtx_001240, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(11, 18, 8, 0, 16, 15, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 14, 24, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 29, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FE00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[43], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 5, 0, 3, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 25, 0, 28, 25, 24, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[75], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 4, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 2, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(15, 20, 17, 0, 15, 17, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_10Tex_003DD8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[96], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 14, 0, 13, 18, 15, 0),
    gsSP2Triangles(13, 15, 14, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
    gsSP2Triangles(19, 23, 24, 0, 19, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[158], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[190], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010C00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[205], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 3, 9, 0, 10, 11, 0, 0),
    gsSP2Triangles(12, 2, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(1, 15, 16, 0, 1, 16, 17, 0),
    gsSP2Triangles(9, 3, 12, 0, 3, 2, 12, 0),
    gsSP2Triangles(11, 15, 0, 0, 15, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010D80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[223], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 6, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(11, 18, 19, 0, 11, 19, 12, 0),
    gsSP2Triangles(11, 20, 21, 0, 11, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(30, 25, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[255], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[258], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011680, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_001240[270], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_10DL_002CC8[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_002B88[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xD7, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_10Tex_002DD8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_temple_inverted_room_10Tex_0035D8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_10Vtx_002B88, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_10DL_004620[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_0041E0[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, SHADE, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_10Tex_004FD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_temple_inverted_room_10Tex_0047D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_10Vtx_0041E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(1, 0, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(7, 4, 8, 0, 4, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 4, 0, 10, 4, 14, 0),
    gsSP2Triangles(11, 10, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(16, 4, 17, 0, 4, 18, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 4, 0, 19, 4, 23, 0),
    gsSP2Triangles(20, 19, 23, 0, 20, 23, 24, 0),
    gsSP2Triangles(25, 4, 26, 0, 4, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSP1Triangle(28, 31, 4, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_10Vtx_0041E0[32], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 1, 6, 0),
    gsSP2Triangles(1, 7, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 11, 13, 0),
    gsSP2Triangles(11, 9, 13, 0, 14, 15, 7, 0),
    gsSP2Triangles(15, 6, 7, 0, 5, 6, 4, 0),
    gsSP2Triangles(6, 15, 4, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 19, 21, 0),
    gsSP2Triangles(19, 17, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 25, 27, 0),
    gsSP1Triangle(25, 23, 27, 0),
    gsSPEndDisplayList(),
};
