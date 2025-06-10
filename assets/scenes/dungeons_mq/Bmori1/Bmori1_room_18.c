#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18.h"
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd Bmori1_room_18[] = {
#include "assets/scenes/dungeons_mq/Bmori1/Bmori1_room_18.inc.c"
};

s16 Bmori1_room_18_03000040_ObjectList[LENGTH_Bmori1_room_18_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_18_03000054_ActorEntryList[LENGTH_Bmori1_room_18_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_18_03000080_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000080_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries[LENGTH_Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries.inc.c"
};

Vtx Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL_030000A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL_030000A0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL[178] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL.inc.c"
};

u64 Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL_00000B40_CITex[TEX_LEN(u64, Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL_00000B40_CITex_WIDTH, Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL_00000B40_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18_03000080_RoomShapeCullable_0300008C_CullableEntries_030005A0_DL_00000B40_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/objects/room18_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/actors/room18_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/headers/room18.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
