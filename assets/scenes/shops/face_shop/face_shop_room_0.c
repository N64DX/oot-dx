#include "assets/scenes/shops/face_shop/face_shop_room_0.h"
#include "assets/scenes/shops/face_shop/face_shop_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd face_shop_room_0[] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0.inc.c"
};

s16 face_shop_room_0_03000040_ObjectList[LENGTH_face_shop_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_03000040_ObjectList.inc.c"
};

ActorEntry face_shop_room_0_0300005C_ActorEntryList[LENGTH_face_shop_room_0_0300005C_ActorEntryList] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_0300005C_ActorEntryList.inc.c"
};

u8 face_shop_room_0_zeros_00009C[4] = { 0 };

RoomShapeImageSingle face_shop_room_0_030000A0_RoomShapeImageSingle = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry.inc.c"
};

u8 face_shop_room_0_zeros_0000C8[8] = { 0 };

Vtx face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03007240_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03007240_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03007240_DL[18] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03007240_DL.inc.c"
};

Gfx face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_030072D0_DL[24] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_030072D0_DL.inc.c"
};

Gfx face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03007390_DL[831] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03007390_DL.inc.c"
};

Gfx face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03008D88_DL[16] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL_03008D88_DL.inc.c"
};

Gfx face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL[5] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03008E08_DL.inc.c"
};

u8 face_shop_room_0_unaccounted_008E30[] = {
#include "assets/scenes/shops/face_shop/face_shop_room_0_unaccounted_008E30.bin.inc.c"
};

u64 face_shop_room_0_030000A0_RoomShapeImageSingle_03008E40_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_03008E40_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/face_shop/face_shop_room_0_030000A0_RoomShapeImageSingle_03008E40_JFIF.jpg.inc.c"
#endif
};

