#include "stone_tower_temple_inverted_scene.h"
#include "stone_tower_temple_inverted_room_9.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd stone_tower_temple_inverted_room_9[] = {
    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_inverted_room_9RoomShapeCullable_000090),
    //SCENE_CMD_OBJECT_LIST(22, stone_tower_temple_inverted_room_9ObjectList_000040),
    //SCENE_CMD_ACTOR_LIST(2, stone_tower_temple_inverted_room_9ActorEntry_00006C),
    SCENE_CMD_END(),
};

/*s16 stone_tower_temple_inverted_room_9ObjectList_000040[] = {
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
};*/

/*ActorEntry stone_tower_temple_inverted_room_9ActorEntry_00006C[] = {
    { ACTOR_EN_BOX, { 960, 20, -3420 }, { 0x8000, 0x5A, 0 }, 0x522D },
    { ACTOR_EN_BOX, { 945, 20, -3945 }, { 0x8000,    0, 0 }, 0x5239 },
};*/

RoomShapeCullable stone_tower_temple_inverted_room_9RoomShapeCullable_000090 = { 
    2, 1,
    stone_tower_temple_inverted_room_9RoomShapeCullableEntry_00009C,
    stone_tower_temple_inverted_room_9RoomShapeCullableEntry_00009C + ARRAY_COUNTU(stone_tower_temple_inverted_room_9RoomShapeCullableEntry_00009C)
};

RoomShapeCullableEntry stone_tower_temple_inverted_room_9RoomShapeCullableEntry_00009C[1] = {
    { {   1230,   -190,  -3285 },     46, stone_tower_temple_inverted_room_9DL_000160, NULL },
};

s32 stone_tower_temple_inverted_room_9_terminatorMaybe_0000AC = { 0x01000000 };

Vtx stone_tower_temple_inverted_room_9Vtx_0000B0[] = {
#include "assets/scenes/dungeons/stone_tower_temple_inverted/stone_tower_temple_inverted_room_9Vtx_0000B0.vtx.inc"
};

Gfx stone_tower_temple_inverted_room_9DL_000160[] = {
    gsSPVertex(&stone_tower_temple_inverted_room_9Vtx_0000B0[3], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_inverted_room_9Vtx_0000B0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};
