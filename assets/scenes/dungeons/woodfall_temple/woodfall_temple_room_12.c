#include "woodfall_temple_room_12.h"
#include "woodfall_temple_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd woodfall_temple_room_12Commands[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&woodfall_temple_room_12RoomShapeCullable_000070),
    SCENE_CMD_OBJECT_LIST(16, woodfall_temple_room_12ObjectList_000038),
    SCENE_CMD_END(),
};

s16 woodfall_temple_room_12ObjectList_000038[] = {
    OBJECT_NUMA_OBJ,
    OBJECT_BDOOR,
    OBJECT_KUSA,
    OBJECT_BOX,
    OBJECT_SYOKUDAI,
    OBJECT_LADDER,
    OBJECT_RAF,
    OBJECT_KUSA,
    OBJECT_RAILLIFT,
    OBJECT_MKK,
    OBJECT_GRASSHOPPER,
    OBJECT_ST,
    OBJECT_DEKUBABA,
    OBJECT_KIBAKO2,
    OBJECT_FR,
    OBJECT_BG_TELEPORTER,
};

RoomShapeCullable woodfall_temple_room_12RoomShapeCullable_000070 = { 
    2, 6,
    woodfall_temple_room_12RoomShapeCullableEntry_00007C,
    woodfall_temple_room_12RoomShapeCullableEntry_00007C + ARRAY_COUNTU(woodfall_temple_room_12RoomShapeCullableEntry_00007C)
};

RoomShapeCullableEntry woodfall_temple_room_12RoomShapeCullableEntry_00007C[6] = {
    { {      0,    -15,  -3240 },   1020, woodfall_temple_room_12DL_0002E0, NULL },
    { {      0,  -1185,  -3060 },    846, woodfall_temple_room_12DL_000998, NULL },
    { {      0,  -1035,  -3240 },    954, woodfall_temple_room_12DL_000CE8, NULL },
    { {      0,  -1105,  -2295 },    102, woodfall_temple_room_12DL_000F58, NULL },
    { {      0,   -645,  -3240 },    974, woodfall_temple_room_12DL_0011C8, NULL },
    { {      0,   -795,  -3810 },    552, woodfall_temple_room_12DL_001378, NULL },
};

s32 woodfall_temple_room_12_terminatorMaybe_0000DC = { 0x01000000 };

Vtx woodfall_temple_room_12Vtx_0000E0[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Vtx_0000E0.vtx.inc"
};

Gfx woodfall_temple_room_12DL_0002E0[] = {
    gsSPVertex(&woodfall_temple_room_12Vtx_0000E0[24], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_12Tex_001488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_12Vtx_0000E0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 7, 9, 0, 14, 9, 15, 0),
    gsSP2Triangles(16, 3, 6, 0, 16, 6, 17, 0),
    gsSP2Triangles(18, 0, 2, 0, 18, 2, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_12Vtx_0003E8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Vtx_0003E8.vtx.inc"
};

Gfx woodfall_temple_room_12DL_000998[] = {
    gsSPVertex(&woodfall_temple_room_12Vtx_0003E8[83], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_12Tex_003488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_12Vtx_0003E8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 1, 6, 0),
    gsSP2Triangles(8, 1, 7, 0, 5, 1, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(11, 13, 14, 0, 11, 10, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 18, 16, 0),
    gsSP2Triangles(19, 18, 15, 0, 19, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 22, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 30, 28, 0),
    gsSP1Triangle(31, 30, 27, 0),
    gsSPVertex(&woodfall_temple_room_12Vtx_0003E8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 0, 8, 0),
    gsSP2Triangles(7, 8, 6, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 12, 0),
    gsSP2Triangles(15, 12, 11, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 20, 19, 21, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 26, 25, 27, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 28, 30, 0),
    gsSP2Triangles(29, 26, 28, 0, 29, 26, 28, 0),
    gsSP2Triangles(29, 28, 30, 0, 3, 4, 5, 0),
    gsSPVertex(&woodfall_temple_room_12Vtx_0003E8[63], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 1, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_12Vtx_000B68[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Vtx_000B68.vtx.inc"
};

Gfx woodfall_temple_room_12DL_000CE8[] = {
    gsSPVertex(&woodfall_temple_room_12Vtx_000B68[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_12Tex_001C88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_12Vtx_000B68, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_12Vtx_000DD8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Vtx_000DD8.vtx.inc"
};

Gfx woodfall_temple_room_12DL_000F58[] = {
    gsSPVertex(&woodfall_temple_room_12Vtx_000DD8[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_12Tex_001488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_12Vtx_000DD8, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 0, 2, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_12Vtx_001048[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Vtx_001048.vtx.inc"
};

Gfx woodfall_temple_room_12DL_0011C8[] = {
    gsSPVertex(&woodfall_temple_room_12Vtx_001048[16], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_12Tex_002488, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_12Vtx_001048, 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
};

Vtx woodfall_temple_room_12Vtx_0012B8[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Vtx_0012B8.vtx.inc"
};

Gfx woodfall_temple_room_12DL_001378[] = {
    gsSPVertex(&woodfall_temple_room_12Vtx_0012B8[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(woodfall_temple_sceneTLUT_017190),
    gsDPLoadTextureBlock(woodfall_temple_room_12Tex_002C88, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPClearGeometryMode(G_CULL_FRONT | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(woodfall_temple_room_12Vtx_0012B8, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 woodfall_temple_room_12Tex_001488[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Tex_001488.ci8.inc.c"
};

u64 woodfall_temple_room_12Tex_001C88[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Tex_001C88.ci8.inc.c"
};

u64 woodfall_temple_room_12Tex_002488[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Tex_002488.ci8.inc.c"
};

u64 woodfall_temple_room_12Tex_002C88[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Tex_002C88.ci8.inc.c"
};

u64 woodfall_temple_room_12Tex_003488[] = {
#include "assets/scenes/dungeons/woodfall_temple/woodfall_temple_room_12Tex_003488.ci8.inc.c"
};
