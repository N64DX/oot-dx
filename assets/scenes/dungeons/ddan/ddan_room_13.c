#include "assets/scenes/dungeons/ddan/ddan_room_13.h"
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

SceneCmd ddan_room_13[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13.inc.c"
};

s16 ddan_room_13_03000040_ObjectList[LENGTH_ddan_room_13_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_13_03000050_ActorEntryList[LENGTH_ddan_room_13_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable ddan_room_13_03000060_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries[LENGTH_ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries.inc.c"
};

u8 ddan_room_13_unaccounted_00007C[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_unaccounted_00007C.bin.inc.c"
};

Vtx ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_03000080_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_03000080_Vtx_fused_.inc.c"
};

Gfx ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL[187] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL.inc.c"
};

u8 ddan_room_13_unaccounted_000C68[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_unaccounted_000C68.bin.inc.c"
};

u64 ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00000C78_CITex[TEX_LEN(u64, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00000C78_CITex_WIDTH, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00000C78_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00000C78_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001478_CITex[TEX_LEN(u64, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001478_CITex_WIDTH, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001478_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001478_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001C78_CITex[TEX_LEN(u64, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001C78_CITex_WIDTH, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001C78_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00001C78_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00002078_CITex[TEX_LEN(u64, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00002078_CITex_WIDTH, ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00002078_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_13_03000060_RoomShapeCullable_0300006C_CullableEntries_03000690_DL_00002078_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u8 ddan_room_13_zeros_002478[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room13.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
