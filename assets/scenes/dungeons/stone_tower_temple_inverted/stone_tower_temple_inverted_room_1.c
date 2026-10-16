#include "stone_tower_temple_inverted_scene.h"
#include "stone_tower_temple_inverted_room_1.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd stone_tower_temple_inverted_room_1[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_inverted_room_1RoomShapeCullable_0001B0),
    //SCENE_CMD_OBJECT_LIST(23, stone_tower_temple_inverted_room_1ObjectList_000040),
    //SCENE_CMD_ACTOR_LIST(20, stone_tower_temple_inverted_room_1ActorEntry_000070),
    SCENE_CMD_END(),
};

/*s16 stone_tower_temple_inverted_room_1ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_WARP1,
    OBJECT_WATER_EFFECT,
    OBJECT_BDOOR,
    OBJECT_BOX,
    OBJECT_D_HSBLOCK,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_ICEFLOE,
    OBJECT_SPINYROLL,
    OBJECT_MKK,
    OBJECT_WDHAND,
    OBJECT_NY,
    OBJECT_PP,
    OBJECT_PO,
    OBJECT_RAT,
    OBJECT_BB,
    OBJECT_SLIME,
    OBJECT_FAMOS,
    OBJECT_EG,
    OBJECT_VM,
};*/

/*ActorEntry stone_tower_temple_inverted_room_1ActorEntry_000070[] = {
    { ACTOR_EN_ITEM00,      {  375,   60, -1590 }, {      0,     0,     0 }, 0x0202 },
    { ACTOR_EN_ITEM00,      {  375,  150, -1590 }, {      0,     0,     0 }, 0x0300 },
    { ACTOR_EN_ITEM00,      {  375,  105, -1590 }, {      0,     0,     0 }, 0x0101 },
    { ACTOR_EN_EGOL,        {    0,   60, -1650 }, {   0x26,     0,   0x2 }, 0x0940 },
    { ACTOR_OBJ_MINE,       {    0,    0, -1395 }, {      0,     0, 0x167 }, 0x1012 },
    { ACTOR_OBJ_MINE,       {  -75,    0, -1440 }, {      0,     0,   0x4 }, 0x1012 },
    { ACTOR_OBJ_MINE,       {   75,    0, -1440 }, {      0,     0,   0x4 }, 0x1012 },
    { ACTOR_OBJ_ETCETERA,   { -510, -300, -1260 }, {      0,  0x5A,     0 }, 0x007F },
    { ACTOR_OBJ_ETCETERA,   {    0, -330, -1590 }, {      0,     0,     0 }, 0x007F },
    { ACTOR_OBJ_ETCETERA,   {  510, -300, -1260 }, {      0, 0x10E,     0 }, 0x007F },
    { ACTOR_OBJ_SWITCH,     {  555,    0, -1725 }, { 0x8000,  0x5A,     0 }, 0x1803 },
    { ACTOR_EN_WDHAND,      {  450,  105, -1590 }, {  0x10E,  0x5A,     0 }, 0x3FFF },
    { ACTOR_EN_WEATHER_TAG, {  -15, -660, -1320 }, {      0,     0,     0 }, 0x0304 },
    { ACTOR_EN_TUBO_TRAP,   {   60, -330, -1800 }, {      0,     0,   0xF }, 0x3F7F },
    { ACTOR_EN_TUBO_TRAP,   {  -60, -330, -1800 }, {      0,     0,   0xF }, 0x3F7F },
    { ACTOR_OBJ_SWITCH,     {  780,  120, -1590 }, {      0,  0x5A,     0 }, 0x1700 },
    { ACTOR_EN_BOX,         {    0, -120, -1665 }, { 0x8000,     0,  0x1C }, 0xC22C },
    { ACTOR_EN_BOX,         { -165,    0, -1725 }, { 0x8000,  0x5A,  0x18 }, 0xC238 },
    { ACTOR_EN_BOX,         {    0,   60, -1200 }, {      0,     0,  0x25 }, 0xBFBA },
    { ACTOR_EN_BOX,         {  540,    0, -1260 }, { 0x8000,  0x5A,     0 }, 0x5781 },
};*/

RoomShapeCullable stone_tower_temple_inverted_room_1RoomShapeCullable_0001B0 = { 
    2, 17,
    stone_tower_temple_inverted_room_1RoomShapeCullableEntry_0001BC,
    stone_tower_temple_inverted_room_1RoomShapeCullableEntry_0001BC + ARRAY_COUNTU(stone_tower_temple_inverted_room_1RoomShapeCullableEntry_0001BC)
};

RoomShapeCullableEntry stone_tower_temple_inverted_room_1RoomShapeCullableEntry_0001BC[17] = {
    { {   -315,   -110,  -1320 },    652, stone_tower_temple_inverted_room_1DL_005F70, NULL },
    { {     75,    -60,  -1268 },    662, stone_tower_temple_inverted_room_1DL_006730, NULL },
    { {      0,      0,  -1260 },   -526, stone_tower_temple_inverted_room_1DL_006AE0, NULL },
    { {      0,   -233,   -870 },   -250, stone_tower_temple_inverted_room_1DL_006CE8, NULL },
    { {      0,    240,  -1230 },    616, stone_tower_temple_inverted_room_1DL_0003D0, NULL },
    { {    900,    180,  -1515 },    474, stone_tower_temple_inverted_room_1DL_0007E8, NULL },
    { {      0,    120,  -1230 },    628, stone_tower_temple_inverted_room_1DL_000D70, NULL },
    { {      0,   -180,  -1290 },    790, stone_tower_temple_inverted_room_1DL_0012D0, NULL },
    { {   -630,   -150,  -1350 },    260, stone_tower_temple_inverted_room_1DL_0019F8, NULL },
    { {      0,   -263,   -825 },    446, stone_tower_temple_inverted_room_1DL_002170, NULL },
    { {   -525,   -180,  -1170 },    306, stone_tower_temple_inverted_room_1DL_0028F0, NULL },
    { {   -600,   -317,   -870 },    336, stone_tower_temple_inverted_room_1DL_0032C0, NULL },
    { {      0,      0,  -1290 },    770, stone_tower_temple_inverted_room_1DL_0038D0, NULL },
    { {    555,   -180,  -1260 },    252, stone_tower_temple_inverted_room_1DL_004140, NULL },
    { {      0,    -60,  -1320 },    604, stone_tower_temple_inverted_room_1DL_005430, NULL },
    { {    577,   -317,   -870 },    332, stone_tower_temple_inverted_room_1DL_005C50, NULL },
    { {   -105,    -60,  -1665 },    382, stone_tower_temple_inverted_room_1DL_0062B0, NULL },
};

s32 stone_tower_temple_inverted_room_1_terminatorMaybe_0002CC = { 0x01000000 };

Vtx stone_tower_temple_inverted_room_1Vtx_0002D0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_0002D0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_0004A8[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_0004A8.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_000A00[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_000A00.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_000F90[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_000F90.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_001408[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_001408.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_001CE0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_001CE0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_0023B0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_0023B0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_002B50[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_002B50.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_0036D0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_0036D0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_003A40[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_003A40.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_0044D0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_0044D0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_005A50[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_005A50.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_005E30[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_005E30.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_006050[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_006050.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_0063B0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_0063B0.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_006860[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_006860.vtx.inc"
};

Vtx stone_tower_temple_inverted_room_1Vtx_006BD8[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Vtx_006BD8.vtx.inc"
};

u64 stone_tower_temple_inverted_room_1Tex_006E28[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_006E28.ia8.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_007628[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_007628.rgba16.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_007E28[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_007E28.ci8.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_008628[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_008628.ci8.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_008828[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_008828.ci8.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_008A28[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_008A28.ci8.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_008E28[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_008E28.ci8.inc.c"
};

u64 stone_tower_temple_inverted_room_1Tex_009228[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_1Tex_009228.ci8.inc.c"
};

Gfx stone_tower_temple_inverted_room_1DL_0003D0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0002D0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00E900, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_0002D0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0007E8[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0004A8[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_008A28, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_0004A8, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 3, 2, 0, 12, 2, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010C00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0004A8[22], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0004A8[28], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_000D70[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_000A00[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00D200, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_000A00, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_000A00[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_009228, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_000A00[16], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 0, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0012D0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_000F90[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010200, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_000F90, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 16, 0),
    gsSP2Triangles(23, 16, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(25, 27, 28, 0, 25, 28, 29, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_000F90[30], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 6, 0),
    gsSP2Triangles(0, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 10, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0019F8[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001408[87], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_007E28, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_001408, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 0, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001408[23], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001408[47], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010C00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001408[79], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_002170[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001CE0[65], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00E500, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_001CE0, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 11, 6, 0),
    gsSP1Triangle(8, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001CE0[14], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 18, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010D80, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_001CE0[36], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 0, 0),
    gsSP2Triangles(16, 9, 17, 0, 18, 9, 16, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 20, 19, 0),
    gsSP2Triangles(22, 23, 20, 0, 24, 25, 22, 0),
    gsSP2Triangles(5, 4, 7, 0, 17, 9, 8, 0),
    gsSP2Triangles(7, 26, 27, 0, 13, 28, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0028F0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0023B0[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00D300, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_0023B0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0023B0[16], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0023B0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0023B0[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0032C0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[111], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_008E28, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_002B50, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[6], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(20, 16, 18, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[38], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FE00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[43], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(3, 2, 24, 0, 3, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010C00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[69], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[73], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011280, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_002B50[85], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 13, 0, 21, 17, 16, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0038D0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0036D0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00D300, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_0036D0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_008828, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0036D0[8], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_004140[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_003A40[104], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_007E28, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_003A40, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00D300, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_003A40[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_003A40[16], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010A00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_003A40[40], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_003A40[60], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_003A40[90], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_005430[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[238], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_007E28, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_0044D0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00D200, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[24], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_008628, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[40], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00D300, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[52], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[95], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FE00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[122], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[154], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[186], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[218], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011280, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0044D0[226], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_005C50[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_005A50[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_008E28, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_005A50, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_005A50[6], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00FE00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_005A50[16], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_005F70[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_005E30[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011680, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_005E30, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_0062B0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_006050[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_006050, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_006730[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0063B0[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_room_1Tex_006E28, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_temple_inverted_room_1Tex_007628, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_0063B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_0063B0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_006AE0[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_006860[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_010D00, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_006860, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 10, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(18, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 31, 24, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_inverted_room_1DL_006CE8[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_1Vtx_006BD8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 50),
    gsDPSetEnvColor(255, 135, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_00EA00, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_1Vtx_006BD8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 2, 7, 8, 0),
    gsSPEndDisplayList(),
};
