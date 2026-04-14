#include "grottos2_scene.h"
#include "grottos2_room_13.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd grottos2_room_13[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&grottos2_room_13RoomShapeCullable_000090),
    SCENE_CMD_OBJECT_LIST(2, grottos2_room_13ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(2, grottos2_room_13ActorEntry_000048),
    SCENE_CMD_END(),
};

s16 grottos2_room_13ObjectList_000040[] = {
    OBJECT_STALM,
    OBJECT_BOX,
};

ActorEntry grottos2_room_13ActorEntry_000048[] = {
    { ACTOR_EN_STALM, { 5200, -20, 600 }, {    0, 0x8000, 0 }, 0x0001 }, // Switch: 00
    { ACTOR_EN_BOX,   { 5200, -20, 100 }, { 0x3E, 0x8000, 0 }, 0xB000 },
};

RoomShapeCullable grottos2_room_13RoomShapeCullable_000090 = { 
    2, 7,
    grottos2_room_13RoomShapeCullableEntry_00009C,
    grottos2_room_13RoomShapeCullableEntry_00009C + ARRAY_COUNTU(grottos2_room_13RoomShapeCullableEntry_00009C)
};

RoomShapeCullableEntry grottos2_room_13RoomShapeCullableEntry_00009C[7] = {
    { {   5224,    240,   1340 },    246, NULL, grottos2_room_13DL_003658 },
    { {   5235,      0,   1348 },   -128, grottos2_room_13DL_001C30, NULL },
    { {   5228,      0,   1306 },    182, grottos2_room_13DL_000498, NULL },
    { {   5267,     -6,    591 },    670, grottos2_room_13DL_000260, NULL },
    { {   5273,      2,    713 },    746, grottos2_room_13DL_0018C8, NULL },
    { {   5267,    435,    720 },    770, grottos2_room_13DL_000E98, NULL },
    { {   5267,    230,    720 },    806, grottos2_room_13DL_000AC0, NULL },
};

s32 grottos2_room_13_terminatorMaybe_00010C = { 0x01000000 };

Vtx grottos2_room_13Vtx_000110[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_000110.vtx.inc"
};

Vtx grottos2_room_13Vtx_000358[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_000358.vtx.inc"
};

Vtx grottos2_room_13Vtx_000590[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_000590.vtx.inc"
};

Vtx grottos2_room_13Vtx_000C68[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_000C68.vtx.inc"
};

Vtx grottos2_room_13Vtx_000FA8[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_000FA8.vtx.inc"
};

Vtx grottos2_room_13Vtx_001B70[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_001B70.vtx.inc"
};

Vtx grottos2_room_13Vtx_003518[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Vtx_003518.vtx.inc"
};

u64 grottos2_room_13Tex_001D08[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Tex_001D08.rgba16.inc.c"
};

u64 grottos2_room_13Tex_002D08[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_13Tex_002D08.rgba16.inc.c"
};

Gfx grottos2_room_13DL_000260[] = {
    gsSPVertex(&grottos2_room_13Vtx_000110[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x4B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00E8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(grottos2_sceneTex_00E8D0, 0x0000, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_13Vtx_000110, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 0, 5, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 6, 7, 1, 0),
    gsSP2Triangles(7, 4, 1, 0, 4, 8, 3, 0),
    gsSP2Triangles(4, 9, 8, 0, 6, 10, 7, 0),
    gsSP2Triangles(5, 11, 6, 0, 3, 12, 2, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_13DL_000498[] = {
    gsSPVertex(&grottos2_room_13Vtx_000358[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00C8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(grottos2_sceneTex_00E8D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 14, 14),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_13Vtx_000358, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 1, 5, 3, 0),
    gsSP2Triangles(1, 6, 5, 0, 1, 7, 6, 0),
    gsSP2Triangles(4, 8, 1, 0, 8, 9, 1, 0),
    gsSP2Triangles(9, 10, 1, 0, 10, 11, 1, 0),
    gsSP1Triangle(11, 7, 1, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_13DL_000AC0[] = {
    gsSPVertex(&grottos2_room_13Vtx_000590[75], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x5F, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00D8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock_4b(grottos2_sceneTex_00ACD0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_13Vtx_000590, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(7, 6, 24, 0, 7, 24, 25, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSPVertex(&grottos2_room_13Vtx_000590[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 8, 11, 12, 0),
    gsSP2Triangles(8, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 21, 20, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 14, 0),
    gsSP2Triangles(25, 14, 13, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&grottos2_room_13Vtx_000590[61], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_13DL_000E98[] = {
    gsSPVertex(&grottos2_room_13Vtx_000C68[27], 8, 0),
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
    gsSPVertex(grottos2_room_13Vtx_000C68, 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsSP2Triangles(2, 1, 8, 0, 2, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 2, 9, 11, 0),
    gsSP2Triangles(5, 2, 11, 0, 5, 11, 12, 0),
    gsSP2Triangles(7, 5, 12, 0, 13, 7, 12, 0),
    gsSP2Triangles(11, 10, 14, 0, 11, 14, 15, 0),
    gsSP2Triangles(12, 11, 15, 0, 12, 15, 16, 0),
    gsSP2Triangles(12, 16, 17, 0, 13, 12, 17, 0),
    gsSPVertex(&grottos2_room_13Vtx_000C68[18], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_13DL_0018C8[] = {
    gsSPVertex(&grottos2_room_13Vtx_000FA8[138], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_room_13Tex_001D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_13Vtx_000FA8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&grottos2_room_13Vtx_000FA8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&grottos2_room_13Vtx_000FA8[64], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(grottos2_room_13Tex_002D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&grottos2_room_13Vtx_000FA8[72], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(grottos2_room_13Tex_002D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 89, 165, 104, 255),
    gsSPVertex(&grottos2_room_13Vtx_000FA8[80], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 0, 2, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(grottos2_room_13Tex_002D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPVertex(&grottos2_room_13Vtx_000FA8[102], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 4, 29, 5, 0),
    gsSPVertex(&grottos2_room_13Vtx_000FA8[132], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_13DL_001C30[] = {
    gsSPVertex(&grottos2_room_13Vtx_001B70[4], 8, 0),
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
    gsSPVertex(grottos2_room_13Vtx_001B70, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_13DL_003658[] = {
    gsSPVertex(&grottos2_room_13Vtx_003518[12], 8, 0),
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
    gsSPVertex(grottos2_room_13Vtx_003518, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};
