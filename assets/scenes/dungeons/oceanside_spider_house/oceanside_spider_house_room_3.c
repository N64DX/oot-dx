#include "oceanside_spider_house_scene.h"
#include "oceanside_spider_house_room_3.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd oceanside_spider_house_room_3[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&oceanside_spider_house_room_3RoomShapeCullable_0001C0),
    SCENE_CMD_OBJECT_LIST(7, oceanside_spider_house_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(7, oceanside_spider_house_room_3ActorEntry_000058),
    SCENE_CMD_END(),
};

s16 oceanside_spider_house_room_3ObjectList_000040[] = {
  //OBJECT_KINSTA2_OBJ,
    OBJECT_ST,
    OBJECT_KIBAKO2,
    OBJECT_BOX,
  //OBJECT_SPDWEB,
  //OBJECT_SPIDERTENT,
    OBJECT_MKK,
    OBJECT_SYOKUDAI,
  //OBJECT_KIN2_OBJ,
    OBJECT_SKB,
    OBJECT_D_HSBLOCK,
};

ActorEntry oceanside_spider_house_room_3ActorEntry_000058[] = {
    { ACTOR_EN_SW,           { 138,   70, -1020 }, {    0,  0x5A,    0 }, 0x011F },
    { ACTOR_EN_SW,           { 419,  100, -1292 }, {    0,  0xB4,    0 }, 0xFF42 },
    { ACTOR_EN_SW,           { 439,  100, -1243 }, {    0,  0x2D,    0 }, 0xFF46 },
    { ACTOR_EN_SW,           { 402,  100, -1241 }, {    0, 0x13B,    0 }, 0xFF4A },
    { ACTOR_EN_SW,           { 663, -120, -1503 }, {    0, 0x138,    0 }, 0xFF65 },
  //{ ACTOR_TG_SW,           { 420, -120, -1260 }, {  0x3,  0x14, 0x1E }, 0x0040 },
  //{ ACTOR_TG_SW,           { 420, -120, -1260 }, {  0x3,  0x14, 0x1E }, 0x0044 },
  //{ ACTOR_TG_SW,           { 420, -120, -1260 }, {  0x3,  0x14, 0x1E }, 0x0048 },
  //{ ACTOR_TG_SW,           { 663,  -53, -1500 }, {  0x4,  0x1E,  0xC }, 0x0064 },
  //{ ACTOR_EN_HINT_SKB,     { 383, -100, -1368 }, {    0,     0,    0 }, 0xF002 },
  //{ ACTOR_EN_HINT_SKB,     { 463, -100, -1160 }, {    0,  0xB4,    0 }, 0xF003 },
  //{ ACTOR_EN_HINT_SKB,     { 460, -100, -1368 }, {    0,     0,    0 }, 0xF004 },
  //{ ACTOR_EN_HINT_SKB,     { 387, -100, -1157 }, {    0,  0xB4,    0 }, 0xF005 },
    { ACTOR_OBJ_TSUBO,       { 165, -120, -1395 }, {    0,     0,    0 }, 0x741E },
    { ACTOR_OBJ_TSUBO,       { 165, -120, -1335 }, {    0,     0,    0 }, 0x761E },
  //{ ACTOR_BG_SPDWEB,       { 179,   35, -1499 }, { 0x4A,  0x22,    0 }, 0x0E01 },
  //{ ACTOR_OBJ_SPIDERTENT,  { 193,   46, -1012 }, { 0x55,  0x80,    0 }, 0x1600 },
  //{ ACTOR_BG_KIN2_PICTURE, { 359,  -60,  -994 }, {    0,  0xB4,    0 }, 0x003F },
  //{ ACTOR_BG_KIN2_PICTURE, { 480,  -60,  -994 }, {    0,  0xB4,    0 }, 0x003F },
  //{ ACTOR_BG_KIN2_PICTURE, { 359,  -60, -1532 }, {    0,     0,    0 }, 0x003F },
  //{ ACTOR_BG_KIN2_PICTURE, { 479,  -60, -1531 }, {    0,     0,    0 }, 0x0013 },
  //{ ACTOR_BG_KIN2_FENCE,   { 716, -120, -1263 }, {    0, 0x10E,    0 }, 0x0018 },
};

RoomShapeCullable oceanside_spider_house_room_3RoomShapeCullable_0001C0 = { 
    2, 23,
    oceanside_spider_house_room_3RoomShapeCullableEntry_0001CC,
    oceanside_spider_house_room_3RoomShapeCullableEntry_0001CC + ARRAY_COUNTU(oceanside_spider_house_room_3RoomShapeCullableEntry_0001CC)
};

RoomShapeCullableEntry oceanside_spider_house_room_3RoomShapeCullableEntry_0001CC[23] = {
    { {    420,     80,  -1263 },    426, oceanside_spider_house_room_3DL_001540, NULL },
    { {    420,    114,  -1263 },     38, oceanside_spider_house_room_3DL_006DC8, NULL },
    { {    690,     -9,  -1263 },    130, oceanside_spider_house_room_3DL_003B00, NULL },
    { {    660,   -120,  -1263 },     96, oceanside_spider_house_room_3DL_003D88, NULL },
    { {    555,   -120,  -1263 },    488, oceanside_spider_house_room_3DL_005248, NULL },
    { {    423,    -88,  -1263 },    132, oceanside_spider_house_room_3DL_005C20, NULL },
    { {    424,   -105,  -1263 },    132, oceanside_spider_house_room_3DL_006818, NULL },
    { {    420,     65,  -1263 },    382, oceanside_spider_house_room_3DL_006140, NULL },
    { {   1789,    300,  -1261 },    314, oceanside_spider_house_room_3DL_004EE0, NULL },
    { {    420,   -120,  -1263 },   -170, oceanside_spider_house_room_3DL_007208, NULL },
    { {    690,     12,  -1263 },   -232, oceanside_spider_house_room_3DL_007500, NULL },
    { {   1020,     75,  -1263 },    364, oceanside_spider_house_room_3DL_003490, NULL },
    { {   1365,    180,  -1263 },    508, oceanside_spider_house_room_3DL_003FE0, NULL },
    { {    420,     80,  -1263 },     64, oceanside_spider_house_room_3DL_006BB8, NULL },
    { {    420,    114,  -1263 },     60, oceanside_spider_house_room_3DL_001098, NULL },
    { {    420,     80,  -1263 },     64, oceanside_spider_house_room_3DL_007018, NULL },
    { {    420,    120,  -1263 },    384, oceanside_spider_house_room_3DL_000460, NULL },
    { {    420,    -87,  -1263 },    372, oceanside_spider_house_room_3DL_002918, NULL },
    { {    420,    -30,  -1263 },    394, oceanside_spider_house_room_3DL_004810, NULL },
    { {   1800,    300,  -1263 },    356, oceanside_spider_house_room_3DL_004A90, NULL },
    { {    690,      7,  -1263 },     80, oceanside_spider_house_room_3DL_002F40, NULL },
    { {    135,    -63,  -1263 },     76, oceanside_spider_house_room_3DL_0043B8, NULL },
    { {    673,     12,  -1263 },    232, oceanside_spider_house_room_3DL_0007A0, NULL },
};

s32 oceanside_spider_house_room_3_terminatorMaybe_00033C = { 0x01000000 };

Vtx oceanside_spider_house_room_3Vtx_000340[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_000340.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_000560[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_000560.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_000A48[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_000A48.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_001240[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_001240.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_001678[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_001678.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_002E00[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_002E00.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_003030[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_003030.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_003600[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_003600.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_003C88[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_003C88.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_003E70[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_003E70.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_004178[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_004178.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_0044C0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_0044C0.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_004950[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_004950.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_004B90[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_004B90.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_005018[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_005018.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_0053A0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_0053A0.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_005F00[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_005F00.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_006258[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_006258.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_006A18[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_006A18.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_006CC8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_006CC8.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_006E78[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_006E78.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_0070F8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_0070F8.vtx.inc"
};

Vtx oceanside_spider_house_room_3Vtx_007300[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Vtx_007300.vtx.inc"
};

u64 oceanside_spider_house_room_3Tex_0076D0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Tex_0076D0.ia16.inc.c"
};

u64 oceanside_spider_house_room_3Tex_007ED0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Tex_007ED0.rgba16.inc.c"
};

u64 oceanside_spider_house_room_3Tex_0086D0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Tex_0086D0.rgba16.inc.c"
};

u64 oceanside_spider_house_room_3Tex_008ED0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Tex_008ED0.ia8.inc.c"
};

u64 oceanside_spider_house_room_3Tex_0092D0[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_3Tex_0092D0.rgba16.inc.c"
};

Gfx oceanside_spider_house_room_3DL_000460[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000340[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00C6C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_000340, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 2, 0, 1, 4, 8, 0),
    gsSP2Triangles(4, 7, 9, 0, 7, 2, 9, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsSP2Triangles(1, 0, 5, 0, 1, 5, 4, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_0007A0[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000560[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 101, 101, 255),
    gsSPClearGeometryMode(G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_000560, 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 2, 4, 0),
    gsSP2Triangles(6, 3, 0, 0, 6, 0, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 101, 255, 101, 255),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000560[7], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 1, 0, 0, 4, 1, 0),
    gsSP2Triangles(6, 3, 1, 0, 5, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 101, 255),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000560[14], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(2, 3, 6, 0, 4, 2, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EA00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 101, 101, 255, 255),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000560[21], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(1, 3, 6, 0, 1, 6, 4, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_001098[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000A48[93], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEI_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00E1C0, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_FOG),
    gsSPClearGeometryMode(G_CULL_BOTH | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_000A48, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 24, 28, 29, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000A48[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000A48[62], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_000A48[78], 15, 0),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 8, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 0, 2, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_001540[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001240[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 68, 68, 68, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_001240, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 6, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(3, 2, 14, 0, 3, 14, 15, 0),
    gsSP2Triangles(11, 10, 16, 0, 11, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(25, 24, 30, 0, 25, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001240[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_002918[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[290], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00E1C0, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_001678, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(20, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 25, 28, 29, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[30], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EF00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[35], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[67], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(11, 10, 16, 0, 11, 16, 17, 0),
    gsSP2Triangles(9, 8, 18, 0, 9, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[99], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(7, 6, 10, 0, 7, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(9, 8, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[131], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 11, 1, 0, 10, 1, 0, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 11, 0, 14, 11, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 15, 0, 20, 15, 14, 0),
    gsSP2Triangles(22, 23, 13, 0, 22, 13, 12, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[163], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 8, 1, 0, 0),
    gsSP2Triangles(10, 11, 5, 0, 10, 5, 4, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 9, 0, 14, 9, 8, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[195], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 10, 11, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(11, 10, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(15, 14, 20, 0, 15, 20, 21, 0),
    gsSP2Triangles(13, 12, 22, 0, 13, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[227], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 6, 12, 0, 7, 12, 13, 0),
    gsSP2Triangles(11, 10, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(13, 12, 18, 0, 13, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[259], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 5, 0, 14, 5, 4, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 12, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(3, 2, 19, 0, 3, 19, 18, 0),
    gsSP2Triangles(24, 25, 17, 0, 24, 17, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F000, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_001678[285], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_002F40[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_002E00[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EE00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_002E00, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_003490[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003030[62], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00C6C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_003030, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 8, 9, 0, 3, 9, 0, 0),
    gsSP2Triangles(10, 7, 6, 0, 10, 6, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 22, 25, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 19, 0, 27, 19, 29, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003030[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 9, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 31, 0, 0, 30, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_003B00[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003600[72], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xC3, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00B6C0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00C6C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_003600, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(1, 18, 19, 0, 1, 19, 2, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003600[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(8, 11, 13, 0, 8, 13, 12, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003600[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_003D88[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003C88[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 14, 15),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00D6C0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 5, 14, 1),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_003C88, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_003FE0[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003E70[15], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EE00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_003E70, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 1, 4, 0),
    gsSP2Triangles(6, 1, 5, 0, 7, 1, 6, 0),
    gsSP2Triangles(8, 1, 7, 0, 2, 1, 8, 0),
    gsSP2Triangles(2, 1, 8, 0, 8, 1, 7, 0),
    gsSP2Triangles(7, 1, 6, 0, 6, 1, 5, 0),
    gsSP2Triangles(5, 1, 4, 0, 4, 1, 3, 0),
    gsSP2Triangles(3, 1, 0, 0, 0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_003E70[9], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_0043B8[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_004178[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_004178, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_004810[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0044C0[45], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00C6C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00B6C0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_0044C0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 9, 0),
    gsSP2Triangles(13, 9, 12, 0, 6, 15, 16, 0),
    gsSP2Triangles(6, 16, 17, 0, 18, 5, 19, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 23, 29, 30, 0),
    gsSP1Triangle(23, 30, 24, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0044C0[31], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_004A90[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_004950[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00C6C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00AEC0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_004950, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 3, 0, 6, 3, 7, 0),
    gsSP2Triangles(7, 3, 5, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 6, 7, 0, 9, 7, 10, 0),
    gsSP2Triangles(10, 7, 8, 0, 10, 8, 11, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_004EE0[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_004B90[45], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xAF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_sceneTex_00CEC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_004B90, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 24, 0, 28, 24, 27, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_004B90[30], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_005248[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_005018[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00CEC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(oceanside_spider_house_sceneTex_00AEC0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_005018, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 0, 8, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 9, 11, 0, 13, 14, 11, 0),
    gsSP2Triangles(0, 14, 8, 0, 14, 4, 8, 0),
    gsSP2Triangles(8, 7, 1, 0, 12, 11, 10, 0),
    gsSP2Triangles(15, 16, 13, 0, 5, 4, 16, 0),
    gsSP2Triangles(17, 9, 18, 0, 3, 18, 0, 0),
    gsSP2Triangles(14, 13, 16, 0, 4, 14, 16, 0),
    gsSP2Triangles(14, 13, 16, 0, 4, 14, 16, 0),
    gsSP2Triangles(9, 14, 18, 0, 14, 0, 18, 0),
    gsSP2Triangles(18, 3, 17, 0, 5, 16, 15, 0),
    gsSP2Triangles(19, 12, 20, 0, 19, 15, 13, 0),
    gsSP2Triangles(19, 13, 12, 0, 21, 10, 22, 0),
    gsSP2Triangles(10, 9, 17, 0, 10, 17, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_005C20[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0053A0[128], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00E600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_0053A0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 14, 17, 0, 18, 17, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 20, 23, 0, 24, 23, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F040, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0053A0[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0053A0[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0053A0[96], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F340, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0053A0[112], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_006140[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_005F00[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_005F00, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 12, 15, 0, 20, 15, 21, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 20, 21, 0),
    gsSP2Triangles(24, 16, 19, 0, 24, 19, 25, 0),
    gsSP2Triangles(26, 27, 24, 0, 26, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_006818[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_006258[84], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00E200, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_006258, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F140, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_006258[20], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_3Vtx_006258[52], 32, 0),
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

Gfx oceanside_spider_house_room_3DL_006BB8[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_006A18[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 0, TEXEL1, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_3Tex_007ED0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_room_3Tex_0076D0, 0x0100, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_006A18, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 1, 0, 17, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_006DC8[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_006CC8[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_3Tex_0092D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BOTH | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_006CC8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_007018[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_006E78[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 0, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_3Tex_008ED0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_006E78, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 1, 0, 17, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_007208[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_0070F8[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 129),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00BEC0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(oceanside_spider_house_room_3Tex_0086D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_0070F8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 6, 5, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 6, 5, 0),
    gsSP2Triangles(0, 3, 7, 0, 6, 0, 7, 0),
    gsSP2Triangles(1, 0, 8, 0, 0, 4, 8, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_3DL_007500[] = {
    gsSPVertex(&oceanside_spider_house_room_3Vtx_007300[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetPrimColor(0, 0xFF, 0, 0, 0, 100),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00E1C0, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_3Vtx_007300, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSPEndDisplayList(),
};
