#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19.h"
#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

SceneCmd Bmori1_room_19[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19.inc.c"
};

s16 Bmori1_room_19_03000040_ObjectList[LENGTH_Bmori1_room_19_03000040_ObjectList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19_03000040_ObjectList.inc.c"
};

ActorEntry Bmori1_room_19_03000054_ActorEntryList[LENGTH_Bmori1_room_19_03000054_ActorEntryList] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19_03000054_ActorEntryList.inc.c"
};

RoomShapeCullable Bmori1_room_19_030000B0_RoomShapeCullable = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19_030000B0_RoomShapeCullable.inc.c"
};

RoomShapeCullableEntry Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries[LENGTH_Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries.inc.c"
};

Vtx Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_030003C0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_030003C0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_030003C0_DL[40] = {
#include "assets/scenes/dungeons/Bmori1/Bmori1_room_19_030000B0_RoomShapeCullable_030000BC_CullableEntries_030003C0_DL.inc.c"
};

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room19_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room19_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room19.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
