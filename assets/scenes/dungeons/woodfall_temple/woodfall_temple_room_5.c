#include "woodfall_temple_room_5.h"
#include "woodfall_temple_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd woodfall_temple_room_5Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_5RoomShapeCullable_000200),
    SCENE_CMD_OBJECT_LIST(13, woodfall_temple_room_5ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(26, woodfall_temple_room_5ActorEntry_00006C),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_5ObjectList_000040[] = {
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
};

ActorEntry woodfall_temple_room_5ActorEntry_00006C[] = {
    { ACTOR_OBJ_RAILLIFT, { 1230, -1185,    0 }, {   0x17,      0, 0x19 }, 0xA000 }, // Moves on switch: 0x17
    { ACTOR_OBJ_RAILLIFT, { 1230, -1185,  250 }, {      0,      0, 0x19 }, 0x8009 },
    { ACTOR_OBJ_RAILLIFT, { 1230, -1185, -250 }, {      0,      0, 0x19 }, 0x800A },
    { ACTOR_EN_TANRON1,   { 1125, -1345, -600 }, {      0,      0,    0 }, 0x0001 },
    { ACTOR_EN_TANRON1,   { 1335, -1345, -600 }, {      0,      0,    0 }, 0x0002 },
    { ACTOR_EN_TANRON1,   { 1650, -1345,   90 }, {      0,      0,    0 }, 0x0004 },
    { ACTOR_OBJ_SYOKUDAI, { 1125, -1425, -600 }, {      0,      0,    0 }, 0x2098 }, // Sets switch: 0x18
    { ACTOR_OBJ_SYOKUDAI, { 1335, -1425, -600 }, {      0,      0,    0 }, 0x2098 }, // Sets switch: 0x18
    { ACTOR_OBJ_SYOKUDAI, { 1650, -1425,  -90 }, {      0,      0,    0 }, 0x2098 }, // Sets switch: 0x18
    { ACTOR_OBJ_SYOKUDAI, { 1650, -1425,   90 }, {      0,      0,    0 }, 0x2098 }, // Sets switch: 0x18
    { ACTOR_OBJ_SYOKUDAI, { 1230, -1225,  555 }, {      0,      0,    0 }, 0x243F }, // Sets switch: 0x3F
    { ACTOR_EN_RAF,       { 1020, -1500, -224 }, {      0,      0,    0 }, 0x0F80 },
    { ACTOR_EN_RAF,       { 1455, -1500, -224 }, {      0,      0,    0 }, 0x0F80 },
    { ACTOR_EN_RAF,       { 1020, -1500,  226 }, {      0,      0,    0 }, 0x0F80 },
    { ACTOR_EN_RAF,       { 1455, -1500,  226 }, {      0,      0,    0 }, 0x0F80 },
    { ACTOR_OBJ_TSUBO,    { 1335, -1185,  585 }, {      0,      0,    0 }, 0x0003 }, // Drops Recovery Heart
    { ACTOR_OBJ_TSUBO,    { 1335, -1185,  615 }, {      0,      0,    0 }, 0x0003 }, // Drops Recovery Heart
    { ACTOR_OBJ_TSUBO,    { 1335, -1185,  645 }, {      0,      0,    0 }, 0x0003 }, // Drops Recovery Heart
    { ACTOR_OBJ_TSUBO,    { 1335, -1185,  675 }, {      0,      0,    0 }, 0x0009 }, // Drops Arrows (10)
    { ACTOR_EN_KUSA,      { 1695, -1425,   60 }, {      0, 0x7380,    0 }, 0x242B },
    { ACTOR_EN_KUSA,      { 1725, -1425,  105 }, {      0, 0x8E80,    0 }, 0x252B },
    { ACTOR_OBJ_SWITCH,   { 1230, -1215, -509 }, {      0,      0,    0 }, 0x1782 }, // Sets switch: 0x17
    { ACTOR_EN_BOX,       { 1230, -1425, -599 }, {   0x42,      0,    0 }, 0x5001 }, // Chest flag: 0x01, Small Key
    { ACTOR_OBJ_COMB,     {  930, -1255, -690 }, { 0x8700,      0,    0 }, 0xFF02 },
    { ACTOR_OBJ_PURIFY,   { 1260, -1574,    0 }, {      0,      0,    0 }, 0x1002 },
    { ACTOR_OBJ_PURIFY,   { 1260, -1500,    0 }, {      0,      0,    0 }, 0x0002 },
};

RoomShapeCullable woodfall_temple_room_5RoomShapeCullable_000200 = { 
    2, 11,
    woodfall_temple_room_5RoomShapeCullableEntry_00020C,
    woodfall_temple_room_5RoomShapeCullableEntry_00020C + ARRAY_COUNTU(woodfall_temple_room_5RoomShapeCullableEntry_00020C)
};

RoomShapeCullableEntry woodfall_temple_room_5RoomShapeCullableEntry_00020C[11] = {
    { {   1770,  -1305,      0 },    150, NULL, woodfall_temple_room_5DL_005F50 },
    { {   1155,  -1215,      0 },    846, woodfall_temple_room_5DL_004148, NULL },
    { {   1260,  -1260,    705 },    600, woodfall_temple_room_5DL_003BB0, NULL },
    { {    735,  -1260,      0 },    760, woodfall_temple_room_5DL_003348, NULL },
    { {   1065,  -1380,   -270 },    562, woodfall_temple_room_5DL_000A00, NULL },
    { {   1065,  -1215,    270 },    526, woodfall_temple_room_5DL_0010C8, NULL },
    { {   1680,  -1500,      0 },    192, woodfall_temple_room_5DL_001650, NULL },
    { {   1260,  -1575,      0 },    860, woodfall_temple_room_5DL_001920, NULL },
    { {   1260,   -885,      0 },    862, woodfall_temple_room_5DL_001AC8, NULL },
    { {   1815,  -1260,      0 },    760, woodfall_temple_room_5DL_0022A8, NULL },
    { {   1260,  -1260,   -705 },    600, woodfall_temple_room_5DL_002B08, NULL },
};

s32 woodfall_temple_room_5_terminatorMaybe_0002BC = { 0x01000000 };

Vtx woodfall_temple_room_5Vtx_0002C0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_0002C0.vtx.inc"
};

Gfx woodfall_temple_room_5DL_000A00[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_0002C0[108], 8, 0),
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
    gsSPVertex(woodfall_temple_room_5Vtx_0002C0, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0002C0[28], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0002C0[36], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 15, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&woodfall_temple_room_5Vtx_0002C0[66], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 4, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&woodfall_temple_room_5Vtx_0002C0[96], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0002C0[104], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_000D28[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_000D28.vtx.inc"
};

Gfx woodfall_temple_room_5DL_0010C8[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_000D28[50], 8, 0),
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
    gsSPVertex(woodfall_temple_room_5Vtx_000D28, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_000D28[6], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_000D28[14], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(12, 23, 24, 0, 12, 24, 25, 0),
    gsSP2Triangles(26, 2, 1, 0, 26, 1, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_000D28[42], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_001370[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_001370.vtx.inc"
};

Gfx woodfall_temple_room_5DL_001650[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_001370[38], 8, 0),
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
    gsSPVertex(woodfall_temple_room_5Vtx_001370, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_001370[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_001370[16], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 4, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 0, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_001860[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_001860.vtx.inc"
};

Gfx woodfall_temple_room_5DL_001920[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_001860[4], 8, 0),
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
    gsSPVertex(woodfall_temple_room_5Vtx_001860, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_0019F8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_0019F8.vtx.inc"
};

Gfx woodfall_temple_room_5DL_001AC8[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_0019F8[5], 8, 0),
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
    gsSPVertex(woodfall_temple_room_5Vtx_0019F8, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 1, 4, 2, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_001BA8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_001BA8.vtx.inc"
};

Gfx woodfall_temple_room_5DL_0022A8[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_001BA8[104], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_5Tex_004288, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_5Vtx_001BA8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014490, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_001BA8[8], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_001BA8[28], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 4, 7, 0),
    gsSP2Triangles(4, 9, 10, 0, 4, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(8, 5, 16, 0, 8, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSP2Triangles(29, 27, 26, 0, 29, 26, 30, 0),
    gsSPVertex(&woodfall_temple_room_5Vtx_001BA8[60], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 6, 1, 0, 7, 6, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 15, 0, 11, 16, 17, 0),
    gsSP2Triangles(11, 17, 12, 0, 18, 16, 11, 0),
    gsSP2Triangles(18, 11, 19, 0, 10, 15, 20, 0),
    gsSP2Triangles(10, 20, 21, 0, 4, 3, 22, 0),
    gsSP2Triangles(4, 22, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(24, 23, 26, 0, 27, 9, 8, 0),
    gsSP2Triangles(27, 8, 26, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_001BA8[92], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_0025F8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_0025F8.vtx.inc"
};

Gfx woodfall_temple_room_5DL_002B08[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_0025F8[73], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_5Tex_004288, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_5Vtx_0025F8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014490, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0025F8[8], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 0, 3, 0, 18, 3, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0025F8[28], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP2Triangles(13, 23, 31, 0, 13, 31, 5, 0),
    gsSP1Triangle(21, 20, 16, 0),
    gsSPVertex(&woodfall_temple_room_5Vtx_0025F8[60], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP1Triangle(5, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_5Tex_005688, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0025F8[69], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_002DF8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_002DF8.vtx.inc"
};

Gfx woodfall_temple_room_5DL_003348[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_002DF8[77], 8, 0),
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
    gsSPVertex(woodfall_temple_room_5Vtx_002DF8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 24, 25, 0, 20, 25, 21, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_5Vtx_002DF8[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014C90, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_002DF8[40], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_002DF8[46], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 10, 17, 0, 16, 17, 18, 0),
    gsSP2Triangles(14, 19, 20, 0, 14, 20, 15, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(11, 29, 2, 0, 11, 2, 1, 0),
    gsSP2Triangles(29, 10, 16, 0, 29, 16, 30, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_0035D0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_0035D0.vtx.inc"
};

Gfx woodfall_temple_room_5DL_003BB0[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_0035D0[86], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_5Tex_004288, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_5Vtx_0035D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014490, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0035D0[4], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 4, 6, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0035D0[24], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(20, 28, 29, 0, 25, 29, 30, 0),
    gsSP2Triangles(25, 30, 26, 0, 25, 21, 29, 0),
    gsSP2Triangles(21, 20, 29, 0, 29, 28, 31, 0),
    gsSPVertex(&woodfall_temple_room_5Vtx_0035D0[56], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 4, 5, 3, 0),
    gsSP2Triangles(0, 6, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(8, 5, 4, 0, 0, 7, 10, 0),
    gsSP2Triangles(0, 10, 11, 0, 12, 13, 9, 0),
    gsSP1Triangle(12, 9, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_5Vtx_0035D0[70], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_5Vtx_003EC8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_003EC8.vtx.inc"
};

Gfx woodfall_temple_room_5DL_004148[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_003EC8[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 99),
    gsDPSetEnvColor(115, 80, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_5Tex_004688, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_5Vtx_003EC8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

u64 woodfall_temple_room_5Tex_004288[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Tex_004288.ci8.inc.c"
};

u64 woodfall_temple_room_5Tex_004688[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Tex_004688.ia16.inc.c"
};

u64 woodfall_temple_room_5Tex_005688[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Tex_005688.ci8.inc.c"
};

Vtx woodfall_temple_room_5Vtx_005E90[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_5Vtx_005E90.vtx.inc"
};

Gfx woodfall_temple_room_5DL_005F50[] = {
    gsSPVertex(&woodfall_temple_room_5Vtx_005E90[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, PRIM_LOD_FRAC, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_012490, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_012C90, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_5Vtx_005E90, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
