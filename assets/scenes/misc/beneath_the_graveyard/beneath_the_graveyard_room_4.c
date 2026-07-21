#include "beneath_the_graveyard_scene.h"
#include "beneath_the_graveyard_room_4.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd beneath_the_graveyard_room_4[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&beneath_the_graveyard_room_4RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(5, beneath_the_graveyard_room_4ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(2, beneath_the_graveyard_room_4ActorEntry_00004C),
    SCENE_CMD_END(),
};

s16 beneath_the_graveyard_room_4ObjectList_000040[] = {
    OBJECT_HAKA_OBJ,
    OBJECT_TSUBO,
    OBJECT_BAT,
    OBJECT_BOX,
    OBJECT_IK,
};

ActorEntry beneath_the_graveyard_room_4ActorEntry_00004C[] = {
    { ACTOR_EN_IK,  { -1164,  0, -246 }, {    0, 0x8000, 0 }, 0xFF07 },
    { ACTOR_EN_BOX, { -1159,  0, -241 }, { 0x3E, 0x8000, 0 }, 0x1000 }, // Chest: 00, on clear, Piece of Heart
};

RoomShapeCullable beneath_the_graveyard_room_4RoomShapeCullable_0000C0 = { 
    2, 10,
    beneath_the_graveyard_room_4RoomShapeCullableEntry_0000CC,
    beneath_the_graveyard_room_4RoomShapeCullableEntry_0000CC + ARRAY_COUNTU(beneath_the_graveyard_room_4RoomShapeCullableEntry_0000CC)
};

RoomShapeCullableEntry beneath_the_graveyard_room_4RoomShapeCullableEntry_0000CC[10] = {
    { {  -1160,     57,   -595 },     76, beneath_the_graveyard_room_4DL_002DB0, NULL },
    { {  -1155,     26,   -223 },    398, beneath_the_graveyard_room_4DL_0029C0, NULL },
    { {  -1160,     90,   -250 },    418, beneath_the_graveyard_room_4DL_0019F0, NULL },
    { {  -1160,      0,   -260 },    170, beneath_the_graveyard_room_4DL_002ED0, NULL },
    { {   -857,     47,    -24 },     52, NULL, beneath_the_graveyard_room_4DL_004880 },
    { {  -1510,     58,   -296 },     64, NULL, beneath_the_graveyard_room_4DL_004580 },
    { {  -1250,     76,     69 },     82, NULL, beneath_the_graveyard_room_4DL_0042A0 },
    { {   -856,     58,   -309 },     64, NULL, beneath_the_graveyard_room_4DL_003FD0 },
    { {  -1450,     73,   -137 },     80, NULL, beneath_the_graveyard_room_4DL_003CD0 },
    { {  -1160,     -4,   -235 },    398, NULL, beneath_the_graveyard_room_4DL_0039D0 },
};

s32 beneath_the_graveyard_room_4_terminatorMaybe_00016C = { 0x01000000 };

Vtx beneath_the_graveyard_room_4Vtx_000170[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_000170.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_0005F0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_0005F0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_000DB0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_000DB0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_0010C0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_0010C0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_001A18[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_001A18.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_001C88[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_001C88.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_001EE8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_001EE8.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_002148[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_002148.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_002488[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_002488.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_0029F0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_0029F0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_002DC0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_002DC0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_003800[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_003800.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_003AF0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_003AF0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_003DD0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_003DD0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_0040D0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_0040D0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_0043A0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_0043A0.vtx.inc"
};

Vtx beneath_the_graveyard_room_4Vtx_004680[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Vtx_004680.vtx.inc"
};

u64 beneath_the_graveyard_room_4Tex_002FE0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Tex_002FE0.ci4.inc.c"
};

u64 beneath_the_graveyard_room_4TLUT_0037E0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Tex_002FE0.tlut.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_4Tex_0049B8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Tex_0049B8.ia16.inc.c"
};

u64 beneath_the_graveyard_room_4Tex_0051B8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_4Tex_0051B8.rgba16.inc.c"
};

Gfx beneath_the_graveyard_room_4DL_000490[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_000170[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C440),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_00AC40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x04FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_000170, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 16, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 16, 24, 0, 24, 16, 14, 0),
    gsSP2Triangles(14, 13, 4, 0, 14, 4, 6, 0),
    gsSP2Triangles(25, 26, 20, 0, 19, 16, 23, 0),
    gsSP2Triangles(25, 20, 22, 0, 22, 21, 27, 0),
    gsSP2Triangles(22, 27, 18, 0, 18, 27, 7, 0),
    gsSP2Triangles(17, 16, 18, 0, 18, 7, 9, 0),
    gsSP2Triangles(9, 28, 29, 0, 9, 29, 15, 0),
    gsSP2Triangles(15, 29, 30, 0, 31, 16, 15, 0),
    gsSP2Triangles(15, 0, 3, 0, 15, 3, 12, 0),
    gsSP1Triangle(14, 16, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_000170[32], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_000C10[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0005F0[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_0005F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 5, 0, 25, 1, 26, 0),
    gsSP2Triangles(17, 27, 28, 0, 29, 21, 2, 0),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0005F0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 0, 13, 0, 3, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 2, 0),
    gsSP2Triangles(27, 7, 25, 0, 18, 17, 22, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 7, 28, 0),
    gsSP2Triangles(25, 29, 27, 0, 27, 1, 28, 0),
    gsSP2Triangles(2, 29, 25, 0, 2, 26, 0, 0),
    gsSP2Triangles(13, 0, 26, 0, 13, 30, 12, 0),
    gsSP1Triangle(21, 20, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0005F0[62], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(3, 1, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 12, 10, 0),
    gsSP2Triangles(13, 14, 11, 0, 15, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 24, 23, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_000F80[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_000DB0[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x037C, 0x037C),
    gsDPSetPrimColor(0, 0x80, 178, 178, 178, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_000DB0, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 3, 2, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 8, 1, 0, 9, 1, 0, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 12, 8, 0, 13, 8, 11, 0),
    gsSP2Triangles(4, 12, 15, 0, 4, 15, 5, 0),
    gsSP2Triangles(12, 4, 1, 0, 12, 1, 8, 0),
    gsSP2Triangles(16, 15, 14, 0, 16, 14, 17, 0),
    gsSP2Triangles(15, 16, 7, 0, 15, 7, 5, 0),
    gsSP2Triangles(18, 11, 10, 0, 13, 19, 20, 0),
    gsSP2Triangles(13, 20, 14, 0, 19, 13, 11, 0),
    gsSP2Triangles(19, 11, 18, 0, 20, 17, 14, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_001840[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0010C0[112], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_009240, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_009A40, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_0010C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 11, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 21, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0010C0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 6, 12, 0),
    gsSP2Triangles(13, 14, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 2, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0010C0[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(2, 12, 0, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 8, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 29, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0010C0[94], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 6, 14, 0),
    gsSP1Triangle(13, 17, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_0019F0[] = {
    gsSPDisplayList(beneath_the_graveyard_room_4DL_000490),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_000C10),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_000F80),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_001840),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_001B78[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_001A18[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_room_4TLUT_0037E0),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_4Tex_002FE0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x07FC, 0x03FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_001A18, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 1, 0, 1, 10, 2, 0),
    gsSP2Triangles(11, 0, 2, 0, 12, 3, 0, 0),
    gsSP2Triangles(12, 0, 11, 0, 13, 5, 3, 0),
    gsSP1Triangle(13, 3, 12, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_001DD8[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_001C88[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_room_4TLUT_0037E0),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_4Tex_002FE0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x05FC, 0x04FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_001C88, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 1, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 0, 2, 0, 11, 3, 0, 0),
    gsSP2Triangles(11, 0, 10, 0, 12, 5, 3, 0),
    gsSP1Triangle(12, 3, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_002038[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_001EE8[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_room_4TLUT_0037E0),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_4Tex_002FE0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_001EE8, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 1, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 0, 2, 0, 11, 3, 0, 0),
    gsSP2Triangles(11, 0, 10, 0, 12, 5, 3, 0),
    gsSP1Triangle(12, 3, 11, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_002328[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_002148[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_room_4TLUT_0037E0),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_4Tex_002FE0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x04FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_002148, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 4, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 1, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 0, 2, 0, 11, 3, 0, 0),
    gsSP2Triangles(11, 0, 10, 0, 12, 5, 3, 0),
    gsSP2Triangles(12, 3, 11, 0, 7, 13, 14, 0),
    gsSP2Triangles(7, 14, 8, 0, 8, 14, 15, 0),
    gsSP2Triangles(8, 15, 9, 0, 9, 15, 2, 0),
    gsSP2Triangles(16, 10, 2, 0, 17, 11, 10, 0),
    gsSP2Triangles(17, 10, 16, 0, 18, 12, 11, 0),
    gsSP2Triangles(18, 11, 17, 0, 13, 19, 20, 0),
    gsSP2Triangles(13, 20, 14, 0, 14, 20, 21, 0),
    gsSP2Triangles(14, 21, 15, 0, 15, 21, 2, 0),
    gsSP2Triangles(21, 16, 2, 0, 20, 17, 16, 0),
    gsSP2Triangles(20, 16, 21, 0, 19, 18, 17, 0),
    gsSP1Triangle(19, 17, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_0027A8[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_002488[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_room_4TLUT_0037E0),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_4Tex_002FE0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x0FFC, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_002488, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(6, 1, 5, 0, 6, 5, 8, 0),
    gsSP2Triangles(9, 0, 3, 0, 9, 3, 10, 0),
    gsSP2Triangles(0, 9, 11, 0, 0, 11, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 12, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(18, 9, 10, 0, 18, 10, 19, 0),
    gsSP2Triangles(9, 18, 20, 0, 9, 20, 11, 0),
    gsSP2Triangles(13, 21, 22, 0, 13, 22, 14, 0),
    gsSP2Triangles(21, 13, 17, 0, 21, 17, 23, 0),
    gsSP2Triangles(21, 18, 19, 0, 21, 19, 22, 0),
    gsSP2Triangles(18, 21, 23, 0, 18, 23, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_room_4TLUT_0037E0),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_room_4Tex_002FE0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_002488[24], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 5, 0, 5, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 7, 0, 7, 11, 12, 0),
    gsSP2Triangles(1, 5, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 17, 16, 13, 0),
    gsSP2Triangles(16, 0, 2, 0, 15, 3, 0, 0),
    gsSP2Triangles(15, 0, 16, 0, 4, 6, 5, 0),
    gsSP2Triangles(10, 14, 17, 0, 10, 17, 11, 0),
    gsSP1Triangle(11, 17, 8, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_0029C0[] = {
    gsSPDisplayList(beneath_the_graveyard_room_4DL_001B78),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_001DD8),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_002038),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_002328),
    gsSPDisplayList(beneath_the_graveyard_room_4DL_0027A8),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_002DB0[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0029F0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x03FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_0029F0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0029F0[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0029F0[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_002ED0[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_002DC0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 75),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00A240, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(beneath_the_graveyard_sceneTex_00A440, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_002DC0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(2, 5, 8, 0, 2, 8, 6, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_0039D0[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_003800[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 160),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_4Tex_0051B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_4Tex_0051B8, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_003800, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(2, 6, 12, 0, 2, 12, 13, 0),
    gsSP2Triangles(0, 14, 1, 0, 15, 16, 17, 0),
    gsSP2Triangles(5, 4, 18, 0, 5, 18, 19, 0),
    gsSP2Triangles(17, 16, 14, 0, 17, 14, 0, 0),
    gsSP2Triangles(11, 10, 3, 0, 11, 3, 5, 0),
    gsSP2Triangles(19, 18, 15, 0, 13, 12, 20, 0),
    gsSP1Triangle(19, 15, 17, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_003CD0[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_003AF0[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 191),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_4Tex_0049B8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_4Tex_0049B8, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_003AF0, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 12, 2, 0, 11, 2, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_003FD0[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_003DD0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 191),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_4Tex_0049B8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_4Tex_0049B8, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_003DD0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_0042A0[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0040D0[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 191),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_4Tex_0049B8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_4Tex_0049B8, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_0040D0, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 2, 0, 11, 2, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 15, 19, 0, 18, 19, 20, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_004580[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_0043A0[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 191),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_4Tex_0049B8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_4Tex_0049B8, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_0043A0, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 12, 2, 0, 11, 2, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_4DL_004880[] = {
    gsSPVertex(&beneath_the_graveyard_room_4Vtx_004680[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 191),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_4Tex_0049B8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_4Tex_0049B8, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_4Vtx_004680, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};
