#ifndef ROADTOLAKE_SCENE_H
#define ROADTOLAKE_SCENE_H 1

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd roadtolakeCommands[];
extern SceneCmd* roadtolake_sceneAlternateHeaders[];
extern ActorEntry roadtolake_sceneStartPositionList0x000088[];
extern TransitionActorEntry roadtolake_sceneTransitionActorList_0000B8[];
extern RomFile roadtolake_sceneRoomList0x0000C8[];
extern Spawn roadtolake_sceneEntranceList0x0000D0[];
extern u16 roadtolake_sceneExitList_0000D8[];
extern EnvLightSettings roadtolake_sceneLightSettings0x0000E0[];
extern BgCamInfo roadtolake_sceneCollisionHeader_0026F8CamDataList[];
extern SurfaceType roadtolake_sceneCollisionHeader_0026F8SurfaceType[];
extern CollisionPoly roadtolake_sceneCollisionHeader_0026F8Polygons[];
extern Vec3s roadtolake_sceneCollisionHeader_0026F8Vertices[];
extern WaterBox roadtolake_sceneCollisionHeader_0026F8WaterBoxes[];
extern CollisionHeader roadtolake_sceneCollisionHeader_0026F8;

extern SceneCmd roadtolake_sceneSet_timeskip[];
extern TransitionActorEntry roadtolake_sceneTransitionActorList_timeskip[];

extern u64 roadtolake_sceneTex_002730[];
extern u64 roadtolake_sceneTex_002F30[];
extern u64 roadtolake_sceneTex_003730[];
extern u64 roadtolake_sceneTex_003B30[];
extern u64 roadtolake_sceneTex_003F30[];
extern u64 roadtolake_sceneTex_004330[];
extern u64 roadtolake_sceneTex_004530[];
extern u64 roadtolake_sceneTex_004730[];
extern u64 roadtolake_sceneTex_004F30[];
extern u64 roadtolake_sceneTex_005730[];
extern u64 roadtolake_sceneTex_005B30[];
extern u64 roadtolake_sceneTex_005F30[];
extern u64 roadtolake_sceneTex_006730[];
extern u64 roadtolake_sceneTex_006830[];
extern u64 roadtolake_sceneTex_007830[];
extern u64 roadtolake_sceneTLUT_007930[];
extern u64 roadtolake_sceneTLUT_007950[];

#endif
