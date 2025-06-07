#include "assets/scenes/dungeons/ganontika/ganontika_room_16.h"
#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ganontika_room_16[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16.inc.c"
};

s16 ganontika_room_16_03000040_ObjectList[LENGTH_ganontika_room_16_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_03000040_ObjectList.inc.c"
};

ActorEntry ganontika_room_16_0300004C_ActorEntryList[LENGTH_ganontika_room_16_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_0300004C_ActorEntryList.inc.c"
};

u8 ganontika_room_16_zeros_00009C[4] = { 0 };

RoomShapeCullable ganontika_room_16_030000A0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries[LENGTH_ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries.inc.c"
};

u8 ganontika_room_16_unaccounted_0000DC[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_unaccounted_0000DC.bin.inc.c"
};

Vtx ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL[206] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL.inc.c"
};

Vtx ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000E70_DL_03000D50_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000E70_DL_03000D50_Vtx_fused_.inc.c"
};

Gfx ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000E70_DL[27] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000E70_DL.inc.c"
};

Vtx ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL_03000F48_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL_03000F48_Vtx_fused_.inc.c"
};

Gfx ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL[113] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL.inc.c"
};

u8 ganontika_room_16_unaccounted_001600[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_unaccounted_001600.bin.inc.c"
};

u64 ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL_00001620_Tex[TEX_LEN(u64, ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL_00001620_Tex_WIDTH, ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL_00001620_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_030006E0_DL_00001620_Tex.rgba16.inc.c"
};

u64 ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL_00002620_CITex[TEX_LEN(u64, ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL_00002620_CITex_WIDTH, ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL_00002620_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_16_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001278_DL_00002620_CITex.ci8.tlut_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room16_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room16_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room16.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
