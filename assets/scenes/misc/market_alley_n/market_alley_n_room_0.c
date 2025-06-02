#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0.h"
#include "assets/scenes/misc/market_alley_n/market_alley_n_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "sequence.h"
#include "sys_matrix.h"
#include "ultra64.h"
#include "z64actor.h"
#include "z64object.h"
#include "z64skybox.h"

SceneCmd market_alley_n_room_0[] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0.inc.c"
};

s16 market_alley_n_room_0_03000040_ObjectList[LENGTH_market_alley_n_room_0_03000040_ObjectList] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_03000040_ObjectList.inc.c"
};

ActorEntry market_alley_n_room_0_03000044_ActorEntryList[LENGTH_market_alley_n_room_0_03000044_ActorEntryList] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_03000044_ActorEntryList.inc.c"
};

u8 market_alley_n_room_0_zeros_000094[12] = { 0 };

RoomShapeImageMulti market_alley_n_room_0_030000A0_RoomShapeImageMulti = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti.inc.c"
};

RoomShapeImageMultiBgEntry market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries[LENGTH_market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries.inc.c"
};

RoomShapeDListsEntry market_alley_n_room_0_030000A0_RoomShapeImageMulti_03000104_RoomShapeDListsEntry = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_03000104_RoomShapeDListsEntry.inc.c"
};

u8 market_alley_n_room_0_zeros_00010C[4] = { 0 };

u64 market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_03000110_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_03000110_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_03000110_JFIF.jpg.inc.c"
#endif
};

u64 market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_03025910_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_03025910_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_03025910_JFIF.jpg.inc.c"
#endif
};

u64 market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_0304B110_JFIF[320 * 240 * G_IM_SIZ_16b_BYTES / sizeof(u64)] = {
#if WS_JPEG
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_0304B110_JFIF_WS.jpg.inc.c"
#else
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0_030000A0_RoomShapeImageMulti_030000B0_RoomShapeImageMultiBgEntries_0304B110_JFIF.jpg.inc.c"
#endif
};

Vtx market_alley_n_room_0DL_0756E0_03075678_DL_03074650_DL_03070910_Vtx_fused_[] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03074650_DL_03070910_Vtx_fused_.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03074650_DL[17] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03074650_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_030746D8_DL[17] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_030746D8_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03074760_DL[40] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03074760_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_030748A0_DL[27] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_030748A0_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03074978_DL[28] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03074978_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03074A58_DL[257] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03074A58_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03075260_DL[32] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03075260_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03075360_DL[19] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03075360_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_030753F8_DL[23] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_030753F8_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_030754B0_DL[19] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_030754B0_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_03075548_DL[19] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_03075548_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL_030755E0_DL[19] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL_030755E0_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0_03075678_DL[13] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0_03075678_DL.inc.c"
};

Gfx market_alley_n_room_0DL_0756E0[2] = {
#include "assets/scenes/misc/market_alley_n/market_alley_n_room_0DL_0756E0.inc.c"
};

