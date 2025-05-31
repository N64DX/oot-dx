#ifndef HAKADANCH_SCENE_H
#define HAKADANCH_SCENE_H 1

extern SceneCmd HAKAdanCH_sceneCommands[];
extern SceneCmd* HAKAdanCH_sceneQuestHeaders[];
extern ActorEntry HAKAdanCH_sceneStartPositionList0x000068[];
extern TransitionActorEntry HAKAdanCH_sceneTransitionActorList_000078[];
extern RomFile HAKAdanCH_sceneRoomList0x000168[];
extern Spawn HAKAdanCH_sceneEntranceList0x0001A0[];
extern u16 HAKAdanCH_sceneExitList_0001A4[];
extern EnvLightSettings HAKAdanCH_sceneLightSettings0x0001A8[];
extern Vec3s HAKAdanCH_scenePathwayList_000200[];
extern Path HAKAdanCH_scenePathList_000220[];
extern Vec3s HAKAdanCH_sceneCollisionHeader_00A528CamPosData[];
extern BgCamInfo HAKAdanCH_sceneCollisionHeader_00A528CamDataList[];
extern SurfaceType HAKAdanCH_sceneCollisionHeader_00A528SurfaceType[];
extern CollisionPoly HAKAdanCH_sceneCollisionHeader_00A528Polygons[];
extern Vec3s HAKAdanCH_sceneCollisionHeader_00A528Vertices[];
extern WaterBox HAKAdanCH_sceneCollisionHeader_00A528WaterBoxes[];
extern CollisionHeader HAKAdanCH_sceneCollisionHeader_00A528;

extern SceneCmd HAKAdanCH_mq_sceneSet[];
extern TransitionActorEntry HAKAdanCH_mq_sceneTransitionActorList[];
extern Vec3s HAKAdanCH_mq_scenePathwayList_1[];
extern Vec3s HAKAdanCH_mq_scenePathwayList_2[];
extern Path HAKAdanCH_mq_scenePathList[];
extern SurfaceType HAKAdanCH_mq_sceneCollisionHeader_SurfaceType[];
extern CollisionPoly HAKAdanCH_mq_sceneCollisionHeader_Polygons[];
extern CollisionHeader HAKAdanCH_mq_sceneCollisionHeader;

extern u64 HAKAdanCH_sceneTex_00A560[];
extern u64 HAKAdanCH_sceneTex_00AD60[];
extern u64 HAKAdanCH_sceneTex_00B560[];
extern u64 HAKAdanCH_sceneTex_00BD60[];
#endif
