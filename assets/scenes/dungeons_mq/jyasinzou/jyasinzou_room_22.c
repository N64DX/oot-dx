#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22.h"
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

SceneCmd jyasinzou_room_22[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/jyasinzou_room_22.inc.c"
};

s16 jyasinzou_room_22_03000040_ObjectList[LENGTH_jyasinzou_room_22_03000040_ObjectList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000040_ObjectList.inc.c"
};

ActorEntry jyasinzou_room_22_03000054_ActorEntryList[LENGTH_jyasinzou_room_22_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable jyasinzou_room_22_03000170_RoomShapeCullable = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries[LENGTH_jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries.inc.c"
};

Vtx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_03000220_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_03000220_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL[142] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL.inc.c"
};

Vtx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL_03000AA0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL_03000AA0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL[31] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL.inc.c"
};

Vtx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL_03000C88_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL_03000C88_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL[96] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL.inc.c"
};

Vtx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03001328_DL_030011A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03001328_DL_030011A8_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03001328_DL[47] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03001328_DL.inc.c"
};

u64 jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL_000014C8_CITex[TEX_LEN(u64, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL_000014C8_CITex_WIDTH, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL_000014C8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000EA8_DL_000014C8_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.inc.c"
};

u64 jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_00001CC8_CITex[TEX_LEN(u64, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_00001CC8_CITex_WIDTH, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_00001CC8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_00001CC8_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

u64 jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL_000024C8_CITex[TEX_LEN(u64, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL_000024C8_CITex_WIDTH, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL_000024C8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000B90_DL_000024C8_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.inc.c"
};

u64 jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_000028C8_CITex[TEX_LEN(u64, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_000028C8_CITex_WIDTH, jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_000028C8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_22_03000170_RoomShapeCullable_0300017C_CullableEntries_03000630_DL_000028C8_CITex.ci4.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018020_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/objects/room22_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/actors/room22_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/headers/room22.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
