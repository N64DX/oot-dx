#include "assets/scenes/shops/golon/golon_room_0.h"
#include "assets/scenes/shops/golon/golon_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd golon_room_0[] = {
#include "assets/scenes/shops/golon/golon_room_0.inc.c"
};

s16 golon_room_0_03000040_ObjectList[LENGTH_golon_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/golon/golon_room_0_03000040_ObjectList.inc.c"
};

ActorEntry golon_room_0_03000054_ActorEntryList[LENGTH_golon_room_0_03000054_ActorEntryList] = {
#include "assets/scenes/shops/golon/golon_room_0_03000054_ActorEntryList.inc.c"
};

u8 golon_room_0_zeros_000074[12] = { 0 };

RoomShapeImageSingle golon_room_0_03000080_RoomShapeImageSingle = {
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry.inc.c"
};

u8 golon_room_0_zeros_0000A8[8] = { 0 };

Vtx golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry_030009B0_DL_03000830_DL_030000B0_Vtx_fused_[] = {
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry_030009B0_DL_03000830_DL_030000B0_Vtx_fused_.inc.c"
};

Gfx golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry_030009B0_DL_03000830_DL[48] = {
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry_030009B0_DL_03000830_DL.inc.c"
};

Gfx golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry_030009B0_DL[2] = {
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle_030000A0_RoomShapeDListsEntry_030009B0_DL.inc.c"
};

u8 golon_room_0_unaccounted_0009C0[] = {
#include "assets/scenes/shops/golon/golon_room_0_unaccounted_0009C0.bin.inc.c"
};

u64 golon_room_0_03000080_RoomShapeImageSingle_030009D0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle_030009D0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/golon/golon_room_0_03000080_RoomShapeImageSingle_030009D0_JFIF.jpg.inc.c"
#endif
};

