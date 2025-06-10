#include "assets/scenes/dungeons/bdan/bdan_room_15.h"
#include "assets/scenes/dungeons/bdan/bdan_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd bdan_room_15[] = {
#include "assets/scenes/dungeons_mq/bdan/bdan_room_15.inc.c"
};

SceneCmd* bdan_room_15_03000040_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000040_AltHeaders.inc.c"
};

s16 bdan_room_15_03000050_ObjectList[LENGTH_bdan_room_15_03000050_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000050_ObjectList.inc.c"
};

RoomShapeNormal bdan_room_15_03000060_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries[LENGTH_bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries.inc.c"
};

SceneCmd bdan_room_15_03000040_AltHeaders_03000080_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000040_AltHeaders_03000080_Cmds.inc.c"
};

s16 bdan_room_15_03000040_AltHeaders_03000080_Cmds_030000B8_ObjectList[LENGTH_bdan_room_15_03000040_AltHeaders_03000080_Cmds_030000B8_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000040_AltHeaders_03000080_Cmds_030000B8_ObjectList.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030006B0_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030006B0_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030006B0_DL[74] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030006B0_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030010A0_DL_03000900_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030010A0_DL_03000900_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030010A0_DL[83] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_030010A0_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001458_DL_03001338_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001458_DL_03001338_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001458_DL[34] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001458_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001678_DL_03001568_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001678_DL_03001568_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001678_DL[33] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001678_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001910_DL_03001780_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001910_DL_03001780_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001910_DL[40] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001910_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001B60_DL_03001A50_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001B60_DL_03001A50_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001B60_DL[33] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001B60_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001DF8_DL_03001C68_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001DF8_DL_03001C68_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001DF8_DL[40] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03001DF8_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002048_DL_03001F38_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002048_DL_03001F38_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002048_DL[33] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002048_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002330_DL_03002150_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002330_DL_03002150_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002330_DL[40] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002330_DL.inc.c"
};

Vtx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002580_DL_03002470_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002580_DL_03002470_Vtx_fused_.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002580_DL[33] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL_03002580_DL.inc.c"
};

Gfx bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL[11] = {
#include "assets/scenes/dungeons/bdan/bdan_room_15_03000060_RoomShapeNormal_0300006C_DListsEntries_03002688_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/objects/room15_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
