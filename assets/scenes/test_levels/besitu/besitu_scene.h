#ifndef BESITU_SCENE_H
#define BESITU_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd besitu_sceneCommands[];
extern SceneCmd* questHeaders_besitu_scene[];
extern ActorEntry besitu_sceneStartPositionList0x000048[];
extern ActorEntry besitu_cq_sceneStartPositionList[];
extern RomFile besitu_sceneRoomList0x000058[];
extern Spawn besitu_sceneEntranceList0x000060[];
extern EnvLightSettings besitu_sceneLightSettings0x000064[];
extern BgCamInfo besitu_sceneCollisionHeader_000478CamDataList[];
extern SurfaceType besitu_sceneCollisionHeader_000478SurfaceType[];
extern CollisionPoly besitu_sceneCollisionHeader_000478Polygons[];
extern Vec3s besitu_sceneCollisionHeader_000478Vertices[];
extern CollisionHeader besitu_sceneCollisionHeader_000478;

#endif
