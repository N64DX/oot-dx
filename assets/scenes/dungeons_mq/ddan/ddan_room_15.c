#include "assets/scenes/dungeons/ddan/ddan_room_15.h"
#include "assets/scenes/dungeons/ddan/ddan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ddan_room_15[] = {
#include "assets/scenes/dungeons_mq/ddan/ddan_room_15.inc.c"
};

s16 ddan_room_15_03000040_ObjectList[LENGTH_ddan_room_15_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_15_0300004C_ActorEntryList[LENGTH_ddan_room_15_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable ddan_room_15_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

Vtx ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL[179] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL.inc.c"
};

u64 ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00000C48_CITex[TEX_LEN(u64, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00000C48_CITex_WIDTH, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00000C48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00000C48_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001448_CITex[TEX_LEN(u64, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001448_CITex_WIDTH, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001448_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001448_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001C48_CITex[TEX_LEN(u64, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001C48_CITex_WIDTH, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001C48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00001C48_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00002448_CITex[TEX_LEN(u64, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00002448_CITex_WIDTH, ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00002448_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_15_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006A0_DL_00002448_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/ddan/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/ddan/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/ddan/mq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
