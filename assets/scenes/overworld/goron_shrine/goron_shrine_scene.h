#ifndef GORON_SHRINE_SCENE_H
#define GORON_SHRINE_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd goron_shrine_scene[];
extern SceneCmd* goron_shrine_sceneAlternateHeaders[];
extern ActorEntry goron_shrine_sceneStartPositionList0x000094[];
extern TransitionActorEntry goron_shrine_sceneTransitionActorList_0000C4[];
extern RomFile goron_shrine_sceneRoomList0x0000D4[];
extern Spawn goron_shrine_sceneEntranceList0x0000E4[];
extern u16 goron_shrine_sceneExitList_0000EC[];
extern EnvLightSettings goron_shrine_sceneLightSettings0x0000F0[];
extern CollisionHeader goron_shrine_sceneCollisionHeader_005B84;

extern u64 goron_shrine_sceneTex_006BC0[];
extern u64 goron_shrine_sceneTex_0073C0[];
extern u64 goron_shrine_sceneTex_007BC0[];
extern u64 goron_shrine_sceneTex_0083C0[];
extern u64 goron_shrine_sceneTex_008BC0[];
extern u64 goron_shrine_sceneTex_0093C0[];
extern u64 goron_shrine_sceneTex_009BC0[];
extern u64 goron_shrine_sceneTex_00A3C0[];
extern u64 goron_shrine_sceneTex_00A7C0[];
extern u64 goron_shrine_sceneTex_00AFC0[];
extern u64 goron_shrine_sceneTex_00B3C0[];
extern u64 goron_shrine_sceneTex_00BBC0[];
extern u64 goron_shrine_sceneTex_00C3C0[];
extern u64 goron_shrine_sceneTex_00C7C0[];
extern u64 goron_shrine_sceneTLUT_00CFC0[];

#endif
