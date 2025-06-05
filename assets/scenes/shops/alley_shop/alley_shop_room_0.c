#include "assets/scenes/shops/alley_shop/alley_shop_room_0.h"
#include "assets/scenes/shops/alley_shop/alley_shop_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd alley_shop_room_0[] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0.inc.c"
};

s16 alley_shop_room_0_03000040_ObjectList[LENGTH_alley_shop_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000040_ObjectList.inc.c"
};

ActorEntry alley_shop_room_0_0300005C_ActorEntryList[LENGTH_alley_shop_room_0_0300005C_ActorEntryList] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_0300005C_ActorEntryList.inc.c"
};

u8 alley_shop_room_0_zeros_00008C[4] = { 0 };

RoomShapeImageSingle alley_shop_room_0_03000090_RoomShapeImageSingle = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry.inc.c"
};

u8 alley_shop_room_0_zeros_0000B8[8] = { 0 };

Vtx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03000F50_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03000F50_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03000F50_DL[17] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03000F50_DL.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03000FD8_DL[24] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03000FD8_DL.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03001098_DL[16] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03001098_DL.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03001118_DL[33] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03001118_DL.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03001220_DL[19] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_03001220_DL.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_030012B8_DL[37] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL_030012B8_DL.inc.c"
};

Gfx alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL[7] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_030013E0_DL.inc.c"
};

u8 alley_shop_room_0_unaccounted_001418[] = {
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_unaccounted_001418.bin.inc.c"
};

u64 alley_shop_room_0_03000090_RoomShapeImageSingle_03001430_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_03001430_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/alley_shop/alley_shop_room_0_03000090_RoomShapeImageSingle_03001430_JFIF.jpg.inc.c"
#endif
};

