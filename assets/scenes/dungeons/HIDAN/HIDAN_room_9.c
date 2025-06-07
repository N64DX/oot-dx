#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9.h"
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

SceneCmd HIDAN_room_9[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9.inc.c"
};

s16 HIDAN_room_9_03000040_ObjectList[LENGTH_HIDAN_room_9_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_9_03000050_ActorEntryList[LENGTH_HIDAN_room_9_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_9_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

u8 HIDAN_room_9_unaccounted_0000AC[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_unaccounted_0000AC.bin.inc.c"
};

Vtx HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL[869] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL.inc.c"
};

u8 HIDAN_room_9_unaccounted_004758[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_unaccounted_004758.bin.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004768_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004768_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004768_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004768_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004F68_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004F68_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004F68_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00004F68_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005768_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005768_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005768_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005768_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005F68_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005F68_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005F68_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00005F68_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006768_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006768_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006768_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006768_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006F68_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006F68_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006F68_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00006F68_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007768_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007768_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007768_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007768_Tex.rgba16.inc.c"
};

u64 HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007F68_Tex[TEX_LEN(u64, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007F68_Tex_WIDTH, HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007F68_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_9_03000090_RoomShapeCullable_0300009C_CullableEntries_03002C30_DL_00007F68_Tex.rgba16.inc.c"
};

u8 HIDAN_room_9_zeros_008768[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room9_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room9_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room9.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
