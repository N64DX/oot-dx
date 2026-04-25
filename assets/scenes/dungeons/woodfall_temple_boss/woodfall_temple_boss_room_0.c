#include "woodfall_temple_boss_scene.h"
#include "woodfall_temple_boss_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd woodfall_temple_boss_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_BOSS, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 3),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_boss_room_0RoomShapeCullable_0001F0),
    SCENE_CMD_OBJECT_LIST(13, woodfall_temple_boss_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(21, woodfall_temple_boss_room_0ActorEntry_000050),
    SCENE_CMD_END(),
};

s16 woodfall_temple_boss_room_0ObjectList_000040[] = {
    OBJECT_NUMA_OBJ,
    OBJECT_BDOOR,
    OBJECT_WARP1,
    OBJECT_GI_HEARTS,
    OBJECT_KUSA,
    OBJECT_DEKUNUTS,
    OBJECT_BUFFDEKU,
    OBJECT_SYOKUDAI,
    OBJECT_DEKUBABA,
    OBJECT_ZF,
    OBJECT_DINOFOS,
    OBJECT_SK2,
    OBJECT_IK,
};

ActorEntry woodfall_temple_boss_room_0ActorEntry_000050[] = {
    { ACTOR_EN_DEKUNUTS,  {    0 , 0,    0 }, { 0, 0, 0 }, 0x03FE },
    { ACTOR_EN_KUSA,      { -315,  0, -690 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      {  315,  0, -690 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { -390,  0, -660 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      {  390,  0, -660 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      { -660,  0, -390 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      {  660,  0, -390 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { -690,  0, -315 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      {  690,  0, -315 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      { -690,  0,  315 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      {  690,  0,  315 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { -660,  0,  390 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      {  660,  0,  390 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      {  390,  0,  660 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { -390,  0,  660 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      {  315,  0,  690 }, { 0, 0, 0 }, 0x007B },
    { ACTOR_EN_KUSA,      { -315,  0,  690 }, { 0, 0, 0 }, 0x002B },
    { ACTOR_OBJ_SYOKUDAI, {  360,  0,  690 }, { 0, 0, 0 }, 0x1050 }, // Sets switch: 0x10
    { ACTOR_OBJ_SYOKUDAI, { -360,  0,  690 }, { 0, 0, 0 }, 0x1050 }, // Sets switch: 0x10
    { ACTOR_EN_KAREBABA,  {  690,  0,    0 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_KAREBABA,  { -690,  0,    0 }, { 0, 0, 0 }, 0x0000 },
};

RoomShapeCullable woodfall_temple_boss_room_0RoomShapeCullable_0001F0 = { 
    2, 7,
    woodfall_temple_boss_room_0RoomShapeCullableEntry_0001FC,
    woodfall_temple_boss_room_0RoomShapeCullableEntry_0001FC +
    ARRAY_COUNTU(woodfall_temple_boss_room_0RoomShapeCullableEntry_0001FC)
};

RoomShapeCullableEntry woodfall_temple_boss_room_0RoomShapeCullableEntry_0001FC[7] = {
    { {      0,      0,      0 },    846, woodfall_temple_boss_room_0DL_000D58, NULL },
    { {      0,    100,    765 },    144, woodfall_temple_boss_room_0DL_0014F0, NULL },
    { {      0,   1560,      0 },    552, woodfall_temple_boss_room_0DL_001B90, NULL },
    { {      0,    390,   -750 },    552, woodfall_temple_boss_room_0DL_0019F0, NULL },
    { {      0,    150,      0 },    860, woodfall_temple_boss_room_0DL_0011A0, NULL },
    { {      0,    540,      0 },    880, woodfall_temple_boss_room_0DL_001830, NULL },
    { {      0,   1170,      0 },    932, woodfall_temple_boss_room_0DL_000660, NULL },
};

s32 woodfall_temple_boss_room_0_terminatorMaybe_00026C = { 0x01000000 };

Vtx woodfall_temple_boss_room_0Vtx_000270[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_000270.vtx.inc"
};

Vtx woodfall_temple_boss_room_0Vtx_0007A8[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_0007A8.vtx.inc"
};

Vtx woodfall_temple_boss_room_0Vtx_000F20[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_000F20.vtx.inc"
};

Vtx woodfall_temple_boss_room_0Vtx_0012B0[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_0012B0.vtx.inc"
};

Vtx woodfall_temple_boss_room_0Vtx_0015F0[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_0015F0.vtx.inc"
};

Vtx woodfall_temple_boss_room_0Vtx_001930[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_001930.vtx.inc"
};

Vtx woodfall_temple_boss_room_0Vtx_001AC0[] = {
#include "assets/scenes/dungeons/woodfall_temple_boss/woodfall_temple_boss_room_0Vtx_001AC0.vtx.inc"
};

Gfx woodfall_temple_boss_room_0DL_000660[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_000270[55], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_001FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_000270, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 15, 0),
    gsSP2Triangles(21, 15, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 24, 26, 0, 27, 26, 28, 0),
    gsSP2Triangles(29, 21, 23, 0, 29, 23, 30, 0),
    gsSP1Triangle(31, 18, 20, 0),
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_000270[32], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(19, 21, 22, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_000D58[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_0007A8[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_0017B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_0007A8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 1, 6, 0),
    gsSP2Triangles(8, 1, 7, 0, 5, 1, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 10, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
    gsSP2Triangles(19, 18, 15, 0, 19, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 22, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(31, 30, 27, 0),
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_0007A8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 0, 8, 0),
    gsSP2Triangles(7, 8, 6, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 12, 0),
    gsSP2Triangles(15, 12, 11, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 20, 19, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 28, 30, 0),
    gsSP2Triangles(29, 26, 28, 0, 29, 26, 28, 0),
    gsSP2Triangles(29, 28, 30, 0, 3, 4, 5, 0),
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_0007A8[63], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 1, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_0011A0[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_000F20[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_0007B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_000F20, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(2, 20, 23, 0, 2, 23, 3, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_0014F0[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_0012B0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_001FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_0012B0, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 12, 14, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_001830[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_0015F0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_000FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_0015F0, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_0019F0[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_001930[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_0027B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_001930, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_001B90[] = {
    gsSPVertex(&woodfall_temple_boss_room_0Vtx_001AC0[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_boss_sceneTLUT_002FB0),
    gsDPLoadTextureBlock(woodfall_temple_boss_sceneTex_001FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(woodfall_temple_boss_room_0Vtx_001AC0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(2, 1, 4, 0, 4, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_boss_room_0DL_001C68[] = {
    gsSPDisplayList(woodfall_temple_boss_room_0DL_000660),
    gsSPDisplayList(woodfall_temple_boss_room_0DL_000D58),
    gsSPDisplayList(woodfall_temple_boss_room_0DL_0011A0),
    gsSPDisplayList(woodfall_temple_boss_room_0DL_0014F0),
    gsSPDisplayList(woodfall_temple_boss_room_0DL_001830),
    gsSPDisplayList(woodfall_temple_boss_room_0DL_0019F0),
    gsSPDisplayList(woodfall_temple_boss_room_0DL_001B90),
    gsSPEndDisplayList(),
};
