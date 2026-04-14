#include "goron_shrine_scene.h"
#include "goron_shrine_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd goron_shrine_room_0[] = {
  //SCENE_CMD_ALTERNATE_HEADER_LIST(goron_shrine_room_0AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&goron_shrine_room_0RoomShapeCullable_000310),
    SCENE_CMD_OBJECT_LIST(6, goron_shrine_room_0ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(41, goron_shrine_room_0ActorEntry_000058),
    SCENE_CMD_END(),
};

/*SceneCmd* goron_shrine_room_0AlternateHeaders[] = {
    NULL,
    NULL,
    goron_shrine_room_0Set_cleansed,
};*/

s16 goron_shrine_room_0ObjectList_00004C[] = {
    OBJECT_SPOT18_OBJ,
    OBJECT_OF1D_MAP,
  //OBJECT_GK,
    OBJECT_SYOKUDAI,
  //OBJECT_OBJ_CHAN,
    OBJECT_TSUBO,
    OBJECT_JG,
    OBJECT_BOX,
};

ActorEntry goron_shrine_room_0ActorEntry_000058[] = {
    { ACTOR_EN_GO3,            {  -912, -134,  110 }, { 0, 0x4000,    0 }, 0x0020 },
    { ACTOR_EN_GO3,            {   458, -538,  264 }, { 0, 0x7530,    0 }, 0x0010 },
    { ACTOR_EN_GO3,            {   156, -440,   78 }, { 0, 0x61A8,    0 }, 0x0000 },
    { ACTOR_EN_GO3,            {   149, -440,  -99 }, { 0, 0x4268,    0 }, 0x0030 },
    { ACTOR_EN_ISHI,           {  -207, -440,  241 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -146, -440, -404 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -214, -440, -350 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -221, -440, -432 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {   512, -320,  499 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {   777, -320,   57 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {   818, -320, -275 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {   795, -320, -357 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -394, -134, -323 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -401, -134, -248 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -808, -134, -269 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -543, -134, -377 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -557, -134,  411 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -489, -134,  295 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -686, -134,  295 }, { 0,      0,    0 }, 0x0100 },
    { ACTOR_EN_ISHI,           {  -693, -134, -214 }, { 0,      0,    0 }, 0x0100 },
  //{ ACTOR_EN_MM,             {    70, -440,    2 }, { 0,  0x10F,    0 }, 0x0000 },
  //{ ACTOR_EN_GK,             { -1780, -114,  -12 }, { 0,   0x5A,    0 }, 0x1402 },
  //{ ACTOR_OBJ_CHAN,          {   283,   31,    6 }, { 0,      0,    0 }, 0x001E },
    { ACTOR_OBJ_SYOKUDAI,      {   -12, -440,    0 }, { 0,      0,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {   966, -320,    3 }, { 0, 0xEE6C,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {   -12, -239,  462 }, { 0,      0,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {   451, -320,  534 }, { 0, 0x8FA0,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {   801, -320,  372 }, { 0,      0,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {   512, -320, -512 }, { 0, 0xF060,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {   711, -320, -435 }, { 0, 0xF060,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {  -188, -420, -129 }, { 0, 0xD3DC,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {  -190, -420,  135 }, { 0, 0xEC78,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {  -330, -134, -127 }, { 0,      0,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI,      {  -327, -134,  128 }, { 0,      0,    0 }, 0x16DE }, // Switch: 1E
    { ACTOR_OBJ_TSUBO,         {   438, -440, -307 }, { 0, 0xF060,    0 }, 0x4700 }, // Collect: 23
    { ACTOR_OBJ_TSUBO,         {   488, -440, -284 }, { 0, 0xF060,    0 }, 0x4900 }, // Collect: 24
    { ACTOR_OBJ_TSUBO,         {   535, -440, -263 }, { 0, 0xF060,    0 }, 0x4B00 }, // Collect: 25
    { ACTOR_OBJ_TSUBO,         {   580, -440, -243 }, { 0, 0xF060,    0 }, 0x4D00 }, // Collect: 26
    { ACTOR_OBJ_TSUBO,         {  -349, -134, -471 }, { 0, 0x36B0,    0 }, 0x4F00 }, // Collect: 27
    { ACTOR_OBJ_TSUBO,         {  -328, -134, -518 }, { 0, 0x36B0,    0 }, 0x5100 }, // Collect: 28
    { ACTOR_OBJ_TSUBO,         {  -395, -134, -494 }, { 0, 0x36B0,    0 }, 0x5300 }, // Collect: 29
    { ACTOR_OBJ_TSUBO,         {  -376, -134, -537 }, { 0, 0x36B0,    0 }, 0x5500 }, // Collect: 2A
    { ACTOR_BG_SPOT18_SHUTTER, {   490, -538,  348 }, { 0, 0x8FA0,    0 }, 0x0000 },
    { ACTOR_EN_BOX,            {  -400, -133,    0 }, { 0, 0x4000, 0x1E }, 0x17C0 }, // Chest: 00, appears on switch: 
};

RoomShapeCullable goron_shrine_room_0RoomShapeCullable_000310 = { 
    2, 18,
    goron_shrine_room_0RoomShapeCullableEntry_00031C,
    goron_shrine_room_0RoomShapeCullableEntry_00031C +
    ARRAY_COUNTU(goron_shrine_room_0RoomShapeCullableEntry_00031C)
};

RoomShapeCullableEntry goron_shrine_room_0RoomShapeCullableEntry_00031C[18] = {
    { {    482,   -451,    326 },     34, goron_shrine_room_0DL_008190, NULL },
    { {     -7,    103,     -2 },   1016, goron_shrine_room_0DL_005838, goron_shrine_room_0DL_00BCD8 },
    { {    254,   -440,     -2 },    240, goron_shrine_room_0DL_0084E0, NULL },
    { {   -342,    -66,     -1 },    240, goron_shrine_room_0DL_006048, NULL },
    { {   -848,    -66,     -1 },    240, goron_shrine_room_0DL_006978, NULL },
    { {   -601,    -66,      0 },    380, goron_shrine_room_0DL_0079B8, NULL },
    { {   -110,   -118,      0 },   1176, goron_shrine_room_0DL_000CE0, NULL },
    { {      1,   -287,   -289 },   1138, goron_shrine_room_0DL_004988, NULL },
    { {   -780,   -134,      0 },    466, goron_shrine_room_0DL_004D28, NULL },
    { {    188,   -489,    -12 },    702, goron_shrine_room_0DL_005128, NULL },
    { {    200,   -336,    -12 },    736, goron_shrine_room_0DL_001420, NULL },
    { {    -14,    477,      0 },   1070, goron_shrine_room_0DL_003350, NULL },
    { {    622,   -144,   -822 },    398, goron_shrine_room_0DL_003DD0, NULL },
    { {   -265,   -114,      0 },    152, goron_shrine_room_0DL_0040B8, NULL },
    { {    519,    575,     -9 },    526, goron_shrine_room_0DL_0042D8, NULL },
    { {   -177,   -287,      0 },    264, goron_shrine_room_0DL_007000, NULL },
    { {    -11,    566,      0 },    882, goron_shrine_room_0DL_007F70, NULL },
    { {    111,   -267,    -90 },    616, NULL, goron_shrine_room_0DL_00B9E0 },
};

s32 goron_shrine_room_0_terminatorMaybe_00043C = { 0x01000000 };

/*SceneCmd goron_shrine_room_0Set_cleansed[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&goron_shrine_room_0RoomShapeCullable_000310),
    SCENE_CMD_OBJECT_LIST(3, goron_shrine_room_0ObjectList_cleansed),
    SCENE_CMD_ACTOR_LIST(35, goron_shrine_room_0ActorEntry_cleansed),
    SCENE_CMD_END(),
};

s16 goron_shrine_room_0ObjectList_cleansed[] = {
    OBJECT_OF1D_MAP,
    OBJECT_SYOKUDAI,
  //OBJECT_OBJ_CHAN,
    OBJECT_TSUBO,
  //OBJECT_JG,
  //OBJECT_TAISOU,
};

ActorEntry goron_shrine_room_0ActorEntry_cleansed[] = {
  //{ ACTOR_EN_S_GORO,    {  -600, -134, -136 }, { 0,   0xF, 0 }, 0x0003 },
  //{ ACTOR_EN_S_GORO,    {  -431, -134, -142 }, { 0, 0x159, 0 }, 0x0004 },
  //{ ACTOR_EN_S_GORO,    {  -344, -133,    0 }, { 0, 0x10E, 0 }, 0x0005 },
  //{ ACTOR_EN_S_GORO,    {  -439, -134,  131 }, { 0,  0xCD, 0 }, 0x0006 },
  //{ ACTOR_EN_S_GORO,    {  -581, -134,  131 }, { 0,  0x9B, 0 }, 0x0007 },
  //{ ACTOR_EN_JG,        {  -506, -133,   -1 }, { 0,     0, 0 }, 0x0001 },
  //{ ACTOR_EN_S_GORO,    {  -664, -133,    0 }, { 0,  0x5A, 0 }, 0x0008 },
    { ACTOR_EN_ISHI,      {  -207, -440,  241 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -146, -440, -404 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -214, -440, -350 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -221, -440, -432 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {   512, -320,  499 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {   777, -320,   57 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {   818, -320, -275 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {   795, -320, -357 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -394, -134, -323 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -401, -134, -248 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -808, -134, -269 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -543, -134, -377 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -557, -134,  411 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -489, -134,  295 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -686, -134,  295 }, { 0,     0, 0 }, 0x0100 },
    { ACTOR_EN_ISHI,      {  -693, -134, -214 }, { 0,     0, 0 }, 0x0100 },
  //{ ACTOR_EN_GO,        {  -912, -134,  110 }, { 0,  0x5A, 0 }, 0x7F86 },
  //{ ACTOR_EN_MM,        {   -66, -440,   -1 }, { 0, 0x10F, 0 }, 0x0000 },
  //{ ACTOR_EN_GK,        { -1780, -114,  -12 }, { 0,  0x5A, 0 }, 0x1402 },
  //{ ACTOR_OBJ_CHAN,     {   283,   31,    6 }, { 0,     0, 0 }, 0x001E },
  //{ ACTOR_EN_S_GORO,    {   149, -440,  -99 }, { 0, 0x13B, 0 }, 0x01E0 },
    { ACTOR_OBJ_SYOKUDAI, {   -12, -440,    0 }, { 0,     0, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {   966, -320,    3 }, { 0,  0x2D, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {   -12, -239,  462 }, { 0,     0, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {   451, -320,  534 }, { 0,  0x1A, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {   801, -320,  372 }, { 0,     0, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {   512, -320, -512 }, { 0, 0x14D, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {   711, -320, -435 }, { 0, 0x152, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {  -188, -420, -129 }, { 0, 0x124, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {  -190, -420,  135 }, { 0, 0x14B, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {  -330, -134, -127 }, { 0,     0, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_SYOKUDAI, {  -327, -134,  128 }, { 0,     0, 0 }, 0x12DE }, // Switch: 1E
    { ACTOR_OBJ_TSUBO,    {  -349, -134, -471 }, { 0,  0x4C, 0 }, 0xC719 },
    { ACTOR_OBJ_TSUBO,    {  -328, -134, -518 }, { 0,  0x4C, 0 }, 0xC90E },
    { ACTOR_OBJ_TSUBO,    {   438, -440, -307 }, { 0, 0x151, 0 }, 0xCB0E },
    { ACTOR_OBJ_TSUBO,    {   488, -440, -284 }, { 0, 0x151, 0 }, 0xCD19 },
    { ACTOR_OBJ_TSUBO,    {   580, -453, -243 }, { 0, 0x151, 0 }, 0xCF0F },
    { ACTOR_OBJ_TSUBO,    {  -395, -134, -494 }, { 0,  0x4C, 0 }, 0xD10F },
    { ACTOR_OBJ_TSUBO,    {  -376, -134, -537 }, { 0,  0x4C, 0 }, 0xD30F },
    { ACTOR_OBJ_TSUBO,    {   535, -452, -263 }, { 0, 0x151, 0 }, 0xD519 },
};*/

Vtx goron_shrine_room_0Vtx_000760[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_000760.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_000EA0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_000EA0.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_0015C0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_0015C0.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_0038F0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_0038F0.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_003F58[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_003F58.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_004198[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_004198.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_004388[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_004388.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_004B18[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_004B18.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_004EA8[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_004EA8.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_005228[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_005228.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_0059C8[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_0059C8.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_006278[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_006278.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_006BB0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_006BB0.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_0072B8[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_0072B8.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_007BF0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_007BF0.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_0080D0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_0080D0.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_008260[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_008260.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_00B740[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_00B740.vtx.inc"
};

Vtx goron_shrine_room_0Vtx_00BAD8[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Vtx_00BAD8.vtx.inc"
};

u64 goron_shrine_room_0Tex_008740[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_008740.i4.inc.c"
};

u64 goron_shrine_room_0Tex_008F40[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_008F40.rgba16.inc.c"
};

u64 goron_shrine_room_0Tex_009F40[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_009F40.ci8.inc.c"
};

u64 goron_shrine_room_0Tex_00A740[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_00A740.ci8.inc.c"
};

u64 goron_shrine_room_0Tex_00AF40[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_00AF40.ci8.inc.c"
};

u64 goron_shrine_room_0Tex_00B340[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_00B340.ci8.inc.c"
};

u64 goron_shrine_room_0Tex_00BDD0[] = {
#include "assets/scenes/overworld/goron_shrine/goron_shrine_room_0Tex_00BDD0.ia4.inc.c"
};

Gfx goron_shrine_room_0DL_000CE0[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_000760[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_sceneTex_006BC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(goron_shrine_sceneTex_008BC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_000760, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(2, 16, 4, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 18, 12, 0, 18, 19, 13, 0),
    gsSP2Triangles(18, 13, 12, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 23, 22, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 24, 9, 0),
    gsSP2Triangles(25, 9, 8, 0, 26, 27, 28, 0),
    gsSP1Triangle(26, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_000760[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(9, 10, 7, 0, 10, 11, 7, 0),
    gsSP2Triangles(11, 4, 7, 0, 12, 8, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 17, 18, 0),
    gsSP2Triangles(19, 18, 20, 0, 12, 13, 21, 0),
    gsSP2Triangles(21, 13, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 27, 0),
    gsSP2Triangles(28, 2, 29, 0, 28, 29, 30, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_000760[61], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(2, 1, 8, 0, 2, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP1Triangle(14, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_001420[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_000EA0[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_0073C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(goron_shrine_sceneTex_0093C0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_000EA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 16, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 20, 19, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 12, 0),
    gsSP2Triangles(23, 12, 15, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 27, 26, 0),
    gsSP2Triangles(29, 26, 30, 0, 11, 10, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_000EA0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 14, 0, 20, 14, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 3, 0),
    gsSP2Triangles(25, 3, 27, 0, 11, 10, 28, 0),
    gsSP1Triangle(11, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_000EA0[62], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 14, 0, 16, 14, 11, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_003350[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[465], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C7C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_0015C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(21, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 22, 27, 0, 26, 28, 22, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(19, 22, 21, 0, 10, 9, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 22, 31, 21, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(3, 14, 1, 0, 14, 15, 1, 0),
    gsSP2Triangles(14, 16, 15, 0, 5, 4, 17, 0),
    gsSP2Triangles(4, 18, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 16, 27, 15, 0),
    gsSP2Triangles(27, 28, 15, 0, 27, 29, 28, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(10, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(13, 27, 28, 0, 13, 14, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 11, 19, 0, 18, 9, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 15, 22, 0),
    gsSP2Triangles(15, 14, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 19, 25, 0, 24, 17, 19, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 25, 28, 0),
    gsSP2Triangles(27, 23, 25, 0, 29, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[158], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 1, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 3, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 15, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(18, 21, 20, 0, 22, 23, 20, 0),
    gsSP2Triangles(23, 24, 20, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[190], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[221], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 27, 31, 25, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[253], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 14, 13, 0),
    gsSP2Triangles(9, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 19, 13, 0, 15, 9, 21, 0),
    gsSP2Triangles(18, 21, 9, 0, 18, 17, 21, 0),
    gsSP2Triangles(19, 18, 13, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[285], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(0, 12, 11, 0, 13, 14, 5, 0),
    gsSP2Triangles(5, 14, 7, 0, 7, 15, 0, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 22, 28, 29, 0),
    gsSP2Triangles(22, 29, 17, 0, 30, 20, 19, 0),
    gsSP2Triangles(30, 19, 23, 0, 26, 31, 27, 0),
    gsSP1Triangle(16, 31, 26, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[317], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 14, 13, 0),
    gsSP2Triangles(11, 15, 16, 0, 11, 16, 9, 0),
    gsSP2Triangles(16, 15, 8, 0, 16, 8, 7, 0),
    gsSP2Triangles(14, 12, 3, 0, 7, 17, 4, 0),
    gsSP2Triangles(17, 18, 4, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 25, 28, 0),
    gsSP2Triangles(27, 23, 25, 0, 23, 22, 25, 0),
    gsSP2Triangles(21, 30, 19, 0, 31, 28, 19, 0),
    gsSP1Triangle(31, 29, 28, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[349], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(5, 11, 8, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 14, 17, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[367], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(7, 6, 19, 0, 7, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 21, 20, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[399], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 15, 0, 22, 15, 14, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[429], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(11, 10, 23, 0, 11, 23, 22, 0),
    gsSP2Triangles(24, 25, 7, 0, 24, 7, 6, 0),
    gsSP2Triangles(26, 27, 25, 0, 26, 25, 24, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 26, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSP2Triangles(3, 2, 31, 0, 3, 31, 30, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0015C0[461], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_003DD0[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_0038F0[70], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_007BC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(goron_shrine_room_0Tex_008740, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_0038F0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 1, 0, 16, 1, 0, 0),
    gsSP2Triangles(18, 19, 5, 0, 18, 5, 4, 0),
    gsSP2Triangles(20, 21, 9, 0, 20, 9, 8, 0),
    gsSP2Triangles(22, 23, 13, 0, 22, 13, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0038F0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 9, 0, 24, 9, 8, 0),
    gsSP2Triangles(26, 27, 13, 0, 26, 13, 12, 0),
    gsSP2Triangles(28, 29, 17, 0, 28, 17, 16, 0),
    gsSP2Triangles(30, 31, 21, 0, 30, 21, 20, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0038F0[64], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_0040B8[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_003F58[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_0Tex_00AF40, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_003F58, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_0042D8[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_004198[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_007BC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_004198, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_004988[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_004388[88], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_0083C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_004388, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(13, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_004388[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(1, 7, 2, 0, 1, 8, 7, 0),
    gsSP2Triangles(1, 9, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 11, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 13, 0, 19, 13, 14, 0),
    gsSP2Triangles(19, 21, 20, 0, 21, 22, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 26, 27, 0),
    gsSP2Triangles(23, 27, 24, 0, 26, 28, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_004388[64], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 16, 15, 0),
    gsSP2Triangles(23, 15, 14, 0, 19, 2, 18, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_004D28[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_004B18[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_0Tex_00B340, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_004B18, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 5, 0, 5, 6, 2, 0),
    gsSP2Triangles(7, 8, 2, 0, 2, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 15, 16, 12, 0),
    gsSP2Triangles(17, 14, 12, 0, 12, 11, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00BBC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_004B18[18], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 1, 5, 0, 4, 5, 6, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_005128[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_004EA8[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_0083C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_004EA8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 2, 0),
    gsSP2Triangles(5, 2, 1, 0, 7, 3, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 5, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(16, 13, 15, 0, 8, 16, 18, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 10, 20, 0),
    gsSP2Triangles(19, 8, 10, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 12, 0),
    gsSP2Triangles(5, 12, 6, 0, 14, 6, 15, 0),
    gsSP2Triangles(26, 6, 12, 0, 15, 6, 27, 0),
    gsSP2Triangles(28, 6, 29, 0, 6, 26, 30, 0),
    gsSP2Triangles(31, 6, 30, 0, 6, 14, 2, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_005838[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_005228[89], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_005228, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 21, 20, 0, 24, 20, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_005228[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_005228[61], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 15, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP1Triangle(24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_006048[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_0059C8[96], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_009BC0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_0059C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0059C8[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_0059C8[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 6, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(3, 2, 14, 0, 3, 14, 15, 0),
    gsSP2Triangles(13, 16, 9, 0, 13, 9, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 24, 28, 29, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0059C8[78], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 0, 0),
    gsSP2Triangles(7, 8, 5, 0, 7, 5, 4, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 9, 0),
    gsSP2Triangles(15, 2, 16, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_006978[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_006278[104], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_009BC0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_006278, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_006278[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_006278[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 9, 0, 16, 9, 8, 0),
    gsSP2Triangles(15, 14, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(19, 24, 25, 0, 19, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_006278[80], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 9, 0, 20, 21, 22, 0),
    gsSP1Triangle(20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_007000[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_006BB0[61], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 220, 230, 200, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_room_0Tex_008F40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_006BB0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(7, 8, 1, 0, 8, 9, 1, 0),
    gsSP2Triangles(9, 10, 1, 0, 10, 11, 1, 0),
    gsSP2Triangles(11, 12, 1, 0, 12, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_009BC0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_006BB0[13], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_0Tex_00B340, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_006BB0[27], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP1Triangle(0, 2, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C7C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_006BB0[34], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 7, 2, 0, 8, 4, 3, 0),
    gsSP2Triangles(8, 3, 2, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(12, 14, 13, 0, 9, 15, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(16, 20, 17, 0, 20, 21, 17, 0),
    gsSP2Triangles(21, 22, 17, 0, 22, 19, 17, 0),
    gsSP2Triangles(16, 23, 20, 0, 16, 24, 23, 0),
    gsSP2Triangles(16, 25, 24, 0, 1, 26, 2, 0),
    gsSP1Triangle(7, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_0079B8[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_0072B8[104], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_009BC0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_0072B8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0072B8[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00C3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_0072B8[48], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 9, 0, 16, 9, 8, 0),
    gsSP2Triangles(15, 14, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(19, 24, 25, 0, 19, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_0072B8[80], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 9, 0, 20, 21, 22, 0),
    gsSP1Triangle(20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_007F70[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_007BF0[48], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00A3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_007BF0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 16, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 24, 28, 29, 0),
    gsSP2Triangles(24, 29, 30, 0, 24, 30, 31, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_007BF0[32], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_008190[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_0080D0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00B3C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_0080D0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_0084E0[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_008260[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIM_LOD_FRAC, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0x9B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_0Tex_009F40, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_008260, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_shrine_sceneTLUT_00CFC0),
    gsDPLoadTextureBlock(goron_shrine_room_0Tex_00A740, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_008260[16], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_sceneTex_00AFC0, G_IM_FMT_IA, 32, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_shrine_room_0Vtx_008260[28], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_00B9E0[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_00B740[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_shrine_room_0Tex_00BDD0, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_00B740, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 26, 25, 0, 28, 25, 29, 0),
    gsSPVertex(&goron_shrine_room_0Vtx_00B740[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_shrine_room_0DL_00BCD8[] = {
    gsSPVertex(&goron_shrine_room_0Vtx_00BAD8[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_shrine_sceneTex_00A7C0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_shrine_room_0Vtx_00BAD8, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};
