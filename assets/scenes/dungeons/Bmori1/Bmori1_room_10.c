#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10.h"
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

SceneCmd Bmori1_room_10[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10.inc.c"
};

s16 Bmori1_room_10_03000040_ObjectList[LENGTH_Bmori1_room_10_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_10_03000058_ActorEntryList[LENGTH_Bmori1_room_10_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_10_03000080_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries[LENGTH_Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries.inc.c"
};

Vtx Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL[202] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL.inc.c"
};

Vtx Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_03000F20_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_03000F20_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL[45] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL.inc.c"
};

u64 Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001260_Tex[TEX_LEN(u64, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001260_Tex_WIDTH, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001260_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001260_Tex.rgba16.inc.c"
};

u64 Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001A60_CITex[TEX_LEN(u64, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001A60_CITex_WIDTH, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001A60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00001A60_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00002260_CITex[TEX_LEN(u64, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00002260_CITex_WIDTH, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00002260_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030008D0_DL_00002260_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00002A60_Tex[TEX_LEN(u64, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00002A60_Tex_WIDTH, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00002A60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00002A60_Tex.rgba16.inc.c"
};

u64 Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00003A60_Tex[TEX_LEN(u64, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00003A60_Tex_WIDTH, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00003A60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_030010E0_DL_00003A60_Tex.rgba16.inc.c"
};

Vtx Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL_03004A60_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL_03004A60_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL[23] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL.inc.c"
};

u64 Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL_00004BD8_Tex[TEX_LEN(u64, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL_00004BD8_Tex_WIDTH, Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL_00004BD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_10_03000080_RoomShapeCullable_0300008C_CullableEntries_03004B10_DL_00004BD8_Tex.ia16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
