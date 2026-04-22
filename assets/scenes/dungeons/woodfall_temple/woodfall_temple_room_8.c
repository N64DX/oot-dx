#include "woodfall_temple_room_8.h"
#include "woodfall_temple_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd woodfall_temple_room_8Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_8RoomShapeCullable_000120),
    SCENE_CMD_OBJECT_LIST(14, woodfall_temple_room_8ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(7, woodfall_temple_room_8ActorEntry_00006C),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_8ObjectList_000040[] = {
    OBJECT_NUMA_OBJ,
    OBJECT_BDOOR,
    OBJECT_KUSA,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_LADDER,
    OBJECT_RAF,
    OBJECT_KUSA,
    OBJECT_RAILLIFT,
    OBJECT_MKK,
    OBJECT_GRASSHOPPER,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_HAMMERGEIST,
};

ActorEntry woodfall_temple_room_8ActorEntry_00006C[] = {
    { ACTOR_EN_HAMMERGEIST, { 1230, -1192, -1230 }, {    0,      0, 0 }, 0x0000 },
    { ACTOR_EN_HAMMERGEIST, { 1030, -1192, -1430 }, {    0,      0, 0 }, 0x0000 },
    { ACTOR_OBJ_TSUBO,      { 1095,  1185, -1770 }, {    0,      0, 0 }, 0x4C01 }, // Sets collect: 0x26, drops Blue Rupee
    { ACTOR_OBJ_TSUBO,      { 1140, -1185, -1770 }, {    0,      0, 0 }, 0x4E01 }, // Sets collect: 0x27, drops Blue Rupee
    { ACTOR_OBJ_TSUBO,      { 1365, -1185, -1770 }, {    0,      0, 0 }, 0x5001 }, // Sets collect: 0x28, drops Blue Rupee
    { ACTOR_OBJ_TSUBO,      { 1320, -1185, -1770 }, {    0,      0, 0 }, 0x5201 }, // Sets collect: 0x29, drops Blue Rupee
    { ACTOR_EN_BOX,         { 1230, -1185, -1920 }, { 0x3F, 0x8000, 0 }, 0x201E }, // Chest flag: 0x1E, Boss Key
};

RoomShapeCullable woodfall_temple_room_8RoomShapeCullable_000120 = { 
    2, 10,
    woodfall_temple_room_8RoomShapeCullableEntry_00012C,
    woodfall_temple_room_8RoomShapeCullableEntry_00012C + ARRAY_COUNTU(woodfall_temple_room_8RoomShapeCullableEntry_00012C)
};

RoomShapeCullableEntry woodfall_temple_room_8RoomShapeCullableEntry_00012C[10] = {
    { {   1230,  -1078,  -1725 },    264, woodfall_temple_room_8DL_0025D8, NULL },
    { {   1230,  -1005,   -870 },    500, woodfall_temple_room_8DL_002818, NULL },
    { {   1230,  -1193,  -1230 },    302, woodfall_temple_room_8DL_0029E0, NULL },
    { {   1230,  -1065,   -735 },    152, woodfall_temple_room_8DL_0010C0, NULL },
    { {   1230,  -1185,   -825 },    168, woodfall_temple_room_8DL_0013C0, NULL },
    { {   1230,  -1189,  -1230 },    552, woodfall_temple_room_8DL_001868, NULL },
    { {   1227,  -1189,  -1230 },    554, woodfall_temple_room_8DL_001F30, NULL },
    { {   1230,   -885,  -1380 },    738, woodfall_temple_room_8DL_000AD0, NULL },
    { {   1230,  -1005,  -1230 },    580, woodfall_temple_room_8DL_002390, NULL },
    { {   1230,  -1005,  -1590 },    500, woodfall_temple_room_8DL_002BD0, NULL },
};

s32 woodfall_temple_room_8_terminatorMaybe_0001CC = { 0x01000000 };

Vtx woodfall_temple_room_8Vtx_0001D0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_0001D0.vtx.inc"
};

Gfx woodfall_temple_room_8DL_000AD0[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[136], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_003D08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_0001D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(21, 28, 29, 0, 21, 29, 30, 0),
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[63], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_004708, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[91], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015090, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[99], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 4, 0, 2, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[105], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 8, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016990, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_0001D0[114], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(0, 3, 14, 0, 0, 14, 13, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_000EC0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_000EC0.vtx.inc"
};

Gfx woodfall_temple_room_8DL_0010C0[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_000EC0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014490, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_000EC0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 12, 15, 0, 18, 15, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016990, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_000EC0[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_001240[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_001240.vtx.inc"
};

Gfx woodfall_temple_room_8DL_0013C0[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_001240[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015490, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_001240, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_001240[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_001528[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_001528.vtx.inc"
};

Gfx woodfall_temple_room_8DL_001868[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_001528[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_006308, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_001528, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_8Vtx_001528[31], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 6, 10, 0),
    gsSP2Triangles(11, 3, 12, 0, 4, 6, 9, 0),
    gsSP2Triangles(0, 4, 9, 0, 0, 9, 12, 0),
    gsSP1Triangle(3, 0, 12, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_001A30[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_001A30.vtx.inc"
};

Gfx woodfall_temple_room_8DL_001F30[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_001A30[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_001A30, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 0, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 6, 4, 3, 0),
    gsSP2Triangles(6, 3, 7, 0, 7, 3, 2, 0),
    gsSP2Triangles(7, 2, 8, 0, 8, 2, 1, 0),
    gsSP2Triangles(8, 1, 9, 0, 9, 1, 0, 0),
    gsSP2Triangles(9, 0, 5, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 18, 19, 0, 20, 15, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 21, 19, 18, 0),
    gsSP2Triangles(21, 18, 22, 0, 22, 18, 17, 0),
    gsSP2Triangles(22, 17, 23, 0, 23, 17, 16, 0),
    gsSP2Triangles(23, 16, 24, 0, 24, 16, 15, 0),
    gsSP2Triangles(24, 15, 20, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_8Vtx_001A30[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 3, 2, 0, 7, 2, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 8, 4, 1, 0),
    gsSP2Triangles(8, 1, 9, 0, 1, 0, 11, 0),
    gsSP2Triangles(1, 11, 9, 0, 13, 14, 8, 0),
    gsSP2Triangles(13, 8, 15, 0, 16, 17, 13, 0),
    gsSP2Triangles(16, 13, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 26, 28, 29, 0),
    gsSP2Triangles(26, 29, 27, 0, 20, 19, 24, 0),
    gsSP2Triangles(20, 24, 27, 0, 29, 22, 20, 0),
    gsSP1Triangle(29, 20, 27, 0),
    gsSPVertex(&woodfall_temple_room_8Vtx_001A30[62], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_002130[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_002130.vtx.inc"
};

Gfx woodfall_temple_room_8DL_002390[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_002130[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_005B08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_002130, 30, 0),
    gsSP2Triangles(0, 1, 1, 0, 0, 1, 2, 0),
    gsSP2Triangles(3, 0, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(9, 9, 8, 0, 9, 8, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(13, 14, 11, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 16, 17, 0, 18, 19, 16, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 2, 1, 0, 22, 1, 23, 0),
    gsSP2Triangles(24, 13, 10, 0, 24, 10, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(7, 27, 26, 0, 7, 26, 9, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_0024D8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_0024D8.vtx.inc"
};

Gfx woodfall_temple_room_8DL_0025D8[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_0024D8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_002D08, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_room_8Tex_003508, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, 1),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_0024D8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_0026B8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_0026B8.vtx.inc"
};

Gfx woodfall_temple_room_8DL_002818[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_0026B8[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 255, 0, 0, 30),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_004B08, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_0026B8, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 0, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 9, 10, 7, 0),
    gsSP2Triangles(12, 7, 10, 0, 12, 10, 13, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_0028E0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_0028E0.vtx.inc"
};

Gfx woodfall_temple_room_8DL_0029E0[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_0028E0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 75, 75, 205, 89),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_013490, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_013490, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x09000000),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_0028E0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_8Vtx_002AD0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Vtx_002AD0.vtx.inc"
};

Gfx woodfall_temple_room_8DL_002BD0[] = {
    gsSPVertex(&woodfall_temple_room_8Vtx_002AD0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 80),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_8Tex_003F08, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_8Vtx_002AD0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

u64 woodfall_temple_room_8Tex_002D08[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_002D08.ia8.inc.c"
};

u64 woodfall_temple_room_8Tex_003508[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_003508.rgba16.inc.c"
};

u64 woodfall_temple_room_8Tex_003D08[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_003D08.ci8.inc.c"
};

u64 woodfall_temple_room_8Tex_003F08[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_003F08.ci8.inc.c"
};

u64 woodfall_temple_room_8Tex_004708[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_004708.ci8.inc.c"
};

u64 woodfall_temple_room_8Tex_004B08[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_004B08.ia16.inc.c"
};

u64 woodfall_temple_room_8Tex_005B08[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_005B08.ci8.inc.c"
};

u64 woodfall_temple_room_8Tex_006308[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_8Tex_006308.ci8.inc.c"
};
