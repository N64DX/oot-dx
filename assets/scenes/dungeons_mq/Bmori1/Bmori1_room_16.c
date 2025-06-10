#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16.h"
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

SceneCmd Bmori1_room_16[] = {
#include "assets/scenes/dungeons_mq/Bmori1/Bmori1_room_16.inc.c"
};

s16 Bmori1_room_16_03000040_ObjectList[LENGTH_Bmori1_room_16_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_16_03000050_ActorEntryList[LENGTH_Bmori1_room_16_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_16_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

Vtx Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_030000F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_030000F0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL[677] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL.inc.c"
};

u64 Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00002F98_Tex[TEX_LEN(u64, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00002F98_Tex_WIDTH, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00002F98_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00002F98_Tex.rgba16.inc.c"
};

u64 Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003798_CITex[TEX_LEN(u64, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003798_CITex_WIDTH, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003798_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003798_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003F98_CITex[TEX_LEN(u64, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003F98_CITex_WIDTH, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003F98_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00003F98_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.inc.c"
};

u64 Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004398_CITex[TEX_LEN(u64, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004398_CITex_WIDTH, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004398_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004398_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004798_CITex[TEX_LEN(u64, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004798_CITex_WIDTH, Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004798_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_16_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001A60_DL_00004798_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/objects/room16_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/actors/room16_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/headers/room16.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
