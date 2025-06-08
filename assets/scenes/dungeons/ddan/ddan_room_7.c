#include "assets/scenes/dungeons/ddan/ddan_room_7.h"
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

SceneCmd ddan_room_7[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7.inc.c"
};

s16 ddan_room_7_03000040_ObjectList[LENGTH_ddan_room_7_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_7_0300004C_ActorEntryList[LENGTH_ddan_room_7_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable ddan_room_7_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

Vtx ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_03000100_Vtx_fused_.inc.c"
};

Gfx ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL[841] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL.inc.c"
};

Vtx ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004508_DL_03004088_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004508_DL_03004088_Vtx_fused_.inc.c"
};

Gfx ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004508_DL[53] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004508_DL.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000046C8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000046C8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000046C8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000046C8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004AC8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004AC8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004AC8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004AC8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004EC8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004EC8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004EC8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00004EC8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000056C8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000056C8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000056C8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000056C8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00005EC8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00005EC8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00005EC8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00005EC8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000066C8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000066C8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000066C8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_000066C8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00006EC8_CITex[TEX_LEN(u64, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00006EC8_CITex_WIDTH, ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00006EC8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_7_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002640_DL_00006EC8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room7.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
