#include "assets/scenes/dungeons/ydan/ydan_room_10.h"
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

SceneCmd ydan_room_10[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10.inc.c"
};

s16 ydan_room_10_03000040_ObjectList[LENGTH_ydan_room_10_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000040_ObjectList.inc.c"
};

ActorEntry ydan_room_10_03000058_ActorEntryList[LENGTH_ydan_room_10_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000058_ActorEntryList.inc.c"
};

u8 ydan_room_10_zeros_000128[8] = { 0 };

RoomShapeCullable ydan_room_10_03000130_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries[LENGTH_ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries.inc.c"
};

u8 ydan_room_10_unaccounted_00015C[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_unaccounted_00015C.bin.inc.c"
};

Vtx ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_03000160_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_03000160_Vtx_fused_.inc.c"
};

Gfx ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL[268] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL.inc.c"
};

u8 ydan_room_10_unaccounted_001B50[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_unaccounted_001B50.bin.inc.c"
};

u64 ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00001B60_CITex[TEX_LEN(u64, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00001B60_CITex_WIDTH, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00001B60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00001B60_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002360_CITex[TEX_LEN(u64, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002360_CITex_WIDTH, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002360_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002360_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002B60_CITex[TEX_LEN(u64, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002B60_CITex_WIDTH, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002B60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00002B60_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00003360_CITex[TEX_LEN(u64, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00003360_CITex_WIDTH, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00003360_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_030012F0_DL_00003360_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

Vtx ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL_03003B60_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL_03003B60_Vtx_fused_.inc.c"
};

Gfx ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL[25] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL.inc.c"
};

u8 ydan_room_10_unaccounted_003D68[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_unaccounted_003D68.bin.inc.c"
};

u64 ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL_00003D78_Tex[TEX_LEN(u64, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL_00003D78_Tex_WIDTH, ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL_00003D78_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_10_03000130_RoomShapeCullable_0300013C_CullableEntries_03003CA0_DL_00003D78_Tex.rgba16.inc.c"
};

u8 ydan_room_10_zeros_004D78[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
