#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19.h"
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

SceneCmd HAKAdan_room_19[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19.inc.c"
};

s16 HAKAdan_room_19_03000040_ObjectList[LENGTH_HAKAdan_room_19_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_19_0300004C_ActorEntryList[LENGTH_HAKAdan_room_19_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_0300004C_ActorEntryList.inc.c"
};

u8 HAKAdan_room_19_zeros_00009C[4] = { 0 };

RoomShapeNormal HAKAdan_room_19_030000A0_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries[LENGTH_HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries.inc.c"
};

u8 HAKAdan_room_19_unaccounted_0000B4[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_unaccounted_0000B4.bin.inc.c"
};

Vtx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03000230_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03000230_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03000230_DL[39] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03000230_DL.inc.c"
};

Vtx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_030008D8_DL_03000368_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_030008D8_DL_03000368_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_030008D8_DL[57] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_030008D8_DL.inc.c"
};

Vtx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL_03000AA0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL_03000AA0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL[60] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL.inc.c"
};

Vtx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL_03001360_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL_03001360_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL[24] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL.inc.c"
};

Gfx HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL[5] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL.inc.c"
};

u64 HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL_00001518_Tex[TEX_LEN(u64, HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL_00001518_Tex_WIDTH, HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL_00001518_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001430_DL_00001518_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL_00002518_Tex[TEX_LEN(u64, HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL_00002518_Tex_WIDTH, HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL_00002518_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_19_030000A0_RoomShapeNormal_030000AC_DListsEntries_030014F0_DL_03001180_DL_00002518_Tex.rgba16.inc.c"
};

u8 HAKAdan_room_19_zeros_002D18[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room19_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room19_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room19.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
