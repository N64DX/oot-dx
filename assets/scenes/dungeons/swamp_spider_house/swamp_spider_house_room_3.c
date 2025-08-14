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

SceneCmd swamp_spider_house_room_3Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&swamp_spider_house_room_3RoomShapeCullable_0001A0),
    SCENE_CMD_OBJECT_LIST(14, swamp_spider_house_room_3ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(17, swamp_spider_house_room_3ActorEntry_000068),
    SCENE_CMD_END(),
};

s16 swamp_spider_house_room_3ObjectList_000040[] = {
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

ActorEntry swamp_spider_house_room_3ActorEntry_000068[] = {
    { ACTOR_EN_SW,        { -475, 110, -190 }, { 0, 0x8000, 0 }, 0x0000, },
    { ACTOR_EN_SW,        { -475, 200, -190 }, { 0, 0x8000, 0 }, 0x0000, },
    { ACTOR_EN_ZF,        { -820,   0, -800 }, { 0, 0x6000, 0 }, 0x00FE, },
    { ACTOR_OBJ_KIBAKO2,  { -876,   0, -210 }, { 0, 0x4000, 0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -876,   0, -509 }, { 0, 0x4000, 0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -870,   0, -876 }, { 0, 0,      0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -828,   0, -210 }, { 0, 0x4000, 0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -810,   0, -876 }, { 0, 0,      0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -690,   0, -876 }, { 0, 0,      0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -876,   0, -270 }, { 0, 0x4000, 0 }, 0xFFFF, },
    { ACTOR_OBJ_KIBAKO2,  { -750,   0, -876 }, { 0, 0,      0 }, 0xFFFF, },
    { ACTOR_OBJ_TSUBO,    { -871, 300, -872 }, { 0, 0,      0 }, 0x0001, },
    { ACTOR_OBJ_TSUBO,    { -809, 300, -870 }, { 0, 0,      0 }, 0x0001, },
    { ACTOR_OBJ_SYOKUDAI, { -870, 300, -209 }, { 0, 0,      0 }, 0x243F, },
    { ACTOR_OBJ_SYOKUDAI, { -450, 300, -870 }, { 0, 0,      0 }, 0x243F, },
    { ACTOR_OBJ_BOMBIWA,  { -470,   0, -200 }, { 0, 0,      0 }, 0x000E, },
    { ACTOR_OBJ_BEAN,     { -480,   0, -830 }, { 0, 0x8000, 0 }, 0x0320, },
};

RoomShapeCullable swamp_spider_house_room_3RoomShapeCullable_0001A0 = { 
    2, 11,
    swamp_spider_house_room_3RoomShapeCullableEntry_0001AC,
    swamp_spider_house_room_3RoomShapeCullableEntry_0001AC + ARRAY_COUNTU(swamp_spider_house_room_3RoomShapeCullableEntry_0001AC)
};

RoomShapeCullableEntry swamp_spider_house_room_3RoomShapeCullableEntry_0001AC[11] = {
    { {   -480,    155,   -186 },    158, swamp_spider_house_room_3DL_002D28, NULL },
    { {   -660,    280,   -540 },    434, swamp_spider_house_room_3DL_000B60, NULL },
    { {   -405,    210,   -555 },    288, swamp_spider_house_room_3DL_002B28, NULL },
    { {   -473,      0,   -420 },     82, swamp_spider_house_room_3DL_0023B0, NULL },
    { {   -660,      0,   -540 },    434, swamp_spider_house_room_3DL_002650, NULL },
    { {   -660,    300,   -500 },    556, swamp_spider_house_room_3DL_0031F8, NULL },
    { {   -660,    140,   -540 },    226, swamp_spider_house_room_3DL_001FC0, NULL },
    { {   -660,    600,   -540 },    434, swamp_spider_house_room_3DL_001938, NULL },
    { {   -600,      0,   -525 },    266, swamp_spider_house_room_3DL_003748, NULL },
    { {   -420,    300,   -540 },    470, swamp_spider_house_room_3DL_003A28, NULL },
    { {   -660,    300,   -500 },    556, swamp_spider_house_room_3DL_001548, NULL },
};

s32 swamp_spider_house_room_3_terminatorMaybe_00025C = { 0x01000000 };

Vtx swamp_spider_house_room_3Vtx_000260[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_000260.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_000B60[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_000260[136], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007D20, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_000260, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000260[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000260[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000260[96], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009A20, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000260[104], 32, 0),
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

Vtx swamp_spider_house_room_3Vtx_000DC8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_000DC8.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_001548[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_000DC8[112], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_sceneTLUT_00AA20),
    gsDPLoadTextureBlock_4b(swamp_spider_house_sceneTex_008820, G_IM_FMT_CI, 32, 128, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_000DC8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
    gsSP2Triangles(1, 6, 5, 0, 1, 7, 6, 0),
    gsSP2Triangles(6, 8, 5, 0, 5, 9, 4, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 12, 10, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 14, 10, 0),
    gsSP2Triangles(0, 15, 12, 0, 0, 3, 15, 0),
    gsSP2Triangles(15, 16, 12, 0, 16, 13, 12, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(21, 22, 17, 0, 21, 17, 19, 0),
    gsSP2Triangles(9, 5, 8, 0, 23, 8, 24, 0),
    gsSP2Triangles(23, 9, 8, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000DC8[32], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 6, 7, 0),
    gsSP2Triangles(1, 7, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 11, 9, 0, 11, 6, 9, 0),
    gsSP2Triangles(11, 7, 6, 0, 12, 13, 9, 0),
    gsSP2Triangles(13, 10, 9, 0, 6, 12, 9, 0),
    gsSP2Triangles(6, 14, 12, 0, 2, 15, 16, 0),
    gsSP2Triangles(17, 0, 2, 0, 17, 2, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_sceneTLUT_00AA40),
    gsDPLoadTextureBlock_4b(swamp_spider_house_sceneTex_009E20, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000DC8[50], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(7, 8, 2, 0, 7, 2, 1, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 15, 0, 19, 15, 18, 0),
    gsSP2Triangles(21, 22, 18, 0, 21, 18, 17, 0),
    gsSP2Triangles(5, 23, 24, 0, 5, 24, 25, 0),
    gsSP2Triangles(5, 26, 3, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000DC8[81], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 8, 0),
    gsSP2Triangles(10, 12, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(23, 24, 21, 0, 24, 25, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_00A620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_000DC8[107], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_001868[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_001868.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_001938[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_001868[5], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_001868, 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_001A10[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_001A10.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_001FC0[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_001A10[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_room_3TLUT_004688),
    gsDPLoadTextureBlock_4b(swamp_spider_house_room_3Tex_003B88, G_IM_FMT_CI, 64, 64, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_001A10, 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(7, 16, 17, 0, 7, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_3Tex_004488, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_001A10[19], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_001A10[51], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(2, 1, 16, 0, 2, 16, 17, 0),
    gsSP2Triangles(6, 5, 18, 0, 6, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_00A620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_001A10[79], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_002230[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_002230.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_0023B0[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_002230[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007920, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_002230, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_002230[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_002510[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_002510.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_002650[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_002510[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_00A620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_002510, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 3, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(8, 4, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(10, 6, 7, 0, 10, 7, 11, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_002748[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_002748.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_002B28[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_002748[54], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_3Vtx_002748, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_002748[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 12, 21, 0, 20, 21, 22, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_002C68[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_002C68.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_002D28[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_002C68[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_3Tex_004388, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_002C68, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_002DF8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_002DF8.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_0031F8[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_002DF8[56], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 39),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_006920, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_002DF8, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 14, 19, 0, 14, 16, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007120, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_002DF8[20], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007520, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_3Vtx_002DF8[24], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 16, 14, 0),
    gsSP2Triangles(16, 17, 14, 0, 16, 18, 17, 0),
    gsSP2Triangles(19, 20, 14, 0, 20, 15, 14, 0),
    gsSP2Triangles(21, 19, 17, 0, 19, 14, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 22, 28, 0),
    gsSP2Triangles(29, 2, 3, 0, 29, 30, 2, 0),
    gsSP2Triangles(5, 29, 3, 0, 5, 31, 29, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_003448[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_003448.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_003748[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_003448[40], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_006520, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(swamp_spider_house_sceneTex_005D20, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_003448, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_3Vtx_003448[32], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_3Vtx_003868[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Vtx_003868.vtx.inc"
};

Gfx swamp_spider_house_room_3DL_003A28[] = {
    gsSPVertex(&swamp_spider_house_room_3Vtx_003868[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_006520, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(swamp_spider_house_sceneTex_005D20, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_3Vtx_003868, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 10, 0, 13, 8, 10, 0),
    gsSP2Triangles(4, 14, 15, 0, 4, 6, 14, 0),
    gsSP2Triangles(7, 16, 5, 0, 16, 17, 5, 0),
    gsSP2Triangles(16, 18, 17, 0, 16, 19, 18, 0),
    gsSPEndDisplayList(),
};

u64 swamp_spider_house_room_3Tex_003B88[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Tex_003B88.ci4.inc.c"
};

u64 swamp_spider_house_room_3Tex_004388[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Tex_004388.ci8.inc.c"
};

u64 swamp_spider_house_room_3Tex_004488[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Tex_004488.ci8.inc.c"
};

u64 swamp_spider_house_room_3TLUT_004688[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_3Tex_003B88.tlut.rgba16.inc.c"
};
