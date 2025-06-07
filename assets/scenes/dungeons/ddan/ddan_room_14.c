#include "assets/scenes/dungeons/ddan/ddan_room_14.h"
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

SceneCmd ddan_room_14[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14.inc.c"
};

s16 ddan_room_14_03000040_ObjectList[LENGTH_ddan_room_14_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_14_03000050_ActorEntryList[LENGTH_ddan_room_14_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable ddan_room_14_03000070_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries[LENGTH_ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries.inc.c"
};

u8 ddan_room_14_unaccounted_00008C[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_unaccounted_00008C.bin.inc.c"
};

Vtx ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_03000090_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_03000090_Vtx_fused_.inc.c"
};

Gfx ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL[195] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL.inc.c"
};

u8 ddan_room_14_unaccounted_000C78[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_unaccounted_000C78.bin.inc.c"
};

u64 ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00000C88_CITex[TEX_LEN(u64, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00000C88_CITex_WIDTH, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00000C88_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00000C88_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001488_CITex[TEX_LEN(u64, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001488_CITex_WIDTH, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001488_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001488_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001C88_CITex[TEX_LEN(u64, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001C88_CITex_WIDTH, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001C88_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00001C88_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00002088_CITex[TEX_LEN(u64, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00002088_CITex_WIDTH, ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00002088_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_14_03000070_RoomShapeCullable_0300007C_CullableEntries_03000660_DL_00002088_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u8 ddan_room_14_zeros_002488[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room14_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room14_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room14.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
