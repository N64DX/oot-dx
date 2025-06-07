#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5.h"
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

SceneCmd HAKAdanCH_room_5[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5.inc.c"
};

s16 HAKAdanCH_room_5_03000040_ObjectList[LENGTH_HAKAdanCH_room_5_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdanCH_room_5_03000054_ActorEntryList[LENGTH_HAKAdanCH_room_5_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_03000054_ActorEntryList.inc.c"
};

u8 HAKAdanCH_room_5_zeros_0000B4[12] = { 0 };

RoomShapeCullable HAKAdanCH_room_5_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

u8 HAKAdanCH_room_5_unaccounted_00011C[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_unaccounted_00011C.bin.inc.c"
};

Vtx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000240_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000240_DL_03000120_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000240_DL[28] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000240_DL.inc.c"
};

Vtx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_030003F0_DL_03000320_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_030003F0_DL_03000320_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_030003F0_DL[31] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_030003F0_DL.inc.c"
};

Vtx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL_030004E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL_030004E8_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL[63] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL.inc.c"
};

Vtx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000EE0_DL_03000DE0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000EE0_DL_03000DE0_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000EE0_DL[24] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000EE0_DL.inc.c"
};

Vtx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL_03000FA0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL_03000FA0_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL[24] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL.inc.c"
};

u8 HAKAdanCH_room_5_unaccounted_001130[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_unaccounted_001130.bin.inc.c"
};

u64 HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL_00001160_Tex[TEX_LEN(u64, HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL_00001160_Tex_WIDTH, HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL_00001160_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001070_DL_00001160_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL_00002160_Tex[TEX_LEN(u64, HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL_00002160_Tex_WIDTH, HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL_00002160_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000BE8_DL_00002160_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
