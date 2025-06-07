#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7.h"
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

SceneCmd MIZUsin_room_7[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7.inc.c"
};

s16 MIZUsin_room_7_03000040_ObjectList[LENGTH_MIZUsin_room_7_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_7_0300005C_ActorEntryList[LENGTH_MIZUsin_room_7_0300005C_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_0300005C_ActorEntryList.inc.c"
};

u8 MIZUsin_room_7_zeros_00008C[4] = { 0 };

RoomShapeCullable MIZUsin_room_7_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

u8 MIZUsin_room_7_unaccounted_0000BC[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_unaccounted_0000BC.bin.inc.c"
};

Vtx MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL[470] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL.inc.c"
};

Vtx MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL_03002350_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL_03002350_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL[33] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL.inc.c"
};

u8 MIZUsin_room_7_unaccounted_002538[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_unaccounted_002538.bin.inc.c"
};

u64 MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00002550_Tex[TEX_LEN(u64, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00002550_Tex_WIDTH, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00002550_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00002550_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL_00002D50_Tex[TEX_LEN(u64, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL_00002D50_Tex_WIDTH, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL_00002D50_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_03002430_DL_00002D50_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003550_Tex[TEX_LEN(u64, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003550_Tex_WIDTH, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003550_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003550_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003D50_Tex[TEX_LEN(u64, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003D50_Tex_WIDTH, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003D50_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00003D50_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004550_Tex[TEX_LEN(u64, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004550_Tex_WIDTH, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004550_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004550_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004D50_Tex[TEX_LEN(u64, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004D50_Tex_WIDTH, MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004D50_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7_03000090_RoomShapeCullable_0300009C_CullableEntries_030014A0_DL_00004D50_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room7.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
