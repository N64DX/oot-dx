#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21.h"
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

SceneCmd MIZUsin_room_21[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21.inc.c"
};

s16 MIZUsin_room_21_03000040_ObjectList[LENGTH_MIZUsin_room_21_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_21_03000060_ActorEntryList[LENGTH_MIZUsin_room_21_03000060_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000060_ActorEntryList.inc.c"
};

RoomShapeCullable MIZUsin_room_21_03000190_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries[LENGTH_MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries.inc.c"
};

u8 MIZUsin_room_21_unaccounted_00020C[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_unaccounted_00020C.bin.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_030003E0_DL_03000210_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_030003E0_DL_03000210_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_030003E0_DL[28] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_030003E0_DL.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL_030004C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL_030004C0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL[300] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003A70_DL_030036A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003A70_DL_030036A0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003A70_DL[45] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003A70_DL.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL_03003BD8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL_03003BD8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL[32] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL_03003DD8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL_03003DD8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL[40] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL_03004158_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL_03004158_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL[32] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL.inc.c"
};

u8 MIZUsin_room_21_unaccounted_004328[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_unaccounted_004328.bin.inc.c"
};

u64 MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL_00004360_Tex[TEX_LEN(u64, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL_00004360_Tex_WIDTH, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL_00004360_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03002D40_DL_00004360_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL_00004B60_Tex[TEX_LEN(u64, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL_00004B60_Tex_WIDTH, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL_00004B60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004018_DL_00004B60_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL_00005360_Tex[TEX_LEN(u64, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL_00005360_Tex_WIDTH, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL_00005360_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03003CD8_DL_00005360_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL_00005B60_Tex[TEX_LEN(u64, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL_00005B60_Tex_WIDTH, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL_00005B60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03004228_DL_00005B60_Tex.rgba16.inc.c"
};

Vtx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL_03006360_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL_03006360_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL[74] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL.inc.c"
};

u8 MIZUsin_room_21_unaccounted_006C90[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_unaccounted_006C90.bin.inc.c"
};

u64 MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL_00006CA0_Tex[TEX_LEN(u64, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL_00006CA0_Tex_WIDTH, MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL_00006CA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_21_03000190_RoomShapeCullable_0300019C_CullableEntries_03006A40_DL_00006CA0_Tex.ia16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room21_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room21_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room21.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
