#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22.h"
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd Bmori1_room_22[] = {
#include "assets/scenes/dungeons_mq/Bmori1/Bmori1_room_22.inc.c"
};

s16 Bmori1_room_22_03000038_ObjectList[LENGTH_Bmori1_room_22_03000038_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000038_ObjectList.inc.c"
};

RoomShapeCullable Bmori1_room_22_03000050_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000050_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries[LENGTH_Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries.inc.c"
};

Vtx Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_03000070_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_03000070_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL[72] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL.inc.c"
};

u64 Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000005E0_Tex[TEX_LEN(u64, Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000005E0_Tex_WIDTH, Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000005E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000005E0_Tex.rgba16.inc.c"
};

u64 Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000015E0_CITex[TEX_LEN(u64, Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000015E0_CITex_WIDTH, Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000015E0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_22_03000050_RoomShapeCullable_0300005C_CullableEntries_03000390_DL_000015E0_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/objects/room22_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/headers/room22.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
