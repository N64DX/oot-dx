#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7.h"
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HAKAdan_room_7[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7.inc.c"
};

s16 HAKAdan_room_7_03000040_ObjectList[LENGTH_HAKAdan_room_7_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_7_03000050_ActorEntryList[LENGTH_HAKAdan_room_7_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_03000050_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_7_030000A0_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries[LENGTH_HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries.inc.c"
};

u8 HAKAdan_room_7_unaccounted_0000B4[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_unaccounted_0000B4.bin.inc.c"
};

Vtx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_03000230_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_03000230_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_03000230_DL[39] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_03000230_DL.inc.c"
};

Vtx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030008B8_DL_03000368_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030008B8_DL_03000368_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030008B8_DL[55] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030008B8_DL.inc.c"
};

Vtx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL_03000A70_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL_03000A70_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL[55] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL.inc.c"
};

Gfx HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL[4] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL.inc.c"
};

u64 HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL_000012A8_Tex[TEX_LEN(u64, HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL_000012A8_Tex_WIDTH, HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL_000012A8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_7_030000A0_RoomShapeNormal_030000AC_DListsEntries_03001288_DL_030010D0_DL_000012A8_Tex.rgba16.inc.c"
};

u8 HAKAdan_room_7_zeros_001AA8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room7.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
