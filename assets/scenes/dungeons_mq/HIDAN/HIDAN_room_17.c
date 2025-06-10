#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17.h"
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

SceneCmd HIDAN_room_17[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_17.inc.c"
};

s16 HIDAN_room_17_03000040_ObjectList[LENGTH_HIDAN_room_17_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_17_03000048_ActorEntryList[LENGTH_HIDAN_room_17_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_03000048_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_17_030000E0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries[LENGTH_HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries.inc.c"
};

Vtx HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_03000100_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL[985] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005138_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005138_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005138_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005138_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005938_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005938_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005938_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00005938_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006138_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006138_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006138_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006138_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006938_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006938_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006938_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00006938_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007138_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007138_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007138_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007138_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007938_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007938_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007938_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00007938_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008138_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008138_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008138_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008138_Tex.rgba16.inc.c"
};

u64 HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008938_Tex[TEX_LEN(u64, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008938_Tex_WIDTH, HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008938_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_17_030000E0_RoomShapeCullable_030000EC_CullableEntries_03003260_DL_00008938_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room17_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room17_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room17.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
