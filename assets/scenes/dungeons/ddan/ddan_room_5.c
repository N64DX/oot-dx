#include "assets/scenes/dungeons/ddan/ddan_room_5.h"
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

SceneCmd ddan_room_5[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5.inc.c"
};

s16 ddan_room_5_03000040_ObjectList[LENGTH_ddan_room_5_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_5_0300004C_ActorEntryList[LENGTH_ddan_room_5_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_0300004C_ActorEntryList.inc.c"
};

u8 ddan_room_5_zeros_0000FC[4] = { 0 };

RoomShapeCullable ddan_room_5_03000100_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries[LENGTH_ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries.inc.c"
};

u8 ddan_room_5_unaccounted_00011C[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_unaccounted_00011C.bin.inc.c"
};

Vtx ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_03000120_Vtx_fused_.inc.c"
};

Gfx ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL[679] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL.inc.c"
};

u8 ddan_room_5_unaccounted_0032C8[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_unaccounted_0032C8.bin.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000032D8_CITex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000032D8_CITex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000032D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000032D8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00003AD8_CITex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00003AD8_CITex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00003AD8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00003AD8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000042D8_CITex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000042D8_CITex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000042D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000042D8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000046D8_CITex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000046D8_CITex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000046D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000046D8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004AD8_CITex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004AD8_CITex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004AD8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004AD8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004ED8_Tex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004ED8_Tex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004ED8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_00004ED8_Tex.rgba16.inc.c"
};

u64 ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000056D8_CITex[TEX_LEN(u64, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000056D8_CITex_WIDTH, ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000056D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_5_03000100_RoomShapeCullable_0300010C_CullableEntries_03001D90_DL_000056D8_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u8 ddan_room_5_zeros_005ED8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
