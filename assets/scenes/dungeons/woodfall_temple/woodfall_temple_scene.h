#ifndef WOODFALL_TEMPLE_SCENE_H
#define WOODFALL_TEMPLE_SCENE_H

#include "bgcheck.h"
#include "romfile.h"
#include "scene.h"
#include "ultra64.h"

extern SceneCmd woodfall_temple_sceneCommands[];
extern ActorEntry woodfall_temple_sceneStartPositionList0x000098[];
extern TransitionActorEntry woodfall_temple_sceneTransitionActorList_0000C8[];
extern RomFile woodfall_temple_sceneRoomList0x000218[];
extern Spawn woodfall_temple_sceneEntranceList0x000280[];
extern u16 woodfall_temple_sceneExitList_000288[];
extern EnvLightSettings woodfall_temple_sceneLightSettings0x000290[];
extern Vec3s woodfall_temple_scenePathwayList_000398[];
extern Vec3s woodfall_temple_scenePathwayList_0003A4[];
extern Vec3s woodfall_temple_scenePathwayList_0003B0[];
extern Path woodfall_temple_scenePathway_0003C4[];
extern SurfaceType woodfall_temple_sceneCollisionHeader_012458SurfaceType[];
extern CollisionPoly woodfall_temple_sceneCollisionHeader_012458Polygons[];
extern Vec3s woodfall_temple_sceneCollisionHeader_012458Vertices[];
extern WaterBox woodfall_temple_sceneCollisionHeader_012458WaterBoxes[];
extern CollisionHeader woodfall_temple_sceneCollisionHeader_012458;
extern u64 woodfall_temple_sceneTex_012490[];
extern u64 woodfall_temple_sceneTex_012C90[];
extern u64 woodfall_temple_sceneTex_013490[];
extern u64 woodfall_temple_sceneTex_013C90[];
extern u64 woodfall_temple_sceneTex_014490[];
extern u64 woodfall_temple_sceneTex_014C90[];
extern u64 woodfall_temple_sceneTex_015090[];
extern u64 woodfall_temple_sceneTex_015490[];
extern u64 woodfall_temple_sceneTex_015590[];
extern u64 woodfall_temple_sceneTex_015D90[];
extern u64 woodfall_temple_sceneTex_016190[];
extern u64 woodfall_temple_sceneTex_016590[];
extern u64 woodfall_temple_sceneTex_016990[];
extern u64 woodfall_temple_sceneTex_016D90[];
extern u64 woodfall_temple_sceneTLUT_017190[];

#endif
