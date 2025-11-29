#include "woodfall_temple_room_3.h"
#include "woodfall_temple_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd woodfall_temple_room_3Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_3RoomShapeCullable_0001B0),
    SCENE_CMD_OBJECT_LIST(15, woodfall_temple_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(22, woodfall_temple_room_3ActorEntry_00006C),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_3ObjectList_000040[] = {
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
    OBJECT_BG_TELEPORTER,
    OBJECT_YDAN_OBJECTS,
};

ActorEntry woodfall_temple_room_3ActorEntry_00006C[] = {
    { ACTOR_DOOR_SPIRAL,   { -1110, -1185, -960 }, {      0,      0,      0 }, 0x0080 },
    { ACTOR_BG_TELEPORTER, { -1140, -1185, -920 }, {      5,      0, 0x0109 }, 0x0600 },
    { ACTOR_BG_TELEPORTER, { -1110, -1185, -920 }, {      5,      0, 0x0109 }, 0x0600 },
    { ACTOR_BG_TELEPORTER, { -1080, -1185, -920 }, {      5,      0, 0x0109 }, 0x0600 },
    { ACTOR_EN_KAREBABA,   { -1215, -1185, -825 }, {      0, 0x1E00,      0 }, 0x0001 },
    { ACTOR_BG_YDAN_SP,    { -1110, -1100, -585 }, { 0x4000,      0,      0 }, 0x0001 }, // Sets switch: 0x01
    { ACTOR_EN_ST,         { -1410, -1300, -630 }, {      0, 0x1680,      0 }, 0x003F },
    { ACTOR_EN_DEKUBABA,   { -1200, -1185, -780 }, {      0, 0x0F00,      0 }, 0x0000 },
    { ACTOR_ELF_MSG,       { -1110, -1485,    0 }, {   0x14,      0,      0 }, 0x0C0A },
    { ACTOR_OBJ_PZLBLOCK,  { -1110, -1485,    0 }, {      1,      0,      6 }, 0x073F }, // Sets switch: 0x3F
    { ACTOR_EN_TANRON1,    { -1350, -1405, -570 }, {      0,      0,      0 }, 0x0004 },
    { ACTOR_OBJ_SYOKUDAI,  { -1380, -1195, -210 }, {      0,      0,      0 }, 0x200A }, // Sets switch: 0x0A
    { ACTOR_OBJ_SYOKUDAI,  { -1350, -1485, -570 }, {      0,      0,      0 }, 0x243F }, // Sets switch: 0x3F
    { ACTOR_OBJ_SYOKUDAI,  { -1050, -1185, -810 }, {      0,      0,      0 }, 0x243F }, // Sets switch: 0x3F
    { ACTOR_OBJ_SYOKUDAI,  { -1062, -1485,  405 }, {      0,      0,      0 }, 0x1053 }, // Sets switch: 0x13
    { ACTOR_ELF_MSG2,      { -1062, -1415,  406 }, {      0,   0x14,      0 }, 0x140B }, // Sets switch: 0x14
    { ACTOR_OBJ_TSUBO,     {  -780, -1185, -165 }, {      0,      0,      0 }, 0x0003 }, // Drops Recovery Heart
    { ACTOR_OBJ_TSUBO,     {  -780, -1185, -105 }, {      0,      0,      0 }, 0x0003 }, // Drops Recovery Heart
    { ACTOR_OBJ_COMB,      { -1110, -1255, -128 }, {      0,      0,      0 }, 0xFF02 },
    { ACTOR_OBJ_COMB,      { -1110, -1255, -368 }, {      0,      0,      0 }, 0xFF02 },
    { ACTOR_OBJ_PURIFY,    { -1110, -1604,  -60 }, {      0,      0,      0 }, 0x1001 },
    { ACTOR_OBJ_PURIFY,    { -1110, -1515,  -60 }, {      0,      0,      0 }, 0x0001 },
};

RoomShapeCullable woodfall_temple_room_3RoomShapeCullable_0001B0 = { 
    2, 20,
    woodfall_temple_room_3RoomShapeCullableEntry_0001BC,
    woodfall_temple_room_3RoomShapeCullableEntry_0001BC + ARRAY_COUNTU(woodfall_temple_room_3RoomShapeCullableEntry_0001BC)
};

RoomShapeCullableEntry woodfall_temple_room_3RoomShapeCullableEntry_0001BC[20] = {
    { {  -1110,  -1545,    -60 },    730, woodfall_temple_room_3DL_000F88, NULL },
    { {  -1110,  -1215,   -360 },    490, woodfall_temple_room_3DL_0016B8, NULL },
    { {  -1110,  -1605,    -60 },    726, woodfall_temple_room_3DL_0019B0, NULL },
    { {  -1110,  -1530,   -360 },    492, woodfall_temple_room_3DL_0045D0, NULL },
    { {  -1200,  -1530,    270 },    408, woodfall_temple_room_3DL_003AA0, NULL },
    { {  -1110,  -1515,      0 },    204, woodfall_temple_room_3DL_006788, NULL },
    { {  -1110,  -1215,    -60 },    776, woodfall_temple_room_3DL_006B30, NULL },
    { {  -1410,  -1365,    150 },    262, woodfall_temple_room_3DL_000440, NULL },
    { {  -1110,   -945,     30 },    650, woodfall_temple_room_3DL_001BA0, NULL },
    { {  -1110,  -1275,    585 },    490, woodfall_temple_room_3DL_001FF0, NULL },
    { {   -735,  -1275,   -360 },    468, woodfall_temple_room_3DL_0023E8, NULL },
    { {  -1110,  -1275,   -600 },    498, woodfall_temple_room_3DL_0028A0, NULL },
    { {   -735,  -1275,    165 },    524, woodfall_temple_room_3DL_003270, NULL },
    { {  -1470,  -1275,   -360 },    468, woodfall_temple_room_3DL_002ED8, NULL },
    { {  -1470,  -1275,    270 },    446, woodfall_temple_room_3DL_002BD8, NULL },
    { {  -1065,  -1410,   -128 },    212, woodfall_temple_room_3DL_004A90, NULL },
    { {  -1137,  -1410,   -368 },    206, woodfall_temple_room_3DL_004E60, NULL },
    { {  -1110,  -1215,   -128 },    118, woodfall_temple_room_3DL_005200, NULL },
    { {  -1103,  -1215,   -368 },     92, woodfall_temple_room_3DL_005608, NULL },
    { {  -1110,  -1108,   -735 },    246, woodfall_temple_room_3DL_005C80, NULL },
};

s32 woodfall_temple_room_3_terminatorMaybe_0002FC = { 0x01000000 };

Vtx woodfall_temple_room_3Vtx_000300[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_000300.vtx.inc"
};

Gfx woodfall_temple_room_3DL_000440[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_000300[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_008BA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_000300, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_008FA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_000300[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_000300[8], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_000618[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_000618.vtx.inc"
};

Gfx woodfall_temple_room_3DL_000F88[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[143], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_008BA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_000618, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_008FA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[8], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[14], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[46], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[54], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 3, 0, 16, 3, 18, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[84], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 3, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[116], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_000618[127], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_001378[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_001378.vtx.inc"
};

Gfx woodfall_temple_room_3DL_0016B8[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_001378[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_008FA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_001378, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015090, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_001378[24], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015D90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_001378[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_0018D0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_0018D0.vtx.inc"
};

Gfx woodfall_temple_room_3DL_0019B0[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_0018D0[6], 8, 0),
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
    gsSPVertex(woodfall_temple_room_3Vtx_0018D0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 4, 2, 1, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_001A90[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_001A90.vtx.inc"
};

Gfx woodfall_temple_room_3DL_001BA0[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_001A90[9], 8, 0),
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
    gsSPVertex(woodfall_temple_room_3Vtx_001A90, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsSP2Triangles(0, 5, 8, 0, 0, 8, 7, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_001C90[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_001C90.vtx.inc"
};

Gfx woodfall_temple_room_3DL_001FF0[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_001C90[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0087A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_001C90, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014490, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_001C90[4], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(2, 4, 7, 0, 2, 7, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_001C90[24], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 6, 20, 0, 18, 20, 19, 0),
    gsSP2Triangles(12, 21, 5, 0, 12, 5, 13, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_002228[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_002228.vtx.inc"
};

Gfx woodfall_temple_room_3DL_0023E8[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_002228[20], 8, 0),
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
    gsSPVertex(woodfall_temple_room_3Vtx_002228, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_002228[4], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 5, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 12, 0, 3, 0),
    gsSP2Triangles(14, 12, 3, 0, 14, 3, 15, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_002570[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_002570.vtx.inc"
};

Gfx woodfall_temple_room_3DL_0028A0[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_002570[43], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_013C90, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_002570, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 2, 0),
    gsSP2Triangles(4, 2, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 15, 14, 18, 0),
    gsSP2Triangles(15, 18, 19, 0, 18, 14, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_002570[20], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(3, 2, 16, 0, 3, 16, 17, 0),
    gsSP2Triangles(18, 19, 3, 0, 18, 3, 20, 0),
    gsSP2Triangles(21, 22, 0, 0, 21, 0, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_002A58[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_002A58.vtx.inc"
};

Gfx woodfall_temple_room_3DL_002BD8[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_002A58[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0087A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_002A58, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_002A58[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 3, 2, 9, 0),
    gsSP2Triangles(7, 8, 10, 0, 7, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_002D48[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_002D48.vtx.inc"
};

Gfx woodfall_temple_room_3DL_002ED8[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_002D48[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_002D48, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(1, 10, 8, 0, 1, 8, 5, 0),
    gsSP2Triangles(11, 12, 1, 0, 11, 1, 0, 0),
    gsSP2Triangles(12, 13, 10, 0, 12, 10, 1, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 10, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_002FE0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_002FE0.vtx.inc"
};

Gfx woodfall_temple_room_3DL_003270[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_002FE0[33], 8, 0),
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
    gsSPVertex(woodfall_temple_room_3Vtx_002FE0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_002FE0[16], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(3, 2, 12, 0, 3, 12, 4, 0),
    gsSP2Triangles(4, 12, 13, 0, 4, 13, 5, 0),
    gsSP2Triangles(14, 15, 4, 0, 14, 4, 16, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_003410[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_003410.vtx.inc"
};

Gfx woodfall_temple_room_3DL_003AA0[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_003410[97], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0091A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_003410, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 17, 11, 14, 0),
    gsSP2Triangles(17, 14, 18, 0, 19, 20, 21, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003410[22], 4, 0),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003410[26], 31, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(13, 16, 19, 0, 13, 19, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 26, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 27, 28, 0),
    gsSP1Triangle(29, 28, 30, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003410[57], 32, 0),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 2, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 18, 0, 3, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003410[89], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_003C90[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_003C90.vtx.inc"
};

Gfx woodfall_temple_room_3DL_0045D0[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[140], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0091A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_003C90, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 4, 5, 0),
    gsSP2Triangles(9, 5, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(12, 18, 19, 0, 12, 19, 13, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 11, 6, 9, 0),
    gsSP2Triangles(11, 9, 12, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(18, 24, 25, 0, 18, 25, 19, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[64], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 8, 0),
    gsSP1Triangle(4, 8, 5, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[73], 4, 0),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[77], 8, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[85], 4, 0),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[89], 11, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 7, 8, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[100], 32, 0),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_003C90[132], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_004850[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_004850.vtx.inc"
};

Gfx woodfall_temple_room_3DL_004A90[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_004850[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_007DA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_004850, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0085A0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_004850[6], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 14, 15, 0, 10, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 20, 21, 0, 16, 21, 17, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_004C20[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_004C20.vtx.inc"
};

Gfx woodfall_temple_room_3DL_004E60[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_004C20[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_007DA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_004C20, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 5, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0085A0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_004C20[6], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 4, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 10, 0, 14, 10, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_004FF0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_004FF0.vtx.inc"
};

Gfx woodfall_temple_room_3DL_005200[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_004FF0[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_007CA0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_004FF0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_007DA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_004FF0[16], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0081A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_004FF0[21], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_0053F8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_0053F8.vtx.inc"
};

Gfx woodfall_temple_room_3DL_005608[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_0053F8[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_007CA0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_0053F8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_007DA0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_0053F8[16], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0081A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_0053F8[21], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_005800[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_005800.vtx.inc"
};

Gfx woodfall_temple_room_3DL_005C80[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_005800[64], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_014C90, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_005800, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(5, 9, 6, 0, 9, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_015090, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_005800[10], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 9, 7, 0),
    gsSP2Triangles(10, 11, 2, 0, 10, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_sceneTex_016590, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&woodfall_temple_room_3Vtx_005800[22], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 2, 1, 7, 0),
    gsSP2Triangles(1, 8, 7, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 2, 0, 5, 11, 12, 0),
    gsSP2Triangles(5, 12, 3, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 1, 0, 0),
    gsSP2Triangles(17, 0, 18, 0, 4, 19, 20, 0),
    gsSP2Triangles(4, 20, 21, 0, 4, 21, 5, 0),
    gsSP2Triangles(18, 22, 23, 0, 18, 23, 24, 0),
    gsSP2Triangles(24, 17, 25, 0, 24, 26, 17, 0),
    gsSP2Triangles(25, 17, 18, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_005800[53], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(4, 3, 5, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_3Vtx_005F08[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_005F08.vtx.inc"
};

Gfx woodfall_temple_room_3DL_006788[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_005F08[128], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_006CA0, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(woodfall_temple_room_3Tex_0074A0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_005F08, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_005F08[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_005F08[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&woodfall_temple_room_3Vtx_005F08[96], 32, 0),
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

Vtx woodfall_temple_room_3Vtx_006970[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Vtx_006970.vtx.inc"
};

Gfx woodfall_temple_room_3DL_006B30[] = {
    gsSPVertex(&woodfall_temple_room_3Vtx_006970[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 79),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(woodfall_temple_room_3Tex_0095A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_3Vtx_006970, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

u64 woodfall_temple_room_3Tex_006CA0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_006CA0.ia8.inc.c"
};

u64 woodfall_temple_room_3Tex_0074A0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_0074A0.rgba16.inc.c"
};

u64 woodfall_temple_room_3Tex_007CA0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_007CA0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_007DA0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_007DA0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_0081A0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_0081A0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_0085A0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_0085A0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_0087A0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_0087A0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_008BA0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_008BA0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_008FA0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_008FA0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_0091A0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_0091A0.ci8.inc.c"
};

u64 woodfall_temple_room_3Tex_0095A0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_3Tex_0095A0.rgba16.inc.c"
};
