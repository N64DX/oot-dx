#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20.h"
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

SceneCmd HIDAN_room_20[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_20.inc.c"
};

s16 HIDAN_room_20_03000040_ObjectList[LENGTH_HIDAN_room_20_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_20_03000048_ActorEntryList[LENGTH_HIDAN_room_20_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_03000048_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_20_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

Vtx HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL[547] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00002D08_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00002D08_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00002D08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00002D08_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003508_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003508_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003508_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003508_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003D08_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003D08_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003D08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00003D08_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004508_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004508_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004508_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004508_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004D08_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004D08_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004D08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00004D08_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005508_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005508_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005508_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005508_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005D08_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005D08_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005D08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00005D08_Tex.rgba16.inc.c"
};

u64 HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00006508_Tex[TEX_LEN(u64, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00006508_Tex_WIDTH, HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00006508_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001BE0_DL_00006508_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room20_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room20_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room20.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
