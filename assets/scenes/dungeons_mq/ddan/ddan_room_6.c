#include "assets/scenes/dungeons/ddan/ddan_room_6.h"
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

SceneCmd ddan_room_6[] = {
#include "assets/scenes/dungeons_mq/ddan/ddan_room_6.inc.c"
};

s16 ddan_room_6_03000040_ObjectList[LENGTH_ddan_room_6_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_6_03000048_ActorEntryList[LENGTH_ddan_room_6_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000048_ActorEntryList.inc.c"
};

RoomShapeCullable ddan_room_6_03000070_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries[LENGTH_ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries.inc.c"
};

Vtx ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_03000090_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_03000090_Vtx_fused_.inc.c"
};

Gfx ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL[179] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL.inc.c"
};

u64 ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00000BF8_CITex[TEX_LEN(u64, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00000BF8_CITex_WIDTH, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00000BF8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00000BF8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_000013F8_CITex[TEX_LEN(u64, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_000013F8_CITex_WIDTH, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_000013F8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_000013F8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001BF8_CITex[TEX_LEN(u64, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001BF8_CITex_WIDTH, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001BF8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001BF8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001FF8_CITex[TEX_LEN(u64, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001FF8_CITex_WIDTH, ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001FF8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_6_03000070_RoomShapeCullable_0300007C_CullableEntries_03000650_DL_00001FF8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/ddan/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/ddan/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/ddan/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
