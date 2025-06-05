#include "assets/scenes/indoors/kakariko/kakariko_room_0.h"
#include "assets/scenes/indoors/kakariko/kakariko_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd kakariko_room_0[] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0.inc.c"
};

s16 kakariko_room_0_03000040_ObjectList[LENGTH_kakariko_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kakariko_room_0_03000054_ActorEntryList[LENGTH_kakariko_room_0_03000054_ActorEntryList] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000054_ActorEntryList.inc.c"
};

u8 kakariko_room_0_zeros_000104[12] = { 0 };

RoomShapeImageSingle kakariko_room_0_03000110_RoomShapeImageSingle = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry.inc.c"
};

u8 kakariko_room_0_zeros_000138[8] = { 0 };

Vtx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004720_DL_03000140_Vtx_fused_[] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004720_DL_03000140_Vtx_fused_.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004720_DL[23] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004720_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_030047D8_DL[109] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_030047D8_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004B40_DL[110] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004B40_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004EB0_DL[57] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03004EB0_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005078_DL[59] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005078_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005250_DL[38] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005250_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005380_DL[38] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005380_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_030054B0_DL[47] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_030054B0_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005628_DL[39] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL_03005628_DL.inc.c"
};

Gfx kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL[10] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_03000130_RoomShapeDListsEntry_03005760_DL.inc.c"
};

u8 kakariko_room_0_unaccounted_0057B0[] = {
#include "assets/scenes/indoors/kakariko/kakariko_room_0_unaccounted_0057B0.bin.inc.c"
};

u64 kakariko_room_0_03000110_RoomShapeImageSingle_030057C0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_030057C0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/kakariko/kakariko_room_0_03000110_RoomShapeImageSingle_030057C0_JFIF.jpg.inc.c"
#endif
};

