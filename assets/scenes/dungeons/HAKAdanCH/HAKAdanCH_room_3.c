#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3.h"
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

SceneCmd HAKAdanCH_room_3[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3.inc.c"
};

s16 HAKAdanCH_room_3_03000040_ObjectList[LENGTH_HAKAdanCH_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdanCH_room_3_0300004C_ActorEntryList[LENGTH_HAKAdanCH_room_3_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_0300004C_ActorEntryList.inc.c"
};

u8 HAKAdanCH_room_3_zeros_0000BC[4] = { 0 };

RoomShapeCullable HAKAdanCH_room_3_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

u8 HAKAdanCH_room_3_unaccounted_0000FC[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_unaccounted_0000FC.bin.inc.c"
};

Vtx HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL_03000100_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL[91] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL.inc.c"
};

Vtx HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001138_DL_03000FB8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001138_DL_03000FB8_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001138_DL[35] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001138_DL.inc.c"
};

Vtx HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001340_DL_03001250_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001340_DL_03001250_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001340_DL[32] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001340_DL.inc.c"
};

u8 HAKAdanCH_room_3_unaccounted_001440[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_unaccounted_001440.bin.inc.c"
};

u64 HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL_00001460_Tex[TEX_LEN(u64, HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL_00001460_Tex_WIDTH, HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL_00001460_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000CE0_DL_00001460_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
