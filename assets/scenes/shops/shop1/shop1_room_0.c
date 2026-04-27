#include "assets/scenes/shops/shop1/shop1_room_0.h"
#include "assets/scenes/shops/shop1/shop1_scene.h"

#include "actor.h"
#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

SceneCmd shop1_room_0[] = {
#include "assets/scenes/shops/shop1/shop1_room_0.inc.c"
};

s16 shop1_room_0_03000040_ObjectList[LENGTH_shop1_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/shop1/shop1_room_0_03000040_ObjectList.inc.c"
};

ActorEntry shop1_room_0_03000058_ActorEntryList[LENGTH_shop1_room_0_03000058_ActorEntryList] = {
#include "assets/scenes/shops/shop1/shop1_room_0_03000058_ActorEntryList.inc.c"
};

RoomShapeImageSingle shop1_room_0_030000A0_RoomShapeImageSingle = {
#include "assets/scenes/shops/shop1/shop1_room_0_030000A0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry shop1_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/shop1/shop1_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry.inc.c"
};

Vtx gShop1DL_003F98_03003F18_DL_03002F60_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03002F60_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03002F60_DL[16] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03002F60_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03002FE0_DL[18] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03002FE0_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03003070_DL[18] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03003070_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03003100_DL[18] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03003100_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03003190_DL[28] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03003190_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03003270_DL[16] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03003270_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_030032F0_DL[18] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_030032F0_DL.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL_03003380_DL[17] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL_03003380_DL.inc.c"
};

Gfx gShop1DL_003408[19] = {
#include "assets/scenes/shops/shop1/gShop1DL_003408.inc.c"
};

Gfx gShop1DL_0034A0[19] = {
#include "assets/scenes/shops/shop1/gShop1DL_0034A0.inc.c"
};

Gfx gShop1DL_003538[19] = {
#include "assets/scenes/shops/shop1/gShop1DL_003538.inc.c"
};

Gfx gShop1DL_0035D0[19] = {
#include "assets/scenes/shops/shop1/gShop1DL_0035D0.inc.c"
};

Gfx gShop1DL_003668[143] = {
#include "assets/scenes/shops/shop1/gShop1DL_003668.inc.c"
};

Gfx gShop1DL_003AE0[135] = {
#include "assets/scenes/shops/shop1/gShop1DL_003AE0.inc.c"
};

Gfx gShop1DL_003F98_03003F18_DL[9] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98_03003F18_DL.inc.c"
};

Gfx gShop1DL_003F60[7] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F60.inc.c"
};

Gfx gShop1DL_003F98[3] = {
#include "assets/scenes/shops/shop1/gShop1DL_003F98.inc.c"
};

u64 shop1_room_0_030000A0_RoomShapeImageSingle_03003FB0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/shop1/shop1_room_0_030000A0_RoomShapeImageSingle_03003FB0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/shop1/shop1_room_0_030000A0_RoomShapeImageSingle_03003FB0_JFIF.jpg.inc.c"
#endif
};
