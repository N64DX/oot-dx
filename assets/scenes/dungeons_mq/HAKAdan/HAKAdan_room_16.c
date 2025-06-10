#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16.h"
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

SceneCmd HAKAdan_room_16[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/HAKAdan_room_16.inc.c"
};

s16 HAKAdan_room_16_03000040_ObjectList[LENGTH_HAKAdan_room_16_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_16_0300005C_ActorEntryList[LENGTH_HAKAdan_room_16_0300005C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_0300005C_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_16_03000130_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries[LENGTH_HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries.inc.c"
};

Vtx HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_03001350_DL_03000150_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_03001350_DL_03000150_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_03001350_DL[113] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_03001350_DL.inc.c"
};

Vtx HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL_030016D8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL_030016D8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL[24] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL.inc.c"
};

Gfx HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL[3] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL.inc.c"
};

u64 HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL_00001880_Tex[TEX_LEN(u64, HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL_00001880_Tex_WIDTH, HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL_00001880_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_16_03000130_RoomShapeNormal_0300013C_DListsEntries_03001868_DL_030017A8_DL_00001880_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/objects/room16_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/actors/room16_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons_mq/HAKAdan/mq/headers/room16.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons_mq/questHeaders.inc.c"
};
