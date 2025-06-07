#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19.h"
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

SceneCmd MIZUsin_room_19[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19.inc.c"
};

s16 MIZUsin_room_19_03000040_ObjectList[LENGTH_MIZUsin_room_19_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_19_03000058_ActorEntryList[LENGTH_MIZUsin_room_19_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_03000058_ActorEntryList.inc.c"
};

u8 MIZUsin_room_19_zeros_0000A8[8] = { 0 };

RoomShapeCullable MIZUsin_room_19_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

u8 MIZUsin_room_19_unaccounted_0000CC[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_unaccounted_0000CC.bin.inc.c"
};

Vtx MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL[132] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL.inc.c"
};

u8 MIZUsin_room_19_unaccounted_001120[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_unaccounted_001120.bin.inc.c"
};

u64 MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001130_Tex[TEX_LEN(u64, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001130_Tex_WIDTH, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001130_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001130_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001930_Tex[TEX_LEN(u64, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001930_Tex_WIDTH, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001930_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00001930_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002130_Tex[TEX_LEN(u64, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002130_Tex_WIDTH, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002130_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002130_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002930_Tex[TEX_LEN(u64, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002930_Tex_WIDTH, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002930_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00002930_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00003130_Tex[TEX_LEN(u64, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00003130_Tex_WIDTH, MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00003130_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D00_DL_00003130_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room19_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room19_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room19.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
