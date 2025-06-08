#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8.h"
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

SceneCmd HAKAdan_room_8[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8.inc.c"
};

s16 HAKAdan_room_8_03000040_ObjectList[LENGTH_HAKAdan_room_8_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_03000040_ObjectList.inc.c"
};

ActorEntry HAKAdan_room_8_03000054_ActorEntryList[LENGTH_HAKAdan_room_8_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_03000054_ActorEntryList.inc.c"
};

RoomShapeNormal HAKAdan_room_8_030000C0_RoomShapeNormal = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal.inc.c"
};

RoomShapeDListsEntry HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries[LENGTH_HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries.inc.c"
};

Vtx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL[107] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL.inc.c"
};

Vtx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL_03001188_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL_03001188_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL[96] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL.inc.c"
};

Vtx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_030023D8_DL_03001FA8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_030023D8_DL_03001FA8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_030023D8_DL[58] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_030023D8_DL.inc.c"
};

Vtx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_030025A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_030025A8_Vtx_fused_.inc.c"
};

Gfx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL[117] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL.inc.c"
};

Gfx HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL[5] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL.inc.c"
};

u64 HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00003058_Tex[TEX_LEN(u64, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00003058_Tex_WIDTH, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00003058_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00003058_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00003258_Tex[TEX_LEN(u64, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00003258_Tex_WIDTH, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00003258_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00003258_Tex.ia4.inc.c"
};

u64 HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL_00004258_Tex[TEX_LEN(u64, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL_00004258_Tex_WIDTH, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL_00004258_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03001CA8_DL_00004258_Tex.rgba16.inc.c"
};

u64 HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00004A58_Tex[TEX_LEN(u64, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00004A58_Tex_WIDTH, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00004A58_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03002C88_DL_00004A58_Tex.i4.inc.c"
};

u64 HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00004C58_Tex[TEX_LEN(u64, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00004C58_Tex_WIDTH, HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00004C58_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_8_030000C0_RoomShapeNormal_030000CC_DListsEntries_03003030_DL_03000E30_DL_00004C58_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room8_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room8_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room8.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
