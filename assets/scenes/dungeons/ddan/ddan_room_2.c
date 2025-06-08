#include "assets/scenes/dungeons/ddan/ddan_room_2.h"
#include "assets/scenes/dungeons/ddan/ddan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ddan_room_2[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2.inc.c"
};

s16 ddan_room_2_03000040_ObjectList[LENGTH_ddan_room_2_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000040_ObjectList.inc.c"
};

ActorEntry ddan_room_2_0300004C_ActorEntryList[LENGTH_ddan_room_2_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable ddan_room_2_03000200_RoomShapeCullable = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries[LENGTH_ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries.inc.c"
};

Vtx ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_03000240_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_03000240_Vtx_fused_.inc.c"
};

Gfx ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL[509] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL.inc.c"
};

Vtx ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_030034A8_DL_030029F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_030034A8_DL_030029F8_Vtx_fused_.inc.c"
};

Gfx ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_030034A8_DL[180] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_030034A8_DL.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00003A60_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00003A60_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00003A60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00003A60_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004260_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004260_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004260_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004260_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004660_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004660_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004660_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004660_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004A60_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004A60_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004A60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00004A60_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005260_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005260_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005260_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005260_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005A60_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005A60_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005A60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005A60_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005E60_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005E60_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005E60_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00005E60_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00006260_CITex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00006260_CITex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00006260_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03001A10_DL_00006260_CITex.ci8.tlut_gDCSceneTLUT.inc.c"
};

Vtx ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL_03006660_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL_03006660_Vtx_fused_.inc.c"
};

Gfx ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL[63] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL.inc.c"
};

u64 ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL_00006D98_Tex[TEX_LEN(u64, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL_00006D98_Tex_WIDTH, ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL_00006D98_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ddan/ddan_room_2_03000200_RoomShapeCullable_0300020C_CullableEntries_03006B90_DL_00006D98_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room2.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
