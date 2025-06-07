#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6.h"
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HAKAdanCH_room_6[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6.inc.c"
};

s16 HAKAdanCH_room_6_03000040_ObjectList[LENGTH_HAKAdanCH_room_6_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdanCH_room_6_0300004C_ActorEntryList[LENGTH_HAKAdanCH_room_6_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_0300004C_ActorEntryList.inc.c"
};

u8 HAKAdanCH_room_6_zeros_00009C[4] = { 0 };

RoomShapeCullable HAKAdanCH_room_6_030000A0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries[LENGTH_HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries.inc.c"
};

u8 HAKAdanCH_room_6_unaccounted_0000CC[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_unaccounted_0000CC.bin.inc.c"
};

Vtx HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL[44] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL.inc.c"
};

Vtx HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_03000550_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_03000550_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL[75] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL.inc.c"
};

u8 HAKAdanCH_room_6_unaccounted_000E68[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_unaccounted_000E68.bin.inc.c"
};

u64 HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL_00000E80_Tex[TEX_LEN(u64, HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL_00000E80_Tex_WIDTH, HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL_00000E80_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_030003F0_DL_00000E80_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00001680_Tex[TEX_LEN(u64, HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00001680_Tex_WIDTH, HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00001680_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00001680_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00002680_Tex[TEX_LEN(u64, HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00002680_Tex_WIDTH, HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00002680_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000C10_DL_00002680_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
