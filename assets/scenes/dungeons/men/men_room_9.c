#include "assets/scenes/dungeons/men/men_room_9.h"
#include "assets/scenes/dungeons/men/men_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd men_room_9[] = {
#include "assets/scenes/dungeons/men/men_room_9.inc.c"
};

s16 men_room_9_03000040_ObjectList[LENGTH_men_room_9_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_9_03000040_ObjectList.inc.c"
};

ActorEntry men_room_9_03000058_ActorEntryList[LENGTH_men_room_9_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_9_03000058_ActorEntryList.inc.c"
};

u8 men_room_9_zeros_0001D8[8] = { 0 };

RoomShapeCullable men_room_9_030001E0_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries[LENGTH_men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries.inc.c"
};

u8 men_room_9_unaccounted_00024C[] = {
#include "assets/scenes/dungeons/men/men_room_9_unaccounted_00024C.bin.inc.c"
};

Vtx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL_03000250_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL_03000250_Vtx_fused_.inc.c"
};

Gfx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL[88] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL.inc.c"
};

Vtx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000BB0_DL_03000A40_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000BB0_DL_03000A40_Vtx_fused_.inc.c"
};

Gfx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000BB0_DL[35] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000BB0_DL.inc.c"
};

Vtx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000DE8_DL_03000CC8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000DE8_DL_03000CC8_Vtx_fused_.inc.c"
};

Gfx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000DE8_DL[32] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000DE8_DL.inc.c"
};

Vtx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL_03000EE8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL_03000EE8_Vtx_fused_.inc.c"
};

Gfx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL[121] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL.inc.c"
};

Vtx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL_03001930_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL_03001930_Vtx_fused_.inc.c"
};

Gfx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL[24] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL.inc.c"
};

u8 men_room_9_unaccounted_001B00[] = {
#include "assets/scenes/dungeons/men/men_room_9_unaccounted_001B00.bin.inc.c"
};

u64 men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL_00001B30_Tex[TEX_LEN(u64, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL_00001B30_Tex_WIDTH, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL_00001B30_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001A40_DL_00001B30_Tex.rgba16.inc.c"
};

u64 men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL_00002330_CITex[TEX_LEN(u64, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL_00002330_CITex_WIDTH, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL_00002330_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03000780_DL_00002330_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL_00002730_CITex[TEX_LEN(u64, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL_00002730_CITex_WIDTH, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL_00002730_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03001568_DL_00002730_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

Vtx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL_03002F30_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL_03002F30_Vtx_fused_.inc.c"
};

Gfx men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL[28] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL.inc.c"
};

u8 men_room_9_unaccounted_0030E0[] = {
#include "assets/scenes/dungeons/men/men_room_9_unaccounted_0030E0.bin.inc.c"
};

u64 men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL_000030F0_Tex[TEX_LEN(u64, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL_000030F0_Tex_WIDTH, men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL_000030F0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_9_030001E0_RoomShapeCullable_030001EC_CullableEntries_03003000_DL_000030F0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room9_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room9_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room9.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
