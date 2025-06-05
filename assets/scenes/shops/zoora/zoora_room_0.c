#include "assets/scenes/shops/zoora/zoora_room_0.h"
#include "assets/scenes/shops/zoora/zoora_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd zoora_room_0[] = {
#include "assets/scenes/shops/zoora/zoora_room_0.inc.c"
};

s16 zoora_room_0_03000040_ObjectList[LENGTH_zoora_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000040_ObjectList.inc.c"
};

ActorEntry zoora_room_0_03000054_ActorEntryList[LENGTH_zoora_room_0_03000054_ActorEntryList] = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000054_ActorEntryList.inc.c"
};

u8 zoora_room_0_zeros_000084[12] = { 0 };

RoomShapeImageSingle zoora_room_0_03000090_RoomShapeImageSingle = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry.inc.c"
};

u8 zoora_room_0_zeros_0000B8[8] = { 0 };

Vtx zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030009C0_DL_03000840_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030009C0_DL_03000840_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030009C0_DL_03000840_DL[48] = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030009C0_DL_03000840_DL.inc.c"
};

Gfx zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030009C0_DL[2] = {
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030009C0_DL.inc.c"
};

u8 zoora_room_0_unaccounted_0009D0[] = {
#include "assets/scenes/shops/zoora/zoora_room_0_unaccounted_0009D0.bin.inc.c"
};

u64 zoora_room_0_03000090_RoomShapeImageSingle_030009E0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle_030009E0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/zoora/zoora_room_0_03000090_RoomShapeImageSingle_030009E0_JFIF.jpg.inc.c"
#endif
};

