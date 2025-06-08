#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17.h"
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

SceneCmd HAKAdan_room_17[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17.inc.c"
};

s16 HAKAdan_room_17_03000040_ObjectList[LENGTH_HAKAdan_room_17_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_17_0300004C_ActorEntryList[LENGTH_HAKAdan_room_17_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_0300004C_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_17_03000090_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries[LENGTH_HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries.inc.c"
};

Vtx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL[40] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL.inc.c"
};

Vtx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000500_DL_03000430_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000500_DL_03000430_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000500_DL[31] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000500_DL.inc.c"
};

Vtx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_030005F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_030005F8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL[102] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL.inc.c"
};

Vtx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03001018_DL_03000F48_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03001018_DL_03000F48_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03001018_DL[31] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03001018_DL.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL[5] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL.inc.c"
};

u64 HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001138_Tex[TEX_LEN(u64, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001138_Tex_WIDTH, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001138_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001138_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL_00001338_Tex[TEX_LEN(u64, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL_00001338_Tex_WIDTH, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL_00001338_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_030002F0_DL_00001338_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001B38_Tex[TEX_LEN(u64, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001B38_Tex_WIDTH, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001B38_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001B38_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001F38_Tex[TEX_LEN(u64, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001F38_Tex_WIDTH, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001F38_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_03001110_DL_03000C18_DL_00001F38_Tex.rgba16.inc.c"
};

Vtx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL_03002340_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL_03002340_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL[23] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL.inc.c"
};

Gfx HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL[2] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL.inc.c"
};

u64 HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL_000024C8_Tex[TEX_LEN(u64, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL_000024C8_Tex_WIDTH, HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL_000024C8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_17_03000090_RoomShapeNormal_0300009C_DListsEntries_030024B8_DL_03002400_DL_000024C8_Tex.ia16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room17_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room17_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room17.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
