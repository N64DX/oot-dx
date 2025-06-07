#include "assets/scenes/dungeons/ydan/ydan_room_11.h"
#include "assets/scenes/dungeons/ydan/ydan_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd ydan_room_11[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11.inc.c"
};

s16 ydan_room_11_03000038_ObjectList[LENGTH_ydan_room_11_03000038_ObjectList] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000038_ObjectList.inc.c"
};

u8 ydan_room_11_zeros_00004C[4] = { 0 };

RoomShapeCullable ydan_room_11_03000050_RoomShapeCullable = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries[LENGTH_ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries.inc.c"
};

u8 ydan_room_11_unaccounted_00007C[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_unaccounted_00007C.bin.inc.c"
};

Vtx ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_03000080_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_03000080_Vtx_fused_.inc.c"
};

Gfx ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL[487] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL.inc.c"
};

u8 ydan_room_11_unaccounted_003CC8[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_unaccounted_003CC8.bin.inc.c"
};

u64 ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00003CD8_CITex[TEX_LEN(u64, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00003CD8_CITex_WIDTH, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00003CD8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00003CD8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000044D8_Tex[TEX_LEN(u64, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000044D8_Tex_WIDTH, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000044D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000044D8_Tex.rgba16.inc.c"
};

u64 ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000054D8_CITex[TEX_LEN(u64, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000054D8_CITex_WIDTH, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000054D8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_000054D8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u64 ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00005CD8_CITex[TEX_LEN(u64, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00005CD8_CITex_WIDTH, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00005CD8_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03002D90_DL_00005CD8_CITex.ci8.tlut_ydan_room_0_03000210_RoomShapeCullable_0300021C_CullableEntries_030033F0_DL_0000B800_TLUT.inc.c"
};

u8 ydan_room_11_zeros_0060D8[8] = { 0 };

Vtx ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL_030060E0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL_030060E0_Vtx_fused_.inc.c"
};

Gfx ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL[69] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL.inc.c"
};

u8 ydan_room_11_unaccounted_006958[] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_unaccounted_006958.bin.inc.c"
};

u64 ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL_00006968_Tex[TEX_LEN(u64, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL_00006968_Tex_WIDTH, ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL_00006968_Tex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/ydan/ydan_room_11_03000050_RoomShapeCullable_0300005C_CullableEntries_03006730_DL_00006968_Tex.ia8.inc.c"
};

u8 ydan_room_11_zeros_007168[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room11_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
