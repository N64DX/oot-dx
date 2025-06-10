#include "assets/scenes/dungeons/ydan/ydan_room_6.h"
#include "assets/scenes/dungeons/ydan/ydan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ydan_room_6[] = {
#include "assets/scenes/dungeons_mq/ydan/ydan_room_6.inc.c"
};

s16 ydan_room_6_03000040_ObjectList[LENGTH_ydan_room_6_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_03000040_ObjectList.inc.c"
};

ActorEntry ydan_room_6_03000054_ActorEntryList[LENGTH_ydan_room_6_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable ydan_room_6_030000E0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries[LENGTH_ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries.inc.c"
};

Vtx ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_03000100_Vtx_fused_.inc.c"
};

Gfx ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL[344] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL.inc.c"
};

u64 ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00001EC0_CITex[TEX_LEN(u64, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00001EC0_CITex_WIDTH, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00001EC0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00001EC0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000026C0_CITex[TEX_LEN(u64, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000026C0_CITex_WIDTH, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000026C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000026C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00002EC0_CITex[TEX_LEN(u64, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00002EC0_CITex_WIDTH, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00002EC0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00002EC0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000036C0_CITex[TEX_LEN(u64, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000036C0_CITex_WIDTH, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000036C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000036C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00003EC0_CITex[TEX_LEN(u64, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00003EC0_CITex_WIDTH, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00003EC0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_00003EC0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000046C0_CITex[TEX_LEN(u64, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000046C0_CITex_WIDTH, ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000046C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_6_030000E0_RoomShapeCullable_030000EC_CullableEntries_030013F0_DL_000046C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/ydan/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/ydan/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/ydan/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
