#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15.h"
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

SceneCmd Bmori1_room_15[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15.inc.c"
};

s16 Bmori1_room_15_03000040_ObjectList[LENGTH_Bmori1_room_15_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_15_03000050_ActorEntryList[LENGTH_Bmori1_room_15_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_15_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

Vtx Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL[200] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL.inc.c"
};

u64 Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001290_CITex[TEX_LEN(u64, Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001290_CITex_WIDTH, Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001290_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001290_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001A90_CITex[TEX_LEN(u64, Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001A90_CITex_WIDTH, Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001A90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001A90_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03003DA0_DL_00014080_TLUT.inc.c"
};

u64 Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001E90_CITex[TEX_LEN(u64, Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001E90_CITex_WIDTH, Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001E90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_15_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C40_DL_00001E90_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
