#include "assets/scenes/dungeons/bdan/bdan_room_14.h"
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

SceneCmd bdan_room_14[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14.inc.c"
};

SceneCmd* bdan_room_14_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000048_AltHeaders.inc.c"
};

s16 bdan_room_14_03000058_ObjectList[LENGTH_bdan_room_14_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_14_0300006C_ActorEntryList[LENGTH_bdan_room_14_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_0300006C_ActorEntryList.inc.c"
};

u8 bdan_room_14_zeros_00017C[4] = { 0 };

RoomShapeNormal bdan_room_14_03000180_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries[LENGTH_bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries.inc.c"
};

u8 bdan_room_14_unaccounted_000194[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_unaccounted_000194.bin.inc.c"
};

SceneCmd bdan_room_14_03000048_AltHeaders_030001A0_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000048_AltHeaders_030001A0_Cmds.inc.c"
};

s16 bdan_room_14_03000048_AltHeaders_030001A0_Cmds_030001D8_ObjectList[LENGTH_bdan_room_14_03000048_AltHeaders_030001A0_Cmds_030001D8_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000048_AltHeaders_030001A0_Cmds_030001D8_ObjectList.inc.c"
};

u8 bdan_room_14_zeros_0001DC[4] = { 0 };

Vtx bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_030001E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_030001E0_Vtx_fused_.inc.c"
};

Gfx bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL[561] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL.inc.c"
};

Gfx bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL.inc.c"
};

u64 bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000045D8_CITex[TEX_LEN(u64, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000045D8_CITex_WIDTH, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000045D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000045D8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_00004DD8_CITex[TEX_LEN(u64, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_00004DD8_CITex_WIDTH, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_00004DD8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_00004DD8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000055D8_CITex[TEX_LEN(u64, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000055D8_CITex_WIDTH, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000055D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000055D8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000059D8_CITex[TEX_LEN(u64, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000059D8_CITex_WIDTH, bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000059D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_14_03000180_RoomShapeNormal_0300018C_DListsEntries_030045C8_DL_03003440_DL_000059D8_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u8 bdan_room_14_zeros_0061D8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room14_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room14_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room14.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
