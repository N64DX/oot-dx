#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9.h"
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

SceneCmd MIZUsin_room_9[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9.inc.c"
};

s16 MIZUsin_room_9_03000040_ObjectList[LENGTH_MIZUsin_room_9_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_9_03000054_ActorEntryList[LENGTH_MIZUsin_room_9_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_03000054_ActorEntryList.inc.c"
};

u8 MIZUsin_room_9_zeros_000094[12] = { 0 };

RoomShapeCullable MIZUsin_room_9_030000A0_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries[LENGTH_MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries.inc.c"
};

u8 MIZUsin_room_9_unaccounted_00010C[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_unaccounted_00010C.bin.inc.c"
};

Vtx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_03000110_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_03000110_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL[550] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL.inc.c"
};

Vtx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002D50_DL_030028F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002D50_DL_030028F0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002D50_DL[50] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002D50_DL.inc.c"
};

Vtx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002FF0_DL_03002EE0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002FF0_DL_03002EE0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002FF0_DL[33] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002FF0_DL.inc.c"
};

Vtx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003338_DL_030030F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003338_DL_030030F8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003338_DL[37] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003338_DL.inc.c"
};

Vtx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL_03003460_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL_03003460_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL[23] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL.inc.c"
};

u8 MIZUsin_room_9_unaccounted_0035D8[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_unaccounted_0035D8.bin.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL_00003608_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL_00003608_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL_00003608_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003520_DL_00003608_Tex.i4.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00003E08_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00003E08_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00003E08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00003E08_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004608_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004608_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004608_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004608_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004E08_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004E08_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004E08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00004E08_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005608_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005608_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005608_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005608_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005E08_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005E08_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005E08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00005E08_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006608_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006608_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006608_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006608_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006E08_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006E08_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006E08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030017C0_DL_00006E08_Tex.rgba16.inc.c"
};

u8 MIZUsin_room_9_zeros_007608[8] = { 0 };

Vtx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL_03007610_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL_03007610_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL[31] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL.inc.c"
};

u8 MIZUsin_room_9_unaccounted_0077C8[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_unaccounted_0077C8.bin.inc.c"
};

u64 MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL_000077D8_Tex[TEX_LEN(u64, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL_000077D8_Tex_WIDTH, MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL_000077D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_9_030000A0_RoomShapeCullable_030000AC_CullableEntries_030076D0_DL_000077D8_Tex.ia16.inc.c"
};

u8 MIZUsin_room_9_zeros_007FD8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room9_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room9_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room9.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
