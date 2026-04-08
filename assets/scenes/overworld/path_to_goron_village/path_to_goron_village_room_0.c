#include "path_to_goron_village_scene.h"
#include "path_to_goron_village_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd path_to_goron_village_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&path_to_goron_village_room_0RoomShapeCullable_000240),
    SCENE_CMD_OBJECT_LIST(11, path_to_goron_village_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(21, path_to_goron_village_room_0ActorEntry_00005C),
    SCENE_CMD_END(),
};

s16 path_to_goron_village_room_0ObjectList_000040[] = {
    OBJECT_HORSE,
    OBJECT_ICEFLOE,
    OBJECT_FIREFLY,
    OBJECT_TITE,
    OBJECT_WOOD02,
    OBJECT_BOMBIWA,
  //OBJECT_GK,
    OBJECT_CROW,
    OBJECT_WF,
    OBJECT_BOX,
    OBJECT_KANBAN,
    OBJECT_KA,
};

ActorEntry path_to_goron_village_room_0ActorEntry_00005C[] = {
  //{ ACTOR_EN_GK,           {   -897,    560,   -615 }, {    0,      0,    0 }, 0x1401 },
  //{ ACTOR_OBJ_GRASS_UNIT,  {  -1423,    200,   1043 }, {    0,      0,    0 }, 0x0601 },
  //{ ACTOR_OBJ_HUGEBOMBIWA, {   -759,    560,   -923 }, {    0,   0x1B,    0 }, 0x0014 },
    { ACTOR_EN_KAKASI2,      {   -749,    560,   -654 }, {    0,      0,   14 }, 0x053E }, // Switch: 3E
    { ACTOR_EN_KANBAN,       {  -1209,    440,   -700 }, {    0, 0x105B,    0 }, 0x0055 },
    { ACTOR_EN_TITE,         {  -1334,    200,    822 }, {    0,      0,    0 }, 0xFFFE },
    { ACTOR_EN_CROW,         {   -152,    511,   -662 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_CROW,         {    419,    259,    269 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_WF,           {   -435,    139,    105 }, {    0,      0,    0 }, 0xFF00 },
    { ACTOR_EN_WF,           {    769,    195,     76 }, {    0, 0xC4FA,    0 }, 0xFF00 },
    { ACTOR_EN_WOOD02,       {   -475,    139,     67 }, {    0,      0,    0 }, 0xFF02 },
    { ACTOR_EN_WOOD02,       {    667,    195,   -112 }, {    0,      0,    0 }, 0xFF02 },
    { ACTOR_EN_WOOD02,       {  -1284,    320,    104 }, {    0,      0,    0 }, 0xFF02 },
    { ACTOR_EN_ITEM00,       {    671,   -200,   -746 }, {    0,      0,    0 }, 0x0101 }, // Collect: 01
    { ACTOR_EN_ITEM00,       {   -300,   -200,   -650 }, {    0,      0,    0 }, 0x0201 }, // Collect: 02
    { ACTOR_EN_ITEM00,       {    566,   -200,    855 }, {    0,      0,    0 }, 0x0301 }, // Collect: 03
    { ACTOR_EN_ITEM00,       {   1287,   -200,   -168 }, {    0,      0,    0 }, 0x0401 }, // Collect: 04
    { ACTOR_EN_ISHI,         {  -1326,    320,    172 }, {    0,      0,    0 }, 0x0210 },
    { ACTOR_EN_ISHI,         {  -1349,    320,    114 }, {    0,      0,    0 }, 0x0200 },
    { ACTOR_EN_ISHI,         {  -1264,    320,    161 }, {    0,      0,    0 }, 0x0200 },
  //{ ACTOR_EN_ENCOUNT1,     {    247,   -145,  -1401 }, {  160,      1,   30 }, 0x1842 },
  //{ ACTOR_EN_ENCOUNT1,     {    258,    -95,  -1383 }, {  180,      1,   30 }, 0x1841 },
  //{ ACTOR_EN_ENCOUNT1,     {    256,   -145,  -1411 }, {  160,      1,   30 }, 0x1843 },
    { ACTOR_DOOR_ANA,        {  -1309,    320,    142 }, {    0, 0x305B,    4 }, 0x0041 }, // Chest: 01
    { ACTOR_DOOR_ANA,        {    589,    195,     53 }, {    0, 0xAAAB,   19 }, 0x0000 },
    { ACTOR_EN_BOX,          {    248,   -200,  -1396 }, { 0x55, 0xDA50,    0 }, 0x5000 }, // Chest: 00
    { ACTOR_EN_BOX,          {   -172,   -200,    847 }, { 0x3E, 0x8000,    0 }, 0x0006 }, // Chest: 06
};

RoomShapeCullable path_to_goron_village_room_0RoomShapeCullable_000240 = { 
    2, 19,
    path_to_goron_village_room_0RoomShapeCullableEntry_00024C,
    path_to_goron_village_room_0RoomShapeCullableEntry_00024C +
    ARRAY_COUNTU(path_to_goron_village_room_0RoomShapeCullableEntry_00024C)
};

RoomShapeCullableEntry path_to_goron_village_room_0RoomShapeCullableEntry_00024C[19] = {
    { {    526,    533,   -640 },   1694, path_to_goron_village_room_0DL_0061C0, NULL },
    { {    526,    534,   -540 },   1708, path_to_goron_village_room_0DL_006A00, NULL },
    { {   -690,    189,    528 },    288, path_to_goron_village_room_0DL_003E80, NULL },
    { {   -147,    172,   -172 },    192, path_to_goron_village_room_0DL_004658, NULL },
    { {    236,    200,   -168 },    202, path_to_goron_village_room_0DL_004F98, NULL },
    { {   1085,    291,    197 },    282, path_to_goron_village_room_0DL_0058F8, NULL },
    { {     80,      0,      0 },   1436, NULL, path_to_goron_village_room_0DL_007060 },
    { {  -2332,    200,    865 },   1010, path_to_goron_village_room_0DL_0004D0, NULL },
    { {     80,   -200,   -206 },   1384, path_to_goron_village_room_0DL_000910, NULL },
    { {   -388,      0,    486 },   1472, path_to_goron_village_room_0DL_000D78, NULL },
    { {  -1395,    207,    908 },    578, path_to_goron_village_room_0DL_006C20, NULL },
    { {   -779,    740,    149 },   2430, path_to_goron_village_room_0DL_0014C0, NULL },
    { {    239,    550,   -444 },   1906, path_to_goron_village_room_0DL_001D68, NULL },
    { {     80,   -100,   -206 },   1416, path_to_goron_village_room_0DL_0029F0, NULL },
    { {   -116,    479,    163 },   1888, path_to_goron_village_room_0DL_0030E8, NULL },
    { {   -766,    640,   -928 },    146, path_to_goron_village_room_0DL_006798, NULL },
    { {  -1235,    380,   -124 },    726, path_to_goron_village_room_0DL_006448, NULL },
    { {  -2938,   1185,    421 },   1726, path_to_goron_village_room_0DL_003458, NULL },
    { {    -15,    100,    237 },   1090, path_to_goron_village_room_0DL_005F10, NULL },
};

s32 path_to_goron_village_room_0_terminatorMaybe_00037C = { 0x01000000 };

Vtx path_to_goron_village_room_0Vtx_000380[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_000380.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_0005D0[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_0005D0.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_000A78[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_000A78.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_000EC0[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_000EC0.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_001688[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_001688.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_001F50[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_001F50.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_002C78[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_002C78.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_003288[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_003288.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_003568[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_003568.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_003CD0[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_003CD0.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_003E98[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_003E98.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_004498[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_004498.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_004670[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_004670.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_004DD8[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_004DD8.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_004FB0[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_004FB0.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_005718[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_005718.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_005910[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_005910.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_0060B0[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_0060B0.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_006228[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_006228.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_006598[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_006598.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_006860[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_006860.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_006AE0[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_006AE0.vtx.inc"
};

Vtx path_to_goron_village_room_0Vtx_006E00[] = {
#include "assets/scenes/overworld/path_to_goron_village/path_to_goron_village_room_0Vtx_006E00.vtx.inc"
};

static u64 scene_texture_04_Tex_000000[] = {
#include "assets/misc/scene_texture_04/tex_000000.rgba16.inc.c"
};

static u64 scene_texture_04_Tex_001000[] = {
#include "assets/misc/scene_texture_04/tex_001000.rgba16.inc.c"
};

static u64 scene_texture_04_Tex_002000[] = {
#include "assets/misc/scene_texture_04/tex_002000.rgba16.inc.c"
};

static u64 scene_texture_04_Tex_003000[] = {
#include "assets/misc/scene_texture_04/tex_003000.i4.inc.c"
};

static u64 scene_texture_04_Tex_003800[] = {
#include "assets/misc/scene_texture_04/tex_003800.i4.inc.c"
};

static u64 scene_texture_04_Tex_004000[] = {
#include "assets/misc/scene_texture_04/tex_004000.i4.inc.c"
};

static u64 scene_texture_04_Tex_004200[] = {
#include "assets/misc/scene_texture_04/tex_004200.rgba16.inc.c"
};


Gfx path_to_goron_village_room_0DL_0004D0[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_000380[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_004200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_004000, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_000380, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 7, 4, 0),
    gsSP2Triangles(6, 4, 2, 0, 8, 9, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 5, 8, 6, 0),
    gsSP2Triangles(5, 1, 10, 0, 5, 10, 11, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_000910[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_0005D0[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(path_to_goron_village_sceneTex_003DD0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(path_to_goron_village_sceneTex_0065D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_0005D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 6, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 11, 0),
    gsSP2Triangles(14, 11, 10, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 15, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(16, 18, 20, 0, 16, 20, 0, 0),
    gsSP2Triangles(16, 0, 2, 0, 18, 21, 22, 0),
    gsSP2Triangles(18, 22, 23, 0, 18, 23, 20, 0),
    gsSP2Triangles(22, 24, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 23, 0, 25, 27, 26, 0),
    gsSP2Triangles(27, 28, 26, 0, 29, 30, 28, 0),
    gsSP2Triangles(29, 28, 27, 0, 30, 29, 7, 0),
    gsSP1Triangle(30, 7, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_0005D0[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 6, 5, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_000D78[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_000A78[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0055D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(path_to_goron_village_sceneTex_004DD0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_000A78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(6, 11, 12, 0, 6, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 19, 0),
    gsSP2Triangles(14, 19, 20, 0, 14, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 27, 28, 0),
    gsSP2Triangles(22, 28, 23, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_000A78[31], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP1Triangle(5, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0014C0[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_000EC0[88], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x4B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0035D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003800, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_000EC0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 6, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(11, 15, 14, 0, 12, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 19, 0),
    gsSP2Triangles(23, 21, 24, 0, 22, 21, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 21, 23, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_000EC0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 3, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 7, 0, 11, 10, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(21, 24, 23, 0, 20, 25, 21, 0),
    gsSP2Triangles(21, 26, 24, 0, 27, 24, 28, 0),
    gsSP2Triangles(24, 26, 28, 0, 25, 20, 11, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_000EC0[64], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 12, 11, 0, 1, 13, 14, 0),
    gsSP2Triangles(1, 14, 15, 0, 13, 16, 17, 0),
    gsSP2Triangles(13, 17, 14, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 20, 22, 23, 0),
    gsSP1Triangle(20, 23, 21, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_001D68[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_001688[102], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_001688, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 18, 0, 22, 18, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 26, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001688[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 25, 27, 28, 0),
    gsSP2Triangles(25, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001688[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 4, 3, 0),
    gsSP2Triangles(13, 3, 14, 0, 2, 1, 15, 0),
    gsSP2Triangles(2, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 17, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 20, 23, 24, 0),
    gsSP2Triangles(20, 24, 22, 0, 19, 25, 23, 0),
    gsSP2Triangles(19, 23, 20, 0, 15, 26, 27, 0),
    gsSP2Triangles(15, 27, 16, 0, 28, 13, 14, 0),
    gsSP2Triangles(28, 14, 29, 0, 30, 11, 12, 0),
    gsSP1Triangle(30, 12, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001688[94], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0029F0[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_001F50[162], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(path_to_goron_village_sceneTex_0065D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_001F50, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(4, 7, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 9, 0, 12, 10, 9, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001F50[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 6, 10, 7, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001F50[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(13, 16, 15, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001F50[95], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 19, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 26, 28, 29, 0),
    gsSP2Triangles(26, 29, 27, 0, 29, 28, 30, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001F50[127], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 8, 10, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 15, 0),
    gsSP2Triangles(18, 15, 14, 0, 19, 18, 13, 0),
    gsSP2Triangles(19, 13, 12, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 24, 25, 0),
    gsSP2Triangles(20, 25, 21, 0, 22, 26, 17, 0),
    gsSP2Triangles(22, 17, 23, 0, 1, 0, 27, 0),
    gsSP2Triangles(1, 27, 28, 0, 28, 27, 29, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_001F50[158], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0030E8[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_002C78[63], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x41, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0045D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_002C78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 7, 0),
    gsSP2Triangles(11, 7, 10, 0, 12, 11, 13, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 12, 18, 0),
    gsSP2Triangles(17, 18, 19, 0, 12, 20, 21, 0),
    gsSP2Triangles(1, 17, 2, 0, 22, 17, 1, 0),
    gsSP2Triangles(22, 1, 23, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 22, 0, 25, 22, 27, 0),
    gsSP2Triangles(28, 29, 26, 0, 28, 26, 25, 0),
    gsSP1Triangle(29, 30, 26, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_002C78[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 13, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 12, 11, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 18, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 21, 23, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 25, 23, 0),
    gsSP2Triangles(28, 27, 23, 0, 21, 28, 23, 0),
    gsSP2Triangles(29, 26, 25, 0, 29, 25, 30, 0),
    gsSP1Triangle(31, 17, 16, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_003458[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_003288[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_002000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003800, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_003288, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 1, 0),
    gsSP2Triangles(0, 3, 4, 0, 1, 0, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(9, 11, 7, 0, 9, 12, 11, 0),
    gsSP2Triangles(10, 8, 13, 0, 8, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(16, 18, 14, 0, 16, 19, 18, 0),
    gsSP2Triangles(17, 15, 20, 0, 15, 14, 20, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_003E80_1[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_003568[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0073D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_003568, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_003568[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0077D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&path_to_goron_village_room_0Vtx_003568[64], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_003E80_2[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_003CD0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0078D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_003CD0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_003E80[] = {
    gsSPDisplayList(path_to_goron_village_room_0DL_003E80_1),
    gsSPDisplayList(path_to_goron_village_room_0DL_003E80_2),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_004658_1[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_003E98[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0073D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_003E98, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_003E98[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0077D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&path_to_goron_village_room_0Vtx_003E98[48], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_004658_2[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_004498[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0078D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_004498, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_004658[] = {
    gsSPDisplayList(path_to_goron_village_room_0DL_004658_1),
    gsSPDisplayList(path_to_goron_village_room_0DL_004658_2),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_004F98_1[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_004670[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0073D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_004670, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_004670[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0077D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&path_to_goron_village_room_0Vtx_004670[64], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_004F98_2[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_004DD8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0078D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_004DD8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_004F98[] = {
    gsSPDisplayList(path_to_goron_village_room_0DL_004F98_1),
    gsSPDisplayList(path_to_goron_village_room_0DL_004F98_2),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0058F8_1[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_004FB0[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0073D0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_004FB0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_004FB0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0077D0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&path_to_goron_village_room_0Vtx_004FB0[64], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0058F8_2[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_005718[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0078D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_005718, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0058F8[] = {
    gsSPDisplayList(path_to_goron_village_room_0DL_0058F8_1),
    gsSPDisplayList(path_to_goron_village_room_0DL_0058F8_2),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_005F10[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_005910[88], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x4B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_005DD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_005910, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 6, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 13, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_005910[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 6, 9, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 15, 12, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&path_to_goron_village_room_0Vtx_005910[60], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 21, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 25, 26, 0, 27, 26, 13, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_0061C0[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_0060B0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_0060B0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_006448[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_006228[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_006228, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(path_to_goron_village_sceneTLUT_0088D0),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_006DD0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&path_to_goron_village_room_0Vtx_006228[12], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_006798[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_006598[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_006598, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_006A00[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_006860[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0071D0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_006860, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 3, 0, 6, 3, 2, 0),
    gsSP2Triangles(5, 4, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(9, 8, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 11, 0, 17, 11, 10, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_006C20[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_006AE0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0055D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(path_to_goron_village_sceneTex_004DD0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_006AE0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx path_to_goron_village_room_0DL_007060[] = {
    gsSPVertex(&path_to_goron_village_room_0Vtx_006E00[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 0, 1, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 155),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(path_to_goron_village_sceneTex_0065D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(path_to_goron_village_sceneTex_0065D0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(path_to_goron_village_room_0Vtx_006E00, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 6, 4, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 11, 0, 10, 14, 12, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(12, 17, 13, 0, 12, 18, 15, 0),
    gsSP2Triangles(12, 19, 20, 0, 12, 20, 18, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 20, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 24, 23, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 25, 0, 26, 3, 2, 0),
    gsSP2Triangles(26, 2, 28, 0, 26, 28, 27, 0),
    gsSP2Triangles(28, 2, 17, 0, 28, 17, 16, 0),
    gsSP2Triangles(6, 5, 9, 0, 26, 29, 3, 0),
    gsSPEndDisplayList(),
};
