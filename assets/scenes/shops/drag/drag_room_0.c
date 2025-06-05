#include "assets/scenes/shops/drag/drag_room_0.h"
#include "assets/scenes/shops/drag/drag_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd drag_room_0[] = {
#include "assets/scenes/shops/drag/drag_room_0.inc.c"
};

s16 drag_room_0_03000040_ObjectList[LENGTH_drag_room_0_03000040_ObjectList] = {
#include "assets/scenes/shops/drag/drag_room_0_03000040_ObjectList.inc.c"
};

ActorEntry drag_room_0_03000058_ActorEntryList[LENGTH_drag_room_0_03000058_ActorEntryList] = {
#include "assets/scenes/shops/drag/drag_room_0_03000058_ActorEntryList.inc.c"
};

u8 drag_room_0_zeros_000088[8] = { 0 };

RoomShapeImageSingle drag_room_0_03000090_RoomShapeImageSingle = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry.inc.c"
};

u8 drag_room_0_zeros_0000B8[8] = { 0 };

Vtx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030050C0_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030050C0_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030050C0_DL[46] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030050C0_DL.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_03005230_DL[30] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_03005230_DL.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_03005320_DL[26] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_03005320_DL.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030053F0_DL[22] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030053F0_DL.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030054A0_DL[18] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_030054A0_DL.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_03005530_DL[541] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL_03005530_DL.inc.c"
};

Gfx drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL[7] = {
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03006618_DL.inc.c"
};

u8 drag_room_0_unaccounted_006650[] = {
#include "assets/scenes/shops/drag/drag_room_0_unaccounted_006650.bin.inc.c"
};

u64 drag_room_0_03000090_RoomShapeImageSingle_03006660_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_03006660_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/shops/drag/drag_room_0_03000090_RoomShapeImageSingle_03006660_JFIF.jpg.inc.c"
#endif
};

