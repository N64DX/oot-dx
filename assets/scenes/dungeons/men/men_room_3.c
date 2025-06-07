#include "assets/scenes/dungeons/men/men_room_3.h"
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

SceneCmd men_room_3[] = {
#include "assets/scenes/dungeons/men/men_room_3.inc.c"
};

s16 men_room_3_03000040_ObjectList[LENGTH_men_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_3_03000040_ObjectList.inc.c"
};

ActorEntry men_room_3_03000050_ActorEntryList[LENGTH_men_room_3_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_3_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_3_03000130_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries[LENGTH_men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries.inc.c"
};

u8 men_room_3_unaccounted_00016C[] = {
#include "assets/scenes/dungeons/men/men_room_3_unaccounted_00016C.bin.inc.c"
};

Vtx men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_03000170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_03000170_Vtx_fused_.inc.c"
};

Gfx men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL[413] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL.inc.c"
};

Vtx men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03002738_DL_030023F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03002738_DL_030023F8_Vtx_fused_.inc.c"
};

Gfx men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03002738_DL[34] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03002738_DL.inc.c"
};

Vtx men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03003188_DL_03002848_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03003188_DL_03002848_Vtx_fused_.inc.c"
};

Gfx men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03003188_DL[207] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03003188_DL.inc.c"
};

u8 men_room_3_unaccounted_003800[] = {
#include "assets/scenes/dungeons/men/men_room_3_unaccounted_003800.bin.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00003820_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00003820_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00003820_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00003820_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004020_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004020_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004020_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004020_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004820_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004820_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004820_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00004820_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005020_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005020_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005020_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005020_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005820_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005820_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005820_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005820_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005C20_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005C20_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005C20_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00005C20_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00006420_Tex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00006420_Tex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00006420_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00006420_Tex.rgba16.inc.c"
};

u64 men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00007420_CITex[TEX_LEN(u64, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00007420_CITex_WIDTH, men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00007420_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_3_03000130_RoomShapeCullable_0300013C_CullableEntries_03001710_DL_00007420_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
