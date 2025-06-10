#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11.h"
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

SceneCmd Bmori1_room_11[] = {
#include "assets/scenes/dungeons_mq/Bmori1/Bmori1_room_11.inc.c"
};

s16 Bmori1_room_11_03000040_ObjectList[LENGTH_Bmori1_room_11_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_11_03000058_ActorEntryList[LENGTH_Bmori1_room_11_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_11_03000140_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries[LENGTH_Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03002610_DL_030001D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03002610_DL_030001D0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03002610_DL[472] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03002610_DL.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL_030034D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL_030034D0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL[885] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL_03007388_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL_03007388_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL[30] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL_030076F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL_030076F8_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL[26] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007BD8_DL_03007908_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007BD8_DL_03007908_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007BD8_DL[69] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007BD8_DL.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL_03007E00_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL_03007E00_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL[30] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL_03007FD0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL_03007FD0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL[23] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL.inc.c"
};

u64 Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL_00008188_Tex[TEX_LEN(u64, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL_00008188_Tex_WIDTH, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL_00008188_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03008090_DL_00008188_Tex.rgba16.inc.c"
};

u64 Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL_00009188_CITex[TEX_LEN(u64, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL_00009188_CITex_WIDTH, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL_00009188_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007EE0_DL_00009188_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

u64 Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL_00009588_Tex[TEX_LEN(u64, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL_00009588_Tex_WIDTH, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL_00009588_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007608_DL_00009588_Tex.rgba16.inc.c"
};

u64 Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL_00009D88_Tex[TEX_LEN(u64, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL_00009D88_Tex_WIDTH, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL_00009D88_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_03007838_DL_00009D88_Tex.i4.inc.c"
};

u64 Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL_0000A588_CITex[TEX_LEN(u64, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL_0000A588_CITex_WIDTH, Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL_0000A588_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_030057E0_DL_0000A588_CITex.ci8.tlut_Bmori1_room_0_030000A0_RoomShapeCullable_030000AC_CullableEntries_03001D10_DL_00014288_TLUT.inc.c"
};

Vtx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_0300AB30_DL_0300A990_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_0300AB30_DL_0300A990_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_0300AB30_DL[18] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_11_03000140_RoomShapeCullable_0300014C_CullableEntries_0300AB30_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/objects/room11_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/actors/room11_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/Bmori1/mq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
