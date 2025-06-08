#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4.h"
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd MIZUsin_room_4[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4.inc.c"
};

s16 MIZUsin_room_4_03000040_ObjectList[LENGTH_MIZUsin_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_4_03000054_ActorEntryList[LENGTH_MIZUsin_room_4_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable MIZUsin_room_4_03000110_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries[LENGTH_MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries.inc.c"
};

Vtx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000740_DL_03000170_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000740_DL_03000170_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000740_DL[61] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000740_DL.inc.c"
};

Vtx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL_03000928_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL_03000928_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL[35] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL.inc.c"
};

Vtx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL_03000BB0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL_03000BB0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL[58] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL.inc.c"
};

Vtx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL_03001500_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL_03001500_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL[26] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL.inc.c"
};

Vtx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_03001750_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_03001750_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL[138] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL_000027E0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL_000027E0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL_000027E0_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001680_DL_000027E0_Tex.i4.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00002FE0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00002FE0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00002FE0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00002FE0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL_000037E0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL_000037E0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL_000037E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03001330_DL_000037E0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL_00003FE0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL_00003FE0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL_00003FE0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000A98_DL_00003FE0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000047E0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000047E0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000047E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000047E0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00004FE0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00004FE0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00004FE0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_00004FE0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000057E0_Tex[TEX_LEN(u64, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000057E0_Tex_WIDTH, MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000057E0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002360_DL_000057E0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
