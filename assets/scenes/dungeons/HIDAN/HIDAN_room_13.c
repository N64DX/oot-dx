#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13.h"
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

SceneCmd HIDAN_room_13[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13.inc.c"
};

s16 HIDAN_room_13_03000040_ObjectList[LENGTH_HIDAN_room_13_03000040_ObjectList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000040_ObjectList.inc.c"
};

ActorEntry HIDAN_room_13_03000054_ActorEntryList[LENGTH_HIDAN_room_13_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable HIDAN_room_13_03000160_RoomShapeCullable = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries[LENGTH_HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries.inc.c"
};

Vtx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_030001D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_030001D0_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL[599] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL.inc.c"
};

Vtx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03003248_DL_03002518_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03003248_DL_03002518_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03003248_DL[470] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03003248_DL.inc.c"
};

Vtx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL_030040F8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL_030040F8_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL[620] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL.inc.c"
};

Vtx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL_030064E8_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL_030064E8_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL[581] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL.inc.c"
};

Vtx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_030091B0_DL_03008B80_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_030091B0_DL_03008B80_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_030091B0_DL[155] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_030091B0_DL.inc.c"
};

Vtx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL_03009688_Vtx_fused_[] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL_03009688_Vtx_fused_.inc.c"
};

Gfx HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL[165] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL.inc.c"
};

u64 HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000A7D8_Tex[TEX_LEN(u64, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000A7D8_Tex_WIDTH, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000A7D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000A7D8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000AFD8_CITex[TEX_LEN(u64, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000AFD8_CITex_WIDTH, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000AFD8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000AFD8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B30_TLUT.inc.c"
};

u64 HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000B3D8_CITex[TEX_LEN(u64, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000B3D8_CITex_WIDTH, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000B3D8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03001260_DL_0000B3D8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL_0000B7D8_CITex[TEX_LEN(u64, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL_0000B7D8_CITex_WIDTH, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL_0000B7D8_CITex_HEIGHT, 4)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_0300A278_DL_0000B7D8_CITex.ci4.tlut_HIDAN_room_0_030000D0_RoomShapeCullable_030000DC_CullableEntries_03002C20_DL_00018B50_TLUT.inc.c"
};

u64 HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL_0000BBD8_Tex[TEX_LEN(u64, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL_0000BBD8_Tex_WIDTH, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL_0000BBD8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03007958_DL_0000BBD8_Tex.rgba16.inc.c"
};

u64 HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL_0000C3D8_Tex[TEX_LEN(u64, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL_0000C3D8_Tex_WIDTH, HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL_0000C3D8_Tex_HEIGHT, 16)] = {
#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13_03000160_RoomShapeCullable_0300016C_CullableEntries_03005188_DL_0000C3D8_Tex.rgba16.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room13.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
