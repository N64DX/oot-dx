#include "assets/scenes/dungeons/men/men_room_2.h"
#include "assets/scenes/dungeons/men/men_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd men_room_2[] = {
#include "assets/scenes/dungeons/men/men_room_2.inc.c"
};

s16 men_room_2_03000040_ObjectList[LENGTH_men_room_2_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_2_03000040_ObjectList.inc.c"
};

ActorEntry men_room_2_03000050_ActorEntryList[LENGTH_men_room_2_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_2_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_2_03000180_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries[LENGTH_men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL_03000210_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL_03000210_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL[56] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL_03000670_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL_03000670_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL[44] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001230_DL_030009D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001230_DL_030009D0_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001230_DL[112] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001230_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001B60_DL_030015B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001B60_DL_030015B0_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001B60_DL[56] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03001B60_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002610_DL_03001D20_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002610_DL_03001D20_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002610_DL[76] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002610_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002B60_DL_03002870_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002B60_DL_03002870_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002B60_DL[50] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002B60_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002ED0_DL_03002CF0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002ED0_DL_03002CF0_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002ED0_DL[35] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03002ED0_DL.inc.c"
};

Vtx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL_03002FE8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL_03002FE8_Vtx_fused_.inc.c"
};

Gfx men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL[91] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL.inc.c"
};

u64 men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL_00003B78_CITex[TEX_LEN(u64, men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL_00003B78_CITex_WIDTH, men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL_00003B78_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03003858_DL_00003B78_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL_00004378_CITex[TEX_LEN(u64, men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL_00004378_CITex_WIDTH, men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL_00004378_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_030004B0_DL_00004378_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL_00004B78_CITex[TEX_LEN(u64, men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL_00004B78_CITex_WIDTH, men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL_00004B78_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_2_03000180_RoomShapeCullable_0300018C_CullableEntries_03000870_DL_00004B78_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room2.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
