#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7.h"
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

SceneCmd HIDAN_room_7[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_7.inc.c"
};

s16 HIDAN_room_7_03000040_ObjectList[LENGTH_HIDAN_room_7_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_7_03000054_ActorEntryList[LENGTH_HIDAN_room_7_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_7_03000070_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries[LENGTH_HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries.inc.c"
};

Vtx HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_030000A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_030000A0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL[281] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL.inc.c"
};

Vtx HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_030014D8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_030014D8_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL[93] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL.inc.c"
};

u64 HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001BD8_Tex[TEX_LEN(u64, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001BD8_Tex_WIDTH, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001BD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001BD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001DD8_Tex[TEX_LEN(u64, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001DD8_Tex_WIDTH, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001DD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_030018D8_DL_00001DD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000025D8_CITex[TEX_LEN(u64, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000025D8_CITex_WIDTH, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000025D8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000025D8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000029D8_Tex[TEX_LEN(u64, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000029D8_Tex_WIDTH, HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000029D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_7_03000070_RoomShapeCullable_0300007C_CullableEntries_03000C10_DL_000029D8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room7.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
