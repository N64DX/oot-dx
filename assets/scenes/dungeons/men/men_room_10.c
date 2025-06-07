#include "assets/scenes/dungeons/men/men_room_10.h"
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

SceneCmd men_room_10[] = {
#include "assets/scenes/dungeons/men/men_room_10.inc.c"
};

s16 men_room_10_03000040_ObjectList[LENGTH_men_room_10_03000040_ObjectList] = {
#include "assets/scenes/dungeons/men/men_room_10_03000040_ObjectList.inc.c"
};

ActorEntry men_room_10_03000050_ActorEntryList[LENGTH_men_room_10_03000050_ActorEntryList] = {
#include "assets/scenes/dungeons/men/men_room_10_03000050_ActorEntryList.inc.c"
};

RoomShapeCullable men_room_10_030000C0_RoomShapeCullable = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries[LENGTH_men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries.inc.c"
};

u8 men_room_10_unaccounted_00014C[] = {
#include "assets/scenes/dungeons/men/men_room_10_unaccounted_00014C.bin.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000290_DL_03000150_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000290_DL_03000150_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000290_DL[31] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000290_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL_03000388_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL_03000388_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL[70] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C88_DL_03000B68_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C88_DL_03000B68_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C88_DL[32] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000C88_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL_03000D88_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL_03000D88_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL[106] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_030016F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_030016F8_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL[66] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL_03001CC8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL_03001CC8_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL[34] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL_03002008_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL_03002008_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL[31] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL.inc.c"
};

Vtx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL_03002240_Vtx_fused_[] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL_03002240_Vtx_fused_.inc.c"
};

Gfx men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL[24] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL.inc.c"
};

u8 men_room_10_unaccounted_002410[] = {
#include "assets/scenes/dungeons/men/men_room_10_unaccounted_002410.bin.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00002458_CITex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00002458_CITex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00002458_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00002458_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL_00002C58_Tex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL_00002C58_Tex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL_00002C58_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001EF8_DL_00002C58_Tex.rgba16.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL_00003458_CITex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL_00003458_CITex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL_00003458_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002148_DL_00003458_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00003C58_CITex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00003C58_CITex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00003C58_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03001AB8_DL_00003C58_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL_00004458_Tex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL_00004458_Tex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL_00004458_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03002350_DL_00004458_Tex.rgba16.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL_00004C58_CITex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL_00004C58_CITex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL_00004C58_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_03000938_DL_00004C58_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u64 men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL_00005458_CITex[TEX_LEN(u64, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL_00005458_CITex_WIDTH, men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL_00005458_CITex_HEIGHT, 8)] = {
#include "assets/scenes/dungeons/men/men_room_10_030000C0_RoomShapeCullable_030000CC_CullableEntries_030013A8_DL_00005458_CITex.ci8.tlut_gMenDL_008118_03002AD0_DL_0000F730_TLUT.inc.c"
};

u8 men_room_10_zeros_005C58[8] = { 0 };

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
