#include "beneath_the_graveyard_scene.h"
#include "beneath_the_graveyard_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd beneath_the_graveyard_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_HIDE_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&beneath_the_graveyard_room_0RoomShapeCullable_0000E0),
    SCENE_CMD_OBJECT_LIST(8, beneath_the_graveyard_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(8, beneath_the_graveyard_room_0ActorEntry_000054),
    SCENE_CMD_END(),
};

s16 beneath_the_graveyard_room_0ObjectList_000040[] = {
    OBJECT_HAKA_OBJ,
    OBJECT_TSUBO,
    OBJECT_BAT,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_WATER_EFFECT,
    OBJECT_FIREFLY,
    OBJECT_ST,
  //OBJECT_PO_COMPOSER,
};

ActorEntry beneath_the_graveyard_room_0ActorEntry_000054[] = {
    { ACTOR_OBJ_MURE3,       {  -99,   0, -300 }, { 0, 0, 0 }, 0x402D },
    { ACTOR_EN_WATER_EFFECT, {  -43, 239,  317 }, { 0, 0, 0 }, 0x00FF },
    { ACTOR_EN_WATER_EFFECT, {  112, 246,  344 }, { 0, 0, 0 }, 0x00FF },
    { ACTOR_OBJ_SYOKUDAI,    {  426,   0,  275 }, { 0, 0, 0 }, 0x287F },
    { ACTOR_OBJ_TSUBO,       {  303,   0,  269 }, { 0, 0, 0 }, 0x450A },
    { ACTOR_OBJ_TSUBO,       {  330,   0,  397 }, { 0, 0, 0 }, 0x471E },
    { ACTOR_OBJ_TSUBO,       { -200,   0, -330 }, { 0, 0, 0 }, 0x590E },
    { ACTOR_EN_TEST2,        { -120,   0, -520 }, { 0, 0, 0 }, 0x0000 },
};

RoomShapeCullable beneath_the_graveyard_room_0RoomShapeCullable_0000E0 = { 
    2, 7,
    beneath_the_graveyard_room_0RoomShapeCullableEntry_0000EC,
    beneath_the_graveyard_room_0RoomShapeCullableEntry_0000EC + ARRAY_COUNTU(beneath_the_graveyard_room_0RoomShapeCullableEntry_0000EC)
};

RoomShapeCullableEntry beneath_the_graveyard_room_0RoomShapeCullableEntry_0000EC[7] = {
    { {     30,    -60,   -203 },    694, beneath_the_graveyard_room_0DL_005B40, NULL },
    { {     35,     34,     15 },    628, beneath_the_graveyard_room_0DL_004C78, NULL },
    { {   -127,    168,    376 },    152, NULL, beneath_the_graveyard_room_0DL_006F28 },
    { {    -56,    184,    -54 },    170, NULL, beneath_the_graveyard_room_0DL_006CF0 },
    { {      1,    -69,     29 },    360, beneath_the_graveyard_room_0DL_002D68, NULL },
    { {    190,     87,   -220 },    720, beneath_the_graveyard_room_0DL_001D48, NULL },
    { {    130,     55,   -218 },    740, beneath_the_graveyard_room_0DL_001520, NULL },
};

s32 beneath_the_graveyard_room_0_terminatorMaybe_00015C = { 0x01000000 };

Vtx beneath_the_graveyard_room_0Vtx_000160[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_000160.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_000360[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_000360.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_000520[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_000520.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_0006E0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_0006E0.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_0009B8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_0009B8.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_000B80[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_000B80.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_000E70[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_000E70.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_001160[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_001160.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_001568[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_001568.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_0018D8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_0018D8.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_001B20[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_001B20.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_001D68[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_001D68.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_001F68[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_001F68.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_0021B8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_0021B8.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_002398[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_002398.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_002578[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_002578.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_002758[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_002758.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_002958[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_002958.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_002B38[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_002B38.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_002DB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_002DB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_003528[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_003528.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_003850[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_003850.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_003B70[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_003B70.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_003EB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_003EB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_004198[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_004198.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_0043C8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_0043C8.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_004CB8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_004CB8.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_004F18[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_004F18.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_005110[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_005110.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_0053F0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_0053F0.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_005688[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_005688.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_005940[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_005940.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_006BB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_006BB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_0Vtx_006DE8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Vtx_006DE8.vtx.inc"
};


u64 beneath_the_graveyard_room_0Tex_005BA8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Tex_005BA8.i4.inc.c"
};

u64 beneath_the_graveyard_room_0Tex_005FA8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Tex_005FA8.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_0Tex_0061A8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Tex_0061A8.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_0Tex_007038[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Tex_007038.ia16.inc.c"
};

u64 beneath_the_graveyard_room_0Tex_007838[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_0Tex_007838.rgba16.inc.c"
};

Gfx beneath_the_graveyard_room_0DL_000270[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000160[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_000160, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 0, 2, 0, 5, 2, 6, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 0, 5, 0),
    gsSP1Triangle(7, 5, 8, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_000440[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000360[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x017C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_000360, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_000600[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000520[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x017C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_000520, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_0008A0[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0006E0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x017C, 0x03FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_0006E0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 4, 6, 1, 0),
    gsSP2Triangles(1, 7, 2, 0, 3, 8, 0, 0),
    gsSP2Triangles(0, 4, 1, 0, 9, 5, 10, 0),
    gsSP2Triangles(10, 11, 9, 0, 4, 12, 13, 0),
    gsSP2Triangles(4, 13, 6, 0, 5, 9, 4, 0),
    gsSP2Triangles(14, 15, 3, 0, 2, 16, 17, 0),
    gsSP2Triangles(14, 3, 2, 0, 14, 2, 17, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 14, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_000A98[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0009B8[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_0009B8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(1, 5, 2, 0, 4, 0, 2, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_000D10[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000B80[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C460),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_0063A8, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_000B80, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(10, 4, 5, 0, 10, 5, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_0Tex_0061A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000B80[12], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001000[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000E70[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C460),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_0063A8, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_000E70, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 7, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_0Tex_0061A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_000E70[12], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001320[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001160[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x057C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_001160, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001160[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001160[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001520[] = {
    gsSPDisplayList(beneath_the_graveyard_room_0DL_000270),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_000440),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_000600),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_0008A0),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_000A98),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_000D10),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_001000),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_001320),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_0016E8[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001568[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x06FC, 0x03FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_001568, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x03FC),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001568[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x03FC),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001568[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001A38[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0018D8[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_0018D8, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 5, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001C60[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001B20[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008840, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_001B20, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 5, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(7, 11, 0, 0, 7, 0, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001D48[] = {
    gsSPDisplayList(beneath_the_graveyard_room_0DL_0016E8),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_001A38),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_001C60),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_001E78[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001D68[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_001D68, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 6, 0),
    gsSP2Triangles(7, 3, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(4, 7, 0, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 8, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_0020C8[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_001F68[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_001F68, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 3, 11, 0, 10, 11, 0, 0),
    gsSP2Triangles(12, 10, 0, 0, 12, 0, 8, 0),
    gsSP1Triangle(8, 0, 13, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_0022A8[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0021B8[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_0021B8, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 3, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(4, 6, 0, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_002488[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002398[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_002398, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 3, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(4, 6, 0, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_002668[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002578[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_002578, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 3, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(4, 6, 0, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_002868[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002758[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_002758, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 6, 2, 0),
    gsSP2Triangles(7, 3, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(8, 7, 0, 0, 8, 0, 6, 0),
    gsSP1Triangle(6, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_002A48[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002958[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_002958, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 3, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(4, 6, 0, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_002C78[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002B38[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_002B38, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 3, 10, 0, 9, 10, 0, 0),
    gsSP2Triangles(4, 9, 0, 0, 4, 0, 5, 0),
    gsSP1Triangle(5, 0, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_002D68[] = {
    gsSPDisplayList(beneath_the_graveyard_room_0DL_001E78),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_0020C8),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_0022A8),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_002488),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_002668),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_002868),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_002A48),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_002C78),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_003370[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002DB0[84], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_002DB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 0, 6, 0, 6, 0, 7, 0),
    gsSP2Triangles(8, 1, 9, 0, 10, 0, 11, 0),
    gsSP2Triangles(1, 0, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 26, 29, 0),
    gsSP2Triangles(30, 29, 31, 0, 23, 18, 21, 0),
    gsSP1Triangle(23, 21, 24, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002DB0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 4, 7, 0, 9, 7, 10, 0),
    gsSP2Triangles(12, 0, 3, 0, 12, 3, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 18, 21, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 20, 0, 15, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 26, 0),
    gsSP2Triangles(27, 26, 29, 0, 29, 30, 27, 0),
    gsSP1Triangle(25, 24, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002DB0[64], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(7, 4, 6, 0, 8, 9, 7, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_002DB0[74], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 4, 0, 3, 9, 0, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_003748[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_003528[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008840, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_005FA8, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_003528, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 12, 0, 0),
    gsSP2Triangles(2, 6, 13, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 7, 9, 0, 15, 17, 9, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_003528[22], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_003A70[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_003850[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_003850, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 5, 15, 0),
    gsSP2Triangles(16, 4, 17, 0, 5, 14, 0, 0),
    gsSP2Triangles(12, 18, 19, 0, 20, 13, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 8, 9, 6, 0),
    gsSP1Triangle(17, 25, 16, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_003DA0[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_003B70[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_003B70, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 8, 11, 0, 9, 11, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 19, 5, 0, 2, 3, 11, 0),
    gsSP2Triangles(4, 18, 22, 0, 7, 23, 24, 0),
    gsSP2Triangles(25, 13, 12, 0, 24, 23, 20, 0),
    gsSP1Triangle(10, 26, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_004080[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_003EB0[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_003EB0, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 2, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 1, 0),
    gsSP2Triangles(11, 12, 13, 0, 6, 2, 1, 0),
    gsSP2Triangles(9, 1, 3, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 9, 0, 19, 5, 8, 0),
    gsSP2Triangles(13, 19, 11, 0, 8, 11, 19, 0),
    gsSP2Triangles(8, 5, 2, 0, 8, 2, 6, 0),
    gsSP2Triangles(1, 10, 6, 0, 9, 3, 17, 0),
    gsSP1Triangle(16, 20, 14, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_0042D8[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_004198[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_004198, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 2, 1, 0),
    gsSP2Triangles(3, 8, 4, 0, 3, 0, 8, 0),
    gsSP2Triangles(1, 9, 10, 0, 11, 7, 1, 0),
    gsSP1Triangle(10, 11, 1, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_004AD8[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0043C8[105], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_0043C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 0, 5, 0, 23, 24, 25, 0),
    gsSP2Triangles(22, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0043C8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(3, 22, 28, 0, 29, 4, 30, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0043C8[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(0, 11, 12, 0, 13, 14, 12, 0),
    gsSP2Triangles(15, 16, 14, 0, 2, 11, 0, 0),
    gsSP2Triangles(5, 11, 3, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 9, 8, 0, 26, 20, 22, 0),
    gsSP2Triangles(27, 28, 24, 0, 24, 29, 27, 0),
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0043C8[92], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 2, 4, 0),
    gsSP2Triangles(7, 3, 2, 0, 2, 8, 7, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 11, 12, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_004C78[] = {
    gsSPDisplayList(beneath_the_graveyard_room_0DL_003370),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_003748),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_003A70),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_003DA0),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_004080),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_0042D8),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_004AD8),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_004E28[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_004CB8[15], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 14, 15),
    gsDPLoadMultiBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, 0x0000, 1, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_004CB8, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(1, 4, 11, 0, 1, 11, 2, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 13, 14, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_005028[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_004F18[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_004F18, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 6, 1, 0),
    gsSP2Triangles(5, 1, 0, 0, 3, 7, 8, 0),
    gsSP1Triangle(3, 8, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_0052F0[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_005110[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 15, 15),
    gsDPLoadMultiBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, 0x0000, 1, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_005110, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_005590[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_0053F0[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, 0x0000, 1, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 14, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_0053F0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 12, 0),
    gsSP2Triangles(5, 13, 14, 0, 5, 14, 15, 0),
    gsSP2Triangles(13, 0, 16, 0, 13, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_005848[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_005688[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 14, 15),
    gsDPLoadMultiBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, 0x0000, 1, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_005688, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(5, 12, 13, 0, 5, 13, 14, 0),
    gsSP2Triangles(15, 8, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(12, 0, 18, 0, 12, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_005A60[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_005940[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 15, 15),
    gsDPLoadMultiBlock_4b(beneath_the_graveyard_room_0Tex_005BA8, 0x0000, 1, G_IM_FMT_I, 32, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_005940, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 0, 8, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_005B40[] = {
    gsSPDisplayList(beneath_the_graveyard_room_0DL_004E28),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_005028),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_0052F0),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_005590),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_005848),
    gsSPDisplayList(beneath_the_graveyard_room_0DL_005A60),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_006CF0[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_006BB0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_0Tex_007038, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_007838, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_006BB0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_0DL_006F28[] = {
    gsSPVertex(&beneath_the_graveyard_room_0Vtx_006DE8[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_0Tex_007038, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, 1, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_0Tex_007838, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_0Vtx_006DE8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSPEndDisplayList(),
};
