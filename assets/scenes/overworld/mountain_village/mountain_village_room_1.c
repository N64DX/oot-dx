#include "mountain_village_scene.h"
#include "mountain_village_room_1.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd mountain_village_room_1[] = {
    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false),
    SCENE_CMD_SKYBOX_DISABLES(false, false),
    SCENE_CMD_TIME_SETTINGS(255, 255, 10),
    SCENE_CMD_ROOM_SHAPE(&mountain_village_room_1RoomShapeCullable_000210),
    SCENE_CMD_OBJECT_LIST(16, mountain_village_room_1ObjectList_00004C),
    SCENE_CMD_ACTOR_LIST(32, mountain_village_room_1ActorEntry_000074),
    SCENE_CMD_END(),
};

s16 mountain_village_room_1ObjectList_00004C[] = {
    OBJECT_HORSE,
    OBJECT_ICEFLOE,
    OBJECT_SPOT18_OBJ,
    OBJECT_SYOKUDAI,
    OBJECT_FLOWERPOT,
    OBJECT_FR,
    OBJECT_MKK,
    OBJECT_CROW,
    OBJECT_BEE,
    OBJECT_KANBAN,
    OBJECT_GS,
    OBJECT_BOX,
    OBJECT_BOMBIWA,
    OBJECT_TSUBO,
    OBJECT_KA,
    OBJECT_D_HSBLOCK,
};

ActorEntry mountain_village_room_1ActorEntry_000074[] = {
    { ACTOR_EN_MKK,      { 3472,  952,  -667 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3535,  952,  -606 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3565,  952,  -504 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3460,  952,  -619 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3514,  952,  -476 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3624,  952,  -603 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3460,  952,  -571 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3627,  952,  -518 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3516,  952,  -534 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3620,  952,  -551 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3564,  952,  -671 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3667,  952,  -633 }, { 0,      0, 0 }, 0xFA00 },
    { ACTOR_EN_MKK,      { 3367,  952,  -528 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3400,  952,  -572 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3474,  952,  -552 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3433,  952,  -542 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3597,  952,  -621 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3722,  952,  -585 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3638,  952,  -563 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3528,  952,  -572 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3733,  952,  -659 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_EN_MKK,      { 3671,  952,  -624 }, { 0,      0, 0 }, 0xFA01 },
    { ACTOR_DOOR_ANA,    { 2406, 1168, -1197 }, { 0,      0, 0 }, 0x0041 }, // Chest: 01 (Generic Grotto: Gold Rupee)
    { ACTOR_EN_GS,       { 3685,  837, -1101 }, { 0, 0x47D0, 0 }, 0xFF22 },
    { ACTOR_OBJ_HSBLOCK, { 2230,  141,  -170 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 2700,  291,  -170 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 2950,  411,  -170 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 3180,  531,  -170 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 3550,  777, -1120 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 2400, 1108,  -990 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 1970, 1228,  -990 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
    { ACTOR_OBJ_HSBLOCK, { 1550, 1348,  -990 }, { 0,      0, 0 }, 0x1F01 }, // Unlocks on switch: 1F
};

RoomShapeCullable mountain_village_room_1RoomShapeCullable_000210 = { 
    2, 2,
    mountain_village_room_1RoomShapeCullableEntry_00021C,
    mountain_village_room_1RoomShapeCullableEntry_00021C +
    ARRAY_COUNTU(mountain_village_room_1RoomShapeCullableEntry_00021C)
};

RoomShapeCullableEntry mountain_village_room_1RoomShapeCullableEntry_00021C[2] = {
    { {   2424,    829,   -690 },   1610, mountain_village_room_1DL_000C68, NULL },
    { {   2424,    708,   -690 },   1592, mountain_village_room_1DL_001728, NULL },
};

s32 mountain_village_room_1_terminatorMaybe_00023C = { 0x01000000 };

Vtx mountain_village_room_1Vtx_0002C8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_1Vtx_0002C8.vtx.inc"
};

Vtx mountain_village_room_1Vtx_000ED8[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_1Vtx_000ED8.vtx.inc"
};

u64 mountain_village_room_1Tex_001A30[] = {
#include "assets/scenes/overworld/mountain_village/mountain_village_room_1Tex_001A30.ci8.inc.c"
};

Gfx mountain_village_room_1DL_000C68[] = {
    gsSPVertex(&mountain_village_room_1Vtx_0002C8[146], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, COMBINED, 0, SHADE, 0, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetPrimColor(0, 0x7D, 255, 255, 255, 255),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, 15, 15),
    gsDPLoadMultiBlock_4b(mountain_village_scene04Tex_003000, 0x0100, 1, G_IM_FMT_I, 64, 64, 15, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_1Vtx_0002C8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 14, 17, 0, 20, 17, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(22, 26, 25, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 30, 28, 0, 27, 31, 30, 0),
    gsSPVertex(&mountain_village_room_1Vtx_0002C8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 2, 1, 0, 8, 1, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 11, 0),
    gsSP2Triangles(6, 5, 16, 0, 6, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 0, 3, 0, 19, 3, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(23, 26, 25, 0, 23, 27, 26, 0),
    gsSP2Triangles(23, 15, 14, 0, 23, 14, 27, 0),
    gsSP2Triangles(17, 16, 28, 0, 17, 28, 29, 0),
    gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
    gsSPVertex(&mountain_village_room_1Vtx_0002C8[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 9, 8, 0, 19, 9, 18, 0),
    gsSP2Triangles(19, 18, 20, 0, 13, 12, 21, 0),
    gsSP2Triangles(13, 21, 22, 0, 23, 10, 9, 0),
    gsSP2Triangles(23, 9, 19, 0, 24, 5, 4, 0),
    gsSP2Triangles(24, 4, 25, 0, 4, 7, 26, 0),
    gsSP2Triangles(4, 26, 27, 0, 11, 10, 28, 0),
    gsSP2Triangles(10, 29, 28, 0, 30, 31, 26, 0),
    gsSP2Triangles(31, 27, 26, 0, 29, 10, 23, 0),
    gsSPVertex(&mountain_village_room_1Vtx_0002C8[96], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 4, 3, 0),
    gsSP2Triangles(7, 3, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 5, 21, 22, 0),
    gsSP2Triangles(5, 22, 6, 0, 23, 24, 17, 0),
    gsSP2Triangles(23, 17, 20, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&mountain_village_room_1Vtx_0002C8[128], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 5, 0),
    gsSP2Triangles(11, 5, 4, 0, 9, 8, 13, 0),
    gsSP2Triangles(9, 13, 14, 0, 15, 16, 1, 0),
    gsSP1Triangle(15, 1, 17, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_1DL_001728[] = {
    gsSPVertex(&mountain_village_room_1Vtx_000ED8[125], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_SHADING_SMOOTH),
    gsSPVertex(mountain_village_room_1Vtx_000ED8, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_sceneTex_006A60, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_1Vtx_000ED8[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&mountain_village_room_1Vtx_000ED8[63], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 9, 10, 5, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 10, 0),
    gsSP2Triangles(13, 3, 2, 0, 13, 2, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 22, 23, 24, 0),
    gsSP2Triangles(22, 25, 23, 0, 15, 20, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTLUT_pal256(mountain_village_sceneTLUT_006E60),
    gsDPLoadTextureBlock(mountain_village_room_1Tex_001A30, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_1Vtx_000ED8[89], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(mountain_village_scene04Tex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&mountain_village_room_1Vtx_000ED8[121], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

Gfx mountain_village_room_1DL_001A18[] = {
    gsSPDisplayList(mountain_village_room_1DL_000C68),
    gsSPDisplayList(mountain_village_room_1DL_001728),
    gsSPEndDisplayList(),
};
