#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6.h"
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

SceneCmd ice_doukutu_room_6[] = {
#include "assets/scenes/dungeons_mq/ice_doukutu/ice_doukutu_room_6.inc.c"
};

SceneCmd* ice_doukutu_room_6_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_03000048_AltHeaders.inc.c"
};

s16 ice_doukutu_room_6_03000058_ObjectList[LENGTH_ice_doukutu_room_6_03000058_ObjectList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_03000058_ObjectList.inc.c"
};

ActorEntry ice_doukutu_room_6_03000068_ActorEntryList[LENGTH_ice_doukutu_room_6_03000068_ActorEntryList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_03000068_ActorEntryList.inc.c"
};

RoomShapeNormal ice_doukutu_room_6_030001A0_RoomShapeNormal = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries[LENGTH_ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries.inc.c"
};

SceneCmd ice_doukutu_room_6_03000048_AltHeaders_030001C0_Cmds[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_03000048_AltHeaders_030001C0_Cmds.inc.c"
};

s16 ice_doukutu_room_6_03000048_AltHeaders_030001C0_Cmds_030001F8_ObjectList[LENGTH_ice_doukutu_room_6_03000048_AltHeaders_030001C0_Cmds_030001F8_ObjectList] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_03000048_AltHeaders_030001C0_Cmds_030001F8_ObjectList.inc.c"
};

Vtx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000550_DL_03000200_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000550_DL_03000200_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000550_DL[50] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000550_DL.inc.c"
};

Vtx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000C10_DL_030006E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000C10_DL_030006E0_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000C10_DL[59] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03000C10_DL.inc.c"
};

Vtx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL_03000DE8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL_03000DE8_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL[49] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL.inc.c"
};

Vtx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001460_DL_030012D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001460_DL_030012D0_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001460_DL[33] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001460_DL.inc.c"
};

Vtx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL_03001568_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL_03001568_Vtx_fused_.inc.c"
};

Gfx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL[109] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL.inc.c"
};

Gfx ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL[6] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL.inc.c"
};

u64 ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL_00002A60_Tex[TEX_LEN(u64, ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL_00002A60_Tex_WIDTH, ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL_00002A60_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_030026C8_DL_00002A60_Tex.i8.inc.c"
};

u64 ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL_00003A60_Tex[TEX_LEN(u64, ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL_00003A60_Tex_WIDTH, ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL_00003A60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_6_030001A0_RoomShapeNormal_030001AC_DListsEntries_03002A30_DL_03001148_DL_00003A60_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/ice_doukutu/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/ice_doukutu/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/ice_doukutu/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
