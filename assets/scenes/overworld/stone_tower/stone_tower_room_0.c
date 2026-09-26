#include "stone_tower_scene.h"
#include "stone_tower_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd stone_tower_room_0[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(stone_tower_room_0AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_CURSED, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_room_0RoomShapeCullable_000630),
    SCENE_CMD_OBJECT_LIST(11, stone_tower_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(92, stone_tower_room_0ActorEntry_000060),
    SCENE_CMD_END(),
};

SceneCmd* stone_tower_room_0AlternateHeaders[] = {
    NULL,
    NULL,
    stone_tower_room_0Set_cleansed,
};

s16 stone_tower_room_0ObjectList_000040[] = {
    OBJECT_F40_OBJ,
    OBJECT_F40_SWITCH,
    OBJECT_GOROIWA,
    OBJECT_LIGHTSWITCH,
    OBJECT_LBFSHOT,
    OBJECT_TSUBO,
    OBJECT_SEK,
    OBJECT_VM,
    OBJECT_RD,
    OBJECT_FIREFLY,
    OBJECT_KA,
};

ActorEntry stone_tower_room_0ActorEntry_000060[] = {
    { ACTOR_EN_RD,           {  -996, -1360, 1511 }, { 0,      0,  0 }, 0x7F07 },
    { ACTOR_EN_RD,           {  -996, -1360, 1751 }, { 0,      0,  0 }, 0x7F07 },
    { ACTOR_EN_RD,           {  -996, -1360, 1991 }, { 0,      0,  0 }, 0x7F07 },
    { ACTOR_EN_VM,           {  -614, -1760, 3120 }, { 0,      0,  0 }, 0xFF00 },
    { ACTOR_EN_VM,           {  -539, -2760, 1338 }, { 0,      0,  0 }, 0x0300 },
    { ACTOR_EN_FIREFLY,      {  -331,  -880, 2977 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,      {  -228, -1140, 2097 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,      {   811,  -769, 2547 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,      {  -887, -1168, 2097 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,      {  -582, -2551, 1417 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_FIREFLY,      {    87, -2133, 2357 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_KAKASI2,      {  -909, -1360, 1376 }, { 0,      0, 14 }, 0x053D }, // Switch: 3D
    { ACTOR_EN_KAKASI2,      {  1165,  -760, 2131 }, { 0,      0, 14 }, 0x053E }, // Switch: 3E
    { ACTOR_EN_GOROIWA,      {   674, -1320, 1129 }, { 0,      0,  1 }, 0x4104 },
    { ACTOR_EN_GOROIWA,      {   553, -1330, 1129 }, { 0,      0,  1 }, 0x4105 },
    { ACTOR_EN_GOROIWA,      {  -299, -2282, 1165 }, { 0,      0,  1 }, 0x4103 },
    { ACTOR_EN_GOROIWA,      {  -297, -2697, 1328 }, { 0,      0,  1 }, 0x4102 },
    { ACTOR_EN_GOROIWA,      {  1297,  -701, 2659 }, { 0,      0,  1 }, 0x4106 },
    { ACTOR_EN_GOROIWA,      {  -854, -1104, 2913 }, { 0,      0,  1 }, 0x4100 },
    { ACTOR_EN_GOROIWA,      {   194, -1700, 3339 }, { 0,      0,  1 }, 0x4101 },
    { ACTOR_EN_GOROIWA,      {   719,  -518, 3412 }, { 0,      0,  1 }, 0x4107 },
    { ACTOR_BG_LBFSHOT,      {    84,  -580, 2711 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {   524,  -960, 2271 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {  -476, -2760, 1511 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {  -116, -2360, 1511 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {  -276, -2160, 2751 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {  -476, -1760, 3111 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {   -60, -1560, 2874 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {   604, -1360, 1511 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_LBFSHOT,      {  -281, -1560, 1331 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_BG_F40_BLOCK,    {     1, -3028, 1873 }, { 0,      0,  0 }, 0x4028 }, // Switch: 32
    { ACTOR_BG_F40_BLOCK,    {     1, -3011, 2154 }, { 0,      0,  0 }, 0x4224 }, // Switch: 33
    { ACTOR_BG_F40_BLOCK,    {     4, -2993, 2431 }, { 0,      0,  0 }, 0x4420 }, // Switch: 34
    { ACTOR_BG_F40_BLOCK,    {   924, -1160, 1991 }, { 0,      0,  0 }, 0x462C }, // Switch: 35
    { ACTOR_BG_F40_BLOCK,    {   924, -1160, 1791 }, { 0,      0,  0 }, 0x4830 }, // Switch: 36
    { ACTOR_BG_F40_BLOCK,    {   924, -1160, 1471 }, { 0,      0,  0 }, 0x4A34 }, // Switch: 37
    { ACTOR_BG_F40_BLOCK,    {   164,  -600, 1712 }, { 0,      0,  0 }, 0x4C38 }, // Switch: 38
    { ACTOR_BG_F40_BLOCK,    {     4,  -600, 1711 }, { 0,      0,  0 }, 0x4E3C }, // Switch: 39
    { ACTOR_BG_F40_BLOCK,    {  -156,  -600, 1714 }, { 0,      0,  0 }, 0x5040 }, // Switch: 3A
    { ACTOR_BG_F40_SWITCH,   {     4, -2960, 1482 }, { 0,      0,  0 }, 0x4000 }, // Switch: 32
    { ACTOR_BG_F40_SWITCH,   {   -36, -2360, 2780 }, { 0,      0,  0 }, 0x4000 }, // Switch: 32
    { ACTOR_BG_F40_SWITCH,   {     4, -2360, 1351 }, { 0,      0,  0 }, 0x4200 }, // Switch: 33
    { ACTOR_BG_F40_SWITCH,   {   125, -2360, 2784 }, { 0,      0,  0 }, 0x4200 }, // Switch: 33
    { ACTOR_BG_F40_SWITCH,   {  -596, -2760, 1511 }, { 0,      0,  0 }, 0x4400 }, // Switch: 34
    { ACTOR_BG_F40_SWITCH,   {   320, -2360, 2767 }, { 0,      0,  0 }, 0x4400 }, // Switch: 34
    { ACTOR_BG_F40_SWITCH,   {  -716, -1760, 3231 }, { 0,      0,  0 }, 0x4600 }, // Switch: 35
    { ACTOR_BG_F40_SWITCH,   {  -156, -1560, 1431 }, { 0,      0,  0 }, 0x4600 }, // Switch: 35
    { ACTOR_BG_F40_SWITCH,   {  -516, -2160, 2991 }, { 0,      0,  0 }, 0x4800 }, // Switch: 36
    { ACTOR_BG_F40_SWITCH,   {     4, -1560, 1431 }, { 0,      0,  0 }, 0x4800 }, // Switch: 36
    { ACTOR_BG_F40_SWITCH,   {     4, -1560, 3111 }, { 0,      0,  0 }, 0x4A00 }, // Switch: 37
    { ACTOR_BG_F40_SWITCH,   {   164, -1560, 1431 }, { 0,      0,  0 }, 0x4A00 }, // Switch: 37
    { ACTOR_BG_F40_SWITCH,   {    84,  -560, 2831 }, { 0,      0,  0 }, 0x4C00 }, // Switch: 38
    { ACTOR_BG_F40_SWITCH,   {     4,  -586, 1531 }, { 0,      0,  0 }, 0x4C00 }, // Switch: 38
    { ACTOR_BG_F40_SWITCH,   {   -36,  -560, 2951 }, { 0,      0,  0 }, 0x4E00 }, // Switch: 39
    { ACTOR_BG_F40_SWITCH,   {  -266,  -586, 1291 }, { 0,      0,  0 }, 0x4E00 }, // Switch: 39
    { ACTOR_BG_F40_SWITCH,   {   274,  -586, 1291 }, { 0,      0,  0 }, 0x5000 }, // Switch: 3A
    { ACTOR_BG_F40_SWITCH,   {   204,  -560, 2951 }, { 0,      0,  0 }, 0x5000 }, // Switch: 3A
    { ACTOR_OBJ_FIRESHIELD,  {  1145,   343, 1375 }, { 0,      0,  0 }, 0x1F7F }, // Switch: 3F
    { ACTOR_OBJ_FIRESHIELD,  {   281,    60, 1090 }, { 0,      0,  0 }, 0x1F7F }, // Switch: 3F
    { ACTOR_OBJ_FIRESHIELD,  {  -268,    60, 1090 }, { 0,      0,  0 }, 0x1F7F }, // Switch: 3F
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1551 }, { 0,      0,  0 }, 0x410F }, // Collectible: 20, Small Magic Jar
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1791 }, { 0,      0,  0 }, 0x4303 }, // Collectible: 21, Recovery Heart
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1751 }, { 0,      0,  0 }, 0x450F }, // Collectible: 22, Small Magic Jar
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1711 }, { 0,      0,  0 }, 0x4712 }, // Collectible: 23, Flexible Drop
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1991 }, { 0,      0,  0 }, 0x4903 }, // Collectible: 24, Recovery Heart
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1951 }, { 0,      0,  0 }, 0x4B12 }, // Collectible: 25, Flexible Drop
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 2031 }, { 0,      0,  0 }, 0x4D01 }, // Collectible: 26, Blue Rupee
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 2271 }, { 0,      0,  0 }, 0x4F03 }, // Collectible: 27, Recovery Heart
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 2231 }, { 0,      0,  0 }, 0x5101 }, // Collectible: 28, Blue Rupee
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1511 }, { 0,      0,  0 }, 0x5301 }, // Collectible: 29, Blue Rupee
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 1471 }, { 0,      0,  0 }, 0x5503 }, // Collectible: 2A, Recovery Heart
    { ACTOR_OBJ_TSUBO,       {  1204,  -760, 1831 }, { 0,      0,  0 }, 0x5703 }, // Collectible: 2B, Recovery Heart
    { ACTOR_OBJ_TSUBO,       {  1204,  -760, 1911 }, { 0,      0,  0 }, 0x5912 }, // Collectible: 2C, Flexible Drop
    { ACTOR_OBJ_TSUBO,       {  1204,  -760, 1871 }, { 0,      0,  0 }, 0x5B01 }, // Collectible: 2D, Blue Rupee
    { ACTOR_OBJ_TSUBO,       {  1364,  -760, 2031 }, { 0,      0,  0 }, 0x5D0F }, // Collectible: 2E, Small Magic Jar
    { ACTOR_OBJ_TSUBO,       {  1364,  -760, 2071 }, { 0,      0,  0 }, 0x5F08 }, // Collectible: 2F, Arrows (10)
    { ACTOR_OBJ_TSUBO,       {  1364,  -760, 2111 }, { 0,      0,  0 }, 0x6103 }, // Collectible: 30, Recovery Heart
    { ACTOR_OBJ_TSUBO,       {  1364,  -760, 2351 }, { 0,      0,  0 }, 0x630F }, // Collectible: 31, Small Magic Jar
    { ACTOR_OBJ_TSUBO,       {  1364,  -760, 2391 }, { 0,      0,  0 }, 0x6501 }, // Collectible: 32, Blue Rupee
    { ACTOR_OBJ_TSUBO,       {  1364,  -760, 2431 }, { 0,      0,  0 }, 0x6708 }, // Collectible: 33, Arrows (10)
    { ACTOR_OBJ_TSUBO,       { -1116, -1360, 2191 }, { 0,      0,  0 }, 0x690F }, // Collectible: 34, Small Magic Jar
    { ACTOR_OBJ_TSUBO,       {  -741, -2760, 1533 }, { 0,      0,  0 }, 0x6B03 }, // Collectible: 35, Recovery Heart
    { ACTOR_OBJ_TSUBO,       {  -742, -2760, 1474 }, { 0,      0,  0 }, 0x6D03 }, // Collectible: 36, Recovery Heart
    { ACTOR_OBJ_TSUBO,       {   180,  -560, 3190 }, { 0,      0,  0 }, 0x6F0B }, // Collectible: 37, Bombs (5)
    { ACTOR_OBJ_TSUBO,       {     4,  -560, 3190 }, { 0,      0,  0 }, 0x7109 }, // Collectible: 38, Arrows (20)
    { ACTOR_OBJ_TSUBO,       {   -47,  -560, 3190 }, { 0,      0,  0 }, 0x7312 }, // Collectible: 39, Flexible Drop
    { ACTOR_OBJ_TSUBO,       {   232,  -560, 3191 }, { 0,      0,  0 }, 0x750E }, // Collectible: 3A, Large Magic Jar
    { ACTOR_EN_WEATHER_TAG,  {   -35, -1036, 2028 }, { 0,      0,  0 }, 0x2809 },
    { ACTOR_OBJ_WARPSTONE,   {    89,  -560, 3206 }, { 0, 0x8000,  0 }, 0x0009 },
    { ACTOR_OBJ_LIGHTSWITCH, {     4,  -676, 1631 }, { 0,      0,  0 }, 0x1418 }, // Switch: 14
    { ACTOR_OBJ_WTURN,       {     8,   -70, 1165 }, { 0, 0xC000,  0 }, 0x0014 }, // Checks switch: 14
    { ACTOR_BG_WEATHER,      {     0,     0,    0 }, { 0,      0,  0 }, 0x0001 },
};

RoomShapeCullable stone_tower_room_0RoomShapeCullable_000630 = { 
    2, 5,
    stone_tower_room_0RoomShapeCullableEntry_00063C,
    stone_tower_room_0RoomShapeCullableEntry_00063C + ARRAY_COUNTU(stone_tower_room_0RoomShapeCullableEntry_00063C)
};

RoomShapeCullableEntry stone_tower_room_0RoomShapeCullableEntry_00063C[5] = {
    { {    541,   1049,   1810 },   5452, NULL, stone_tower_room_0DL_00BC08 },
    { {    154,    270,    410 },   1712, stone_tower_room_0DL_006250, NULL },
    { {     44,  -2436,   2125 },   3066, stone_tower_room_0DL_008C08, stone_tower_room_0DL_00B338 },
    { {      4,   -660,   1643 },     86, stone_tower_room_0DL_008DB8, NULL },
    { {      3,   -667,   1647 },    -24, stone_tower_room_0DL_008FF8, NULL },
};

SceneCmd stone_tower_room_0Set_cleansed[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_room_0RoomShapeCullable_000630),
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(stone_tower_room_0ObjectList_000040), stone_tower_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(ARRAY_COUNT(stone_tower_room_0ActorEntry_000060) - 1, stone_tower_room_0ActorEntry_000060),
    SCENE_CMD_END(),
};

s32 stone_tower_room_0_terminatorMaybe_00068C = { 0x01000000 };

Vtx stone_tower_room_0Vtx_000690[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_000690.vtx.inc"
};

Vtx stone_tower_room_0Vtx_000DA0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_000DA0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_001C08[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_001C08.vtx.inc"
};

Vtx stone_tower_room_0Vtx_001E20[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_001E20.vtx.inc"
};

Vtx stone_tower_room_0Vtx_002300[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_002300.vtx.inc"
};

Vtx stone_tower_room_0Vtx_0025B0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_0025B0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_002A90[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_002A90.vtx.inc"
};

Vtx stone_tower_room_0Vtx_002D40[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_002D40.vtx.inc"
};

Vtx stone_tower_room_0Vtx_003068[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_003068.vtx.inc"
};

Vtx stone_tower_room_0Vtx_003250[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_003250.vtx.inc"
};

Vtx stone_tower_room_0Vtx_003578[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_003578.vtx.inc"
};

Vtx stone_tower_room_0Vtx_003788[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_003788.vtx.inc"
};

Vtx stone_tower_room_0Vtx_0039D8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_0039D8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_003CF8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_003CF8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_003F70[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_003F70.vtx.inc"
};

Vtx stone_tower_room_0Vtx_004280[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_004280.vtx.inc"
};

Vtx stone_tower_room_0Vtx_004458[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_004458.vtx.inc"
};

Vtx stone_tower_room_0Vtx_004778[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_004778.vtx.inc"
};

Vtx stone_tower_room_0Vtx_0049A8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_0049A8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_004BD0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_004BD0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_004DF8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_004DF8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_0050D8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_0050D8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_0055F8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_0055F8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_005BD0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_005BD0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_005DF0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_005DF0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_006010[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_006010.vtx.inc"
};

Vtx stone_tower_room_0Vtx_006278[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_006278.vtx.inc"
};

Vtx stone_tower_room_0Vtx_006658[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_006658.vtx.inc"
};

Vtx stone_tower_room_0Vtx_006F68[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_006F68.vtx.inc"
};

Vtx stone_tower_room_0Vtx_007B40[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_007B40.vtx.inc"
};

Vtx stone_tower_room_0Vtx_007EE0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_007EE0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_008C38[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_008C38.vtx.inc"
};

Vtx stone_tower_room_0Vtx_008ED8[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_008ED8.vtx.inc"
};

Vtx stone_tower_room_0Vtx_009120[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_009120.vtx.inc"
};

Vtx stone_tower_room_0Vtx_00AEC0[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_00AEC0.vtx.inc"
};

Vtx stone_tower_room_0Vtx_00B080[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_00B080.vtx.inc"
};

Vtx stone_tower_room_0Vtx_00B358[] = {
#include "assets/scenes/overworld/stone_tower/stone_tower_room_0Vtx_00B358.vtx.inc"
};

Gfx stone_tower_room_0DL_000C10[] = {
    gsSPVertex(&stone_tower_room_0Vtx_000690[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_007520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_000690, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&stone_tower_room_0Vtx_000690[31], 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_000690[61], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 4, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_001960[] = {
    gsSPVertex(&stone_tower_room_0Vtx_000DA0[180], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_012120, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_000DA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_000DA0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_000DA0[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_000DA0[92], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_000DA0[124], 32, 0),
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
    gsDPLoadTLUT_pal16(15, stone_tower_sceneTLUT_0142E0),
    gsDPLoadTextureBlock_4b(stone_tower_sceneTex_0139A0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPVertex(&stone_tower_room_0Vtx_000DA0[156], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_001D48[] = {
    gsSPVertex(&stone_tower_room_0Vtx_001C08[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_008520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_001C08, 12, 0),
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

Gfx stone_tower_room_0DL_002180[] = {
    gsSPVertex(&stone_tower_room_0Vtx_001E20[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_008D20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_001E20, 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_001E20[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 3, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 0, 3, 0, 9, 3, 8, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 7, 11, 0),
    gsSP2Triangles(12, 8, 4, 0, 12, 4, 10, 0),
    gsSP2Triangles(13, 9, 8, 0, 13, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_0024A0[] = {
    gsSPVertex(&stone_tower_room_0Vtx_002300[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_002300, 18, 0),
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

Gfx stone_tower_room_0DL_002910[] = {
    gsSPVertex(&stone_tower_room_0Vtx_0025B0[46], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_008D20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_0025B0, 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_0025B0[32], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 3, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(9, 0, 3, 0, 9, 3, 8, 0),
    gsSP2Triangles(10, 4, 7, 0, 10, 7, 11, 0),
    gsSP2Triangles(12, 8, 4, 0, 12, 4, 10, 0),
    gsSP2Triangles(13, 9, 8, 0, 13, 8, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_002C30[] = {
    gsSPVertex(&stone_tower_room_0Vtx_002A90[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_002A90, 18, 0),
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

Gfx stone_tower_room_0DL_002F40[] = {
    gsSPVertex(&stone_tower_room_0Vtx_002D40[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_008D20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_002D40, 24, 0),
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

Gfx stone_tower_room_0DL_003178[] = {
    gsSPVertex(&stone_tower_room_0Vtx_003068[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_003068, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 0, 5, 0),
    gsSP2Triangles(1, 7, 2, 0, 4, 8, 7, 0),
    gsSP1Triangle(4, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_003450[] = {
    gsSPVertex(&stone_tower_room_0Vtx_003250[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_008D20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_003250, 24, 0),
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

Gfx stone_tower_room_0DL_003688[] = {
    gsSPVertex(&stone_tower_room_0Vtx_003578[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_003578, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 0, 5, 0),
    gsSP2Triangles(7, 5, 2, 0, 8, 6, 5, 0),
    gsSP1Triangle(8, 5, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_0038E8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_003788[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00CD20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_003788, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 4, 5, 6, 0),
    gsSP2Triangles(3, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 11, 0, 11, 13, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_003BE8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_0039D8[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00C520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_0039D8, 25, 0),
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

Gfx stone_tower_room_0DL_003E78[] = {
    gsSPVertex(&stone_tower_room_0Vtx_003CF8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00BD20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_003CF8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 4, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 13, 0, 13, 12, 14, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_004160[] = {
    gsSPVertex(&stone_tower_room_0Vtx_003F70[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00B520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_003F70, 23, 0),
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

Gfx stone_tower_room_0DL_004380[] = {
    gsSPVertex(&stone_tower_room_0Vtx_004280[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00AD20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_004280, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_004678[] = {
    gsSPVertex(&stone_tower_room_0Vtx_004458[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_009D20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_004458, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_0048B8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_004778[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00A520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_004778, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 10, 0),
    gsSP2Triangles(11, 5, 10, 0, 11, 6, 5, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_004AE8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_0049A8[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_009520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_0049A8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 9, 0, 7, 11, 8, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_004D10[] = {
    gsSPVertex(&stone_tower_room_0Vtx_004BD0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_007520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_004BD0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_004FD8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_004DF8[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_007D20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_004DF8, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 12, 16, 0),
    gsSP2Triangles(12, 11, 16, 0, 16, 11, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_005488[] = {
    gsSPVertex(&stone_tower_room_0Vtx_0050D8[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_008520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_0050D8, 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_0050D8[32], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 4, 3, 6, 0),
    gsSP2Triangles(4, 6, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 15, 14, 0),
    gsSP1Triangle(17, 14, 18, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_005A18[] = {
    gsSPVertex(&stone_tower_room_0Vtx_0055F8[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00FD20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_00E520, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_0055F8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_0055F8[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_005D20[] = {
    gsSPVertex(&stone_tower_room_0Vtx_005BD0[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_005BD0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(5, 12, 2, 0, 12, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_005F40[] = {
    gsSPVertex(&stone_tower_room_0Vtx_005DF0[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_005DF0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(5, 12, 2, 0, 12, 3, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_006160[] = {
    gsSPVertex(&stone_tower_room_0Vtx_006010[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0121A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_006010, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(2, 5, 8, 0, 2, 8, 6, 0),
    gsSP2Triangles(7, 6, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(6, 8, 11, 0, 6, 11, 9, 0),
    gsSP2Triangles(1, 12, 4, 0, 1, 0, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_006250[] = {
    gsSPDisplayList(stone_tower_room_0DL_000C10),
    gsSPDisplayList(stone_tower_room_0DL_001960),
    gsSPDisplayList(stone_tower_room_0DL_001D48),
    gsSPDisplayList(stone_tower_room_0DL_002180),
    gsSPDisplayList(stone_tower_room_0DL_0024A0),
    gsSPDisplayList(stone_tower_room_0DL_002910),
    gsSPDisplayList(stone_tower_room_0DL_002C30),
    gsSPDisplayList(stone_tower_room_0DL_002F40),
    gsSPDisplayList(stone_tower_room_0DL_003178),
    gsSPDisplayList(stone_tower_room_0DL_003450),
    gsSPDisplayList(stone_tower_room_0DL_003688),
    gsSPDisplayList(stone_tower_room_0DL_0038E8),
    gsSPDisplayList(stone_tower_room_0DL_003BE8),
    gsSPDisplayList(stone_tower_room_0DL_003E78),
    gsSPDisplayList(stone_tower_room_0DL_004160),
    gsSPDisplayList(stone_tower_room_0DL_004380),
    gsSPDisplayList(stone_tower_room_0DL_004678),
    gsSPDisplayList(stone_tower_room_0DL_0048B8),
    gsSPDisplayList(stone_tower_room_0DL_004AE8),
    gsSPDisplayList(stone_tower_room_0DL_004D10),
    gsSPDisplayList(stone_tower_room_0DL_004FD8),
    gsSPDisplayList(stone_tower_room_0DL_005488),
    gsSPDisplayList(stone_tower_room_0DL_005A18),
    gsSPDisplayList(stone_tower_room_0DL_005D20),
    gsSPDisplayList(stone_tower_room_0DL_005F40),
    gsSPDisplayList(stone_tower_room_0DL_006160),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_006538[] = {
    gsSPVertex(&stone_tower_room_0Vtx_006278[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_sceneTLUT_0142C0),
    gsDPLoadTextureBlock_4b(stone_tower_sceneTex_0131A0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_006278, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006278[30], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 1, 5, 4, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_006D48[] = {
    gsSPVertex(&stone_tower_room_0Vtx_006658[103], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_sceneTLUT_0142A0),
    gsDPLoadTextureBlock_4b(stone_tower_sceneTex_0129A0, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_006658, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(7, 12, 10, 0, 11, 13, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 18, 21, 0, 22, 21, 23, 0),
    gsSP2Triangles(20, 24, 21, 0, 24, 23, 21, 0),
    gsSP2Triangles(22, 25, 18, 0, 25, 19, 18, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006658[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 0, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(6, 10, 13, 0, 6, 13, 7, 0),
    gsSP2Triangles(12, 14, 13, 0, 14, 7, 13, 0),
    gsSP2Triangles(6, 15, 10, 0, 15, 11, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(17, 20, 23, 0, 17, 23, 19, 0),
    gsSP2Triangles(22, 24, 23, 0, 24, 19, 23, 0),
    gsSP2Triangles(17, 25, 26, 0, 25, 21, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006658[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(10, 14, 11, 0, 14, 13, 11, 0),
    gsSP2Triangles(12, 15, 8, 0, 15, 9, 8, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(18, 22, 19, 0, 22, 21, 19, 0),
    gsSP2Triangles(20, 23, 16, 0, 23, 17, 16, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(24, 28, 27, 0, 27, 29, 25, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006658[91], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 5, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 8, 5, 0),
    gsSP2Triangles(10, 11, 8, 0, 11, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_007918[] = {
    gsSPVertex(&stone_tower_room_0Vtx_006F68[147], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0065A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_sceneTex_0065A0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 31, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_006F68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006F68[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006F68[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006F68[95], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_006F68[125], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 19, 21, 20, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_007DF0[] = {
    gsSPVertex(&stone_tower_room_0Vtx_007B40[35], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_011920, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 166, 146, 117, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_007B40, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 7, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_007B40[32], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_0089C0[] = {
    gsSPVertex(&stone_tower_room_0Vtx_007EE0[166], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00D520, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_sceneTex_00ED20, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_007EE0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 9, 15, 0),
    gsSP2Triangles(14, 13, 16, 0, 16, 13, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSPVertex(&stone_tower_room_0Vtx_007EE0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_007EE0[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_007EE0[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 8, 0),
    gsSP2Triangles(11, 8, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&stone_tower_room_0Vtx_007EE0[123], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP2Triangles(27, 24, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_007EE0[155], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_008C08[] = {
    gsSPDisplayList(stone_tower_room_0DL_006538),
    gsSPDisplayList(stone_tower_room_0DL_006D48),
    gsSPDisplayList(stone_tower_room_0DL_007918),
    gsSPDisplayList(stone_tower_room_0DL_007DF0),
    gsSPDisplayList(stone_tower_room_0DL_0089C0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_008DB8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_008C38[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_010920, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_sceneTex_011120, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_008C38, 16, 0),
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

Gfx stone_tower_room_0DL_008FF8[] = {
    gsSPVertex(&stone_tower_room_0Vtx_008ED8[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 229),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(stone_tower_sceneTex_010520, G_IM_FMT_IA, 32, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP,    5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_sceneTex_011120, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_008ED8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 3, 2, 0),
    gsSP2Triangles(5, 2, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(7, 0, 4, 0, 7, 4, 8, 0),
    gsSP2Triangles(4, 3, 9, 0, 3, 5, 9, 0),
    gsSP2Triangles(8, 4, 9, 0, 6, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_00A9A0[] = {
    gsSPVertex(&stone_tower_room_0Vtx_009120[384], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0055A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(stone_tower_sceneTex_005DA0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_009120, 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_009120[32], 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_009120[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[96], 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_009120[128], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 10, 8, 11, 0),
    gsSP2Triangles(12, 13, 10, 0, 12, 10, 11, 0),
    gsSP2Triangles(14, 4, 5, 0, 14, 5, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 18, 0),
    gsSP2Triangles(17, 16, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 12, 24, 13, 0),
    gsSP2Triangles(12, 25, 26, 0, 12, 26, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[159], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(4, 7, 5, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 6, 0, 13, 10, 6, 0),
    gsSP2Triangles(13, 14, 10, 0, 5, 13, 6, 0),
    gsSP2Triangles(11, 15, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 22, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 21, 0),
    gsSP2Triangles(16, 19, 25, 0, 16, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(31, 27, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[191], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 27, 24, 0, 28, 10, 12, 0),
    gsSP2Triangles(29, 28, 12, 0, 29, 12, 30, 0),
    gsSP1Triangle(12, 31, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[223], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 6, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 15, 18, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 27, 29, 0, 28, 30, 27, 0),
    gsSP2Triangles(30, 25, 27, 0, 28, 31, 30, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[255], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 10, 0),
    gsSP2Triangles(11, 8, 10, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 13, 8, 0, 11, 14, 13, 0),
    gsSP2Triangles(15, 16, 7, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 27, 0),
    gsSP2Triangles(22, 27, 28, 0, 27, 29, 28, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[285], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(15, 16, 13, 0, 15, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 15, 20, 17, 0),
    gsSP2Triangles(21, 22, 17, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 21, 25, 23, 0),
    gsSP2Triangles(25, 26, 23, 0, 20, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[317], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 26, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 23, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[349], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 3, 6, 0, 5, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 12, 4, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 1, 0),
    gsSP2Triangles(18, 6, 1, 0, 18, 19, 6, 0),
    gsSP2Triangles(19, 5, 6, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 22, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_009120[381], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_00AFC0[] = {
    gsSPVertex(&stone_tower_room_0Vtx_00AEC0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0141A0, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_00AEC0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 5, 0, 3, 5, 4, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSP2Triangles(6, 5, 2, 0, 6, 2, 1, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_00B250[] = {
    gsSPVertex(&stone_tower_room_0Vtx_00B080[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_0141A0, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_00B080, 21, 0),
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

Gfx stone_tower_room_0DL_00B338[] = {
    gsSPDisplayList(stone_tower_room_0DL_00A9A0),
    gsSPDisplayList(stone_tower_room_0DL_00AFC0),
    gsSPDisplayList(stone_tower_room_0DL_00B250),
    gsSPEndDisplayList(),
};

Gfx stone_tower_room_0DL_00BC08[] = {
    gsSPVertex(&stone_tower_room_0Vtx_00B358[131], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_sceneTex_00F520, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 3),
    gsDPLoadMultiBlock(stone_tower_sceneTex_00DD20, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_room_0Vtx_00B358, 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_00B358[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 13, 0, 14, 18, 15, 0),
    gsSP2Triangles(19, 20, 12, 0, 19, 12, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 19, 11, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&stone_tower_room_0Vtx_00B358[64], 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_00B358[94], 32, 0),
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
    gsSPVertex(&stone_tower_room_0Vtx_00B358[125], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};
