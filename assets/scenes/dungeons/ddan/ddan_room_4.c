#include "assets/scenes/dungeons/ddan/ddan_room_4.h"
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

SceneCmd ddan_room_4[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4.inc.c"
};

s16 ddan_room_4_03000040_ObjectList[LENGTH_ddan_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_4_03000058_ActorEntryList[LENGTH_ddan_room_4_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000058_ActorEntryList.inc.c"
};

u8 ddan_room_4_zeros_000138[8] = { 0 };

RoomShapeCullable ddan_room_4_03000140_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries[LENGTH_ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries.inc.c"
};

u8 ddan_room_4_unaccounted_00016C[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_unaccounted_00016C.bin.inc.c"
};

Vtx ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_03000170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_03000170_Vtx_fused_.inc.c"
};

Gfx ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL[1444] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL.inc.c"
};

Vtx ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL_03005E70_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL_03005E70_Vtx_fused_.inc.c"
};

Gfx ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL[79] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL.inc.c"
};

u8 ddan_room_4_unaccounted_006A28[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_unaccounted_006A28.bin.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006A40_TLUT[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006A40_TLUT.tlut.rgba16.inc.c"
};

u8 ddan_room_4_unaccounted_006C40[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_unaccounted_006C40.bin.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006C48_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006C48_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006C48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006C48_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007048_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007048_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007048_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007048_CITex.ci8.tlut_ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006A40_TLUT.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007448_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007448_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007448_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007448_CITex.ci8.tlut_ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006A40_TLUT.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007C48_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007C48_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007C48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00007C48_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL_00008448_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL_00008448_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL_00008448_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_030067B0_DL_00008448_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00008C48_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00008C48_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00008C48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00008C48_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00009048_CITex[TEX_LEN(u64, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00009048_CITex_WIDTH, ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00009048_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00009048_CITex.ci8.tlut_ddan_room_4_03000140_RoomShapeCullable_0300014C_CullableEntries_03003150_DL_00006A40_TLUT.inc.c"
};

u8 ddan_room_4_zeros_009848[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
