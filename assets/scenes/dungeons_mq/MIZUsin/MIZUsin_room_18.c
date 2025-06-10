#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18.h"
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

SceneCmd MIZUsin_room_18[] = {
#include "assets/scenes/dungeons_mq/MIZUsin/MIZUsin_room_18.inc.c"
};

s16 MIZUsin_room_18_03000040_ObjectList[LENGTH_MIZUsin_room_18_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_18_03000058_ActorEntryList[LENGTH_MIZUsin_room_18_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable MIZUsin_room_18_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL_03000130_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL_03000130_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL[32] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000670_DL_03000300_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000670_DL_03000300_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000670_DL[47] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000670_DL.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL_030007E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL_030007E8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL[32] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000AF8_DL_030009B8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000AF8_DL_030009B8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000AF8_DL[33] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000AF8_DL.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL_03000C00_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL_03000C00_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL[36] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL_03000EE0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL_03000EE0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL[38] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL.inc.c"
};

Vtx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL_03001290_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL_03001290_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL[47] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL.inc.c"
};

u64 MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL_000018B8_Tex[TEX_LEN(u64, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL_000018B8_Tex_WIDTH, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL_000018B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000200_DL_000018B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL_000020B8_Tex[TEX_LEN(u64, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL_000020B8_Tex_WIDTH, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL_000020B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_030008B8_DL_000020B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL_000028B8_Tex[TEX_LEN(u64, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL_000028B8_Tex_WIDTH, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL_000028B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000DC0_DL_000028B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL_000030B8_Tex[TEX_LEN(u64, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL_000030B8_Tex_WIDTH, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL_000030B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001160_DL_000030B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL_000038B8_Tex[TEX_LEN(u64, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL_000038B8_Tex_WIDTH, MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL_000038B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_18_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001700_DL_000038B8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/MIZUsin/mq/objects/room18_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/MIZUsin/mq/actors/room18_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/MIZUsin/mq/headers/room18.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
