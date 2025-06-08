#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25.h"
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HIDAN_room_25[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25.inc.c"
};

s16 HIDAN_room_25_03000040_ObjectList[LENGTH_HIDAN_room_25_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_25_03000054_ActorEntryList[LENGTH_HIDAN_room_25_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_25_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

Vtx HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL[519] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00002AD8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00002AD8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00002AD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00002AD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000032D8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000032D8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000032D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000032D8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00003AD8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00003AD8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00003AD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00003AD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000042D8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000042D8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000042D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000042D8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00004AD8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00004AD8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00004AD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00004AD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000052D8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000052D8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000052D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000052D8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00005AD8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00005AD8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00005AD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_00005AD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000062D8_Tex[TEX_LEN(u64, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000062D8_Tex_WIDTH, HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000062D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_25_03000090_RoomShapeCullable_0300009C_CullableEntries_03001A90_DL_000062D8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room25_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room25_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room25.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
