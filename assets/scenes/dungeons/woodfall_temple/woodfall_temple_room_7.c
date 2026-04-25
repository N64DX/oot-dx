#include "woodfall_temple_scene.h"
#include "woodfall_temple_room_7.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd woodfall_temple_room_7[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_7RoomShapeCullable_0000B0),
    SCENE_CMD_OBJECT_LIST(17, woodfall_temple_room_7ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(4, woodfall_temple_room_7ActorEntry_00006C),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_7ObjectList_000040[] = {
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
    OBJECT_DINOFOS,
};

ActorEntry woodfall_temple_room_7ActorEntry_00006C[] = {
    { ACTOR_EN_DINOFOS,   { 1230,  -781, 1180 }, {    0, 0x8000, 0 }, 0xFE00 },
    { ACTOR_EN_DINOFOS,   { 1330,  -781, 1180 }, {    0, 0x8000, 0 }, 0xFE00 },
    { ACTOR_EN_DINOFOS,   { 1130,  -781, 1180 }, {    0, 0x8000, 0 }, 0xFE00 },
    { ACTOR_EN_BOX,       { 1230, -1215, 1455 }, { 0x80,      0, 0 }, 0x101B }, // Chest flag: 1B, Great Fairy's Sword
};

RoomShapeCullable woodfall_temple_room_7RoomShapeCullable_0000B0 = { 
    2, 9,
    woodfall_temple_room_7RoomShapeCullableEntry_0000BC,
    woodfall_temple_room_7RoomShapeCullableEntry_0000BC + ARRAY_COUNTU(woodfall_temple_room_7RoomShapeCullableEntry_0000BC)
};

RoomShapeCullableEntry woodfall_temple_room_7RoomShapeCullableEntry_0000BC[9] = {
    { {   1230,  -1200,   1230 },    602, woodfall_temple_room_7DL_000740, NULL },
    { {   1230,  -1200,   1305 },    560, woodfall_temple_room_7DL_002678, NULL },
    { {   1247,  -1208,   1373 },    404, NULL, woodfall_temple_room_7DL_003620 },
    { {   1390,  -1020,   1259 },    398, woodfall_temple_room_7DL_0010A0, NULL },
    { {   1230,  -1065,    735 },    152, woodfall_temple_room_7DL_001510, NULL },
    { {   1230,  -1185,    825 },    168, woodfall_temple_room_7DL_001810, NULL },
    { {   1170,   -945,   1230 },    682, woodfall_temple_room_7DL_001B68, NULL },
    { {   1515,  -1065,   1230 },    532, woodfall_temple_room_7DL_001E10, NULL },
    { {   1230,   -825,   1230 },    612, woodfall_temple_room_7DL_002170, NULL },
};

s32 woodfall_temple_room_7_terminatorMaybe_00014C = { 0x01000000 };

Vtx woodfall_temple_room_7Vtx_000150[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_000150.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_000940[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_000940.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_001310[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_001310.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_001690[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_001690.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_001978[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_001978.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_001CF0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_001CF0.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_001F00[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_001F00.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_0022A8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_0022A8.vtx.inc"
};

Vtx woodfall_temple_room_7Vtx_003470[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Vtx_003470.vtx.inc"
};

u64 woodfall_temple_room_7Tex_002870[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Tex_002870.ia8.inc.c"
};

u64 woodfall_temple_room_7Tex_002C70[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_7Tex_002C70.ci8.inc.c"
};

Gfx woodfall_temple_room_7DL_000740[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_000150[87], 8, 0),
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
    gsSPVertex(woodfall_temple_room_7Vtx_000150, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 4, 3, 0),
    gsSP2Triangles(7, 3, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 14, 20, 0),
    gsSP2Triangles(21, 22, 19, 0, 21, 19, 20, 0),
    gsSP2Triangles(23, 14, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(22, 23, 24, 0, 26, 14, 27, 0),
    gsSP2Triangles(25, 18, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 10, 29, 0, 28, 29, 30, 0),
    gsSPVertex(&woodfall_temple_room_7Vtx_000150[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 0, 0, 5, 0, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 4, 0),
    gsSP2Triangles(10, 12, 8, 0, 10, 8, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 15, 0, 13, 18, 19, 0),
    gsSP2Triangles(18, 1, 16, 0, 18, 16, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 20, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 25, 0),
    gsSP1Triangle(29, 25, 28, 0),
    gsSPVertex(&woodfall_temple_room_7Vtx_000150[62], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 0, 0),
    gsSP2Triangles(9, 7, 6, 0, 10, 9, 6, 0),
    gsSP2Triangles(10, 6, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 8, 0, 18, 16, 8, 0),
    gsSP2Triangles(17, 10, 8, 0, 14, 15, 19, 0),
    gsSP2Triangles(7, 20, 21, 0, 7, 21, 1, 0),
    gsSP2Triangles(22, 20, 7, 0, 1, 21, 23, 0),
    gsSP2Triangles(1, 23, 2, 0, 24, 12, 2, 0),
    gsSP1Triangle(24, 2, 23, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_0010A0[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_000940[110], 8, 0),
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
    gsSPVertex(woodfall_temple_room_7Vtx_000940, 32, 0),
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
    gsSPVertex(&woodfall_temple_room_7Vtx_000940[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 10, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 12, 0),
    gsSP2Triangles(2, 16, 17, 0, 2, 17, 15, 0),
    gsSP2Triangles(13, 17, 18, 0, 13, 18, 14, 0),
    gsSP2Triangles(11, 18, 19, 0, 11, 19, 9, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 26, 0),
    gsSP2Triangles(27, 28, 25, 0, 27, 25, 29, 0),
    gsSP2Triangles(30, 27, 29, 0, 30, 29, 31, 0),
    gsSP1Triangle(31, 24, 26, 0),
    gsSPVertex(&woodfall_temple_room_7Vtx_000940[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 12, 0, 8, 16, 14, 0),
    gsSP2Triangles(8, 14, 9, 0, 4, 17, 16, 0),
    gsSP2Triangles(4, 16, 6, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 26, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 25, 27, 0),
    gsSP2Triangles(28, 27, 29, 0, 30, 22, 24, 0),
    gsSP2Triangles(30, 24, 28, 0, 31, 18, 21, 0),
    gsSP1Triangle(31, 21, 30, 0),
    gsSPVertex(&woodfall_temple_room_7Vtx_000940[96], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 4, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(5, 11, 12, 0, 5, 12, 6, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 2, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_001510[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_001310[24], 8, 0),
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
    gsSPVertex(woodfall_temple_room_7Vtx_001310, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016990, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_7Vtx_001310[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_001810[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_001690[16], 8, 0),
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
    gsSPVertex(woodfall_temple_room_7Vtx_001690, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016190, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_7Vtx_001690[12], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_001B68[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_001978[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_7Tex_002C70, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_7Vtx_001978, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 6, 0, 12, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_7Vtx_001978[14], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 5, 4, 0, 6, 0, 7, 0),
    gsSP1Triangle(0, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_001E10[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_001CF0[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_7Tex_002C70, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_7Vtx_001CF0, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(4, 6, 9, 0, 4, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_002170[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_001F00[31], 8, 0),
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
    gsSPVertex(woodfall_temple_room_7Vtx_001F00, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
    gsSP2Triangles(2, 12, 13, 0, 2, 13, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 10, 0, 17, 10, 11, 0),
    gsSP2Triangles(13, 12, 18, 0, 13, 18, 19, 0),
    gsSP2Triangles(20, 15, 14, 0, 20, 14, 21, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 24, 0, 28, 29, 24, 0),
    gsSP1Triangle(29, 30, 24, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_002678[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_0022A8[53], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 248),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_7Tex_002870, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(woodfall_temple_sceneTex_012C90, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_7Vtx_0022A8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 4, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 6, 7, 0, 11, 7, 0, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 11, 14, 0, 15, 12, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 11, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 18, 11, 20, 0),
    gsSP2Triangles(18, 20, 19, 0, 15, 19, 21, 0),
    gsSP2Triangles(15, 21, 22, 0, 19, 20, 21, 0),
    gsSP2Triangles(23, 22, 21, 0, 23, 21, 24, 0),
    gsSP2Triangles(21, 20, 25, 0, 21, 25, 24, 0),
    gsSP2Triangles(26, 23, 24, 0, 26, 24, 27, 0),
    gsSP2Triangles(24, 25, 28, 0, 24, 28, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 27, 0),
    gsSP2Triangles(30, 31, 26, 0, 30, 26, 27, 0),
    gsSPVertex(&woodfall_temple_room_7Vtx_0022A8[32], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 3, 0),
    gsSP2Triangles(5, 3, 7, 0, 8, 5, 7, 0),
    gsSP2Triangles(9, 3, 2, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 2, 0, 10, 11, 6, 0),
    gsSP2Triangles(10, 6, 12, 0, 8, 10, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 13, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(15, 11, 19, 0, 15, 19, 20, 0),
    gsSP2Triangles(19, 8, 18, 0, 19, 18, 20, 0),
    gsSPEndDisplayList(),
};

Gfx woodfall_temple_room_7DL_003620[] = {
    gsSPVertex(&woodfall_temple_room_7Vtx_003470[19], 8, 0),
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
    gsSPVertex(woodfall_temple_room_7Vtx_003470, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 2, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 11, 6, 13, 0),
    gsSP2Triangles(1, 14, 15, 0, 1, 15, 2, 0),
    gsSP2Triangles(16, 4, 2, 0, 16, 2, 15, 0),
    gsSP2Triangles(13, 6, 4, 0, 13, 4, 16, 0),
    gsSP2Triangles(14, 1, 17, 0, 1, 0, 18, 0),
    gsSP1Triangle(1, 18, 17, 0),
    gsSPEndDisplayList(),
};
