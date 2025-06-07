#include "assets/scenes/dungeons/bdan/bdan_room_0.h"
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

SceneCmd bdan_room_0[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0.inc.c"
};

SceneCmd* bdan_room_0_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_03000048_AltHeaders.inc.c"
};

s16 bdan_room_0_03000058_ObjectList[LENGTH_bdan_room_0_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_0_03000068_ActorEntryList[LENGTH_bdan_room_0_03000068_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_03000068_ActorEntryList.inc.c"
};

u8 bdan_room_0_zeros_0000B8[8] = { 0 };

RoomShapeNormal bdan_room_0_030000C0_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries[LENGTH_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries.inc.c"
};

u8 bdan_room_0_unaccounted_0000D4[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_unaccounted_0000D4.bin.inc.c"
};

SceneCmd bdan_room_0_03000048_AltHeaders_030000E0_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_03000048_AltHeaders_030000E0_Cmds.inc.c"
};

s16 bdan_room_0_03000048_AltHeaders_030000E0_Cmds_03000120_ObjectList[LENGTH_bdan_room_0_03000048_AltHeaders_030000E0_Cmds_03000120_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_03000048_AltHeaders_030000E0_Cmds_03000120_ObjectList.inc.c"
};

ActorEntry bdan_room_0_03000048_AltHeaders_030000E0_Cmds_03000128_ActorEntryList[LENGTH_bdan_room_0_03000048_AltHeaders_030000E0_Cmds_03000128_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_03000048_AltHeaders_030000E0_Cmds_03000128_ActorEntryList.inc.c"
};

u8 bdan_room_0_zeros_000178[8] = { 0 };

Vtx bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_03000180_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_03000180_Vtx_fused_.inc.c"
};

Gfx bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL[303] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL.inc.c"
};

Gfx bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL.inc.c"
};

u64 bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00002CE8_CITex[TEX_LEN(u64, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00002CE8_CITex_WIDTH, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00002CE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00002CE8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000030E8_CITex[TEX_LEN(u64, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000030E8_CITex_WIDTH, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000030E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000030E8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000038E8_CITex[TEX_LEN(u64, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000038E8_CITex_WIDTH, bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000038E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_000038E8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u8 bdan_room_0_zeros_003CE8[8] = { 0 };

Vtx bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_03003CF0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_03003CF0_Vtx_fused_.inc.c"
};

Gfx bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL[42] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL.inc.c"
};

Gfx bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
