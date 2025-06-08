#include "assets/scenes/dungeons/ydan/ydan_room_4.h"
#include "assets/scenes/dungeons/ydan/ydan_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ydan_room_4[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4.inc.c"
};

s16 ydan_room_4_03000040_ObjectList[LENGTH_ydan_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_03000040_ObjectList.inc.c"
};

ActorEntry ydan_room_4_03000054_ActorEntryList[LENGTH_ydan_room_4_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable ydan_room_4_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

Vtx ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_030000F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_030000F0_Vtx_fused_.inc.c"
};

Gfx ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL[274] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL.inc.c"
};

u64 ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000018C0_CITex[TEX_LEN(u64, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000018C0_CITex_WIDTH, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000018C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000018C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000020C0_CITex[TEX_LEN(u64, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000020C0_CITex_WIDTH, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000020C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000020C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000028C0_CITex[TEX_LEN(u64, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000028C0_CITex_WIDTH, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000028C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000028C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000030C0_CITex[TEX_LEN(u64, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000030C0_CITex_WIDTH, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000030C0_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001020_DL_000030C0_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

Vtx ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL_030038C0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL_030038C0_Vtx_fused_.inc.c"
};

Gfx ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL[31] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL.inc.c"
};

u64 ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL_00003BC8_Tex[TEX_LEN(u64, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL_00003BC8_Tex_WIDTH, ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL_00003BC8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_4_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003AC0_DL_00003BC8_Tex.ia16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
