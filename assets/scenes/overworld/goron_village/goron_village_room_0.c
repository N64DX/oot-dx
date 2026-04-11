#include "goron_village_scene.h"
#include "goron_village_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd goron_village_room_0[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&goron_village_room_0RoomShapeCullable_0000F0),
    SCENE_CMD_OBJECT_LIST(14, goron_village_room_0ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(18, goron_village_room_0ActorEntry_00005C),
    SCENE_CMD_END(),
};

s16 goron_village_room_0ObjectList_00004C[] = {
    OBJECT_HORSE,
    OBJECT_SPOT00_OBJECTS,
    OBJECT_SPOT18_OBJ,
    OBJECT_ICE_OBJECTS,
    OBJECT_D_HSBLOCK,
    OBJECT_GM,
    OBJECT_OF1D_MAP,
    OBJECT_SHOPNUTS,
    OBJECT_KANBAN,
    OBJECT_GI_HEART,
    OBJECT_KIBAKO2,
    OBJECT_KA,
    OBJECT_MAMENOKI,
    OBJECT_FR,
};

ActorEntry goron_village_room_0ActorEntry_00005C[] = {
    { ACTOR_EN_KANBAN,          {  -982, -200,   171 }, {      0, 0x1111,      0 }, 0x0056 },
    { ACTOR_EN_KANBAN,          {  1241, -200,  -741 }, {      0, 0xA4FA,      0 }, 0x0057 },
    { ACTOR_EN_KANBAN,          {  -942, -200, -1866 }, {      0, 0xFDDE,      0 }, 0x0058 },
    { ACTOR_EN_ITEM00,          {   211,  120,   665 }, {      0,      0,      0 }, 0x1E06 },
    { ACTOR_EN_SHOPNUTS,        {   165, -200,   488 }, {      0, 0x8BFC,      0 }, 0x000B },
    { ACTOR_BG_SPOT00_HANEBASI, {  2515, -210, -1515 }, {      0, 0x0BB8,      0 }, 0xFFFD },
    { ACTOR_BG_SPOT00_HANEBASI, {  2550,    0, -1480 }, { 0x4000, 0xC374, 0x4000 }, 0xFFFD },
    { ACTOR_BG_SPOT00_HANEBASI, {  2620,    0, -1220 }, { 0x4000, 0xDECC, 0x4000 }, 0xFFFD },
    { ACTOR_OBJ_VISIBLOCK,      {  1410, -250,  -930 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_VISIBLOCK,      {  1650, -160,  -880 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_VISIBLOCK,      {  1890, -200, -1140 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_VISIBLOCK,      {  2130, -230, -1350 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_OBJ_VISIBLOCK,      {  2350, -265, -1350 }, {      0, 0x05DC,      0 }, 0x0000 },
    { ACTOR_BG_ICE_SHELTER,     { -1130, -140, -2050 }, {      0,      0,      0 }, 0x0508 }, // Switch: 08
    { ACTOR_BG_ICE_SHELTER,     {  2585, -200, -1345 }, {      0, 0xC950,      0 }, 0x0509 }, // Switch: 09
    { ACTOR_BG_SPOT18_SHUTTER,  {  -850, -200,    72 }, {      0, 0x0FA0,      0 }, 0x0000 },
    { ACTOR_OBJ_BEAN,           {   250, -200,   450 }, {      0,      0,      0 }, 0x010A }, // Switch: 0A
    { ACTOR_EN_GO3,             {  -665, -200,    50 }, {      0, 0x0FA0,      0 }, 0x0000 },
};

RoomShapeCullable goron_village_room_0RoomShapeCullable_0000F0 = { 
    2, 39,
    goron_village_room_0RoomShapeCullableEntry_0000FC,
    goron_village_room_0RoomShapeCullableEntry_0000FC +
    ARRAY_COUNTU(goron_village_room_0RoomShapeCullableEntry_0000FC)
};

RoomShapeCullableEntry goron_village_room_0RoomShapeCullableEntry_0000FC[39] = {
    { {  -1138,    -60,  -2001 },    238, goron_village_room_0DL_0066E8, NULL },
    { {  -1780,    260,    703 },    316, goron_village_room_0DL_0069C0, NULL },
    { {   -906,   -140,    -67 },    182, goron_village_room_0DL_006C40, NULL },
    { {   -456,    -20,   -735 },    524, goron_village_room_0DL_000888, NULL },
    { {   -968,   -140,   -215 },     86, goron_village_room_0DL_006DE8, NULL },
    { {  -1135,    -60,  -1864 },    204, goron_village_room_0DL_000FD0, NULL },
    { {   -496,    482,   -576 },    556, goron_village_room_0DL_008240, NULL },
    { {   1229,   -120,   -996 },    232, goron_village_room_0DL_00AEC0, NULL },
    { {   2945,   -302,  -2137 },   2638, goron_village_room_0DL_00A7B0, NULL },
    { {   -842,   -110,     88 },    138, goron_village_room_0DL_00B628, NULL },
    { {    503,     80,   -321 },   2844, goron_village_room_0DL_00C6C8, NULL },
    { {    245,    298,   -573 },    550, goron_village_room_0DL_001640, NULL },
    { {    309,    357,   -575 },    346, goron_village_room_0DL_001D48, NULL },
    { {   -456,    702,   -575 },    836, goron_village_room_0DL_0020C0, NULL },
    { {  -1158,    418,   -576 },    548, goron_village_room_0DL_002800, NULL },
    { {  -1224,    477,   -576 },    346, goron_village_room_0DL_002F10, NULL },
    { {    188,   -200,   -557 },   1516, goron_village_room_0DL_005DB0, NULL },
    { {  -1192,    -60,   -638 },   1560, goron_village_room_0DL_006150, NULL },
    { {   1130,    894,    961 },   2014, goron_village_room_0DL_0063C0, NULL },
    { {   -546,   -200,   -661 },   1222, goron_village_room_0DL_00C8D0, NULL },
    { {   -535,    -20,   -499 },   1598, goron_village_room_0DL_0038B8, NULL },
    { {   -135,    645,    956 },    874, goron_village_room_0DL_003C38, NULL },
    { {    -87,   -114,  -1363 },   3610, goron_village_room_0DL_003EB8, NULL },
    { {    497,  -1251,   -871 },   1586, goron_village_room_0DL_004E18, NULL },
    { {   -456,    -20,   -575 },   1198, goron_village_room_0DL_005098, NULL },
    { {   8964,    290,   2890 },   4326, goron_village_room_0DL_005A78, NULL },
    { {   1179,   -871,    519 },   2294, goron_village_room_0DL_0041F8, NULL },
    { {  -1292,    442,   -522 },   1824, goron_village_room_0DL_0048E0, NULL },
    { {   3406,   -735,  -1642 },   4874, NULL, goron_village_room_0DL_015590 },
    { {   4231,  -1501,  -3151 },   6742, goron_village_room_0DL_00A900, NULL },
    { {   -562,     36,   -451 },   1106, goron_village_room_0DL_00C248, NULL },
    { {   -215,    175,   -609 },   1306, goron_village_room_0DL_00BF48, NULL },
    { {   -457,    442,   -596 },    236, goron_village_room_0DL_00C460, NULL },
    { {    -97,     60,  -1041 },    282, goron_village_room_0DL_0071F0, NULL },
    { {  -1333,     21,  -1146 },    358, goron_village_room_0DL_007748, NULL },
    { {  -1602,    280,    569 },    194, goron_village_room_0DL_00B050, NULL },
    { {   -433,      0,   -780 },   1772, goron_village_room_0DL_00BBB8, NULL },
    { {    339,    -20,   -322 },   2984, goron_village_room_0DL_0093D8, NULL },
    { {   1081,   -272,   -923 },    354, goron_village_room_0DL_008DE8, NULL },
};

s32 goron_village_room_0_terminatorMaybe_00036C = { 0x01000000 };

Vtx goron_village_room_0Vtx_0003D8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_0003D8.vtx.inc"
};

Vtx goron_village_room_0Vtx_000A70[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_000A70.vtx.inc"
};

Vtx goron_village_room_0Vtx_000FE0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_000FE0.vtx.inc"
};

Vtx goron_village_room_0Vtx_001848[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_001848.vtx.inc"
};

Vtx goron_village_room_0Vtx_001EB0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_001EB0.vtx.inc"
};

Vtx goron_village_room_0Vtx_0021D0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_0021D0.vtx.inc"
};

Vtx goron_village_room_0Vtx_002A10[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_002A10.vtx.inc"
};

Vtx goron_village_room_0Vtx_003078[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_003078.vtx.inc"
};

Vtx goron_village_room_0Vtx_003AD8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_003AD8.vtx.inc"
};

Vtx goron_village_room_0Vtx_003CE8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_003CE8.vtx.inc"
};

Vtx goron_village_room_0Vtx_003FD8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_003FD8.vtx.inc"
};

Vtx goron_village_room_0Vtx_004310[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_004310.vtx.inc"
};

Vtx goron_village_room_0Vtx_004AA8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_004AA8.vtx.inc"
};

Vtx goron_village_room_0Vtx_004E28[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_004E28.vtx.inc"
};

Vtx goron_village_room_0Vtx_0051C0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_0051C0.vtx.inc"
};

Vtx goron_village_room_0Vtx_005848[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_005848.vtx.inc"
};

Vtx goron_village_room_0Vtx_005A90[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_005A90.vtx.inc"
};

Vtx goron_village_room_0Vtx_005F10[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_005F10.vtx.inc"
};

Vtx goron_village_room_0Vtx_006280[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_006280.vtx.inc"
};

Vtx goron_village_room_0Vtx_0064A8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_0064A8.vtx.inc"
};

Vtx goron_village_room_0Vtx_006800[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_006800.vtx.inc"
};

Vtx goron_village_room_0Vtx_006AC0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_006AC0.vtx.inc"
};

Vtx goron_village_room_0Vtx_006D28[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_006D28.vtx.inc"
};

Vtx goron_village_room_0Vtx_006E88[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_006E88.vtx.inc"
};

Vtx goron_village_room_0Vtx_007200[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_007200.vtx.inc"
};

Vtx goron_village_room_0Vtx_007758[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_007758.vtx.inc"
};

Vtx goron_village_room_0Vtx_008250[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_008250.vtx.inc"
};

Vtx goron_village_room_0Vtx_0084D8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_0084D8.vtx.inc"
};

Vtx goron_village_room_0Vtx_008B60[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_008B60.vtx.inc"
};

Vtx goron_village_room_0Vtx_008E08[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_008E08.vtx.inc"
};

Vtx goron_village_room_0Vtx_0095C0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_0095C0.vtx.inc"
};

Vtx goron_village_room_0Vtx_00A7C0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00A7C0.vtx.inc"
};

Vtx goron_village_room_0Vtx_00AA00[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00AA00.vtx.inc"
};

Vtx goron_village_room_0Vtx_00AED0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00AED0.vtx.inc"
};

Vtx goron_village_room_0Vtx_00B108[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00B108.vtx.inc"
};

Vtx goron_village_room_0Vtx_00B638[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00B638.vtx.inc"
};

Vtx goron_village_room_0Vtx_00BD08[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00BD08.vtx.inc"
};

Vtx goron_village_room_0Vtx_00C048[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00C048.vtx.inc"
};

Vtx goron_village_room_0Vtx_00C340[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00C340.vtx.inc"
};

Vtx goron_village_room_0Vtx_00C548[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00C548.vtx.inc"
};

Vtx goron_village_room_0Vtx_00C790[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_00C790.vtx.inc"
};

Vtx goron_village_room_0Vtx_015350[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Vtx_015350.vtx.inc"
};

u64 goron_village_room_0Tex_00CAF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00CAF0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_00D2F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00D2F0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_00DAF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00DAF0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_00E2F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00E2F0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_00EAF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00EAF0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_00F2F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00F2F0.i4.inc.c"
};

u64 goron_village_room_0Tex_00FAF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_00FAF0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_0102F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0102F0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_0112F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0112F0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_011AF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_011AF0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_0122F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0122F0.ci8.inc.c"
};

u64 goron_village_room_0Tex_0126F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0126F0.ci4.inc.c"
};

u64 goron_village_room_0Tex_012EF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_012EF0.ci8.inc.c"
};

u64 goron_village_room_0Tex_0132F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0132F0.ci8.inc.c"
};

u64 goron_village_room_0Tex_0134F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0134F0.ci8.inc.c"
};

u64 goron_village_room_0Tex_013CF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_013CF0.ci8.inc.c"
};

u64 goron_village_room_0Tex_0140F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0140F0.ia16.inc.c"
};

u64 goron_village_room_0Tex_0142F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0142F0.ia4.inc.c"
};

u64 goron_village_room_0Tex_014AF0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_014AF0.ci8.inc.c"
};

u64 goron_village_room_0TLUT_0152F0[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0TLUT_0152F0.rgba16.inc.c"
};

u64 goron_village_room_0Tex_0156E8[] = {
#include "assets/scenes/overworld/goron_village/goron_village_room_0Tex_0156E8.ia8.inc.c"
};

static u64 scene_texture_04_Tex_000000[] = {
#include "assets/misc/scene_texture_04/tex_000000.rgba16.inc.c"
};

static u64 scene_texture_04_Tex_003000[] = {
#include "assets/misc/scene_texture_04/tex_003000.i4.inc.c"
};

static u64 scene_texture_04_Tex_004000[] = {
#include "assets/misc/scene_texture_04/tex_004000.i4.inc.c"
};

static u64 scene_texture_04_Tex_004200[] = {
#include "assets/misc/scene_texture_04/tex_004200.rgba16.inc.c"
};

Gfx goron_village_room_0DL_000888[] = {
    gsSPVertex(&goron_village_room_0Vtx_0003D8[67], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0132F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_0003D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005D00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_0Vtx_0003D8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 13, 19, 20, 0),
    gsSP2Triangles(13, 20, 14, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&goron_village_room_0Vtx_0003D8[63], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_000FD0[] = {
    gsSPVertex(&goron_village_room_0Vtx_000A70[54], 8, 0),
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
    gsSPVertex(goron_village_room_0Vtx_000A70, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00CAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_0Vtx_000A70[24], 30, 0),
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

Gfx goron_village_room_0DL_001640[] = {
    gsSPVertex(&goron_village_room_0Vtx_000FE0[94], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00E2F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00D2F0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_000FE0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 8, 14, 9, 0),
    gsSP2Triangles(1, 9, 15, 0, 1, 15, 16, 0),
    gsSP2Triangles(13, 4, 17, 0, 13, 17, 11, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 21, 26, 18, 0),
    gsSP2Triangles(26, 23, 18, 0, 28, 29, 22, 0),
    gsSP2Triangles(30, 19, 31, 0, 19, 22, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_000FE0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 12, 0),
    gsSP2Triangles(13, 4, 7, 0, 13, 7, 12, 0),
    gsSP2Triangles(9, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(9, 8, 14, 0, 12, 17, 18, 0),
    gsSP2Triangles(12, 11, 17, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 18, 0, 20, 13, 21, 0),
    gsSP2Triangles(13, 12, 21, 0, 15, 16, 22, 0),
    gsSP2Triangles(15, 22, 23, 0, 24, 20, 18, 0),
    gsSP2Triangles(24, 18, 25, 0, 23, 22, 26, 0),
    gsSP2Triangles(23, 26, 27, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 29, 30, 0, 31, 24, 25, 0),
    gsSP1Triangle(31, 25, 30, 0),
    gsSPVertex(&goron_village_room_0Vtx_000FE0[64], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 4, 7, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 14, 0, 18, 14, 17, 0),
    gsSP2Triangles(14, 19, 8, 0, 14, 8, 7, 0),
    gsSP2Triangles(7, 6, 20, 0, 7, 20, 21, 0),
    gsSP2Triangles(15, 14, 22, 0, 15, 22, 23, 0),
    gsSP2Triangles(24, 25, 14, 0, 21, 26, 7, 0),
    gsSP2Triangles(26, 14, 7, 0, 27, 28, 15, 0),
    gsSP2Triangles(29, 6, 28, 0, 6, 15, 28, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_001D48[] = {
    gsSPVertex(&goron_village_room_0Vtx_001848[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00E2F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00D2F0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_001848, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_001848[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_001848[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0020C0[] = {
    gsSPVertex(&goron_village_room_0Vtx_001EB0[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA_PRIM2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00DAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00DAF0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_001EB0, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 5, 1, 6, 0),
    gsSP2Triangles(6, 1, 7, 0, 7, 1, 8, 0),
    gsSP2Triangles(9, 1, 10, 0, 10, 1, 0, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 12, 11, 0),
    gsSP2Triangles(15, 12, 16, 0, 17, 12, 15, 0),
    gsSP2Triangles(18, 12, 19, 0, 20, 12, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 13, 12, 24, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_002800[] = {
    gsSPVertex(&goron_village_room_0Vtx_0021D0[91], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00E2F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00D2F0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_0021D0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 2, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 7, 13, 8, 0),
    gsSP2Triangles(1, 8, 14, 0, 1, 14, 15, 0),
    gsSP2Triangles(12, 4, 3, 0, 12, 3, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 19, 24, 16, 0),
    gsSP2Triangles(24, 21, 16, 0, 26, 27, 20, 0),
    gsSP2Triangles(28, 17, 27, 0, 17, 20, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_0021D0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 1, 7, 0),
    gsSP2Triangles(2, 7, 8, 0, 6, 9, 10, 0),
    gsSP2Triangles(6, 10, 11, 0, 12, 3, 6, 0),
    gsSP2Triangles(12, 6, 11, 0, 8, 13, 14, 0),
    gsSP2Triangles(13, 15, 14, 0, 8, 7, 13, 0),
    gsSP2Triangles(11, 16, 17, 0, 11, 10, 16, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 20, 17, 0),
    gsSP2Triangles(19, 12, 20, 0, 12, 11, 20, 0),
    gsSP2Triangles(14, 15, 21, 0, 14, 21, 22, 0),
    gsSP2Triangles(23, 19, 17, 0, 23, 17, 24, 0),
    gsSP2Triangles(22, 21, 25, 0, 22, 25, 26, 0),
    gsSP2Triangles(24, 27, 28, 0, 24, 28, 29, 0),
    gsSP2Triangles(30, 23, 24, 0, 30, 24, 29, 0),
    gsSP1Triangle(26, 25, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_0021D0[64], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 3, 0),
    gsSP2Triangles(7, 3, 6, 0, 2, 1, 9, 0),
    gsSP2Triangles(2, 9, 10, 0, 10, 9, 11, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 13, 0),
    gsSP2Triangles(17, 13, 16, 0, 13, 18, 7, 0),
    gsSP2Triangles(13, 7, 6, 0, 6, 5, 19, 0),
    gsSP2Triangles(6, 19, 20, 0, 14, 13, 21, 0),
    gsSP2Triangles(14, 21, 22, 0, 23, 24, 13, 0),
    gsSP2Triangles(20, 23, 6, 0, 23, 13, 6, 0),
    gsSP2Triangles(25, 26, 14, 0, 19, 5, 26, 0),
    gsSP1Triangle(5, 14, 26, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_002F10[] = {
    gsSPVertex(&goron_village_room_0Vtx_002A10[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00E2F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00D2F0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_002A10, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_002A10[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_002A10[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0038B8[] = {
    gsSPVertex(&goron_village_room_0Vtx_003078[124], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x5A, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0102F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_0102F0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_003078, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&goron_village_room_0Vtx_003078[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 0, 0),
    gsSP2Triangles(15, 0, 3, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 21, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_003078[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 2, 14, 0, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 23, 22, 16, 0),
    gsSP2Triangles(23, 16, 15, 0, 11, 10, 24, 0),
    gsSP2Triangles(11, 24, 25, 0, 25, 24, 21, 0),
    gsSP2Triangles(25, 21, 20, 0, 26, 27, 8, 0),
    gsSP2Triangles(26, 8, 7, 0, 28, 13, 12, 0),
    gsSP1Triangle(28, 12, 29, 0),
    gsSPVertex(&goron_village_room_0Vtx_003078[92], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 0, 6, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 11, 0),
    gsSP2Triangles(18, 11, 20, 0, 21, 22, 1, 0),
    gsSP2Triangles(23, 11, 10, 0, 24, 25, 23, 0),
    gsSP2Triangles(24, 23, 10, 0, 26, 19, 18, 0),
    gsSP2Triangles(27, 26, 18, 0, 27, 18, 28, 0),
    gsSP2Triangles(29, 30, 21, 0, 29, 21, 1, 0),
    gsSP1Triangle(30, 31, 21, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_003C38[] = {
    gsSPVertex(&goron_village_room_0Vtx_003AD8[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00CAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_003AD8, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 7, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 8, 11, 0, 12, 13, 8, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_003EB8[] = {
    gsSPVertex(&goron_village_room_0Vtx_003CE8[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_sceneTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(goron_village_room_0Tex_00F2F0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_003CE8, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 5, 0, 0),
    gsSP2Triangles(4, 6, 5, 0, 3, 7, 2, 0),
    gsSP2Triangles(3, 8, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 9, 12, 0),
    gsSP2Triangles(14, 13, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 17, 11, 13, 0),
    gsSP2Triangles(17, 13, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 20, 10, 11, 0),
    gsSP1Triangle(20, 11, 17, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0041F8[] = {
    gsSPVertex(&goron_village_room_0Vtx_003FD8[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x5A, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_sceneTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_003FD8, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 7, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 15, 12, 11, 0),
    gsSP2Triangles(12, 17, 13, 0, 16, 18, 17, 0),
    gsSP2Triangles(16, 17, 12, 0, 19, 20, 7, 0),
    gsSP2Triangles(19, 21, 20, 0, 21, 17, 20, 0),
    gsSP2Triangles(17, 18, 20, 0, 22, 23, 24, 0),
    gsSP1Triangle(22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0048E0[] = {
    gsSPVertex(&goron_village_room_0Vtx_004310[85], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00CAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(goron_village_room_0Tex_00F2F0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_004310, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 9, 10, 0),
    gsSP2Triangles(5, 10, 2, 0, 11, 12, 4, 0),
    gsSP2Triangles(11, 4, 3, 0, 13, 14, 15, 0),
    gsSP2Triangles(9, 16, 17, 0, 16, 1, 17, 0),
    gsSP2Triangles(9, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 0, 24, 0),
    gsSP2Triangles(23, 1, 0, 0, 23, 17, 1, 0),
    gsSP2Triangles(25, 19, 26, 0, 25, 27, 19, 0),
    gsSP2Triangles(27, 28, 19, 0, 27, 29, 28, 0),
    gsSP2Triangles(29, 15, 28, 0, 19, 21, 26, 0),
    gsSP2Triangles(30, 29, 27, 0, 30, 27, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_004310[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 19, 22, 21, 0),
    gsSP2Triangles(1, 23, 24, 0, 23, 1, 17, 0),
    gsSP2Triangles(15, 17, 1, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 27, 29, 30, 0),
    gsSP2Triangles(27, 30, 25, 0, 12, 30, 29, 0),
    gsSP1Triangle(12, 31, 30, 0),
    gsSPVertex(&goron_village_room_0Vtx_004310[64], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 19, 0),
    gsSP1Triangle(17, 19, 20, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_004E18[] = {
    gsSPVertex(&goron_village_room_0Vtx_004AA8[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x5F, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0112F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_004AA8, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 12, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 0, 24, 0),
    gsSP2Triangles(0, 3, 25, 0, 0, 25, 24, 0),
    gsSP1Triangle(17, 26, 21, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_005098[] = {
    gsSPVertex(&goron_village_room_0Vtx_004E28[31], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0102F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_0102F0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_004E28, 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 9, 10, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 11, 12, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 0, 0, 16, 0, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 24, 25, 0, 17, 22, 25, 0),
    gsSP2Triangles(17, 25, 0, 0, 26, 27, 24, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 26, 28, 0),
    gsSP2Triangles(14, 15, 29, 0, 27, 28, 30, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_005A78_1[] = {
    gsSPVertex(&goron_village_room_0Vtx_0051C0[67], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0122F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_0051C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 5, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 7, 4, 0, 8, 9, 1, 0),
    gsSP2Triangles(8, 1, 0, 0, 9, 10, 3, 0),
    gsSP2Triangles(9, 3, 1, 0, 10, 11, 6, 0),
    gsSP2Triangles(10, 6, 3, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 12, 0, 16, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 13, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 22, 15, 0, 23, 24, 17, 0),
    gsSP2Triangles(23, 17, 16, 0, 24, 25, 19, 0),
    gsSP2Triangles(24, 19, 17, 0, 26, 27, 0, 0),
    gsSP2Triangles(26, 0, 2, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_0051C0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 7, 6, 19, 0),
    gsSP2Triangles(6, 9, 20, 0, 6, 20, 19, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 22, 21, 0),
    gsSP2Triangles(30, 31, 25, 0, 30, 25, 22, 0),
    gsSPVertex(&goron_village_room_0Vtx_0051C0[64], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_005A78_2[] = {
    gsSPVertex(&goron_village_room_0Vtx_005848[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, goron_village_room_0TLUT_0152F0),
    gsDPLoadTextureBlock_4b(goron_village_room_0Tex_0126F0, G_IM_FMT_CI, 128, 32, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_005848, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_005A78[] = {
    gsSPDisplayList(goron_village_room_0DL_005A78_1),
    gsSPDisplayList(goron_village_room_0DL_005A78_2),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_005DB0[] = {
    gsSPVertex(&goron_village_room_0Vtx_005A90[42], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00FAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_sceneTex_001000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_005A90, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(11, 14, 13, 0, 15, 5, 16, 0),
    gsSP2Triangles(17, 10, 12, 0, 17, 12, 8, 0),
    gsSP2Triangles(7, 18, 8, 0, 2, 19, 3, 0),
    gsSP2Triangles(7, 9, 3, 0, 13, 14, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 16, 23, 0),
    gsSP2Triangles(22, 15, 16, 0, 6, 5, 15, 0),
    gsSP2Triangles(6, 15, 24, 0, 25, 23, 26, 0),
    gsSP2Triangles(27, 13, 20, 0, 25, 28, 29, 0),
    gsSP2Triangles(25, 20, 30, 0, 25, 30, 31, 0),
    gsSP2Triangles(25, 31, 28, 0, 20, 14, 30, 0),
    gsSP2Triangles(23, 29, 21, 0, 23, 25, 29, 0),
    gsSPVertex(&goron_village_room_0Vtx_005A90[32], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 5, 0, 0, 9, 1, 0),
    gsSP2Triangles(9, 4, 7, 0, 9, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_006150[] = {
    gsSPVertex(&goron_village_room_0Vtx_005F10[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_04_Tex_004000, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(scene_texture_04_Tex_004200, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_005F10, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 13, 0),
    gsSP2Triangles(14, 13, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(18, 20, 22, 0, 18, 23, 19, 0),
    gsSP2Triangles(23, 24, 19, 0, 24, 11, 19, 0),
    gsSP2Triangles(11, 10, 19, 0, 25, 9, 8, 0),
    gsSP2Triangles(25, 8, 12, 0, 25, 12, 12, 0),
    gsSP2Triangles(12, 14, 25, 0, 26, 9, 25, 0),
    gsSP1Triangle(26, 25, 27, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0063C0[] = {
    gsSPVertex(&goron_village_room_0Vtx_006280[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x91, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_04_Tex_004000, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_04_Tex_004200, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_006280, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 8, 5, 10, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0066E8[] = {
    gsSPVertex(&goron_village_room_0Vtx_0064A8[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_011AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_0064A8, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(2, 4, 7, 0, 2, 7, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0069C0[] = {
    gsSPVertex(&goron_village_room_0Vtx_006800[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_sceneTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_006800, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 2, 0),
    gsSP2Triangles(10, 11, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(4, 6, 16, 0, 4, 16, 17, 0),
    gsSP2Triangles(7, 9, 18, 0, 7, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_006C40[] = {
    gsSPVertex(&goron_village_room_0Vtx_006AC0[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_011AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_006AC0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_006DE8[] = {
    gsSPVertex(&goron_village_room_0Vtx_006D28[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00CAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 2, 2, 2, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_006D28, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0071F0[] = {
    gsSPVertex(&goron_village_room_0Vtx_006E88[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005D00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_006E88, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_007748[] = {
    gsSPVertex(&goron_village_room_0Vtx_007200[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00EAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00EAF0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_007200, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(8, 5, 4, 0, 8, 9, 5, 0),
    gsSP2Triangles(9, 10, 5, 0, 10, 6, 5, 0),
    gsSP2Triangles(10, 11, 6, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 12, 15, 0),
    gsSP2Triangles(17, 16, 15, 0, 17, 15, 18, 0),
    gsSP2Triangles(19, 17, 18, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&goron_village_room_0Vtx_007200[31], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(5, 6, 3, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 13, 12, 11, 0),
    gsSP2Triangles(13, 11, 14, 0, 15, 13, 14, 0),
    gsSP2Triangles(14, 11, 10, 0, 16, 17, 18, 0),
    gsSP1Triangle(16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_008240[] = {
    gsSPVertex(&goron_village_room_0Vtx_007758[122], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_006100, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_007758, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
    gsSP2Triangles(28, 27, 26, 0, 29, 28, 26, 0),
    gsSP2Triangles(30, 29, 26, 0, 25, 30, 26, 0),
    gsSPVertex(&goron_village_room_0Vtx_007758[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 24, 28, 29, 0),
    gsSP2Triangles(24, 29, 30, 0, 24, 30, 25, 0),
    gsSPVertex(&goron_village_room_0Vtx_007758[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 1, 0, 13, 1, 0, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 1, 0),
    gsSP2Triangles(10, 16, 14, 0, 10, 14, 12, 0),
    gsSP2Triangles(8, 17, 16, 0, 8, 16, 10, 0),
    gsSP2Triangles(7, 18, 17, 0, 7, 17, 8, 0),
    gsSP2Triangles(2, 19, 20, 0, 2, 20, 4, 0),
    gsSP2Triangles(1, 15, 19, 0, 1, 19, 2, 0),
    gsSP2Triangles(21, 13, 0, 0, 21, 0, 22, 0),
    gsSP2Triangles(23, 11, 13, 0, 23, 13, 21, 0),
    gsSP2Triangles(24, 9, 11, 0, 24, 11, 23, 0),
    gsSP2Triangles(25, 6, 9, 0, 25, 9, 24, 0),
    gsSP2Triangles(26, 3, 5, 0, 26, 5, 27, 0),
    gsSP2Triangles(22, 0, 3, 0, 22, 3, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_007758[94], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 11, 0),
    gsSP2Triangles(11, 15, 16, 0, 11, 16, 9, 0),
    gsSP2Triangles(9, 16, 17, 0, 9, 17, 5, 0),
    gsSP2Triangles(5, 17, 18, 0, 5, 18, 6, 0),
    gsSP2Triangles(1, 19, 20, 0, 1, 20, 2, 0),
    gsSP2Triangles(2, 20, 14, 0, 2, 14, 13, 0),
    gsSP2Triangles(21, 12, 10, 0, 21, 10, 22, 0),
    gsSP2Triangles(22, 10, 8, 0, 22, 8, 23, 0),
    gsSP2Triangles(23, 8, 4, 0, 23, 4, 24, 0),
    gsSP2Triangles(24, 4, 7, 0, 24, 7, 25, 0),
    gsSP2Triangles(26, 0, 3, 0, 26, 3, 27, 0),
    gsSP2Triangles(27, 3, 12, 0, 27, 12, 21, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_008DE8_3[] = {
    gsSPVertex(&goron_village_room_0Vtx_008250[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00E2F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_00D2F0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_008250, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 0, 7, 0, 1, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(5, 4, 11, 0, 5, 11, 10, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_008DE8_2[] = {
    gsSPVertex(&goron_village_room_0Vtx_0084D8[67], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x5A, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_sceneTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(goron_village_room_0Tex_00F2F0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_0084D8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 5, 8, 0, 9, 3, 1, 0),
    gsSP2Triangles(9, 1, 10, 0, 10, 1, 0, 0),
    gsSP2Triangles(10, 0, 11, 0, 8, 5, 3, 0),
    gsSP2Triangles(8, 3, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_0084D8[32], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 16, 13, 0, 12, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 19, 20, 0),
    gsSP2Triangles(17, 20, 18, 0, 20, 19, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 22, 0, 24, 23, 25, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 15, 14, 0),
    gsSP1Triangle(25, 14, 26, 0),
    gsSPVertex(&goron_village_room_0Vtx_0084D8[59], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_008DE8_1[] = {
    gsSPVertex(&goron_village_room_0Vtx_008B60[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0134F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_008B60, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_008DE8[] = {
    gsSPDisplayList(goron_village_room_0DL_008DE8_1),
    gsSPDisplayList(goron_village_room_0DL_008DE8_2),
    gsSPDisplayList(goron_village_room_0DL_008DE8_3),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_0093D8[] = {
    gsSPVertex(&goron_village_room_0Vtx_008E08[85], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005900, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_008E08, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 6, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 14, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(17, 16, 20, 0, 17, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 11, 10, 0, 22, 10, 23, 0),
    gsSP2Triangles(24, 25, 2, 0, 24, 9, 7, 0),
    gsSP2Triangles(24, 7, 25, 0, 24, 26, 9, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&goron_village_room_0Vtx_008E08[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 5, 0),
    gsSP2Triangles(8, 10, 0, 0, 8, 0, 9, 0),
    gsSP2Triangles(10, 11, 3, 0, 10, 3, 0, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 7, 0, 16, 7, 6, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(25, 28, 29, 0, 25, 29, 26, 0),
    gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
    gsSP2Triangles(24, 27, 11, 0, 11, 27, 3, 0),
    gsSPVertex(&goron_village_room_0Vtx_008E08[63], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(11, 0, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 14, 16, 0, 14, 18, 15, 0),
    gsSP2Triangles(18, 19, 15, 0, 17, 16, 20, 0),
    gsSP1Triangle(15, 21, 16, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00A7B0[] = {
    gsSPVertex(&goron_village_room_0Vtx_0095C0[213], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_sceneTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(scene_texture_04_Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_0095C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(8, 7, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(10, 8, 0, 0, 1, 7, 11, 0),
    gsSP2Triangles(1, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(7, 6, 14, 0, 7, 14, 11, 0),
    gsSP2Triangles(14, 15, 11, 0, 2, 1, 12, 0),
    gsSP2Triangles(2, 12, 16, 0, 12, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 24, 21, 0),
    gsSP2Triangles(23, 21, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 28, 27, 29, 0),
    gsSP2Triangles(30, 31, 28, 0, 30, 28, 29, 0),
    gsSPVertex(&goron_village_room_0Vtx_0095C0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 3, 0),
    gsSP2Triangles(5, 3, 4, 0, 2, 7, 8, 0),
    gsSP2Triangles(4, 2, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(10, 5, 4, 0, 10, 4, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 11, 0),
    gsSP2Triangles(14, 11, 13, 0, 13, 16, 17, 0),
    gsSP2Triangles(18, 14, 13, 0, 18, 13, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 19, 0),
    gsSP2Triangles(22, 19, 21, 0, 21, 24, 11, 0),
    gsSP2Triangles(15, 22, 21, 0, 15, 21, 11, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 22, 15, 0),
    gsSP2Triangles(25, 15, 26, 0, 28, 29, 25, 0),
    gsSP2Triangles(29, 23, 22, 0, 29, 22, 25, 0),
    gsSPVertex(&goron_village_room_0Vtx_0095C0[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 0, 0),
    gsSP2Triangles(6, 7, 3, 0, 6, 3, 0, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(16, 15, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 19, 18, 9, 0),
    gsSP2Triangles(19, 9, 8, 0, 19, 8, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 26, 24, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 30, 31, 0, 27, 31, 28, 0),
    gsSPVertex(&goron_village_room_0Vtx_0095C0[94], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 4, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 4, 3, 14, 0),
    gsSP2Triangles(4, 14, 11, 0, 14, 13, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 15, 0),
    gsSP2Triangles(18, 15, 17, 0, 17, 16, 20, 0),
    gsSP2Triangles(21, 18, 17, 0, 21, 17, 20, 0),
    gsSP2Triangles(22, 16, 15, 0, 19, 23, 22, 0),
    gsSP2Triangles(19, 22, 15, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 24, 0, 27, 24, 26, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_0095C0[126], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(7, 4, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 8, 7, 0, 10, 7, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 1, 0, 0),
    gsSP2Triangles(13, 0, 14, 0, 11, 15, 16, 0),
    gsSP2Triangles(11, 7, 17, 0, 11, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 18, 21, 0, 21, 20, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 22, 0),
    gsSP2Triangles(25, 26, 19, 0, 25, 19, 18, 0),
    gsSP2Triangles(25, 18, 22, 0, 27, 28, 29, 0),
    gsSP2Triangles(29, 28, 30, 0, 28, 31, 30, 0),
    gsSPVertex(&goron_village_room_0Vtx_0095C0[158], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 3, 7, 8, 0),
    gsSP2Triangles(3, 8, 4, 0, 5, 9, 10, 0),
    gsSP2Triangles(5, 10, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 12, 17, 0, 12, 11, 17, 0),
    gsSP2Triangles(16, 5, 14, 0, 16, 14, 12, 0),
    gsSP2Triangles(18, 9, 19, 0, 9, 20, 19, 0),
    gsSP2Triangles(9, 15, 20, 0, 9, 16, 15, 0),
    gsSP2Triangles(9, 5, 16, 0, 21, 10, 9, 0),
    gsSP2Triangles(21, 9, 22, 0, 9, 18, 22, 0),
    gsSP2Triangles(23, 13, 24, 0, 23, 11, 13, 0),
    gsSP2Triangles(13, 25, 26, 0, 13, 26, 24, 0),
    gsSP2Triangles(25, 27, 26, 0, 28, 29, 7, 0),
    gsSP2Triangles(29, 8, 7, 0, 27, 25, 13, 0),
    gsSP1Triangle(30, 21, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_0095C0[190], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 3, 4, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(4, 2, 7, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 5, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 6, 9, 0, 9, 11, 10, 0),
    gsSP2Triangles(8, 7, 10, 0, 8, 10, 12, 0),
    gsSP2Triangles(5, 8, 13, 0, 10, 11, 11, 0),
    gsSP2Triangles(10, 11, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(12, 10, 15, 0, 12, 15, 16, 0),
    gsSP2Triangles(13, 17, 5, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 17, 18, 21, 0),
    gsSP2Triangles(17, 21, 22, 0, 5, 17, 22, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00A900[] = {
    gsSPVertex(&goron_village_room_0Vtx_00A7C0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7F, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(scene_texture_04_Tex_004200, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(scene_texture_04_Tex_004200, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00A7C0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 2, 6, 0),
    gsSP2Triangles(2, 3, 6, 0, 3, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 4, 0),
    gsSP2Triangles(9, 4, 1, 0, 11, 7, 4, 0),
    gsSP1Triangle(7, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00AEC0[] = {
    gsSPVertex(&goron_village_room_0Vtx_00AA00[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005100, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00AA00, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_sceneTex_005900, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_0Vtx_00AA00[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00B050[] = {
    gsSPVertex(&goron_village_room_0Vtx_00AED0[16], 8, 0),
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
    gsSPVertex(goron_village_room_0Vtx_00AED0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00B628[] = {
    gsSPVertex(&goron_village_room_0Vtx_00B108[50], 8, 0),
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
    gsSPVertex(goron_village_room_0Vtx_00B108, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(goron_village_room_0Tex_00CAF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&goron_village_room_0Vtx_00B108[24], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00BBB8[] = {
    gsSPVertex(&goron_village_room_0Vtx_00B638[80], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(goron_village_room_0Tex_0142F0, G_IM_FMT_IA, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00B638, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&goron_village_room_0Vtx_00B638[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 16, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&goron_village_room_0Vtx_00B638[62], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00BF48[] = {
    gsSPVertex(&goron_village_room_0Vtx_00BD08[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_0Tex_013CF0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00BD08, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00C248[] = {
    gsSPVertex(&goron_village_room_0Vtx_00C048[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_0Tex_012EF0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00C048, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00C460[] = {
    gsSPVertex(&goron_village_room_0Vtx_00C340[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(goron_village_sceneTLUT_006500),
    gsDPLoadTextureBlock(goron_village_room_0Tex_014AF0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00C340, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00C6C8[] = {
    gsSPVertex(&goron_village_room_0Vtx_00C548[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0140F0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 8, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_WRAP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00C548, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 1, 0, 0),
    gsSP2Triangles(1, 5, 4, 0, 1, 4, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 7, 10, 0),
    gsSP2Triangles(7, 11, 12, 0, 13, 7, 14, 0),
    gsSP1Triangle(15, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_00C8D0[] = {
    gsSPVertex(&goron_village_room_0Vtx_00C790[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_TEMPLERP, G_CC_MODULATEIA2),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 249),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(scene_texture_04_Tex_004000, G_IM_FMT_I, 32, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(scene_texture_04_Tex_004200, 0x0040, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 3),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_00C790, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 1, 0, 4, 1, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 6, 0),
    gsSPEndDisplayList(),
};

Gfx goron_village_room_0DL_015590[] = {
    gsSPVertex(&goron_village_room_0Vtx_015350[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(goron_village_room_0Tex_0156E8, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(goron_village_room_0Tex_0156E8, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 7, 5, 1, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(goron_village_room_0Vtx_015350, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 1, 0, 0, 7, 0, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 16, 19, 0, 26, 19, 27, 0),
    gsSPEndDisplayList(),
};
