#include "assets/scenes/dungeons/men/men_room_4.h"
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

SceneCmd men_room_4[] = {
#include "assets/scenes/dungeons_mq/men/men_room_4.inc.c"
};

s16 men_room_4_03000040_ObjectList[LENGTH_men_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_4_03000040_ObjectList.inc.c"
};

ActorEntry men_room_4_03000050_ActorEntryList[LENGTH_men_room_4_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_4_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_4_030000F0_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries[LENGTH_men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_03000170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_03000170_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL[111] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL_03000DF8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL_03000DF8_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL[51] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_030016D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_030016D0_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL[383] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03003E68_DL_03003AA8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03003E68_DL_03003AA8_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03003E68_DL[45] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03003E68_DL.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL_03003FD0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL_03003FD0_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL[68] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004BA0_DL_03004840_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004BA0_DL_03004840_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004BA0_DL[77] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004BA0_DL.inc.c"
};

Vtx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL_03004E08_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL_03004E08_Vtx_fused_.inc.c"
};

Gfx men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL[39] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL_00005150_Tex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL_00005150_Tex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL_00005150_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004FD8_DL_00005150_Tex.rgba16.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00005950_Tex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00005950_Tex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00005950_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00005950_Tex.rgba16.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL_00006150_Tex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL_00006150_Tex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL_00006150_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03004620_DL_00006150_Tex.i4.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL_00007150_Tex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL_00007150_Tex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL_00007150_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03001538_DL_00007150_Tex.i4.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00008150_CITex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00008150_CITex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00008150_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00008150_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00008950_Tex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00008950_Tex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00008950_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03002EB0_DL_00008950_Tex.i4.inc.c"
};

u64 men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00009950_CITex[TEX_LEN(u64, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00009950_CITex_WIDTH, men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00009950_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_4_030000F0_RoomShapeCullable_030000FC_CullableEntries_03000A80_DL_00009950_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/men/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/men/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/men/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
