#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4.h"
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

SceneCmd HAKAdanCH_room_4[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/HAKAdanCH_room_4.inc.c"
};

s16 HAKAdanCH_room_4_03000040_ObjectList[LENGTH_HAKAdanCH_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdanCH_room_4_0300004C_ActorEntryList[LENGTH_HAKAdanCH_room_4_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable HAKAdanCH_room_4_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

Vtx HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL_03000100_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL[39] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL.inc.c"
};

Vtx HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000848_DL_030003A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000848_DL_030003A8_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000848_DL[51] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000848_DL.inc.c"
};

Vtx HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL_030009E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL_030009E0_Vtx_fused_.inc.c"
};

Gfx HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL[65] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL.inc.c"
};

u64 HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL_00001448_Tex[TEX_LEN(u64, HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL_00001448_Tex_WIDTH, HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL_00001448_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000270_DL_00001448_Tex.rgba16.inc.c"
};

u64 HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL_00001C48_Tex[TEX_LEN(u64, HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL_00001C48_Tex_WIDTH, HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL_00001C48_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001220_DL_00001C48_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdanCH/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
