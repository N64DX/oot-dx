#include "assets/scenes/dungeons/men/men_room_8.h"
#include "assets/scenes/dungeons/men/men_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd men_room_8[] = {
#include "assets/scenes/dungeons/men/men_room_8.inc.c"
};

s16 men_room_8_03000040_ObjectList[LENGTH_men_room_8_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_8_03000040_ObjectList.inc.c"
};

ActorEntry men_room_8_03000050_ActorEntryList[LENGTH_men_room_8_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_8_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_8_03000130_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries[LENGTH_men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries.inc.c"
};

u8 men_room_8_unaccounted_0001CC[] = {
#include "assets/scenes/dungeons/men/men_room_8_unaccounted_0001CC.bin.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000310_DL_030001D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000310_DL_030001D0_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000310_DL[34] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000310_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_03000420_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_03000420_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL[234] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_030015F0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_030015F0_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL[128] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL_03002A70_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL_03002A70_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL[127] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03004DE8_DL_03004288_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03004DE8_DL_03004288_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03004DE8_DL[169] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03004DE8_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005450_DL_03005330_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005450_DL_03005330_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005450_DL[24] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005450_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030055D0_DL_03005510_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030055D0_DL_03005510_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030055D0_DL[23] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030055D0_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL_03005688_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL_03005688_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL[33] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL.inc.c"
};

Vtx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005C00_DL_03005AF0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005C00_DL_03005AF0_Vtx_fused_.inc.c"
};

Gfx men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005C00_DL[24] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03005C00_DL.inc.c"
};

u8 men_room_8_unaccounted_005CC0[] = {
#include "assets/scenes/dungeons/men/men_room_8_unaccounted_005CC0.bin.inc.c"
};

u64 men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00005D10_Tex[TEX_LEN(u64, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00005D10_Tex_WIDTH, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00005D10_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00005D10_Tex.rgba16.inc.c"
};

u64 men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL_00006510_Tex[TEX_LEN(u64, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL_00006510_Tex_WIDTH, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL_00006510_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03003E90_DL_00006510_Tex.rgba16.inc.c"
};

u64 men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00006D10_CITex[TEX_LEN(u64, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00006D10_CITex_WIDTH, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00006D10_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00006D10_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00007510_Tex[TEX_LEN(u64, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00007510_Tex_WIDTH, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00007510_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03002670_DL_00007510_Tex.rgba16.inc.c"
};

u64 men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL_00007610_Tex[TEX_LEN(u64, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL_00007610_Tex_WIDTH, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL_00007610_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_030059E8_DL_00007610_Tex.rgba16.inc.c"
};

u64 men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00007E10_CITex[TEX_LEN(u64, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00007E10_CITex_WIDTH, men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00007E10_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_8_03000130_RoomShapeCullable_0300013C_CullableEntries_03000EA0_DL_00007E10_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room8_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room8_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room8.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
