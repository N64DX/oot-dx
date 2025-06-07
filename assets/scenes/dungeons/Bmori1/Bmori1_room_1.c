#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1.h"
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd Bmori1_room_1[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1.inc.c"
};

s16 Bmori1_room_1_03000040_ObjectList[LENGTH_Bmori1_room_1_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_1_03000054_ActorEntryList[LENGTH_Bmori1_room_1_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000054_ActorEntryList.inc.c"
};

u8 Bmori1_room_1_zeros_000064[12] = { 0 };

RoomShapeCullable Bmori1_room_1_03000070_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries[LENGTH_Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries.inc.c"
};

u8 Bmori1_room_1_unaccounted_00009C[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_unaccounted_00009C.bin.inc.c"
};

Vtx Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_030000A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_030000A0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL[458] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL.inc.c"
};

Vtx Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL_03002F30_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL_03002F30_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL[30] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL.inc.c"
};

u8 Bmori1_room_1_unaccounted_003340[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_unaccounted_003340.bin.inc.c"
};

u64 Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003358_Tex[TEX_LEN(u64, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003358_Tex_WIDTH, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003358_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003358_Tex.rgba16.inc.c"
};

u64 Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003B58_CITex[TEX_LEN(u64, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003B58_CITex_WIDTH, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003B58_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00003B58_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL_00004358_Tex[TEX_LEN(u64, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL_00004358_Tex_WIDTH, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL_00004358_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_03003250_DL_00004358_Tex.rgba16.inc.c"
};

u64 Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00005358_CITex[TEX_LEN(u64, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00005358_CITex_WIDTH, Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00005358_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1_03000070_RoomShapeCullable_0300007C_CullableEntries_030020E0_DL_00005358_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u8 Bmori1_room_1_zeros_005B58[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
