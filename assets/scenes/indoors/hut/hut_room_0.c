#include "assets/scenes/indoors/hut/hut_room_0.h"
#include "assets/scenes/indoors/hut/hut_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd hut_room_0[] = {
#include "assets/scenes/indoors/hut/hut_room_0.inc.c"
};

s16 hut_room_0_03000048_ObjectList[LENGTH_hut_room_0_03000048_ObjectList] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000048_ObjectList.inc.c"
};

ActorEntry hut_room_0_0300004C_ActorEntryList[LENGTH_hut_room_0_0300004C_ActorEntryList] = {
#include "assets/scenes/indoors/hut/hut_room_0_0300004C_ActorEntryList.inc.c"
};

u8 hut_room_0_zeros_00005C[4] = { 0 };

RoomShapeImageSingle hut_room_0_03000060_RoomShapeImageSingle = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry.inc.c"
};

u8 hut_room_0_zeros_000088[8] = { 0 };

Vtx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03002F10_DL_03000090_Vtx_fused_[] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03002F10_DL_03000090_Vtx_fused_.inc.c"
};

Gfx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03002F10_DL[44] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03002F10_DL.inc.c"
};

Gfx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03003070_DL[27] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03003070_DL.inc.c"
};

Gfx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03003148_DL[16] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_03003148_DL.inc.c"
};

Gfx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_030031C8_DL[31] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_030031C8_DL.inc.c"
};

Gfx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_030032C0_DL[339] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL_030032C0_DL.inc.c"
};

Gfx hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL[6] = {
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03000080_RoomShapeDListsEntry_03003D58_DL.inc.c"
};

u8 hut_room_0_unaccounted_003D88[] = {
#include "assets/scenes/indoors/hut/hut_room_0_unaccounted_003D88.bin.inc.c"
};

u64 hut_room_0_03000060_RoomShapeImageSingle_03003DA0_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03003DA0_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/indoors/hut/hut_room_0_03000060_RoomShapeImageSingle_03003DA0_JFIF.jpg.inc.c"
#endif
};

