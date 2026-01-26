#ifndef ROADTOFORTRESS_SCENE_H
#define ROADTOFORTRESS_SCENE_H

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd roadtofortress_scene[];
extern ActorEntry roadtofortress_sceneStartPositionList0x000090[];
extern RomFile roadtofortress_sceneRoomList0x0000D0[];
extern Spawn roadtofortress_sceneEntranceList0x0000D8[];
extern u16 roadtofortress_sceneExitList_0000E0[];
extern EnvLightSettings roadtofortress_sceneLightSettings0x0000E8[];
extern Vec3s roadtofortress_scenePathwayList_000350[];
extern Vec3s roadtofortress_scenePathwayList_000398[];
extern Vec3s roadtofortress_scenePathwayList_0003C4[];
extern Path roadtofortress_scenePathway_0003F0[];
extern Vec3s roadtofortress_sceneCsCameraPoints_000528[];
extern BgCamInfo roadtofortress_sceneCollisionHeader_002824CamDataList[];
extern SurfaceType roadtofortress_sceneCollisionHeader_002824SurfaceType[];
extern CollisionPoly roadtofortress_sceneCollisionHeader_002824Polygons[];
extern Vec3s roadtofortress_sceneCollisionHeader_002824Vertices[];
extern CollisionHeader roadtofortress_sceneCollisionHeader_002824;
extern u64 roadtofortress_sceneTex_003050[];
extern u64 roadtofortress_sceneTex_003850[];
extern u64 roadtofortress_sceneTex_004050[];
extern u64 roadtofortress_sceneTex_004850[];
extern u64 roadtofortress_sceneTex_005050[];
extern u64 roadtofortress_sceneTex_005850[];
extern u64 roadtofortress_sceneTex_006850[];
extern u64 roadtofortress_sceneTex_007050[];
extern u64 roadtofortress_sceneTex_007850[];
extern u64 roadtofortress_sceneTLUT_008050[];
extern u64 roadtofortress_sceneTLUT_008070[];
#endif
