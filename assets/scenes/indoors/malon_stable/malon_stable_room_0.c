#include "assets/scenes/indoors/malon_stable/malon_stable_room_0.h"
#include "assets/scenes/indoors/malon_stable/malon_stable_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd malon_stable_room_0[] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0.inc.c"
};

s16 malon_stable_room_0_03000040_ObjectList[LENGTH_malon_stable_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_03000040_ObjectList.inc.c"
};

ActorEntry malon_stable_room_0_0300004C_ActorEntryList[LENGTH_malon_stable_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_0300004C_ActorEntryList.inc.c"
};

u8 malon_stable_room_0_zeros_0000DC[4] = { 0 };

RoomShapeImageSingle malon_stable_room_0_030000E0_RoomShapeImageSingle = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry.inc.c"
};

u8 malon_stable_room_0_zeros_000108[8] = { 0 };

Vtx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007510_DL_03000110_Vtx_fused_[] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007510_DL_03000110_Vtx_fused_.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007510_DL[50] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007510_DL.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_030076A0_DL[62] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_030076A0_DL.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007890_DL[27] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007890_DL.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007968_DL[41] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007968_DL.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007AB0_DL[41] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007AB0_DL.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007BF8_DL[449] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL_03007BF8_DL.inc.c"
};

Gfx malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL[7] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03000100_RoomShapeDListsEntry_03008A00_DL.inc.c"
};

u8 malon_stable_room_0_unaccounted_008A38[] = {
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_unaccounted_008A38.bin.inc.c"
};

u64 malon_stable_room_0_030000E0_RoomShapeImageSingle_03008A50_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03008A50_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/malon_stable/malon_stable_room_0_030000E0_RoomShapeImageSingle_03008A50_JFIF.jpg.inc.c"
#endif
};

