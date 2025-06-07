#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5.h"
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

SceneCmd HAKAdan_room_5[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5.inc.c"
};

s16 HAKAdan_room_5_03000040_ObjectList[LENGTH_HAKAdan_room_5_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_5_03000048_ActorEntryList[LENGTH_HAKAdan_room_5_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000048_ActorEntryList.inc.c"
};

u8 HAKAdan_room_5_zeros_000088[8] = { 0 };

RoomShapeNormal HAKAdan_room_5_03000090_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries[LENGTH_HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries.inc.c"
};

u8 HAKAdan_room_5_unaccounted_0000A4[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_unaccounted_0000A4.bin.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL[31] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL_03000288_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL_03000288_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL[140] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002038_DL_03001DE8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002038_DL_03001DE8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002038_DL[39] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002038_DL.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_03002170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_03002170_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL[81] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003338_DL_03003038_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003338_DL_03003038_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003338_DL[48] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003338_DL.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL_030034B8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL_030034B8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL[46] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL.inc.c"
};

Vtx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003B28_DL_03003A48_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003B28_DL_03003A48_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003B28_DL[31] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03003B28_DL.inc.c"
};

Gfx HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL[8] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL.inc.c"
};

u64 HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00003C60_Tex[TEX_LEN(u64, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00003C60_Tex_WIDTH, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00003C60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00003C60_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL_00004060_Tex[TEX_LEN(u64, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL_00004060_Tex_WIDTH, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL_00004060_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03000190_DL_00004060_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00004860_Tex[TEX_LEN(u64, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00004860_Tex_WIDTH, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00004860_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03002DB0_DL_00004860_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL_00004A60_Tex[TEX_LEN(u64, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL_00004A60_Tex_WIDTH, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL_00004A60_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_030038D8_DL_00004A60_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL_00005260_Tex[TEX_LEN(u64, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL_00005260_Tex_WIDTH, HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL_00005260_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_5_03000090_RoomShapeNormal_0300009C_DListsEntries_03003C20_DL_03001988_DL_00005260_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
