#include "stone_tower_temple_scene.h"
#include "stone_tower_temple_room_9.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "item.h"

SceneCmd stone_tower_temple_room_9[] = {
    SCENE_CMD_ECHO_SETTINGS(6),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_room_9RoomShapeCullable_000210),
    SCENE_CMD_OBJECT_LIST(14, stone_tower_temple_room_9ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(19, stone_tower_temple_room_9ActorEntry_000078),
    SCENE_CMD_END(),
};

s16 stone_tower_temple_room_9ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_BOX,
    OBJECT_KIBAKO2,
    OBJECT_KUSA,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_D_HSBLOCK,
    OBJECT_ICEFLOE,
  //OBJECT_SPINYROLL,
    OBJECT_NY,
  //OBJECT_WDHAND,
  //OBJECT_PR,
    OBJECT_CROW,
  //OBJECT_EG,
  //OBJECT_PP,
    OBJECT_RAT,
  //OBJECT_GORONSWITCH,
    OBJECT_LADDER,
};

ActorEntry stone_tower_temple_room_9ActorEntry_000078[] = {
    { ACTOR_EN_ITEM00,         {  945,   -20, -4065 }, {      0,      0,     0 }, 0x0102 },
    { ACTOR_EN_ITEM00,         {  900,   -20, -4155 }, {      0,      0,     0 }, 0x0200 },
    { ACTOR_EN_ITEM00,         {  990,   -20, -4155 }, {      0,      0,     0 }, 0x0300 },
    { ACTOR_EN_ITEM00,         {  945,   -20, -4155 }, {      0,      0,     0 }, 0x0400 },
    { ACTOR_EN_ITEM00,         {  923,   -20, -4110 }, {      0,      0,     0 }, 0x0501 },
    { ACTOR_EN_ITEM00,         {  967,   -20, -4110 }, {      0,      0,     0 }, 0x0601 },
    { ACTOR_BG_LADDER,         {  600,  -500, -3540 }, {      0, 0x8000,     0 }, 0x1E01 },
    { ACTOR_BG_LADDER,         {  600,  -260, -3540 }, {      0, 0x8000,     0 }, 0x1E01 },
  //{ ACTOR_BG_HAKUGIN_SWITCH, { 1260,  -515, -3630 }, {      0,      0,     0 }, 0x1900 },
  //{ ACTOR_OBJ_ETCETERA,      { 1290,   -20, -3480 }, {      0, 0x8000,     0 }, 0x007F },
    { ACTOR_EN_RAT,            {  690,    90, -4230 }, { 0xC000, 0xC000,     0 }, 0x0032 },
    { ACTOR_OBJ_TSUBO,         {  615,   -20, -3465 }, {      0,      0,     0 }, 0x0186 },
    { ACTOR_OBJ_TSUBO,         {  615,   -20, -3375 }, {      0,      0,     0 }, 0x0186 },
    { ACTOR_OBJ_TSUBO,         {  585,   -20, -3465 }, {      0,      0,     0 }, 0x0187 },
    { ACTOR_OBJ_TSUBO,         {  585,   -20, -3375 }, {      0,      0,     0 }, 0x0187 },
    { ACTOR_OBJ_FIRESHIELD,    {  960,  -515, -3420 }, {      0,      0, 0x156 }, 0x8D99 },
    { ACTOR_OBJ_FIRESHIELD,    {  960,   -20, -3420 }, {      0,      0,     0 }, 0x4D1B },
    { ACTOR_OBJ_LIGHTSWITCH,   {  960,   -95, -3420 }, { 0x4000, 0x8000,     0 }, 0x1E00 },
    { ACTOR_OBJ_SWITCH,        {  960,  -515, -3420 }, {      0, 0x8000,     0 }, 0x1B00 }, // Switch: 1B, floor
  //{ ACTOR_OBJ_WIND,          {  690,  -380, -3852 }, {      0,      0,     0 }, 0x007F },
  //{ ACTOR_OBJ_WIND,          {  990,  -380, -4590 }, {      0,      0,     0 }, 0x007F },
  //{ ACTOR_OBJ_WIND,          { 1260,  -380, -4020 }, {      0,      0,     0 }, 0x007F },
    { ACTOR_EN_BOX,            {  960,   -20, -3420 }, {      0, 0xC000,     0 }, 0x522D },
    { ACTOR_EN_BOX,            {  945,   -20, -3945 }, {      0, 0x8000,     0 }, 0x5239 },
};

RoomShapeCullable stone_tower_temple_room_9RoomShapeCullable_000210 = { 
    2, 12,
    stone_tower_temple_room_9RoomShapeCullableEntry_00021C,
    stone_tower_temple_room_9RoomShapeCullableEntry_00021C + ARRAY_COUNTU(stone_tower_temple_room_9RoomShapeCullableEntry_00021C)
};

RoomShapeCullableEntry stone_tower_temple_room_9RoomShapeCullableEntry_00021C[12] = {
    { {    810,    115,  -3420 },    352, stone_tower_temple_room_9DL_0011E0, NULL },
    { {    975,   -440,  -4221 },    554, stone_tower_temple_room_9DL_000B70, NULL },
    { {   1380,   -247,  -3544 },    240, stone_tower_temple_room_9DL_0048B8, NULL },
    { {    990,    100,  -3735 },    450, stone_tower_temple_room_9DL_004AD0, NULL },
    { {    540,     60,  -3420 },    122, stone_tower_temple_room_9DL_004CF0, NULL },
    { {    990,    175,  -4050 },    882, stone_tower_temple_room_9DL_001730, NULL },
    { {    990,   -260,  -4050 },    894, stone_tower_temple_room_9DL_0022B0, NULL },
    { {    990,    175,  -3855 },    616, stone_tower_temple_room_9DL_0031E8, NULL },
    { {    990,   -500,  -4020 },    806, stone_tower_temple_room_9DL_0003F0, NULL },
    { {   1290,    175,  -3390 },    274, stone_tower_temple_room_9DL_0039E8, NULL },
    { {    990,   -493,  -4170 },    758, stone_tower_temple_room_9DL_001BA8, NULL },
    { {    990,    -65,  -4500 },    560, stone_tower_temple_room_9DL_004558, NULL },
};

s32 stone_tower_temple_room_9_terminatorMaybe_0002DC = { 0x01000000 };

Vtx stone_tower_temple_room_9Vtx_0002E0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_0002E0.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_0004E0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_0004E0.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_000DA0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_000DA0.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_001520[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_001520.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_001838[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_001838.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_001D70[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_001D70.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_002428[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_002428.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_003608[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_003608.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_003D08[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_003D08.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_0047B8[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_0047B8.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_004990[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_004990.vtx.inc"
};

Vtx stone_tower_temple_room_9Vtx_004BB0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Vtx_004BB0.vtx.inc"
};

u64 stone_tower_temple_room_9Tex_004E38[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_004E38.ia8.inc.c"
};

u64 stone_tower_temple_room_9Tex_005638[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_005638.rgba16.inc.c"
};

u64 stone_tower_temple_room_9Tex_005E38[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_005E38.rgba16.inc.c"
};

u64 stone_tower_temple_room_9Tex_006638[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_006638.ci8.inc.c"
};

u64 stone_tower_temple_room_9Tex_006A38[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_006A38.ci8.inc.c"
};

u64 stone_tower_temple_room_9Tex_006E38[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_006E38.ci4.inc.c"
};

u64 stone_tower_temple_room_9Tex_007638[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_007638.ci8.inc.c"
};

u64 stone_tower_temple_room_9Tex_007E38[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9Tex_007E38.ci8.inc.c"
};

u64 stone_tower_temple_room_9TLUT_008238[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_9TLUT_008238.rgba16.inc.c"
};

Gfx stone_tower_temple_room_9DL_0003F0[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_0002E0[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL1, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x82, 205, 180, 175, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00D7B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 3, 2),
    gsDPLoadMultiBlock(stone_tower_temple_room_9Tex_005638, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 1),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_0002E0, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(8, 4, 3, 0, 8, 3, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_000B70[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_0004E0[97], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_006638, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_0004E0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 16, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_006A38, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_0004E0[24], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 14, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(29, 31, 27, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_0004E0[56], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 6, 7, 8, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 12, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 22, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 31, 28, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_0004E0[88], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_0011E0[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_000DA0[60], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0106B0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_000DA0, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(4, 0, 2, 0, 0, 5, 6, 0),
    gsSP2Triangles(0, 7, 5, 0, 8, 9, 6, 0),
    gsSP2Triangles(8, 6, 5, 0, 10, 5, 7, 0),
    gsSP2Triangles(0, 6, 1, 0, 6, 9, 1, 0),
    gsSP2Triangles(5, 10, 8, 0, 11, 10, 7, 0),
    gsSP2Triangles(12, 11, 7, 0, 12, 13, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_000DA0[14], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_010FB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_000DA0[26], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_000DA0[46], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011830, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_000DA0[56], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_001730[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_001520[25], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_007638, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_001520, 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 9, 12, 0, 10, 12, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 14, 0, 18, 14, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 11, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 22, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_001BA8[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_001838[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_temple_room_9TLUT_008238),
    gsDPLoadTextureBlock_4b(stone_tower_temple_room_9Tex_006E38, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_001838, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(16, 18, 21, 0, 16, 21, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00E2B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_001838[22], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 3, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 15, 20, 19, 0),
    gsSP2Triangles(15, 19, 16, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 11, 21, 24, 0),
    gsSP1Triangle(11, 24, 12, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_0022B0[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_001D70[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, stone_tower_temple_room_9TLUT_008238),
    gsDPLoadTextureBlock_4b(stone_tower_temple_room_9Tex_006E38, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_001D70, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_001D70[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(15, 18, 19, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_001D70[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_0031E8[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[212], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_007638, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_002428, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 6, 1, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(14, 22, 15, 0, 18, 21, 23, 0),
    gsSP2Triangles(14, 18, 23, 0, 14, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 11, 12, 0),
    gsSP2Triangles(7, 12, 8, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 22, 0),
    gsSP2Triangles(19, 22, 20, 0, 15, 23, 16, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00E2B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[76], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[84], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[116], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[148], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[180], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011830, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_002428[204], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_0039E8[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_003608[54], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_007638, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_003608, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00EAB0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003608[6], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_0107B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003608[14], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003608[26], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011830, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003608[46], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_004558[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_003D08[125], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_00E2B0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_003D08, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(14, 15, 1, 0, 14, 1, 0, 0),
    gsSP2Triangles(16, 17, 5, 0, 16, 5, 4, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_sceneTex_011730, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003D08[26], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003D08[57], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003D08[89], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&stone_tower_temple_room_9Vtx_003D08[121], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_0048B8[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_0047B8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_sceneTLUT_012430),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_007E38, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_0047B8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_004AD0[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_004990[12], 8, 0),
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
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_004990, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx stone_tower_temple_room_9DL_004CF0[] = {
    gsSPVertex(&stone_tower_temple_room_9Vtx_004BB0[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xD7, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(stone_tower_temple_room_9Tex_004E38, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(stone_tower_temple_room_9Tex_005E38, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_9Vtx_004BB0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSPEndDisplayList(),
};
