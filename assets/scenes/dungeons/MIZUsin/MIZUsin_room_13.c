#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13.h"
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd MIZUsin_room_13[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13.inc.c"
};

s16 MIZUsin_room_13_03000040_ObjectList[LENGTH_MIZUsin_room_13_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_13_0300004C_ActorEntryList[LENGTH_MIZUsin_room_13_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_0300004C_ActorEntryList.inc.c"
};

u8 MIZUsin_room_13_zeros_00005C[4] = { 0 };

RoomShapeCullable MIZUsin_room_13_03000060_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_03000060_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries[LENGTH_MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries.inc.c"
};

u8 MIZUsin_room_13_unaccounted_00007C[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_unaccounted_00007C.bin.inc.c"
};

Vtx MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL_03000080_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL_03000080_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL[23] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL.inc.c"
};

u8 MIZUsin_room_13_unaccounted_0001E8[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_unaccounted_0001E8.bin.inc.c"
};

u64 MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL_000001F8_Tex[TEX_LEN(u64, MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL_000001F8_Tex_WIDTH, MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL_000001F8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000130_DL_000001F8_Tex.rgba16.inc.c"
};

u8 MIZUsin_room_13_zeros_0009F8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room13.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
