#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15.h"
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HIDAN_room_15[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_15.inc.c"
};

s16 HIDAN_room_15_03000040_ObjectList[LENGTH_HIDAN_room_15_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_15_03000050_ActorEntryList[LENGTH_HIDAN_room_15_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_15_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

Vtx HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL_030000F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL_030000F0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL[141] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL.inc.c"
};

u64 HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL_00000DC8_CITex[TEX_LEN(u64, HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL_00000DC8_CITex_WIDTH, HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL_00000DC8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000950_DL_00000DC8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
