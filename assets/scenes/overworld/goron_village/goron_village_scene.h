#ifndef GORON_VILLAGE_SCENE_H
#define GORON_VILLAGE_SCENE_H

#include "bgcheck.h"
#include "romfile.h"
#include "scene.h"
#include "ultra64.h"

extern SceneCmd* goron_village_sceneAlternateHeaders[];
extern ActorEntry goron_village_sceneStartPositionList0x000094[];
extern TransitionActorEntry goron_village_sceneTransitionActorList_0000E4[];
extern RomFile goron_village_sceneRoomList0x0000F4[];
extern Spawn goron_village_sceneEntranceList0x000104[];
extern u16 goron_village_sceneExitList_000110[];
extern EnvLightSettings goron_village_sceneLightSettings0x00011C[];
extern Path goron_village_scenePathway_00034C[];
extern CollisionHeader goron_village_sceneCollisionHeader_004DC4;

extern SceneCmd goron_village_sceneSet_timeskip[];
extern EnvLightSettings goron_village_sceneLightSettings_timeskip[];

extern SceneCmd goron_village_sceneSet_cleansed[];

extern u64 goron_village_sceneTex_001000[];
extern u64 goron_village_sceneTex_005100[];
extern u64 goron_village_sceneTex_005900[];
extern u64 goron_village_sceneTex_005D00[];
extern u64 goron_village_sceneTex_006100[];
extern u64 goron_village_sceneTLUT_006500[];

#endif
