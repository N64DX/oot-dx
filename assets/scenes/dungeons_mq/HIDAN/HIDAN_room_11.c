#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11.h"
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

SceneCmd HIDAN_room_11[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_11.inc.c"
};

s16 HIDAN_room_11_03000040_ObjectList[LENGTH_HIDAN_room_11_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_11_03000058_ActorEntryList[LENGTH_HIDAN_room_11_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_11_030000E0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries[LENGTH_HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries.inc.c"
};

Vtx HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_03000120_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL[133] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL.inc.c"
};

Vtx HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL_03000DE8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL_03000DE8_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL[240] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL.inc.c"
};

Vtx HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_03002608_DL_03002068_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_03002608_DL_03002068_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_03002608_DL[50] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_03002608_DL.inc.c"
};

u64 HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000027B8_Tex[TEX_LEN(u64, HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000027B8_Tex_WIDTH, HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000027B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000027B8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL_00002FB8_CITex[TEX_LEN(u64, HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL_00002FB8_CITex_WIDTH, HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL_00002FB8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030018E8_DL_00002FB8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000033B8_CITex[TEX_LEN(u64, HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000033B8_CITex_WIDTH, HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000033B8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_11_030000E0_RoomShapeCullable_030000EC_CullableEntries_030009C0_DL_000033B8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room11_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room11_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
