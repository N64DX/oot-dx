#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12.h"
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

SceneCmd HIDAN_room_12[] = {
#include "assets/scenes/dungeons_mq/HIDAN/HIDAN_room_12.inc.c"
};

s16 HIDAN_room_12_03000040_ObjectList[LENGTH_HIDAN_room_12_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_12_03000050_ActorEntryList[LENGTH_HIDAN_room_12_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_12_03000070_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries[LENGTH_HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries.inc.c"
};

Vtx HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL[266] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL.inc.c"
};

Vtx HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001530_DL_030013D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001530_DL_030013D0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001530_DL[33] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001530_DL.inc.c"
};

Vtx HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_03001638_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_03001638_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL[94] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL.inc.c"
};

u64 HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001D78_Tex[TEX_LEN(u64, HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001D78_Tex_WIDTH, HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001D78_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001D78_Tex.rgba16.inc.c"
};

u64 HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001F78_Tex[TEX_LEN(u64, HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001F78_Tex_WIDTH, HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001F78_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03001A68_DL_00001F78_Tex.rgba16.inc.c"
};

u64 HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL_00002778_CITex[TEX_LEN(u64, HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL_00002778_CITex_WIDTH, HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL_00002778_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_12_03000070_RoomShapeCullable_0300007C_CullableEntries_03000B80_DL_00002778_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/objects/room12_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/actors/room12_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HIDAN/mq/headers/room12.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
