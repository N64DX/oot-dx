#include "stone_tower_temple_scene.h"
#include "stone_tower_temple_room_11.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"

SceneCmd stone_tower_temple_room_11[] = {
    SCENE_CMD_ECHO_SETTINGS(4),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true, true),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&stone_tower_temple_room_11RoomShapeCullable_000090),
    //SCENE_CMD_OBJECT_LIST(25, stone_tower_temple_room_11ObjectList_000040),
    //SCENE_CMD_ACTOR_LIST(1, stone_tower_temple_room_11ActorEntry_000074),
    SCENE_CMD_END(),
};

/*s16 stone_tower_temple_room_11ObjectList_000040[] = {
    OBJECT_IKANA_OBJ,
    OBJECT_WARP1,
    OBJECT_BOX,
    OBJECT_KIBAKO2,
    OBJECT_KUSA,
    OBJECT_MIR_RAY,
    OBJECT_LIGHTBLOCK,
    OBJECT_EFC_TW,
    OBJECT_LIGHTSWITCH,
    OBJECT_D_HSBLOCK,
    OBJECT_ICEFLOE,
    OBJECT_SPINYROLL,
    OBJECT_MKK,
    OBJECT_NY,
    OBJECT_WDHAND,
    OBJECT_PR,
    OBJECT_VM,
    OBJECT_GRASSHOPPER,
    OBJECT_PO,
    OBJECT_RAT,
    OBJECT_AM,
    OBJECT_GMO,
    OBJECT_CROW,
    OBJECT_EG,
    OBJECT_PP,
};*/

/*ActorEntry stone_tower_temple_room_11ActorEntry_000074[] = {
    { ACTOR_EN_BOX, { 3060, 300, -1260 }, { 0x8000, 0x5A, 0 }, 0x27BE },
};*/

RoomShapeCullable stone_tower_temple_room_11RoomShapeCullable_000090 = { 
    2, 1,
    stone_tower_temple_room_11RoomShapeCullableEntry_00009C,
    stone_tower_temple_room_11RoomShapeCullableEntry_00009C + ARRAY_COUNTU(stone_tower_temple_room_11RoomShapeCullableEntry_00009C)
};

RoomShapeCullableEntry stone_tower_temple_room_11RoomShapeCullableEntry_00009C[1] = {
    { {   2655,     60,  -1590 },    256, stone_tower_temple_room_11DL_000160, NULL },
};

s32 stone_tower_temple_room_11_terminatorMaybe_0000AC = { 0x01000000 };

Vtx stone_tower_temple_room_11Vtx_0000B0[] = {
#include "assets/scenes/dungeons/stone_tower_temple/stone_tower_temple_room_11Vtx_0000B0.vtx.inc"
};

Gfx stone_tower_temple_room_11DL_000160[] = {
    gsSPVertex(&stone_tower_temple_room_11Vtx_0000B0[3], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPLoadGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
    gsSPVertex(stone_tower_temple_room_11Vtx_0000B0, 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};
