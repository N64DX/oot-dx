#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20.h"
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

SceneCmd Bmori1_room_20[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20.inc.c"
};

s16 Bmori1_room_20_03000040_ObjectList[LENGTH_Bmori1_room_20_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_20_03000054_ActorEntryList[LENGTH_Bmori1_room_20_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_03000054_ActorEntryList.inc.c"
};

u8 Bmori1_room_20_zeros_0000A4[12] = { 0 };

RoomShapeCullable Bmori1_room_20_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

u8 Bmori1_room_20_unaccounted_0000CC[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_unaccounted_0000CC.bin.inc.c"
};

Vtx Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL[83] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL.inc.c"
};

u8 Bmori1_room_20_unaccounted_0006E8[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_unaccounted_0006E8.bin.inc.c"
};

u64 Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_000006F8_CITex[TEX_LEN(u64, Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_000006F8_CITex_WIDTH, Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_000006F8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_000006F8_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_00000EF8_CITex[TEX_LEN(u64, Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_00000EF8_CITex_WIDTH, Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_00000EF8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000450_DL_00000EF8_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.inc.c"
};

u8 Bmori1_room_20_zeros_0012F8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room20_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room20_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room20.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
