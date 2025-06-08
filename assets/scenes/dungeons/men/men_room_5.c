#include "assets/scenes/dungeons/men/men_room_5.h"
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

SceneCmd men_room_5[] = {
#include "assets/scenes/dungeons/men/men_room_5.inc.c"
};

s16 men_room_5_03000040_ObjectList[LENGTH_men_room_5_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_5_03000040_ObjectList.inc.c"
};

ActorEntry men_room_5_03000050_ActorEntryList[LENGTH_men_room_5_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_5_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_5_030001B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries[LENGTH_men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries.inc.c"
};

Vtx men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_030001E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_030001E0_Vtx_fused_.inc.c"
};

Gfx men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL[301] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL.inc.c"
};

Vtx men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL_03001C58_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL_03001C58_Vtx_fused_.inc.c"
};

Gfx men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL[91] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL.inc.c"
};

u64 men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL_000024D8_CITex[TEX_LEN(u64, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL_000024D8_CITex_WIDTH, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL_000024D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030021E8_DL_000024D8_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_00002CD8_CITex[TEX_LEN(u64, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_00002CD8_CITex_WIDTH, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_00002CD8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_00002CD8_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000030D8_CITex[TEX_LEN(u64, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000030D8_CITex_WIDTH, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000030D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000030D8_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000038D8_CITex[TEX_LEN(u64, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000038D8_CITex_WIDTH, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000038D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000038D8_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000040D8_CITex[TEX_LEN(u64, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000040D8_CITex_WIDTH, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000040D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000040D8_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000048D8_CITex[TEX_LEN(u64, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000048D8_CITex_WIDTH, men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000048D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_5_030001B0_RoomShapeCullable_030001BC_CullableEntries_030012F0_DL_000048D8_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
