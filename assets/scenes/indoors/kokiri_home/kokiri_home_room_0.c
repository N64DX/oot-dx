#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0.h"
#include "assets/scenes/indoors/kokiri_home/kokiri_home_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd kokiri_home_room_0[] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0.inc.c"
};

s16 kokiri_home_room_0_03000040_ObjectList[LENGTH_kokiri_home_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kokiri_home_room_0_03000048_ActorEntryList[LENGTH_kokiri_home_room_0_03000048_ActorEntryList] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_03000048_ActorEntryList.inc.c"
};

u8 kokiri_home_room_0_zeros_0000C8[8] = { 0 };

RoomShapeImageSingle kokiri_home_room_0_030000D0_RoomShapeImageSingle = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry.inc.c"
};

u8 kokiri_home_room_0_zeros_0000F8[8] = { 0 };

Vtx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004CB0_DL_03000100_Vtx_fused_[] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004CB0_DL_03000100_Vtx_fused_.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004CB0_DL[27] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004CB0_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004D88_DL[24] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004D88_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004E48_DL[140] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03004E48_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030052A8_DL[25] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030052A8_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005370_DL[25] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005370_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005438_DL[23] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005438_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030054F0_DL[26] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030054F0_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030055C0_DL[26] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030055C0_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005690_DL[57] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005690_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005858_DL[73] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005858_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005AA0_DL[100] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005AA0_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005DC0_DL[74] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03005DC0_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03006010_DL[73] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03006010_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03006258_DL[16] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_03006258_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030062D8_DL[24] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL_030062D8_DL.inc.c"
};

Gfx kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL[16] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_030000F0_RoomShapeDListsEntry_03006398_DL.inc.c"
};

u8 kokiri_home_room_0_unaccounted_006418[] = {
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_unaccounted_006418.bin.inc.c"
};

u64 kokiri_home_room_0_030000D0_RoomShapeImageSingle_03006430_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_03006430_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/kokiri_home/kokiri_home_room_0_030000D0_RoomShapeImageSingle_03006430_JFIF.jpg.inc.c"
#endif
};

