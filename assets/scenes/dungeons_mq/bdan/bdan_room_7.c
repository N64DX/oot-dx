#include "assets/scenes/dungeons/bdan/bdan_room_7.h"
#include "assets/scenes/dungeons/bdan/bdan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd bdan_room_7[] = {
#include "assets/scenes/dungeons_mq/bdan/bdan_room_7.inc.c"
};

SceneCmd* bdan_room_7_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000048_AltHeaders.inc.c"
};

s16 bdan_room_7_03000058_ObjectList[LENGTH_bdan_room_7_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_7_0300006C_ActorEntryList[LENGTH_bdan_room_7_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_0300006C_ActorEntryList.inc.c"
};

RoomShapeNormal bdan_room_7_03000180_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries[LENGTH_bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries.inc.c"
};

SceneCmd bdan_room_7_03000048_AltHeaders_030001A0_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000048_AltHeaders_030001A0_Cmds.inc.c"
};

s16 bdan_room_7_03000048_AltHeaders_030001A0_Cmds_030001E0_ObjectList[LENGTH_bdan_room_7_03000048_AltHeaders_030001A0_Cmds_030001E0_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000048_AltHeaders_030001A0_Cmds_030001E0_ObjectList.inc.c"
};

ActorEntry bdan_room_7_03000048_AltHeaders_030001A0_Cmds_030001E8_ActorEntryList[LENGTH_bdan_room_7_03000048_AltHeaders_030001A0_Cmds_030001E8_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000048_AltHeaders_030001A0_Cmds_030001E8_ActorEntryList.inc.c"
};

Vtx bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL_03000260_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL_03000260_Vtx_fused_.inc.c"
};

Gfx bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL[125] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL.inc.c"
};

Vtx bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL_03001468_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL_03001468_Vtx_fused_.inc.c"
};

Gfx bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL[196] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL.inc.c"
};

Gfx bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL[3] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL.inc.c"
};

u64 bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL_00002D20_CITex[TEX_LEN(u64, bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL_00002D20_CITex_WIDTH, bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL_00002D20_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_03001080_DL_00002D20_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL_00003120_CITex[TEX_LEN(u64, bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL_00003120_CITex_WIDTH, bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL_00003120_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_7_03000180_RoomShapeNormal_0300018C_DListsEntries_03002D08_DL_030026E8_DL_00003120_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/headers/room7.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
