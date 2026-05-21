#ifndef DAWNGROVE_SHOP_SCENE_H
#define DAWNGROVE_SHOP_SCENE_H

#include "bgcheck.h"
#include "romfile.h"
#include "scene.h"
#include "ultra64.h"

extern RomFile dawngrove_shop_sceneRoomList_000060[];
extern TransitionActorEntry dawngrove_shop_sceneTransitionActorList_000068[];
extern u16 dawngrove_shop_sceneExitList_000078[];
extern ActorEntry dawngrove_shop_sceneStartPositionList_000080[];
extern EnvLightSettings dawngrove_shop_sceneLightSettings_000090[];
extern Spawn dawngrove_shop_sceneEntranceList_000118[];
extern CollisionHeader dawngrove_shop_sceneCollisionHeader_000120;

extern u64 dawngrove_shop_sceneTex_000B00[];
extern u64 dawngrove_shop_sceneTLUT_000B00[];
extern u64 dawngrove_shop_sceneTex_001500[];
extern u64 dawngrove_shop_sceneTLUT_001500[];
extern u64 dawngrove_shop_sceneTex_001B00[];
extern u64 dawngrove_shop_sceneTLUT_001B00[];
extern u64 dawngrove_shop_sceneTex_002500[];
extern u64 dawngrove_shop_sceneTex_002D00[];
extern u64 dawngrove_shop_sceneTex_003D00[];
extern u64 dawngrove_shop_sceneTLUT_003D00[];
extern u64 dawngrove_shop_sceneTex_004300[];
extern u64 dawngrove_shop_sceneTex_004B00[];
extern u64 dawngrove_shop_sceneTLUT_004B00[];

#endif
