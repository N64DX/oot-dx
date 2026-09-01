#include "oceanside_spider_house_scene.h"
#include "oceanside_spider_house_room_4.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd oceanside_spider_house_room_4[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&oceanside_spider_house_room_4RoomShapeCullable_000080),
    SCENE_CMD_OBJECT_LIST(7, oceanside_spider_house_room_4ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(2, oceanside_spider_house_room_4ActorEntry_000058),
    SCENE_CMD_END(),
};

s16 oceanside_spider_house_room_4ObjectList_000040[] = {
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

ActorEntry oceanside_spider_house_room_4ActorEntry_000058[] = {
    { ACTOR_EN_ST,  { 1589, 292, -1262 }, {    0, 0x10E, 0 }, 0x003F },
    { ACTOR_EN_BOX, { 1620, 120, -1263 }, { 0x1F, 0x10E, 0 }, 0x0180 },
};

RoomShapeCullable oceanside_spider_house_room_4RoomShapeCullable_000080 = { 
    2, 12,
    oceanside_spider_house_room_4RoomShapeCullableEntry_00008C,
    oceanside_spider_house_room_4RoomShapeCullableEntry_00008C + ARRAY_COUNTU(oceanside_spider_house_room_4RoomShapeCullableEntry_00008C)
};

RoomShapeCullableEntry oceanside_spider_house_room_4RoomShapeCullableEntry_00008C[12] = {
    { {    690,    -90,  -1263 },     58, oceanside_spider_house_room_4DL_0019E8, NULL },
    { {   1035,      0,  -1263 },    934, oceanside_spider_house_room_4DL_002020, NULL },
    { {   1620,    300,  -1263 },    364, oceanside_spider_house_room_4DL_0009D0, NULL },
    { {   1620,    120,  -1263 },    162, oceanside_spider_house_room_4DL_0011C8, NULL },
    { {    420,   -120,  -1263 },   -170, oceanside_spider_house_room_4DL_003B10, NULL },
    { {   1620,    120,  -1263 },   -128, oceanside_spider_house_room_4DL_003D58, NULL },
    { {    645,   -120,  -1263 },     92, oceanside_spider_house_room_4DL_001B98, NULL },
    { {   1620,    300,  -1263 },    370, oceanside_spider_house_room_4DL_000E78, NULL },
    { {   1020,     75,  -1263 },    364, oceanside_spider_house_room_4DL_0016F8, NULL },
    { {    150,    -30,  -1263 },    286, oceanside_spider_house_room_4DL_003158, NULL },
    { {    945,    180,  -1263 },    880, oceanside_spider_house_room_4DL_002BB8, NULL },
    { {    424,   -105,  -1263 },    132, oceanside_spider_house_room_4DL_003800, NULL },
};

s32 oceanside_spider_house_room_4_terminatorMaybe_00014C = { 0x01000000 };

Vtx oceanside_spider_house_room_4Vtx_000150[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_000150.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_000BB8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_000BB8.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_000FE8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_000FE8.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_001318[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_001318.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_001868[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_001868.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_001AD8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_001AD8.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_001C70[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_001C70.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_0021C8[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_0021C8.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_003058[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_003058.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_003240[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_003240.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_003A00[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_003A00.vtx.inc"
};

Vtx oceanside_spider_house_room_4Vtx_003C08[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Vtx_003C08.vtx.inc"
};

u64 oceanside_spider_house_room_4Tex_003E98[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Tex_003E98.rgba16.inc.c"
};

u64 oceanside_spider_house_room_4Tex_004698[] = {
#include "assets/scenes/dungeons/oceanside_spider_house/oceanside_spider_house_room_4Tex_004698.ia8.inc.c"
};

Gfx oceanside_spider_house_room_4DL_0009D0[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000150[128], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_000150, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000150[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000150[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000150[96], 32, 0),
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

Gfx oceanside_spider_house_room_4DL_000E78[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000BB8[36], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_000BB8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 0, 3, 0, 16, 3, 17, 0),
    gsSP2Triangles(0, 18, 19, 0, 16, 20, 18, 0),
    gsSP2Triangles(16, 18, 0, 0, 21, 22, 14, 0),
    gsSP2Triangles(23, 24, 1, 0, 23, 1, 0, 0),
    gsSP2Triangles(24, 25, 4, 0, 24, 4, 1, 0),
    gsSP2Triangles(26, 27, 8, 0, 26, 8, 6, 0),
    gsSP2Triangles(27, 28, 10, 0, 27, 10, 8, 0),
    gsSP2Triangles(25, 26, 6, 0, 25, 6, 4, 0),
    gsSP2Triangles(28, 29, 12, 0, 28, 12, 10, 0),
    gsSP2Triangles(29, 30, 14, 0, 29, 14, 12, 0),
    gsSP2Triangles(31, 23, 0, 0, 31, 0, 19, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000BB8[32], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_0011C8[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_000FE8[22], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xB9, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock_4b(oceanside_spider_house_sceneTex_00AEC0, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(oceanside_spider_house_room_4Tex_003E98, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_4Vtx_000FE8, 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 1, 7, 0, 1, 0, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 5, 0),
    gsSP2Triangles(9, 1, 6, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 1, 12, 0, 1, 9, 12, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 11, 10, 0),
    gsSP2Triangles(14, 1, 11, 0, 15, 1, 16, 0),
    gsSP2Triangles(1, 14, 16, 0, 17, 15, 16, 0),
    gsSP2Triangles(14, 13, 16, 0, 4, 2, 18, 0),
    gsSP2Triangles(2, 1, 19, 0, 1, 20, 19, 0),
    gsSP2Triangles(20, 21, 19, 0, 20, 1, 15, 0),
    gsSP2Triangles(21, 20, 15, 0, 21, 15, 17, 0),
    gsSP2Triangles(16, 13, 17, 0, 19, 21, 4, 0),
    gsSP2Triangles(9, 8, 12, 0, 12, 8, 10, 0),
    gsSP2Triangles(0, 3, 7, 0, 7, 3, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_0016F8[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_001318[54], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_001318, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 8, 9, 0, 3, 9, 0, 0),
    gsSP2Triangles(10, 7, 6, 0, 10, 6, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(23, 26, 27, 0, 23, 27, 24, 0),
    gsSP2Triangles(28, 25, 29, 0, 28, 29, 30, 0),
    gsSP2Triangles(29, 27, 31, 0, 29, 31, 30, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_001318[32], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 17, 16, 0, 20, 16, 21, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_0019E8[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_001868[16], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_001868, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_001B98[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_001AD8[4], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_001AD8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_002020[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_001C70[51], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_001C70, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSP2Triangles(12, 10, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(9, 8, 14, 0, 9, 14, 15, 0),
    gsSP2Triangles(12, 13, 16, 0, 13, 15, 17, 0),
    gsSP2Triangles(13, 17, 16, 0, 15, 14, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(30, 31, 27, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_001C70[32], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 3, 0, 0, 6, 3, 7, 0),
    gsSP2Triangles(3, 8, 7, 0, 6, 3, 7, 0),
    gsSP2Triangles(3, 8, 7, 0, 1, 0, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 9, 6, 7, 0),
    gsSP2Triangles(10, 7, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 3, 6, 14, 0),
    gsSP2Triangles(4, 3, 14, 0, 8, 3, 12, 0),
    gsSP2Triangles(3, 5, 12, 0, 11, 8, 12, 0),
    gsSP2Triangles(5, 13, 12, 0, 6, 15, 14, 0),
    gsSP2Triangles(16, 4, 14, 0, 6, 9, 17, 0),
    gsSP2Triangles(6, 17, 15, 0, 4, 16, 18, 0),
    gsSP1Triangle(4, 18, 1, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_002BB8[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[151], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_0021C8, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 4, 0, 8, 4, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00EE00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[28], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
    gsSP2Triangles(5, 1, 6, 0, 6, 1, 7, 0),
    gsSP2Triangles(7, 1, 8, 0, 7, 1, 8, 0),
    gsSP2Triangles(6, 1, 7, 0, 5, 1, 6, 0),
    gsSP2Triangles(4, 1, 5, 0, 3, 1, 4, 0),
    gsSP2Triangles(2, 1, 3, 0, 0, 1, 2, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F040, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[37], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[69], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F340, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[101], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[117], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F840, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_0021C8[145], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_003158[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_003058[8], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_003058, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_003800[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_003240[84], 8, 0),
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
    gsSPVertex(oceanside_spider_house_room_4Vtx_003240, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(oceanside_spider_house_sceneTLUT_00FC40),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00F140, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_003240[20], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&oceanside_spider_house_room_4Vtx_003240[52], 32, 0),
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

Gfx oceanside_spider_house_room_4DL_003B10[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_003A00[9], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 129),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_sceneTex_00BEC0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(oceanside_spider_house_room_4Tex_003E98, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_4Vtx_003A00, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 0, 5, 0, 0, 6, 5, 0),
    gsSP2Triangles(0, 4, 7, 0, 1, 0, 7, 0),
    gsSP2Triangles(0, 4, 7, 0, 1, 0, 7, 0),
    gsSP2Triangles(6, 0, 8, 0, 0, 3, 8, 0),
    gsSPEndDisplayList(),
};

Gfx oceanside_spider_house_room_4DL_003D58[] = {
    gsSPVertex(&oceanside_spider_house_room_4Vtx_003C08[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 49),
    gsDPSetEnvColor(55, 75, 155, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(oceanside_spider_house_room_4Tex_004698, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(oceanside_spider_house_room_4Vtx_003C08, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 0, 0, 6, 4, 0, 0),
    gsSP2Triangles(0, 7, 1, 0, 0, 8, 7, 0),
    gsSP2Triangles(9, 10, 0, 0, 10, 6, 0, 0),
    gsSP2Triangles(3, 11, 0, 0, 11, 9, 0, 0),
    gsSP2Triangles(0, 12, 8, 0, 0, 5, 12, 0),
    gsSPEndDisplayList(),
};
