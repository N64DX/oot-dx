#include "assets/scenes/dungeons/ydan/ydan_room_2.h"
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

SceneCmd ydan_room_2[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2.inc.c"
};

s16 ydan_room_2_03000040_ObjectList[LENGTH_ydan_room_2_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000040_ObjectList.inc.c"
};

ActorEntry ydan_room_2_03000058_ActorEntryList[LENGTH_ydan_room_2_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000058_ActorEntryList.inc.c"
};

u8 ydan_room_2_zeros_0000F8[8] = { 0 };

RoomShapeCullable ydan_room_2_03000100_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries[LENGTH_ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries.inc.c"
};

u8 ydan_room_2_unaccounted_00011C[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_unaccounted_00011C.bin.inc.c"
};

Vtx ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_03000120_Vtx_fused_.inc.c"
};

Gfx ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL[371] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL.inc.c"
};

u8 ydan_room_2_unaccounted_001BF8[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_unaccounted_001BF8.bin.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00001C08_CITex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00001C08_CITex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00001C08_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00001C08_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002408_CITex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002408_CITex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002408_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002408_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002C08_CITex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002C08_CITex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002C08_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00002C08_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003408_CITex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003408_CITex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003408_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003408_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003C08_CITex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003C08_CITex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003C08_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00003C08_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00004408_CITex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00004408_CITex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00004408_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03001060_DL_00004408_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u8 ydan_room_2_zeros_004C08[8] = { 0 };

Vtx ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL_03004C10_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL_03004C10_Vtx_fused_.inc.c"
};

Gfx ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL[25] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL.inc.c"
};

u8 ydan_room_2_unaccounted_004E18[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_unaccounted_004E18.bin.inc.c"
};

u64 ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL_00004E28_Tex[TEX_LEN(u64, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL_00004E28_Tex_WIDTH, ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL_00004E28_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_2_03000100_RoomShapeCullable_0300010C_CullableEntries_03004D50_DL_00004E28_Tex.rgba16.inc.c"
};

u8 ydan_room_2_zeros_005E28[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room2.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
