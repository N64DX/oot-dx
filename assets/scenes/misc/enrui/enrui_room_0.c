#include "assets/scenes/misc/enrui/enrui_room_0.h"
#include "assets/scenes/misc/enrui/enrui_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd enrui_room_0[] = {
#include "assets/scenes/misc/enrui/enrui_room_0.inc.c"
};

s16 enrui_room_0_03000040_ObjectList[LENGTH_enrui_room_0_03000040_ObjectList] = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000040_ObjectList.inc.c"
};

ActorEntry enrui_room_0_03000044_ActorEntryList[LENGTH_enrui_room_0_03000044_ActorEntryList] = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000044_ActorEntryList.inc.c"
};

u8 enrui_room_0_zeros_000054[12] = { 0 };

RoomShapeImageSingle enrui_room_0_03000060_RoomShapeImageSingle = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry.inc.c"
};

u8 enrui_room_0_zeros_000088[8] = { 0 };

Vtx enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03000338_DL_03000290_DL_03000090_Vtx_fused_[] = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03000338_DL_03000290_DL_03000090_Vtx_fused_.inc.c"
};

Gfx enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03000338_DL_03000290_DL[21] = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03000338_DL_03000290_DL.inc.c"
};

Gfx enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03000338_DL[2] = {
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03000338_DL.inc.c"
};

u8 enrui_room_0_unaccounted_000348[] = {
#include "assets/scenes/misc/enrui/enrui_room_0_unaccounted_000348.bin.inc.c"
};

u64 enrui_room_0_03000060_RoomShapeImageSingle_03000360_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle_03000360_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/enrui/enrui_room_0_03000060_RoomShapeImageSingle_03000360_JFIF.jpg.inc.c"
#endif
};

