#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2.h"
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HAKAdanCH_room_2[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/HAKAdanCH_room_2.inc.c"
};

s16 HAKAdanCH_room_2_03000040_ObjectList[LENGTH_HAKAdanCH_room_2_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdanCH_room_2_0300004C_ActorEntryList[LENGTH_HAKAdanCH_room_2_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable HAKAdanCH_room_2_03000140_RoomShapeCullable = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries[LENGTH_HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries.inc.c"
};

Vtx HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000710_DL_03000180_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000710_DL_03000180_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000710_DL[56] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000710_DL.inc.c"
};

Vtx HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL_030008D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL_030008D0_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL[25] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL.inc.c"
};

Vtx HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_03000AD8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_03000AD8_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL[306] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL.inc.c"
};

u64 HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL_00002988_Tex[TEX_LEN(u64, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL_00002988_Tex_WIDTH, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL_00002988_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03000A10_DL_00002988_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002B88_Tex[TEX_LEN(u64, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002B88_Tex_WIDTH, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002B88_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002B88_Tex.i4.inc.c"
};

u64 HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002D88_Tex[TEX_LEN(u64, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002D88_Tex_WIDTH, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002D88_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002D88_Tex.i4.inc.c"
};

u64 HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002F88_Tex[TEX_LEN(u64, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002F88_Tex_WIDTH, HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002F88_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_2_03000140_RoomShapeCullable_0300014C_CullableEntries_03001FD8_DL_00002F88_Tex.i4.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/mq/headers/room2.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
