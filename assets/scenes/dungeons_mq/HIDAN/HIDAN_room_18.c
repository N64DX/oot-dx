#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18.h"
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

SceneCmd HIDAN_room_18[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_18.inc.c"
};

s16 HIDAN_room_18_03000040_ObjectList[LENGTH_HIDAN_room_18_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_18_03000058_ActorEntryList[LENGTH_HIDAN_room_18_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_18_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

Vtx HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_030000F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_030000F0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL[491] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL.inc.c"
};

u64 HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002778_Tex[TEX_LEN(u64, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002778_Tex_WIDTH, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002778_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002778_Tex.rgba16.inc.c"
};

u64 HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002F78_CITex[TEX_LEN(u64, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002F78_CITex_WIDTH, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002F78_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00002F78_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003378_CITex[TEX_LEN(u64, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003378_CITex_WIDTH, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003378_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003378_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003778_CITex[TEX_LEN(u64, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003778_CITex_WIDTH, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003778_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003778_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003978_CITex[TEX_LEN(u64, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003978_CITex_WIDTH, HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003978_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_18_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001810_DL_00003978_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room18_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room18_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room18.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
