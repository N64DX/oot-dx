#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4.h"
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HIDAN_room_4[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4.inc.c"
};

s16 HIDAN_room_4_03000040_ObjectList[LENGTH_HIDAN_room_4_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_4_03000054_ActorEntryList[LENGTH_HIDAN_room_4_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000054_ActorEntryList.inc.c"
};

u8 HIDAN_room_4_zeros_000104[12] = { 0 };

RoomShapeCullable HIDAN_room_4_03000110_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries[LENGTH_HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries.inc.c"
};

u8 HIDAN_room_4_unaccounted_00018C[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_unaccounted_00018C.bin.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL_03000190_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL_03000190_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL[108] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_03000770_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_03000770_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL[435] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL_03002748_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL_03002748_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL[25] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003000_DL_03002920_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003000_DL_03002920_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003000_DL[55] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003000_DL.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_030031B8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_030031B8_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL[206] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030046F8_DL_03004218_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030046F8_DL_03004218_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030046F8_DL[109] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030046F8_DL.inc.c"
};

Vtx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL_03004A60_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL_03004A60_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL[98] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL.inc.c"
};

u8 HIDAN_room_4_unaccounted_005050[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_unaccounted_005050.bin.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005090_Tex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005090_Tex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005090_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005090_Tex.rgba16.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL_00005290_Tex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL_00005290_Tex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL_00005290_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03002858_DL_00005290_Tex.rgba16.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005A90_Tex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005A90_Tex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005A90_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03003BA8_DL_00005A90_Tex.rgba16.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006290_CITex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006290_CITex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006290_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006290_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL_00006690_CITex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL_00006690_CITex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL_00006690_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03000410_DL_00006690_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006890_CITex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006890_CITex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006890_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006890_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006C90_CITex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006C90_CITex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006C90_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_030019B0_DL_00006C90_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL_00007090_Tex[TEX_LEN(u64, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL_00007090_Tex_WIDTH, HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL_00007090_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_4_03000110_RoomShapeCullable_0300011C_CullableEntries_03004D40_DL_00007090_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
