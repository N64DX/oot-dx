#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6.h"
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

SceneCmd HAKAdan_room_6[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6.inc.c"
};

s16 HAKAdan_room_6_03000040_ObjectList[LENGTH_HAKAdan_room_6_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_6_03000048_ActorEntryList[LENGTH_HAKAdan_room_6_03000048_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000048_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_6_03000100_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries[LENGTH_HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries.inc.c"
};

Vtx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03001AC0_DL_03000120_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03001AC0_DL_03000120_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03001AC0_DL[155] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03001AC0_DL.inc.c"
};

Vtx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_03001F98_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_03001F98_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL[284] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL.inc.c"
};

Vtx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL_030049D8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL_030049D8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL[23] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL.inc.c"
};

Gfx HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL[4] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL.inc.c"
};

u64 HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL_00004B70_Tex[TEX_LEN(u64, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL_00004B70_Tex_WIDTH, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL_00004B70_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_03004A98_DL_00004B70_Tex.i4.inc.c"
};

u64 HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005370_Tex[TEX_LEN(u64, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005370_Tex_WIDTH, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005370_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005370_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005570_Tex[TEX_LEN(u64, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005570_Tex_WIDTH, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005570_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00005570_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006570_Tex[TEX_LEN(u64, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006570_Tex_WIDTH, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006570_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006570_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006D70_Tex[TEX_LEN(u64, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006D70_Tex_WIDTH, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006D70_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00006D70_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00007170_Tex[TEX_LEN(u64, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00007170_Tex_WIDTH, HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00007170_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_6_03000100_RoomShapeNormal_0300010C_DListsEntries_03004B50_DL_030040F8_DL_00007170_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
