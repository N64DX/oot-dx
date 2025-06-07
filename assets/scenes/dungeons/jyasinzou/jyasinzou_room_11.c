#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11.h"
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"

static SceneCmd* questHeaders[1];

SceneCmd jyasinzou_room_11[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11.inc.c"
};

s16 jyasinzou_room_11_03000038_ObjectList[LENGTH_jyasinzou_room_11_03000038_ObjectList] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000038_ObjectList.inc.c"
};

RoomShapeCullable jyasinzou_room_11_03000040_RoomShapeCullable = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries[LENGTH_jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries.inc.c"
};

u8 jyasinzou_room_11_unaccounted_00006C[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_unaccounted_00006C.bin.inc.c"
};

Vtx jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL[72] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL.inc.c"
};

u8 jyasinzou_room_11_unaccounted_000770[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_unaccounted_000770.bin.inc.c"
};

u64 jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL_00000780_CITex[TEX_LEN(u64, jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL_00000780_CITex_WIDTH, jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL_00000780_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000530_DL_00000780_CITex.ci8.tlut_jyasinzou_room_0_03000160_RoomShapeCullable_0300016C_CullableEntries_03004770_DL_00017E00_TLUT.inc.c"
};

Vtx jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000E40_DL_03000B80_Vtx_fused_[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000E40_DL_03000B80_Vtx_fused_.inc.c"
};

Gfx jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000E40_DL[56] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_03000040_RoomShapeCullable_0300004C_CullableEntries_03000E40_DL.inc.c"
};

u8 jyasinzou_room_11_unaccounted_001000[] = {
#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_11_unaccounted_001000.bin.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room11_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
