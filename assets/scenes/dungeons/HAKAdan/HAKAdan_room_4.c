#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4.h"
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

SceneCmd HAKAdan_room_4[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4.inc.c"
};

s16 HAKAdan_room_4_03000040_ObjectList[LENGTH_HAKAdan_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_4_0300004C_ActorEntryList[LENGTH_HAKAdan_room_4_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_0300004C_ActorEntryList.inc.c"
};

u8 HAKAdan_room_4_zeros_0000CC[4] = { 0 };

RoomShapeNormal HAKAdan_room_4_030000D0_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries[LENGTH_HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries.inc.c"
};

u8 HAKAdan_room_4_unaccounted_0000E4[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_unaccounted_0000E4.bin.inc.c"
};

Vtx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000260_DL_030000F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000260_DL_030000F0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000260_DL[39] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000260_DL.inc.c"
};

Vtx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000838_DL_03000398_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000838_DL_03000398_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000838_DL[51] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03000838_DL.inc.c"
};

Vtx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL_030009D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL_030009D0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL[65] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL.inc.c"
};

Gfx HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL[4] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL.inc.c"
};

u64 HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL_00001438_Tex[TEX_LEN(u64, HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL_00001438_Tex_WIDTH, HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL_00001438_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_4_030000D0_RoomShapeNormal_030000DC_DListsEntries_03001418_DL_03001210_DL_00001438_Tex.rgba16.inc.c"
};

u8 HAKAdan_room_4_zeros_001C38[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
