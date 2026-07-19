#include "beneath_the_graveyard_scene.h"
#include "beneath_the_graveyard_room_2.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd beneath_the_graveyard_room_2[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&beneath_the_graveyard_room_2RoomShapeCullable_000090),
    SCENE_CMD_OBJECT_LIST(4, beneath_the_graveyard_room_2ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(1, beneath_the_graveyard_room_2ActorEntry_00004C),
    SCENE_CMD_END(),
};

s16 beneath_the_graveyard_room_2ObjectList_000040[] = {
  //OBJECT_HAKA_OBJ,
    OBJECT_TSUBO,
    OBJECT_BAT,
    OBJECT_BOX,
    OBJECT_IK,
  //OBJECT_PO_COMPOSER,
};

ActorEntry beneath_the_graveyard_room_2ActorEntry_00004C[] = {
  //{ ACTOR_EN_PO_COMPOSER,  { 2240, 140, 320 }, { 0, 0xC000, 0 }, 0x80FF },
    { ACTOR_EN_IK,           { 1860,   0, 327 }, { 0, 0xC000, 0 }, 0xFF06 },
  //{ ACTOR_BG_HAKA_CURTAIN, { 2120, 260, 320 }, { 0,      0, 0 }, 0x0000 },
  //{ ACTOR_BG_HAKA_TOMB,    { 2280,  40, 320 }, { 0,      0, 0 }, 0x0000 },
};

RoomShapeCullable beneath_the_graveyard_room_2RoomShapeCullable_000090 = { 
    2, 4,
    beneath_the_graveyard_room_2RoomShapeCullableEntry_00009C,
    beneath_the_graveyard_room_2RoomShapeCullableEntry_00009C + ARRAY_COUNTU(beneath_the_graveyard_room_2RoomShapeCullableEntry_00009C)
};

RoomShapeCullableEntry beneath_the_graveyard_room_2RoomShapeCullableEntry_00009C[4] = {
    { {   1820,    130,    320 },    384, beneath_the_graveyard_room_2DL_004F30, NULL },
    { {   1755,    130,    320 },    452, beneath_the_graveyard_room_2DL_003220, NULL },
    { {   2210,    170,    320 },    258, beneath_the_graveyard_room_2DL_0007B8, NULL },
    { {   1820,      0,    320 },   -170, beneath_the_graveyard_room_2DL_0050B8, NULL },
};

s32 beneath_the_graveyard_room_2_terminatorMaybe_0000DC = { 0x01000000 };

Vtx beneath_the_graveyard_room_2Vtx_0000E0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0000E0.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_000548[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_000548.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0007D0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0007D0.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_000DA8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_000DA8.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_000FB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_000FB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0011B8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0011B8.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_001430[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_001430.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_001760[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_001760.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_001B80[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_001B80.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_001DB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_001DB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0020F8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0020F8.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_002290[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_002290.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_002470[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_002470.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0028F0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0028F0.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_002D70[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_002D70.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_003290[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_003290.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0034B8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0034B8.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0036E0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0036E0.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_003908[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_003908.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_003B30[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_003B30.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_003D58[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_003D58.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_003F38[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_003F38.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004108[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004108.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_0042E8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_0042E8.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004538[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004538.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004788[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004788.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004958[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004958.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004B28[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004B28.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004D50[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004D50.vtx.inc"
};

Vtx beneath_the_graveyard_room_2Vtx_004FA8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Vtx_004FA8.vtx.inc"
};

u64 beneath_the_graveyard_room_2Tex_0051C8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Tex_0051C8.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_2Tex_0053C8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Tex_0053C8.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_2Tex_005BC8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Tex_005BC8.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_2Tex_0063C8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Tex_0063C8.ci8.inc.c"
};

u64 beneath_the_graveyard_room_2Tex_0067C8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Tex_0067C8.ci8.inc.c"
};

u64 beneath_the_graveyard_room_2Tex_006BC8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_2Tex_006BC8.ci8.inc.c"
};

Gfx beneath_the_graveyard_room_2DL_000400[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0000E0[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C440),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_00AC40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0000E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 0, 2, 13, 0),
    gsSP2Triangles(5, 14, 15, 0, 5, 16, 3, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 17, 0),
    gsSP2Triangles(16, 5, 22, 0, 17, 19, 23, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 16, 0),
    gsSP2Triangles(23, 20, 17, 0, 26, 9, 12, 0),
    gsSP2Triangles(26, 12, 27, 0, 28, 6, 8, 0),
    gsSP2Triangles(8, 0, 13, 0, 8, 13, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0000E0[32], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 0, 6, 7, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0006C8[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_000548[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008840, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_2Tex_005BC8, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_000548, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_000548[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0007B8[] = {
    gsSPDisplayList(beneath_the_graveyard_room_2DL_000400),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_0006C8),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_000C30[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0007D0[62], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C440),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_00AC40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x05FC, 0x03FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0007D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(11, 19, 14, 0, 20, 17, 14, 0),
    gsSP2Triangles(16, 20, 14, 0, 8, 21, 22, 0),
    gsSP2Triangles(22, 23, 8, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 0, 3, 28, 0),
    gsSP2Triangles(0, 28, 29, 0, 29, 30, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0007D0[32], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 8, 0, 10, 6, 3, 0),
    gsSP2Triangles(10, 3, 8, 0, 8, 3, 5, 0),
    gsSP2Triangles(8, 5, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 2, 0, 0, 2, 15, 0),
    gsSP2Triangles(0, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 20, 0, 20, 21, 25, 0),
    gsSP2Triangles(25, 26, 22, 0, 22, 20, 25, 0),
    gsSP2Triangles(19, 27, 17, 0, 28, 25, 29, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_000EC8[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_000DA8[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_000DA8, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_0063C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_000DA8[6], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0010D0[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_000FB0[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_000FB0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_0063C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_000FB0[6], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_001338[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0011B8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_0067C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x07FC, 0x06FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0011B8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(2, 1, 10, 0, 2, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_001650[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001430[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008840, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_2Tex_0051C8, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_001430, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 12, 9, 0, 2, 13, 3, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001430[14], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001430[22], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_001A60[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001760[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008A40, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_2Tex_0053C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_001760, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001760[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_001CC0[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001B80[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008A40, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_2Tex_0053C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_001B80, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 4, 7, 6, 0),
    gsSP2Triangles(8, 9, 0, 0, 9, 8, 10, 0),
    gsSP2Triangles(5, 9, 11, 0, 5, 11, 3, 0),
    gsSP1Triangle(10, 11, 9, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_001FD0[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001DB0[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008840, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_2Tex_0051C8, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_001DB0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 3, 7, 6, 0),
    gsSP2Triangles(8, 9, 0, 0, 10, 9, 8, 0),
    gsSP2Triangles(8, 11, 10, 0, 11, 8, 3, 0),
    gsSP1Triangle(5, 11, 3, 0),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_001DB0[12], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 0, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(1, 4, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(5, 12, 13, 0, 5, 13, 6, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0021B8[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0020F8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_0067C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x05FC, 0x007C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0020F8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_002390[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002290[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x05FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_002290, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_002670[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002470[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x03FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_002470, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002470[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002470[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00C040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x02FC),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002470[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_002BB0[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0028F0[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x07FC, 0x007C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0028F0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(3, 12, 14, 0, 3, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C440),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_00AC40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x00FC),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0028F0[16], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 0, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(18, 4, 7, 0, 18, 7, 19, 0),
    gsSP2Triangles(17, 8, 11, 0, 17, 11, 16, 0),
    gsSP2Triangles(19, 12, 15, 0, 19, 15, 18, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_003060[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002D70[39], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x07FC, 0x007C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_002D70, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C440),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_00AC40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x00FC),
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_002D70[19], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 0, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(18, 4, 7, 0, 18, 7, 19, 0),
    gsSP2Triangles(17, 8, 11, 0, 17, 11, 16, 0),
    gsSP2Triangles(19, 12, 15, 0, 19, 15, 18, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_003220[] = {
    gsSPDisplayList(beneath_the_graveyard_room_2DL_000C30),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_000EC8),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_0010D0),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_001338),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_001650),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_001A60),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_001CC0),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_001FD0),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_0021B8),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_002390),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_002670),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_002BB0),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_003060),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0033D0[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_003290[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_003290, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0035F8[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0034B8[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0034B8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_003820[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0036E0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0036E0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_003A48[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_003908[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_003908, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_003C70[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_003B30[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_003B30, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_003E58[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_003D58[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_003D58, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004028[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_003F38[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_003F38, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004208[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004108[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004108, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004448[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_0042E8[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_0042E8, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 2, 1, 0, 12, 1, 13, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004698[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004538[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004538, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 2, 1, 0, 12, 1, 13, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004878[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004788[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_0067C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x05FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004788, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 6, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004A48[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004958[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_0067C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x05FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004958, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004C68[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004B28[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004B28, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004E50[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004D50[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_2Tex_006BC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004D50, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_004F30[] = {
    gsSPDisplayList(beneath_the_graveyard_room_2DL_0033D0),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_0035F8),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_003820),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_003A48),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_003C70),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_003E58),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004028),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004208),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004448),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004698),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004878),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004A48),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004C68),
    gsSPDisplayList(beneath_the_graveyard_room_2DL_004E50),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_2DL_0050B8[] = {
    gsSPVertex(&beneath_the_graveyard_room_2Vtx_004FA8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 70),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00A240, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_00A440, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_2Vtx_004FA8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(2, 5, 8, 0, 2, 8, 6, 0),
    gsSPEndDisplayList(),
};
