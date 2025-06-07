#include "assets/scenes/dungeons/ydan/ydan_room_8.h"
#include "assets/scenes/dungeons/ydan/ydan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ydan_room_8[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8.inc.c"
};

s16 ydan_room_8_03000040_ObjectList[LENGTH_ydan_room_8_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000040_ObjectList.inc.c"
};

ActorEntry ydan_room_8_03000058_ActorEntryList[LENGTH_ydan_room_8_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000058_ActorEntryList.inc.c"
};

u8 ydan_room_8_zeros_000078[8] = { 0 };

RoomShapeCullable ydan_room_8_03000080_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000080_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries[LENGTH_ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries.inc.c"
};

u8 ydan_room_8_unaccounted_00009C[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_unaccounted_00009C.bin.inc.c"
};

Vtx ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL_030000A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL_030000A0_Vtx_fused_.inc.c"
};

Gfx ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL[67] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL.inc.c"
};

u8 ydan_room_8_unaccounted_0008E8[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_unaccounted_0008E8.bin.inc.c"
};

u64 ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL_000008F8_CITex[TEX_LEN(u64, ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL_000008F8_CITex_WIDTH, ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL_000008F8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_8_03000080_RoomShapeCullable_0300008C_CullableEntries_030006D0_DL_000008F8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u8 ydan_room_8_zeros_000CF8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room8_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room8_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room8.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
