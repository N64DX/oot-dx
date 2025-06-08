#include "assets/scenes/dungeons/bdan/bdan_room_13.h"
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

SceneCmd bdan_room_13[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13.inc.c"
};

SceneCmd* bdan_room_13_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_03000048_AltHeaders.inc.c"
};

s16 bdan_room_13_03000058_ObjectList[LENGTH_bdan_room_13_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_13_0300006C_ActorEntryList[LENGTH_bdan_room_13_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_0300006C_ActorEntryList.inc.c"
};

RoomShapeNormal bdan_room_13_030000F0_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries[LENGTH_bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries.inc.c"
};

SceneCmd bdan_room_13_03000048_AltHeaders_03000110_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_03000048_AltHeaders_03000110_Cmds.inc.c"
};

s16 bdan_room_13_03000048_AltHeaders_03000110_Cmds_03000148_ObjectList[LENGTH_bdan_room_13_03000048_AltHeaders_03000110_Cmds_03000148_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_03000048_AltHeaders_03000110_Cmds_03000148_ObjectList.inc.c"
};

Vtx bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_03000150_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_03000150_Vtx_fused_.inc.c"
};

Gfx bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL[219] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL.inc.c"
};

Gfx bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL.inc.c"
};

u64 bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001588_CITex[TEX_LEN(u64, bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001588_CITex_WIDTH, bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001588_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001588_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001D88_CITex[TEX_LEN(u64, bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001D88_CITex_WIDTH, bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001D88_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00001D88_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00002188_CITex[TEX_LEN(u64, bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00002188_CITex_WIDTH, bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00002188_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03001578_DL_03000EA0_DL_00002188_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

Vtx bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002B38_DL_03002A50_DL_03002990_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002B38_DL_03002A50_DL_03002990_Vtx_fused_.inc.c"
};

Gfx bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002B38_DL_03002A50_DL[29] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002B38_DL_03002A50_DL.inc.c"
};

Gfx bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002B38_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_13_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002B38_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room13.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
