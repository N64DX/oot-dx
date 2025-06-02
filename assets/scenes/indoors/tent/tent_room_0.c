#include "assets/scenes/indoors/tent/tent_room_0.h"
#include "assets/scenes/indoors/tent/tent_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd tent_room_0[] = {
#include "assets/scenes/indoors/tent/tent_room_0.inc.c"
};

s16 tent_room_0_03000040_ObjectList[LENGTH_tent_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/tent/tent_room_0_03000040_ObjectList.inc.c"
};

ActorEntry tent_room_0_03000048_ActorEntryList[LENGTH_tent_room_0_03000048_ActorEntryList] = {
#include "assets/scenes/indoors/tent/tent_room_0_03000048_ActorEntryList.inc.c"
};

u8 tent_room_0_zeros_0000A8[8] = { 0 };

RoomShapeImageSingle tent_room_0_030000B0_RoomShapeImageSingle = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry.inc.c"
};

u8 tent_room_0_zeros_0000D8[8] = { 0 };

Vtx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300B760_DL_030000E0_Vtx_fused_[] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300B760_DL_030000E0_Vtx_fused_.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300B760_DL[126] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300B760_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300BB50_DL[20] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300BB50_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300BBF0_DL[116] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300BBF0_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300BF90_DL[189] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300BF90_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300C578_DL[18] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300C578_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300C608_DL[169] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300C608_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300CB50_DL[19] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300CB50_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300CBE8_DL[438] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300CBE8_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300D998_DL[74] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300D998_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300DBE8_DL[73] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL_0300DBE8_DL.inc.c"
};

Gfx tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL[11] = {
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_0300DE30_DL.inc.c"
};

u8 tent_room_0_unaccounted_00DE88[] = {
#include "assets/scenes/indoors/tent/tent_room_0_unaccounted_00DE88.bin.inc.c"
};

u64 tent_room_0_030000B0_RoomShapeImageSingle_0300DEA0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_0300DEA0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/tent/tent_room_0_030000B0_RoomShapeImageSingle_0300DEA0_JFIF.jpg.inc.c"
#endif
};

