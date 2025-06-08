#include "assets/scenes/dungeons/men/men_room_0.h"
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

SceneCmd men_room_0[] = {
#include "assets/scenes/dungeons/men/men_room_0.inc.c"
};

s16 men_room_0_03000040_ObjectList[LENGTH_men_room_0_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_0_03000040_ObjectList.inc.c"
};

ActorEntry men_room_0_0300004C_ActorEntryList[LENGTH_men_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_0_0300004C_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_0_030000E0_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_0_030000E0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_0_030000E0_RoomShapeCullable_030000EC_CullableEntries[LENGTH_men_room_0_030000E0_RoomShapeCullable_030000EC_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_0_030000E0_RoomShapeCullable_030000EC_CullableEntries.inc.c"
};

Vtx gMenDL_008118_03002AD0_DL_03000130_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_03000130_Vtx_fused_.inc.c"
};

Gfx gMenDL_008118_03002AD0_DL[544] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL.inc.c"
};

Vtx gMenDL_008118_030066D0_DL_03003BD0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_030066D0_DL_03003BD0_Vtx_fused_.inc.c"
};

Gfx gMenDL_008118_030066D0_DL[749] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_030066D0_DL.inc.c"
};

Vtx gMenDL_008118_03007FD8_DL_03007E38_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03007FD8_DL_03007E38_Vtx_fused_.inc.c"
};

Gfx gMenDL_008118_03007FD8_DL[40] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03007FD8_DL.inc.c"
};

Gfx gMenDL_008118[4] = {
#include "assets/scenes/dungeons/men/gMenDL_008118.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_00008138_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00008138_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00008138_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_00008138_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_03007FD8_DL_00008938_CITex[TEX_LEN(u64, gMenDL_008118_03007FD8_DL_00008938_CITex_WIDTH, gMenDL_008118_03007FD8_DL_00008938_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03007FD8_DL_00008938_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_00009138_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00009138_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00009138_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_00009138_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_030066D0_DL_00009538_Tex[TEX_LEN(u64, gMenDL_008118_030066D0_DL_00009538_Tex_WIDTH, gMenDL_008118_030066D0_DL_00009538_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_030066D0_DL_00009538_Tex.rgba16.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_00009D38_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_00009D38_CITex_WIDTH, gMenDL_008118_03002AD0_DL_00009D38_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_00009D38_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_030066D0_DL_0000A538_Tex[TEX_LEN(u64, gMenDL_008118_030066D0_DL_0000A538_Tex_WIDTH, gMenDL_008118_030066D0_DL_0000A538_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_030066D0_DL_0000A538_Tex.ia8.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_0000B538_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_0000B538_CITex_WIDTH, gMenDL_008118_03002AD0_DL_0000B538_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_0000B538_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_0000BD38_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_0000BD38_CITex_WIDTH, gMenDL_008118_03002AD0_DL_0000BD38_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_0000BD38_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_030066D0_DL_0000C538_Tex[TEX_LEN(u64, gMenDL_008118_030066D0_DL_0000C538_Tex_WIDTH, gMenDL_008118_030066D0_DL_0000C538_Tex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_030066D0_DL_0000C538_Tex.i4.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_0000D538_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_0000D538_CITex_WIDTH, gMenDL_008118_03002AD0_DL_0000D538_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_0000D538_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_030066D0_DL_0000DD38_Tex[TEX_LEN(u64, gMenDL_008118_030066D0_DL_0000DD38_Tex_WIDTH, gMenDL_008118_030066D0_DL_0000DD38_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_030066D0_DL_0000DD38_Tex.rgba16.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_0000ED38_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_0000ED38_CITex_WIDTH, gMenDL_008118_03002AD0_DL_0000ED38_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_0000ED38_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 gMenDL_008118_03002AD0_DL_0000F538_CITex[TEX_LEN(u64, gMenDL_008118_03002AD0_DL_0000F538_CITex_WIDTH, gMenDL_008118_03002AD0_DL_0000F538_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/gMenDL_008118_03002AD0_DL_0000F538_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

Vtx gMenDL_00FF78_0300FEA0_DL_0300FD40_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/gMenDL_00FF78_0300FEA0_DL_0300FD40_Vtx_fused_.inc.c"
};

Gfx gMenDL_00FF78_0300FEA0_DL[27] = {
#include "assets/scenes/dungeons/men/gMenDL_00FF78_0300FEA0_DL.inc.c"
};

Gfx gMenDL_00FF78[2] = {
#include "assets/scenes/dungeons/men/gMenDL_00FF78.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
