#ifndef MOUNTAIN_VILLAGE_SCENE_H
#define MOUNTAIN_VILLAGE_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd mountain_village_scene[];
extern ActorEntry mountain_village_sceneStartPositionList0x00009C[];
extern TransitionActorEntry mountain_village_sceneTransitionActorList_00012C[];
extern RomFile mountain_village_sceneRoomList0x00015C[];
extern Spawn mountain_village_sceneEntranceList0x00016C[];
extern u16 mountain_village_sceneExitList_000180[];
extern EnvLightSettings mountain_village_sceneLightSettings0x00018C[];
extern CollisionHeader mountain_village_sceneCollisionHeader_0058E8;

extern u64 mountain_village_sceneTex_006A60[];
extern u64 mountain_village_sceneTLUT_006E60[];
extern u64 mountain_village_scene04Tex_000000[];
extern u64 mountain_village_scene04Tex_004A00[];
extern u64 mountain_village_scene04Tex_001000[];
extern u64 mountain_village_scene04Tex_003000[];
extern u64 mountain_village_scene04Tex_003800[];
extern u64 mountain_village_scene04Tex_004000[];

#endif
