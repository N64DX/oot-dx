#include "beneath_the_graveyard_scene.h"
#include "beneath_the_graveyard_room_1.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd beneath_the_graveyard_room_1[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&beneath_the_graveyard_room_1RoomShapeCullable_0000D0),
    SCENE_CMD_OBJECT_LIST(6, beneath_the_graveyard_room_1ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(8, beneath_the_graveyard_room_1ActorEntry_000050),
    SCENE_CMD_END(),
};

s16 beneath_the_graveyard_room_1ObjectList_000040[] = {
  //OBJECT_HAKA_OBJ,
    OBJECT_TSUBO,
    OBJECT_BAT,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
  //OBJECT_WATER_EFFECT,
    OBJECT_FIREFLY,
    OBJECT_ST,
};

ActorEntry beneath_the_graveyard_room_1ActorEntry_000050[] = {
    { ACTOR_EN_BAT,       { 1103, 88, 326 }, {    0, 0xC000, 0 }, 0xFF34 },
    { ACTOR_OBJ_SYOKUDAI, { 1270,  0, 256 }, {    0,      0, 0 }, 0x10C0 }, // Sets switch: 03
    { ACTOR_OBJ_SYOKUDAI, {  850,  0, 161 }, {    0,      0, 0 }, 0x10C0 }, // Sets switch: 03
    { ACTOR_OBJ_SYOKUDAI, {  853,  0, 480 }, {    0,      0, 0 }, 0x10C0 }, // Sets switch: 03
    { ACTOR_OBJ_TSUBO,    {  829,  0, 234 }, {    0,      0, 0 }, 0x531E },
    { ACTOR_OBJ_TSUBO,    {  835,  0, 409 }, {    0,      0, 0 }, 0x550A },
    { ACTOR_OBJ_TSUBO,    { 1270,  0, 380 }, {    0,      0, 0 }, 0x5714 },
    { ACTOR_EN_BOX,       { 1090,  0, 320 }, { 0x55, 0xC000, 0 }, 0x7003 }, // Chest: 03, on clear, Purple Rupee
};

RoomShapeCullable beneath_the_graveyard_room_1RoomShapeCullable_0000D0 = { 
    2, 7,
    beneath_the_graveyard_room_1RoomShapeCullableEntry_0000DC,
    beneath_the_graveyard_room_1RoomShapeCullableEntry_0000DC + ARRAY_COUNTU(beneath_the_graveyard_room_1RoomShapeCullableEntry_0000DC)
};

RoomShapeCullableEntry beneath_the_graveyard_room_1RoomShapeCullableEntry_0000DC[7] = {
    { {   1138,    178,    297 },     76, beneath_the_graveyard_room_1DL_005BD0, NULL },
    { {   1074,    175,    416 },     70, beneath_the_graveyard_room_1DL_0052B8, NULL },
    { {   1018,    174,    235 },     68, beneath_the_graveyard_room_1DL_004CA8, NULL },
    { {   1283,    195,    333 },     56, beneath_the_graveyard_room_1DL_004268, NULL },
    { {   1073,    142,    339 },    298, beneath_the_graveyard_room_1DL_003A00, NULL },
    { {    985,    120,    337 },    450, beneath_the_graveyard_room_1DL_001FA0, NULL },
    { {    985,     90,    320 },    440, beneath_the_graveyard_room_1DL_0008F8, NULL },
};

s32 beneath_the_graveyard_room_1_terminatorMaybe_00014C = { 0x01000000 };

Vtx beneath_the_graveyard_room_1Vtx_000150[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_000150.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_000450[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_000450.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_000910[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_000910.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_000CF8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_000CF8.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_000EF8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_000EF8.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_001348[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_001348.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_001AB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_001AB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_001FD0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_001FD0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_0024F0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_0024F0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_002950[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_002950.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_002AF0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_002AF0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_002E10[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_002E10.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_003050[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_003050.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_0033D0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_0033D0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_003770[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_003770.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_003A48[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_003A48.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_003CD0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_003CD0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_003F68[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_003F68.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_004288[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_004288.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_004468[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_004468.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_004710[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_004710.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_0049A8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_0049A8.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_004CD0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_004CD0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_004F88[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_004F88.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_0052D0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_0052D0.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_005598[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_005598.vtx.inc"
};

Vtx beneath_the_graveyard_room_1Vtx_005860[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Vtx_005860.vtx.inc"
};

u64 beneath_the_graveyard_room_1Tex_005C30[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Tex_005C30.ci8.inc.c"
};

u64 beneath_the_graveyard_room_1Tex_006430[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Tex_006430.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_1Tex_006C30[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_1Tex_006C30.ci8.inc.c"
};

Gfx beneath_the_graveyard_room_1DL_000340[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000150[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C460),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_0063A8, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_000150, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 14, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 13, 0),
    gsSP2Triangles(17, 18, 11, 0, 17, 11, 19, 0),
    gsSP2Triangles(1, 9, 14, 0, 1, 14, 2, 0),
    gsSP2Triangles(20, 21, 7, 0, 20, 7, 22, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_000670[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000450[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_000450, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000450[10], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 7, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000450[18], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000450[22], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0008F8[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_000340),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_000670),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_000BD0[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000910[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x027C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_000910, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 10, 11, 0, 6, 7, 4, 0),
    gsSP2Triangles(4, 19, 20, 0, 4, 20, 18, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000910[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_000E08[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000CF8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C460),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_0063A8, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_000CF8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 7, 0, 3, 8, 6, 0),
    gsSP2Triangles(7, 3, 6, 0, 5, 8, 3, 0),
    gsSP1Triangle(2, 7, 0, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_001198[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000EF8[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_006C30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_000EF8, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 3, 6, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_006C30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x00FC),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_000EF8[7], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 2, 6, 0, 6, 7, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 3, 11, 4, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 7, 0),
    gsSP2Triangles(15, 13, 9, 0, 16, 8, 17, 0),
    gsSP2Triangles(12, 6, 18, 0, 19, 4, 11, 0),
    gsSP2Triangles(20, 5, 4, 0, 21, 2, 11, 0),
    gsSP2Triangles(4, 19, 22, 0, 23, 5, 24, 0),
    gsSP2Triangles(1, 25, 19, 0, 9, 8, 26, 0),
    gsSP1Triangle(7, 9, 13, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_001918[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001348[85], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C460),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_0063A8, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x0FFC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_001348, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 7, 6, 0, 13, 11, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(20, 16, 21, 0, 19, 0, 22, 0),
    gsSP2Triangles(23, 24, 10, 0, 22, 2, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 26, 29, 0),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001348[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 9, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 2, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 13, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 0, 15, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 0, 11, 0),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001348[61], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 3, 0, 0, 6, 5, 7, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 13, 5, 6, 0),
    gsSP2Triangles(9, 11, 13, 0, 14, 15, 1, 0),
    gsSP2Triangles(16, 17, 15, 0, 14, 18, 16, 0),
    gsSP2Triangles(15, 14, 16, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 19, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_001E90[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001AB0[54], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_006430, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x037C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_001AB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 8, 19, 20, 0),
    gsSP2Triangles(8, 4, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 15, 0, 26, 19, 5, 0),
    gsSP2Triangles(5, 27, 0, 0, 18, 28, 29, 0),
    gsSP1Triangle(30, 21, 29, 0),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001AB0[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 8, 0, 19, 20, 12, 0),
    gsSP2Triangles(9, 20, 21, 0, 22, 21, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_001FA0[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_000BD0),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_000E08),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_001198),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_001918),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_001E90),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0023A0[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001FD0[53], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_001FD0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 7, 0, 6, 7, 8, 0),
    gsSP2Triangles(8, 7, 9, 0, 10, 11, 1, 0),
    gsSP2Triangles(1, 8, 12, 0, 1, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 11, 0),
    gsSP2Triangles(11, 6, 8, 0, 11, 8, 1, 0),
    gsSP2Triangles(15, 22, 24, 0, 15, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 30, 28, 0, 23, 3, 6, 0),
    gsSP2Triangles(6, 11, 23, 0, 31, 6, 3, 0),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_001FD0[32], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 1, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 12, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 0, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_002830[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_0024F0[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_0024F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 3, 22, 0, 23, 0, 12, 0),
    gsSP2Triangles(13, 24, 14, 0, 25, 26, 21, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 7, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_0024F0[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_002A20[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_002950[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_002950, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_002D00[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_002AF0[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_002AF0, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 16, 1, 18, 0),
    gsSP2Triangles(7, 6, 19, 0, 7, 19, 20, 0),
    gsSP2Triangles(21, 10, 17, 0, 21, 17, 22, 0),
    gsSP2Triangles(20, 23, 24, 0, 20, 24, 12, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_002F60[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_002E10[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_002E10, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0032B0[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_003050[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_003050, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 16, 1, 18, 0),
    gsSP2Triangles(7, 19, 20, 0, 7, 20, 21, 0),
    gsSP2Triangles(22, 23, 9, 0, 22, 9, 8, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 12, 0),
    gsSP2Triangles(11, 10, 17, 0, 11, 17, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_003650[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_0033D0[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_0033D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 16, 1, 18, 0),
    gsSP2Triangles(7, 19, 20, 0, 7, 20, 21, 0),
    gsSP2Triangles(22, 23, 9, 0, 22, 9, 24, 0),
    gsSP2Triangles(21, 25, 26, 0, 21, 26, 12, 0),
    gsSP2Triangles(27, 10, 17, 0, 27, 17, 28, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_003900[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_003770[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_003770, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(11, 10, 1, 0, 11, 1, 0, 0),
    gsSP2Triangles(7, 16, 13, 0, 7, 13, 12, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_003A00[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_0023A0),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_002830),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_002A20),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_002D00),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_002F60),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_0032B0),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_003650),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_003900),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_003BD8[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_003A48[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_003A48, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 6, 0, 12, 13, 1, 0),
    gsSP2Triangles(12, 1, 14, 0, 15, 16, 4, 0),
    gsSP1Triangle(15, 4, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_003E70[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_003CD0[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_003CD0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 9, 12, 13, 0),
    gsSP2Triangles(9, 13, 10, 0, 14, 15, 16, 0),
    gsSP1Triangle(14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004158[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_003F68[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_003F68, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(8, 12, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 8, 21, 22, 0),
    gsSP2Triangles(8, 22, 9, 0, 21, 8, 0, 0),
    gsSP1Triangle(21, 0, 6, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004268[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_003BD8),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_003E70),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_004158),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004388[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_004288[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_004288, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004618[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_004468[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_004468, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(15, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0048B0[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_004710[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_004710, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 13, 16, 17, 0),
    gsSP1Triangle(13, 17, 1, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004B98[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_0049A8[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_0049A8, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 1, 0),
    gsSP2Triangles(11, 1, 12, 0, 13, 7, 10, 0),
    gsSP2Triangles(13, 10, 14, 0, 7, 13, 15, 0),
    gsSP2Triangles(7, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 18, 21, 6, 0),
    gsSP1Triangle(18, 6, 22, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004CA8[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_004388),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_004618),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_0048B0),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_004B98),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_004E90[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_004CD0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_004CD0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 14, 17, 18, 0),
    gsSP1Triangle(14, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0051A8[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_004F88[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_004F88, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 8, 1, 0),
    gsSP2Triangles(12, 1, 13, 0, 14, 8, 11, 0),
    gsSP2Triangles(14, 11, 15, 0, 8, 16, 17, 0),
    gsSP2Triangles(8, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP1Triangle(23, 25, 5, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0052B8[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_004E90),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_0051A8),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_0054A0[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_0052D0[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_0052D0, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP1Triangle(17, 19, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_005768[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_005598[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_005598, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP1Triangle(17, 19, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_005AC0[] = {
    gsSPVertex(&beneath_the_graveyard_room_1Vtx_005860[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_1Tex_005C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_1Vtx_005860, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 17, 20, 21, 0),
    gsSP2Triangles(17, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 28, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_1DL_005BD0[] = {
    gsSPDisplayList(beneath_the_graveyard_room_1DL_0054A0),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_005768),
    gsSPDisplayList(beneath_the_graveyard_room_1DL_005AC0),
    gsSPEndDisplayList(),
};
