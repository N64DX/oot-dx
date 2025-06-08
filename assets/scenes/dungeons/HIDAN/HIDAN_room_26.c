#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26.h"
#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd HIDAN_room_26[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26.inc.c"
};

s16 HIDAN_room_26_03000038_ObjectList[LENGTH_HIDAN_room_26_03000038_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000038_ObjectList.inc.c"
};

RoomShapeCullable HIDAN_room_26_03000050_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries[LENGTH_HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000A80_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000A80_DL_03000100_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000A80_DL[98] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000A80_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000EF0_DL_03000D90_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000EF0_DL_03000D90_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000EF0_DL[26] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03000EF0_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030010C0_DL_03000FC0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030010C0_DL_03000FC0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030010C0_DL[25] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030010C0_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_03001188_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_03001188_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL[151] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03001D40_DL_03001A70_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03001D40_DL_03001A70_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03001D40_DL[121] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03001D40_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030024F8_DL_03002108_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030024F8_DL_03002108_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030024F8_DL[142] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030024F8_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03002F68_DL_03002968_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03002F68_DL_03002968_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03002F68_DL[163] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03002F68_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL_03003480_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL_03003480_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL[34] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL_030036A0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL_030036A0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL[33] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL.inc.c"
};

Vtx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL_030038A8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL_030038A8_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL[113] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL.inc.c"
};

u64 HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL_00004A98_Tex[TEX_LEN(u64, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL_00004A98_Tex_WIDTH, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL_00004A98_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030046B8_DL_00004A98_Tex.rgba16.inc.c"
};

u64 HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005298_CITex[TEX_LEN(u64, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005298_CITex_WIDTH, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005298_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005298_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005698_CITex[TEX_LEN(u64, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005698_CITex_WIDTH, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005698_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030015B8_DL_00005698_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL_00005898_Tex[TEX_LEN(u64, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL_00005898_Tex_WIDTH, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL_00005898_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_030037A0_DL_00005898_Tex.rgba16.inc.c"
};

u64 HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL_00006098_Tex[TEX_LEN(u64, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL_00006098_Tex_WIDTH, HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL_00006098_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26_03000050_RoomShapeCullable_0300005C_CullableEntries_03003590_DL_00006098_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room26_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room26.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
