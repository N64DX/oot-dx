#include "assets/scenes/dungeons/bdan/bdan_room_1.h"
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

SceneCmd bdan_room_1[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1.inc.c"
};

SceneCmd* bdan_room_1_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_03000048_AltHeaders.inc.c"
};

s16 bdan_room_1_03000058_ObjectList[LENGTH_bdan_room_1_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_1_0300006C_ActorEntryList[LENGTH_bdan_room_1_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_0300006C_ActorEntryList.inc.c"
};

u8 bdan_room_1_zeros_0000EC[4] = { 0 };

RoomShapeNormal bdan_room_1_030000F0_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries[LENGTH_bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries.inc.c"
};

u8 bdan_room_1_unaccounted_000104[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_unaccounted_000104.bin.inc.c"
};

SceneCmd bdan_room_1_03000048_AltHeaders_03000110_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_03000048_AltHeaders_03000110_Cmds.inc.c"
};

s16 bdan_room_1_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList[LENGTH_bdan_room_1_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList.inc.c"
};

ActorEntry bdan_room_1_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList[LENGTH_bdan_room_1_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList.inc.c"
};

u8 bdan_room_1_zeros_0001A8[8] = { 0 };

Vtx bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_030001B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_030001B0_Vtx_fused_.inc.c"
};

Gfx bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL[814] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL.inc.c"
};

Gfx bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL.inc.c"
};

u64 bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00004CD0_CITex[TEX_LEN(u64, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00004CD0_CITex_WIDTH, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00004CD0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_00004CD0_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000054D0_CITex[TEX_LEN(u64, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000054D0_CITex_WIDTH, bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000054D0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004CC0_DL_03003350_DL_000054D0_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

Vtx bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03005E78_DL_03005D90_DL_03005CD0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03005E78_DL_03005D90_DL_03005CD0_Vtx_fused_.inc.c"
};

Gfx bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03005E78_DL_03005D90_DL[29] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03005E78_DL_03005D90_DL.inc.c"
};

Gfx bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03005E78_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_1_030000F0_RoomShapeNormal_030000FC_DListsEntries_03005E78_DL.inc.c"
};

u8 bdan_room_1_zeros_005E88[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
