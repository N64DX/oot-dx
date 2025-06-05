#include "assets/scenes/misc/market_alley/market_alley_room_0.h"
#include "assets/scenes/misc/market_alley/market_alley_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "actor.h"
#include "object.h"
#include "skybox.h"

SceneCmd market_alley_room_0[] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0.inc.c"
};

s16 market_alley_room_0_03000040_ObjectList[LENGTH_market_alley_room_0_03000040_ObjectList] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_03000040_ObjectList.inc.c"
};

ActorEntry market_alley_room_0_03000058_ActorEntryList[LENGTH_market_alley_room_0_03000058_ActorEntryList] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_03000058_ActorEntryList.inc.c"
};

u8 market_alley_room_0_zeros_0000A8[8] = { 0 };

RoomShapeImageMulti market_alley_room_0_030000B0_RoomShapeImageMulti = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti.inc.c"
};

RoomShapeImageMultiBgEntry market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries[LENGTH_market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries.inc.c"
};

RoomShapeDListsEntry market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry.inc.c"
};

u8 market_alley_room_0_zeros_00011C[4] = { 0 };

u64 market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_03000120_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_03000120_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_03000120_JFIF.jpg.inc.c"
#endif
};

u64 market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_03025920_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_03025920_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_03025920_JFIF.jpg.inc.c"
#endif
};

u64 market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_0304B120_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_0304B120_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_030000C0_RoomShapeImageMultiBgEntries_0304B120_JFIF.jpg.inc.c"
#endif
};

Vtx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074660_DL_03070920_Vtx_fused_[] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074660_DL_03070920_Vtx_fused_.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074660_DL[17] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074660_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030746E8_DL[17] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030746E8_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074770_DL[40] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074770_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030748B0_DL[27] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030748B0_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074988_DL[28] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074988_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074A68_DL[257] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03074A68_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075270_DL[32] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075270_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075370_DL[19] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075370_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075408_DL[23] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075408_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030754C0_DL[19] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030754C0_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075558_DL[19] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_03075558_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030755F0_DL[19] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL_030755F0_DL.inc.c"
};

Gfx market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL[13] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_030000B0_RoomShapeImageMulti_03000114_RoomShapeDListsEntry_03075688_DL.inc.c"
};

u8 market_alley_room_0_unaccounted_0756F0[] = {
#include "assets/scenes/misc/market_alley/market_alley_room_0_unaccounted_0756F0.bin.inc.c"
};

