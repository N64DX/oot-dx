#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3.h"
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

SceneCmd MIZUsin_room_3[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3.inc.c"
};

s16 MIZUsin_room_3_03000040_ObjectList[LENGTH_MIZUsin_room_3_03000040_ObjectList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000040_ObjectList.inc.c"
};

ActorEntry MIZUsin_room_3_03000058_ActorEntryList[LENGTH_MIZUsin_room_3_03000058_ActorEntryList] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000058_ActorEntryList.inc.c"
};

RoomShapeCullable MIZUsin_room_3_03000150_RoomShapeCullable = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries[LENGTH_MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL_030001E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL_030001E0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL[36] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000740_DL_03000430_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000740_DL_03000430_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000740_DL[44] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000740_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000A10_DL_030008A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000A10_DL_030008A0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000A10_DL[34] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000A10_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001200_DL_03000B20_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001200_DL_03000B20_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001200_DL[61] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001200_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030015A8_DL_030013E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030015A8_DL_030013E8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030015A8_DL[40] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030015A8_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001DE8_DL_030016E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001DE8_DL_030016E8_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001DE8_DL[59] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03001DE8_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL_03001FC0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL_03001FC0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL[34] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL.inc.c"
};

Vtx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_030021F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_030021F0_Vtx_fused_.inc.c"
};

Gfx MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL[212] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL.inc.c"
};

u64 MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00003708_Tex[TEX_LEN(u64, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00003708_Tex_WIDTH, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00003708_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00003708_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL_00003F08_Tex[TEX_LEN(u64, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL_00003F08_Tex_WIDTH, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL_00003F08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_030020E0_DL_00003F08_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL_00004708_Tex[TEX_LEN(u64, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL_00004708_Tex_WIDTH, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL_00004708_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03000310_DL_00004708_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00004F08_Tex[TEX_LEN(u64, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00004F08_Tex_WIDTH, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00004F08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00004F08_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005708_Tex[TEX_LEN(u64, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005708_Tex_WIDTH, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005708_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005708_Tex.rgba16.inc.c"
};

u64 MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005F08_Tex[TEX_LEN(u64, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005F08_Tex_WIDTH, MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005F08_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3_03000150_RoomShapeCullable_0300015C_CullableEntries_03003020_DL_00005F08_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
