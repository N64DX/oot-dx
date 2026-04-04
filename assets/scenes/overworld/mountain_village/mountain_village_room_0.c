#include "mountain_village_scene.h"
#include "mountain_village_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd mountain_village_room_0[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(mountain_village_room_0AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&mountain_village_room_0RoomShapeCullable_0003D0),
    SCENE_CMD_OBJECT_LIST(11, mountain_village_room_0ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(39, mountain_village_room_0ActorEntry_000074),
    SCENE_CMD_END(),
};

SceneCmd* mountain_village_room_0AlternateHeaders[] = {
    NULL,
    mountain_village_room_0Set_timeskip,
    NULL,
};

s16 mountain_village_room_0ObjectList_00004C[] = {
    OBJECT_HORSE,
    OBJECT_SYOKUDAI,
    OBJECT_MKK,
    OBJECT_CROW,
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_BOX,
    OBJECT_BOMBIWA,
    OBJECT_TSUBO,
    OBJECT_KA,
    OBJECT_UMAJUMP,

    /*OBJECT_SYOKUDAI,
    OBJECT_FLOWERPOT,
    OBJECT_F53_OBJ,
    OBJECT_FR,
    OBJECT_GOROIWA,
    OBJECT_SEK,
    OBJECT_LODMOON,
    OBJECT_MKK,
    OBJECT_CROW,
    OBJECT_BEE,
    OBJECT_COMB,
    OBJECT_KITAN,
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_BOX,
    OBJECT_BOMBIWA,
    OBJECT_TSUBO,
    OBJECT_KA,*/
};

ActorEntry mountain_village_room_0ActorEntry_000074[] = {
    { ACTOR_OBJ_HAMISHI,    {   146,  -30,   831 }, {    0,      0,  0 }, 0x0000 }, // Switch: 00
    { ACTOR_OBJ_HAMISHI,    {   147,  -30,   770 }, {    0,      0,  0 }, 0x0001 }, // Switch: 01
    { ACTOR_OBJ_HAMISHI,    {    79,  -30,   805 }, {    0,      0,  0 }, 0x0002 }, // Switch: 02
    { ACTOR_OBJ_HAMISHI,    {  2100,   13,   780 }, {    0,      0,  0 }, 0x0003 }, // Switch: 03
    { ACTOR_OBJ_HAMISHI,    {  2070,   14,   860 }, {    0,      0,  0 }, 0x0004 }, // Switch: 04
    { ACTOR_OBJ_HAMISHI,    {  2050,   14,   940 }, {    0,      0,  0 }, 0x0005 }, // Switch: 05
    { ACTOR_OBJ_HAMISHI,    {  2020,   14,  1020 }, {    0,      0,  0 }, 0x0006 }, // Switch: 06
    { ACTOR_EN_KAKASI2,     {   510,  363,   900 }, {    0,      0, 14 }, 0x053E }, // Switch: 3E
    { ACTOR_EN_CROW,        {   311,  943,   272 }, {    0,      0,  0 }, 0x0000 },
    { ACTOR_OBJ_SYOKUDAI,   {  -818,    8,  -170 }, {    0,   0x15,  0 }, 0x243F }, // Switch: 3F
    { ACTOR_EN_ISHI,        {   244, 1408, -1322 }, {    0,      0,  0 }, 0x00A0 },
    { ACTOR_EN_ISHI,        {   514, 1408, -1213 }, {    0,      0,  0 }, 0x0040 },
    { ACTOR_EN_ISHI,        {   654,  -17,   850 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   686,  -14,   808 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   656,  -20,   936 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   705,  -18,   973 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   626,  -20,   892 }, {    0,      0,  0 }, 0x01F2 },
    { ACTOR_EN_KANBAN,      {   -46,  -25,   723 }, {    0, 0xC000,  0 }, 0x0050 }, // Signpost to Blacksmith 
    { ACTOR_EN_KANBAN,      {  -421,    8,   336 }, {    0, 0x0A8C,  0 }, 0x0051 }, // Signpost near bridge
    { ACTOR_EN_KANBAN,      {  1761,   15,   986 }, {    0, 0x7A24,  0 }, 0x0052 }, // Signpost towards Goron Caves
    { ACTOR_EN_KANBAN,      { -1064,    8,   -79 }, {    0, 0x32C8,  0 }, 0x0053 }, // Signpost towards Forbidden Woods
    { ACTOR_EN_KANBAN,      {   345,    8,  -305 }, {    0,      0,  0 }, 0x0054 }, // Signpost to across the water 
    { ACTOR_EN_KUSA,        {  -279,  -66,  1379 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {  -203,  -47,  1155 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {  -545,   -8,  1069 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {   781,  -28,  1139 }, {    0,      0,  0 }, 0x1F00 },
    { ACTOR_OBJ_MURE2,      {   267,  -29,   402 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_OBJ_MURE2,      {    86,   -9,   145 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_OBJ_MURE2,      {   365,  -18,   165 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_OBJ_MURE,       {   292,   50,   230 }, {    0,      0,  0 }, 0x4324 },
    { ACTOR_OBJ_MURE,       {  -319,    0,  1279 }, {    0,      0,  0 }, 0x5324 },
    { ACTOR_OBJ_MURE,       {   327,  -30,  -637 }, {    0,      0,  0 }, 0x3322 },
    { ACTOR_OBJ_MURE,       {  -971,  -30,   457 }, {    0,      0,  0 }, 0x6322 },
    { ACTOR_OBJ_COMB,       {  1025,  271,   695 }, {    0, 0xFE0C,  0 }, 0x0081 },
    { ACTOR_EN_ITEM00,      {    79,  -30,   807 }, {    0,      0,  0 }, 0x0902 }, // Collect: 09
    { ACTOR_OBJ_TSUBO,      {   510,  363,   700 }, {    0,      0,  0 }, 0x3913 }, // Collect: 1C
    { ACTOR_EN_GS,          {  -805,    4,  1346 }, {    0, 0x63F0,  0 }, 0xFF23 },
    { ACTOR_EN_RIVER_SOUND, { -1217,   16,   450 }, {    0,      0,  0 }, 0x0003 },
    { ACTOR_BG_UMAJUMP,     {  1940,   13,   850 }, {    0, 0x32C8,  0 }, 0xFFFE },
};

RoomShapeCullable mountain_village_room_0RoomShapeCullable_0003D0 = { 
    2, 36,
    mountain_village_room_0RoomShapeCullableEntry_0003DC,
    mountain_village_room_0RoomShapeCullableEntry_0003DC +
    ARRAY_COUNTU(mountain_village_room_0RoomShapeCullableEntry_0003DC)
};

RoomShapeCullableEntry mountain_village_room_0RoomShapeCullableEntry_0003DC[36] = {
    { {  -1030,    -54,    727 },    566, mountain_village_room_0DL_0035E0, NULL },
    { {    303,   -100,   -334 },   1334, mountain_village_room_0DL_003D68, NULL },
    { {    455,    718,  -1095 },    754, mountain_village_room_0DL_00E9D0, NULL },
    { {    455,    718,  -1095 },    754, mountain_village_room_0DL_00E4B8, NULL },
    { {    403,    948,    811 },    260, mountain_village_room_0DL_00CF88, mountain_village_room_0DL_01BBF0 },
    { {   -873,     -5,    913 },    116, mountain_village_room_0DL_00CDA0, NULL },
    { {   -593,     36,    289 },    122, mountain_village_room_0DL_006A90, NULL },
    { {    465,   1503,  -1562 },    164, mountain_village_room_0DL_007380, NULL },
    { {   1190,    808,   -587 },   1156, mountain_village_room_0DL_0075F0, NULL },
    { {    400,    814,   -581 },   1612, mountain_village_room_0DL_00CA08, NULL },
    { {    407,    479,    800 },    146, mountain_village_room_0DL_00C810, NULL },
    { {    751,   1408,  -1535 },    546, mountain_village_room_0DL_00EAE0, NULL },
    { {    -81,    -32,    727 },    834, mountain_village_room_0DL_00DFC8, NULL },
    { {    118,    227,    800 },    290, mountain_village_room_0DL_00A900, NULL },
    { {    381,    205,    800 },    282, mountain_village_room_0DL_00B3C0, NULL },
    { {     43,     -7,     86 },   1590, NULL, mountain_village_room_0DL_01B548 },
    { {   1355,     30,   1240 },   4148, mountain_village_room_0DL_0010D8, NULL },
    { {    541,    -67,    846 },   1530, mountain_village_room_0DL_0019D0, NULL },
    { {    835,    -73,   1320 },   1368, mountain_village_room_0DL_00EC88, NULL },
    { {    341,    -51,    917 },   1202, mountain_village_room_0DL_00EF90, NULL },
    { {    578,    718,  -1491 },    962, mountain_village_room_0DL_001DE0, NULL },
    { {   1249,    883,   1027 },   3946, mountain_village_room_0DL_002E40, NULL },
    { {     56,   1263,    259 },   2452, mountain_village_room_0DL_0046D8, NULL },
    { {    169,    892,    399 },   2280, mountain_village_room_0DL_004D30, NULL },
    { {   1046,    788,   -928 },   1444, mountain_village_room_0DL_005198, NULL },
    { {    -43,     16,    802 },    110, mountain_village_room_0DL_005E00, NULL },
    { {   1065,    607,    695 },    610, mountain_village_room_0DL_007E30, NULL },
    { {   -453,    475,     39 },    500, mountain_village_room_0DL_008578, NULL },
    { {   -669,    432,   1229 },    466, mountain_village_room_0DL_008C88, NULL },
    { {    357,    434,   1261 },    500, mountain_village_room_0DL_0093F8, NULL },
    { {    935,    414,   -133 },    438, mountain_village_room_0DL_009B40, NULL },
    { {    317,    281,    800 },    202, mountain_village_room_0DL_009C58, NULL },
    { {  -1376,    443,    413 },    512, NULL, mountain_village_room_0DL_01B830 },
    { {    174,    323,    800 },    238, mountain_village_room_0DL_00B650, NULL },
    { {    393,    339,    800 },    454, mountain_village_room_0DL_00C108, NULL },
    { {    394,    259,    800 },    286, mountain_village_room_0DL_00C5A8, NULL },
};

SceneCmd mountain_village_room_0Set_timeskip[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&mountain_village_room_0RoomShapeCullable_0003D0),
    SCENE_CMD_OBJECT_LIST(11, mountain_village_room_0ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(40, mountain_village_room_0ActorEntry_timeskip),
    SCENE_CMD_END(),
};

ActorEntry mountain_village_room_0ActorEntry_timeskip[] = {
    { ACTOR_OBJ_HAMISHI,    {   146,  -30,   831 }, {    0,      0,  0 }, 0x0000 }, // Switch: 00
    { ACTOR_OBJ_HAMISHI,    {   147,  -30,   770 }, {    0,      0,  0 }, 0x0001 }, // Switch: 01
    { ACTOR_OBJ_HAMISHI,    {    79,  -30,   805 }, {    0,      0,  0 }, 0x0002 }, // Switch: 02
    { ACTOR_OBJ_HAMISHI,    {  2100,   13,   780 }, {    0,      0,  0 }, 0x0003 }, // Switch: 03
    { ACTOR_OBJ_HAMISHI,    {  2070,   14,   860 }, {    0,      0,  0 }, 0x0004 }, // Switch: 04
    { ACTOR_OBJ_HAMISHI,    {  2050,   14,   940 }, {    0,      0,  0 }, 0x0005 }, // Switch: 05
    { ACTOR_OBJ_HAMISHI,    {  2020,   14,  1020 }, {    0,      0,  0 }, 0x0006 }, // Switch: 06
    { ACTOR_EN_KAKASI2,     {   510,  363,   900 }, {    0,      0, 14 }, 0x053E }, // Switch: 3E
    { ACTOR_EN_CROW,        {   311,  943,   272 }, {    0,      0,  0 }, 0x0000 },
    { ACTOR_OBJ_SYOKUDAI,   {  -818,    8,  -170 }, {    0,   0x15,  0 }, 0x243F }, // Switch: 3F
    { ACTOR_EN_ISHI,        {   244, 1408, -1322 }, {    0,      0,  0 }, 0x00A0 },
    { ACTOR_EN_ISHI,        {   514, 1408, -1213 }, {    0,      0,  0 }, 0x0040 },
    { ACTOR_EN_ISHI,        {   654,  -17,   850 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   686,  -14,   808 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   656,  -20,   936 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   705,  -18,   973 }, {    0,      0,  0 }, 0x01F0 },
    { ACTOR_EN_ISHI,        {   626,  -20,   892 }, {    0,      0,  0 }, 0x01F2 },
    { ACTOR_EN_KANBAN,      {   -46,  -25,   723 }, {    0, 0xC000,  0 }, 0x0050 }, // Signpost to Blacksmith 
    { ACTOR_EN_KANBAN,      {  -421,    8,   336 }, {    0, 0x0A8C,  0 }, 0x0051 }, // Signpost near bridge
    { ACTOR_EN_KANBAN,      {  1761,   15,   986 }, {    0, 0x7A24,  0 }, 0x0052 }, // Signpost towards Goron Caves
    { ACTOR_EN_KANBAN,      { -1064,    8,   -79 }, {    0, 0x32C8,  0 }, 0x0053 }, // Signpost towards Forbidden Woods
    { ACTOR_EN_KANBAN,      {   345,    8,  -305 }, {    0,      0,  0 }, 0x0054 }, // Signpost to across the water 
    { ACTOR_EN_KUSA,        {  -279,  -66,  1379 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {  -203,  -47,  1155 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {  -545,   -8,  1069 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_EN_KUSA,        {   781,  -28,  1139 }, {    0,      0,  0 }, 0x1F00 },
    { ACTOR_OBJ_MURE2,      {   267,  -29,   402 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_OBJ_MURE2,      {    86,   -9,   145 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_OBJ_MURE2,      {   365,  -18,   165 }, {    0,      0,  0 }, 0x0200 },
    { ACTOR_OBJ_MURE,       {   292,   50,   230 }, {    0,      0,  0 }, 0x4324 },
    { ACTOR_OBJ_MURE,       {  -319,    0,  1279 }, {    0,      0,  0 }, 0x5324 },
    { ACTOR_OBJ_MURE,       {   327,  -30,  -637 }, {    0,      0,  0 }, 0x3322 },
    { ACTOR_OBJ_MURE,       {  -971,  -30,   457 }, {    0,      0,  0 }, 0x6322 },
    { ACTOR_OBJ_COMB,       {  1025,  271,   695 }, {    0, 0xFE0C,  0 }, 0x0081 },
    { ACTOR_EN_ITEM00,      {    79,  -30,   807 }, {    0,      0,  0 }, 0x0902 }, // Collect: 09
    { ACTOR_OBJ_TSUBO,      {   510,  363,   700 }, {    0,      0,  0 }, 0x3913 }, // Collect: 1C
    { ACTOR_EN_GS,          {  -805,    4,  1346 }, {    0, 0x63F0,  0 }, 0xFF23 },
    { ACTOR_EN_RIVER_SOUND, { -1217,   16,   450 }, {    0,      0,  0 }, 0x0003 },
    { ACTOR_BG_UMAJUMP,     {  1940,   13,   850 }, {    0, 0x32C8,  0 }, 0xFFFE },
    { ACTOR_EN_BOX,         { -1425,    8,   376 }, { 0x3E, 0xADF8,  0 }, 0x403F }, // Chest: 00, Switch: 3F
 
  //{ ACTOR_EN_BEE,         {   219,   13,    71 }, {    0,      0,  0 }, 0x0000 },
  //{ ACTOR_EN_BEE,         {  -471,  -10,  1228 }, {    0,      0,  0 }, 0x0000 },
  //{ ACTOR_OBJ_FLOWERPOT   {    87,   71,   720 }, {    0,   0xB4,  0 }, 0x0C0A },
  //{ ACTOR_OBJ_FLOWERPOT,  {    87,   71,   880 }, {    0,      0,  0 }, 0x0D0A },
  //{ ACTOR_EN_MINIFROG,    {  -805,    1,   917 }, {    0,   0x4B,  0 }, 0x00F0 },
  //{ ACTOR_EN_MINIFROG,    {  -844,    1,   836 }, {    0,   0x52,  0 }, 0x00F1 },
  //{ ACTOR_EN_MINIFROG,    {  -844,    1,   996 }, {    0,   0x60,  0 }, 0x00F2 },
  //{ ACTOR_EN_MINIFROG,    {  -884,    1,   915 }, {    0,   0x52,  0 }, 0x00F3 },
  //{ ACTOR_EN_MINIFROG,    {  -933,    1,   964 }, {    0,   0x63,  0 }, 0x00F4 },
  //{ ACTOR_OBJ_SNOWBALL2,  {  -881,    8,    84 }, {    0,      0,  0 }, 0x250A },
  //{ ACTOR_OBJ_SNOWBALL2,  {  -470,    8,  -224 }, {    0,      0,  0 }, 0x2915 },
  //{ ACTOR_OBJ_SNOWBALL2,  {  -384,    8,  -259 }, {    0,      0,  0 }, 0x2A1F },
  //{ ACTOR_OBJ_SNOWBALL2,  {  -417,    8,   -51 }, {    0,      0,  0 }, 0x2B10 },
  //{ ACTOR_OBJ_SNOWBALL2,  {  -751,    8,  -197 }, {    0,      0,  0 }, 0x2C0F },
};

s32 mountain_village_room_0_terminatorMaybe_00061C = { 0x01000000 };

Mtx mountain_village_room_0DL_00CE90Mtx_000000 = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , 26411716   , 53149697   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Mtx mountain_village_room_0DL_01BAF0Mtx_000000 = { 
    65536      , 0          , 1          , 0          , 
    0          , 65536      , 26411716   , 53149697   , 
    0          , 0          , 0          , 0          , 
    0          , 0          , 0          , 0          , 
};

Vtx mountain_village_room_0Vtx_000A78[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_000A78.vtx.inc"
};

Vtx mountain_village_room_0Vtx_0012A0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_0012A0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_001BE0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_001BE0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_001F70[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_001F70.vtx.inc"
};

Vtx mountain_village_room_0Vtx_0031F8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_0031F8.vtx.inc"
};

Vtx mountain_village_room_0Vtx_0035F0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_0035F0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_003D78[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_003D78.vtx.inc"
};

Vtx mountain_village_room_0Vtx_004970[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_004970.vtx.inc"
};

Vtx mountain_village_room_0Vtx_004E68[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_004E68.vtx.inc"
};

Vtx mountain_village_room_0Vtx_0052C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_0052C8.vtx.inc"
};

Vtx mountain_village_room_0Vtx_005E10[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_005E10.vtx.inc"
};

Vtx mountain_village_room_0Vtx_006ED0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_006ED0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_007390[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_007390.vtx.inc"
};

Vtx mountain_village_room_0Vtx_0076C0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_0076C0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_007960[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_007960.vtx.inc"
};

Vtx mountain_village_room_0Vtx_007E48[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_007E48.vtx.inc"
};

Vtx mountain_village_room_0Vtx_0080B8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_0080B8.vtx.inc"
};

Vtx mountain_village_room_0Vtx_008590[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_008590.vtx.inc"
};

Vtx mountain_village_room_0Vtx_008830[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_008830.vtx.inc"
};

Vtx mountain_village_room_0Vtx_008CA0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_008CA0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_008F40[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_008F40.vtx.inc"
};

Vtx mountain_village_room_0Vtx_009410[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_009410.vtx.inc"
};

Vtx mountain_village_room_0Vtx_009680[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_009680.vtx.inc"
};

Vtx mountain_village_room_0Vtx_009B58[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_009B58.vtx.inc"
};

Vtx mountain_village_room_0Vtx_009D30[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_009D30.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00AFA0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00AFA0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00B510[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00B510.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00B738[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00B738.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00C348[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00C348.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00C6B0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00C6B0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00C908[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00C908.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00CAC0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00CAC0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00CDB0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00CDB0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00CF98[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00CF98.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00D7B0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00D7B0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00DFE0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00DFE0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00E4C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00E4C8.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00E9E0[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00E9E0.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00EB88[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00EB88.vtx.inc"
};

Vtx mountain_village_room_0Vtx_00ED30[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_00ED30.vtx.inc"
};

Vtx mountain_village_room_0Vtx_01B348[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_01B348.vtx.inc"
};

Vtx mountain_village_room_0Vtx_01B670[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_01B670.vtx.inc"
};

Vtx mountain_village_room_0Vtx_01BA00[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Vtx_01BA00.vtx.inc"
};

u64 mountain_village_room_0Tex_00F1C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_00F1C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_00F9C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_00F9C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0101C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0101C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0109C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0109C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0111C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0111C8.ia8.inc.c"
};

u64 mountain_village_room_0Tex_0119C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0119C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0121C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0121C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0129C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0129C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0131C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0131C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0139C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0139C8.i4.inc.c"
};

u64 mountain_village_room_0Tex_0141C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0141C8.i4.inc.c"
};

u64 mountain_village_room_0Tex_0149C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0149C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0151C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0151C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0153C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0153C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0157C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0157C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_015FC8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_015FC8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0161C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0161C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0169C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0169C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0171C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0171C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0175C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0175C8.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_0176C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0176C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_017EC8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_017EC8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0182C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0182C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_018AC8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_018AC8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0192C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0192C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0194C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0194C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_0198C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_0198C8.ia8.inc.c"
};

u64 mountain_village_room_0Tex_01A0C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01A0C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_01A8C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01A8C8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_01ACC8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01ACC8.ci8.inc.c"
};

u64 mountain_village_room_0Tex_01B0C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01B0C8.ia16.inc.c"
};

u64 mountain_village_room_0Tex_01BC88[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01BC88.rgba16.inc.c"
};

u64 mountain_village_room_0Tex_01C488[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01C488.i8.inc.c"
};

u64 mountain_village_room_0Tex_01D488[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_0Tex_01D488.i8.inc.c"
};

Gfx mountain_village_room_0DL_0010D8[] = {
    gsSPVertex(&mountain_village_room_0Vtx_000A78[94], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xAF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(mountain_village_scene04Tex_004000, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(mountain_village_scene04Tex_004200, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_000A78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 17, 19, 0),
    gsSP2Triangles(22, 23, 17, 0, 22, 17, 21, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 26, 20, 0),
    gsSP2Triangles(25, 20, 27, 0, 28, 29, 25, 0),
    gsSP2Triangles(28, 25, 27, 0, 30, 29, 28, 0),
    gsSP1Triangle(30, 31, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_000A78[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 5, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 10, 12, 0),
    gsSP2Triangles(11, 12, 13, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 23, 0),
    gsSP2Triangles(19, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_000A78[63], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 8, 9, 6, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(11, 15, 16, 0, 16, 15, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 19, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0019D0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_0012A0[107], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x8C, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0109C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_0101C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_0012A0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 12, 15, 0, 22, 12, 21, 0),
    gsSP2Triangles(23, 21, 24, 0, 22, 21, 23, 0),
    gsSP2Triangles(21, 15, 25, 0, 15, 16, 25, 0),
    gsSP2Triangles(26, 24, 16, 0, 26, 16, 18, 0),
    gsSP2Triangles(23, 24, 26, 0, 27, 23, 26, 0),
    gsSP2Triangles(26, 18, 28, 0, 18, 29, 28, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0012A0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 5, 0, 7, 2, 8, 0),
    gsSP2Triangles(2, 1, 9, 0, 2, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 9, 13, 8, 0),
    gsSP2Triangles(14, 7, 8, 0, 15, 16, 14, 0),
    gsSP2Triangles(11, 17, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(17, 19, 28, 0, 17, 28, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0012A0[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 6, 11, 0),
    gsSP2Triangles(12, 7, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 6, 16, 0, 5, 17, 6, 0),
    gsSP2Triangles(5, 12, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(8, 22, 21, 0, 8, 23, 9, 0),
    gsSP2Triangles(19, 6, 9, 0, 8, 24, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(29, 30, 26, 0, 29, 26, 25, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0012A0[92], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 12, 9, 0),
    gsSP2Triangles(8, 13, 12, 0, 8, 14, 13, 0),
    gsSP1Triangle(8, 11, 14, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_001DE0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_001BE0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_sceneTex_006A60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_001BE0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_sceneTex_006A60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&mountain_village_room_0Vtx_001BE0[4], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 10, 0),
    gsSP2Triangles(7, 0, 8, 0, 8, 0, 2, 0),
    gsSP2Triangles(8, 2, 5, 0, 11, 8, 5, 0),
    gsSP2Triangles(8, 12, 13, 0, 8, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 18, 16, 0, 17, 19, 18, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_002E40[] = {
    gsSPVertex(&mountain_village_room_0Vtx_001F70[229], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 96, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0119C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(mountain_village_scene04Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPSetTileSize(1, 0x0028, 0, 0x0124, 0x00FC),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_001F70, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 8, 0),
    gsSP2Triangles(11, 8, 7, 0, 13, 14, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 20, 19, 0),
    gsSP2Triangles(23, 21, 16, 0, 23, 16, 15, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 6, 0),
    gsSP2Triangles(0, 2, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 7, 9, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 12, 14, 16, 0),
    gsSP2Triangles(14, 13, 15, 0, 13, 14, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 21, 0),
    gsSP2Triangles(17, 21, 18, 0, 18, 21, 22, 0),
    gsSP2Triangles(19, 18, 22, 0, 19, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 29, 30, 24, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 4, 9, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 11, 18, 19, 0),
    gsSP2Triangles(18, 11, 13, 0, 20, 11, 19, 0),
    gsSP2Triangles(12, 11, 21, 0, 11, 22, 21, 0),
    gsSP2Triangles(11, 1, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(17, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 21, 29, 0, 30, 28, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[95], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(5, 10, 6, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 18, 17, 0),
    gsSP2Triangles(21, 20, 17, 0, 21, 17, 22, 0),
    gsSP2Triangles(23, 21, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 25, 18, 27, 0),
    gsSP2Triangles(24, 26, 28, 0, 28, 26, 21, 0),
    gsSP2Triangles(28, 21, 23, 0, 18, 20, 27, 0),
    gsSP2Triangles(26, 27, 20, 0, 26, 20, 21, 0),
    gsSP1Triangle(29, 30, 18, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 3, 0),
    gsSP2Triangles(7, 8, 3, 0, 7, 3, 1, 0),
    gsSP2Triangles(11, 5, 12, 0, 5, 9, 12, 0),
    gsSP2Triangles(13, 9, 8, 0, 9, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 25, 19, 0, 24, 19, 18, 0),
    gsSP2Triangles(23, 19, 25, 0, 26, 27, 25, 0),
    gsSP1Triangle(28, 27, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[156], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(3, 8, 7, 0, 3, 7, 9, 0),
    gsSP2Triangles(4, 3, 9, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 10, 0, 3, 1, 10, 0),
    gsSP2Triangles(8, 3, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(13, 19, 21, 0, 13, 14, 19, 0),
    gsSP2Triangles(18, 16, 22, 0, 23, 19, 14, 0),
    gsSP2Triangles(20, 19, 24, 0, 20, 24, 25, 0),
    gsSP2Triangles(19, 23, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(25, 26, 27, 0, 24, 23, 26, 0),
    gsSP2Triangles(23, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[188], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 7, 0, 6, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(6, 5, 10, 0, 7, 6, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 11, 13, 0),
    gsSP2Triangles(13, 15, 14, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 12, 11, 0, 20, 17, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 24, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 29, 28, 27, 0),
    gsSP2Triangles(29, 27, 30, 0, 31, 29, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_001F70[220], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0035E0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_0031F8[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x50, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_00F1C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_0031F8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 5, 0),
    gsSP2Triangles(3, 10, 2, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 15, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 22, 21, 23, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 27, 0, 18, 17, 26, 0),
    gsSP2Triangles(18, 26, 25, 0, 30, 31, 20, 0),
    gsSP1Triangle(30, 20, 19, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_003D68[] = {
    gsSPVertex(&mountain_village_room_0Vtx_0035F0[81], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x50, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_00F1C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_0035F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 23, 22, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 21, 24, 0),
    gsSP1Triangle(29, 24, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0035F0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 18, 16, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 22, 0),
    gsSP2Triangles(17, 22, 23, 0, 17, 23, 18, 0),
    gsSP2Triangles(14, 24, 15, 0, 24, 25, 15, 0),
    gsSP2Triangles(24, 26, 25, 0, 27, 12, 11, 0),
    gsSP2Triangles(27, 11, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0035F0[63], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 2, 11, 12, 0),
    gsSP2Triangles(2, 12, 13, 0, 14, 15, 7, 0),
    gsSP2Triangles(14, 7, 9, 0, 12, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0046D8[] = {
    gsSPVertex(&mountain_village_room_0Vtx_003D78[142], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x50, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 1),
    gsDPLoadMultiBlock_4b(mountain_village_scene04Tex_003800, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_003D78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(23, 22, 24, 0, 24, 22, 21, 0),
    gsSP2Triangles(24, 21, 25, 0, 26, 27, 24, 0),
    gsSP2Triangles(26, 24, 25, 0, 27, 28, 24, 0),
    gsSP2Triangles(28, 23, 24, 0, 28, 29, 23, 0),
    gsSP2Triangles(30, 29, 28, 0, 31, 30, 28, 0),
    gsSPVertex(&mountain_village_room_0Vtx_003D78[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 3, 0, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(8, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 13, 0, 19, 20, 13, 0),
    gsSP2Triangles(19, 10, 20, 0, 21, 7, 10, 0),
    gsSP2Triangles(21, 10, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 24, 0, 25, 11, 8, 0),
    gsSP2Triangles(25, 8, 24, 0, 8, 7, 24, 0),
    gsSP2Triangles(24, 7, 21, 0, 22, 24, 21, 0),
    gsSP2Triangles(22, 21, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 16, 15, 0),
    gsSPVertex(&mountain_village_room_0Vtx_003D78[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(3, 7, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(7, 12, 8, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 15, 10, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 16, 14, 0),
    gsSP2Triangles(17, 14, 13, 0, 15, 18, 10, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 19, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&mountain_village_room_0Vtx_003D78[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 8, 13, 0, 12, 9, 8, 0),
    gsSP2Triangles(8, 14, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 13, 0, 17, 18, 12, 0),
    gsSP2Triangles(17, 12, 13, 0, 16, 19, 17, 0),
    gsSP2Triangles(16, 17, 13, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 30, 26, 31, 0),
    gsSP2Triangles(26, 20, 31, 0, 29, 25, 24, 0),
    gsSPVertex(&mountain_village_room_0Vtx_003D78[126], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(6, 11, 7, 0, 11, 10, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_004D30[] = {
    gsSPVertex(&mountain_village_room_0Vtx_004970[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x6E, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_00F9C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock_4b(mountain_village_scene04Tex_003800, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_004970, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 19, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_004970[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 12, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_005198[] = {
    gsSPVertex(&mountain_village_room_0Vtx_004E68[43], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0131C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_MIRROR |  G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(mountain_village_scene04Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_004E68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 3, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_004E68[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_005E00[] = {
    gsSPVertex(&mountain_village_room_0Vtx_0052C8[128], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0192C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_0052C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0052C8[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_0052C8[40], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(10, 12, 13, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 16, 0),
    gsSP2Triangles(21, 22, 19, 0, 23, 24, 21, 0),
    gsSP2Triangles(3, 16, 18, 0, 15, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP2Triangles(19, 16, 3, 0, 21, 19, 3, 0),
    gsSP2Triangles(23, 21, 3, 0, 2, 31, 23, 0),
    gsSP1Triangle(2, 23, 3, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0052C8[72], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(4, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0052C8[103], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 4, 0),
    gsSP2Triangles(23, 24, 20, 0, 23, 20, 4, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_006A90[] = {
    gsSPVertex(&mountain_village_room_0Vtx_005E10[192], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0157C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_005E10, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0161C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[16], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[80], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0169C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[84], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[116], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0192C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[136], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_005E10[160], 32, 0),
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

Gfx mountain_village_room_0DL_007380[] = {
    gsSPVertex(&mountain_village_room_0Vtx_006ED0[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 153, 172, 82, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_006ED0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&mountain_village_room_0Vtx_006ED0[20], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0075F0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_007390[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_007390, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_007E30_1[] = {
    gsSPVertex(&mountain_village_room_0Vtx_0076C0[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_017EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_0076C0, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_007E30_2[] = {
    gsSPVertex(&mountain_village_room_0Vtx_007960[45], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0176C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_007960, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 1, 4, 0),
    gsSP2Triangles(7, 1, 8, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 10, 9, 0),
    gsSP2Triangles(13, 10, 14, 0, 15, 10, 16, 0),
    gsSP2Triangles(16, 10, 17, 0, 17, 10, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 19, 22, 0, 22, 19, 23, 0),
    gsSP2Triangles(24, 19, 25, 0, 26, 19, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 28, 27, 0),
    gsSP1Triangle(31, 28, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_007960[32], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 6, 5, 0, 9, 6, 10, 0),
    gsSP2Triangles(7, 6, 11, 0, 11, 6, 12, 0),
    gsSP1Triangle(12, 6, 9, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_007E30[] = {
    gsSPDisplayList(mountain_village_room_0DL_007E30_1),
    gsSPDisplayList(mountain_village_room_0DL_007E30_2),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_008578_1[] = {
    gsSPVertex(&mountain_village_room_0Vtx_007E48[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_017EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_007E48, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSPEndDisplayList(),
};
    
Gfx mountain_village_room_0DL_008578_2[] = {
    gsSPVertex(&mountain_village_room_0Vtx_0080B8[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0176C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_0080B8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 1, 4, 0),
    gsSP2Triangles(7, 1, 8, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 13, 16, 0, 17, 13, 18, 0),
    gsSP2Triangles(18, 13, 19, 0, 19, 13, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(22, 21, 24, 0, 24, 21, 25, 0),
    gsSP2Triangles(26, 21, 27, 0, 28, 21, 26, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_0080B8[32], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 5, 0, 5, 1, 6, 0),
    gsSP2Triangles(6, 1, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 8, 12, 0),
    gsSP2Triangles(9, 8, 13, 0, 13, 8, 14, 0),
    gsSP1Triangle(14, 8, 11, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_008578[] = {
    gsSPDisplayList(mountain_village_room_0DL_008578_1),
    gsSPDisplayList(mountain_village_room_0DL_008578_2),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_008C88_1[] = {
    gsSPVertex(&mountain_village_room_0Vtx_008590[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_017EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_008590, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_008C88_2[] = {
    gsSPVertex(&mountain_village_room_0Vtx_008830[38], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0176C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_008830, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 1, 4, 0),
    gsSP2Triangles(6, 1, 7, 0, 7, 1, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 9, 13, 0, 14, 9, 15, 0),
    gsSP2Triangles(15, 9, 16, 0, 16, 9, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 18, 17, 0),
    gsSP2Triangles(19, 18, 21, 0, 21, 18, 22, 0),
    gsSP2Triangles(23, 18, 20, 0, 22, 18, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP2Triangles(28, 25, 27, 0, 26, 25, 29, 0),
    gsSP2Triangles(29, 25, 30, 0, 30, 25, 28, 0),
    gsSPVertex(&mountain_village_room_0Vtx_008830[31], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 2, 1, 5, 0),
    gsSP2Triangles(5, 1, 6, 0, 6, 1, 4, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_008C88[] = {
    gsSPDisplayList(mountain_village_room_0DL_008C88_1),
    gsSPDisplayList(mountain_village_room_0DL_008C88_2),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0093F8_1[] = {
    gsSPVertex(&mountain_village_room_0Vtx_008CA0[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_017EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_008CA0, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0093F8_2[] = {
    gsSPVertex(&mountain_village_room_0Vtx_008F40[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0176C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_008F40, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 1, 4, 0),
    gsSP2Triangles(7, 1, 8, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 10, 9, 0),
    gsSP2Triangles(13, 10, 14, 0, 15, 10, 16, 0),
    gsSP2Triangles(16, 10, 17, 0, 17, 10, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 19, 22, 0, 22, 19, 23, 0),
    gsSP2Triangles(24, 19, 21, 0, 25, 19, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 27, 26, 0),
    gsSP2Triangles(30, 27, 29, 0, 28, 27, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_008F40[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 5, 9, 0, 6, 5, 10, 0),
    gsSP2Triangles(10, 5, 11, 0, 11, 5, 8, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_0093F8[] = {
    gsSPDisplayList(mountain_village_room_0DL_0093F8_1),
    gsSPDisplayList(mountain_village_room_0DL_0093F8_2),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_009B40_1[] = {
    gsSPVertex(&mountain_village_room_0Vtx_009410[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_017EC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_009410, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_009B40_2[] = {
    gsSPVertex(&mountain_village_room_0Vtx_009680[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0176C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_009680, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 1, 4, 0),
    gsSP2Triangles(7, 1, 8, 0, 8, 1, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 10, 9, 0),
    gsSP2Triangles(13, 10, 14, 0, 15, 10, 16, 0),
    gsSP2Triangles(16, 10, 17, 0, 17, 10, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 18, 0),
    gsSP2Triangles(20, 19, 22, 0, 22, 19, 23, 0),
    gsSP2Triangles(24, 19, 25, 0, 26, 19, 24, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 28, 27, 0),
    gsSP1Triangle(31, 28, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_009680[32], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 8, 7, 0, 11, 8, 12, 0),
    gsSP2Triangles(9, 8, 13, 0, 13, 8, 14, 0),
    gsSP1Triangle(14, 8, 11, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_009B40[] = {
    gsSPDisplayList(mountain_village_room_0DL_009B40_1),
    gsSPDisplayList(mountain_village_room_0DL_009B40_2),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_009C58[] = {
    gsSPVertex(&mountain_village_room_0Vtx_009B58[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0194C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_009B58, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00A900[] = {
    gsSPVertex(&mountain_village_room_0Vtx_009D30[181], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0157C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_009D30, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_015FC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[16], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0161C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[24], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(11, 26, 27, 0, 11, 27, 9, 0),
    gsSP1Triangle(11, 9, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0169C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[53], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0192C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[67], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[95], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 0, 7, 6, 0),
    gsSP2Triangles(0, 6, 1, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[105], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[109], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 193, 193, 163, 255),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[137], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A0C8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[145], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_009D30[177], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00B3C0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00AFA0[58], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(mountain_village_room_0Tex_0139C8, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_0151C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00AFA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(7, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00AFA0[32], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00B650[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00B510[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x58, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0129C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_0129C8, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00B510, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00C108[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00B738[149], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 155, 155, 155, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01ACC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00B738, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 6, 7, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 8, 0, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 14, 0, 17, 14, 13, 0),
    gsSP2Triangles(19, 20, 18, 0, 19, 18, 17, 0),
    gsSP2Triangles(21, 22, 20, 0, 21, 20, 19, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 22, 21, 0),
    gsSP2Triangles(25, 26, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(12, 11, 26, 0, 12, 26, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00B738[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00B738[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00B738[95], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00B738[127], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 2, 5, 0, 20, 5, 21, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00C5A8[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00C348[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(mountain_village_room_0Tex_0141C8, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_0149C8, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00C348, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00C810[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00C6B0[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 225, 195, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0153C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00C6B0, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(4, 9, 5, 0, 5, 10, 6, 0),
    gsSP2Triangles(1, 11, 3, 0, 3, 9, 4, 0),
    gsSP2Triangles(8, 12, 13, 0, 0, 11, 1, 0),
    gsSP2Triangles(6, 10, 7, 0, 7, 12, 8, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00CA08[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00C908[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00C908, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&mountain_village_room_0Vtx_00C908[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00CDA0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00CAC0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01A8C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00CAC0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00CF88[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00CDB0[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPMatrix(&mountain_village_room_0DL_00CE90Mtx_000000, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0121C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_0121C8, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00CDB0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00DFC8_1[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00CF98[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0182C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00CF98, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00CF98[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00CF98[60], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_018AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_00CF98[78], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00DFC8_2[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00D7B0[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0182C8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00D7B0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00D7B0[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_018AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_0Vtx_00D7B0[42], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00D7B0[72], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00DFC8[] = {
    gsSPDisplayList(mountain_village_room_0DL_00DFC8_1),
    gsSPDisplayList(mountain_village_room_0DL_00DFC8_2),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00E4B8[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00DFE0[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0171C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00DFE0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 8, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 6, 8, 0, 22, 8, 23, 0),
    gsSP2Triangles(14, 17, 24, 0, 14, 24, 25, 0),
    gsSP2Triangles(21, 14, 25, 0, 18, 21, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00DFE0[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 3, 4, 6, 0),
    gsSP2Triangles(3, 6, 9, 0, 0, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00E9D0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00E4C8[50], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0175C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00E4C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 10, 0, 11, 15, 12, 0),
    gsSP2Triangles(8, 16, 17, 0, 8, 17, 9, 0),
    gsSP2Triangles(11, 18, 19, 0, 11, 19, 15, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(20, 30, 31, 0, 20, 31, 21, 0),
    gsSPVertex(&mountain_village_room_0Vtx_00E4C8[32], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 9, 8, 7, 0),
    gsSP2Triangles(9, 7, 10, 0, 11, 9, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 17, 15, 16, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00EAE0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00E9E0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01B0C8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00E9E0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00EC88[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00EB88[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0198C8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00EB88, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_00EF90[] = {
    gsSPVertex(&mountain_village_room_0Vtx_00ED30[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 0, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_0111C8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(mountain_village_scene04Tex_004000, 0x0100, 1, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_00ED30, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 6, 0),
    gsSP2Triangles(3, 2, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 13, 11, 0),
    gsSP2Triangles(9, 14, 13, 0, 9, 15, 14, 0),
    gsSP2Triangles(8, 16, 9, 0, 16, 17, 9, 0),
    gsSP2Triangles(17, 18, 9, 0, 18, 19, 9, 0),
    gsSP2Triangles(20, 15, 9, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 22, 24, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 27, 0),
    gsSP1Triangle(28, 23, 29, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_01B548[] = {
    gsSPVertex(&mountain_village_room_0Vtx_01B348[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 204),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01BC88, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_01BC88, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_01B348, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(0, 7, 8, 0, 2, 1, 9, 0),
    gsSP2Triangles(2, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 11, 13, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 13, 16, 0),
    gsSP2Triangles(15, 17, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(15, 16, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_01B830[] = {
    gsSPVertex(&mountain_village_room_0Vtx_01B670[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 249),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01C488, G_IM_FMT_I, G_IM_SIZ_8b, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_01C488, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, 1),
    gsSPDisplayList(0x0B000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_01B670, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 7, 0),
    gsSP2Triangles(11, 12, 5, 0, 11, 5, 7, 0),
    gsSP2Triangles(12, 13, 2, 0, 12, 2, 5, 0),
    gsSP2Triangles(13, 14, 3, 0, 13, 3, 2, 0),
    gsSP2Triangles(10, 15, 11, 0, 10, 16, 15, 0),
    gsSP2Triangles(15, 17, 12, 0, 15, 12, 11, 0),
    gsSP2Triangles(17, 18, 13, 0, 17, 13, 12, 0),
    gsSP2Triangles(18, 19, 14, 0, 18, 14, 13, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_0DL_01BBF0[] = {
    gsSPVertex(&mountain_village_room_0Vtx_01BA00[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPMatrix(&mountain_village_room_0DL_01BAF0Mtx_000000, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_room_0Tex_01D488, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(mountain_village_room_0Tex_01D488, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 1),
    gsSPDisplayList(0x0C000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_0Vtx_01BA00, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 1, 5, 6, 0),
    gsSP1Triangle(1, 6, 3, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
