#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8.h"
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ice_doukutu_room_8[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8.inc.c"
};

SceneCmd* ice_doukutu_room_8_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000048_AltHeaders.inc.c"
};

s16 ice_doukutu_room_8_03000058_ObjectList[LENGTH_ice_doukutu_room_8_03000058_ObjectList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000058_ObjectList.inc.c"
};

ActorEntry ice_doukutu_room_8_03000060_ActorEntryList[LENGTH_ice_doukutu_room_8_03000060_ActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000060_ActorEntryList.inc.c"
};

RoomShapeNormal ice_doukutu_room_8_03000110_RoomShapeNormal = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries[LENGTH_ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries.inc.c"
};

u8 ice_doukutu_room_8_unaccounted_000124[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_unaccounted_000124.bin.inc.c"
};

SceneCmd ice_doukutu_room_8_03000048_AltHeaders_03000130_Cmds[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000048_AltHeaders_03000130_Cmds.inc.c"
};

s16 ice_doukutu_room_8_03000048_AltHeaders_03000130_Cmds_03000168_ObjectList[LENGTH_ice_doukutu_room_8_03000048_AltHeaders_03000130_Cmds_03000168_ObjectList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000048_AltHeaders_03000130_Cmds_03000168_ObjectList.inc.c"
};

Vtx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_030004B0_DL_03000170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_030004B0_DL_03000170_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_030004B0_DL[48] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_030004B0_DL.inc.c"
};

Vtx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001360_DL_03000630_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001360_DL_03000630_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001360_DL[108] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001360_DL.inc.c"
};

Vtx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001840_DL_030016C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001840_DL_030016C0_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001840_DL[29] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL_03001840_DL.inc.c"
};

Gfx ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL[4] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_8_03000110_RoomShapeNormal_0300011C_DListsEntries_03001928_DL.inc.c"
};

u8 ice_doukutu_room_8_zeros_001948[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/objects/room8_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/actors/room8_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room8.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
