#include "woodfall_temple_scene.h"
#include "woodfall_temple_room_4.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd woodfall_temple_room_4[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_4RoomShapeCullable_000100),
    SCENE_CMD_OBJECT_LIST(16, woodfall_temple_room_4ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(7, woodfall_temple_room_4ActorEntry_00006C),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_4ObjectList_000040[] = {
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
};

ActorEntry woodfall_temple_room_4ActorEntry_00006C[] = {
    { ACTOR_EN_GRASSHOPPER, {  -990, -1330, 1155 }, {    0, 0x6100, 0 }, 0x0000 },
    { ACTOR_EN_GRASSHOPPER, { -1170, -1390,  945 }, {    0, 0x5200, 0 }, 0x0000 },
    { ACTOR_EN_KUSA,        {  -901, -1485,  776 }, {    0, 0x7F80, 0 }, 0x002B },
    { ACTOR_EN_KUSA,        {  -855, -1487,  849 }, {    0, 0x8A80, 0 }, 0x002B },
    { ACTOR_EN_KUSA,        {  -873, -1491,  905 }, {    0, 0x9980, 0 }, 0x002B },
    { ACTOR_EN_BOX,         { -1110, -1508, 1125 }, { 0x40,      0, 0 }, 0x101C }, // Chest flag: 0x1C, Compass
    { ACTOR_OBJ_KIBAKO3,    { -1375, -1485,  800 }, {    0, 0x4000, 0 }, 0x0234 }, // Purple: 3 (Woodfall)
};

RoomShapeCullable woodfall_temple_room_4RoomShapeCullable_000100 = { 
    2, 7,
    woodfall_temple_room_4RoomShapeCullableEntry_00010C,
    woodfall_temple_room_4RoomShapeCullableEntry_00010C + ARRAY_COUNTU(woodfall_temple_room_4RoomShapeCullableEntry_00010C)
};

RoomShapeCullableEntry woodfall_temple_room_4RoomShapeCullableEntry_00010C[7] = {
    { {  -1110,  -1497,    945 },    344, woodfall_temple_room_4DL_0018A8, NULL },
    { {  -1080,  -1500,   1046 },    298, NULL, woodfall_temple_room_4DL_002340 },
    { {  -1110,  -1365,    615 },    152, woodfall_temple_room_4DL_000380, NULL },
    { {  -1110,  -1257,    930 },    432, woodfall_temple_room_4DL_000C00, NULL },
    { {   -915,  -1365,    930 },    340, woodfall_temple_room_4DL_001130, NULL },
    { {   -960,  -1065,    930 },    342, woodfall_temple_room_4DL_001330, NULL },
    { {  -1215,  -1311,   1207 },    214, woodfall_temple_room_4DL_001578, NULL },
};

s32 woodfall_temple_room_4_terminatorMaybe_00017C = { 0x01000000 };

Vtx woodfall_temple_room_4Vtx_000180[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_000180.vtx.inc"
};

Vtx woodfall_temple_room_4Vtx_000500[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_000500.vtx.inc"
};

Vtx woodfall_temple_room_4Vtx_001010[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_001010.vtx.inc"
};

Vtx woodfall_temple_room_4Vtx_001220[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_001220.vtx.inc"
};

Vtx woodfall_temple_room_4Vtx_001418[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_001418.vtx.inc"
};

Vtx woodfall_temple_room_4Vtx_001678[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_001678.vtx.inc"
};

Vtx woodfall_temple_room_4Vtx_002220[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Vtx_002220.vtx.inc"
};

u64 woodfall_temple_room_4Tex_001A18[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_4Tex_001A18.ci8.inc.c"
};

Gfx woodfall_temple_room_4DL_000380[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_000180[24], 8, 0),
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
    gsSPVertex(woodfall_temple_room_4Vtx_000180, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016990, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_4Vtx_000180[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_4DL_000C00[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_000500[104], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015090, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_4Vtx_000500, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 10, 0, 17, 5, 9, 0),
    gsSP2Triangles(17, 9, 18, 0, 19, 17, 18, 0),
    gsSP2Triangles(18, 9, 3, 0, 18, 3, 20, 0),
    gsSP2Triangles(2, 21, 20, 0, 2, 20, 3, 0),
    gsSP2Triangles(21, 22, 20, 0, 19, 18, 23, 0),
    gsSP2Triangles(18, 13, 23, 0, 24, 19, 23, 0),
    gsSP2Triangles(11, 24, 23, 0, 11, 23, 13, 0),
    gsSP2Triangles(11, 13, 12, 0, 22, 25, 26, 0),
    gsSP2Triangles(22, 26, 20, 0, 25, 14, 26, 0),
    gsSP2Triangles(18, 20, 26, 0, 13, 18, 26, 0),
    gsSP2Triangles(13, 26, 14, 0, 22, 27, 28, 0),
    gsSP2Triangles(22, 28, 25, 0, 28, 15, 14, 0),
    gsSP2Triangles(28, 14, 25, 0, 27, 29, 30, 0),
    gsSP2Triangles(29, 16, 15, 0, 29, 15, 30, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015490, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_4Vtx_000500[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_4Tex_001A18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_4Vtx_000500[43], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(1, 10, 11, 0, 1, 11, 2, 0),
    gsSP2Triangles(12, 7, 6, 0, 12, 6, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_4Vtx_000500[57], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(13, 8, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(18, 19, 20, 0, 16, 15, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 8, 23, 14, 0),
    gsSP2Triangles(24, 8, 10, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 28, 27, 3, 0),
    gsSP2Triangles(28, 3, 2, 0, 5, 4, 29, 0),
    gsSP1Triangle(5, 29, 30, 0),
    gsSPVertex(&woodfall_temple_room_4Vtx_000500[88], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 4, 7, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_4Vtx_000500[100], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_4DL_001130[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_001010[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_4Tex_001A18, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_4Vtx_001010, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(4, 6, 9, 0, 4, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_4DL_001330[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_001220[9], 8, 0),
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
    gsSPVertex(woodfall_temple_room_4Vtx_001220, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 7, 2, 0),
    gsSP1Triangle(7, 8, 2, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_4DL_001578[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_001418[14], 8, 0),
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
    gsSPVertex(woodfall_temple_room_4Vtx_001418, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(4, 12, 10, 0, 4, 10, 5, 0),
    gsSP2Triangles(1, 13, 12, 0, 1, 12, 2, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_4DL_0018A8[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_001678[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 205),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_012490, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_012C90, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_4Vtx_001678, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 7, 6, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 13, 10, 0),
    gsSP2Triangles(8, 7, 14, 0, 7, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(19, 18, 1, 0, 19, 1, 0, 0),
    gsSP2Triangles(13, 20, 21, 0, 13, 21, 10, 0),
    gsSP2Triangles(20, 22, 21, 0, 7, 10, 21, 0),
    gsSP2Triangles(15, 7, 21, 0, 15, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 3, 2, 0, 25, 2, 26, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_4DL_002340[] = {
    gsSPVertex(&woodfall_temple_room_4Vtx_002220[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 75, 75, 205, 89),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_013490, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_013490, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPDisplayList(0x08000000),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_4Vtx_002220, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP1Triangle(8, 0, 9, 0),
    gsSPEndDisplayList(),
};
