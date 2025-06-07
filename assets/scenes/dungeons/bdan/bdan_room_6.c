#include "assets/scenes/dungeons/bdan/bdan_room_6.h"
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

SceneCmd bdan_room_6[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6.inc.c"
};

SceneCmd* bdan_room_6_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000048_AltHeaders.inc.c"
};

s16 bdan_room_6_03000058_ObjectList[LENGTH_bdan_room_6_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_6_0300006C_ActorEntryList[LENGTH_bdan_room_6_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_0300006C_ActorEntryList.inc.c"
};

u8 bdan_room_6_zeros_0000FC[4] = { 0 };

RoomShapeNormal bdan_room_6_03000100_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries[LENGTH_bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries.inc.c"
};

u8 bdan_room_6_unaccounted_000114[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_unaccounted_000114.bin.inc.c"
};

SceneCmd bdan_room_6_03000048_AltHeaders_03000120_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000048_AltHeaders_03000120_Cmds.inc.c"
};

s16 bdan_room_6_03000048_AltHeaders_03000120_Cmds_03000160_ObjectList[LENGTH_bdan_room_6_03000048_AltHeaders_03000120_Cmds_03000160_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000048_AltHeaders_03000120_Cmds_03000160_ObjectList.inc.c"
};

ActorEntry bdan_room_6_03000048_AltHeaders_03000120_Cmds_0300016C_ActorEntryList[LENGTH_bdan_room_6_03000048_AltHeaders_03000120_Cmds_0300016C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000048_AltHeaders_03000120_Cmds_0300016C_ActorEntryList.inc.c"
};

u8 bdan_room_6_zeros_0001AC[4] = { 0 };

Vtx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_030001B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_030001B0_Vtx_fused_.inc.c"
};

Gfx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL[185] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL.inc.c"
};

Vtx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03001FC8_DL_030012A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03001FC8_DL_030012A8_Vtx_fused_.inc.c"
};

Gfx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03001FC8_DL[205] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03001FC8_DL.inc.c"
};

Vtx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03002AB0_DL_03002630_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03002AB0_DL_03002630_Vtx_fused_.inc.c"
};

Gfx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03002AB0_DL[179] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03002AB0_DL.inc.c"
};

Gfx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL[4] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL.inc.c"
};

u64 bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003068_CITex[TEX_LEN(u64, bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003068_CITex_WIDTH, bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003068_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003068_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003868_CITex[TEX_LEN(u64, bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003868_CITex_WIDTH, bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003868_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03003048_DL_03000CE0_DL_00003868_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u8 bdan_room_6_zeros_004068[8] = { 0 };

Vtx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004230_DL_03004140_DL_03004070_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004230_DL_03004140_DL_03004070_Vtx_fused_.inc.c"
};

Gfx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004230_DL_03004140_DL[30] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004230_DL_03004140_DL.inc.c"
};

Gfx bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004230_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004230_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
