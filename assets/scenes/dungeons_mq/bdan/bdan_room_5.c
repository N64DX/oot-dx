#include "assets/scenes/dungeons/bdan/bdan_room_5.h"
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

SceneCmd bdan_room_5[] = {
#include "assets/scenes/dungeons_mq/bdan/bdan_room_5.inc.c"
};

SceneCmd* bdan_room_5_03000048_AltHeaders[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_03000048_AltHeaders.inc.c"
};

s16 bdan_room_5_03000058_ObjectList[LENGTH_bdan_room_5_03000058_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_03000058_ObjectList.inc.c"
};

ActorEntry bdan_room_5_0300006C_ActorEntryList[LENGTH_bdan_room_5_0300006C_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_0300006C_ActorEntryList.inc.c"
};

RoomShapeNormal bdan_room_5_030000F0_RoomShapeNormal = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries[LENGTH_bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries.inc.c"
};

SceneCmd bdan_room_5_03000048_AltHeaders_03000110_Cmds[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_03000048_AltHeaders_03000110_Cmds.inc.c"
};

s16 bdan_room_5_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList[LENGTH_bdan_room_5_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_03000048_AltHeaders_03000110_Cmds_03000150_ObjectList.inc.c"
};

ActorEntry bdan_room_5_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList[LENGTH_bdan_room_5_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_03000048_AltHeaders_03000110_Cmds_03000158_ActorEntryList.inc.c"
};

Vtx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_030001A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_030001A0_Vtx_fused_.inc.c"
};

Gfx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL[379] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL.inc.c"
};

Gfx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL[2] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL.inc.c"
};

u64 bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002438_CITex[TEX_LEN(u64, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002438_CITex_WIDTH, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002438_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002438_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

u64 bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002838_CITex[TEX_LEN(u64, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002838_CITex_WIDTH, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002838_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00002838_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

u64 bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00003038_CITex[TEX_LEN(u64, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00003038_CITex_WIDTH, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00003038_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03002428_DL_03001850_DL_00003038_CITex.ci8.tlut_bdan_room_0_030000C0_RoomShapeNormal_030000CC_DListsEntries_03004060_DL_03003F10_DL_000139D0_TLUT.inc.c"
};

Vtx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL_03003840_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL_03003840_Vtx_fused_.inc.c"
};

Gfx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL[36] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL.inc.c"
};

Vtx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003CA0_DL_03003BD0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003CA0_DL_03003BD0_Vtx_fused_.inc.c"
};

Gfx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003CA0_DL[30] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003CA0_DL.inc.c"
};

Vtx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL_03003D90_Vtx_fused_[] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL_03003D90_Vtx_fused_.inc.c"
};

Gfx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL[30] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL.inc.c"
};

Gfx bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL[4] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL.inc.c"
};

u64 bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL_00004020_Tex[TEX_LEN(u64, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL_00004020_Tex_WIDTH, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL_00004020_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003F10_DL_00004020_Tex.rgba16.inc.c"
};

u64 bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL_00005020_Tex[TEX_LEN(u64, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL_00005020_Tex_WIDTH, bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL_00005020_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/bdan/bdan_room_5_030000F0_RoomShapeNormal_030000FC_DListsEntries_03004000_DL_03003AB0_DL_00005020_Tex.ia16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/bdan/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
