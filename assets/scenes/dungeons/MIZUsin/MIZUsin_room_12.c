#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12.h"
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd MIZUsin_room_12[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12.inc.c"
};

s16 MIZUsin_room_12_03000040_ObjectList[LENGTH_MIZUsin_room_12_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_12_0300005C_ActorEntryList[LENGTH_MIZUsin_room_12_0300005C_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_0300005C_ActorEntryList.inc.c"
};

u8 MIZUsin_room_12_zeros_00011C[4] = { 0 };

RoomShapeCullable MIZUsin_room_12_03000120_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries[LENGTH_MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries.inc.c"
};

u8 MIZUsin_room_12_unaccounted_0001BC[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_unaccounted_0001BC.bin.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000680_DL_030001C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000680_DL_030001C0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000680_DL[45] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000680_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL_030007E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL_030007E8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL[37] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL_03000B50_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL_03000B50_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL[38] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002450_DL_03000E80_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002450_DL_03000E80_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002450_DL[152] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002450_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL_03002910_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL_03002910_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL[45] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL_03002DF8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL_03002DF8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL[32] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03003508_DL_03002FC8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03003508_DL_03002FC8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03003508_DL[124] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03003508_DL.inc.c"
};

u8 MIZUsin_room_12_unaccounted_0038E8[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_unaccounted_0038E8.bin.inc.c"
};

u64 MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL_00003928_Tex[TEX_LEN(u64, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL_00003928_Tex_WIDTH, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL_00003928_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002C90_DL_00003928_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL_00004128_Tex[TEX_LEN(u64, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL_00004128_Tex_WIDTH, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL_00004128_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000D50_DL_00004128_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL_00004928_Tex[TEX_LEN(u64, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL_00004928_Tex_WIDTH, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL_00004928_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03002EC8_DL_00004928_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL_00005128_Tex[TEX_LEN(u64, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL_00005128_Tex_WIDTH, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL_00005128_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03000A28_DL_00005128_Tex.rgba16.inc.c"
};

u8 MIZUsin_room_12_zeros_005928[8] = { 0 };

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL_03005930_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL_03005930_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL[83] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL.inc.c"
};

Vtx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006478_DL_030063B8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006478_DL_030063B8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006478_DL[31] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006478_DL.inc.c"
};

u8 MIZUsin_room_12_unaccounted_006570[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_unaccounted_006570.bin.inc.c"
};

u64 MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL_00006588_Tex[TEX_LEN(u64, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL_00006588_Tex_WIDTH, MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL_00006588_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_12_03000120_RoomShapeCullable_0300012C_CullableEntries_03006120_DL_00006588_Tex.ia16.inc.c"
};

u8 MIZUsin_room_12_zeros_006D88[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room12_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room12_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room12.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
