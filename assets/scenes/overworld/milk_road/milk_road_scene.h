#ifndef MILK_ROAD_SCENE_H
#define MILK_ROAD_SCENE_H

#include "bgcheck.h"
#include "romfile.h"
#include "scene.h"
#include "ultra64.h"

extern ActorEntry milk_road_sceneStartPositionList0x000088[];
extern RomFile milk_road_sceneRoomList0x0000F8[];
extern Spawn milk_road_sceneEntranceList0x000100[];
extern u16 milk_road_sceneExitList_000110[];
extern EnvLightSettings milk_road_sceneLightSettings0x000118[];
extern Path milk_road_scenePathway_0003DC[];
extern CollisionHeader milk_road_sceneCollisionHeader_001E84;

extern u64 milk_road_sceneTex_001EB0[];
extern u64 milk_road_sceneTex_0026B0[];

#endif
