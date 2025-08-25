#include "grotto_shortcuts_room_0.h"
#include "grotto_shortcuts_room_1.h"
#include "grotto_shortcuts_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd grotto_shortcuts_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(1, 0, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&grotto_shortcuts_room_0RoomShapeCullable_0000E0),
    SCENE_CMD_OBJECT_LIST(2, grotto_shortcuts_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(13, grotto_shortcuts_room_0ActorEntry_000044),
    SCENE_CMD_END(),
};

s16 grotto_shortcuts_room_0ObjectList_000040[] = {
    OBJECT_DEKUBABA,
    OBJECT_ST,
};

ActorEntry grotto_shortcuts_room_0ActorEntry_000044[] = {
    { ACTOR_EN_KUSA,     { -311,   0,  864 }, { 0, 0, 0 }, 0x0E00 },
    { ACTOR_EN_KUSA,     { -280,   0,  693 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_DEKUBABA, { -209,   0, 1150 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_OBJ_MURE,    { -201,  58, 1125 }, { 0, 0, 0 }, 0x5324 },
    { ACTOR_EN_KUSA,     { -125,   0,  850 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_KUSA,     { -111,   0,  632 }, { 0, 0, 0 }, 0x0E00 },
    { ACTOR_EN_KUSA,     {  -69,   0, 1441 }, { 0, 0, 0 }, 0x0E10 },
    { ACTOR_EN_DEKUBABA, { 1116, 440,  767 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1145, 412, 1065 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1164,  48, 1285 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1247, 363, 1065 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_DEKUBABA, { 1280, 440,  960 }, { 0, 0, 0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1289, 120, 1285 }, { 0, 0, 0 }, 0x0000 },
};

RoomShapeCullable grotto_shortcuts_room_0RoomShapeCullable_0000E0 = { 
    2, 14,
    grotto_shortcuts_room_0RoomShapeCullableEntry_0000EC,
    grotto_shortcuts_room_0RoomShapeCullableEntry_0000EC + ARRAY_COUNTU(grotto_shortcuts_room_0RoomShapeCullableEntry_0000EC)
};

RoomShapeCullableEntry grotto_shortcuts_room_0RoomShapeCullableEntry_0000EC[14] = {
    { {   -210,    320,   1149 },    558, NULL, grotto_shortcuts_room_0DL_002220 },
    { {   -206,      0,   1142 },    516, grotto_shortcuts_room_0DL_001548, NULL },
    { {   -205,      0,   1139 },    592, grotto_shortcuts_room_0DL_000AE0, NULL },
    { {   -221,     10,   1136 },    260, grotto_shortcuts_room_0DL_000F70, NULL },
    { {   -221,     20,   1136 },    260, grotto_shortcuts_room_0DL_0012A0, NULL },
    { {   -205,    320,   1139 },    672, grotto_shortcuts_room_0DL_0006C0, NULL },
{ {   1219,    514,   1164 },    688, NULL, grotto_shortcuts_room_0DL_002AA0 },
    { {   1224,    220,   1161 },    566, grotto_shortcuts_room_0DL_0015B8, NULL },
    { {   1226,    220,   1183 },    660, grotto_shortcuts_room_0DL_000D38, NULL },
    { {   1226,    514,   1183 },    806, grotto_shortcuts_room_0DL_000740, NULL },
    { {   1223,    220,   1175 },    276, grotto_shortcuts_room_0DL_000A18, NULL },
    { {   1243,    230,    999 },    524, grotto_shortcuts_room_0DL_001108, NULL },
    { {   1226,    246,    999 },    524, grotto_shortcuts_room_0DL_001340, NULL },
    { {   1223,    220,   1179 },    276, NULL, grotto_shortcuts_room_0DL_002CA0 },
};

s32 grotto_shortcuts_room_0_terminatorMaybe_00014C = { 0x01000000 };

u64 grotto_shortcuts_room_0Tex_001620[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Tex_001620.rgba16.inc.c"
};

u64 grotto_shortcuts_room_0Tex_001820[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Tex_001820.rgba16.inc.c"
};

u64 grotto_shortcuts_room_0Tex_001698[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Tex_001698.rgba16.inc.c"
};

u64 grotto_shortcuts_room_0Tex_001898[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Tex_001898.rgba16.inc.c"
};

u64 grotto_shortcuts_room_0Tex_002098[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Tex_002098.rgba16.inc.c"
};

u64 grotto_shortcuts_room_0Tex_002D60[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Tex_002D60.rgba16.inc.c"
};

Vtx grotto_shortcuts_room_0Vtx_000150[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_000150.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_0008A0[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_0008A0.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_000C30[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_000C30.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_0010A0[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_0010A0.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_001448[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_001448.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_002020[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_002020.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_000200[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_000200.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_0008F8[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_0008F8.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_000AF8[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_000AF8.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_000E68[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_000E68.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_0014B8[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_0014B8.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_0028A0[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_0028A0.Vtx.inc"
};

Vtx grotto_shortcuts_room_0Vtx_002BA0[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_002BA0.Vtx.inc"
};

Gfx grotto_shortcuts_room_0DL_0006C0[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000150[79], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x87, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00C0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(grotto_shortcuts_sceneTex_00ACD0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_000150, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(2, 1, 12, 0, 2, 12, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 18, 0, 19, 21, 20, 0),
    gsSP2Triangles(21, 10, 20, 0, 14, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(24, 26, 25, 0, 26, 27, 25, 0),
    gsSP2Triangles(28, 29, 16, 0, 28, 16, 30, 0),
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000150[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 9, 0),
    gsSP2Triangles(12, 11, 10, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 16, 23, 0, 16, 21, 23, 0),
    gsSP2Triangles(21, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 27, 29, 28, 0),
    gsSP2Triangles(26, 30, 31, 0, 26, 31, 27, 0),
    gsSP1Triangle(31, 29, 27, 0),
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000150[63], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 6, 1, 0, 6, 2, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 10, 8, 0),
    gsSP2Triangles(8, 11, 9, 0, 12, 7, 9, 0),
    gsSP2Triangles(12, 9, 13, 0, 12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_000AE0[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_0008A0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x87, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00C8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(grotto_shortcuts_sceneTex_00E8D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_0008A0, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 4, 2, 0),
    gsSP2Triangles(1, 7, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 10, 6, 0),
    gsSP2Triangles(10, 4, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 15, 0, 3, 0),
    gsSP2Triangles(15, 3, 16, 0, 3, 5, 17, 0),
    gsSP2Triangles(3, 17, 16, 0, 17, 18, 13, 0),
    gsSP2Triangles(17, 13, 16, 0, 18, 19, 14, 0),
    gsSP2Triangles(18, 14, 13, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 21, 24, 23, 0),
    gsSP2Triangles(21, 25, 24, 0, 20, 26, 21, 0),
    gsSP2Triangles(26, 27, 21, 0, 27, 25, 21, 0),
    gsSP2Triangles(26, 11, 14, 0, 26, 14, 27, 0),
    gsSP2Triangles(14, 19, 25, 0, 14, 25, 27, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_000F70[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000C30[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_room_0Tex_001820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_000C30, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(3, 2, 21, 0, 3, 21, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 29, 30, 31, 0),
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000C30[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_0012A0[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_0010A0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00D0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(grotto_shortcuts_room_0Tex_001620, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(grotto_shortcuts_room_0Tex_001620, 0x0100, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(grotto_shortcuts_room_0Tex_001620, 0x0100, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_0010A0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 7, 8, 0),
    gsSP2Triangles(9, 10, 7, 0, 10, 11, 7, 0),
    gsSP2Triangles(12, 13, 1, 0, 13, 2, 1, 0),
    gsSP2Triangles(12, 1, 14, 0, 11, 15, 7, 0),
    gsSP2Triangles(16, 15, 11, 0, 17, 16, 12, 0),
    gsSP2Triangles(16, 11, 12, 0, 4, 18, 1, 0),
    gsSP2Triangles(5, 7, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(5, 20, 23, 0, 5, 23, 4, 0),
    gsSP1Triangle(23, 18, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_001548[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_001448[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00F0D0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 154),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_001448, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_002220[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_002020[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 199),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00B4D0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 14, G_TX_NOLOD),
    gsDPLoadMultiBlock(grotto_shortcuts_sceneTex_00B4D0, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 15, G_TX_NOLOD),
  //gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_002020, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_000740[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000200[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00C0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(grotto_shortcuts_sceneTex_00ACD0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_000200, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(2, 1, 12, 0, 2, 12, 15, 0),
    gsSP2Triangles(16, 17, 10, 0, 16, 10, 18, 0),
    gsSP2Triangles(14, 19, 20, 0, 14, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 22, 0, 26, 22, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000200[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(16, 10, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(28, 30, 29, 0, 26, 31, 27, 0),
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000200[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_000A18[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_0008F8[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x9B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_room_0Tex_001898, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(grotto_shortcuts_sceneTex_00C0D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_0008F8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_000D38[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000AF8[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x87, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00C8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(grotto_shortcuts_sceneTex_00E8D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_000AF8, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 4, 2, 0),
    gsSP2Triangles(1, 7, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 10, 6, 0),
    gsSP2Triangles(10, 4, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(15, 14, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(18, 22, 21, 0, 17, 23, 18, 0),
    gsSP2Triangles(23, 24, 18, 0, 24, 22, 18, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP2Triangles(26, 27, 22, 0, 26, 22, 24, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_001108[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000E68[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_room_0Tex_002098, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_000E68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&grotto_shortcuts_room_0Vtx_000E68[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx grotto_shortcuts_room_0Vtx_0011F0[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_0Vtx_0011F0.Vtx.inc"
};

Gfx grotto_shortcuts_room_0DL_001340[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_0011F0[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00D0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(grotto_shortcuts_room_0Tex_001698, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(grotto_shortcuts_room_0Tex_001698, 0x0100, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(grotto_shortcuts_room_0Tex_001698, 0x0100, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_0011F0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_0015B8[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_0014B8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00F0D0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 154),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_0014B8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_002AA0[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_0028A0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 199),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00B4D0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 14, G_TX_NOLOD),
    gsDPLoadMultiBlock(grotto_shortcuts_sceneTex_00B4D0, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 15, G_TX_NOLOD),
  //gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_0028A0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_0DL_002CA0[] = {
    gsSPVertex(&grotto_shortcuts_room_0Vtx_002BA0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 150),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_room_0Tex_002D60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_0Vtx_002BA0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};
