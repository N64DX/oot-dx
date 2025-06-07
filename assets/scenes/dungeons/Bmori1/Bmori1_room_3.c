#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3.h"
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

SceneCmd Bmori1_room_3[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3.inc.c"
};

s16 Bmori1_room_3_03000040_ObjectList[LENGTH_Bmori1_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_3_0300004C_ActorEntryList[LENGTH_Bmori1_room_3_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_0300004C_ActorEntryList.inc.c"
};

u8 Bmori1_room_3_zeros_00009C[4] = { 0 };

RoomShapeCullable Bmori1_room_3_030000A0_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries[LENGTH_Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries.inc.c"
};

u8 Bmori1_room_3_unaccounted_0000DC[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_unaccounted_0000DC.bin.inc.c"
};

Vtx Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL[234] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL.inc.c"
};

Vtx Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL_03001070_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL_03001070_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL[77] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL.inc.c"
};

Vtx Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_03001E18_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_03001E18_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL[82] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL.inc.c"
};

u8 Bmori1_room_3_unaccounted_0023E8[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_unaccounted_0023E8.bin.inc.c"
};

u64 Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002408_Tex[TEX_LEN(u64, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002408_Tex_WIDTH, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002408_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002408_Tex.rgba16.inc.c"
};

u64 Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL_00002C08_CITex[TEX_LEN(u64, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL_00002C08_CITex_WIDTH, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL_00002C08_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BB0_DL_00002C08_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00003408_CITex[TEX_LEN(u64, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00003408_CITex_WIDTH, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00003408_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00003408_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.inc.c"
};

u64 Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003808_Tex[TEX_LEN(u64, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003808_Tex_WIDTH, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003808_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003808_Tex.rgba16.inc.c"
};

u64 Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003908_Tex[TEX_LEN(u64, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003908_Tex_WIDTH, Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003908_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002158_DL_00003908_Tex.rgba16.inc.c"
};

u8 Bmori1_room_3_zeros_003A08[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
