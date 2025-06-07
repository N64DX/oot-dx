#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14.h"
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd MIZUsin_room_14[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14.inc.c"
};

s16 MIZUsin_room_14_03000040_ObjectList[LENGTH_MIZUsin_room_14_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_14_03000058_ActorEntryList[LENGTH_MIZUsin_room_14_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000058_ActorEntryList.inc.c"
};

u8 MIZUsin_room_14_zeros_000128[8] = { 0 };

RoomShapeCullable MIZUsin_room_14_03000130_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries[LENGTH_MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries.inc.c"
};

u8 MIZUsin_room_14_unaccounted_0001AC[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_unaccounted_0001AC.bin.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000430_DL_030001B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000430_DL_030001B0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000430_DL[38] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000430_DL.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_030009C0_DL_03000560_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_030009C0_DL_03000560_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_030009C0_DL[49] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_030009C0_DL.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL_03000B48_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL_03000B48_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL[34] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL_03000D58_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL_03000D58_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL[23] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL_03000ED0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL_03000ED0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL[31] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_03001088_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_03001088_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL[459] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL.inc.c"
};

Vtx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL_03003380_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL_03003380_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL[36] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL.inc.c"
};

u8 MIZUsin_room_14_unaccounted_003620[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_unaccounted_003620.bin.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL_00003660_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL_00003660_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL_00003660_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000E18_DL_00003660_Tex.i4.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL_00003E60_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL_00003E60_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL_00003E60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000F90_DL_00003E60_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004660_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004660_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004660_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004660_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004E60_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004E60_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004E60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00004E60_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00005660_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00005660_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00005660_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03002528_DL_00005660_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL_00005E60_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL_00005E60_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL_00005E60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03003500_DL_00005E60_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL_00006660_Tex[TEX_LEN(u64, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL_00006660_Tex_WIDTH, MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL_00006660_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_14_03000130_RoomShapeCullable_0300013C_CullableEntries_03000C48_DL_00006660_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room14_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room14_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room14.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
