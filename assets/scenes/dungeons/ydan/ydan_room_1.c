#include "assets/scenes/dungeons/ydan/ydan_room_1.h"
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

SceneCmd ydan_room_1[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1.inc.c"
};

s16 ydan_room_1_03000040_ObjectList[LENGTH_ydan_room_1_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000040_ObjectList.inc.c"
};

ActorEntry ydan_room_1_03000058_ActorEntryList[LENGTH_ydan_room_1_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000058_ActorEntryList.inc.c"
};

u8 ydan_room_1_zeros_000068[8] = { 0 };

RoomShapeCullable ydan_room_1_03000070_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries[LENGTH_ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries.inc.c"
};

u8 ydan_room_1_unaccounted_00008C[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_unaccounted_00008C.bin.inc.c"
};

Vtx ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_03000090_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_03000090_Vtx_fused_.inc.c"
};

Gfx ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL[169] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL.inc.c"
};

u8 ydan_room_1_unaccounted_000ED8[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_unaccounted_000ED8.bin.inc.c"
};

u64 ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00000EE8_CITex[TEX_LEN(u64, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00000EE8_CITex_WIDTH, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00000EE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00000EE8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000016E8_CITex[TEX_LEN(u64, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000016E8_CITex_WIDTH, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000016E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000016E8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00001EE8_CITex[TEX_LEN(u64, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00001EE8_CITex_WIDTH, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00001EE8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_00001EE8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000026E8_CITex[TEX_LEN(u64, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000026E8_CITex_WIDTH, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000026E8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03000990_DL_000026E8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u8 ydan_room_1_zeros_002EE8[8] = { 0 };

Vtx ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL_03002EF0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL_03002EF0_Vtx_fused_.inc.c"
};

Gfx ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL[28] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL.inc.c"
};

u8 ydan_room_1_unaccounted_003140[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_unaccounted_003140.bin.inc.c"
};

u64 ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL_00003150_Tex[TEX_LEN(u64, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL_00003150_Tex_WIDTH, ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL_00003150_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003060_DL_00003150_Tex.ia16.inc.c"
};

static  s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room1_obj.inc.c"
};

static  ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room1.inc.c"
};

static  SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
