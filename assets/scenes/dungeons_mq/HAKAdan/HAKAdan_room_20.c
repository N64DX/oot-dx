#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20.h"
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

SceneCmd HAKAdan_room_20[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/HAKAdan_room_20.inc.c"
};

s16 HAKAdan_room_20_03000040_ObjectList[LENGTH_HAKAdan_room_20_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_20_03000050_ActorEntryList[LENGTH_HAKAdan_room_20_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000050_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_20_03000100_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries[LENGTH_HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries.inc.c"
};

Vtx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_03000290_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_03000290_DL_03000120_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_03000290_DL[39] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_03000290_DL.inc.c"
};

Vtx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030007F8_DL_030003C8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030007F8_DL_030003C8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030007F8_DL[49] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030007F8_DL.inc.c"
};

Vtx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL_03000980_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL_03000980_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL[74] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL.inc.c"
};

Gfx HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL[4] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL.inc.c"
};

u64 HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL_00001620_Tex[TEX_LEN(u64, HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL_00001620_Tex_WIDTH, HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL_00001620_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_20_03000100_RoomShapeNormal_0300010C_DListsEntries_03001600_DL_030013B0_DL_00001620_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/objects/room20_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/actors/room20_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/headers/room20.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
