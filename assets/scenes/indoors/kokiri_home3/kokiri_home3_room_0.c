#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0.h"
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd kokiri_home3_room_0[] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0.inc.c"
};

s16 kokiri_home3_room_0_03000040_ObjectList[LENGTH_kokiri_home3_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kokiri_home3_room_0_03000048_ActorEntryList[LENGTH_kokiri_home3_room_0_03000048_ActorEntryList] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03000048_ActorEntryList.inc.c"
};

u8 kokiri_home3_room_0_zeros_000088[8200] = { 0 };

RoomShapeImageSingle kokiri_home3_room_0_03002090_RoomShapeImageSingle = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry.inc.c"
};

u8 kokiri_home3_room_0_zeros_0020B8[8] = { 0 };

u64 kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020C0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020C0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020C0_JFIF.jpg.inc.c"
#endif
};

Vtx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03033630_DL_030278C0_Vtx_fused_[] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03033630_DL_030278C0_Vtx_fused_.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03033630_DL[54] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03033630_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_030337E0_DL[244] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_030337E0_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03033F80_DL[245] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03033F80_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03034728_DL[244] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03034728_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03034EC8_DL[118] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03034EC8_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035278_DL[115] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035278_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035610_DL[114] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035610_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_030359A0_DL[80] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_030359A0_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035C20_DL[81] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035C20_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035EA8_DL[42] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035EA8_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035FF8_DL[33] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03035FF8_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03036100_DL[73] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03036100_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03036348_DL[73] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL_03036348_DL.inc.c"
};

Gfx kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL[14] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_03002090_RoomShapeImageSingle_030020B0_RoomShapeDListsEntry_03036590_DL.inc.c"
};

u8 kokiri_home3_room_0_unaccounted_036600[] = {
#include "assets/scenes/indoors/kokiri_home3/kokiri_home3_room_0_unaccounted_036600.bin.inc.c"
};

