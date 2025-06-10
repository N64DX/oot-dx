#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1.h"
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

SceneCmd HAKAdan_room_1[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/HAKAdan_room_1.inc.c"
};

s16 HAKAdan_room_1_03000040_ObjectList[LENGTH_HAKAdan_room_1_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_1_0300004C_ActorEntryList[LENGTH_HAKAdan_room_1_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_0300004C_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_1_030000B0_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries[LENGTH_HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries.inc.c"
};

Vtx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_03000240_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_03000240_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_03000240_DL[39] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_03000240_DL.inc.c"
};

Vtx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030008C8_DL_03000378_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030008C8_DL_03000378_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030008C8_DL[55] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030008C8_DL.inc.c"
};

Vtx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL_03000A80_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL_03000A80_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL[55] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL.inc.c"
};

Gfx HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL[4] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL.inc.c"
};

u64 HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL_000012B8_Tex[TEX_LEN(u64, HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL_000012B8_Tex_WIDTH, HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL_000012B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_1_030000B0_RoomShapeNormal_030000BC_DListsEntries_03001298_DL_030010E0_DL_000012B8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
