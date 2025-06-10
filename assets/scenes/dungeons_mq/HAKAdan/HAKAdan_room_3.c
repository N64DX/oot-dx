#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3.h"
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HAKAdan_room_3[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/HAKAdan_room_3.inc.c"
};

s16 HAKAdan_room_3_03000040_ObjectList[LENGTH_HAKAdan_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_3_03000048_ActorEntryList[LENGTH_HAKAdan_room_3_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000048_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_3_03000060_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries[LENGTH_HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries.inc.c"
};

Vtx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_03000080_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_03000080_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL[64] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL.inc.c"
};

Vtx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_03000910_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_03000910_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL[80] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL.inc.c"
};

Vtx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03001170_DL_03000EF0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03001170_DL_03000EF0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03001170_DL[34] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03001170_DL.inc.c"
};

Vtx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_030013E0_DL_03001280_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_030013E0_DL_03001280_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_030013E0_DL[38] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_030013E0_DL.inc.c"
};

Gfx HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL[5] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL.inc.c"
};

u64 HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001538_Tex[TEX_LEN(u64, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001538_Tex_WIDTH, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001538_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001538_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001D38_Tex[TEX_LEN(u64, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001D38_Tex_WIDTH, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001D38_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000710_DL_00001D38_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002538_Tex[TEX_LEN(u64, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002538_Tex_WIDTH, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002538_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002538_Tex.i4.inc.c"
};

u64 HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002738_Tex[TEX_LEN(u64, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002738_Tex_WIDTH, HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002738_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_3_03000060_RoomShapeNormal_0300006C_DListsEntries_03001510_DL_03000C70_DL_00002738_Tex.i4.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
