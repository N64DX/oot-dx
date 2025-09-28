#ifndef SWAMP_SPIDER_HOUSE_SCENE_H
#define SWAMP_SPIDER_HOUSE_SCENE_H 1

#include "bgcheck.h"
#include "cutscene.h"
#include "environment.h"
#include "path.h"
#include "romfile.h"
#include "scene.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

extern SceneCmd swamp_spider_house_sceneCommands[];
extern SceneCmd* swamp_spider_house_sceneAlternateHeaders[];
extern ActorEntry swamp_spider_house_sceneStartPositionList0x000088[];
extern TransitionActorEntry swamp_spider_house_sceneTransitionActorList_000098[];
extern RomFile swamp_spider_house_sceneRoomList0x000118[];
extern Spawn swamp_spider_house_sceneEntranceList0x000148[];
extern u16 swamp_spider_house_sceneExitList_00014C[];
extern EnvLightSettings swamp_spider_house_sceneLightSettings0x000150[];
extern Vec3s swamp_spider_house_scenePathwayList_0001A8[];
extern Vec3s swamp_spider_house_scenePathwayList_0001C8[];
extern Vec3s swamp_spider_house_scenePathwayList_0001D4[];
extern Vec3s swamp_spider_house_scenePathwayList_0001E0[];
extern Vec3s swamp_spider_house_scenePathwayList_000218[];
extern Vec3s swamp_spider_house_scenePathwayList_000224[];
extern Vec3s swamp_spider_house_scenePathwayList_00023C[];
extern Vec3s swamp_spider_house_scenePathwayList_000248[];
extern Vec3s swamp_spider_house_scenePathwayList_000254[];
extern Vec3s swamp_spider_house_scenePathwayList_000274[];
extern Vec3s swamp_spider_house_scenePathwayList_000280[];
extern Vec3s swamp_spider_house_scenePathwayList_0002B0[];
extern Path swamp_spider_house_scenePathway_0002F4[];
extern BgCamInfo swamp_spider_house_sceneCollisionHeader_005CF4CamDataList[];
extern SurfaceType swamp_spider_house_sceneCollisionHeader_005CF4SurfaceType[];
extern CollisionPoly swamp_spider_house_sceneCollisionHeader_005CF4Polygons[];
extern Vec3s swamp_spider_house_sceneCollisionHeader_005CF4Vertices[];
extern WaterBox swamp_spider_house_sceneCollisionHeader_005CF4WaterBoxes[];
extern CollisionHeader swamp_spider_house_sceneCollisionHeader_005CF4;

extern SceneCmd swamp_spider_house_sceneSet_timeskip[];
extern TransitionActorEntry swamp_spider_house_sceneTransitionActorList_timeskip[];

extern u64 swamp_spider_house_sceneTex_005D20[];
extern u64 swamp_spider_house_sceneTex_006520[];
extern u64 swamp_spider_house_sceneTex_006920[];
extern u64 swamp_spider_house_sceneTex_006D20[];
extern u64 swamp_spider_house_sceneTex_007120[];
extern u64 swamp_spider_house_sceneTex_007520[];
extern u64 swamp_spider_house_sceneTex_007920[];
extern u64 swamp_spider_house_sceneTex_007D20[];
extern u64 swamp_spider_house_sceneTex_007E20[];
extern u64 swamp_spider_house_sceneTex_008220[];
extern u64 swamp_spider_house_sceneTex_008620[];
extern u64 swamp_spider_house_sceneTex_008820[];
extern u64 swamp_spider_house_sceneTex_009020[];
extern u64 swamp_spider_house_sceneTex_009220[];
extern u64 swamp_spider_house_sceneTex_009620[];
extern u64 swamp_spider_house_sceneTex_009A20[];
extern u64 swamp_spider_house_sceneTex_009E20[];
extern u64 swamp_spider_house_sceneTex_00A620[];
extern u64 swamp_spider_house_sceneTLUT_00AA20[];
extern u64 swamp_spider_house_sceneTLUT_00AA40[];
extern u64 swamp_spider_house_sceneTLUT_00AA60[];

#endif
