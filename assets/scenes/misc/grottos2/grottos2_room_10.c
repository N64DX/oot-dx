#include "grottos2_room_10.h"
#include "grottos2_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd grottos2_room_10[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&grottos2_room_10RoomShapeCullable_000100),
    SCENE_CMD_OBJECT_LIST(2, grottos2_room_10ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(2, grottos2_room_10ActorEntry_000048),
    SCENE_CMD_END(),
};

s16 grottos2_room_10ObjectList_000040[] = {
    OBJECT_STALM,
    OBJECT_BOX,
};

ActorEntry grottos2_room_10ActorEntry_000048[] = {
    { ACTOR_EN_STALM, { 2400, 0, 900 }, {    0, 0x8000, 0 }, 0x0101 }, // Switch: 01
    { ACTOR_EN_BOX,   { 2400, 0, 700 }, { 0x3E, 0x8000, 1 }, 0xB000 },
};

RoomShapeCullable grottos2_room_10RoomShapeCullable_000100 = { 
    2, 5,
    grottos2_room_10RoomShapeCullableEntry_00010C,
    grottos2_room_10RoomShapeCullableEntry_00010C + ARRAY_COUNTU(grottos2_room_10RoomShapeCullableEntry_00010C)
};

RoomShapeCullableEntry grottos2_room_10RoomShapeCullableEntry_00010C[5] = {
    { {   2413,    240,   1347 },    246, NULL, grottos2_room_10DL_0012A0 },
    { {   2424,      0,   1355 },   -128, grottos2_room_10DL_001090, NULL },
    { {   2405,      0,   1066 },    436, grottos2_room_10DL_000A20, NULL },
    { {   2418,    365,   1058 },    490, grottos2_room_10DL_000E98, NULL },
    { {   2414,    240,   1058 },    534, grottos2_room_10DL_000650, NULL },
};

s32 grottos2_room_10_terminatorMaybe_00015C = { 0x01000000 };

Vtx grottos2_room_10Vtx_000160[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_10Vtx_000160.vtx.inc"
};

Vtx grottos2_room_10Vtx_0007E0[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_10Vtx_0007E0.vtx.inc"
};

Vtx grottos2_room_10Vtx_000B68[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_10Vtx_000B68.vtx.inc"
};

Vtx grottos2_room_10Vtx_000FD0[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_10Vtx_000FD0.vtx.inc"
};

Vtx grottos2_room_10Vtx_001160[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_10Vtx_001160.vtx.inc"
};

Gfx grottos2_room_10DL_000650[] = {
    gsSPVertex(&grottos2_room_10Vtx_000160[71], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x73, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00C0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(grottos2_sceneTex_00ACD0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_10Vtx_000160, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 6, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 22, 20, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 24, 21, 0),
    gsSP2Triangles(25, 21, 26, 0, 27, 25, 26, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&grottos2_room_10Vtx_000160[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 1, 12, 14, 0),
    gsSP2Triangles(1, 14, 15, 0, 16, 1, 17, 0),
    gsSP2Triangles(10, 9, 18, 0, 10, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(22, 21, 24, 0, 22, 24, 28, 0),
    gsSP2Triangles(26, 25, 29, 0, 26, 29, 30, 0),
    gsSPVertex(&grottos2_room_10Vtx_000160[62], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(0, 6, 7, 0, 8, 0, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_10DL_000A20[] = {
    gsSPVertex(&grottos2_room_10Vtx_0007E0[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x69, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00E8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(grottos2_sceneTex_00C8D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_10Vtx_0007E0, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 5, 2, 0, 7, 6, 2, 0),
    gsSP2Triangles(2, 1, 8, 0, 2, 8, 9, 0),
    gsSP2Triangles(2, 9, 10, 0, 11, 7, 2, 0),
    gsSP2Triangles(11, 2, 10, 0, 11, 10, 12, 0),
    gsSP2Triangles(10, 9, 13, 0, 10, 13, 14, 0),
    gsSP2Triangles(15, 12, 10, 0, 15, 10, 14, 0),
    gsSP2Triangles(14, 13, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 15, 14, 0, 18, 14, 17, 0),
    gsSP2Triangles(16, 19, 20, 0, 17, 16, 20, 0),
    gsSP2Triangles(18, 17, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(20, 19, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 21, 20, 0, 24, 20, 23, 0),
    gsSP2Triangles(23, 22, 25, 0, 26, 24, 23, 0),
    gsSP2Triangles(26, 23, 25, 0, 27, 26, 25, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_10DL_000E98[] = {
    gsSPVertex(&grottos2_room_10Vtx_000B68[43], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00F4D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_10Vtx_000B68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 4, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(14, 17, 18, 0, 14, 18, 15, 0),
    gsSP2Triangles(19, 20, 13, 0, 20, 14, 13, 0),
    gsSP2Triangles(20, 17, 14, 0, 20, 21, 17, 0),
    gsSP2Triangles(22, 23, 3, 0, 22, 3, 5, 0),
    gsSP2Triangles(23, 24, 0, 0, 23, 0, 3, 0),
    gsSP2Triangles(22, 7, 10, 0, 22, 10, 23, 0),
    gsSP2Triangles(10, 12, 24, 0, 10, 24, 23, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 29, 28, 0, 31, 25, 27, 0),
    gsSPVertex(&grottos2_room_10Vtx_000B68[32], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 5, 10, 7, 0),
    gsSP1Triangle(10, 8, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_10DL_001090[] = {
    gsSPVertex(&grottos2_room_10Vtx_000FD0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00F0D0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 154),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_10Vtx_000FD0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_10DL_0012A0[] = {
    gsSPVertex(&grottos2_room_10Vtx_001160[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 199),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00B4D0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 14, G_TX_NOLOD),
    gsDPLoadMultiBlock(grottos2_sceneTex_00B4D0, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 15, G_TX_NOLOD),
    gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_10Vtx_001160, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};
