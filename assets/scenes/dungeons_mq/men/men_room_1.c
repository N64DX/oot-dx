#include "assets/scenes/dungeons/men/men_room_1.h"
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

SceneCmd men_room_1[] = {
#include "assets/scenes/dungeons_mq/men/men_room_1.inc.c"
};

s16 men_room_1_03000040_ObjectList[LENGTH_men_room_1_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_1_03000040_ObjectList.inc.c"
};

ActorEntry men_room_1_0300004C_ActorEntryList[LENGTH_men_room_1_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_1_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_1_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL_03000170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL_03000170_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL[248] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL_03001350_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL_03001350_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL[53] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_03001C78_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_03001C78_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL[50] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_03001F58_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_03001F58_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL[181] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL_03002970_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL_03002970_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL[33] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002FE8_DL_03002CF8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002FE8_DL_03002CF8_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002FE8_DL[36] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002FE8_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003548_DL_03003108_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003548_DL_03003108_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003548_DL[41] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003548_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030037D0_DL_03003690_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030037D0_DL_03003690_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030037D0_DL[31] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030037D0_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003CA8_DL_030038C8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003CA8_DL_030038C8_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003CA8_DL[39] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003CA8_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL_03003DE0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL_03003DE0_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL[32] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL.inc.c"
};

Vtx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL_03004060_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL_03004060_Vtx_fused_.inc.c"
};

Gfx men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL[24] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL_00004290_Tex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL_00004290_Tex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL_00004290_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03003F60_DL_00004290_Tex.rgba16.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00004A90_CITex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00004A90_CITex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00004A90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00004A90_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00005290_CITex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00005290_CITex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00005290_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_030023C8_DL_00005290_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00005A90_CITex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00005A90_CITex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00005A90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00005A90_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL_00006290_Tex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL_00006290_Tex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL_00006290_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002BF0_DL_00006290_Tex.rgba16.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL_00006A90_Tex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL_00006A90_Tex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL_00006A90_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03004170_DL_00006A90_Tex.rgba16.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL_00007290_CITex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL_00007290_CITex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL_00007290_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B90_DL_00007290_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL_00007A90_Tex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL_00007A90_Tex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL_00007A90_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001AD0_DL_00007A90_Tex.rgba16.inc.c"
};

u64 men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00008A90_CITex[TEX_LEN(u64, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00008A90_CITex_WIDTH, men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00008A90_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_1_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001DC8_DL_00008A90_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/men/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/men/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/men/mq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
