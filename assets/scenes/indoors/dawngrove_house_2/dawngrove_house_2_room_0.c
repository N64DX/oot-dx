#include "dawngrove_house_2_scene.h"
#include "dawngrove_house_2_room_0.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd dawngrove_house_2_room_0[] = {
    SCENE_CMD_ALTERNATE_HEADER_LIST(dawngrove_house_2_room_0AlternateHeaders),
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&dawngrove_house_2_room_0RoomShapeNormal_000070),
    SCENE_CMD_OBJECT_LIST(1, dawngrove_house_2_room_0ObjectList_000048),
    SCENE_CMD_ACTOR_LIST(2, dawngrove_house_2_room_0ActorEntry_000050),
    SCENE_CMD_WIND_SETTINGS(15, 40, 109, 190),
    SCENE_CMD_END(),
};

SceneCmd* dawngrove_house_2_room_0AlternateHeaders[] = {
    NULL,
    dawngrove_house_2_room_0Set_timeskip,
    NULL,
};

s16 dawngrove_house_2_room_0ObjectList_000048[] = {
    OBJECT_TK,
};

ActorEntry dawngrove_house_2_room_0ActorEntry_000050[] = {
    { ACTOR_EN_TK,           { 200,  0, -300 }, { 0, 0, 0 }, 0x0001 },
    { ACTOR_EN_WONDER_TALK2, { -18, 85, -175 }, { 0, 0, 0 }, 0x9040 },
};

RoomShapeNormal dawngrove_house_2_room_0RoomShapeNormal_000070 = { 
    0, 15,
    dawngrove_house_2_room_0RoomShapeDListsEntry_00007C,
    dawngrove_house_2_room_0RoomShapeDListsEntry_00007C +
    ARRAY_COUNTU(dawngrove_house_2_room_0RoomShapeDListsEntry_00007C)
};

RoomShapeDListsEntry dawngrove_house_2_room_0RoomShapeDListsEntry_00007C[15] = {
    { dawngrove_house_2_room_0DL_000340, NULL },
    { dawngrove_house_2_room_0DL_000908, NULL },
    { dawngrove_house_2_room_0DL_000ED0, NULL },
    { dawngrove_house_2_room_0DL_0017D0, NULL },
    { dawngrove_house_2_room_0DL_001B38, NULL },
    { dawngrove_house_2_room_0DL_001EB8, NULL },
    { dawngrove_house_2_room_0DL_002348, NULL },
    { dawngrove_house_2_room_0DL_002AF0, NULL },
    { dawngrove_house_2_room_0DL_002EC0, NULL },
    { dawngrove_house_2_room_0DL_0031F0, NULL },
    { dawngrove_house_2_room_0DL_0033D0, NULL },
    { dawngrove_house_2_room_0DL_0035A0, NULL },
    { dawngrove_house_2_room_0DL_003778, NULL },
    { dawngrove_house_2_room_0DL_003930, NULL },
    { dawngrove_house_2_room_0DL_003E50, NULL },
};

SceneCmd dawngrove_house_2_room_0Set_timeskip[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&dawngrove_house_2_room_0RoomShapeNormal_000070),
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(dawngrove_house_2_room_0ObjectList_000048), dawngrove_house_2_room_0ObjectList_000048),
    SCENE_CMD_ACTOR_LIST(1, dawngrove_house_2_room_0ActorEntry_timeskip),
    SCENE_CMD_WIND_SETTINGS(15, 40, 109, 190),
    SCENE_CMD_END(),
};

ActorEntry dawngrove_house_2_room_0ActorEntry_timeskip[] = {
    { ACTOR_EN_WONDER_TALK2, { -18, 85, -175 }, { 0, 0, 0 }, 0x9080 },
};

s32 dawngrove_house_2_room_0_terminatorMaybe_0000F4 = { 0x01000000 };

Vtx dawngrove_house_2_room_0Vtx_000170[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_000170.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_000548[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_000548.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_000B20[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_000B20.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_001100[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_001100.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_001A78[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_001A78.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_001C28[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_001C28.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_0022C8[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_0022C8.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_002710[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_002710.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_002D30[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_002D30.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_002FF0[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_002FF0.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_003310[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_003310.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_0034C0[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_0034C0.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_003698[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_003698.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_003870[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_003870.vtx.inc"
};

Vtx dawngrove_house_2_room_0Vtx_003A20[] = {
#include "assets/scenes/indoors/dawngrove_house_2/dawngrove_house_2_room_0Vtx_003A20.vtx.inc"
};

Gfx dawngrove_house_2_room_0DL_000340[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000170[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_002B60),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_002B60, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_000170, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 1, 5, 0),
    gsSP2Triangles(1, 0, 5, 0, 2, 7, 8, 0),
    gsSP2Triangles(2, 1, 7, 0, 1, 3, 7, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal16(0, dawngrove_house_2_sceneTLUT_002E60),
    gsDPLoadTextureBlock_4b(dawngrove_house_2_sceneTex_002E60, G_IM_FMT_CI, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000170[9], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 4, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 0, 0),
    gsSP2Triangles(0, 11, 1, 0, 0, 2, 3, 0),
    gsSP2Triangles(6, 4, 7, 0, 9, 8, 10, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_000908[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000548[52], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_001B60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_000548, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 5, 9, 0, 5, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 16, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 21, 20, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 21, 24, 0),
    gsSP2Triangles(21, 25, 26, 0, 27, 21, 28, 0),
    gsSP1Triangle(21, 27, 29, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000548[30], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 1, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    gsSP2Triangles(12, 13, 4, 0, 2, 4, 13, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_006BC0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_006BC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000548[44], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 0, 4, 0, 5, 4, 0, 0),
    gsSP2Triangles(6, 4, 5, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_000ED0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000B20[51], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003500),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003500, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_000B20, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 14, 13, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 17, 20, 0),
    gsSP2Triangles(2, 21, 22, 0, 21, 2, 1, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 23, 26, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000B20[30], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 4, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 9, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(14, 13, 16, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal16(0, dawngrove_house_2_sceneTLUT_005DA0),
    gsDPLoadTextureBlock_4b(dawngrove_house_2_sceneTex_005DA0, G_IM_FMT_CI, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_000B20[47], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_0017D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001100[101], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003500),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003500, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_001100, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 3, 4, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 7, 6, 0),
    gsSP2Triangles(8, 9, 7, 0, 9, 8, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 11, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 20, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 24, 23, 0),
    gsSP2Triangles(27, 24, 26, 0, 24, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001100[32], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 8, 7, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 11, 9, 0, 9, 13, 14, 0),
    gsSP2Triangles(13, 9, 15, 0, 9, 16, 17, 0),
    gsSP2Triangles(16, 9, 7, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 18, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 22, 25, 0, 22, 24, 26, 0),
    gsSP2Triangles(26, 27, 22, 0, 27, 28, 22, 0),
    gsSP1Triangle(28, 27, 29, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001100[62], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 4, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 8, 0),
    gsSP2Triangles(13, 12, 11, 0, 14, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 16, 19, 0, 19, 20, 17, 0),
    gsSP2Triangles(20, 19, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 25, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001100[94], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0049A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001100[97], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_001B38[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001A78[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0065C0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0065C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_001A78, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_001EB8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001C28[33], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003500),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003500, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_001C28, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 9, 12, 0),
    gsSP2Triangles(12, 9, 13, 0, 14, 13, 9, 0),
    gsSP2Triangles(15, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 13, 0, 19, 12, 13, 0),
    gsSP2Triangles(12, 19, 20, 0, 12, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 24, 23, 26, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_001C28[30], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_002348[] = {
    /*gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(dawngrove_house_2_room_0Vtx_0022C8, 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, dawngrove_house_2_sceneCommands),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0x0000, G_TX_LOADTILE, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOLOD),
    gsDPLoadSync(),*/
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_002AF0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_002710[54], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003900),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003900, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_002710, 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 11, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 17, 18, 0),
    gsSP2Triangles(20, 21, 17, 0, 22, 17, 21, 0),
    gsSP2Triangles(22, 23, 17, 0, 23, 15, 17, 0),
    gsSP2Triangles(15, 23, 24, 0, 25, 24, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 25, 29, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_002710[30], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 5, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003C00),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003C00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_002710[46], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 3, 0, 1, 3, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 6, 3, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_002EC0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_002D30[17], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0051A0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0051A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_002D30, 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 6, 4, 0),
    gsSP2Triangles(7, 8, 6, 0, 8, 7, 9, 0),
    gsSP2Triangles(6, 8, 10, 0, 11, 10, 8, 0),
    gsSP2Triangles(11, 12, 10, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 13, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(10, 12, 2, 0, 10, 2, 16, 0),
    gsSP2Triangles(16, 2, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_0031F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_002FF0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003F00),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003F00, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_002FF0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 6, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 14, 17, 0),
    gsSP2Triangles(4, 18, 19, 0, 18, 4, 5, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 20, 23, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_0033D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003310[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0065C0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0065C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_003310, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_0035A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_0034C0[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0057A0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0057A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_0034C0, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 0, 4, 0, 4, 0, 5, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_003778[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003698[6], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0057A0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0057A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_TERR2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_003698, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 0, 4, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_003930[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003870[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0051A0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0051A0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_003870, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSPEndDisplayList(),
};

Gfx dawngrove_house_2_room_0DL_003E50[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003A20[59], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003500),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003500, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(dawngrove_house_2_room_0Vtx_003A20, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 3, 6, 7, 0),
    gsSP2Triangles(3, 8, 6, 0, 2, 8, 0, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_003900),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_003900, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003A20[9], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 5, 0),
    gsSP2Triangles(3, 4, 6, 0, 6, 4, 7, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 10, 8, 0),
    gsSP2Triangles(2, 1, 10, 0, 6, 7, 11, 0),
    gsSP2Triangles(11, 7, 8, 0, 9, 8, 7, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTLUT_pal256(dawngrove_house_2_sceneTLUT_0045A0),
    gsDPLoadTextureBlock(dawngrove_house_2_sceneTex_0045A0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003A20[21], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 7, 9, 0),
    gsSP2Triangles(9, 10, 8, 0, 10, 9, 11, 0),
    gsSP2Triangles(11, 12, 10, 0, 12, 11, 13, 0),
    gsSP2Triangles(13, 14, 12, 0, 14, 13, 15, 0),
    gsSP2Triangles(4, 16, 17, 0, 16, 4, 6, 0),
    gsSP2Triangles(2, 18, 19, 0, 18, 2, 1, 0),
    gsSP2Triangles(1, 20, 18, 0, 20, 1, 21, 0),
    gsSP2Triangles(1, 22, 21, 0, 22, 1, 23, 0),
    gsSP2Triangles(1, 3, 23, 0, 23, 3, 24, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 26, 24, 0, 19, 26, 27, 0),
    gsSP2Triangles(19, 28, 26, 0, 19, 18, 28, 0),
    gsSP2Triangles(20, 28, 18, 0, 28, 20, 29, 0),
    gsSPVertex(&dawngrove_house_2_room_0Vtx_003A20[51], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 1, 3, 0, 1, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 4, 7, 0),
    gsSPEndDisplayList(),
};
