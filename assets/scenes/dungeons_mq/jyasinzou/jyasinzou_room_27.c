#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27.h"
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd jyasinzou_room_27[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/jyasinzou_room_27.inc.c"
};

s16 jyasinzou_room_27_03000040_ObjectList[LENGTH_jyasinzou_room_27_03000040_ObjectList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_03000040_ObjectList.inc.c"
};

ActorEntry jyasinzou_room_27_03000048_ActorEntryList[LENGTH_jyasinzou_room_27_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_03000048_ActorEntryList.inc.c"
};

RoomShapeCullable jyasinzou_room_27_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000310_DL_030001D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000310_DL_030001D0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000310_DL[31] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000310_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000548_DL_03000408_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000548_DL_03000408_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000548_DL[32] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000548_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000A88_DL_03000648_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000A88_DL_03000648_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000A88_DL[49] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000A88_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000D70_DL_03000C10_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000D70_DL_03000C10_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000D70_DL[33] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000D70_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F28_DL_03000E78_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F28_DL_03000E78_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F28_DL[29] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F28_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030010D0_DL_03001010_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030010D0_DL_03001010_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030010D0_DL[16] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030010D0_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_03001150_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_03001150_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL[427] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030030E8_DL_030029B8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030030E8_DL_030029B8_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030030E8_DL[401] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_030030E8_DL.inc.c"
};

Vtx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL_03003D70_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL_03003D70_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL[46] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL.inc.c"
};

u64 jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_000042C0_CITex[TEX_LEN(u64, jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_000042C0_CITex_WIDTH, jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_000042C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_000042C0_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

u64 jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL_00004AC0_CITex[TEX_LEN(u64, jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL_00004AC0_CITex_WIDTH, jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL_00004AC0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03004100_DL_00004AC0_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

u64 jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_00004EC0_CITex[TEX_LEN(u64, jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_00004EC0_CITex_WIDTH, jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_00004EC0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001C60_DL_00004EC0_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/objects/room27_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/actors/room27_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/jyasinzou/mq/headers/room27.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
