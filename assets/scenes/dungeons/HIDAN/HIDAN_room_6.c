#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6.h"
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

SceneCmd HIDAN_room_6[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6.inc.c"
};

s16 HIDAN_room_6_03000040_ObjectList[LENGTH_HIDAN_room_6_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_6_03000054_ActorEntryList[LENGTH_HIDAN_room_6_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_03000054_ActorEntryList.inc.c"
};

u8 HIDAN_room_6_zeros_000094[12] = { 0 };

RoomShapeCullable HIDAN_room_6_030000A0_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries[LENGTH_HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries.inc.c"
};

u8 HIDAN_room_6_unaccounted_0000DC[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_unaccounted_0000DC.bin.inc.c"
};

Vtx HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL[190] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL.inc.c"
};

Vtx HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL_03001950_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL_03001950_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL[31] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL.inc.c"
};

Vtx HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_03001B08_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_03001B08_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL[447] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL.inc.c"
};

u8 HIDAN_room_6_unaccounted_003980[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_unaccounted_003980.bin.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000039A0_Tex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000039A0_Tex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000039A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000039A0_Tex.rgba16.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00003BA0_Tex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00003BA0_Tex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00003BA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00003BA0_Tex.rgba16.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL_000043A0_Tex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL_000043A0_Tex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL_000043A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001360_DL_000043A0_Tex.rgba16.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00004BA0_Tex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00004BA0_Tex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00004BA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00004BA0_Tex.rgba16.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00005BA0_Tex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00005BA0_Tex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00005BA0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_00005BA0_Tex.rgba16.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000063A0_CITex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000063A0_CITex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000063A0_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002B88_DL_000063A0_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL_000067A0_Tex[TEX_LEN(u64, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL_000067A0_Tex_WIDTH, HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL_000067A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_6_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001A10_DL_000067A0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
