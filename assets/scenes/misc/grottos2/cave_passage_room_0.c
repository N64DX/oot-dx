#include "grottos2_scene.h"
#include "cave_passage_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd cave_passage_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&cave_passage_room_0RoomShapeNormal_000150),
    SCENE_CMD_OBJECT_LIST(9, cave_passage_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(22, cave_passage_room_0ActorEntry_000050),
    SCENE_CMD_END(),
};

s16 cave_passage_room_0ObjectList_000040[] = {
    OBJECT_SYOKUDAI,
    OBJECT_DEKUBABA,
    OBJECT_KUSA,
    OBJECT_ST,
    OBJECT_YDAN_OBJECTS,
    OBJECT_KANBAN,
    OBJECT_DKJAIL_OBJ,
    OBJECT_KANBAN,
    OBJECT_GOOMBA,
};

ActorEntry cave_passage_room_0ActorEntry_000050[] = {
    { ACTOR_EN_KUSA,       { -1392,  95,  -610 }, {  0,      0, 0 }, 0xFF01 },
    { ACTOR_EN_KUSA,       { -1414,  95,  -516 }, {  0,      0, 0 }, 0xFF01 },
    { ACTOR_EN_KUSA,       { -1488,  95,  -434 }, {  0,      0, 0 }, 0xFF01 },
    { ACTOR_EN_KUSA,       { -1609,  95,  -433 }, {  0,      0, 0 }, 0xFF01 },
    { ACTOR_EN_KUSA,       { -1410,  95,  -690 }, {  0,      0, 0 }, 0xFF01 },
    { ACTOR_OBJ_SYOKUDAI,  { -2091, 145, -1489 }, {  0,      0, 0 }, 0x2400 },
    { ACTOR_OBJ_SYOKUDAI,  { -1559,  87, -1171 }, {  0,      0, 0 }, 0x13C0 },
    { ACTOR_OBJ_SYOKUDAI,  { -2086,  59, -1018 }, {  0,      0, 0 }, 0x13C0 },
    { ACTOR_EN_SW,         { -1718, 190,  -514 }, {  0, 0x4000, 0 }, 0x0000 },
    { ACTOR_EN_SW,         { -1718, 190,  -563 }, {  0, 0x4000, 0 }, 0x0000 },
    { ACTOR_EN_SW,         { -1718, 190,  -610 }, {  0, 0x4000, 0 }, 0x0000 },
    { ACTOR_EN_DEKUBABA,   { -1538,  95,  -556 }, {  0, 0x76C0, 0 }, 0x0001 },
    { ACTOR_EN_GOOMBA,     { -1550,  87, -1100 }, {  0, 0x2000, 0 }, 0x0000 },
    { ACTOR_EN_GOOMBA,     { -2150,  59, -1000 }, {  0, 0x4000, 0 }, 0x0000 },
    { ACTOR_EN_GOOMBA,     { -1570,  95,  -620 }, {  0, 0x8000, 0 }, 0x0000 },
    { ACTOR_OBJ_OSHIHIKI,  { -1990,  52, -1126 }, {  0,      0, 0 }, 0x1100 }, // Sets switch: 11, without switch
    { ACTOR_OBJ_OSHIHIKI,  { -1930, -10, -1126 }, {  0,      0, 0 }, 0x1104 }, // Sets switch: 11, with switch
    { ACTOR_OBJ_BLOCKSTOP, { -1931, -10, -1126 }, {  0,      0, 0 }, 0x0011 }, // Checks switch: 11
    { ACTOR_BG_YDAN_SP,    { -2694,  -1, -1055 }, {  0, 0x4000, 0 }, 0x1010 }, // Sets Switch: 10
    { ACTOR_BG_DKJAIL_IVY, { -1900, 130, -1550 }, {  0, 0x4000, 0 }, 0x0112 }, // Sets switch: 12
    { ACTOR_ELF_MSG,       { -1900, 130, -1550 }, { 30,      0, 0 }, 0x9310 }, // Sets switch: 13
    { ACTOR_EN_KANBAN,     { -990,   26, -1090 }, {  0, 0xE800, 0 }, 0x005A },
};

RoomShapeNormal cave_passage_room_0RoomShapeNormal_000150 = { 
    0, 12,
    cave_passage_room_0RoomShapeDListsEntry_00015C,
    cave_passage_room_0RoomShapeDListsEntry_00015C + ARRAY_COUNTU(cave_passage_room_0RoomShapeDListsEntry_00015C)
};

RoomShapeDListsEntry cave_passage_room_0RoomShapeDListsEntry_00015C[12] = {
    { cave_passage_room_0DL_0002E0, NULL },
    { cave_passage_room_0DL_000570, NULL },
    { cave_passage_room_0DL_000810, NULL },
    { cave_passage_room_0DL_001D38, NULL },
    { cave_passage_room_0DL_002200, NULL },
    { cave_passage_room_0DL_0023A8, NULL },
    { cave_passage_room_0DL_002B58, NULL },
    { cave_passage_room_0DL_004E58, NULL },
    { cave_passage_room_0DL_005538, NULL },
    { cave_passage_room_0DL_005B18, NULL },
    { cave_passage_room_0DL_0060C8, NULL },
    { cave_passage_room_0DL_0063C0, NULL },
};

s32 cave_passage_room_0_terminatorMaybe_0001BC = { 0x01000000 };

Vtx cave_passage_room_0Vtx_000220[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_000220.vtx.inc"
};

Vtx cave_passage_room_0Vtx_0003D0[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_0003D0.vtx.inc"
};

Vtx cave_passage_room_0Vtx_000670[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_000670.vtx.inc"
};

Vtx cave_passage_room_0Vtx_000928[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_000928.vtx.inc"
};

Vtx cave_passage_room_0Vtx_002130[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_002130.vtx.inc"
};

Vtx cave_passage_room_0Vtx_0022F8[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_0022F8.vtx.inc"
};

Vtx cave_passage_room_0Vtx_002468[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_002468.vtx.inc"
};

Vtx cave_passage_room_0Vtx_002D78[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_002D78.vtx.inc"
};

Vtx cave_passage_room_0Vtx_0053B8[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_0053B8.vtx.inc"
};

Vtx cave_passage_room_0Vtx_005638[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_005638.vtx.inc"
};

Vtx cave_passage_room_0Vtx_005D08[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_005D08.vtx.inc"
};

Vtx cave_passage_room_0Vtx_0062F0[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Vtx_0062F0.vtx.inc"
};

u64 cave_passage_room_0Tex_002D30[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_002D30.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_003530[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_003530.ia16.inc.c"
};

u64 cave_passage_room_0Tex_003930[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_003930.ci8.inc.c"
};

u64 cave_passage_room_0TLUT_003930[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_003930.tlut.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_003D30[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_003D30.ci8.inc.c"
};

u64 cave_passage_room_0TLUT_003D30[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_003D30.tlut.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_004130[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_004130.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_005130[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_005130.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_006130[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_006130.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_007130[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_007130.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_007930[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_007930.ci8.inc.c"
};

u64 cave_passage_room_0TLUT_007930[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_007930.tlut.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_008330[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_008330.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_009330[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_009330.ci4.inc.c"
};

u64 cave_passage_room_0TLUT_009330[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_009330.tlut.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_009B70[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_009B70.rgba16.inc.c"
};

u64 cave_passage_room_0Tex_00A370[] = {
#include "assets/scenes/misc/grottos2/cave_passage_room_0Tex_00A370.rgba16.inc.c"
};

Gfx cave_passage_room_0DL_0002E0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_000220[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(cave_passage_room_0TLUT_007930),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_007930, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_000220, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_000570[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_0003D0[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_006130, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_0003D0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(11, 14, 13, 0, 15, 16, 0, 0),
    gsSP2Triangles(5, 16, 15, 0, 5, 17, 16, 0),
    gsSP2Triangles(7, 17, 5, 0, 12, 17, 7, 0),
    gsSP2Triangles(12, 13, 17, 0, 9, 12, 7, 0),
    gsSP2Triangles(9, 10, 12, 0, 6, 5, 15, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_000810[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_000670[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(cave_passage_room_0TLUT_003D30),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_003D30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_000670, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 11, 13, 0, 13, 11, 8, 0),
    gsSP2Triangles(14, 7, 15, 0, 15, 7, 4, 0),
    gsSP2Triangles(16, 3, 17, 0, 17, 3, 0, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_001D38[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_000928[313], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_004130, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_000928, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[30], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(9, 11, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[60], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 5, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 13, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(10, 12, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[90], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_005130, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&cave_passage_room_0Vtx_000928[93], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 26, 25, 0, 29, 9, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[124], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 12, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 16, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 25, 22, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[154], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(13, 11, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(23, 26, 25, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[185], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 28, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[215], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[246], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 12, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 23, 24, 21, 0),
    gsSP2Triangles(21, 24, 25, 0, 22, 21, 26, 0),
    gsSP2Triangles(21, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[276], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 6, 9, 0, 10, 4, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 12, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(26, 25, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_000928[307], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_002200[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_002130[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal16(0, cave_passage_room_0TLUT_009330),
    gsDPLoadTextureBlock_4b(cave_passage_room_0Tex_009330, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_002130, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_0023A8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_0022F8[3], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_006130, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_0022F8, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_002B58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_002468[103], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_002D30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(cave_passage_room_0Tex_00A370, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 0, 0, 100),
    gsSPVertex(cave_passage_room_0Vtx_002468, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(19, 2, 21, 0, 22, 2, 19, 0),
    gsSP2Triangles(22, 0, 2, 0, 23, 0, 22, 0),
    gsSP2Triangles(24, 23, 22, 0, 24, 22, 19, 0),
    gsSP2Triangles(25, 26, 17, 0, 9, 26, 25, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002468[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(4, 0, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 11, 0),
    gsSP2Triangles(7, 13, 8, 0, 7, 14, 13, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 17, 16, 0),
    gsSP2Triangles(16, 18, 19, 0, 17, 18, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 21, 23, 0),
    gsSP2Triangles(21, 24, 23, 0, 21, 25, 24, 0),
    gsSP2Triangles(21, 26, 25, 0, 20, 22, 27, 0),
    gsSP2Triangles(27, 22, 28, 0, 22, 23, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002468[62], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 2, 10, 0),
    gsSP2Triangles(0, 2, 7, 0, 10, 5, 11, 0),
    gsSP2Triangles(5, 4, 11, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 9, 8, 0, 13, 14, 15, 0),
    gsSP2Triangles(12, 8, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(24, 23, 25, 0, 26, 24, 25, 0),
    gsSP2Triangles(20, 22, 27, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002468[92], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 8, 0),
    gsSP2Triangles(9, 7, 8, 0, 10, 7, 9, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_004E58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[518], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_006130, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_002D78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 22, 0, 24, 26, 25, 0),
    gsSP2Triangles(27, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[32], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 18, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 24, 23, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[62], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 24, 23, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[92], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 18, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 26, 29, 28, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[122], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 11, 12, 0, 13, 14, 3, 0),
    gsSP2Triangles(15, 14, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 17, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 5, 28, 0),
    gsSP1Triangle(29, 3, 5, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[152], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 6, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[182], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 18, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 21, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 29, 28, 25, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[212], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(5, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(15, 14, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[244], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_007130, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[265], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[295], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 20, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 27, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[325], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(3, 5, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 21, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[355], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[386], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 15, 14, 19, 0),
    gsSP2Triangles(6, 8, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[416], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[447], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(18, 17, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[477], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 26, 24, 0, 19, 27, 18, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_002D78[508], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_005538[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_0053B8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(cave_passage_room_0TLUT_003930),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_003930, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_0053B8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_005B18[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_005638[70], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_003530, G_IM_FMT_IA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_005638, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 13, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 17, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 21, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 25, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&cave_passage_room_0Vtx_005638[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_008330, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&cave_passage_room_0Vtx_005638[35], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 5, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 9, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 18, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 22, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 30, 0),
    gsSPVertex(&cave_passage_room_0Vtx_005638[66], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_0060C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_005D08[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal16(0, cave_passage_room_0TLUT_009330),
    gsDPLoadTextureBlock_4b(cave_passage_room_0Tex_009330, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_005D08, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 8, 5, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(1, 12, 11, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 14, 16, 0),
    gsSP2Triangles(17, 15, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(20, 19, 21, 0, 19, 22, 21, 0),
    gsSP2Triangles(23, 17, 24, 0, 24, 17, 16, 0),
    gsSP2Triangles(25, 26, 27, 0, 6, 26, 25, 0),
    gsSP2Triangles(6, 28, 26, 0, 8, 28, 6, 0),
    gsSP2Triangles(20, 28, 8, 0, 20, 21, 28, 0),
    gsSP2Triangles(10, 20, 8, 0, 10, 18, 20, 0),
    gsSP2Triangles(7, 6, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&cave_passage_room_0Vtx_005D08[32], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(cave_passage_room_0Tex_009B70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&cave_passage_room_0Vtx_005D08[42], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 0, 2, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx cave_passage_room_0DL_0063C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&cave_passage_room_0Vtx_0062F0[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal16(0, cave_passage_room_0TLUT_009330),
    gsDPLoadTextureBlock_4b(cave_passage_room_0Tex_009330, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(cave_passage_room_0Vtx_0062F0, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsSPEndDisplayList(),
};
