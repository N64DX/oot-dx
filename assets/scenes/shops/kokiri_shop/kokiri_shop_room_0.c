#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0.h"
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd kokiri_shop_room_0[] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0.inc.c"
};

s16 kokiri_shop_room_0_03000040_ObjectList[LENGTH_kokiri_shop_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kokiri_shop_room_0_03000058_ActorEntryList[LENGTH_kokiri_shop_room_0_03000058_ActorEntryList] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_03000058_ActorEntryList.inc.c"
};

u8 kokiri_shop_room_0_zeros_0000A8[8] = { 0 };

RoomShapeImageSingle kokiri_shop_room_0_030000B0_RoomShapeImageSingle = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry.inc.c"
};

u8 kokiri_shop_room_0_zeros_0000D8[8] = { 0 };

Vtx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009240_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009240_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009240_DL[19] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009240_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_030092D8_DL[39] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_030092D8_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009410_DL[39] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009410_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009548_DL[474] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_03009548_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300A418_DL[26] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300A418_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300A4E8_DL[113] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300A4E8_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300A870_DL[112] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300A870_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300ABF0_DL[18] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300ABF0_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300AC80_DL[245] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL_0300AC80_DL.inc.c"
};

Gfx kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL[10] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300B428_DL.inc.c"
};

u8 kokiri_shop_room_0_unaccounted_00B478[] = {
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_unaccounted_00B478.bin.inc.c"
};

u64 kokiri_shop_room_0_030000B0_RoomShapeImageSingle_0300B490_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_0300B490_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/kokiri_shop/kokiri_shop_room_0_030000B0_RoomShapeImageSingle_0300B490_JFIF.jpg.inc.c"
#endif
};

