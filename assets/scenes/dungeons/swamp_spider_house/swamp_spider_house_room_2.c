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

SceneCmd swamp_spider_house_room_2Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&swamp_spider_house_room_2RoomShapeCullable_0001B0),
    SCENE_CMD_OBJECT_LIST(12, swamp_spider_house_room_2ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(11, swamp_spider_house_room_2ActorEntry_000068),
    SCENE_CMD_END(),
};

s16 swamp_spider_house_room_2ObjectList_000040[] = {
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
};

ActorEntry swamp_spider_house_room_2ActorEntry_000068[] = {
    { ACTOR_OBJ_BEAN,    { -270, 180, -1617 }, { 0,   0,      0    }, 0x0020, },
    { ACTOR_OBJ_SWITCH,  {  329, 180, -1289 }, { 0,   0,      0    }, 0x0D00, },
    { ACTOR_BG_LADDER,   { -180, 0,   -1410 }, { 0,   0x4000, 0    }, 0x0D00, },
    { ACTOR_OBJ_TSUBO,   { -30,  20,  -1650 }, { 0,   0,      0    }, 0x0003, },
    { ACTOR_OBJ_TSUBO,   {  30,  20,  -1650 }, { 0,   0,      0    }, 0x0003, },
    { ACTOR_OBJ_TSUBO,   {  330, 180, -1651 }, { 0,   0,      0    }, 0x0000, },
    { ACTOR_OBJ_TSUBO,   {  330, 180, -1470 }, { 0,   0,      0    }, 0x0000, },
    { ACTOR_OBJ_TSUBO,   {  330, 180, -1531 }, { 0,   0,      0    }, 0x0000, },
    { ACTOR_OBJ_TSUBO,   {  330, 180, -1590 }, { 0,   0,      0    }, 0x0000, },
    { ACTOR_OBJ_KIBAKO2, { -301, 180, -1299 }, { 0xB, 0,      0x31 }, 0x00FF, },
    { ACTOR_OBJ_KIBAKO2, { -241, 180, -1299 }, { 0xB, 0,      0x32 }, 0x00FF, },
};

RoomShapeCullable swamp_spider_house_room_2RoomShapeCullable_0001B0 = { 
    2, 7,
    swamp_spider_house_room_2RoomShapeCullableEntry_0001BC,
    swamp_spider_house_room_2RoomShapeCullableEntry_0001BC + ARRAY_COUNTU(swamp_spider_house_room_2RoomShapeCullableEntry_0001BC)
};

RoomShapeCullableEntry swamp_spider_house_room_2RoomShapeCullableEntry_0001BC[7] = {
    { {      0,    264,  -1470 },    262, swamp_spider_house_room_2DL_0034C0, NULL },
    { {      0,     90,  -1710 },    584, swamp_spider_house_room_2DL_000790, NULL },
    { {    165,    150,  -1710 },    540, swamp_spider_house_room_2DL_003180, NULL },
    { {      0,    180,  -1530 },    258, swamp_spider_house_room_2DL_002608, NULL },
    { {      0,    250,  -1680 },    294, swamp_spider_house_room_2DL_002A58, NULL },
    { {      0,    330,  -1470 },    444, swamp_spider_house_room_2DL_001D88, NULL },
    { {      0,    240,  -1710 },    580, swamp_spider_house_room_2DL_001590, NULL },
};

s32 swamp_spider_house_room_2_terminatorMaybe_00022C = { 0x01000000 };

Vtx swamp_spider_house_room_2Vtx_000230[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_000230.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_000790[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_000230[78], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_2Vtx_000230, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007E20, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000230[12], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(4, 7, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008620, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000230[24], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000230[56], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_2Tex_0051F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000230[60], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 7, 0),
    gsSP2Triangles(0, 10, 11, 0, 0, 11, 4, 0),
    gsSP2Triangles(12, 8, 7, 0, 12, 7, 13, 0),
    gsSP2Triangles(11, 14, 15, 0, 11, 15, 4, 0),
    gsSP2Triangles(1, 4, 7, 0, 1, 7, 6, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 16, 0),
    gsSP2Triangles(17, 16, 6, 0, 17, 6, 5, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_2Vtx_000A90[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_000A90.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_001590[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[168], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_2Tex_0045F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_2Vtx_000A90, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_room_2TLUT_0055F0),
    gsDPLoadTextureBlock_4b(swamp_spider_house_room_2Tex_0049F0, G_IM_FMT_CI, 32, 128, 15, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 17, 0, 22, 17, 16, 0),
    gsSP2Triangles(21, 20, 23, 0, 21, 23, 22, 0),
    gsSP2Triangles(1, 0, 24, 0, 1, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[38], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007E20, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[44], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008620, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[52], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 3, 13, 14, 0),
    gsSP2Triangles(15, 16, 9, 0, 15, 9, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[78], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(1, 18, 21, 0, 1, 21, 2, 0),
    gsSP2Triangles(30, 14, 17, 0, 30, 17, 31, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[110], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 11, 13, 0, 12, 9, 11, 0),
    gsSP2Triangles(14, 13, 11, 0, 11, 8, 14, 0),
    gsSP2Triangles(15, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 12, 0, 17, 18, 19, 0),
    gsSP2Triangles(19, 18, 20, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 17, 0, 18, 17, 23, 0),
    gsSP2Triangles(24, 21, 20, 0, 24, 20, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 29, 30, 0),
    gsSP2Triangles(28, 27, 29, 0, 27, 31, 29, 0),
    gsSP1Triangle(25, 30, 29, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[142], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 3, 0),
    gsSP2Triangles(6, 5, 8, 0, 5, 9, 10, 0),
    gsSP2Triangles(5, 10, 8, 0, 9, 0, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(15, 13, 12, 0, 15, 12, 16, 0),
    gsSP2Triangles(12, 11, 17, 0, 13, 14, 11, 0),
    gsSP2Triangles(15, 18, 14, 0, 12, 17, 19, 0),
    gsSP2Triangles(20, 12, 19, 0, 20, 16, 12, 0),
    gsSP2Triangles(21, 16, 20, 0, 16, 21, 18, 0),
    gsSP1Triangle(16, 18, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_2Tex_0051F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_000A90[164], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_2Vtx_001A98[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_001A98.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_001D88[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_001A98[39], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_2Vtx_001A98, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 4, 0, 14, 4, 3, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 15, 14, 0, 24, 14, 25, 0),
    gsSP2Triangles(26, 27, 18, 0, 26, 18, 28, 0),
    gsSP2Triangles(17, 29, 26, 0, 17, 26, 28, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_001A98[30], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 1, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 5, 7, 0, 1, 5, 8, 0),
    gsSP1Triangle(8, 2, 1, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_2Vtx_001EC8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_001EC8.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_002608[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_001EC8[108], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_2Vtx_001EC8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008620, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_001EC8[8], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 10, 13, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_001EC8[40], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009020, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_001EC8[54], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 12, 11, 0),
    gsSP2Triangles(15, 16, 12, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 21, 0),
    gsSP2Triangles(26, 22, 21, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_001EC8[85], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(19, 21, 22, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_2Vtx_0028C8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_0028C8.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_002A58[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_0028C8[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_2Tex_0045F0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_2Vtx_0028C8, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 5, 0, 3, 0),
    gsSP2Triangles(5, 3, 6, 0, 7, 2, 1, 0),
    gsSP1Triangle(7, 1, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008620, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_2Vtx_0028C8[9], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_2Vtx_002BD0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_002BD0.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_003180[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_002BD0[83], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_2Vtx_002BD0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_002BD0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&swamp_spider_house_room_2Vtx_002BD0[63], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_2Vtx_003300[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Vtx_003300.vtx.inc"
};

Gfx swamp_spider_house_room_2DL_0034C0[] = {
    gsSPVertex(&swamp_spider_house_room_2Vtx_003300[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 175),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(swamp_spider_house_room_2Tex_0035F0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(swamp_spider_house_room_2Tex_003DF0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_2Vtx_003300, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
};

u64 swamp_spider_house_room_2Tex_0035F0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Tex_0035F0.ia8.inc.c"
};

u64 swamp_spider_house_room_2Tex_003DF0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Tex_003DF0.rgba16.inc.c"
};

u64 swamp_spider_house_room_2Tex_0045F0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Tex_0045F0.ci8.inc.c"
};

u64 swamp_spider_house_room_2Tex_0049F0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Tex_0049F0.ci4.inc.c"
};

u64 swamp_spider_house_room_2Tex_0051F0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Tex_0051F0.ci8.inc.c"
};

u64 swamp_spider_house_room_2TLUT_0055F0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_2Tex_0049F0.tlut.rgba16.inc.c"
};
