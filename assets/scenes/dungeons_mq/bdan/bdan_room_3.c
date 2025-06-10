#include "assets/scenes/dungeons/bdan/bdan_room_3.h"
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

SceneCmd bdan_room_3[] = {
#include "assets/scenes/dungeons_mq/bdan/bdan_room_3.inc.c"
};

SceneCmd* bdan_room_3_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_03000048_AltHeaders.inc.c"
};

s16 bdan_room_3_03000058_ObjectList[LENGTH_bdan_room_3_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_3_0300006C_ActorEntryList[LENGTH_bdan_room_3_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_0300006C_ActorEntryList.inc.c"
};

RoomShapeNormal bdan_room_3_030000F0_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries[LENGTH_bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries.inc.c"
};

SceneCmd bdan_room_3_03000048_AltHeaders_03000110_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_03000048_AltHeaders_03000110_Cmds.inc.c"
};

s16 bdan_room_3_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList[LENGTH_bdan_room_3_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList.inc.c"
};

ActorEntry bdan_room_3_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList[LENGTH_bdan_room_3_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList.inc.c"
};

Vtx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL_030001A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL_030001A0_Vtx_fused_.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL[194] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL.inc.c"
};

Vtx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03002300_DL_03001700_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03002300_DL_03001700_Vtx_fused_.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03002300_DL[146] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03002300_DL.inc.c"
};

Vtx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_03002790_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_03002790_Vtx_fused_.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL[256] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL.inc.c"
};

Vtx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL_03003CE0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL_03003CE0_Vtx_fused_.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL[89] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL.inc.c"
};

Vtx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL_03004518_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL_03004518_Vtx_fused_.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL[30] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL[6] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL.inc.c"
};

u64 bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL_00004788_Tex[TEX_LEN(u64, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL_00004788_Tex_WIDTH, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL_00004788_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004668_DL_00004788_Tex.rgba16.inc.c"
};

u64 bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL_00005788_CITex[TEX_LEN(u64, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL_00005788_CITex_WIDTH, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL_00005788_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030010F0_DL_00005788_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00005F88_CITex[TEX_LEN(u64, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00005F88_CITex_WIDTH, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00005F88_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00005F88_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00006388_CITex[TEX_LEN(u64, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00006388_CITex_WIDTH, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00006388_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_030034E0_DL_00006388_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

u64 bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL_00006B88_CITex[TEX_LEN(u64, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL_00006B88_CITex_WIDTH, bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL_00006B88_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004758_DL_03004250_DL_00006B88_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03002CD8_DL_03002360_DL_00013BD8_TLUT.inc.c"
};

Vtx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03007150_DL_03007060_DL_03006F90_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03007150_DL_03007060_DL_03006F90_Vtx_fused_.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03007150_DL_03007060_DL[30] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03007150_DL_03007060_DL.inc.c"
};

Gfx bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03007150_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_3_030000F0_RoomShapeNormal_030000FC_DListsEntries_03007150_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
