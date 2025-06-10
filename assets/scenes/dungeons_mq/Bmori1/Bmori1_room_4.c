#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4.h"
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

SceneCmd Bmori1_room_4[] = {
#include "assets/scenes/dungeons_mq/Bmori1/Bmori1_room_4.inc.c"
};

s16 Bmori1_room_4_03000040_ObjectList[LENGTH_Bmori1_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_4_0300004C_ActorEntryList[LENGTH_Bmori1_room_4_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_4_03000060_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000060_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries[LENGTH_Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries.inc.c"
};

Vtx Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_03000080_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_03000080_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL[517] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL.inc.c"
};

u64 Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_000022A8_Tex[TEX_LEN(u64, Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_000022A8_Tex_WIDTH, Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_000022A8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_000022A8_Tex.rgba16.inc.c"
};

u64 Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_00002AA8_CITex[TEX_LEN(u64, Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_00002AA8_CITex_WIDTH, Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_00002AA8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4_03000060_RoomShapeCullable_0300006C_CullableEntries_03001270_DL_00002AA8_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
