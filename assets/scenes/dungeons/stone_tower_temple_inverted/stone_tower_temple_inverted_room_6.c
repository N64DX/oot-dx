#include "stone_tower_temple_inverted_scene.h"
#include "stone_tower_temple_inverted_room_6.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd stone_tower_temple_inverted_room_6[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_inverted_room_6RoomShapeCullable_000080),
    //SCENE_CMD_OBJECT_LIST(23, stone_tower_temple_inverted_room_6ObjectList_000040),
    //SCENE_CMD_ACTOR_LIST(1, stone_tower_temple_inverted_room_6ActorEntry_000070),
    SCENE_CMD_END(),
};

/*s16 stone_tower_temple_inverted_room_6ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_WARP1,
    OBJECT_WATER_EFFECT,
    OBJECT_BDOOR,
    OBJECT_BOX,
    OBJECT_D_HSBLOCK,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_ICEFLOE,
    OBJECT_SPINYROLL,
    OBJECT_MKK,
    OBJECT_WDHAND,
    OBJECT_NY,
    OBJECT_PP,
    OBJECT_PO,
    OBJECT_RAT,
    OBJECT_BB,
    OBJECT_SLIME,
    OBJECT_FAMOS,
    OBJECT_EG,
    OBJECT_WIZ,
};*/

/*ActorEntry stone_tower_temple_inverted_room_6ActorEntry_000070[] = {
    { ACTOR_BG_IKANA_ROTARYROOM, { 225, 960, -1260 }, { 0, 0, 0 }, 0x00F3 },
};*/

RoomShapeCullable stone_tower_temple_inverted_room_6RoomShapeCullable_000080 = { 
    2, 1,
    stone_tower_temple_inverted_room_6RoomShapeCullableEntry_00008C,
    stone_tower_temple_inverted_room_6RoomShapeCullableEntry_00008C + ARRAY_COUNTU(stone_tower_temple_inverted_room_6RoomShapeCullableEntry_00008C)
};

RoomShapeCullableEntry stone_tower_temple_inverted_room_6RoomShapeCullableEntry_00008C[1] = {
    { {    638,   1090,  -1260 },     60, stone_tower_temple_inverted_room_6DL_000160, NULL },
};

s32 stone_tower_temple_inverted_room_6_terminatorMaybe_00009C = { 0x01000000 };

Vtx stone_tower_temple_inverted_room_6Vtx_0000A0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_6Vtx_0000A0.vtx.inc"
};

Gfx stone_tower_temple_inverted_room_6DL_000160[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_6Vtx_0000A0[4], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(stone_tower_temple_inverted_sceneTLUT_011E80),
    gsDPLoadTextureBlock(stone_tower_temple_inverted_sceneTex_011680, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_6Vtx_0000A0, 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};
