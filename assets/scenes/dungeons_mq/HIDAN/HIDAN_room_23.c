#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23.h"
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HIDAN_room_23[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_23.inc.c"
};

s16 HIDAN_room_23_03000040_ObjectList[LENGTH_HIDAN_room_23_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_23_03000054_ActorEntryList[LENGTH_HIDAN_room_23_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_23_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

Vtx HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL[547] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00002D18_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00002D18_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00002D18_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00002D18_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003518_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003518_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003518_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003518_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003D18_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003D18_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003D18_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00003D18_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004518_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004518_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004518_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004518_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004D18_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004D18_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004D18_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00004D18_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005518_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005518_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005518_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005518_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005D18_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005D18_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005D18_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00005D18_Tex.rgba16.inc.c"
};

u64 HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00006518_Tex[TEX_LEN(u64, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00006518_Tex_WIDTH, HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00006518_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_23_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001BF0_DL_00006518_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room23_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room23_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room23.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
