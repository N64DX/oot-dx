#include "assets/scenes/misc/kakariko3/kakariko3_room_0.h"
#include "assets/scenes/misc/kakariko3/kakariko3_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd kakariko3_room_0[] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0.inc.c"
};

s16 kakariko3_room_0_03000040_ObjectList[LENGTH_kakariko3_room_0_03000040_ObjectList] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kakariko3_room_0_0300004C_ActorEntryList[LENGTH_kakariko3_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_0300004C_ActorEntryList.inc.c"
};

u8 kakariko3_room_0_zeros_00009C[4] = { 0 };

RoomShapeImageSingle kakariko3_room_0_030000A0_RoomShapeImageSingle = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry.inc.c"
};

u8 kakariko3_room_0_zeros_0000C8[8] = { 0 };

Vtx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03003FA0_DL_030000D0_Vtx_fused_[] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03003FA0_DL_030000D0_Vtx_fused_.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03003FA0_DL[27] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03003FA0_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004078_DL[109] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004078_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_030043E0_DL[109] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_030043E0_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004748_DL[21] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004748_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_030047F0_DL[58] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_030047F0_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_030049C0_DL[38] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_030049C0_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004AF0_DL[47] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004AF0_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004C68_DL[23] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL_03004C68_DL.inc.c"
};

Gfx kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL[9] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_030000C0_RoomShapeDListsEntry_03004D20_DL.inc.c"
};

u8 kakariko3_room_0_unaccounted_004D68[] = {
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_unaccounted_004D68.bin.inc.c"
};

u64 kakariko3_room_0_030000A0_RoomShapeImageSingle_03004D80_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_03004D80_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/kakariko3/kakariko3_room_0_030000A0_RoomShapeImageSingle_03004D80_JFIF.jpg.inc.c"
#endif
};

