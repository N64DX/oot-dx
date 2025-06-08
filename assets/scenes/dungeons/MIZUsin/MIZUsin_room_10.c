#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10.h"
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

SceneCmd MIZUsin_room_10[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10.inc.c"
};

s16 MIZUsin_room_10_03000040_ObjectList[LENGTH_MIZUsin_room_10_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_10_03000058_ActorEntryList[LENGTH_MIZUsin_room_10_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable MIZUsin_room_10_030000D0_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries[LENGTH_MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_03000160_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_03000160_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL[192] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001AC0_DL_03001520_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001AC0_DL_03001520_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001AC0_DL[60] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001AC0_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001DA0_DL_03001CA0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001DA0_DL_03001CA0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001DA0_DL[34] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03001DA0_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002110_DL_03001EB0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002110_DL_03001EB0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002110_DL[39] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002110_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002648_DL_03002248_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002648_DL_03002248_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002648_DL[45] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002648_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002F20_DL_030027B0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002F20_DL_030027B0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002F20_DL[61] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002F20_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL_03003108_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL_03003108_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL[32] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL.inc.c"
};

Vtx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03003618_DL_030032D8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03003618_DL_030032D8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03003618_DL[42] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03003618_DL.inc.c"
};

u64 MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL_000037B0_Tex[TEX_LEN(u64, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL_000037B0_Tex_WIDTH, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL_000037B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_030031D8_DL_000037B0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00003FB0_Tex[TEX_LEN(u64, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00003FB0_Tex_WIDTH, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00003FB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00003FB0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000047B0_Tex[TEX_LEN(u64, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000047B0_Tex_WIDTH, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000047B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000047B0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00004FB0_Tex[TEX_LEN(u64, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00004FB0_Tex_WIDTH, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00004FB0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_00004FB0_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000057B0_Tex[TEX_LEN(u64, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000057B0_Tex_WIDTH, MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000057B0_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_10_030000D0_RoomShapeCullable_030000DC_CullableEntries_03000F20_DL_000057B0_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
