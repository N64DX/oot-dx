#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16.h"
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

SceneCmd MIZUsin_room_16[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16.inc.c"
};

s16 MIZUsin_room_16_03000040_ObjectList[LENGTH_MIZUsin_room_16_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_16_03000058_ActorEntryList[LENGTH_MIZUsin_room_16_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000058_ActorEntryList.inc.c"
};

u8 MIZUsin_room_16_zeros_000088[8] = { 0 };

RoomShapeCullable MIZUsin_room_16_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

u8 MIZUsin_room_16_unaccounted_0000AC[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_unaccounted_0000AC.bin.inc.c"
};

Vtx MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL[186] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL.inc.c"
};

u8 MIZUsin_room_16_unaccounted_0012C0[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_unaccounted_0012C0.bin.inc.c"
};

u64 MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000012D0_Tex[TEX_LEN(u64, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000012D0_Tex_WIDTH, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000012D0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000012D0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00001AD0_Tex[TEX_LEN(u64, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00001AD0_Tex_WIDTH, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00001AD0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00001AD0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000022D0_Tex[TEX_LEN(u64, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000022D0_Tex_WIDTH, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000022D0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000022D0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00002AD0_Tex[TEX_LEN(u64, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00002AD0_Tex_WIDTH, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00002AD0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_00002AD0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000032D0_Tex[TEX_LEN(u64, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000032D0_Tex_WIDTH, MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000032D0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_16_03000090_RoomShapeCullable_0300009C_CullableEntries_03000CF0_DL_000032D0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room16_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room16_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room16.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
