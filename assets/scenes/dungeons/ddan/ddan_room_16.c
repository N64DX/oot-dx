#include "assets/scenes/dungeons/ddan/ddan_room_16.h"
#include "assets/scenes/dungeons/ddan/ddan_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ddan_room_16[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16.inc.c"
};

s16 ddan_room_16_03000038_ObjectList[LENGTH_ddan_room_16_03000038_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000038_ObjectList.inc.c"
};

u8 ddan_room_16_zeros_00003C[4] = { 0 };

RoomShapeCullable ddan_room_16_03000040_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries[LENGTH_ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries.inc.c"
};

u8 ddan_room_16_unaccounted_00006C[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_unaccounted_00006C.bin.inc.c"
};

Vtx ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_03000070_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_03000070_Vtx_fused_.inc.c"
};

Gfx ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL[129] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL.inc.c"
};

Vtx ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_03000DC8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_03000DC8_Vtx_fused_.inc.c"
};

Gfx ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL[241] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL.inc.c"
};

u8 ddan_room_16_unaccounted_002130[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_unaccounted_002130.bin.inc.c"
};

u64 ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00002148_Tex[TEX_LEN(u64, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00002148_Tex_WIDTH, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00002148_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00002148_Tex.rgba16.inc.c"
};

u64 ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003148_CITex[TEX_LEN(u64, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003148_CITex_WIDTH, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003148_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003148_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003948_CITex[TEX_LEN(u64, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003948_CITex_WIDTH, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003948_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030019A8_DL_00003948_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004148_CITex[TEX_LEN(u64, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004148_CITex_WIDTH, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004148_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004148_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004948_CITex[TEX_LEN(u64, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004948_CITex_WIDTH, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004948_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00004948_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00005148_CITex[TEX_LEN(u64, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00005148_CITex_WIDTH, ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00005148_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_16_03000040_RoomShapeCullable_0300004C_CullableEntries_030009C0_DL_00005148_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u8 ddan_room_16_zeros_005548[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room16_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room16.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
