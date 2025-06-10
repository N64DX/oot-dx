#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13.h"
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

SceneCmd HAKAdan_room_13[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/HAKAdan_room_13.inc.c"
};

s16 HAKAdan_room_13_03000040_ObjectList[LENGTH_HAKAdan_room_13_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_13_03000048_ActorEntryList[LENGTH_HAKAdan_room_13_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_03000048_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_13_030000C0_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries[LENGTH_HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries.inc.c"
};

Vtx HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_030003E0_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_030003E0_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_030003E0_DL[42] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_030003E0_DL.inc.c"
};

Vtx HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL_03000530_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL_03000530_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL[36] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL.inc.c"
};

Gfx HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL[3] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL.inc.c"
};

u64 HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL_000007A8_Tex[TEX_LEN(u64, HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL_000007A8_Tex_WIDTH, HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL_000007A8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_13_030000C0_RoomShapeNormal_030000CC_DListsEntries_03000790_DL_03000670_DL_000007A8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/headers/room13.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
