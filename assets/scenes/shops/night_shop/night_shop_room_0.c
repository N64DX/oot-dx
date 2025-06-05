#include "assets/scenes/shops/night_shop/night_shop_room_0.h"
#include "assets/scenes/shops/night_shop/night_shop_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd night_shop_room_0[] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0.inc.c"
};

s16 night_shop_room_0_03000040_ObjectList[LENGTH_night_shop_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000040_ObjectList.inc.c"
};

ActorEntry night_shop_room_0_03000048_ActorEntryList[LENGTH_night_shop_room_0_03000048_ActorEntryList] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000048_ActorEntryList.inc.c"
};

u8 night_shop_room_0_zeros_000068[8] = { 0 };

RoomShapeImageSingle night_shop_room_0_03000070_RoomShapeImageSingle = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry.inc.c"
};

u8 night_shop_room_0_zeros_000098[8] = { 0 };

Vtx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002660_DL_030000A0_Vtx_fused_[] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002660_DL_030000A0_Vtx_fused_.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002660_DL[29] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002660_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002748_DL[21] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002748_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_030027F0_DL[21] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_030027F0_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002898_DL[21] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002898_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002940_DL[53] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002940_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002AE8_DL[21] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002AE8_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002B90_DL[53] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002B90_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002D38_DL[103] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03002D38_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03003070_DL[18] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL_03003070_DL.inc.c"
};

Gfx night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL[10] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03003100_DL.inc.c"
};

u8 night_shop_room_0_unaccounted_003150[] = {
#include "assets/scenes/shops/night_shop/night_shop_room_0_unaccounted_003150.bin.inc.c"
};

u64 night_shop_room_0_03000070_RoomShapeImageSingle_03003160_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03003160_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/night_shop/night_shop_room_0_03000070_RoomShapeImageSingle_03003160_JFIF.jpg.inc.c"
#endif
};

