#include "assets/scenes/dungeons/ganontika/ganontika_room_0.h"
#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ganontika_room_0[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0.inc.c"
};

s16 ganontika_room_0_03000040_ObjectList[LENGTH_ganontika_room_0_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_03000040_ObjectList.inc.c"
};

ActorEntry ganontika_room_0_0300004C_ActorEntryList[LENGTH_ganontika_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable ganontika_room_0_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_030001E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_030001E0_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL[102] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000AE0_DL_03000830_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000AE0_DL_03000830_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000AE0_DL[73] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000AE0_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001038_DL_03000D28_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001038_DL_03000D28_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001038_DL[103] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001038_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL_03001370_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL_03001370_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL[75] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001620_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002258_DL_03001878_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002258_DL_03001878_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002258_DL[114] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002258_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002F48_DL_030025E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002F48_DL_030025E8_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002F48_DL[110] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002F48_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003608_DL_030032B8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003608_DL_030032B8_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003608_DL[79] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003608_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003BD0_DL_03003880_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003BD0_DL_03003880_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003BD0_DL[88] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03003BD0_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03004810_DL_03003E90_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03004810_DL_03003E90_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03004810_DL[114] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03004810_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL_03004BA0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL_03004BA0_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL[233] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005260_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL_030059A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL_030059A8_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL[78] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03005E78_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030065B8_DL_030060E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030065B8_DL_030060E8_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030065B8_DL[78] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030065B8_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03006CF8_DL_03006828_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03006CF8_DL_03006828_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03006CF8_DL[78] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03006CF8_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007438_DL_03006F68_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007438_DL_03006F68_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007438_DL[78] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007438_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007998_DL_030076A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007998_DL_030076A8_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007998_DL[39] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007998_DL.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007D50_DL_03007AD0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007D50_DL_03007AD0_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007D50_DL[36] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03007D50_DL.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00007EF8_CITex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00007EF8_CITex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00007EF8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_00007EF8_CITex.ci8.tlut_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.inc.c"
};

Vtx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL_03008700_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL_03008700_Vtx_fused_.inc.c"
};

Gfx ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL[30] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL.inc.c"
};

u64 ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL_000089C0_Tex[TEX_LEN(u64, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL_000089C0_Tex_WIDTH, ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL_000089C0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_030088C0_DL_000089C0_Tex.ia16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
