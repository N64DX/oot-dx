#include "woodfall_temple_scene.h"
#include "woodfall_temple_room_6.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd woodfall_temple_room_6[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_6RoomShapeCullable_000130),
    SCENE_CMD_OBJECT_LIST(17, woodfall_temple_room_6ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(12, woodfall_temple_room_6ActorEntry_00006C),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_6ObjectList_000040[] = {
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
    OBJECT_KIBAKO2,
    OBJECT_FR,
    OBJECT_BG_TELEPORTER,
    OBJECT_TL,
};

ActorEntry woodfall_temple_room_6ActorEntry_00006C[] = {
    { ACTOR_EN_KAME,      { 2265, -1430,  120 }, {    0, 0x7D00, 0 }, 0x0000 },
    { ACTOR_EN_KAME,      { 2190, -1435,  -15 }, {    0, 0x8700, 0 }, 0x0000 },
    { ACTOR_EN_KAME,      { 2490, -1433, -240 }, {    0, 0x9D80, 0 }, 0x0000 },
    { ACTOR_EN_KUSA,      { 2565, -1425,  150 }, {    0, 0x6380, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { 2040, -1425,  150 }, {    0, 0x6B00, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { 2520, -1425,  210 }, {    0, 0x8480, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { 1980, -1425,  240 }, {    0, 0x9680, 0 }, 0x002B },
    { ACTOR_EN_KUSA,      { 2070, -1425,  210 }, {    0, 0x2800, 0 }, 0x002B },
    { ACTOR_EN_BOX,       { 2265, -1440,    0 }, { 0x41, 0x4000, 0 }, 0x101D }, // Chest flag: 0x1D, Dungeon Map
    { ACTOR_OBJ_KIBAKO2,  { 2360, -1425,  325 }, {    0,      0, 0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO3,  { 2300, -1425,  325 }, {    0, 0x8000, 0 }, 0x0244 }, // Purple: 4 (Woodfall)
    { ACTOR_OBJ_KIBAKO2,  { 2240, -1425,  325 }, {    0,      0, 0 }, 0xFFFF },
};

RoomShapeCullable woodfall_temple_room_6RoomShapeCullable_000130 = { 
    2, 8,
    woodfall_temple_room_6RoomShapeCullableEntry_00013C,
    woodfall_temple_room_6RoomShapeCullableEntry_00013C + ARRAY_COUNTU(woodfall_temple_room_6RoomShapeCullableEntry_00013C)
};

RoomShapeCullableEntry woodfall_temple_room_6RoomShapeCullableEntry_00013C[8] = {
    { {   2301,  -1274,      2 },    290, woodfall_temple_room_6DL_001A50, NULL },
    { {   2250,  -1433,   -105 },    386, woodfall_temple_room_6DL_001FC8, NULL },
    { {   2257,  -1433,    -98 },    326, NULL, woodfall_temple_room_6DL_002EF0 },
    { {   2250,  -1125,   -180 },    408, woodfall_temple_room_6DL_0002D0, NULL },
    { {   2250,  -1305,   -225 },    404, woodfall_temple_room_6DL_0004D8, NULL },
    { {   2250,  -1253,      0 },    466, woodfall_temple_room_6DL_000B58, NULL },
    { {   1965,  -1425,      0 },    168, woodfall_temple_room_6DL_000FC8, NULL },
    { {   1875,  -1305,      0 },    152, woodfall_temple_room_6DL_001330, NULL },
};

s32 woodfall_temple_room_6_terminatorMaybe_0001BC = { 0x01000000 };

Vtx woodfall_temple_room_6Vtx_0001C0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_0001C0.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_0003B8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_0003B8.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_0005C8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_0005C8.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_000E48[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_000E48.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_001130[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_001130.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_0014B0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_0014B0.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_001C58[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_001C58.vtx.inc"
};

Vtx woodfall_temple_room_6Vtx_002DA0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Vtx_002DA0.vtx.inc"
};

u64 woodfall_temple_room_6Tex_002198[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Tex_002198.ia8.inc.c"
};

u64 woodfall_temple_room_6Tex_002598[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_6Tex_002598.ci8.inc.c"
};

Gfx woodfall_temple_room_6DL_0002D0[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_0001C0[9], 8, 0),
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
    gsSPVertex(woodfall_temple_room_6Vtx_0001C0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 2, 0),
    gsSP1Triangle(7, 8, 2, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_0004D8[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_0003B8[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_6Tex_002598, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_6Vtx_0003B8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(4, 6, 9, 0, 4, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_000B58[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_0005C8[81], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_6Tex_002598, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_6Vtx_0005C8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 5, 0, 10, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015090, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_6Vtx_0005C8[12], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 4, 3, 0),
    gsSP2Triangles(7, 3, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(6, 10, 7, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 13, 15, 0, 18, 15, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 22, 0),
    gsSP2Triangles(17, 22, 18, 0, 22, 13, 18, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
    gsSP2Triangles(21, 25, 22, 0, 25, 13, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 13, 25, 29, 0),
    gsSP2Triangles(13, 29, 14, 0, 30, 10, 12, 0),
    gsSP1Triangle(30, 12, 31, 0),
    gsSPVertex(&woodfall_temple_room_6Vtx_0005C8[44], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(8, 5, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(0, 8, 10, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 13, 0, 0, 13, 15, 0),
    gsSP2Triangles(0, 11, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 14, 0, 17, 0, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 26, 22, 0, 25, 22, 21, 0),
    gsSP2Triangles(26, 24, 22, 0, 27, 19, 23, 0),
    gsSP2Triangles(3, 27, 23, 0, 3, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_6Vtx_0005C8[72], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 5, 4, 0, 0, 6, 7, 0),
    gsSP1Triangle(8, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_000FC8[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_000E48[16], 8, 0),
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
    gsSPVertex(woodfall_temple_room_6Vtx_000E48, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_6Vtx_000E48[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_001330[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_001130[24], 8, 0),
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
    gsSPVertex(woodfall_temple_room_6Vtx_001130, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016990, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_6Vtx_001130[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_001A50[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_0014B0[82], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_6Vtx_0014B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 5, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 4, 6, 0, 12, 6, 10, 0),
    gsSP2Triangles(13, 0, 3, 0, 13, 3, 12, 0),
    gsSP2Triangles(14, 15, 0, 0, 14, 0, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 14, 0),
    gsSP2Triangles(11, 9, 19, 0, 11, 19, 16, 0),
    gsSP2Triangles(9, 8, 20, 0, 9, 20, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(15, 21, 1, 0, 15, 1, 0, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 24, 27, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 27, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_6Vtx_0014B0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 4, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 10, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 12, 0),
    gsSP2Triangles(2, 16, 17, 0, 2, 17, 15, 0),
    gsSP2Triangles(13, 17, 18, 0, 13, 18, 14, 0),
    gsSP2Triangles(11, 18, 19, 0, 11, 19, 8, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 26, 0),
    gsSP2Triangles(27, 28, 25, 0, 27, 25, 29, 0),
    gsSP2Triangles(30, 27, 29, 0, 30, 29, 31, 0),
    gsSP1Triangle(31, 24, 26, 0),
    gsSPVertex(&woodfall_temple_room_6Vtx_0014B0[64], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 12, 0, 8, 16, 14, 0),
    gsSP2Triangles(8, 14, 9, 0, 4, 17, 16, 0),
    gsSP1Triangle(4, 16, 6, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_001FC8[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_001C58[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 248),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_6Tex_002198, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 14),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_012C90, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_6Vtx_001C58, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 1, 6, 7, 0),
    gsSP2Triangles(1, 7, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(8, 5, 4, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 8, 4, 0),
    gsSP2Triangles(5, 8, 11, 0, 5, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 12, 0),
    gsSP2Triangles(16, 12, 18, 0, 10, 19, 16, 0),
    gsSP2Triangles(10, 16, 18, 0, 17, 20, 21, 0),
    gsSP2Triangles(20, 19, 22, 0, 20, 22, 21, 0),
    gsSP2Triangles(17, 23, 24, 0, 23, 22, 25, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 17, 27, 0),
    gsSP2Triangles(28, 26, 27, 0, 28, 27, 29, 0),
    gsSP2Triangles(17, 24, 30, 0, 25, 29, 30, 0),
    gsSP1Triangle(25, 30, 24, 0),
    gsSPVertex(&woodfall_temple_room_6Vtx_001C58[31], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 7, 8, 0),
    gsSP2Triangles(6, 5, 7, 0, 9, 8, 7, 0),
    gsSP2Triangles(5, 10, 11, 0, 5, 11, 9, 0),
    gsSP2Triangles(5, 9, 7, 0, 12, 8, 9, 0),
    gsSP2Triangles(13, 12, 9, 0, 13, 9, 11, 0),
    gsSP2Triangles(14, 15, 8, 0, 14, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_6DL_002EF0[] = {
    gsSPVertex(&woodfall_temple_room_6Vtx_002DA0[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 75, 75, 205, 89),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_013490, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, 15),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_013490, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 14),
    gsSPDisplayList(0x08000000),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_6Vtx_002DA0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 1, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 12, 0),
    gsSP1Triangle(8, 12, 9, 0),
    gsSPEndDisplayList(),
};
