#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0.h"
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd kokiri_home4_room_0[] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0.inc.c"
};

s16 kokiri_home4_room_0_03000040_ObjectList[LENGTH_kokiri_home4_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_03000040_ObjectList.inc.c"
};

ActorEntry kokiri_home4_room_0_0300004C_ActorEntryList[LENGTH_kokiri_home4_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_0300004C_ActorEntryList.inc.c"
};

u8 kokiri_home4_room_0_zeros_0000BC[4] = { 0 };

RoomShapeImageSingle kokiri_home4_room_0_030000C0_RoomShapeImageSingle = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry.inc.c"
};

u8 kokiri_home4_room_0_zeros_0000E8[8] = { 0 };

u64 kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000F0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000F0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000F0_JFIF.jpg.inc.c"
#endif
};

Vtx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03034E40_DL_030258F0_Vtx_fused_[] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03034E40_DL_030258F0_Vtx_fused_.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03034E40_DL[52] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03034E40_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03034FE0_DL[127] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03034FE0_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030353D8_DL[126] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030353D8_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030357C8_DL[242] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030357C8_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03035F58_DL[242] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03035F58_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030366E8_DL[245] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030366E8_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03036E90_DL[51] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03036E90_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037028_DL[19] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037028_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030370C0_DL[42] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030370C0_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037210_DL[85] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037210_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030374B8_DL[108] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_030374B8_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037818_DL[98] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037818_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037B28_DL[111] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037B28_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037EA0_DL[111] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03037EA0_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03038218_DL[101] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03038218_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03038540_DL[111] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL_03038540_DL.inc.c"
};

Gfx kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL[17] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_030000C0_RoomShapeImageSingle_030000E0_RoomShapeDListsEntry_030388B8_DL.inc.c"
};

u8 kokiri_home4_room_0_unaccounted_038940[] = {
#include "assets/scenes/indoors/kokiri_home4/kokiri_home4_room_0_unaccounted_038940.bin.inc.c"
};

