#include "assets/scenes/indoors/labo/labo_room_0.h"
#include "assets/scenes/indoors/labo/labo_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd labo_room_0[] = {
#include "assets/scenes/indoors/labo/labo_room_0.inc.c"
};

s16 labo_room_0_03000040_ObjectList[LENGTH_labo_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/labo/labo_room_0_03000040_ObjectList.inc.c"
};

ActorEntry labo_room_0_03000058_ActorEntryList[LENGTH_labo_room_0_03000058_ActorEntryList] = {
#include "assets/scenes/indoors/labo/labo_room_0_03000058_ActorEntryList.inc.c"
};

u8 labo_room_0_zeros_0000C8[8] = { 0 };

RoomShapeImageSingle labo_room_0_030000D0_RoomShapeImageSingle = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry.inc.c"
};

u8 labo_room_0_zeros_0000F8[8] = { 0 };

Vtx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005950_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005950_DL_03000100_Vtx_fused_.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005950_DL[22] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005950_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005A00_DL[27] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005A00_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005AD8_DL[82] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005AD8_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005D68_DL[82] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005D68_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005FF8_DL[27] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03005FF8_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030060D0_DL[43] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030060D0_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006228_DL[18] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006228_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030062B8_DL[40] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030062B8_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030063F8_DL[37] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030063F8_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006520_DL[19] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006520_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030065B8_DL[35] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030065B8_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030066D0_DL[83] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_030066D0_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006968_DL[26] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006968_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006A38_DL[27] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006A38_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006B10_DL[18] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006B10_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006BA0_DL[86] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL_03006BA0_DL.inc.c"
};

Gfx labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL[17] = {
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006E50_DL.inc.c"
};

u8 labo_room_0_unaccounted_006ED8[] = {
#include "assets/scenes/indoors/labo/labo_room_0_unaccounted_006ED8.bin.inc.c"
};

u64 labo_room_0_030000D0_RoomShapeImageSingle_03006EF0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_03006EF0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/labo/labo_room_0_030000D0_RoomShapeImageSingle_03006EF0_JFIF.jpg.inc.c"
#endif
};

