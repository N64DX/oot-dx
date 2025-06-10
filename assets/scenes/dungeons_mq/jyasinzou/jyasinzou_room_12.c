#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12.h"
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd jyasinzou_room_12[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/jyasinzou_room_12.inc.c"
};

s16 jyasinzou_room_12_03000040_ObjectList[LENGTH_jyasinzou_room_12_03000040_ObjectList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000040_ObjectList.inc.c"
};

ActorEntry jyasinzou_room_12_0300004C_ActorEntryList[LENGTH_jyasinzou_room_12_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable jyasinzou_room_12_03000080_RoomShapeCullable = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries[LENGTH_jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries.inc.c"
};

Vtx jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_03000120_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL[101] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL.inc.c"
};

Vtx jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000AB8_DL_03000958_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000AB8_DL_03000958_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000AB8_DL[34] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000AB8_DL.inc.c"
};

Vtx jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000E88_DL_03000BC8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000E88_DL_03000BC8_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000E88_DL[54] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000E88_DL.inc.c"
};

u64 jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001058_CITex[TEX_LEN(u64, jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001058_CITex_WIDTH, jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001058_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001058_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.inc.c"
};

u64 jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001858_CITex[TEX_LEN(u64, jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001858_CITex_WIDTH, jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001858_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12_03000080_RoomShapeCullable_0300008C_CullableEntries_03000630_DL_00001858_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/objects/room12_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/actors/room12_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/headers/room12.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
