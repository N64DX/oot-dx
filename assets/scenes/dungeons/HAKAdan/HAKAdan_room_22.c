#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22.h"
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HAKAdan_room_22[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22.inc.c"
};

s16 HAKAdan_room_22_03000038_ObjectList[LENGTH_HAKAdan_room_22_03000038_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000038_ObjectList.inc.c"
};

RoomShapeNormal HAKAdan_room_22_03000040_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries[LENGTH_HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries.inc.c"
};

u8 HAKAdan_room_22_unaccounted_000054[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_unaccounted_000054.bin.inc.c"
};

Vtx HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_03000060_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_03000060_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL[147] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL.inc.c"
};

Gfx HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL[2] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL.inc.c"
};

u64 HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00000F98_Tex[TEX_LEN(u64, HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00000F98_Tex_WIDTH, HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00000F98_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00000F98_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00001198_Tex[TEX_LEN(u64, HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00001198_Tex_WIDTH, HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00001198_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00001198_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00002198_Tex[TEX_LEN(u64, HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00002198_Tex_WIDTH, HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00002198_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22_03000040_RoomShapeNormal_0300004C_DListsEntries_03000F88_DL_03000AF0_DL_00002198_Tex.rgba16.inc.c"
};

u8 HAKAdan_room_22_zeros_002998[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room22_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room22.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
