#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22.h"
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

SceneCmd HIDAN_room_22[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22.inc.c"
};

s16 HIDAN_room_22_03000040_ObjectList[LENGTH_HIDAN_room_22_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_22_03000048_ActorEntryList[LENGTH_HIDAN_room_22_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_03000048_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_22_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

Vtx HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL[519] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00002AF8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00002AF8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00002AF8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00002AF8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000032F8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000032F8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000032F8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000032F8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00003AF8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00003AF8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00003AF8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00003AF8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000042F8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000042F8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000042F8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000042F8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00004AF8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00004AF8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00004AF8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00004AF8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000052F8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000052F8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000052F8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000052F8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00005AF8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00005AF8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00005AF8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_00005AF8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000062F8_Tex[TEX_LEN(u64, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000062F8_Tex_WIDTH, HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000062F8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_22_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AB0_DL_000062F8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room22_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room22_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room22.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
