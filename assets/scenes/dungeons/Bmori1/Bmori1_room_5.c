#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5.h"
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

SceneCmd Bmori1_room_5[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5.inc.c"
};

s16 Bmori1_room_5_03000040_ObjectList[LENGTH_Bmori1_room_5_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_5_0300004C_ActorEntryList[LENGTH_Bmori1_room_5_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_5_030000A0_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries[LENGTH_Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries.inc.c"
};

Vtx Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL[239] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL.inc.c"
};

Vtx Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL_03001098_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL_03001098_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL[77] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL.inc.c"
};

Vtx Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_03001E40_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_03001E40_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL[72] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL.inc.c"
};

u64 Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_000023E0_CITex[TEX_LEN(u64, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_000023E0_CITex_WIDTH, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_000023E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_000023E0_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL_000027E0_CITex[TEX_LEN(u64, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL_000027E0_CITex_WIDTH, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL_000027E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001BD8_DL_000027E0_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002FE0_CITex[TEX_LEN(u64, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002FE0_CITex_WIDTH, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002FE0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03000920_DL_00002FE0_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.inc.c"
};

u64 Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000033E0_Tex[TEX_LEN(u64, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000033E0_Tex_WIDTH, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000033E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000033E0_Tex.rgba16.inc.c"
};

u64 Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000034E0_Tex[TEX_LEN(u64, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000034E0_Tex_WIDTH, Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000034E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_5_030000A0_RoomShapeCullable_030000AC_CullableEntries_03002180_DL_000034E0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
