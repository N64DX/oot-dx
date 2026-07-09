#include "ikana_canyon_scene.h"
#include "ikana_canyon_room_4.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd ikana_canyon_room_4[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&ikana_canyon_room_4RoomShapeCullable_000140),
    SCENE_CMD_OBJECT_LIST(14, ikana_canyon_room_4ObjectList_000058),
    SCENE_CMD_ACTOR_LIST(4, ikana_canyon_room_4ActorEntry_000084),
    SCENE_CMD_END(),
};

s16 ikana_canyon_room_4ObjectList_000058[] = {
    OBJECT_OKUTA,
    OBJECT_ICEFLOE,
    OBJECT_SPOT18_OBJ,
    OBJECT_RD,
    OBJECT_HSSTUMP,
    OBJECT_GI_HEART,
    OBJECT_BB,
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_SHOPNUTS,
    OBJECT_CROW,
    OBJECT_KUSA,
    OBJECT_BIG_FWALL,
    OBJECT_JSO,
};

ActorEntry ikana_canyon_room_4ActorEntry_000084[] = {
    { ACTOR_EN_GS,         {   3323,  -160, 3940 }, { 0, 0xC800, 0 }, 0x0000 },
    { ACTOR_EN_ITEM00,     {   3238,  -160, 3901 }, { 0,      0, 0 }, 0x1E06 },
    { ACTOR_EN_KANBAN,     {   2265,  -160, 4554 }, { 0, 0x3D00, 0 }, 0x0034 },
    { ACTOR_EN_DNS,        {   2657,  -160, 4261 }, { 0,      0, 0 }, 0x0007 },
};

RoomShapeCullable ikana_canyon_room_4RoomShapeCullable_000140 = { 
    2, 14,
    ikana_canyon_room_4RoomShapeCullableEntry_00014C,
    ikana_canyon_room_4RoomShapeCullableEntry_00014C + ARRAY_COUNTU(ikana_canyon_room_4RoomShapeCullableEntry_00014C)
};

RoomShapeCullableEntry ikana_canyon_room_4RoomShapeCullableEntry_00014C[14] = {
    { {   2148,   -160,   4715 },    420, ikana_canyon_room_4DL_0007C8, NULL },
    { {   2148,   -154,   4715 },    420, NULL, ikana_canyon_room_4DL_007E98 },
    { {   2512,   -122,   4999 },     98, ikana_canyon_room_4DL_000C78, NULL },
    { {   1981,    -60,   4709 },    278, ikana_canyon_room_4DL_000F70, NULL },
    { {   2722,    251,   4162 },   1312, ikana_canyon_room_4DL_001670, NULL },
    { {   2755,   -578,   4160 },   1076, ikana_canyon_room_4DL_001CC0, NULL },
    { {   2755,   -632,   4167 },   1070, ikana_canyon_room_4DL_001EF8, NULL },
    { {   2752,   -250,   4331 },    992, NULL, ikana_canyon_room_4DL_008128 },
    { {   2645,   -220,   4271 },   1068, ikana_canyon_room_4DL_001A20, NULL },
    { {   2723,    871,   4148 },   1078, ikana_canyon_room_4DL_002808, NULL },
    { {   2438,   -380,   4291 },   1330, ikana_canyon_room_4DL_002488, NULL },
    { {   2069,   -277,   3566 },    186, NULL, ikana_canyon_room_4DL_0082B0 },
    { {   2723,   -520,   4294 },   1324, NULL, ikana_canyon_room_4DL_008820 },
    { {   2562,   -160,   4979 },    -62, ikana_canyon_room_4DL_0029D0, NULL },
};

s32 ikana_canyon_room_4_terminatorMaybe_00022C = { 0x01000000 };

Vtx ikana_canyon_room_4Vtx_000558[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_000558.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_000938[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_000938.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_000DB0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_000DB0.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_001050[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_001050.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_001880[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_001880.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_001B20[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_001B20.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_001DC8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_001DC8.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_001FE8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_001FE8.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_002638[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_002638.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_002910[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_002910.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_007CD8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_007CD8.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_007FA8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_007FA8.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_0081F0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_0081F0.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_008350[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_008350.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_008560[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_008560.vtx.inc"
};

Vtx ikana_canyon_room_4Vtx_0086C0[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Vtx_0086C0.vtx.inc"
};

u64 ikana_canyon_room_4Tex_0042C8[] = {
#include "assets/scenes/overworld/ikana_canyon/ikana_canyon_room_4Tex_0042C8.ia8.inc.c"
};

Gfx ikana_canyon_room_4DL_0007C8[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_000558[31], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01C440, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_000558, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01D040, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ikana_canyon_room_4Vtx_000558[24], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_000C78[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_000938[44], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(ikana_canyon_sceneTLUT_023680),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01B340, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_000938, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 0, 2, 0, 16, 2, 4, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 28, 26, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_4Vtx_000938[32], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 10, 9, 0),
    gsSP1Triangle(10, 11, 9, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_000F70[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_000DB0[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_017340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_000DB0, 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 6, 9, 0, 9, 8, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 18, 0),
    gsSP2Triangles(16, 15, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(17, 7, 6, 0, 18, 17, 6, 0),
    gsSP2Triangles(19, 18, 6, 0, 19, 6, 10, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_001670[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_001050[90], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadTextureBlock_4b(ikana_canyon_sceneTex_01CC40, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01CC40),
    gsDPLoadMultiBlock_4b(ikana_canyon_sceneTex_01CC40, 0x0000, 1, G_IM_FMT_CI, 32, 128, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 7, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_001050, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 3, 0, 3, 6, 4, 0),
    gsSP2Triangles(3, 7, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(8, 11, 9, 0, 11, 12, 9, 0),
    gsSP2Triangles(13, 11, 8, 0, 13, 14, 11, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(15, 18, 17, 0, 19, 20, 17, 0),
    gsSP2Triangles(21, 22, 17, 0, 23, 24, 17, 0),
    gsSP2Triangles(23, 25, 24, 0, 26, 27, 24, 0),
    gsSP2Triangles(28, 29, 24, 0, 24, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_4Vtx_001050[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 9, 12, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 9, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 21, 19, 0, 18, 20, 22, 0),
    gsSP2Triangles(20, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_4Vtx_001050[64], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 9, 0),
    gsSP2Triangles(7, 11, 6, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 7, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 12, 13, 0, 12, 9, 13, 0),
    gsSP2Triangles(9, 16, 17, 0, 9, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_001A20[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_001880[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_014C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 2, 2),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_014440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_001880, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 6, 5, 13, 0),
    gsSP2Triangles(11, 13, 12, 0, 11, 6, 13, 0),
    gsSP2Triangles(14, 15, 7, 0, 14, 7, 6, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_001CC0[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_001B20[18], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01A440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_013440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x08000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_001B20, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(13, 12, 15, 0, 13, 15, 14, 0),
    gsSP2Triangles(17, 16, 7, 0, 17, 7, 6, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_001EF8[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_001DC8[11], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01AC40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01B440, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPDisplayList(0x09000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_001DC8, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 3, 1, 9, 0),
    gsSP1Triangle(10, 8, 5, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_002488[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_001FE8[66], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_017340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_001FE8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 17, 0, 18, 17, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(7, 6, 25, 0, 7, 25, 24, 0),
    gsSP2Triangles(20, 26, 27, 0, 20, 27, 21, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&ikana_canyon_room_4Vtx_001FE8[32], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 5, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_022A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 98, 145, 143, 255),
    gsSPVertex(&ikana_canyon_room_4Vtx_001FE8[49], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 13, 16, 0, 14, 16, 8, 0),
    gsSP2Triangles(7, 6, 1, 0, 7, 1, 0, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_002808[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_002638[21], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal16(15, ikana_canyon_sceneTLUT_01E160),
    gsDPLoadTextureBlock_4b(ikana_canyon_sceneTex_01E160, G_IM_FMT_CI, 128, 32, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 7, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_002638, 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 8, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 11, 10, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 16, 0, 19, 16, 15, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_0029D0[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_002910[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 127),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_room_4Tex_0042C8, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_002910, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_007E98[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_007CD8[20], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01DC60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_007CD8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(&ikana_canyon_room_4Vtx_007CD8[16], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_008128[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_007FA8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01DC60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_007FA8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 8, 11, 0, 13, 11, 14, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_0082B0[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_0081F0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_0081F0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_008470[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_008350[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 90),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01D440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock(ikana_canyon_sceneTex_01D440, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsSPDisplayList(0x0A000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_008350, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 5, 9, 6, 0),
    gsSP2Triangles(0, 3, 9, 0, 0, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_008620[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_008560[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_008560, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_008780[] = {
    gsSPVertex(&ikana_canyon_room_4Vtx_0086C0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(ikana_canyon_sceneTex_01E060, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 249),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(ikana_canyon_room_4Vtx_0086C0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx ikana_canyon_room_4DL_008820[] = {
    gsSPDisplayList(ikana_canyon_room_4DL_008470),
    gsSPDisplayList(ikana_canyon_room_4DL_008620),
    gsSPDisplayList(ikana_canyon_room_4DL_008780),
    gsSPEndDisplayList(),
};
