#include "assets/scenes/indoors/impa/impa_room_0.h"
#include "assets/scenes/indoors/impa/impa_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd impa_room_0[] = {
#include "assets/scenes/indoors/impa/impa_room_0.inc.c"
};

s16 impa_room_0_03000040_ObjectList[LENGTH_impa_room_0_03000040_ObjectList] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000040_ObjectList.inc.c"
};

ActorEntry impa_room_0_03000058_ActorEntryList[LENGTH_impa_room_0_03000058_ActorEntryList] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000058_ActorEntryList.inc.c"
};

u8 impa_room_0_zeros_000088[8] = { 0 };

RoomShapeImageSingle impa_room_0_03000090_RoomShapeImageSingle = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry.inc.c"
};

u8 impa_room_0_zeros_0000B8[8] = { 0 };

Vtx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001210_DL_030000C0_Vtx_fused_[] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001210_DL_030000C0_Vtx_fused_.inc.c"
};

Gfx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001210_DL[28] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001210_DL.inc.c"
};

Gfx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_030012F0_DL[69] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_030012F0_DL.inc.c"
};

Gfx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001518_DL[34] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001518_DL.inc.c"
};

Gfx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001628_DL[22] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_03001628_DL.inc.c"
};

Gfx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_030016D8_DL[16] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL_030016D8_DL.inc.c"
};

Gfx impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL[6] = {
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030000B0_RoomShapeDListsEntry_03001758_DL.inc.c"
};

u8 impa_room_0_unaccounted_001788[] = {
#include "assets/scenes/indoors/impa/impa_room_0_unaccounted_001788.bin.inc.c"
};

u64 impa_room_0_03000090_RoomShapeImageSingle_030017A0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030017A0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/impa/impa_room_0_03000090_RoomShapeImageSingle_030017A0_JFIF.jpg.inc.c"
#endif
};

