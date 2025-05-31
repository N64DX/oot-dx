#include "ultra64.h"
#include "z64.h"
#include "ddan_room_6.h"
#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"
#include "ddan_scene.h"
#include "ddan_room_0.h"
#include "ddan_room_1.h"
#include "ddan_room_2.h"
#include "ddan_room_3.h"
#include "ddan_room_4.h"
#include "ddan_room_5.h"
#include "ddan_room_7.h"
#include "ddan_room_8.h"
#include "ddan_room_9.h"
#include "ddan_room_10.h"
#include "ddan_room_11.h"
#include "ddan_room_12.h"
#include "ddan_room_13.h"
#include "ddan_room_14.h"
#include "ddan_room_15.h"
#include "ddan_room_16.h"

SceneCmd ddan_room_6Commands[] = {
    SCENE_CMD_QUEST_HEADER_LIST(ddan_room_6QuestHeaders),
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ddan_room_6RoomShapeCullable_000070),
    SCENE_CMD_OBJECT_LIST(3, ddan_room_6ObjectList_000040),
    SCENE_CMD_ACTOR_LIST(2, ddan_room_6ActorEntry_000048),
    SCENE_CMD_END(),
};

SceneCmd* ddan_room_6QuestHeaders[] = {
    ddan_mq_room_6Set,
};

s16 ddan_room_6ObjectList_000040[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_BWALL,
    OBJECT_SHOPNUTS,
};

ActorEntry ddan_room_6ActorEntry_000048[] = {
    { ACTOR_EN_SHOPNUTS, {   1638,    411,  -1953 }, {      0,      0,      0 }, 0x0000 },
    { ACTOR_EN_SHOPNUTS, {   2045,    411,  -1962 }, {      0,      0,      0 }, 0x0003 },
};

u8 ddan_room_6_possiblePadding_000068[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

RoomShapeCullable ddan_room_6RoomShapeCullable_000070 = { 
    2, 1,
    ddan_room_6RoomShapeCullableEntry_00007C,
    ddan_room_6RoomShapeCullableEntry_00007C + ARRAY_COUNTU(ddan_room_6RoomShapeCullableEntry_00007C)
};

RoomShapeCullableEntry ddan_room_6RoomShapeCullableEntry_00007C[1] = {
    { {   1840,    611,  -1740 },    406, ddan_room_6DL_000650, NULL },
};

s32 ddan_room_6_terminatorMaybe_00008C = { 0x01000000 };

SceneCmd ddan_mq_room_6Set[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(0x01, 0x00, false, false),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(255, 255, 0),
    SCENE_CMD_ROOM_SHAPE(&ddan_room_6RoomShapeCullable_000070),
    SCENE_CMD_OBJECT_LIST(6, ddan_mq_room_6ObjectList),
    SCENE_CMD_ACTOR_LIST(13, ddan_mq_room_6ActorEntry),
    SCENE_CMD_END(),
};

s16 ddan_mq_room_6ObjectList[] = {
    OBJECT_DDAN_OBJECTS,
    OBJECT_ST,
    OBJECT_GI_SOUL,
    OBJECT_GOL,
    OBJECT_KIBAKO2,
    OBJECT_BOX,
};

ActorEntry ddan_mq_room_6ActorEntry[] = {
    { ACTOR_EN_SW,       {   2061,    411,  -1775 }, {      0, 0X8000,      0 }, 0x8210 },
    { ACTOR_EN_GOMA,     {   1714,    771,  -1668 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,     {   1744,    771,  -1772 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,     {   1839,    771,  -1854 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,     {   1941,    771,  -1768 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_EN_GOMA,     {   1974,    771,  -1662 }, {      0,      0,      0 }, 0x0008 },
    { ACTOR_OBJ_KIBAKO2, {   1625,    411,  -1781 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   1625,    411,  -1721 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   1811,    411,  -1976 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   1871,    411,  -1976 }, {      0,      0,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   2055,    411,  -1774 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_OBJ_KIBAKO2, {   2055,    411,  -1714 }, {      0, 0X4000,      0 }, 0xFFFF },
    { ACTOR_EN_BOX,      {   1807,    411,  -1710 }, {      0, 0X8000,      0 }, 0x7522 },
};

Vtx ddan_room_6Vtx_000090[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6Vtx_000090.vtx.inc"
};

Gfx ddan_room_6DL_000650[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING),
    gsSPVertex(&ddan_room_6Vtx_000090[84], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ddan_room_6Tex_000BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gDCSceneTLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(ddan_room_6Vtx_000090, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_0013F8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[4], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_001FF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[12], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_000BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[22], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_0013F8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[28], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_000BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[38], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_001FF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[48], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(4, 3, 5, 0, 0, 6, 1, 0),
    gsSP2Triangles(7, 6, 0, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 5, 10, 0, 9, 4, 5, 0),
    gsSP2Triangles(9, 8, 7, 0, 9, 10, 8, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_0013F8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[59], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_000BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[64], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_001BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[69], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 2, 4, 0, 2, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_0013F8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[74], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_000BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTextureBlock(ddan_room_6Tex_0013F8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[78], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(ddan_room_6Tex_000BF8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTextureBlock(ddan_room_6Tex_0013F8, G_IM_FMT_CI, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ddan_room_6Vtx_000090[81], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u8 ddan_room_6_unaccounted_000BE8[] = {
    0xDE, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x50, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

u64 ddan_room_6Tex_000BF8[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6Tex_000BF8.ci8.inc.c"
};

u64 ddan_room_6Tex_0013F8[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6Tex_0013F8.ci8.inc.c"
};

u64 ddan_room_6Tex_001BF8[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6Tex_001BF8.ci8.inc.c"
};

u64 ddan_room_6Tex_001FF8[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6Tex_001FF8.ci8.inc.c"
};

