#include "assets/scenes/dungeons/ganontika/ganontika_room_10.h"
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

SceneCmd ganontika_room_10[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10.inc.c"
};

s16 ganontika_room_10_03000040_ObjectList[LENGTH_ganontika_room_10_03000040_ObjectList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000040_ObjectList.inc.c"
};

ActorEntry ganontika_room_10_0300004C_ActorEntryList[LENGTH_ganontika_room_10_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_0300004C_ActorEntryList.inc.c"
};

u8 ganontika_room_10_zeros_00008C[4] = { 0 };

RoomShapeCullable ganontika_room_10_03000090_RoomShapeCullable = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries[LENGTH_ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries.inc.c"
};

u8 ganontika_room_10_unaccounted_0000FC[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_unaccounted_0000FC.bin.inc.c"
};

Vtx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL_03000100_Vtx_fused_.inc.c"
};

Gfx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL[27] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL.inc.c"
};

Vtx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL_03000318_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL_03000318_Vtx_fused_.inc.c"
};

Gfx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL[45] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL.inc.c"
};

Vtx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_03000680_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_03000680_Vtx_fused_.inc.c"
};

Gfx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL[433] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL.inc.c"
};

Vtx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03002A88_DL_030024F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03002A88_DL_030024F8_Vtx_fused_.inc.c"
};

Gfx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03002A88_DL[80] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03002A88_DL.inc.c"
};

Vtx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003298_DL_03002D08_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003298_DL_03002D08_Vtx_fused_.inc.c"
};

Gfx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003298_DL[80] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003298_DL.inc.c"
};

Vtx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003798_DL_03003518_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003798_DL_03003518_Vtx_fused_.inc.c"
};

Gfx ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003798_DL[51] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03003798_DL.inc.c"
};

u8 ganontika_room_10_unaccounted_003930[] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_unaccounted_003930.bin.inc.c"
};

u64 ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL_00003968_Tex[TEX_LEN(u64, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL_00003968_Tex_WIDTH, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL_00003968_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000240_DL_00003968_Tex.rgba16.inc.c"
};

u64 ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL_00004168_CITex[TEX_LEN(u64, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL_00004168_CITex_WIDTH, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL_00004168_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03000518_DL_00004168_CITex.ci8.tlut_ganontika_room_0_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000500_DL_0001F370_TLUT.inc.c"
};

u64 ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00004968_Tex[TEX_LEN(u64, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00004968_Tex_WIDTH, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00004968_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00004968_Tex.rgba16.inc.c"
};

u64 ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005168_Tex[TEX_LEN(u64, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005168_Tex_WIDTH, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005168_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005168_Tex.rgba16.inc.c"
};

u64 ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005968_Tex[TEX_LEN(u64, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005968_Tex_WIDTH, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005968_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005968_Tex.rgba16.inc.c"
};

u64 ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005B68_Tex[TEX_LEN(u64, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005B68_Tex_WIDTH, ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005B68_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ganontika/ganontika_room_10_03000090_RoomShapeCullable_0300009C_CullableEntries_03001770_DL_00005B68_Tex.rgba16.inc.c"
};

u8 ganontika_room_10_zeros_006B68[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
