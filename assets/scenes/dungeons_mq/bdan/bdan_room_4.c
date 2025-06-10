#include "assets/scenes/dungeons/bdan/bdan_room_4.h"
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

SceneCmd bdan_room_4[] = {
#include "assets/scenes/dungeons_mq/bdan/bdan_room_4.inc.c"
};

SceneCmd* bdan_room_4_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_03000048_AltHeaders.inc.c"
};

s16 bdan_room_4_03000058_ObjectList[LENGTH_bdan_room_4_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_4_03000068_ActorEntryList[LENGTH_bdan_room_4_03000068_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_03000068_ActorEntryList.inc.c"
};

RoomShapeNormal bdan_room_4_030000A0_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries[LENGTH_bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries.inc.c"
};

SceneCmd bdan_room_4_03000048_AltHeaders_030000C0_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_03000048_AltHeaders_030000C0_Cmds.inc.c"
};

s16 bdan_room_4_03000048_AltHeaders_030000C0_Cmds_03000100_ObjectList[LENGTH_bdan_room_4_03000048_AltHeaders_030000C0_Cmds_03000100_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_03000048_AltHeaders_030000C0_Cmds_03000100_ObjectList.inc.c"
};

ActorEntry bdan_room_4_03000048_AltHeaders_030000C0_Cmds_03000108_ActorEntryList[LENGTH_bdan_room_4_03000048_AltHeaders_030000C0_Cmds_03000108_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_03000048_AltHeaders_030000C0_Cmds_03000108_ActorEntryList.inc.c"
};

Vtx bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_03000140_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_03000140_Vtx_fused_.inc.c"
};

Gfx bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL[432] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL.inc.c"
};

Gfx bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL.inc.c"
};

u64 bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002A80_CITex[TEX_LEN(u64, bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002A80_CITex_WIDTH, bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002A80_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002A80_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

u64 bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002E80_CITex[TEX_LEN(u64, bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002E80_CITex_WIDTH, bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002E80_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00002E80_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

u64 bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00003680_CITex[TEX_LEN(u64, bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00003680_CITex_WIDTH, bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00003680_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03002A70_DL_03001CF0_DL_00003680_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

Vtx bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03004040_DL_03003F50_DL_03003E80_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03004040_DL_03003F50_DL_03003E80_Vtx_fused_.inc.c"
};

Gfx bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03004040_DL_03003F50_DL[30] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03004040_DL_03003F50_DL.inc.c"
};

Gfx bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03004040_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_4_030000A0_RoomShapeNormal_030000AC_DListsEntries_03004040_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
