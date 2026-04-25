#include "grottos2_scene.h"
#include "grottos2_room_8.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd grottos2_room_8[] = {
    SCENE_CMD_ECHO_SETTINGS(0),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&grottos2_room_8RoomShapeCullable_000170),
    SCENE_CMD_OBJECT_LIST(3, grottos2_room_8ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(16, grottos2_room_8ActorEntry_000044),
    SCENE_CMD_END(),
};

s16 grottos2_room_8ObjectList_000040[] = {
    OBJECT_MKK,
    OBJECT_ST,
    OBJECT_DEKUBABA,
};

ActorEntry grottos2_room_8ActorEntry_000044[] = {
    { ACTOR_EN_DEKUBABA, { 1116, 440,    767 }, { 0,      0,     0 }, 0x0000 },
    { ACTOR_EN_DEKUBABA, { 1280, 440,    960 }, { 0,      0,     0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1145, 412,   1065 }, { 0,      0,     0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1164,  48,   1285 }, { 0,      0,     0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1247, 363,   1065 }, { 0,      0,     0 }, 0x0000 },
    { ACTOR_EN_SW,       { 1289, 120,   1285 }, { 0,      0,     0 }, 0x0000 },
    { ACTOR_EN_MKK,      { 1140, 530,   1187 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1165, 575,   1143 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1182, 561,   1218 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1202, 609,   1087 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1206, 596,   1143 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1213, 572,   1184 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1247, 616,   1105 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1254, 565,   1198 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1265, 575,   1143 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
    { ACTOR_EN_MKK,      { 1296, 578,   1167 }, { 0, 0xFF4A, 0xB61 }, 0xFF00 },
};

RoomShapeCullable grottos2_room_8RoomShapeCullable_000170 = { 
    2, 8,
    grottos2_room_8RoomShapeCullableEntry_00017C,
    grottos2_room_8RoomShapeCullableEntry_00017C + ARRAY_COUNTU(grottos2_room_8RoomShapeCullableEntry_00017C)
};

RoomShapeCullableEntry grottos2_room_8RoomShapeCullableEntry_00017C[8] = {
    { {   1219,    514,   1164 },    688, NULL, grottos2_room_8DL_002AA0 },
    { {   1224,    220,   1161 },   -566, grottos2_room_8DL_0015B8, NULL },
    { {   1226,    220,   1183 },    660, grottos2_room_8DL_000D38, NULL },
    { {   1226,    514,   1183 },    806, grottos2_room_8DL_000740, NULL },
    { {   1223,    220,   1175 },    276, grottos2_room_8DL_000A18, NULL },
    { {   1243,    230,    999 },    524, grottos2_room_8DL_001108, NULL },
    { {   1226,    246,    999 },    524, grottos2_room_8DL_001340, NULL },
    { {   1223,    220,   1179 },    276, NULL, grottos2_room_8DL_002CA0 },
};

s32 grottos2_room_8_terminatorMaybe_0001FC = { 0x01000000 };

Vtx grottos2_room_8Vtx_000200[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_000200.vtx.inc"
};

Vtx grottos2_room_8Vtx_0008F8[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_0008F8.vtx.inc"
};

Vtx grottos2_room_8Vtx_000AF8[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_000AF8.vtx.inc"
};

Vtx grottos2_room_8Vtx_000E68[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_000E68.vtx.inc"
};

Vtx grottos2_room_8Vtx_0011F0[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_0011F0.vtx.inc"
};

Vtx grottos2_room_8Vtx_0014B8[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_0014B8.vtx.inc"
};

Vtx grottos2_room_8Vtx_0028A0[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_0028A0.vtx.inc"
};

Vtx grottos2_room_8Vtx_002BA0[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Vtx_002BA0.vtx.inc"
};

u64 grottos2_room_8Tex_001898[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Tex_001898.rgba16.inc.c"
};

u64 grottos2_room_8Tex_002D60[] = {
#include "assets/scenes/misc/grottos2/grottos2_room_8Tex_002D60.rgba16.inc.c"
};

Gfx grottos2_room_8DL_000740[] = {
    gsSPVertex(&grottos2_room_8Vtx_000200[76], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, 0, TEXEL0, 0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x55, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00C0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(grottos2_sceneTex_00ACD0, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_8Vtx_000200, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 6, 4, 5, 0),
    gsSP2Triangles(8, 7, 6, 0, 8, 6, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 10, 8, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(2, 1, 12, 0, 2, 12, 15, 0),
    gsSP2Triangles(16, 17, 10, 0, 16, 10, 18, 0),
    gsSP2Triangles(14, 19, 20, 0, 14, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 22, 0, 26, 22, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&grottos2_room_8Vtx_000200[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 15, 0),
    gsSP2Triangles(16, 10, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 20, 23, 21, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(28, 30, 29, 0, 26, 31, 27, 0),
    gsSPVertex(&grottos2_room_8Vtx_000200[64], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 10, 9, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_000A18[] = {
    gsSPVertex(&grottos2_room_8Vtx_0008F8[10], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x9B, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_room_8Tex_001898, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 5, 1, 1),
    gsDPLoadMultiBlock(grottos2_sceneTex_00C0D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_8Vtx_0008F8, 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 8, 9, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_000D38[] = {
    gsSPVertex(&grottos2_room_8Vtx_000AF8[28], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x87, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00C8D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock(grottos2_sceneTex_00E8D0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 1, 2),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_8Vtx_000AF8, 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(1, 6, 2, 0, 6, 4, 2, 0),
    gsSP2Triangles(1, 7, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 10, 6, 0),
    gsSP2Triangles(10, 4, 6, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(15, 14, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 18, 21, 20, 0),
    gsSP2Triangles(18, 22, 21, 0, 17, 23, 18, 0),
    gsSP2Triangles(23, 24, 18, 0, 24, 22, 18, 0),
    gsSP2Triangles(23, 25, 26, 0, 23, 26, 24, 0),
    gsSP2Triangles(26, 27, 22, 0, 26, 22, 24, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_001108[] = {
    gsSPVertex(&grottos2_room_8Vtx_000E68[34], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_001820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_CLAMP, 6, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_8Vtx_000E68, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&grottos2_room_8Vtx_000E68[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_001340[] = {
    gsSPVertex(&grottos2_room_8Vtx_0011F0[13], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 3, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, TEXEL1, TEXEL0, LOD_FRACTION, TEXEL0, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLOD(G_TL_LOD),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_sceneTex_00D0D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(grottos2_sceneTex_001620, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(grottos2_sceneTex_001620, 0x0100, 2, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPLoadMultiBlock(grottos2_sceneTex_001620, 0x0100, 3, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 4, 1, 1),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_8Vtx_0011F0, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureLOD(G_TL_TILE),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_0015B8[] = {
    gsSPVertex(&grottos2_room_8Vtx_0014B8[8], 8, 0),
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
    gsSPVertex(grottos2_room_8Vtx_0014B8, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_002AA0[] = {
    gsSPVertex(&grottos2_room_8Vtx_0028A0[24], 8, 0),
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
    gsSPVertex(grottos2_room_8Vtx_0028A0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
};

Gfx grottos2_room_8DL_002CA0[] = {
    gsSPVertex(&grottos2_room_8Vtx_002BA0[8], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0xFF, 255, 255, 255, 150),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_XLU_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(grottos2_room_8Tex_002D60, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(grottos2_room_8Vtx_002BA0, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
};
