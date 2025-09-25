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

SceneCmd swamp_spider_house_room_0Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&swamp_spider_house_room_0RoomShapeCullable_0000C0),
    SCENE_CMD_OBJECT_LIST(12, swamp_spider_house_room_0ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(3, swamp_spider_house_room_0ActorEntry_000068),
    SCENE_CMD_END(),
};

s16 swamp_spider_house_room_0ObjectList_000040[] = {
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

ActorEntry swamp_spider_house_room_0ActorEntry_000068[] = {
    { ACTOR_EN_ST,       {    0, 300,  20 }, { 0, 0, 0 }, 0x0001, },
    { ACTOR_EN_KAREBABA, { -190, 120, -75 }, { 0, 0, 0 }, 0x0000, },
    { ACTOR_EN_KAREBABA, {  190, 120, -75 }, { 0, 0, 0 }, 0x0000, },
};

RoomShapeCullable swamp_spider_house_room_0RoomShapeCullable_0000C0 = { 
    2, 8,
    swamp_spider_house_room_0RoomShapeCullableEntry_0000CC,
    swamp_spider_house_room_0RoomShapeCullableEntry_0000CC + ARRAY_COUNTU(swamp_spider_house_room_0RoomShapeCullableEntry_0000CC)
};

RoomShapeCullableEntry swamp_spider_house_room_0RoomShapeCullableEntry_0000CC[8] = {
    { {      0,    180,   -135 },     88, swamp_spider_house_room_0DL_000F08, NULL },
    { {      0,    195,    450 },    232, swamp_spider_house_room_0DL_0012C8, NULL },
    { {      0,    120,    270 },    458, swamp_spider_house_room_0DL_000410, NULL },
    { {      0,    360,     60 },    300, swamp_spider_house_room_0DL_000C00, NULL },
    { {      0,    120,    -53 },    114, swamp_spider_house_room_0DL_0016F8, NULL },
    { {      0,    240,    120 },    360, swamp_spider_house_room_0DL_001A10, NULL },
    { {      0,    240,      0 },    294, swamp_spider_house_room_0DL_001DB8, NULL },
    { {      0,    240,     60 },    324, swamp_spider_house_room_0DL_000940, NULL },
};

s32 swamp_spider_house_room_0_terminatorMaybe_00014C = { 0x01000000 };

Vtx swamp_spider_house_room_0Vtx_000150[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_000150.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_000410[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_000150[36], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_0Vtx_000150, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_008220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_000150[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_00A620, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_000150[16], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
    gsSP2Triangles(1, 10, 2, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 2, 0, 13, 14, 0, 0),
    gsSP2Triangles(13, 0, 3, 0, 13, 3, 15, 0),
    gsSP2Triangles(3, 16, 17, 0, 3, 17, 15, 0),
    gsSP2Triangles(18, 4, 7, 0, 18, 7, 19, 0),
    gsSP2Triangles(0, 18, 19, 0, 0, 19, 1, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_000630[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_000630.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_000940[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_000630[41], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_0Vtx_000630, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(8, 11, 13, 0, 8, 13, 9, 0),
    gsSP2Triangles(8, 10, 14, 0, 7, 6, 8, 0),
    gsSP2Triangles(7, 8, 14, 0, 11, 15, 12, 0),
    gsSP2Triangles(11, 0, 3, 0, 11, 3, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 2, 17, 15, 0),
    gsSP2Triangles(18, 14, 10, 0, 19, 4, 14, 0),
    gsSP2Triangles(15, 17, 16, 0, 19, 14, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_sceneTLUT_00AA40),
    gsDPLoadTextureBlock_4b(swamp_spider_house_sceneTex_009E20, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_000630[20], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(6, 9, 8, 0, 5, 7, 10, 0),
    gsSP2Triangles(8, 9, 11, 0, 12, 13, 8, 0),
    gsSP2Triangles(12, 8, 11, 0, 10, 7, 14, 0),
    gsSP2Triangles(10, 14, 15, 0, 11, 9, 16, 0),
    gsSP2Triangles(10, 17, 5, 0, 15, 18, 19, 0),
    gsSP2Triangles(15, 14, 18, 0, 14, 20, 18, 0),
    gsSP1Triangle(20, 19, 18, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_000B20[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_000B20.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_000C00[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_000B20[6], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_0Vtx_000B20, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 2, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_000CD8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_000CD8.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_000F08[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_000CD8[27], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_0Vtx_000CD8, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 9, 0, 1, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_001008[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_001008.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_0012C8[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_001008[36], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_room_0Tex_002010, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_0Vtx_001008, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 9, 0, 4, 7, 9, 0),
    gsSP2Triangles(10, 3, 11, 0, 10, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_009220, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_001008[12], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 2, 0),
    gsSP2Triangles(2, 7, 8, 0, 2, 8, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal16(15, swamp_spider_house_sceneTLUT_00AA40),
    gsDPLoadTextureBlock_4b(swamp_spider_house_sceneTex_009E20, G_IM_FMT_CI, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_001008[21], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsSPVertex(&swamp_spider_house_room_0Vtx_001008[31], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_0014F8[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_0014F8.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_0016F8[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_0014F8[24], 8, 0),
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
    gsSPVertex(swamp_spider_house_room_0Vtx_0014F8, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_0017F0[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_0017F0.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_001A10[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_0017F0[26], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, TEXEL0, 0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_006520, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(swamp_spider_house_sceneTex_005D20, 0x0080, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_0Vtx_0017F0, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSPVertex(&swamp_spider_house_room_0Vtx_0017F0[16], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 6, 0),
    gsSP2Triangles(2, 4, 0, 0, 8, 6, 5, 0),
    gsSPEndDisplayList(),
};

Vtx swamp_spider_house_room_0Vtx_001B18[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Vtx_001B18.vtx.inc"
};

Gfx swamp_spider_house_room_0DL_001DB8[] = {
    gsSPVertex(&swamp_spider_house_room_0Vtx_001B18[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 43),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_006D20, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(swamp_spider_house_room_0Vtx_001B18, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007120, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_001B18[4], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 11, 0, 10, 9, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(swamp_spider_house_sceneTLUT_00AA60),
    gsDPLoadTextureBlock(swamp_spider_house_sceneTex_007520, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&swamp_spider_house_room_0Vtx_001B18[16], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 8, 10, 0, 12, 10, 3, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 16, 15, 0),
    gsSP2Triangles(7, 13, 15, 0, 7, 15, 17, 0),
    gsSPEndDisplayList(),
};

u64 swamp_spider_house_room_0Tex_002010[] = {
#include "assets/scenes/dungeons/swamp_spider_house/swamp_spider_house_room_0Tex_002010.ci8.inc.c"
};
