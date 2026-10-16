#include "stone_tower_temple_scene.h"
#include "stone_tower_temple_room_8.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd stone_tower_temple_room_8[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_room_8RoomShapeCullable_0001F0),
    //SCENE_CMD_OBJECT_LIST(25, stone_tower_temple_room_8ObjectList_000040),
    //SCENE_CMD_ACTOR_LIST(23, stone_tower_temple_room_8ActorEntry_000074),
    SCENE_CMD_END(),
};

/*s16 stone_tower_temple_room_8ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_WARP1,
    OBJECT_BOX,
    OBJECT_KIBAKO2,
    OBJECT_KUSA,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_D_HSBLOCK,
    OBJECT_ICEFLOE,
    OBJECT_SPINYROLL,
    OBJECT_MKK,
    OBJECT_NY,
    OBJECT_WDHAND,
    OBJECT_PR,
    OBJECT_VM,
    OBJECT_GRASSHOPPER,
    OBJECT_PO,
    OBJECT_RAT,
    OBJECT_AM,
    OBJECT_GMO,
    OBJECT_CROW,
    OBJECT_EG,
    OBJECT_PP,
};*/

/*ActorEntry stone_tower_temple_room_8ActorEntry_000074[] = {
    { ACTOR_EN_ITEM00,     {  60,  -30, -2070 }, {      0,      0,    0 }, { 0x0701 },
    { ACTOR_EN_ITEM00,     { -60,  -30, -2070 }, {      0,      0,    0 }, { 0x0801 },
    { ACTOR_EN_ITEM00,     {  60,  -30, -2115 }, {      0,      0,    0 }, { 0x0901 },
    { ACTOR_EN_ITEM00,     { -60,  -30, -2115 }, {      0,      0,    0 }, { 0x0A01 },
    { ACTOR_EN_ITEM00,     {  60,  -30, -2295 }, {      0,      0,    0 }, { 0x0B01 },
    { ACTOR_EN_ITEM00,     { -60,  -30, -2295 }, {      0,      0,    0 }, { 0x0C01 },
    { ACTOR_EN_ITEM00,     {  60,  -30, -2340 }, {      0,      0,    0 }, { 0x0D01 },
    { ACTOR_EN_ITEM00,     { -60,  -30, -2340 }, {      0,      0,    0 }, { 0x0E01 },
    { ACTOR_OBJ_HSBLOCK,   {   0,  295, -2775 }, {   0x5A,      0,    0 }, { 0x0042 },
    { ACTOR_OBJ_HSBLOCK,   {   0, -440, -2430 }, {  0x10E, 0x8000,    0 }, { 0x0042 },
    { ACTOR_OBJ_SPINYROLL, {   0, -270, -2340 }, {      0,      0,    0 }, { 0x4102 },
    { ACTOR_OBJ_SPINYROLL, {   0, -225, -2025 }, {      0,      0,    0 }, { 0x4201 },
    { ACTOR_EN_PP,         {   0,   90, -2130 }, {      0, 0x8000,    0 }, { 0x0000 },
    { ACTOR_OBJ_SWITCH,    {   0,  -60, -2325 }, { 0x8000, 0x8000,    0 }, { 0x1603 },
    { ACTOR_OBJ_TSUBO,     { -30, -440, -1995 }, {      0,      0,    0 }, { 0x000A },
    { ACTOR_OBJ_TSUBO,     { -30, -440, -1965 }, {      0,      0,    0 }, { 0x000A },
    { ACTOR_OBJ_TSUBO,     {  30, -440, -1995 }, {      0,      0,    0 }, { 0x000A },
    { ACTOR_OBJ_TSUBO,     {  30, -440, -1965 }, {      0,      0,    0 }, { 0x000A },
    { ACTOR_OBJ_TSUBO,     { -30, -440, -1935 }, {      0,      0,    0 }, { 0x000B },
    { ACTOR_OBJ_TSUBO,     {  30, -440, -1935 }, {      0,      0,    0 }, { 0x000B },
    { ACTOR_OBJ_TSUBO,     {  30, -440, -1905 }, {      0,      0,    0 }, { 0x480B },
    { ACTOR_OBJ_TSUBO,     { -30, -440, -1905 }, {      0,      0,    0 }, { 0x4810 },
    { ACTOR_EN_BOX,        {   0, -440, -2070 }, {      0, 0x8000, 0x16 }, { 0xC234 },
};*/

RoomShapeCullable stone_tower_temple_room_8RoomShapeCullable_0001F0 = { 
    2, 9,
    stone_tower_temple_room_8RoomShapeCullableEntry_0001FC,
    stone_tower_temple_room_8RoomShapeCullableEntry_0001FC + ARRAY_COUNTU(stone_tower_temple_room_8RoomShapeCullableEntry_0001FC)
};

RoomShapeCullableEntry stone_tower_temple_room_8RoomShapeCullableEntry_0001FC[9] = {
    { {      0,     67,  -2379 },    564, stone_tower_temple_room_8DL_000390, NULL },
    { {      0,     30,  -2385 },    560, stone_tower_temple_room_8DL_0007A0, NULL },
    { {      0,    207,  -2895 },    118, stone_tower_temple_room_8DL_000AB8, NULL },
    { {      0,    -73,  -2385 },    644, stone_tower_temple_room_8DL_001748, NULL },
    { {      0,     15,  -2310 },    312, stone_tower_temple_room_8DL_0021D0, NULL },
    { {      0,   -125,  -2205 },    248, stone_tower_temple_room_8DL_002DE8, NULL },
    { {      0,   -125,  -2213 },    218, stone_tower_temple_room_8DL_0039D0, NULL },
    { {      0,   -410,  -2325 },    454, stone_tower_temple_room_8DL_003148, NULL },
    { {      0,      5,  -2740 },     70, stone_tower_temple_room_8DL_003610, NULL },
};

s32 stone_tower_temple_room_8_terminatorMaybe_00028C = { 0x01000000 };

Vtx stone_tower_temple_room_8Vtx_000290[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_000290.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_0004E0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_0004E0.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_0008B8[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_0008B8.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_000C28[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_000C28.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_001C70[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_001C70.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_002528[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_002528.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_003048[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_003048.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_003220[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_003220.vtx.inc"
};

Vtx stone_tower_temple_room_8Vtx_003750[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Vtx_003750.vtx.inc"
};

u64 stone_tower_temple_room_8Tex_003B28[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Tex_003B28.ci8.inc.c"
};

u64 stone_tower_temple_room_8Tex_003C28[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Tex_003C28.ci8.inc.c"
};

u64 stone_tower_temple_room_8Tex_004428[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_8Tex_004428.ci8.inc.c"
};

Gfx stone_tower_temple_room_8DL_000390[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_000290[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_8Tex_004428, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_000290, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011C30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000290[4], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_0007A0[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_0004E0[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_0004E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_0004E0[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_000AB8[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_0008B8[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_0008B8, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_0008B8[12], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_001748[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[170], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_8Tex_003C28, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_000C28, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 3, 0),
    gsSP2Triangles(11, 12, 4, 0, 11, 4, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(24, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[32], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00E0B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00EAB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[47], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 20, 0, 24, 20, 18, 0),
    gsSP2Triangles(20, 26, 27, 0, 20, 27, 28, 0),
    gsSP2Triangles(29, 30, 24, 0, 29, 24, 18, 0),
    gsSP2Triangles(14, 9, 8, 0, 14, 8, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[78], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010BB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[106], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[114], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(14, 15, 2, 0, 14, 2, 1, 0),
    gsSP2Triangles(7, 6, 16, 0, 7, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 31, 27, 0, 30, 27, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011830, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_000C28[146], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_0021D0[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_001C70[78], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_8Tex_003B28, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_001C70, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_001C70[8], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010BB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_001C70[16], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_001C70[24], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011830, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_001C70[44], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 10, 25, 0, 10, 9, 26, 0),
    gsSP2Triangles(10, 26, 25, 0, 27, 12, 15, 0),
    gsSP2Triangles(27, 15, 28, 0, 15, 29, 28, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_001C70[74], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_002DE8[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_002528[132], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_002528, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_002528[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_002528[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_002528[96], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011830, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_8Vtx_002528[108], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_003148[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_003048[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010BB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_003048, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_003610[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_003220[55], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_003220, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 1, 0, 20, 1, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&stone_tower_temple_room_8Vtx_003220[31], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_8DL_0039D0[] = {
    gsSPVertex(&stone_tower_temple_room_8Vtx_003750[32], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00E6B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_8Vtx_003750, 32, 0),
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
