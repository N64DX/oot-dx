#include "ikana_canyon_scene.h"
#include "ikana_canyon_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd ikana_canyon_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&ikana_canyon_room_0RoomShapeCullable_0004C0),
    SCENE_CMD_OBJECT_LIST(14, ikana_canyon_room_0ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(54, ikana_canyon_room_0ActorEntry_000084),
    SCENE_CMD_END(),
};

s16 ikana_canyon_room_0ObjectList_000058[] = {
    OBJECT_OKUTA,
    OBJECT_ICEFLOE,
    OBJECT_ICE_BLOCK,
    OBJECT_RD,
    OBJECT_HSSTUMP,
    OBJECT_GI_HEART,
    OBJECT_BB,
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_SHOPNUTS,
    OBJECT_CROW,
    OBJECT_KUSA,
    OBJECT_BIG_FWALL,
  //OBJECT_IKNV_OBJ,
    OBJECT_JSO,
  //OBJECT_WDOR05,
};

ActorEntry ikana_canyon_room_0ActorEntry_000084[] = {
    { ACTOR_EN_BB,           {  -1824,   797, 1262 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_BB,           {   -521,   593, -441 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_BB,           {   -124,   181, 2551 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_BB,           {   -111,   168, 1697 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_BB,           {    -96,   592, -453 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_BB,           {    143,   458,  568 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_BB,           {    760,   600,  240 }, {    0,      0,    0 }, 0xFFFF },
    { ACTOR_EN_CROW,         {   -744,   763,  357 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_CROW,         {   -677,   540, 2571 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_CROW,         {   -478,   497, 1527 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_CROW,         {    170,   350, 3042 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_CROW,         {    492,   601,   67 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_ENCOUNT3,     {   -433,  -411, 4099 }, {    0,      0, 0x14 }, 0x20C0 },
    { ACTOR_EN_ENCOUNT3,     {   -292,  -368, 4630 }, {    0,      0, 0x14 }, 0x20C0 },
    { ACTOR_EN_ENCOUNT3,     {    -41,  -386, 4343 }, {    0,      0, 0x14 }, 0x2041 },
    { ACTOR_EN_ENCOUNT3,     {    737,  -370, 3724 }, {    0,      0, 0x14 }, 0x2041 },
    { ACTOR_EN_ENCOUNT3,     {  -1268,   600,  845 }, {    0,   0x43, 0x14 }, 0x21C2 },
    { ACTOR_EN_ENCOUNT3,     {    220,   200, 2314 }, {    0,   0x43, 0x14 }, 0x21C2 },
    { ACTOR_EN_ENCOUNT3,     {   -715,   598, -101 }, {    0,   0x44, 0x14 }, 0x2243 },
    { ACTOR_EN_ENCOUNT3,     {   -512,   200, 1954 }, {    0,   0x44, 0x14 }, 0x2243 },
    { ACTOR_EN_ENCOUNT3,     {   -544,   200, 2552 }, {    0,   0x45, 0x14 }, 0x22C4 },
    { ACTOR_EN_ENCOUNT3,     {    847,   600,  282 }, {    0,   0x45, 0x14 }, 0x22C4 },
    { ACTOR_EN_ENCOUNT3,     {     88,   597, -193 }, {    0,   0x46, 0x14 }, 0x2145 },
    { ACTOR_EN_ENCOUNT3,     {    170,   152, 1564 }, {    0,   0x46, 0x14 }, 0x2145 },
    { ACTOR_EN_RAILGIBUD,    {   -474,   400, 1100 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_EN_OKUTA2,       {   -335,  -520, 3353 }, {    0,      0,    0 }, 0x0200 },
    { ACTOR_EN_OKUTA2,       {   -329,  -520, 3532 }, {    0,      0,    0 }, 0x0200 },
    { ACTOR_EN_WEATHER_TAG,  {    173,   143, 1442 }, {    0,      0,    0 }, 0x3201 },
    { ACTOR_EN_GS,           {    176,  -505, 3778 }, {    0, 0xC000,    0 }, 0xFF26 },
    { ACTOR_EN_GS,           {  -1352,   800,  100 }, {    0, 0xF555,    0 }, 0xFF27 },
    { ACTOR_ELF_MSG,         {   -288,  -389, 4285 }, { 0x46,   0x41,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {    778,  -365, 3721 }, { 0x28,   0x42,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {    250,   200, 2312 }, { 0x28,   0x43,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {   -510,   200, 2552 }, { 0x28,   0x45,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {   -470,   200, 1944 }, { 0x28,   0x44,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {    202,   157, 1568 }, { 0x28,   0x46,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {    882,   600,  275 }, { 0x28,   0x45,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {    130,   597, -205 }, { 0x28,   0x46,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {   -678,   598, -101 }, { 0x28,   0x44,    0 }, 0xFF4E },
    { ACTOR_ELF_MSG,         {  -1352,   633,  835 }, { 0x28,   0x43,    0 }, 0xFF4E },
    { ACTOR_EN_KANBAN,       {   -157,  -432, 3924 }, {    0, 0xF800,    0 }, 0x005D },
    { ACTOR_EN_KANBAN,       {  -1755,   794, 1452 }, {    0, 0x5600,    0 }, 0x005E },
    { ACTOR_EN_KANBAN,       {   -145,   592, -529 }, {    0, 0xF200,    0 }, 0x005F },
    { ACTOR_EN_KANBAN,       {  -1094,   600,  178 }, {    0, 0x1F00,    0 }, 0x0060 },
    { ACTOR_EN_KANBAN,       {    486,   200, 2084 }, {    0, 0xC666,    0 }, 0x0061 },
    { ACTOR_EN_KUSA,         {   -384,   200, 2589 }, {    0,      0,    0 }, 0x463F },
    { ACTOR_EN_KUSA,         {   -423,   200, 2441 }, {    0,      0,    0 }, 0x4757 },
    { ACTOR_EN_KUSA,         {   -422,   200, 2543 }, {    0,      0,    0 }, 0x487F },
    { ACTOR_EN_KUSA,         {   -910,   200, 2747 }, {    0,      0,    0 }, 0x4943 },
    { ACTOR_OBJ_HSSTUMP,     {  -1011,   -40, 3319 }, {    0, 0x4100,    0 }, 0x0000 },
    { ACTOR_OBJ_HSSTUMP,     {   -948,  -241, 2900 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_OBJ_HSSTUMP,     {   -944,   200, 2780 }, {    0, 0x4C00,    0 }, 0x0000 },
    { ACTOR_OBJ_HSSTUMP,     {   -633,  -440, 3767 }, {    0,      0,    0 }, 0x0000 },
    { ACTOR_BG_WEATHER,      {    500,   200, 1650 }, {    0,      0,    0 }, 0x0000 },
  //{ ACTOR_BG_IKNV_OBJ,     {   -229,   480,  713 }, {    0,   0x65,    0 }, 0xFE00 },
  //{ ACTOR_BG_IKNV_OBJ,     {   1401,   857, -250 }, {    0,      0,    0 }, 0xFE01 },
  //{ ACTOR_BG_IKNV_DOUKUTU, {    -87,   193, 1175 }, {    0,      0,    0 }, 0xFE01 },
  //{ ACTOR_OBJ_WARPSTONE,   {   -852,   200, 2592 }, {    0,      0,    0 }, 0x0008 },
};

RoomShapeCullable ikana_canyon_room_0RoomShapeCullable_0004C0 = { 
    2, 12,
    ikana_canyon_room_0RoomShapeCullableEntry_0004CC,
    ikana_canyon_room_0RoomShapeCullableEntry_0004CC + ARRAY_COUNTU(ikana_canyon_room_0RoomShapeCullableEntry_0004CC)
};

RoomShapeCullableEntry ikana_canyon_room_0RoomShapeCullableEntry_0004CC[12] = {
    { {   1228,   1083,   1560 },   5068, ikana_canyon_room_0DL_011970, NULL },
    { {   2085,   2170,   -721 },   1686, ikana_canyon_room_0DL_004848, NULL },
    { {   1241,    641,   2398 },   1230, ikana_canyon_room_0DL_003EA0, ikana_canyon_room_0DL_024520 },
    { {   1362,    451,   2267 },  -1010, ikana_canyon_room_0DL_011D00, NULL },
    { {    232,   -520,   3318 },   1976, NULL, ikana_canyon_room_0DL_025F10 },
    { {   1280,    899,   -130 },    482, NULL, ikana_canyon_room_0DL_0258D0 },
    { {   -415,    710,    906 },   2308, ikana_canyon_room_0DL_00F478, ikana_canyon_room_0DL_024C98 },
    { {   1916,   -277,   3439 },    186, NULL, ikana_canyon_room_0DL_0259A0 },
    { {    422,   -157,   3314 },   1888, ikana_canyon_room_0DL_002548, NULL },
    { {   -519,    694,   1350 },   1676, ikana_canyon_room_0DL_0112D8, NULL },
    { {    111,    419,   2621 },   3648, ikana_canyon_room_0DL_001AC8, NULL },
    { {    234,   -340,   4315 },   2452, ikana_canyon_room_0DL_0073A8, ikana_canyon_room_0DL_024820 },
};

s32 ikana_canyon_room_0_terminatorMaybe_00058C = { 0x01000000 };

Vtx ikana_canyon_room_0Vtx_001048[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_001048.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_001DE8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_001DE8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_002558[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_002558.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_003090[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_003090.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0036E0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0036E0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_003A48[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_003A48.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_003C20[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_003C20.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_003ED0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_003ED0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_004190[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_004190.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_004550[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_004550.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_004868[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_004868.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_004B28[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_004B28.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_004EE8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_004EE8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0050B8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0050B8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_005620[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_005620.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0059A0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0059A0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_005EC0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_005EC0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_006170[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_006170.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0067D8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0067D8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_006C40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_006C40.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_006F68[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_006F68.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0073F8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0073F8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_008390[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_008390.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0086E8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0086E8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_008A40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_008A40.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_008DD0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_008DD0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_009740[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_009740.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_009F48[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_009F48.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00A910[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00A910.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00B5B0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00B5B0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00BB78[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00BB78.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00C090[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00C090.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00D408[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00D408.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00DB20[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00DB20.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00E240[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00E240.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00E410[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00E410.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00E630[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00E630.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00E8C8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00E8C8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00ECB0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00ECB0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00F048[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00F048.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00F4D0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00F4D0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_00FAA0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_00FAA0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0101D8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0101D8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_010958[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_010958.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_011300[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_011300.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_011B60[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_011B60.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_023890[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_023890.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0240B8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0240B8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0242D8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0242D8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_024560[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_024560.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_024838[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_024838.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_024A40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_024A40.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_024CB0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_024CB0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_024EB8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_024EB8.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_025180[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_025180.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_025388[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_025388.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_025690[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_025690.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_0258E0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_0258E0.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_025A40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_025A40.vtx.inc"
};

Vtx ikana_canyon_room_0Vtx_025D38[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Vtx_025D38.vtx.inc"
};

u64 ikana_canyon_room_0Tex_011E40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_011E40.i8.inc.c"
};

u64 ikana_canyon_room_0Tex_012240[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_012240.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_012A40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_012A40.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_012C40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_012C40.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_013C40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_013C40.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_015440[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_015440.i8.inc.c"
};

u64 ikana_canyon_room_0Tex_015540[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_015540.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_015940[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_015940.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_016140[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_016140.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_016540[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_016540.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_016940[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_016940.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_017140[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_017140.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_018B40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_018B40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_019340[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_019340.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_019F40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_019F40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01A740[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01A740.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01AB40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01AB40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01BB40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01BB40.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_01C340[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01C340.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01CC40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01CC40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01D840[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01D840.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01E040[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01E040.ci4.inc.c"
};

u64 ikana_canyon_room_0TLUT_01E040[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01E040.tlut.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_01E240[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01E240.ci4.inc.c"
};

u64 ikana_canyon_room_0TLUT_01E240[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01E240.tlut.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_01EA40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01EA40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01EE40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01EE40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_01F640[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01F640.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_01FE40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_01FE40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_020240[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_020240.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_020A40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_020A40.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_022E40[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_022E40.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_023240[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_023240.ci8.inc.c"
};

u64 ikana_canyon_room_0Tex_025F68[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_025F68.i4.inc.c"
};

u64 ikana_canyon_room_0Tex_026768[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_026768.i8.inc.c"
};

u64 ikana_canyon_room_0Tex_026F68[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_026F68.i8.inc.c"
};

u64 ikana_canyon_room_0Tex_027768[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_027768.i8.inc.c"
};

u64 ikana_canyon_room_0Tex_027F68[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_027F68.rgba16.inc.c"
};

u64 ikana_canyon_room_0Tex_028768[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_028768.i4.inc.c"
};

u64 ikana_canyon_room_0Tex_028F68[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_0Tex_028F68.rgba16.inc.c"
};

Gfx ikana_canyon_room_0DL_001AC8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_001048[160], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadTextureBlock_4b(ikana_canyon_sceneTex_01CC40, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadMultiBlock_4b(ikana_canyon_sceneTex_01CC40, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_001048, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 15, 19, 20, 0),
    gsSP2Triangles(15, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 24, 0, 28, 24, 27, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001048[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 1, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 9, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(18, 21, 20, 0, 21, 22, 20, 0),
    gsSP2Triangles(23, 18, 24, 0, 23, 21, 18, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
    gsSP2Triangles(8, 24, 1, 0, 8, 29, 24, 0),
    gsSP2Triangles(30, 23, 29, 0, 23, 24, 29, 0),
    gsSP1Triangle(0, 7, 1, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001048[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 28, 0),
    gsSP2Triangles(24, 28, 25, 0, 23, 29, 30, 0),
    gsSP1Triangle(23, 31, 29, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001048[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 6, 5, 0),
    gsSP2Triangles(0, 5, 7, 0, 8, 7, 5, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(10, 13, 11, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 15, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 8, 19, 0),
    gsSP2Triangles(8, 5, 19, 0, 20, 21, 8, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 20, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(24, 28, 25, 0, 25, 29, 27, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001048[123], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 5, 4, 0, 8, 4, 9, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 7, 0),
    gsSP2Triangles(12, 8, 13, 0, 8, 9, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(18, 16, 19, 0, 16, 20, 19, 0),
    gsSP2Triangles(16, 15, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 25, 0, 27, 22, 25, 0),
    gsSP2Triangles(28, 27, 26, 0, 29, 27, 28, 0),
    gsSP2Triangles(13, 9, 30, 0, 30, 7, 11, 0),
    gsSP2Triangles(30, 4, 7, 0, 9, 4, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001048[154], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_002548[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_001DE8[74], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadTextureBlock_4b(ikana_canyon_sceneTex_01CC40, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadMultiBlock_4b(ikana_canyon_sceneTex_01CC40, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_001DE8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 1, 7, 0, 0, 7, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 9, 0),
    gsSP2Triangles(8, 10, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 20, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 17, 0),
    gsSP2Triangles(14, 22, 23, 0, 14, 23, 8, 0),
    gsSP2Triangles(16, 15, 24, 0, 16, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 20, 29, 0, 30, 29, 28, 0),
    gsSP2Triangles(20, 19, 29, 0, 20, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001DE8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 6, 4, 0),
    gsSP2Triangles(4, 6, 3, 0, 3, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(9, 12, 11, 0, 6, 13, 7, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(15, 18, 16, 0, 17, 14, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 20, 21, 0, 22, 23, 20, 0),
    gsSP2Triangles(22, 24, 23, 0, 24, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_001DE8[62], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 10, 0),
    gsSP2Triangles(9, 11, 7, 0, 11, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_002E18[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_002558[132], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01C340, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 245, 205, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_002558, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_022E40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&ikana_canyon_room_0Vtx_002558[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_002558[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_002558[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP1Triangle(15, 16, 17, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_002558[124], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_003500[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_003090[63], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_016540, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 239, 178, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_003090, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_016540, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 245, 205, 255),
    gsSPVertex(&ikana_canyon_room_0Vtx_003090[16], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(25, 24, 17, 0, 25, 17, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(30, 29, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_003090[48], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_003920[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0036E0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_017140, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 239, 178, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0036E0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_017140, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 245, 205, 255),
    gsSPVertex(&ikana_canyon_room_0Vtx_0036E0[3], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 19, 18, 0, 21, 22, 19, 0),
    gsSP2Triangles(23, 22, 21, 0, 24, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_003B48[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_003A48[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_016940, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_003A48, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_003DE0[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_003C20[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_015940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 245, 205, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_003C20, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_003EA0[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_002E18),
    gsSPDisplayList(ikana_canyon_room_0DL_003500),
    gsSPDisplayList(ikana_canyon_room_0DL_003920),
    gsSPDisplayList(ikana_canyon_room_0DL_003B48),
    gsSPDisplayList(ikana_canyon_room_0DL_003DE0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004090[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_003ED0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_013C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, 1, 1),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_011E40, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_003ED0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 1, 0, 0),
    gsSP2Triangles(9, 10, 4, 0, 9, 4, 1, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 10, 9, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP1Triangle(15, 19, 16, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004410[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_004190[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_013C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_011E40, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_004190, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 4, 0),
    gsSP2Triangles(9, 4, 12, 0, 11, 13, 5, 0),
    gsSP2Triangles(11, 5, 4, 0, 14, 15, 9, 0),
    gsSP2Triangles(14, 9, 8, 0, 15, 16, 11, 0),
    gsSP2Triangles(15, 11, 9, 0, 16, 17, 13, 0),
    gsSP2Triangles(16, 13, 11, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 18, 0, 22, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 19, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP2Triangles(27, 28, 21, 0, 29, 3, 23, 0),
    gsSP2Triangles(29, 23, 22, 0, 3, 2, 25, 0),
    gsSP2Triangles(3, 25, 23, 0, 30, 31, 8, 0),
    gsSP1Triangle(30, 8, 10, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004740[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_004550[23], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_013C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, 1, 1),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_011E40, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_004550, 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 9, 8, 21, 0),
    gsSP2Triangles(8, 11, 22, 0, 8, 22, 21, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004848[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_004090),
    gsSPDisplayList(ikana_canyon_room_0DL_004410),
    gsSPDisplayList(ikana_canyon_room_0DL_004740),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004B18[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_004868[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_014C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_014440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_004868, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 6, 9, 0, 8, 4, 6, 0),
    gsSP2Triangles(10, 7, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 11, 3, 0, 12, 3, 2, 0),
    gsSP2Triangles(13, 9, 14, 0, 7, 10, 6, 0),
    gsSP2Triangles(13, 8, 9, 0, 13, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004ED8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_004B28[29], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_017340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_004B28, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 0, 2, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 4, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_022A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 98, 145, 143, 255),
    gsSPVertex(&ikana_canyon_room_0Vtx_004B28[16], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_004FD8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_004EE8[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_014C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_014440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_004EE8, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 3, 5, 0),
    gsSP1Triangle(1, 6, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_005610[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0050B8[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01A440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_013440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0050B8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 7, 17, 8, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 18, 0, 26, 18, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0050B8[32], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 8, 0),
    gsSP2Triangles(11, 8, 7, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 10, 9, 16, 0),
    gsSP2Triangles(10, 16, 15, 0, 17, 13, 18, 0),
    gsSP2Triangles(17, 18, 19, 0, 0, 2, 19, 0),
    gsSP1Triangle(0, 19, 18, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_005990[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_005620[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01AC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01B440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_005620, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(7, 8, 4, 0, 3, 9, 5, 0),
    gsSP2Triangles(3, 10, 9, 0, 11, 5, 9, 0),
    gsSP2Triangles(12, 11, 9, 0, 11, 13, 5, 0),
    gsSP2Triangles(13, 6, 5, 0, 14, 12, 9, 0),
    gsSP2Triangles(13, 15, 6, 0, 15, 7, 6, 0),
    gsSP2Triangles(16, 15, 13, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 13, 11, 0, 12, 18, 11, 0),
    gsSP2Triangles(18, 16, 11, 0, 18, 19, 16, 0),
    gsSP2Triangles(18, 20, 19, 0, 19, 17, 16, 0),
    gsSP2Triangles(19, 21, 17, 0, 21, 19, 22, 0),
    gsSP2Triangles(19, 23, 22, 0, 19, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_005EA0[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0059A0[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_012A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_012C40, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0x0CF7, 0x0078, 0x0D13, 0x00F4),
    gsDPSetTileSize(1, 0x0F3C, 0, 0x0FB8, 0x007C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0059A0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 5, 1, 3, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 6, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 9, 11, 0),
    gsSP2Triangles(14, 13, 12, 0, 15, 14, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 21, 17, 19, 0),
    gsSP2Triangles(22, 21, 20, 0, 23, 22, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 29, 25, 27, 0),
    gsSP2Triangles(30, 29, 28, 0, 31, 30, 28, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0059A0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 5, 1, 3, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 6, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 9, 12, 0),
    gsSP2Triangles(14, 15, 8, 0, 14, 8, 10, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_006150[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_005EC0[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01C340, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_005EC0, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_006798[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_006170[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01EA40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 93, 143, 111, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_006170, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01EA40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&ikana_canyon_room_0Vtx_006170[5], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 22, 0, 28, 22, 21, 0),
    gsSP1Triangle(30, 22, 29, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_006170[36], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_006C30[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0067D8[37], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_017340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0067D8, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(11, 10, 16, 0, 11, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(12, 15, 19, 0, 12, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(1, 23, 22, 0, 1, 22, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_022A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 98, 145, 143, 255),
    gsSPVertex(&ikana_canyon_room_0Vtx_0067D8[24], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 1, 4, 0),
    gsSP1Triangle(11, 4, 12, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_006F58[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_006C40[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_023240, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_006C40, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_007398[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_006F68[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_012A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 3, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_012240, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_006F68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 1, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 26, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_006F68[30], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0073A8[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_004B18),
    gsSPDisplayList(ikana_canyon_room_0DL_004ED8),
    gsSPDisplayList(ikana_canyon_room_0DL_004FD8),
    gsSPDisplayList(ikana_canyon_room_0DL_005610),
    gsSPDisplayList(ikana_canyon_room_0DL_005990),
    gsSPDisplayList(ikana_canyon_room_0DL_005EA0),
    gsSPDisplayList(ikana_canyon_room_0DL_006150),
    gsSPDisplayList(ikana_canyon_room_0DL_006798),
    gsSPDisplayList(ikana_canyon_room_0DL_006C30),
    gsSPDisplayList(ikana_canyon_room_0DL_006F58),
    gsSPDisplayList(ikana_canyon_room_0DL_007398),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_008370[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[176], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01BB40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0073F8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01BB40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[4], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[36], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 6, 3, 0),
    gsSP2Triangles(5, 8, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[68], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 8, 0),
    gsSP2Triangles(4, 9, 5, 0, 6, 10, 7, 0),
    gsSP2Triangles(11, 7, 10, 0, 4, 12, 9, 0),
    gsSP2Triangles(12, 13, 9, 0, 10, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP1Triangle(18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01CC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[90], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 0, 0),
    gsSP2Triangles(21, 0, 2, 0, 22, 21, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, ikana_canyon_room_0TLUT_01E040),
    gsDPLoadTextureBlock_4b(ikana_canyon_room_0Tex_01E040, G_IM_FMT_CI, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[114], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[145], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, ikana_canyon_room_0TLUT_01E240),
    gsDPLoadTextureBlock_4b(ikana_canyon_room_0Tex_01E240, G_IM_FMT_CI, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_0073F8[157], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 0, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0086C8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_008390[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01F640, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_008390, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 4, 2, 0),
    gsSP2Triangles(5, 6, 4, 0, 0, 7, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 1, 0),
    gsSP2Triangles(6, 5, 10, 0, 1, 11, 2, 0),
    gsSP2Triangles(11, 5, 2, 0, 1, 12, 11, 0),
    gsSP2Triangles(11, 13, 5, 0, 12, 1, 9, 0),
    gsSP2Triangles(10, 5, 13, 0, 9, 14, 12, 0),
    gsSP2Triangles(13, 15, 12, 0, 15, 13, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_008390[16], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_008A20[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0086E8[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01F640, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0086E8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 4, 2, 0),
    gsSP2Triangles(5, 6, 4, 0, 0, 7, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 1, 0),
    gsSP2Triangles(6, 5, 10, 0, 1, 11, 2, 0),
    gsSP2Triangles(11, 5, 2, 0, 1, 12, 11, 0),
    gsSP2Triangles(11, 13, 5, 0, 12, 1, 9, 0),
    gsSP2Triangles(10, 5, 13, 0, 9, 14, 12, 0),
    gsSP2Triangles(13, 15, 12, 0, 15, 13, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_0086E8[16], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_008D78[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_008A40[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01F640, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_008A40, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 4, 2, 0),
    gsSP2Triangles(5, 6, 4, 0, 0, 7, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 1, 0),
    gsSP2Triangles(6, 5, 10, 0, 1, 11, 2, 0),
    gsSP2Triangles(11, 5, 2, 0, 1, 12, 11, 0),
    gsSP2Triangles(11, 13, 5, 0, 12, 1, 9, 0),
    gsSP2Triangles(10, 5, 13, 0, 9, 14, 12, 0),
    gsSP2Triangles(13, 15, 12, 0, 15, 13, 11, 0),
    gsSP1Triangle(15, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_008A40[16], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_009730[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_008DD0[101], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_017340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_008DD0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01B340, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_008DD0[13], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 14, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_008DD0[45], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_008DD0[75], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_022A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_008DD0[90], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPSetPrimColor(0, 0x80, 0, 0, 0, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&ikana_canyon_room_0Vtx_008DD0[96], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_009F28[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_009740[66], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_018B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_009740, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019340, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009740[14], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 6, 7, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_019B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009740[23], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 9, 10, 0, 0, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01A740, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009740[36], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01AB40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009740[52], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 0, 0, 8, 0, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00A8F0[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_009F48[91], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_018B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_009F48, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019340, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009F48[8], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_019B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009F48[24], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(0, 8, 9, 0, 0, 10, 11, 0),
    gsSP2Triangles(0, 12, 13, 0, 12, 14, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01A740, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009F48[39], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 2, 1, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_009F48[70], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 7, 9, 0, 10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01AB40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_009F48[83], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00B590[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[125], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_018B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00A910, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019340, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_019B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[16], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 9, 10, 0, 0, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01A740, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[29], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 25, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[61], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01AB40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[83], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 5, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01CC40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00A910[101], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 19, 18, 23, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00BB20[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00B5B0[45], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_019B40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00B5B0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 9, 10, 0, 0, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01A740, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00B5B0[13], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01AB40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00B5B0[29], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00C080[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00BB78[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01D840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00BB78, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 0, 2, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 29, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_022E40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00BB78[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 7, 10, 9, 0),
    gsSP2Triangles(6, 11, 7, 0, 4, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00D3F8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[240], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01C440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00C090, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 5, 15, 0, 16, 17, 14, 0),
    gsSP2Triangles(14, 17, 3, 0, 5, 14, 3, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(0, 22, 1, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 27, 0),
    gsSP2Triangles(26, 28, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[32], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 9, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(24, 27, 25, 0, 28, 24, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01D040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 6, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[92], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[123], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 27, 0, 26, 24, 23, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[154], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(4, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 21, 23, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[185], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 5, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 5, 12, 4, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[217], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01FE40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00C090[228], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 11, 6, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00DB10[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00D408[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01BC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01BC40, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00D408, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 4, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 8, 0),
    gsSP2Triangles(14, 15, 2, 0, 2, 16, 17, 0),
    gsSP2Triangles(14, 2, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP2Triangles(27, 22, 21, 0, 27, 21, 28, 0),
    gsSP2Triangles(29, 30, 25, 0, 30, 26, 25, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00D408[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsSP2Triangles(5, 6, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 14, 19, 20, 0),
    gsSP2Triangles(14, 20, 18, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(8, 28, 9, 0, 29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00D408[63], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 2, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00E230[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00DB20[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_01E180),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01DC40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00DB20, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00DB20[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_01EE40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_0Vtx_00DB20[40], 32, 0),
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

Gfx ikana_canyon_room_0DL_00E330[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00E240[7], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01BC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01BC40, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 2, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00E240, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 1, 4, 0, 5, 3, 4, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00E620[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00E410[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_015540, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_015440, 0x0080, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, 4),
    gsDPSetTileSize(1, 0, 0x0020, 0x003C, 0x005C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00E410, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00E8A8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00E630[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019F40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00E630, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 4, 6, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00EC90[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00E8C8[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019F40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00E8C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 0, 2, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00E8C8[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00F028[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00ECB0[30], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019F40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00ECB0, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(0, 2, 20, 0, 9, 11, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00F420[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00F048[35], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_019F40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00F048, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 9, 0, 26, 27, 28, 0),
    gsSP2Triangles(26, 28, 29, 0, 0, 2, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00F048[31], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00F478[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_008370),
    gsSPDisplayList(ikana_canyon_room_0DL_0086C8),
    gsSPDisplayList(ikana_canyon_room_0DL_008A20),
    gsSPDisplayList(ikana_canyon_room_0DL_008D78),
    gsSPDisplayList(ikana_canyon_room_0DL_009730),
    gsSPDisplayList(ikana_canyon_room_0DL_009F28),
    gsSPDisplayList(ikana_canyon_room_0DL_00A8F0),
    gsSPDisplayList(ikana_canyon_room_0DL_00B590),
    gsSPDisplayList(ikana_canyon_room_0DL_00BB20),
    gsSPDisplayList(ikana_canyon_room_0DL_00C080),
    gsSPDisplayList(ikana_canyon_room_0DL_00D3F8),
    gsSPDisplayList(ikana_canyon_room_0DL_00DB10),
    gsSPDisplayList(ikana_canyon_room_0DL_00E230),
    gsSPDisplayList(ikana_canyon_room_0DL_00E330),
    gsSPDisplayList(ikana_canyon_room_0DL_00E620),
    gsSPDisplayList(ikana_canyon_room_0DL_00E8A8),
    gsSPDisplayList(ikana_canyon_room_0DL_00EC90),
    gsSPDisplayList(ikana_canyon_room_0DL_00F028),
    gsSPDisplayList(ikana_canyon_room_0DL_00F420),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_00F970[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00F4D0[66], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00F4D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 3, 13, 0, 12, 0, 3, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 11, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 18, 27, 0),
    gsSP2Triangles(26, 17, 18, 0, 28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00F4D0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(16, 26, 17, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00F4D0[63], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_010080[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_00FAA0[86], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_00FAA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(28, 27, 29, 0, 28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00FAA0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 19, 29, 20, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_00FAA0[62], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0107F8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0101D8[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0101D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0101D8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 6, 5, 7, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_0101D8[63], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 10, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 12, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP1Triangle(23, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_011138[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_010958[118], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_020A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_010958, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_010958[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 6, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_010958[63], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 15, 14, 0, 16, 13, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(22, 21, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 28, 29, 30, 0),
    gsSP1Triangle(29, 31, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_010958[95], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0112D8[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_00F970),
    gsSPDisplayList(ikana_canyon_room_0DL_010080),
    gsSPDisplayList(ikana_canyon_room_0DL_0107F8),
    gsSPDisplayList(ikana_canyon_room_0DL_011138),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_011970[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_011300[95], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01E160),
    gsDPLoadTextureBlock_4b(ikana_canyon_sceneTex_01E160, G_IM_FMT_CI, 128, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_011300, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 26, 23, 22, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_011300[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 31, 27, 0, 30, 27, 26, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_011300[64], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 4, 0),
    gsSP2Triangles(9, 10, 7, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(13, 14, 12, 0, 13, 12, 11, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 13, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 16, 15, 0),
    gsSP2Triangles(19, 20, 18, 0, 19, 18, 17, 0),
    gsSP2Triangles(21, 22, 20, 0, 21, 20, 19, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 22, 21, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(28, 27, 29, 0, 28, 29, 30, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_011D00[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_011B60[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023480),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_016140, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 245, 205, 204),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_011B60, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 13, 17, 14, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_023EE0[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_023890[93], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 232, 210, 124, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_028F68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(ikana_canyon_room_0Tex_028768, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_023890, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_023890[4], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_023890[17], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(4, 8, 5, 0, 9, 4, 6, 0),
    gsSP2Triangles(9, 6, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 13, 16, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 9, 28, 0, 9, 27, 29, 0),
    gsSP1Triangle(9, 29, 30, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_023890[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 4, 0),
    gsSP2Triangles(9, 4, 6, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 11, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&ikana_canyon_room_0Vtx_023890[78], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0241E8[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0240B8[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 239, 178, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_028F68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 7, 1, 15),
    gsDPLoadMultiBlock_4b(ikana_canyon_room_0Tex_028768, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0x014A, 0x001C, 0x0346),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0240B8, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP1Triangle(4, 0, 10, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024448[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0242D8[15], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0242D8, 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 3, 0, 7, 3, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 4, 0, 11, 4, 12, 0),
    gsSP2Triangles(12, 4, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(9, 8, 14, 0, 9, 14, 13, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024520[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_023EE0),
    gsSPDisplayList(ikana_canyon_room_0DL_0241E8),
    gsSPDisplayList(ikana_canyon_room_0DL_024448),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024820[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_024560[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01DC60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_024560, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024A08[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_024838[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_024838, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(1, 6, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(3, 5, 7, 0, 3, 7, 0, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024C10[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_024A40[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_024A40, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 6, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsSP2Triangles(3, 4, 7, 0, 3, 7, 0, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024C98[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_024A08),
    gsSPDisplayList(ikana_canyon_room_0DL_024C10),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_024E98[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_024CB0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_026768, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_027F68, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_024CB0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025160[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_024EB8[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_026F68, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_027F68, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetTileSize(1, 0x0050, 0, 0x00CC, 0x007C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_024EB8, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025368[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_025180[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(ikana_canyon_room_0Tex_025F68, G_IM_FMT_I, 64, 64, 15, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_027F68, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_025180, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025670[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_025388[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_0Tex_027768, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_room_0Tex_027F68, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsDPSetTileSize(1, 0x0042, 0, 0x00BE, 0x007C),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_025388, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 4, 0),
    gsSP2Triangles(19, 20, 4, 0, 19, 4, 2, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025880[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_025690[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_025690, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 2, 0),
    gsSP2Triangles(0, 3, 7, 0, 0, 7, 8, 0),
    gsSP2Triangles(5, 1, 0, 0, 5, 0, 8, 0),
    gsSP2Triangles(9, 5, 8, 0, 9, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0258D0[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_024E98),
    gsSPDisplayList(ikana_canyon_room_0DL_025160),
    gsSPDisplayList(ikana_canyon_room_0DL_025368),
    gsSPDisplayList(ikana_canyon_room_0DL_025670),
    gsSPDisplayList(ikana_canyon_room_0DL_025880),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_0259A0[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_0258E0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_0258E0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025D18[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_025A40[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 90),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01D440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01D440, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_025A40, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 8, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(1, 10, 2, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 7, 6, 0),
    gsSP1Triangle(17, 6, 18, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025EF0[] = {
    gsSPVertex(&ikana_canyon_room_0Vtx_025D38[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_0Vtx_025D38, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_0DL_025F10[] = {
    gsSPDisplayList(ikana_canyon_room_0DL_025D18),
    gsSPDisplayList(ikana_canyon_room_0DL_025EF0),
    gsSPEndDisplayList(),
};
