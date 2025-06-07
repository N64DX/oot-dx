#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2.h"
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

SceneCmd MIZUsin_room_2[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2.inc.c"
};

s16 MIZUsin_room_2_03000040_ObjectList[LENGTH_MIZUsin_room_2_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_2_03000058_ActorEntryList[LENGTH_MIZUsin_room_2_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000058_ActorEntryList.inc.c"
};

u8 MIZUsin_room_2_zeros_000118[8] = { 0 };

RoomShapeCullable MIZUsin_room_2_03000120_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries[LENGTH_MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries.inc.c"
};

u8 MIZUsin_room_2_unaccounted_00017C[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_unaccounted_00017C.bin.inc.c"
};

Vtx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL_03000180_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL_03000180_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL[47] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL.inc.c"
};

Vtx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_03000558_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_03000558_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL[275] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL.inc.c"
};

Vtx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001F00_DL_03001BC0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001F00_DL_03001BC0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001F00_DL[42] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001F00_DL.inc.c"
};

Vtx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030027A0_DL_03002050_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030027A0_DL_03002050_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030027A0_DL[62] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030027A0_DL.inc.c"
};

u8 MIZUsin_room_2_unaccounted_002990[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_unaccounted_002990.bin.inc.c"
};

u64 MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000029B8_Tex[TEX_LEN(u64, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000029B8_Tex_WIDTH, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000029B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000029B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL_000031B8_Tex[TEX_LEN(u64, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL_000031B8_Tex_WIDTH, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL_000031B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_030003E0_DL_000031B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000039B8_Tex[TEX_LEN(u64, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000039B8_Tex_WIDTH, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000039B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000039B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000041B8_Tex[TEX_LEN(u64, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000041B8_Tex_WIDTH, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000041B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000041B8_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000049B8_Tex[TEX_LEN(u64, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000049B8_Tex_WIDTH, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000049B8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03001328_DL_000049B8_Tex.rgba16.inc.c"
};

u8 MIZUsin_room_2_zeros_0051B8[8] = { 0 };

Vtx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL_030051C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL_030051C0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL[31] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL.inc.c"
};

u8 MIZUsin_room_2_unaccounted_005378[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_unaccounted_005378.bin.inc.c"
};

u64 MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL_00005388_Tex[TEX_LEN(u64, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL_00005388_Tex_WIDTH, MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL_00005388_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2_03000120_RoomShapeCullable_0300012C_CullableEntries_03005280_DL_00005388_Tex.ia16.inc.c"
};

u8 MIZUsin_room_2_zeros_005B88[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room2.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
