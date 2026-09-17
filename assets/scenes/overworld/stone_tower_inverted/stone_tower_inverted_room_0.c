#include "stone_tower_inverted_scene.h"
#include "stone_tower_inverted_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "item.h"

SceneCmd stone_tower_inverted_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_inverted_room_0RoomShapeCullable_0002A0),
    SCENE_CMD_OBJECT_LIST(8, stone_tower_inverted_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(30, stone_tower_inverted_room_0ActorEntry_000058),
    SCENE_CMD_END(),
};

s16 stone_tower_inverted_room_0ObjectList_000040[] = {
    OBJECT_F40_OBJ,
    OBJECT_F40_SWITCH,
    OBJECT_GOROIWA,
    OBJECT_LIGHTSWITCH,
    OBJECT_LBFSHOT,
    OBJECT_TSUBO,
    OBJECT_MAMENOKI,
    OBJECT_BOX,
};

ActorEntry stone_tower_inverted_room_0ActorEntry_000058[] = {
    { ACTOR_EN_GOROIWA,      {  689, 1972,  1324 }, {              0,    0x2,    0x2 }, 0x4106 },
    { ACTOR_EN_GOROIWA,      {  511, 1981,  1354 }, {              0,      0,    0x2 }, 0x4107 },
    { ACTOR_EN_GOROIWA,      {  688, 1126, -1204 }, {              0,      0,    0x2 }, 0x4108 },
    { ACTOR_EN_GOROIWA,      { -305, 3325,  1196 }, {              0,      0,    0x2 }, 0x4109 },
    { ACTOR_EN_GOROIWA,      { -308,  460,  1277 }, {              0,      0,    0x2 }, 0x410A },
    { ACTOR_BG_LBFSHOT,      {  599, 2014,   970 }, {         0x4000,      0,      0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      { -287, 2220,  1147 }, {         0x4000,      0,      0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {   11, 1235,  -257 }, {         0x4000,      0,      0 }, 0x0000 },
    { ACTOR_BG_F40_BLOCK,    {    4,  774,    71 }, {              0,      0, 0x4000 }, 0x7E00 }, // Switch: 3F
    { ACTOR_BG_F40_BLOCK,    {    4,  774,  1031 }, {              0,      0, 0x4000 }, 0x7E0C }, // Switch: 3F
    { ACTOR_BG_F40_BLOCK,    {    4,  774,   711 }, {              0,      0, 0x4000 }, 0x7E08 }, // Switch: 3F
    { ACTOR_BG_F40_BLOCK,    {    4,  774,   391 }, {              0,      0, 0x4000 }, 0x7E04 }, // Switch: 3F
    { ACTOR_OBJ_FIRESHIELD,  {  269,  560,  1375 }, {            0x1,      0,      0 }, 0x1F7F }, // Switch: 3F
    { ACTOR_OBJ_FIRESHIELD,  { -269,  560,  1375 }, {            0x1,      0,      0 }, 0x1F7F }, // Switch: 3F
    { ACTOR_OBJ_FIRESHIELD,  { 1147,  324,  1075 }, {            0x1,      0,      0 }, 0x1F7F }, // Switch: 3F
    { ACTOR_OBJ_TSUBO,       {  -60, 1454,  -260 }, {              0,      0,      0 }, 0x6F03 }, // Collectible: 37, Recovery Heart
    { ACTOR_OBJ_TSUBO,       {   20, 1454,  -260 }, {              0,      0,      0 }, 0x710E }, // Collectible: 38, Large Magic Jar
    { ACTOR_OBJ_TSUBO,       {  -20, 1454,  -300 }, {              0,      0,      0 }, 0x7312 }, // Collectible: 39, Flexible Drop
    { ACTOR_OBJ_TSUBO,       {   20, 1454,  -340 }, {              0,      0,      0 }, 0x750B }, // Collectible: 3A, Bombs (5)
    { ACTOR_OBJ_TSUBO,       {  -60, 1454,  -340 }, {              0,      0,      0 }, 0x7703 }, // Collectible: 3B, Recovery Heart
    { ACTOR_EN_ISHI,         {  289,  854,  -313 }, {              0,      0,      0 }, 0x0042 },
    { ACTOR_EN_ISHI,         {  -92,  854,  -690 }, {              0,      0,      0 }, 0x0040 },
    { ACTOR_OBJ_BEAN,        {  591,  854,  -571 }, {              0,      0,    0x1 }, 0x0401 }, // Switch: 01
    { ACTOR_OBJ_BEAN,        {  268, 1454,  -289 }, {              0,      0,    0x1 }, 0x0504 }, // Switch: 04
    { ACTOR_EN_BOX,          {   60, 1454,  -400 }, {  GI_RUPEE_GOLD,      0,      0 }, 0x500D }, // Chest: 0D, Gold Rupee
    { ACTOR_EN_BOX,          {  -20, 1454,  -400 }, { GI_BOMBCHUS_10,      0,      0 }, 0x500E }, // Chest: 0E, Bombchus (10)
    { ACTOR_EN_BOX,          { -100, 1454,  -400 }, {  GI_MAGIC_BEAN,      0,      0 }, 0x500F }, // Chest: 0F, Magic Bean
    { ACTOR_EN_WEATHER_TAG,  {    0,  569,   629 }, {              0,      0,      0 }, 0x2801 },
    { ACTOR_OBJ_LIGHTSWITCH, {    5, 1333,   829 }, {              0, 0x4000, 0x4000 }, 0x1418 }, // Switch: 14
    { ACTOR_OBJ_WTURN,       {   38,  327,   796 }, {              0,   0x5A,      0 }, 0x0014 }, // Checks switch: 14
};

RoomShapeCullable stone_tower_inverted_room_0RoomShapeCullable_0002A0 = { 
    2, 5,
    stone_tower_inverted_room_0RoomShapeCullableEntry_0002AC,
    stone_tower_inverted_room_0RoomShapeCullableEntry_0002AC + ARRAY_COUNTU(stone_tower_inverted_room_0RoomShapeCullableEntry_0002AC)
};

RoomShapeCullableEntry stone_tower_inverted_room_0RoomShapeCullableEntry_0002AC[5] = {
    { {    541,   -395,    651 },   5452, NULL, stone_tower_inverted_room_0DL_00B928 },
    { {    154,    384,   2051 },   1714, stone_tower_inverted_room_0DL_005EC0, NULL },
    { {     44,   3090,    336 },   3066, stone_tower_inverted_room_0DL_008738, stone_tower_inverted_room_0DL_00AE28 },
    { {      3,   1320,    815 },    -26, stone_tower_inverted_room_0DL_008B28, NULL },
    { {      4,   1314,    819 },     86, stone_tower_inverted_room_0DL_0088E8, NULL },
};

s32 stone_tower_inverted_room_0_terminatorMaybe_0002FC = { 0x01000000 };

Vtx stone_tower_inverted_room_0Vtx_000300[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_000300.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_000A10[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_000A10.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_001878[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_001878.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_001A90[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_001A90.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_001F70[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_001F70.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_002220[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_002220.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_002700[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_002700.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_0029B0[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_0029B0.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_002CD8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_002CD8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_002EC0[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_002EC0.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_0031E8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_0031E8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_0033F8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_0033F8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_003648[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_003648.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_003968[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_003968.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_003BE0[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_003BE0.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_003EF0[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_003EF0.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_0040C8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_0040C8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_0043E8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_0043E8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_004618[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_004618.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_004840[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_004840.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_004A68[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_004A68.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_004D48[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_004D48.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_005268[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_005268.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_005840[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_005840.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_005A60[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_005A60.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_005C80[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_005C80.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_005EE8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_005EE8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_0062C8[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_0062C8.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_006AF0[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_006AF0.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_007670[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_007670.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_007A10[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_007A10.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_008768[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_008768.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_008A08[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_008A08.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_008C50[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_008C50.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_00A9B0[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_00A9B0.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_00AB70[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_00AB70.vtx.inc"
};

Vtx stone_tower_inverted_room_0Vtx_00AE48[] = {
#include "assets/scenes/overworld/stone_tower_inverted/stone_tower_inverted_room_0Vtx_00AE48.vtx.inc"
};

Gfx stone_tower_inverted_room_0DL_000880[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000300[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_007110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_000300, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000300[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 2, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 0, 17, 18, 0),
    gsSP2Triangles(0, 18, 1, 0, 7, 19, 20, 0),
    gsSP2Triangles(7, 20, 9, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000300[61], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 4, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0015D0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000A10[180], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_000A10, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000A10[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000A10[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000A10[92], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000A10[124], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_inverted_sceneTLUT_013AD0),
    gsDPLoadTextureBlock_4b(stone_tower_inverted_sceneTex_013190, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_000A10[156], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0019B8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_001878[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_008110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_MIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_001878, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsSP2Triangles(8, 2, 1, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 3, 2, 0, 9, 2, 8, 0),
    gsSP2Triangles(10, 4, 3, 0, 10, 3, 9, 0),
    gsSP2Triangles(11, 5, 4, 0, 11, 4, 10, 0),
    gsSP2Triangles(7, 0, 5, 0, 7, 5, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_001DF0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_001A90[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_008910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_001A90, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 11, 13, 0, 15, 4, 6, 0),
    gsSP2Triangles(15, 6, 16, 0, 6, 8, 16, 0),
    gsSP2Triangles(16, 8, 17, 0, 17, 10, 18, 0),
    gsSP2Triangles(17, 8, 10, 0, 18, 10, 12, 0),
    gsSP2Triangles(18, 12, 19, 0, 12, 14, 19, 0),
    gsSP2Triangles(2, 20, 21, 0, 2, 21, 22, 0),
    gsSP2Triangles(1, 23, 20, 0, 1, 20, 2, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 1, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 31, 27, 0, 30, 27, 26, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_001A90[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 3, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 0, 3, 0, 9, 3, 8, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 7, 11, 0),
    gsSP2Triangles(12, 8, 4, 0, 12, 4, 10, 0),
    gsSP2Triangles(13, 9, 8, 0, 13, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_002110[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_001F70[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_001F70, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 6, 0, 11, 6, 8, 0),
    gsSP2Triangles(12, 9, 6, 0, 12, 6, 11, 0),
    gsSP2Triangles(13, 11, 8, 0, 2, 12, 11, 0),
    gsSP2Triangles(2, 11, 13, 0, 7, 14, 8, 0),
    gsSP2Triangles(10, 5, 14, 0, 10, 14, 7, 0),
    gsSP2Triangles(15, 16, 10, 0, 15, 10, 9, 0),
    gsSP2Triangles(16, 4, 5, 0, 16, 5, 10, 0),
    gsSP2Triangles(17, 15, 9, 0, 17, 9, 12, 0),
    gsSP2Triangles(1, 17, 12, 0, 1, 12, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_002580[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_002220[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_008910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_002220, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 11, 13, 0, 15, 4, 6, 0),
    gsSP2Triangles(15, 6, 16, 0, 6, 8, 16, 0),
    gsSP2Triangles(16, 8, 17, 0, 17, 10, 18, 0),
    gsSP2Triangles(17, 8, 10, 0, 18, 10, 12, 0),
    gsSP2Triangles(18, 12, 19, 0, 12, 14, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 20, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 3, 29, 0, 28, 29, 30, 0),
    gsSP2Triangles(31, 0, 3, 0, 31, 3, 28, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_002220[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 3, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 0, 3, 0, 9, 3, 8, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 7, 11, 0),
    gsSP2Triangles(12, 8, 4, 0, 12, 4, 10, 0),
    gsSP2Triangles(13, 9, 8, 0, 13, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0028A0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_002700[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_002700, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 6, 0, 11, 6, 8, 0),
    gsSP2Triangles(12, 9, 6, 0, 12, 6, 11, 0),
    gsSP2Triangles(13, 11, 8, 0, 5, 12, 11, 0),
    gsSP2Triangles(5, 11, 13, 0, 7, 14, 8, 0),
    gsSP2Triangles(10, 3, 14, 0, 10, 14, 7, 0),
    gsSP2Triangles(15, 16, 10, 0, 15, 10, 9, 0),
    gsSP2Triangles(16, 0, 3, 0, 16, 3, 10, 0),
    gsSP2Triangles(17, 15, 9, 0, 17, 9, 12, 0),
    gsSP2Triangles(4, 17, 12, 0, 4, 12, 5, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_002BB0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0029B0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_008910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_0029B0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 8, 11, 0, 16, 11, 17, 0),
    gsSP2Triangles(18, 12, 8, 0, 18, 8, 16, 0),
    gsSP2Triangles(19, 14, 12, 0, 19, 12, 18, 0),
    gsSP2Triangles(20, 16, 17, 0, 20, 17, 21, 0),
    gsSP2Triangles(22, 18, 16, 0, 22, 16, 20, 0),
    gsSP2Triangles(23, 19, 18, 0, 23, 18, 22, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_002DE8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_002CD8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_002CD8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 0, 5, 0),
    gsSP2Triangles(1, 7, 2, 0, 4, 8, 7, 0),
    gsSP1Triangle(4, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0030C0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_002EC0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_008910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_002EC0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(9, 16, 19, 0, 9, 19, 10, 0),
    gsSP2Triangles(13, 20, 16, 0, 13, 16, 9, 0),
    gsSP2Triangles(15, 22, 20, 0, 15, 20, 13, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0032F8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0031E8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_0031E8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 0, 5, 0),
    gsSP2Triangles(7, 5, 2, 0, 8, 6, 5, 0),
    gsSP1Triangle(8, 5, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_003558[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0033F8[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00C910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_0033F8, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 4, 5, 6, 0),
    gsSP2Triangles(3, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 11, 0, 11, 13, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_003858[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_003648[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00C110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_003648, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 6, 4, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 8, 9, 2, 0),
    gsSP2Triangles(10, 11, 2, 0, 12, 10, 2, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(14, 19, 16, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 24, 17, 23, 0),
    gsSP2Triangles(17, 19, 23, 0, 23, 19, 21, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_003AE8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_003968[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00B910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_003968, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 4, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 13, 0, 13, 12, 14, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_003DD0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_003BE0[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00B110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_003BE0, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 6, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 9, 1, 0, 0),
    gsSP2Triangles(11, 9, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(8, 13, 12, 0, 8, 7, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 14, 3, 0),
    gsSP2Triangles(14, 0, 3, 0, 4, 17, 18, 0),
    gsSP2Triangles(4, 8, 17, 0, 19, 20, 14, 0),
    gsSP2Triangles(9, 14, 20, 0, 9, 0, 14, 0),
    gsSP2Triangles(21, 22, 12, 0, 22, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_003FF0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_003EF0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00A910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_003EF0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0042E8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0040C8[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_009910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_0040C8, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_004528[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0043E8[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00A110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_0043E8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
    gsSP2Triangles(11, 5, 10, 0, 11, 6, 5, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_004758[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_004618[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_009110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_004618, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 9, 0, 7, 11, 8, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_004980[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_004840[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_007110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_004840, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_004C48[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_004A68[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_007910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_004A68, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 12, 16, 0),
    gsSP2Triangles(12, 11, 16, 0, 16, 11, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0050F8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_004D48[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_008110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,   G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_004D48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(5, 9, 14, 0, 15, 16, 6, 0),
    gsSP2Triangles(6, 17, 10, 0, 5, 14, 6, 0),
    gsSP2Triangles(10, 17, 12, 0, 15, 18, 19, 0),
    gsSP2Triangles(15, 19, 16, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 26, 25, 27, 0),
    gsSP2Triangles(27, 20, 23, 0, 28, 30, 29, 0),
    gsSP1Triangle(31, 24, 26, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_004D48[32], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 4, 3, 6, 0),
    gsSP2Triangles(4, 6, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 15, 14, 0),
    gsSP1Triangle(17, 14, 18, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_005688[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005268[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00F910, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_00E110, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_005268, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005268[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_005990[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005840[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_005840, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(5, 12, 2, 0, 12, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_005BB0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005A60[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_005A60, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(5, 12, 2, 0, 12, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_005DD0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005C80[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011990, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_005C80, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(2, 5, 8, 0, 2, 8, 6, 0),
    gsSP2Triangles(7, 6, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(6, 8, 11, 0, 6, 11, 9, 0),
    gsSP2Triangles(1, 12, 4, 0, 1, 0, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_005EC0[] = {
    gsSPDisplayList(stone_tower_inverted_room_0DL_000880),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0015D0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0019B8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_001DF0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_002110),
    gsSPDisplayList(stone_tower_inverted_room_0DL_002580),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0028A0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_002BB0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_002DE8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0030C0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0032F8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_003558),
    gsSPDisplayList(stone_tower_inverted_room_0DL_003858),
    gsSPDisplayList(stone_tower_inverted_room_0DL_003AE8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_003DD0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_003FF0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0042E8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_004528),
    gsSPDisplayList(stone_tower_inverted_room_0DL_004758),
    gsSPDisplayList(stone_tower_inverted_room_0DL_004980),
    gsSPDisplayList(stone_tower_inverted_room_0DL_004C48),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0050F8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_005688),
    gsSPDisplayList(stone_tower_inverted_room_0DL_005990),
    gsSPDisplayList(stone_tower_inverted_room_0DL_005BB0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_005DD0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0061A8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005EE8[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_inverted_sceneTLUT_013AB0),
    gsDPLoadTextureBlock_4b(stone_tower_inverted_sceneTex_012990, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_005EE8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_005EE8[30], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_006938[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0062C8[95], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_inverted_sceneTLUT_013A90),
    gsDPLoadTextureBlock_4b(stone_tower_inverted_sceneTex_012190, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_0062C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(7, 12, 10, 0, 11, 13, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 18, 23, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0062C8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(5, 11, 12, 0, 5, 12, 6, 0),
    gsSP2Triangles(12, 13, 6, 0, 5, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 18, 0),
    gsSP2Triangles(20, 21, 18, 0, 16, 22, 19, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_0062C8[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 4, 9, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 10, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(16, 20, 19, 0, 19, 21, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSP2Triangles(27, 30, 28, 0, 29, 31, 30, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_007450[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_006AF0[142], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_006190, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 31, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_inverted_sceneTex_006190, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_006AF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSP2Triangles(27, 30, 28, 0, 29, 31, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_006AF0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 28, 0),
    gsSP2Triangles(25, 28, 26, 0, 27, 29, 28, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_006AF0[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_006AF0[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 19, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_006AF0[124], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 15, 17, 16, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_007920[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007670[35], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_011110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 166, 146, 117, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_007670, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007670[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0084F0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007A10[166], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00D110, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_inverted_sceneTex_00E910, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_007A10, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 9, 15, 0),
    gsSP2Triangles(14, 13, 16, 0, 16, 13, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007A10[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007A10[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007A10[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 8, 0),
    gsSP2Triangles(11, 8, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007A10[123], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP2Triangles(27, 24, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_007A10[155], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_008738[] = {
    gsSPDisplayList(stone_tower_inverted_room_0DL_0061A8),
    gsSPDisplayList(stone_tower_inverted_room_0DL_006938),
    gsSPDisplayList(stone_tower_inverted_room_0DL_007450),
    gsSPDisplayList(stone_tower_inverted_room_0DL_007920),
    gsSPDisplayList(stone_tower_inverted_room_0DL_0084F0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_0088E8[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008768[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 229),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_010110, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_inverted_sceneTex_010910, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_008768, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 5, 9, 0),
    gsSP2Triangles(9, 5, 0, 0, 3, 4, 6, 0),
    gsSP2Triangles(1, 10, 11, 0, 1, 11, 2, 0),
    gsSP2Triangles(10, 1, 5, 0, 2, 11, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 14, 5, 0, 13, 12, 4, 0),
    gsSP2Triangles(10, 14, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(10, 5, 14, 0, 11, 13, 4, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_008B28[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008A08[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 229),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_010110, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_inverted_sceneTex_010910, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_008A08, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 3, 2, 0),
    gsSP2Triangles(5, 2, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(7, 0, 4, 0, 7, 4, 8, 0),
    gsSP2Triangles(4, 3, 9, 0, 3, 5, 9, 0),
    gsSP2Triangles(8, 4, 9, 0, 6, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_00A4A0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[381], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_005190, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(stone_tower_inverted_sceneTex_005990, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_008C50, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(0, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 22, 13, 0),
    gsSP2Triangles(22, 23, 13, 0, 23, 0, 13, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(25, 28, 27, 0, 28, 29, 27, 0),
    gsSP2Triangles(29, 30, 27, 0, 29, 31, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(3, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(14, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 19, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 9, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 15, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 19, 22, 18, 0),
    gsSP2Triangles(19, 20, 22, 0, 21, 14, 22, 0),
    gsSP2Triangles(14, 23, 22, 0, 23, 24, 22, 0),
    gsSP2Triangles(23, 25, 24, 0, 21, 13, 14, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(19, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
    gsSP2Triangles(12, 13, 10, 0, 12, 10, 11, 0),
    gsSP2Triangles(14, 4, 5, 0, 14, 5, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(17, 16, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 12, 23, 13, 0),
    gsSP2Triangles(12, 24, 25, 0, 12, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[160], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 2, 0, 10, 7, 2, 0),
    gsSP2Triangles(10, 11, 7, 0, 1, 10, 2, 0),
    gsSP2Triangles(8, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 18, 0),
    gsSP2Triangles(13, 16, 22, 0, 13, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 24, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[192], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 9, 11, 0, 28, 27, 11, 0),
    gsSP2Triangles(28, 11, 29, 0, 11, 30, 29, 0),
    gsSP1Triangle(11, 31, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[224], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 3, 5, 7, 0),
    gsSP2Triangles(3, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 17, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 26, 28, 0),
    gsSP2Triangles(27, 29, 26, 0, 29, 24, 26, 0),
    gsSP2Triangles(27, 30, 29, 0, 29, 31, 24, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[256], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 4, 0),
    gsSP2Triangles(5, 4, 3, 0, 7, 8, 5, 0),
    gsSP2Triangles(7, 5, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 10, 12, 7, 0),
    gsSP2Triangles(10, 13, 12, 0, 14, 15, 6, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 25, 0),
    gsSP2Triangles(21, 25, 26, 0, 21, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[288], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(14, 18, 16, 0, 18, 19, 16, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(18, 22, 20, 0, 22, 23, 20, 0),
    gsSP2Triangles(18, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 25, 29, 26, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[318], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 23, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 20, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(26, 29, 30, 0, 26, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_008C50[350], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 4, 9, 1, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 3, 16, 0),
    gsSP2Triangles(15, 17, 3, 0, 17, 0, 3, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 25, 28, 29, 0),
    gsSP1Triangle(25, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_00AAB0[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00A9B0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_013990, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_00A9B0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 5, 0, 3, 5, 4, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(6, 5, 2, 0, 6, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_00AD40[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00AB70[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_013990, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_00AB70, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(4, 3, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 10, 0, 7, 11, 12, 0),
    gsSP2Triangles(13, 5, 4, 0, 13, 4, 14, 0),
    gsSP2Triangles(8, 12, 11, 0, 15, 2, 1, 0),
    gsSP2Triangles(15, 1, 16, 0, 6, 2, 17, 0),
    gsSP2Triangles(16, 1, 0, 0, 16, 0, 18, 0),
    gsSP2Triangles(19, 0, 5, 0, 19, 5, 20, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_00AE28[] = {
    gsSPDisplayList(stone_tower_inverted_room_0DL_00A4A0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_00AAB0),
    gsSPDisplayList(stone_tower_inverted_room_0DL_00AD40),
    gsSPEndDisplayList(),
};

Gfx stone_tower_inverted_room_0DL_00B928[] = {
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00AE48[131], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_inverted_sceneTex_00F110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,   G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 3),
    gsDPLoadMultiBlock(stone_tower_inverted_sceneTex_00D910, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_inverted_room_0Vtx_00AE48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 3, 5, 0),
    gsSP2Triangles(3, 10, 11, 0, 3, 11, 6, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 6, 11, 0),
    gsSP2Triangles(0, 14, 15, 0, 0, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 29, 28, 0, 30, 26, 31, 0),
    gsSP1Triangle(30, 27, 26, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00AE48[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 13, 0, 14, 18, 15, 0),
    gsSP2Triangles(19, 20, 12, 0, 19, 12, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 19, 11, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00AE48[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 6, 5, 0),
    gsSP2Triangles(6, 4, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(9, 13, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(7, 16, 6, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 7, 4, 0, 19, 20, 7, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(24, 25, 22, 0, 26, 27, 28, 0),
    gsSP1Triangle(26, 28, 29, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00AE48[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(19, 20, 17, 0, 20, 21, 17, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 25, 0, 28, 25, 30, 0),
    gsSPVertex(&stone_tower_inverted_room_0Vtx_00AE48[125], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};
