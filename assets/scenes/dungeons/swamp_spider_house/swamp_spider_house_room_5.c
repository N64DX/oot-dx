#include "swamp_spider_house_scene.h"
#include "swamp_spider_house_room_0.h"
#include "swamp_spider_house_room_1.h"
#include "swamp_spider_house_room_2.h"
#include "swamp_spider_house_room_3.h"
#include "swamp_spider_house_room_4.h"
#include "swamp_spider_house_room_5.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd swamp_spider_house_room_5Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&swamp_spider_house_room_5RoomShapeCullable_000190),
    SCENE_CMD_OBJECT_LIST(14, swamp_spider_house_room_5ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(1, swamp_spider_house_room_5ActorEntry_000068),
    SCENE_CMD_END(),
};

s16 swamp_spider_house_room_5ObjectList_000040[] = {
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_KANBAN,
    OBJECT_DEKUNUTS,
    OBJECT_SYOKUDAI,
    OBJECT_KIBAKO2,
    OBJECT_LADDER,
    OBJECT_MAMENOKI,
    OBJECT_YDAN_OBJECTS,
    OBJECT_ZF,
    OBJECT_BOMBIWA,
    OBJECT_BUFFDEKU,
    OBJECT_HAMMERGEIST,
    OBJECT_GI_SWORD_HEROS,
};

ActorEntry swamp_spider_house_room_5ActorEntry_000068[] = {
    { ACTOR_EN_HAMMERGEIST, { 100, 120, -2500 }, { 0, 0, 0 }, 0x0701, },
};

RoomShapeCullable swamp_spider_house_room_5RoomShapeCullable_000190 = { 
    2, 4,
    swamp_spider_house_room_5RoomShapeCullableEntry_00019C,
    swamp_spider_house_room_5RoomShapeCullableEntry_00019C + ARRAY_COUNTU(swamp_spider_house_room_5RoomShapeCullableEntry_00019C)
};

RoomShapeCullableEntry swamp_spider_house_room_5RoomShapeCullableEntry_00019C[4] = {
    { {      0,    180,  -2205 },     88, swamp_spider_house_room_5DL_001908, NULL },
    { {      0,    133,  -2490 },    404, swamp_spider_house_room_5DL_001548, NULL },
    { {      0,    300,  -2490 },    236, swamp_spider_house_room_5DL_001020, NULL },
    { {      0,    300,  -2490 },    442, swamp_spider_house_room_5DL_000550, NULL },
};

s32 swamp_spider_house_room_5_terminatorMaybe_0001DC = { 0x01000000 };

Vtx swamp_spider_house_room_5Vtx_0001E0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_5Vtx_0001E0.vtx.inc"
};

Gfx swamp_spider_house_room_5DL_000550[] = {
    gsSPVertex(&swamp_spider_house_room_5Vtx_0001E0[47], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_5Tex_001A30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_5Vtx_0001E0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&swamp_spider_house_room_5Vtx_0001E0[12], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_sceneTLUT_00AA40),
    gsDPLoadTextureBlock_4b(swamp_spider_house_sceneTex_009E20, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_5Vtx_0001E0[18], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSP2Triangles(2, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(2, 3, 5, 0, 3, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(8, 12, 9, 0, 12, 11, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 17, 16, 0, 13, 15, 20, 0),
    gsSP2Triangles(15, 17, 19, 0, 15, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_00A620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_5Vtx_0001E0[39], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 4, 5, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 3, 7, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_5Vtx_000810[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_5Vtx_000810.vtx.inc"
};

Gfx swamp_spider_house_room_5DL_001020[] = {
    gsSPVertex(&swamp_spider_house_room_5Vtx_000810[121], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_5Tex_001B30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_5Vtx_000810, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 10, 0, 15, 13, 10, 0),
    gsSP2Triangles(16, 15, 14, 0, 16, 17, 15, 0),
    gsSP2Triangles(2, 1, 16, 0, 1, 17, 16, 0),
    gsSP2Triangles(3, 18, 1, 0, 3, 19, 18, 0),
    gsSP2Triangles(5, 20, 3, 0, 20, 19, 3, 0),
    gsSP2Triangles(7, 20, 5, 0, 7, 21, 20, 0),
    gsSP2Triangles(9, 22, 7, 0, 22, 21, 7, 0),
    gsSP2Triangles(13, 23, 11, 0, 13, 24, 23, 0),
    gsSP2Triangles(15, 25, 13, 0, 25, 24, 13, 0),
    gsSP2Triangles(17, 25, 15, 0, 17, 26, 25, 0),
    gsSP2Triangles(1, 18, 17, 0, 18, 26, 17, 0),
    gsSP2Triangles(19, 27, 18, 0, 27, 28, 18, 0),
    gsSP2Triangles(20, 27, 19, 0, 20, 29, 27, 0),
    gsSP2Triangles(21, 30, 20, 0, 30, 29, 20, 0),
    gsSP2Triangles(22, 30, 21, 0, 22, 31, 30, 0),
    gsSPVertex(&swamp_spider_house_room_5Vtx_000810[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 14, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 24, 0, 21, 24, 22, 0),
    gsSP2Triangles(25, 20, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSPVertex(&swamp_spider_house_room_5Vtx_000810[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 4, 8, 0, 4, 10, 8, 0),
    gsSP2Triangles(11, 12, 8, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(10, 4, 1, 0, 10, 1, 14, 0),
    gsSP2Triangles(1, 0, 15, 0, 1, 15, 14, 0),
    gsSP2Triangles(10, 14, 16, 0, 10, 16, 17, 0),
    gsSP2Triangles(14, 15, 18, 0, 14, 18, 16, 0),
    gsSP2Triangles(3, 2, 19, 0, 3, 19, 20, 0),
    gsSP2Triangles(2, 5, 21, 0, 2, 21, 19, 0),
    gsSP2Triangles(17, 16, 19, 0, 17, 19, 21, 0),
    gsSP2Triangles(16, 18, 20, 0, 16, 20, 19, 0),
    gsSP2Triangles(21, 5, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(21, 26, 27, 0, 21, 27, 28, 0),
    gsSP2Triangles(26, 25, 29, 0, 26, 29, 27, 0),
    gsSPVertex(&swamp_spider_house_room_5Vtx_000810[92], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 6, 2, 5, 0),
    gsSP2Triangles(7, 8, 3, 0, 7, 3, 2, 0),
    gsSP2Triangles(5, 4, 9, 0, 5, 9, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 10, 0),
    gsSP2Triangles(5, 10, 13, 0, 5, 13, 14, 0),
    gsSP2Triangles(10, 12, 15, 0, 10, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 20, 21, 0, 17, 21, 18, 0),
    gsSP2Triangles(14, 13, 18, 0, 14, 18, 21, 0),
    gsSP2Triangles(13, 15, 19, 0, 13, 19, 18, 0),
    gsSP2Triangles(21, 20, 22, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(21, 23, 26, 0, 21, 26, 27, 0),
    gsSP2Triangles(23, 25, 28, 0, 23, 28, 26, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_5Vtx_001308[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_5Vtx_001308.vtx.inc"
};

Gfx swamp_spider_house_room_5DL_001548[] = {
    gsSPVertex(&swamp_spider_house_room_5Vtx_001308[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_5Tex_001A30, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_5Vtx_001308, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(&swamp_spider_house_room_5Vtx_001308[16], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 0, 3, 0, 10, 3, 11, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_5Vtx_0016D8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_5Vtx_0016D8.vtx.inc"
};

Gfx swamp_spider_house_room_5DL_001908[] = {
    gsSPVertex(&swamp_spider_house_room_5Vtx_0016D8[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008620, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_5Vtx_0016D8, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSPEndDisplayList(),
};

u64 swamp_spider_house_room_5Tex_001A30[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_5Tex_001A30.ci8.inc.c"
};

u64 swamp_spider_house_room_5Tex_001B30[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_5Tex_001B30.ci8.inc.c"
};
