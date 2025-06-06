#include "assets/scenes/misc/entra/entra_room_0.h"
#include "assets/scenes/misc/entra/entra_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd entra_room_0[] = {
#include "assets/scenes/misc/entra/entra_room_0.inc.c"
};

s16 entra_room_0_03000040_ObjectList[LENGTH_entra_room_0_03000040_ObjectList] = {
#include "assets/scenes/misc/entra/entra_room_0_03000040_ObjectList.inc.c"
};

ActorEntry entra_room_0_03000044_ActorEntryList[LENGTH_entra_room_0_03000044_ActorEntryList] = {
#include "assets/scenes/misc/entra/entra_room_0_03000044_ActorEntryList.inc.c"
};

u8 entra_room_0_zeros_000064[12] = { 0 };

RoomShapeImageSingle entra_room_0_03000070_RoomShapeImageSingle = {
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle.inc.c"
};

RoomShapeDListsEntry entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry = {
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry.inc.c"
};

u8 entra_room_0_zeros_000098[8] = { 0 };

Vtx entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03000348_DL_030002A0_DL_030000A0_Vtx_fused_[] = {
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03000348_DL_030002A0_DL_030000A0_Vtx_fused_.inc.c"
};

Gfx entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03000348_DL_030002A0_DL[21] = {
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03000348_DL_030002A0_DL.inc.c"
};

Gfx entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03000348_DL[2] = {
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle_03000090_RoomShapeDListsEntry_03000348_DL.inc.c"
};

u8 entra_room_0_unaccounted_000358[] = {
#include "assets/scenes/misc/entra/entra_room_0_unaccounted_000358.bin.inc.c"
};

u64 entra_room_0_03000070_RoomShapeImageSingle_03000370_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle_03000370_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/entra/entra_room_0_03000070_RoomShapeImageSingle_03000370_JFIF.jpg.inc.c"
#endif
};

