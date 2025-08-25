#include "grotto_shortcuts_room_0.h"
#include "grotto_shortcuts_room_1.h"
#include "grotto_shortcuts_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd grotto_shortcuts_room_1Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(1, 4, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 3),
    SCENE_CMD_ROOM_SHAPE(&grotto_shortcuts_room_1RoomShapeCullable_000080),
    SCENE_CMD_OBJECT_LIST(2, grotto_shortcuts_room_1ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(3, grotto_shortcuts_room_1ActorEntry_000048),
    SCENE_CMD_END(),
};

s16 grotto_shortcuts_room_1ObjectList_000040[] = {
    OBJECT_DINOFOS,
    OBJECT_BOX,
};

ActorEntry grotto_shortcuts_room_1ActorEntry_000048[] = {
    { ACTOR_EN_DINOFOS, { 513, 0, 1019 }, { 0,      0x0011, 0 }, 0x0000 },
    { ACTOR_EN_DINOFOS, { 741, 0,  858 }, { 0,      0,      0 }, 0x0000 },
    { ACTOR_EN_BOX,     { 615, 0,  786 }, { 0x000A, 0x8000, 0 }, 0x17C0 },
};

RoomShapeCullable grotto_shortcuts_room_1RoomShapeCullable_000080 = { 
    2, 5,
    grotto_shortcuts_room_1RoomShapeCullableEntry_00008C,
    grotto_shortcuts_room_1RoomShapeCullableEntry_00008C + ARRAY_COUNTU(grotto_shortcuts_room_1RoomShapeCullableEntry_00008C)
};

RoomShapeCullableEntry grotto_shortcuts_room_1RoomShapeCullableEntry_00008C[5] = {
    { {    613,    240,   1539 },    246, NULL, grotto_shortcuts_room_1DL_002980 },
    { {    624,      0,   1547 },    128, grotto_shortcuts_room_1DL_000F78, NULL },
    { {    621,      0,   1134 },    558, grotto_shortcuts_room_1DL_000940, NULL },
    { {    611,    365,   1151 },    600, grotto_shortcuts_room_1DL_000D80, NULL },
    { {    621,    240,   1151 },    624, grotto_shortcuts_room_1DL_0005B0, NULL },
};

s32 grotto_shortcuts_room_1_terminatorMaybe_0000DC = { 0x01000000 };

u64 grotto_shortcuts_room_1Tex_001040[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Tex_001040.rgba16.inc.c"
};

u64 grotto_shortcuts_room_1Tex_001840[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Tex_001840.rgba16.inc.c"
};

Vtx grotto_shortcuts_room_1Vtx_0000E0[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Vtx_0000E0.vtx.inc"
};

Vtx grotto_shortcuts_room_1Vtx_000710[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Vtx_000710.vtx.inc"
};

Vtx grotto_shortcuts_room_1Vtx_000A50[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Vtx_000A50.vtx.inc"
};

Vtx grotto_shortcuts_room_1Vtx_000EB8[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Vtx_000EB8.vtx.inc"
};

Vtx grotto_shortcuts_room_1Vtx_002840[] = {
#include "assets/scenes/misc/grotto_shortcuts/grotto_shortcuts_room_1Vtx_002840.vtx.inc"
};

Gfx grotto_shortcuts_room_1DL_0005B0[] = {
    gsSPVertex(&grotto_shortcuts_room_1Vtx_0000E0[69], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_room_1Tex_001840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_1Vtx_0000E0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 1, 6, 0, 1, 8, 6, 0),
    gsSP2Triangles(9, 5, 4, 0, 9, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 14, 12, 0),
    gsSP2Triangles(12, 9, 15, 0, 12, 10, 9, 0),
    gsSP2Triangles(16, 17, 11, 0, 17, 14, 11, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 21, 19, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 26, 0),
    gsSP2Triangles(23, 27, 25, 0, 27, 28, 25, 0),
    gsSP2Triangles(29, 18, 30, 0, 29, 21, 18, 0),
    gsSPVertex(&grotto_shortcuts_room_1Vtx_0000E0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 15, 0, 17, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(22, 26, 25, 0, 17, 27, 28, 0),
    gsSP2Triangles(17, 28, 21, 0, 27, 29, 28, 0),
    gsSP1Triangle(27, 30, 29, 0),
    gsSPVertex(&grotto_shortcuts_room_1Vtx_0000E0[62], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 4, 6, 5, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_1DL_000940[] = {
    gsSPVertex(&grotto_shortcuts_room_1Vtx_000710[27], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, PRIMITIVE, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_room_1Tex_001040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_1Vtx_000710, 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(1, 6, 7, 0, 1, 7, 3, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 3, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 7, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 7, 0),
    gsSP2Triangles(12, 13, 10, 0, 12, 10, 9, 0),
    gsSP2Triangles(12, 14, 13, 0, 13, 11, 10, 0),
    gsSP2Triangles(13, 15, 11, 0, 13, 16, 15, 0),
    gsSP2Triangles(14, 17, 13, 0, 17, 18, 13, 0),
    gsSP2Triangles(18, 19, 13, 0, 19, 20, 13, 0),
    gsSP2Triangles(20, 21, 13, 0, 21, 16, 13, 0),
    gsSP2Triangles(22, 2, 23, 0, 22, 24, 2, 0),
    gsSP2Triangles(24, 0, 2, 0, 2, 25, 23, 0),
    gsSP2Triangles(2, 26, 25, 0, 2, 5, 26, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_1DL_000D80[] = {
    gsSPVertex(&grotto_shortcuts_room_1Vtx_000A50[43], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00F4D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_1Vtx_000A50, 32, 0),
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
    gsSP1Triangle(30, 29, 28, 0),
    gsSPVertex(&grotto_shortcuts_room_1Vtx_000A50[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 3, 4, 0, 1, 4, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(6, 11, 8, 0, 11, 9, 8, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_1DL_000F78[] = {
    gsSPVertex(&grotto_shortcuts_room_1Vtx_000EB8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00F0D0, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 154),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_1Vtx_000EB8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx grotto_shortcuts_room_1DL_002980[] = {
    gsSPVertex(&grotto_shortcuts_room_1Vtx_002840[12], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 199),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grotto_shortcuts_sceneTex_00B4D0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 14, G_TX_NOLOD),
    gsDPLoadMultiBlock(grotto_shortcuts_sceneTex_00B4D0, 0x0000, 1, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 4, 15, G_TX_NOLOD),
  //gsSPDisplayList(0x0D000000),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grotto_shortcuts_room_1Vtx_002840, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
};
