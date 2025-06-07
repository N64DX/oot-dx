#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7.h"
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

SceneCmd jyasinzou_room_7[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7.inc.c"
};

s16 jyasinzou_room_7_03000040_ObjectList[LENGTH_jyasinzou_room_7_03000040_ObjectList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_03000040_ObjectList.inc.c"
};

ActorEntry jyasinzou_room_7_03000044_ActorEntryList[LENGTH_jyasinzou_room_7_03000044_ActorEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_03000044_ActorEntryList.inc.c"
};

u8 jyasinzou_room_7_zeros_0000A4[12] = { 0 };

RoomShapeCullable jyasinzou_room_7_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

u8 jyasinzou_room_7_unaccounted_00016C[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_unaccounted_00016C.bin.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_03000230_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_03000230_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL[36] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000610_DL_030004B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000610_DL_030004B0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000610_DL[36] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000610_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000890_DL_03000730_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000890_DL_03000730_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000890_DL[36] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000890_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B10_DL_030009B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B10_DL_030009B0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B10_DL[36] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000B10_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D90_DL_03000C30_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D90_DL_03000C30_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D90_DL[36] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000D90_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001010_DL_03000EB0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001010_DL_03000EB0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001010_DL[36] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001010_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL_03001130_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL_03001130_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL[66] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL_03001520_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL_03001520_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL[51] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001FD8_DL_03001B18_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001FD8_DL_03001B18_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001FD8_DL[77] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001FD8_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002340_DL_03002240_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002340_DL_03002240_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002340_DL[30] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002340_DL.inc.c"
};

Vtx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL_03002430_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL_03002430_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL[79] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL.inc.c"
};

u8 jyasinzou_room_7_unaccounted_0028A8[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_unaccounted_0028A8.bin.inc.c"
};

u64 jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00002908_Tex[TEX_LEN(u64, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00002908_Tex_WIDTH, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00002908_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00002908_Tex.rgba16.inc.c"
};

u64 jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL_00003908_CITex[TEX_LEN(u64, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL_00003908_CITex_WIDTH, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL_00003908_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001310_DL_00003908_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.inc.c"
};

u64 jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL_00004108_CITex[TEX_LEN(u64, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL_00004108_CITex_WIDTH, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL_00004108_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03001980_DL_00004108_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.inc.c"
};

u64 jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00004908_Tex[TEX_LEN(u64, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00004908_Tex_WIDTH, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00004908_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03000390_DL_00004908_Tex.rgba16.inc.c"
};

u64 jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL_00004D08_CITex[TEX_LEN(u64, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL_00004D08_CITex_WIDTH, jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL_00004D08_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7_030000B0_RoomShapeCullable_030000BC_CullableEntries_03002630_DL_00004D08_CITex.ci4.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018020_TLUT.inc.c"
};

u8 jyasinzou_room_7_zeros_005508[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room7.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
