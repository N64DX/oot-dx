#include "assets/scenes/dungeons/ddan/ddan_room_11.h"
#include "assets/scenes/dungeons/ddan/ddan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ddan_room_11[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11.inc.c"
};

s16 ddan_room_11_03000040_ObjectList[LENGTH_ddan_room_11_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_11_0300004C_ActorEntryList[LENGTH_ddan_room_11_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_0300004C_ActorEntryList.inc.c"
};

u8 ddan_room_11_zeros_0000AC[4] = { 0 };

RoomShapeCullable ddan_room_11_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

u8 ddan_room_11_unaccounted_0000CC[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_unaccounted_0000CC.bin.inc.c"
};

Vtx ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL[176] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL.inc.c"
};

u8 ddan_room_11_unaccounted_000C70[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_unaccounted_000C70.bin.inc.c"
};

u64 ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00000C80_CITex[TEX_LEN(u64, ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00000C80_CITex_WIDTH, ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00000C80_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00000C80_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001480_CITex[TEX_LEN(u64, ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001480_CITex_WIDTH, ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001480_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001480_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001C80_CITex[TEX_LEN(u64, ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001C80_CITex_WIDTH, ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001C80_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_11_030000B0_RoomShapeCullable_030000BC_CullableEntries_030006F0_DL_00001C80_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room11_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room11_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
