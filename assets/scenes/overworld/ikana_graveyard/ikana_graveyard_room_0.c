#include "ikana_graveyard_scene.h"
#include "ikana_graveyard_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd ikana_graveyard_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ikana_graveyard_room_0RoomShapeCullable_000330),
    SCENE_CMD_OBJECT_LIST(6, ikana_graveyard_room_0ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(37, ikana_graveyard_room_0ActorEntry_000064),
    SCENE_CMD_END(),
};

s16 ikana_graveyard_room_0ObjectList_00004C[] = {
    OBJECT_SKB,
    OBJECT_BOX,
    OBJECT_BAT,
  //OBJECT_HANA,
    OBJECT_KUSA,
  //OBJECT_FWALL,
    OBJECT_HAKAISI,
    OBJECT_DHOUSE,
  //OBJECT_TK,
  //OBJECT_BOTIHASIRA,
  //OBJECT_BSB,
};

ActorEntry ikana_graveyard_room_0ActorEntry_000064[] = {
    { ACTOR_EN_BAT,        { -459, 202,  -148 }, { 0, 0x1A00,    0 }, 0xFF9F },
    { ACTOR_EN_BAT,        {  413, 200,  -154 }, { 0, 0x9B00,    0 }, 0xFF9F },
    { ACTOR_EN_BAT,        { -458, 260,  -218 }, { 0,      0,    0 }, 0xFF02 },
    { ACTOR_EN_BAT,        { -359, 247,  -119 }, { 0,      0,    0 }, 0xFF02 },
    { ACTOR_EN_BAT,        { -158, 284,   304 }, { 0, 0xC000,    0 }, 0xFF02 },
    { ACTOR_EN_BAT,        {  343, 294,   -96 }, { 0, 0x8000,    0 }, 0xFF03 },
    { ACTOR_EN_SKB,        { -548, 198,  -231 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        {  392,  58,   -34 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        {   29,  64,   187 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        { -370,  29,   364 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        { -318, -23,   744 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        {  -70,  74,  -462 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        {  -26,  73,  -315 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        {   -4,  36,   264 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_EN_SKB,        {   -4,  72,  -407 }, { 0,      0,    0 }, 0x1000 },
    { ACTOR_OBJ_HAKAISI,   { -470,  13,   411 }, { 0, 0xD1C0,    0 }, 0xFFFF },
    { ACTOR_OBJ_HAKAISI,   { -179,  73,  -500 }, { 0, 0xB330,    0 }, 0xFFFF },
    { ACTOR_OBJ_HAKAISI,   {  235,  23,   426 }, { 0, 0xD1C0,    0 }, 0x0600 },
    { ACTOR_OBJ_HAKAISI,   { -422,  54,   -12 }, { 0, 0x27D0,    0 }, 0x0801 },
    { ACTOR_OBJ_HAKAISI,   {  238,  60,   -80 }, { 0, 0x9B00,    0 }, 0x0702 },
    { ACTOR_OBJ_HANA,      { -384,  54,    13 }, { 0,      0,    0 }, 0x0000 },
    { ACTOR_OBJ_HANA,      { -142,  75,  -477 }, { 0,      0,    0 }, 0x0000 },
    { ACTOR_OBJ_HANA,      { -137,  75,  -493 }, { 0,      0,    0 }, 0x0000 },
    { ACTOR_OBJ_HANA,      {  192,  23,   445 }, { 0,      0,    0 }, 0x0000 },
    { ACTOR_EN_LIGHT,      { -364, -25,   734 }, { 0,      0,    0 }, 0x07F4 },
    { ACTOR_EN_LIGHT,      {  -27,  39,   222 }, { 0,      0,    0 }, 0x07F4 },
    { ACTOR_EN_LIGHT,      {    6,  72,  -358 }, { 0,      0,    0 }, 0x07F4 },
    { ACTOR_EN_KUSA,       {  240,  66,  -139 }, { 0,      0,    0 }, 0x2507 },
    { ACTOR_EN_KUSA,       {  183,  63,   -99 }, { 0,      0,    0 }, 0x272B },
    { ACTOR_EN_KUSA,       { -441,  23,   361 }, { 0,      0,    0 }, 0x282B },
    { ACTOR_EN_KUSA,       { -407,  19,   420 }, { 0,      0,    0 }, 0x263B },
    { ACTOR_EN_KUSA,       {   87,  50,    86 }, { 0,      0,    0 }, 0x297B },
    { ACTOR_EN_HIT_TAG,    { -459, 188,  -147 }, { 0,      0,    0 }, 0xFE00 },
    { ACTOR_EN_HIT_TAG,    {  118,  72,   756 }, { 0,      0,    0 }, 0xFE00 },
    { ACTOR_EN_HIT_TAG,    {  412, 185,  -154 }, { 0,      0,    0 }, 0xFE00 },
    { ACTOR_OBJ_DHOUSE,    { -304, 474, -2333 }, { 0,      0,    0 }, 0x0000 },
    { ACTOR_BG_WEATHER,    { -470,  13,   411 }, { 0,      0,    0 }, 0x0000 },
  //{ ACTOR_BG_BOTIHASIRA, {  -84, 152, -1297 }, { 0,   0xD2,    0 }, 0x0001 },
};

RoomShapeCullable ikana_graveyard_room_0RoomShapeCullable_000330 = { 
    2, 17,
    ikana_graveyard_room_0RoomShapeCullableEntry_00033C,
    ikana_graveyard_room_0RoomShapeCullableEntry_00033C + ARRAY_COUNTU(ikana_graveyard_room_0RoomShapeCullableEntry_00033C)
};

RoomShapeCullableEntry ikana_graveyard_room_0RoomShapeCullableEntry_00033C[17] = {
    { {    -34,    163,   -133 },    566, ikana_graveyard_room_0DL_0040A0, NULL },
    { {    -38,     36,    706 },    188, ikana_graveyard_room_0DL_006B90, NULL },
    { {     94,    404,  -1182 },   3210, ikana_graveyard_room_0DL_004F98, NULL },
    { {     -7,    265,    -89 },   1624, ikana_graveyard_room_0DL_0075E8, ikana_graveyard_room_0DL_00A9D8 },
    { {    -16,     13,     26 },    972, NULL, ikana_graveyard_room_0DL_00B0A0 },
    { {    235,    -35,    426 },     76, ikana_graveyard_room_0DL_001880, NULL },
    { {   -423,     -4,    -13 },     78, ikana_graveyard_room_0DL_001B20, NULL },
    { {     -5,    -44,   1043 },    812, ikana_graveyard_room_0DL_0055A0, NULL },
    { {    238,      2,    -80 },     78, ikana_graveyard_room_0DL_001DC0, NULL },
    { {    -41,    248,     96 },   1076, ikana_graveyard_room_0DL_005CA8, NULL },
    { {    -16,    112,   -292 },   1730, ikana_graveyard_room_0DL_000E70, NULL },
    { {    -42,    198,     65 },   1014, NULL, ikana_graveyard_room_0DL_00A4C0 },
    { {    -34,    102,     62 },   1372, ikana_graveyard_room_0DL_006EB0, NULL },
    { {   -103,     37,    162 },   1716, NULL, ikana_graveyard_room_0DL_00AD30 },
    { {     72,     55,    158 },     94, ikana_graveyard_room_0DL_0016B0, NULL },
    { {   -125,     98,    -95 },  -1562, ikana_graveyard_room_0DL_0079C8, NULL },
    { {   -505,    423,  -2174 },     90, ikana_graveyard_room_0DL_008530, NULL },
};

s32 ikana_graveyard_room_0_terminatorMaybe_00043C = { 0x01000000 };

Vtx ikana_graveyard_room_0Vtx_000660[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_000660.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_001148[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_001148.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0016C0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0016C0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_001970[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_001970.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_001C10[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_001C10.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_001EB0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_001EB0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_002A00[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_002A00.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_003570[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_003570.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_003778[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_003778.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_003940[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_003940.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_003B08[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_003B08.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_003D10[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_003D10.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_003ED8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_003ED8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0040C8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0040C8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0053C0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0053C0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_005708[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_005708.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_005E10[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_005E10.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_006218[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_006218.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0065F8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0065F8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_006800[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_006800.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0069C8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0069C8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_006BB0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_006BB0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_006FD8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_006FD8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0075F8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0075F8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_008338[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_008338.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_008BD0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_008BD0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_008D98[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_008D98.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_008F60[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_008F60.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009128[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009128.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0092F0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0092F0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_0094B8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_0094B8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009680[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009680.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009848[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009848.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009A10[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009A10.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009BD8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009BD8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009DA0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009DA0.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_009F68[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_009F68.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_00A130[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_00A130.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_00A2F8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_00A2F8.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_00A540[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_00A540.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_00AA60[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_00AA60.vtx.inc"
};

Vtx ikana_graveyard_room_0Vtx_00AEA0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Vtx_00AEA0.vtx.inc"
};

u64 ikana_graveyard_room_0Tex_007BB0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Tex_007BB0.ci4.inc.c"
};

u64 ikana_graveyard_room_0TLUT_0083B0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Tex_007BB0.tlut.rgba16.inc.c"
};

u64 ikana_graveyard_room_0Tex_0083D0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Tex_0083D0.ci8.inc.c"
};

u64 ikana_graveyard_room_0Tex_0087D0[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Tex_0087D0.ci8.inc.c"
};

u64 ikana_graveyard_room_0Tex_00B1D8[] = {
#include "assets/scenes/overworld/ikana_graveyard/ikana_graveyard_room_0Tex_00B1D8.ia16.inc.c"
};

Gfx ikana_graveyard_room_0DL_000E70[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_000660[121], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 0, 9, 13, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_graveyard_sceneTLUT_00B2B0),
    gsDPLoadTextureBlock_4b(ikana_graveyard_sceneTex_00AAB0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadTLUT_pal16(15, ikana_graveyard_sceneTLUT_00B2B0),
    gsDPLoadMultiBlock_4b(ikana_graveyard_sceneTex_00AAB0, 0x0000, 1, G_IM_FMT_CI, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_000660, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 5, 3, 8, 0),
    gsSP2Triangles(5, 8, 7, 0, 5, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 9, 12, 13, 0),
    gsSP2Triangles(9, 13, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(5, 15, 12, 0, 5, 10, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 17, 0),
    gsSP2Triangles(19, 21, 20, 0, 19, 22, 23, 0),
    gsSP2Triangles(19, 23, 21, 0, 22, 17, 24, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 25, 0, 28, 25, 27, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_000660[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 5, 0, 10, 5, 4, 0),
    gsSP2Triangles(12, 13, 7, 0, 12, 7, 6, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 11, 0, 16, 11, 10, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 19, 18, 0, 24, 18, 25, 0),
    gsSP2Triangles(26, 27, 24, 0, 26, 24, 25, 0),
    gsSP2Triangles(28, 29, 23, 0, 28, 23, 22, 0),
    gsSP2Triangles(30, 31, 27, 0, 30, 27, 26, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_000660[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 5, 0, 12, 5, 4, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(8, 21, 24, 0, 7, 23, 21, 0),
    gsSP2Triangles(7, 21, 8, 0, 25, 4, 26, 0),
    gsSP2Triangles(4, 0, 26, 0, 27, 28, 26, 0),
    gsSP2Triangles(27, 29, 28, 0, 26, 28, 25, 0),
    gsSP2Triangles(26, 3, 27, 0, 26, 0, 3, 0),
    gsSP2Triangles(3, 30, 27, 0, 27, 30, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_000660[94], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 3, 4, 6, 0),
    gsSP2Triangles(3, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 13, 11, 0, 15, 14, 11, 0),
    gsSP2Triangles(16, 10, 11, 0, 11, 12, 16, 0),
    gsSP2Triangles(17, 6, 4, 0, 18, 7, 6, 0),
    gsSP2Triangles(6, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 21, 25, 24, 0),
    gsSP1Triangle(25, 26, 24, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0016B0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_001148[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00B2D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_001148, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 1, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 10, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP1Triangle(21, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00C5D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_graveyard_room_0Vtx_001148[25], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_001880[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0016C0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_0083D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0016C0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_001B20[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_001970[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_0083D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_001970, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 2, 0, 12, 2, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_001DC0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_001C10[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_0083D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_001C10, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 12, 0, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_002800[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_001EB0[141], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_0087D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_001EB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 28, 29, 30, 0),
    gsSP1Triangle(29, 31, 30, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_001EB0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_001EB0[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 3, 13, 4, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 16, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_001EB0[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_001EB0[126], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003370[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_002A00[143], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_0087D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_002A00, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 28, 29, 30, 0),
    gsSP1Triangle(29, 31, 30, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_002A00[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_002A00[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 3, 13, 4, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 16, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_002A00[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_002A00[128], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP1Triangle(12, 14, 13, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003690[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_003570[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BCD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_003570, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 5, 7, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 0, 9, 0, 8, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003868[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_003778[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_003778, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003A10[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_003940[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_003940, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 1, 0, 4, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003C28[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_003B08[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BCD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_003B08, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 5, 7, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 0, 9, 0, 8, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003E00[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_003D10[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_003D10, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_003FA8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_003ED8[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_003ED8, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 1, 0, 4, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0040A0[] = {
    gsSPDisplayList(ikana_graveyard_room_0DL_002800),
    gsSPDisplayList(ikana_graveyard_room_0DL_003370),
    gsSPDisplayList(ikana_graveyard_room_0DL_003690),
    gsSPDisplayList(ikana_graveyard_room_0DL_003868),
    gsSPDisplayList(ikana_graveyard_room_0DL_003A10),
    gsSPDisplayList(ikana_graveyard_room_0DL_003C28),
    gsSPDisplayList(ikana_graveyard_room_0DL_003E00),
    gsSPDisplayList(ikana_graveyard_room_0DL_003FA8),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_004F98[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[229], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00A2B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(ikana_graveyard_sceneTex_009AB0, 0x0100, 1, G_IM_FMT_I, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 15, 15),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0x0DE4, 0x003C, 0x0EE0),
    gsDPSetTileSize(1, 0, 0x046F, 0x007C, 0x066B),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0040C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(0, 3, 12, 0, 0, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 11, 9, 0, 16, 9, 17, 0),
    gsSP2Triangles(17, 9, 7, 0, 17, 7, 18, 0),
    gsSP2Triangles(18, 7, 6, 0, 18, 6, 19, 0),
    gsSP2Triangles(20, 14, 12, 0, 20, 12, 21, 0),
    gsSP2Triangles(21, 12, 3, 0, 21, 3, 22, 0),
    gsSP2Triangles(22, 3, 2, 0, 22, 2, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 28, 25, 0, 25, 29, 30, 0),
    gsSP1Triangle(25, 30, 26, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 0, 3, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 12, 0),
    gsSP2Triangles(15, 12, 11, 0, 17, 11, 14, 0),
    gsSP2Triangles(17, 14, 18, 0, 19, 15, 11, 0),
    gsSP2Triangles(19, 11, 17, 0, 20, 7, 10, 0),
    gsSP2Triangles(20, 10, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 27, 23, 0),
    gsSP2Triangles(26, 23, 22, 0, 22, 25, 26, 0),
    gsSP2Triangles(28, 29, 23, 0, 28, 23, 27, 0),
    gsSP2Triangles(28, 30, 29, 0, 30, 31, 29, 0),
    gsSP2Triangles(31, 24, 23, 0, 31, 23, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 1, 0),
    gsSP2Triangles(6, 2, 1, 0, 4, 7, 5, 0),
    gsSP2Triangles(3, 8, 9, 0, 2, 8, 3, 0),
    gsSP2Triangles(2, 6, 10, 0, 2, 10, 8, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 10, 13, 0, 12, 11, 10, 0),
    gsSP2Triangles(10, 6, 13, 0, 6, 5, 14, 0),
    gsSP2Triangles(6, 14, 13, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 12, 13, 0, 15, 16, 11, 0),
    gsSP2Triangles(15, 11, 12, 0, 17, 9, 18, 0),
    gsSP2Triangles(17, 18, 19, 0, 16, 18, 11, 0),
    gsSP2Triangles(11, 18, 9, 0, 16, 20, 21, 0),
    gsSP2Triangles(16, 21, 18, 0, 19, 18, 22, 0),
    gsSP2Triangles(19, 22, 23, 0, 18, 21, 24, 0),
    gsSP2Triangles(18, 24, 22, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 27, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 4, 3, 2, 0),
    gsSP2Triangles(4, 6, 3, 0, 4, 7, 6, 0),
    gsSP2Triangles(2, 1, 5, 0, 5, 8, 9, 0),
    gsSP2Triangles(5, 1, 10, 0, 6, 0, 3, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 28, 29, 27, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[123], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 0, 6, 0),
    gsSP2Triangles(5, 1, 0, 0, 7, 4, 8, 0),
    gsSP2Triangles(7, 9, 4, 0, 7, 3, 9, 0),
    gsSP2Triangles(3, 1, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 10, 14, 11, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 13, 15, 0),
    gsSP2Triangles(15, 17, 16, 0, 18, 19, 10, 0),
    gsSP2Triangles(19, 14, 10, 0, 18, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 6, 0),
    gsSP2Triangles(23, 24, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[154], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
    gsSP2Triangles(12, 13, 10, 0, 12, 10, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 15, 0, 20, 15, 14, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 7, 31, 0, 7, 9, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[186], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 7, 9, 6, 0),
    gsSP2Triangles(6, 10, 8, 0, 11, 12, 3, 0),
    gsSP2Triangles(12, 4, 3, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 15, 16, 14, 0),
    gsSP2Triangles(15, 14, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 18, 0),
    gsSP2Triangles(21, 18, 17, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 22, 25, 0, 22, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 24, 28, 0),
    gsSP2Triangles(24, 23, 28, 0, 26, 29, 27, 0),
    gsSP1Triangle(26, 30, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0040C8[217], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 5, 0, 1, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0055A0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0053C0[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 80, 90, 70, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_graveyard_room_0TLUT_0083B0),
    gsDPLoadTextureBlock_4b(ikana_graveyard_room_0Tex_007BB0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadTLUT_pal16(15, ikana_graveyard_room_0TLUT_0083B0),
    gsDPLoadMultiBlock_4b(ikana_graveyard_room_0Tex_007BB0, 0x0000, 1, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0053C0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0053C0[16], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_005CA8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_005708[82], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BDD0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_005708, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_005708[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_005708[61], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 16, 15, 0, 13, 12, 19, 0),
    gsSP1Triangle(14, 17, 20, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_006090[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_005E10[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00B2D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_005E10, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00B3D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_graveyard_room_0Vtx_005E10[20], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_006478[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_006218[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00B2D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_006218, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00B3D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_graveyard_room_0Vtx_006218[24], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_006718[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0065F8[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BCD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0065F8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 5, 7, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 0, 9, 0, 8, 9, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0068F0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_006800[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_006800, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 1, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_006A98[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0069C8[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0069C8, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 1, 0, 4, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_006B90[] = {
    gsSPDisplayList(ikana_graveyard_room_0DL_006090),
    gsSPDisplayList(ikana_graveyard_room_0DL_006478),
    gsSPDisplayList(ikana_graveyard_room_0DL_006718),
    gsSPDisplayList(ikana_graveyard_room_0DL_0068F0),
    gsSPDisplayList(ikana_graveyard_room_0DL_006A98),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_006EB0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_006BB0[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00D1D0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_006BB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_006BB0[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0075E8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_006FD8[65], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(ikana_graveyard_sceneTex_0082B0, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_graveyard_sceneTex_0092B0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_006FD8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 12, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(27, 29, 30, 0, 27, 30, 28, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_006FD8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 15, 14, 0, 24, 14, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_006FD8[61], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0079C8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0075F8[53], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00C9D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0075F8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 5, 0),
    gsSP2Triangles(9, 5, 8, 0, 11, 12, 4, 0),
    gsSP2Triangles(11, 4, 3, 0, 13, 14, 10, 0),
    gsSP2Triangles(13, 10, 9, 0, 15, 16, 12, 0),
    gsSP2Triangles(15, 12, 11, 0, 17, 18, 16, 0),
    gsSP2Triangles(17, 16, 15, 0, 19, 20, 14, 0),
    gsSP2Triangles(19, 14, 13, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 26, 25, 29, 0),
    gsSP2Triangles(26, 29, 30, 0, 31, 22, 21, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_0075F8[32], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 4, 0),
    gsSP2Triangles(9, 4, 3, 0, 11, 12, 6, 0),
    gsSP2Triangles(11, 6, 5, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 15, 16, 10, 0),
    gsSP2Triangles(15, 10, 9, 0, 17, 18, 16, 0),
    gsSP2Triangles(17, 16, 15, 0, 19, 20, 14, 0),
    gsSP1Triangle(19, 14, 13, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_008530[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_008338[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_008918, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_008338, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),

    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BCD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_graveyard_room_0Vtx_008338[10], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 5, 7, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 0, 9, 0, 8, 9, 5, 0),

    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00BBD0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_graveyard_room_0Vtx_008338[20], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 5, 0, 6, 1, 3, 0),

    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_008CE0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_008BD0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_008BD0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_008EA8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_008D98[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_008D98, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009070[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_008F60[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_008F60, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009238[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009128[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009128, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009400[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0092F0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0092F0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_0095C8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_0094B8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_0094B8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009790[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009680[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009680, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009958[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009848[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009848, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009B20[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009A10[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009A10, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009CE8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009BD8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009BD8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_009EB0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009DA0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009DA0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00A078[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_009F68[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_009F68, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00A240[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_00A130[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_00A130, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00A408[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_00A2F8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_graveyard_room_0Tex_00B1D8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 171, 177, 80, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_00A2F8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 0, 0),
    gsSP2Triangles(3, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(5, 8, 6, 0, 5, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00A4C0[] = {
    gsSPDisplayList(ikana_graveyard_room_0DL_008CE0),
    gsSPDisplayList(ikana_graveyard_room_0DL_008EA8),
    gsSPDisplayList(ikana_graveyard_room_0DL_009070),
    gsSPDisplayList(ikana_graveyard_room_0DL_009238),
    gsSPDisplayList(ikana_graveyard_room_0DL_009400),
    gsSPDisplayList(ikana_graveyard_room_0DL_0095C8),
    gsSPDisplayList(ikana_graveyard_room_0DL_009790),
    gsSPDisplayList(ikana_graveyard_room_0DL_009958),
    gsSPDisplayList(ikana_graveyard_room_0DL_009B20),
    gsSPDisplayList(ikana_graveyard_room_0DL_009CE8),
    gsSPDisplayList(ikana_graveyard_room_0DL_009EB0),
    gsSPDisplayList(ikana_graveyard_room_0DL_00A078),
    gsSPDisplayList(ikana_graveyard_room_0DL_00A240),
    gsSPDisplayList(ikana_graveyard_room_0DL_00A408),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00A9D8[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_00A540[45], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(ikana_graveyard_sceneTex_007AB0, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_graveyard_sceneTex_008AB0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_00A540, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 9, 0, 14, 9, 8, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 20, 27, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_00A540[32], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 1, 7, 0),
    gsSP1Triangle(11, 7, 12, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00AD30[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_00AA60[37], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DDD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00C9D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_00AA60, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 3, 2, 0),
    gsSP2Triangles(0, 8, 1, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 9, 0),
    gsSP2Triangles(13, 9, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 14, 0),
    gsSP2Triangles(19, 14, 13, 0, 21, 22, 20, 0),
    gsSP2Triangles(21, 20, 19, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 24, 23, 30, 0),
    gsSP1Triangle(24, 30, 29, 0),
    gsSPVertex(&ikana_graveyard_room_0Vtx_00AA60[31], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_graveyard_room_0DL_00B0A0[] = {
    gsSPVertex(&ikana_graveyard_room_0Vtx_00AEA0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_graveyard_sceneTLUT_00DFD0),
    gsDPLoadTextureBlock(ikana_graveyard_sceneTex_00D9D0, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 178),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_graveyard_room_0Vtx_00AEA0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};
