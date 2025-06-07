#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3.h"
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

SceneCmd jyasinzou_room_3[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3.inc.c"
};

s16 jyasinzou_room_3_03000040_ObjectList[LENGTH_jyasinzou_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_03000040_ObjectList.inc.c"
};

ActorEntry jyasinzou_room_3_0300004C_ActorEntryList[LENGTH_jyasinzou_room_3_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_0300004C_ActorEntryList.inc.c"
};

u8 jyasinzou_room_3_zeros_0000BC[4] = { 0 };

RoomShapeCullable jyasinzou_room_3_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

u8 jyasinzou_room_3_unaccounted_00010C[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_unaccounted_00010C.bin.inc.c"
};

Vtx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_030001D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_030001D0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL[176] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL.inc.c"
};

Vtx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030010D0_DL_03000F70_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030010D0_DL_03000F70_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030010D0_DL[35] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030010D0_DL.inc.c"
};

Vtx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001508_DL_030011E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001508_DL_030011E8_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001508_DL[78] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001508_DL.inc.c"
};

Vtx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL_03001778_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL_03001778_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL[129] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL.inc.c"
};

u8 jyasinzou_room_3_unaccounted_001F20[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_unaccounted_001F20.bin.inc.c"
};

u64 jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL_00001F48_CITex[TEX_LEN(u64, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL_00001F48_CITex_WIDTH, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL_00001F48_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001B18_DL_00001F48_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

u64 jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002348_CITex[TEX_LEN(u64, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002348_CITex_WIDTH, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002348_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002348_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00017C00_TLUT.inc.c"
};

u64 jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002B48_CITex[TEX_LEN(u64, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002B48_CITex_WIDTH, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002B48_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00002B48_CITex.ci4.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018000_TLUT.inc.c"
};

u64 jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00003348_CITex[TEX_LEN(u64, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00003348_CITex_WIDTH, jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00003348_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_3_030000C0_RoomShapeCullable_030000CC_CullableEntries_030009F0_DL_00003348_CITex.ci4.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03001650_DL_00018020_TLUT.inc.c"
};

u8 jyasinzou_room_3_zeros_003B48[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
