#include "roadtofortress_scene.h"
#include "roadtofortress_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd roadtofortress_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x00, 0x04, false, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_WIND_SETTINGS(80, 80, 80, 0),
    SCENE_CMD_ROOM_SHAPE(&roadtofortress_room_0RoomShapeCullable_000550),
    SCENE_CMD_OBJECT_LIST(7, roadtofortress_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(34, roadtofortress_room_0ActorEntry_000064),
    SCENE_CMD_END(),
};

s16 roadtofortress_room_0ObjectList_000040[] = {
    OBJECT_HORSE,
    OBJECT_WOOD02,
    OBJECT_KIBAKO2,
    OBJECT_TITE,
    OBJECT_BOMBIWA,
    OBJECT_UMAJUMP,
    OBJECT_GOROIWA,
};

ActorEntry roadtofortress_room_0ActorEntry_000064[] = {
    { ACTOR_EN_WOOD02,           {  2115, 475,   -841 }, { 0,      0,  0 }, 0xFF0A },
    { ACTOR_OBJ_KIBAKO2,         {  2115, 475,   -941 }, { 0,      0,  0 }, 0x0000 },
    { ACTOR_EN_TITE,             { -2207,   0,   -181 }, { 0, 0x7900,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             { -1394,  41,   -402 }, { 0, 0x8B80,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {   -40, 200,   -654 }, { 0, 0x9000,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {  1286, 215,  -1239 }, { 0,      0,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {   788, 200,     94 }, { 0, 0x3300,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {   358, 200,   -363 }, { 0, 0x3F00,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {  1182, 200,   -624 }, { 0,      0,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {  -596, 193,   -593 }, { 0, 0x9280,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {   755, 233,  -1394 }, { 0, 0x4C80,  0 }, 0xFFFD },
    { ACTOR_EN_TITE,             {  2856, 491,   -837 }, { 0, 0x2000,  0 }, 0xFFFE },
    { ACTOR_EN_TITE,             {  3041, 508,   -519 }, { 0, 0x4000,  0 }, 0xFFFE },
    { ACTOR_EN_TITE,             {  4804, 575,   -187 }, { 0, 0x6000,  0 }, 0xFFFE },
    { ACTOR_EN_TITE,             {  4141, 575,   -655 }, { 0, 0x8000,  0 }, 0xFFFE },
    { ACTOR_EN_TITE,             {  4102, 575,   -226 }, { 0, 0xA000,  0 }, 0xFFFE },
    { ACTOR_EN_TITE,             {  3720, 575,   -675 }, { 0, 0xC000,  0 }, 0xFFFE },
    { ACTOR_OBJ_BOMBIWA,         {  3949, 575,   -685 }, { 0, 0,       0 }, 0x00FF },
    { ACTOR_OBJ_BOMBIWA,         {  3166, 515,   -895 }, { 0, 0,       0 }, 0x00FF },
    { ACTOR_OBJ_BOMBIWA,         {  2338, 475,   -472 }, { 0, 0,       0 }, 0x00FF },
    { ACTOR_OBJ_BOMBIWA,         {  3333, 564,   -547 }, { 0, 0,       0 }, 0x00FF },
    { ACTOR_OBJ_BOMBIWA,         {  4764, 575,   -120 }, { 0, 0,       0 }, 0x00FF },
    { ACTOR_OBJ_BOMBIWA,         {  2528, 475,  -1061 }, { 0, 0,       0 }, 0x00FF },
    { ACTOR_DOOR_ANA,            {  1740, 200,    -94 }, { 0, 0,      17 }, 0x0000 },
    { ACTOR_OBJ_MURE2,           {  1740, 200,    -94 }, { 0, 0,       0 }, 0x0202 },
    { ACTOR_BG_UMAJUMP,          {  -355, 200,   -668 }, { 0, 0x47C0,  0 }, 0x0000 },
    { ACTOR_BG_UMAJUMP,          {  -294, 200,   -354 }, { 0, 0x47C0,  0 }, 0x0000 },
    { ACTOR_BG_UMAJUMP,          {   790, 200,   -550 }, { 0, 0x57C0,  0 }, 0x0000 },
    { ACTOR_BG_UMAJUMP,          {   966, 200,   -283 }, { 0, 0x57C0,  0 }, 0x0000 },
    { ACTOR_BG_UMAJUMP,          {  1115, 200,    109 }, { 0, 0x4E80,  0 }, 0x0000 },
    { ACTOR_BG_UMAJUMP,          {  1227, 200,    409 }, { 0, 0x4E80,  0 }, 0x0000 },
    { ACTOR_EN_GOROIWA,          {  3775, 1461, -1170 }, { 0,     0,   1 }, 0x4D01 },
    { ACTOR_EN_GOROIWA,          {  4443, 1462,    45 }, { 0,     0,   1 }, 0x4D02 },
    { ACTOR_EN_A_OBJ,            {  1614,  200,  -877 }, { 0, 0x4180,  0 }, 0x460A },
};

u8 roadtofortress_room_0padding_1[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable roadtofortress_room_0RoomShapeCullable_000550 = { 
    2, 14,
    roadtofortress_room_0RoomShapeCullableEntry_00055C,
    roadtofortress_room_0RoomShapeCullableEntry_00055C + ARRAY_COUNTU(roadtofortress_room_0RoomShapeCullableEntry_00055C)
};

RoomShapeCullableEntry roadtofortress_room_0RoomShapeCullableEntry_00055C[14] = {
    { {    611,    292,    -77 },    140, roadtofortress_room_0DL_001DF8, NULL },
    { {   1074,    414,    -93 },    298, roadtofortress_room_0DL_002440, NULL },
    { {    990,    395,  -1524 },    192, roadtofortress_room_0DL_002A18, NULL },
    { {   1959,    253,   -220 },     82, roadtofortress_room_0DL_002DA0, NULL },
    { {   2029,    247,  -1171 },     76, roadtofortress_room_0DL_003160, NULL },
    { {   1265,    493,  -1944 },    450, roadtofortress_room_0DL_003450, NULL },
    { {    401,    424,   -800 },    428, roadtofortress_room_0DL_003838, NULL },
    { {  -2055,    135,   -401 },    614, NULL, roadtofortress_room_0DL_004BA8 },
    { {   -108,    287,  -1330 },   4808, roadtofortress_room_0DL_003B38, NULL },
    { {   5847,    575,   -482 },   1584, roadtofortress_room_0DL_003DB0, NULL },
    { {   1254,    887,  -1174 },   6156, roadtofortress_room_0DL_0013D8, NULL },
    { {   1361,    337,  -1032 },   1112, roadtofortress_room_0DL_0018E0, NULL },
    { {  -1369,    220,  -1730 },   3762, roadtofortress_room_0DL_0041E0, NULL },
    { {   -875,    170,  -1258 },   2546, roadtofortress_room_0DL_0043C0, NULL },
};

s32 roadtofortress_room_0_terminatorMaybe_00064C = { 0x01000000 };

Vtx roadtofortress_room_0Vtx_000658[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_000658.vtx.inc"
};

Gfx roadtofortress_room_0DL_0013D8[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_000658[208], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008050),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_004050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008050),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_004050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsDPSetTileSize(1, 0x0012, 0x0005, 0x008E, 0x0201),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_000658, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 18, 21, 0, 20, 19, 18, 0),
    gsSP2Triangles(22, 20, 21, 0, 22, 21, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 24, 27, 0, 28, 27, 29, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_000658[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 2, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 10, 6, 0, 10, 3, 2, 0),
    gsSP2Triangles(10, 2, 6, 0, 11, 7, 12, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 18, 0),
    gsSP2Triangles(17, 21, 19, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 25, 26, 0, 22, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_000658[61], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 15, 9, 7, 0),
    gsSP2Triangles(15, 7, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 26, 0),
    gsSP2Triangles(22, 26, 23, 0, 27, 28, 29, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_000658[93], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 6, 0),
    gsSP2Triangles(6, 1, 0, 0, 8, 9, 6, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(11, 12, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 9, 0, 7, 15, 8, 0),
    gsSP2Triangles(15, 10, 8, 0, 15, 16, 10, 0),
    gsSP2Triangles(16, 11, 10, 0, 13, 12, 17, 0),
    gsSP2Triangles(13, 17, 18, 0, 12, 11, 17, 0),
    gsSP2Triangles(17, 19, 20, 0, 17, 20, 18, 0),
    gsSP2Triangles(11, 16, 17, 0, 16, 21, 19, 0),
    gsSP2Triangles(16, 19, 17, 0, 19, 22, 23, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 22, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP2Triangles(27, 25, 29, 0, 27, 29, 28, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 31, 28, 0),
    gsSP1Triangle(25, 24, 29, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_000658[125], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 4, 2, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 12, 16, 13, 0),
    gsSP2Triangles(16, 14, 13, 0, 14, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 17, 20, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 19, 0),
    gsSP2Triangles(14, 16, 17, 0, 16, 20, 17, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(24, 27, 25, 0, 26, 25, 28, 0),
    gsSP1Triangle(26, 28, 29, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_000658[155], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 13, 0, 14, 13, 17, 0),
    gsSP2Triangles(14, 17, 18, 0, 13, 16, 19, 0),
    gsSP2Triangles(13, 19, 17, 0, 20, 8, 10, 0),
    gsSP2Triangles(20, 10, 21, 0, 18, 17, 22, 0),
    gsSP2Triangles(18, 22, 23, 0, 17, 19, 24, 0),
    gsSP2Triangles(17, 24, 22, 0, 23, 22, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 22, 24, 27, 0),
    gsSP2Triangles(22, 27, 25, 0, 25, 27, 28, 0),
    gsSP2Triangles(26, 25, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_000658[185], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
    gsSP2Triangles(10, 4, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 14, 12, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_0017E0[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_0017E0.vtx.inc"
};

Gfx roadtofortress_room_0DL_0018E0[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_0017E0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_0017E0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_001A18[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_001A18.vtx.inc"
};

Gfx roadtofortress_room_0DL_001DF8[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_001A18[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_001A18, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 0, 0),
    gsSP2Triangles(7, 9, 4, 0, 7, 4, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 10, 0),
    gsSP2Triangles(17, 19, 14, 0, 17, 14, 18, 0),
    gsSP2Triangles(3, 2, 20, 0, 3, 20, 16, 0),
    gsSP2Triangles(2, 5, 19, 0, 2, 19, 20, 0),
    gsSP2Triangles(5, 4, 21, 0, 4, 9, 22, 0),
    gsSP2Triangles(15, 14, 23, 0, 14, 19, 24, 0),
    gsSP1Triangle(19, 5, 25, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_001E08[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_001E08.vtx.inc"
};

Gfx roadtofortress_room_0DL_002440[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_001E08[57], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_001E08, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(1, 7, 10, 0, 11, 1, 0, 0),
    gsSP2Triangles(11, 0, 12, 0, 13, 11, 12, 0),
    gsSP2Triangles(13, 12, 14, 0, 15, 0, 3, 0),
    gsSP2Triangles(15, 3, 16, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 3, 5, 0),
    gsSP2Triangles(18, 5, 19, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 8, 7, 0),
    gsSP2Triangles(21, 7, 22, 0, 23, 21, 22, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 7, 1, 0),
    gsSP2Triangles(25, 1, 11, 0, 24, 25, 11, 0),
    gsSP2Triangles(24, 11, 13, 0, 26, 27, 28, 0),
    gsSP1Triangle(26, 28, 29, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_001E08[30], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 2, 17, 0, 2, 1, 17, 0),
    gsSP2Triangles(1, 5, 17, 0, 5, 18, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 19, 16, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(23, 24, 22, 0, 24, 25, 22, 0),
    gsSP2Triangles(25, 26, 22, 0, 26, 20, 22, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_002450[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_002450.vtx.inc"
};

Gfx roadtofortress_room_0DL_002A18[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_002450[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_002450, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 1, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 7, 4, 0),
    gsSP2Triangles(6, 4, 1, 0, 8, 9, 6, 0),
    gsSP2Triangles(8, 6, 5, 0, 9, 10, 7, 0),
    gsSP2Triangles(9, 7, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(3, 2, 12, 0, 3, 12, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 4, 7, 19, 0),
    gsSP2Triangles(20, 21, 18, 0, 21, 22, 18, 0),
    gsSP2Triangles(22, 16, 18, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 25, 0, 27, 26, 25, 0),
    gsSP2Triangles(28, 27, 25, 0, 29, 28, 25, 0),
    gsSP1Triangle(24, 29, 25, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_002450[30], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 5, 2, 0, 1, 6, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(10, 9, 11, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 4, 5, 0, 17, 5, 18, 0),
    gsSP2Triangles(18, 5, 6, 0, 18, 6, 19, 0),
    gsSP2Triangles(19, 6, 1, 0, 19, 1, 20, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_002A28[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_002A28.vtx.inc"
};

Gfx roadtofortress_room_0DL_002DA0[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_002A28[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_002A28, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 1, 11, 2, 0),
    gsSP2Triangles(11, 12, 2, 0, 4, 13, 5, 0),
    gsSP2Triangles(14, 0, 2, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 12, 19, 2, 0),
    gsSP2Triangles(19, 14, 2, 0, 20, 21, 16, 0),
    gsSP1Triangle(20, 16, 15, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_002DB0[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_002DB0.vtx.inc"
};

Gfx roadtofortress_room_0DL_003160[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_002DB0[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_002DB0, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 10, 1, 0, 0),
    gsSP2Triangles(12, 7, 9, 0, 3, 2, 13, 0),
    gsSP2Triangles(3, 13, 14, 0, 8, 15, 9, 0),
    gsSP2Triangles(16, 4, 6, 0, 17, 12, 9, 0),
    gsSP2Triangles(18, 17, 9, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 6, 0),
    gsSP2Triangles(24, 16, 6, 0, 15, 18, 9, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_003170[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_003170.vtx.inc"
};

Gfx roadtofortress_room_0DL_003450[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_003170[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_003170, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 3, 4, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 6, 4, 0, 8, 4, 2, 0),
    gsSP2Triangles(9, 8, 2, 0, 9, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(6, 8, 12, 0, 7, 6, 12, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_003460[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_003460.vtx.inc"
};

Gfx roadtofortress_room_0DL_003838[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_003460[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005050, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, roadtofortress_sceneTLUT_008070),
    gsDPLoadMultiBlock_4b(roadtofortress_sceneTex_005050, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_003460, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
    gsSP2Triangles(3, 5, 7, 0, 8, 9, 4, 0),
    gsSP2Triangles(9, 6, 4, 0, 7, 6, 10, 0),
    gsSP2Triangles(6, 11, 10, 0, 6, 9, 11, 0),
    gsSP2Triangles(9, 12, 11, 0, 9, 8, 12, 0),
    gsSP2Triangles(12, 13, 11, 0, 13, 10, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 8, 0),
    gsSP2Triangles(16, 18, 19, 0, 18, 16, 20, 0),
    gsSP2Triangles(21, 18, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 17, 19, 0, 23, 22, 19, 0),
    gsSP2Triangles(0, 19, 21, 0, 22, 23, 2, 0),
    gsSP2Triangles(22, 2, 24, 0, 22, 24, 17, 0),
    gsSP2Triangles(16, 19, 17, 0, 24, 8, 17, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_003848[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_003848.vtx.inc"
};

Gfx roadtofortress_room_0DL_003B38[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_003848[39], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005850, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(roadtofortress_sceneTex_004850, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 4),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_003848, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 5, 6, 0),
    gsSP2Triangles(3, 6, 4, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(5, 10, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 24, 0),
    gsSP2Triangles(20, 24, 25, 0, 20, 25, 26, 0),
    gsSP2Triangles(20, 26, 21, 0, 25, 27, 26, 0),
    gsSP2Triangles(27, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&roadtofortress_room_0Vtx_003848[32], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 6, 4, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_003C80[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_003C80.vtx.inc"
};

Gfx roadtofortress_room_0DL_003DB0[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_003C80[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_005850, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 15, 15),
    gsDPLoadMultiBlock(roadtofortress_sceneTex_004850, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 4),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_003C80, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(5, 0, 6, 0, 0, 7, 6, 0),
    gsSP2Triangles(0, 8, 7, 0, 5, 1, 0, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_004080[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_004080.vtx.inc"
};

Gfx roadtofortress_room_0DL_0041E0[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_004080[14], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 160),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtofortress_sceneTex_007850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(roadtofortress_sceneTex_007050, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_004080, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_0042C0[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_0042C0.vtx.inc"
};

Gfx roadtofortress_room_0DL_0043C0[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_0042C0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, 0, TEXEL1, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 160),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(roadtofortress_sceneTex_007850, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(roadtofortress_sceneTex_006850, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_0042C0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSPEndDisplayList(),
};

Vtx roadtofortress_room_0Vtx_004518[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_004518.vtx.inc"
};

Vtx roadtofortress_room_0Vtx_0048D8[] = {
#include "assets/scenes/overworld/roadtofortress/roadtofortress_room_0Vtx_0048D8.vtx.inc"
};

Gfx roadtofortress_room_0DL_004BA8_1[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_004518[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_003050, G_IM_FMT_I, 32, 128, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(roadtofortress_sceneTex_003850, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_004518, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
};

Gfx roadtofortress_room_0DL_004BA8_2[] = {
    gsSPVertex(&roadtofortress_room_0Vtx_0048D8[19], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(roadtofortress_sceneTex_003050, G_IM_FMT_I, 32, 128, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(roadtofortress_sceneTex_003850, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(roadtofortress_room_0Vtx_0048D8, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(15, 17, 18, 0),
    gsSPEndDisplayList(),
};

Gfx roadtofortress_room_0DL_004BA8[] = {
    gsSPDisplayList(roadtofortress_room_0DL_004BA8_1),
    gsSPDisplayList(roadtofortress_room_0DL_004BA8_2),
    gsSPEndDisplayList(),
};
