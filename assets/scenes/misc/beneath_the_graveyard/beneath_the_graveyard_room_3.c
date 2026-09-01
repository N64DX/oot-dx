#include "beneath_the_graveyard_scene.h"
#include "beneath_the_graveyard_room_3.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd beneath_the_graveyard_room_3[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&beneath_the_graveyard_room_3RoomShapeCullable_000150),
    SCENE_CMD_OBJECT_LIST(9, beneath_the_graveyard_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(15, beneath_the_graveyard_room_3ActorEntry_000054),
    SCENE_CMD_END(),
};

s16 beneath_the_graveyard_room_3ObjectList_000040[] = {
    OBJECT_HAKA_OBJ,
    OBJECT_TSUBO,
    OBJECT_BAT,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_WATER_EFFECT,
    OBJECT_FIREFLY,
    OBJECT_ST,
    OBJECT_SYOKUDAI,
};

ActorEntry beneath_the_graveyard_room_3ActorEntry_000054[] = {
    { ACTOR_EN_FIREFLY,       {  -222,  14, -1242 }, { 0,      0, 0 }, 0x8003 },
    { ACTOR_EN_FIREFLY,       {  -436, -31, -1323 }, { 0,      0, 0 }, 0x8003 },
    { ACTOR_EN_FIREFLY,       {  -720, -45, -1080 }, { 0, 0x4000, 0 }, 0x8003 },
    { ACTOR_EN_FIREFLY,       {  -480,  69,  -949 }, { 0, 0x8000, 0 }, 0x8003 },
    { ACTOR_EN_ST,            {  -362, 140, -1198 }, { 0, 0x4000, 0 }, 0x007F },
    { ACTOR_EN_ST,            {  -594, 140, -1159 }, { 0,      0, 0 }, 0x007F },
    { ACTOR_EN_ST,            {  -985, 100, -1145 }, { 0, 0x4000, 0 }, 0x007F },
    { ACTOR_OBJ_TSUBO,        { -1200,   0, -1400 }, { 0,      0, 0 }, 0x4114 },
    { ACTOR_OBJ_TSUBO,        { -1120,   0, -1400 }, { 0,      0, 0 }, 0x4314 },
    { ACTOR_OBJ_TSUBO,        {  -223,   0, -1257 }, { 0,      0, 0 }, 0x4B1E },
    { ACTOR_OBJ_TSUBO,        {  -173,   0, -1201 }, { 0,      0, 0 }, 0x4D0A },
    { ACTOR_OBJ_TSUBO,        { -1200,   0,  -881 }, { 0,      0, 0 }, 0x5D0A },
    { ACTOR_OBJ_TSUBO,        { -1121,   0,  -879 }, { 0,      0, 0 }, 0x5F03 },
    { ACTOR_EN_TEST2,         {  -620,   0, -1100 }, { 0,      0, 0 }, 0x0001 },
    { ACTOR_BG_HAKA_BOMBWALL, { -1160,   0,  -840 }, { 0, 0x8000, 0 }, 0x0001 }, // Switch: 01
};

RoomShapeCullable beneath_the_graveyard_room_3RoomShapeCullable_000150 = { 
    2, 2,
    beneath_the_graveyard_room_3RoomShapeCullableEntry_00015C,
    beneath_the_graveyard_room_3RoomShapeCullableEntry_00015C + ARRAY_COUNTU(beneath_the_graveyard_room_3RoomShapeCullableEntry_00015C)
};

RoomShapeCullableEntry beneath_the_graveyard_room_3RoomShapeCullableEntry_00015C[2] = {
    { {   -635,    -50,  -1025 },    736, beneath_the_graveyard_room_3DL_002E10, NULL },
    { {   -658,     70,  -1025 },    720, beneath_the_graveyard_room_3DL_0010B0, NULL },
};

s32 beneath_the_graveyard_room_3_terminatorMaybe_00017C = { 0x01000000 };

Vtx beneath_the_graveyard_room_3Vtx_000180[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_000180.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_000498[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_000498.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_000930[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_000930.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_000CF0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_000CF0.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_0010D8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_0010D8.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_0015E0[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_0015E0.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_001950[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_001950.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_001BD8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_001BD8.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_001DB8[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_001DB8.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_002460[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_002460.vtx.inc"
};

Vtx beneath_the_graveyard_room_3Vtx_002B18[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Vtx_002B18.vtx.inc"
};

u64 beneath_the_graveyard_room_3Tex_002E68[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Tex_002E68.rgba16.inc.c"
};

u64 beneath_the_graveyard_room_3Tex_003668[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Tex_003668.ci8.inc.c"
};

u64 beneath_the_graveyard_room_3Tex_003E68[] = {
#include "assets/scenes/misc/beneath_the_graveyard/beneath_the_graveyard_room_3Tex_003E68.ci8.inc.c"
};

Gfx beneath_the_graveyard_room_3DL_000320[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000180[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x017C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_000180, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x00FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000180[4], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 0, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_0007F8[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000498[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_008A40, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(beneath_the_graveyard_room_3Tex_002E68, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_000498, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(9, 22, 23, 0, 9, 23, 10, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000498[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 12, 13, 0, 7, 13, 4, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_000AF0[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000930[20], 8, 0),
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
    gsSPVertex(beneath_the_graveyard_room_3Vtx_000930, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000930[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000930[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_000EB0[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000CF0[20], 8, 0),
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
    gsSPVertex(beneath_the_graveyard_room_3Vtx_000CF0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000CF0[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x007C),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_000CF0[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_0010B0[] = {
    gsSPDisplayList(beneath_the_graveyard_room_3DL_000320),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_0007F8),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_000AF0),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_000EB0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_001488[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_0010D8[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00BC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x04FC, 0x037C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_0010D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 2, 1, 0),
    gsSP2Triangles(7, 1, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 2, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(4, 25, 5, 0, 2, 20, 0, 0),
    gsSP2Triangles(18, 26, 5, 0, 18, 5, 21, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 5, 26, 0),
    gsSP2Triangles(3, 30, 31, 0, 3, 31, 4, 0),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_0010D8[32], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 6, 8, 0),
    gsSP2Triangles(5, 8, 3, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 0, 18, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_001760[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_0015E0[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x02FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_0015E0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_0015E0[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_0015E0[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_001AE0[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001950[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, beneath_the_graveyard_sceneTLUT_00C440),
    gsDPLoadTextureBlock_4b(beneath_the_graveyard_sceneTex_00AC40, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x03FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_001950, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 0, 12, 9, 0),
    gsSP2Triangles(6, 13, 5, 0, 2, 14, 0, 0),
    gsSP1Triangle(9, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_001CD8[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001BD8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_3Tex_003E68, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x027C, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_001BD8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_0020A8[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001DB8[39], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_001DB8, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_3Tex_003668, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001DB8[3], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 7, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_3Tex_003668, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x00FC, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001DB8[11], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 2, 7, 8, 0),
    gsSP2Triangles(8, 0, 2, 0, 5, 9, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_3Tex_003668, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001DB8[21], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x017C),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001DB8[26], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_sceneTex_00B440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x01FC, 0x01FC),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_001DB8[31], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(4, 5, 3, 0, 2, 6, 0, 0),
    gsSP2Triangles(2, 7, 6, 0, 0, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_0029B0[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_002460[77], 8, 0),
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
    gsSPVertex(beneath_the_graveyard_room_3Vtx_002460, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(1, 16, 22, 0, 22, 23, 2, 0),
    gsSP2Triangles(19, 24, 2, 0, 25, 26, 27, 0),
    gsSP2Triangles(24, 19, 21, 0, 2, 28, 19, 0),
    gsSP2Triangles(2, 29, 22, 0, 12, 30, 5, 0),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_002460[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 6, 8, 0, 13, 14, 15, 0),
    gsSP2Triangles(11, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(15, 6, 12, 0, 21, 22, 23, 0),
    gsSP2Triangles(5, 24, 25, 0, 25, 20, 26, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_002460[61], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 8, 15, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_002D08[] = {
    gsSPVertex(&beneath_the_graveyard_room_3Vtx_002B18[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(beneath_the_graveyard_sceneTLUT_00C480),
    gsDPLoadTextureBlock(beneath_the_graveyard_room_3Tex_003E68, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x02FC, 0x01FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(beneath_the_graveyard_room_3Vtx_002B18, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 3, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 11, 12, 0, 7, 12, 4, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 14, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 8, 0, 20, 8, 22, 0),
    gsSPEndDisplayList(),
};

Gfx beneath_the_graveyard_room_3DL_002E10[] = {
    gsSPDisplayList(beneath_the_graveyard_room_3DL_001488),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_001760),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_001AE0),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_001CD8),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_0020A8),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_0029B0),
    gsSPDisplayList(beneath_the_graveyard_room_3DL_002D08),
    gsSPEndDisplayList(),
};
