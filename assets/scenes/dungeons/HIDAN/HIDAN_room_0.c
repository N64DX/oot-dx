#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0.h"
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

SceneCmd HIDAN_room_0[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0.inc.c"
};

s16 HIDAN_room_0_03000040_ObjectList[LENGTH_HIDAN_room_0_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_0_03000050_ActorEntryList[LENGTH_HIDAN_room_0_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_0_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

u8 HIDAN_room_0_unaccounted_0000EC[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_unaccounted_0000EC.bin.inc.c"
};

Vtx HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_030000F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_030000F0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL[1106] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL.inc.c"
};

u8 HIDAN_room_0_unaccounted_004EB0[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_unaccounted_004EB0.bin.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00004EC0_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00004EC0_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00004EC0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00004EC0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000052C0_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000052C0_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000052C0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000052C0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000056C0_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000056C0_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000056C0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000056C0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005AC0_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005AC0_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005AC0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005AC0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005CC0_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005CC0_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005CC0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005CC0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005EC0_CITex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005EC0_CITex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005EC0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00005EC0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000062C0_Tex[TEX_LEN(u64, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000062C0_Tex_WIDTH, HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000062C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_000062C0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
