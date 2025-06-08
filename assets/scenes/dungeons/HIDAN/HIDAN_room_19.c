#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19.h"
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

SceneCmd HIDAN_room_19[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19.inc.c"
};

s16 HIDAN_room_19_03000040_ObjectList[LENGTH_HIDAN_room_19_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_19_03000058_ActorEntryList[LENGTH_HIDAN_room_19_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_19_03000100_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries[LENGTH_HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries.inc.c"
};

Vtx HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_03000120_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL[579] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL.inc.c"
};

u64 HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00002DD8_Tex[TEX_LEN(u64, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00002DD8_Tex_WIDTH, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00002DD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00002DD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000035D8_CITex[TEX_LEN(u64, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000035D8_CITex_WIDTH, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000035D8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000035D8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000039D8_CITex[TEX_LEN(u64, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000039D8_CITex_WIDTH, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000039D8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_000039D8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003DD8_CITex[TEX_LEN(u64, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003DD8_CITex_WIDTH, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003DD8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003DD8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003FD8_CITex[TEX_LEN(u64, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003FD8_CITex_WIDTH, HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003FD8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19_03000100_RoomShapeCullable_0300010C_CullableEntries_03001BB0_DL_00003FD8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room19_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room19_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room19.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
