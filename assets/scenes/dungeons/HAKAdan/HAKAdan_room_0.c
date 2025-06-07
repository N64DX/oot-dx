#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0.h"
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

SceneCmd HAKAdan_room_0[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0.inc.c"
};

s16 HAKAdan_room_0_03000040_ObjectList[LENGTH_HAKAdan_room_0_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_0_03000048_ActorEntryList[LENGTH_HAKAdan_room_0_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000048_ActorEntryList.inc.c"
};

u8 HAKAdan_room_0_zeros_000188[8] = { 0 };

RoomShapeNormal HAKAdan_room_0_03000190_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries[LENGTH_HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries.inc.c"
};

u8 HAKAdan_room_0_unaccounted_0001A4[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_unaccounted_0001A4.bin.inc.c"
};

Vtx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_030001B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_030001B0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL[85] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL.inc.c"
};

Vtx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_03000F18_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_03000F18_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL[539] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL.inc.c"
};

Vtx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_030037B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL_030037B0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL[90] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03004530_DL.inc.c"
};

Vtx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03005F60_DL_03004800_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03005F60_DL_03004800_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03005F60_DL[539] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03005F60_DL.inc.c"
};

Vtx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03007E38_DL_03007038_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03007E38_DL_03007038_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03007E38_DL[103] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03007E38_DL.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL[6] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000081A0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000081A0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000081A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000081A0_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000091A0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000091A0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000091A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_030026D8_DL_000091A0_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_0000A1A0_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_0000A1A0_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_0000A1A0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_03008170_DL_03000C70_DL_0000A1A0_Tex.rgba16.inc.c"
};

Vtx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL_0300A9A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL_0300A9A0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL[31] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL.inc.c"
};

Gfx HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL[2] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL.inc.c"
};

u64 HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL_0000ACB8_Tex[TEX_LEN(u64, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL_0000ACB8_Tex_WIDTH, HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL_0000ACB8_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_0_03000190_RoomShapeNormal_0300019C_DListsEntries_0300ACA8_DL_0300ABB0_DL_0000ACB8_Tex.ia8.inc.c"
};

u8 HAKAdan_room_0_zeros_00B0B8[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
