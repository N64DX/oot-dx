#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3.h"
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

SceneCmd HIDAN_room_3[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3.inc.c"
};

s16 HIDAN_room_3_03000040_ObjectList[LENGTH_HIDAN_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_3_03000054_ActorEntryList[LENGTH_HIDAN_room_3_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_3_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

Vtx HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL[224] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL.inc.c"
};

Vtx HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_030014B0_DL_03001090_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_030014B0_DL_03001090_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_030014B0_DL[42] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_030014B0_DL.inc.c"
};

Vtx HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_03001600_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_03001600_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL[77] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL.inc.c"
};

u64 HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001AD8_CITex[TEX_LEN(u64, HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001AD8_CITex_WIDTH, HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001AD8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001AD8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001ED8_CITex[TEX_LEN(u64, HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001ED8_CITex_WIDTH, HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001ED8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03001850_DL_00001ED8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL_000022D8_CITex[TEX_LEN(u64, HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL_000022D8_CITex_WIDTH, HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL_000022D8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_3_03000090_RoomShapeCullable_0300009C_CullableEntries_03000990_DL_000022D8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
