#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0.h"
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd kokiri_home5_room_0[] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0.inc.c"
};

s16 kokiri_home5_room_0_03000040_ObjectList[LENGTH_kokiri_home5_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kokiri_home5_room_0_0300004C_ActorEntryList[LENGTH_kokiri_home5_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_0300004C_ActorEntryList.inc.c"
};

u8 kokiri_home5_room_0_zeros_0000AC[4] = { 0 };

RoomShapeImageSingle kokiri_home5_room_0_030000B0_RoomShapeImageSingle = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry.inc.c"
};

u8 kokiri_home5_room_0_zeros_0000D8[8] = { 0 };

u64 kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000E0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000E0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000E0_JFIF.jpg.inc.c"
#endif
};

Vtx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302EAC0_DL_030258E0_Vtx_fused_[] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302EAC0_DL_030258E0_Vtx_fused_.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302EAC0_DL[53] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302EAC0_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302EC68_DL[117] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302EC68_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302F010_DL[118] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302F010_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302F3C0_DL[143] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302F3C0_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302F838_DL[131] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302F838_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302FC50_DL[24] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302FC50_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302FD10_DL[202] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_0302FD10_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030360_DL[189] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030360_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030948_DL[94] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030948_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030C38_DL[42] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030C38_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030D88_DL[44] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL_03030D88_DL.inc.c"
};

Gfx kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL[12] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_030000B0_RoomShapeImageSingle_030000D0_RoomShapeDListsEntry_03030EE8_DL.inc.c"
};

u8 kokiri_home5_room_0_unaccounted_030F48[] = {
#include "assets/scenes/indoors/kokiri_home5/kokiri_home5_room_0_unaccounted_030F48.bin.inc.c"
};

