#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11.h"
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

SceneCmd MIZUsin_room_11[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11.inc.c"
};

s16 MIZUsin_room_11_03000040_ObjectList[LENGTH_MIZUsin_room_11_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_11_03000058_ActorEntryList[LENGTH_MIZUsin_room_11_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000058_ActorEntryList.inc.c"
};

u8 MIZUsin_room_11_zeros_000088[8] = { 0 };

RoomShapeCullable MIZUsin_room_11_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

u8 MIZUsin_room_11_unaccounted_0000AC[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_unaccounted_0000AC.bin.inc.c"
};

Vtx MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL[402] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL.inc.c"
};

u8 MIZUsin_room_11_unaccounted_0021A0[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_unaccounted_0021A0.bin.inc.c"
};

u64 MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000021B0_Tex[TEX_LEN(u64, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000021B0_Tex_WIDTH, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000021B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000021B0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000029B0_Tex[TEX_LEN(u64, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000029B0_Tex_WIDTH, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000029B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000029B0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000031B0_Tex[TEX_LEN(u64, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000031B0_Tex_WIDTH, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000031B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000031B0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000039B0_Tex[TEX_LEN(u64, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000039B0_Tex_WIDTH, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000039B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000039B0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000041B0_Tex[TEX_LEN(u64, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000041B0_Tex_WIDTH, MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000041B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_11_03000090_RoomShapeCullable_0300009C_CullableEntries_03001510_DL_000041B0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room11_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room11_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
