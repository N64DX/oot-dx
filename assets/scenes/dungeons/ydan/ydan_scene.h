#ifndef YDAN_SCENE_H
#define YDAN_SCENE_H 1

extern SceneCmd ydan_sceneCommands[];
extern SceneCmd* ydan_sceneMQHeaders[];
extern ActorEntry ydan_sceneStartPositionList0x000060[];
extern TransitionActorEntry ydan_sceneTransitionActorList_000080[];
extern RomFile ydan_sceneRoomList0x000140[];
extern Spawn ydan_sceneEntranceList0x0001A0[];
extern u16 ydan_sceneExitList_0001A4[];
extern EnvLightSettings ydan_sceneLightSettings0x0001A8[];
extern Vec3s ydan_sceneCollisionHeader_00B610CamPosData[];
extern BgCamInfo ydan_sceneCollisionHeader_00B610CamDataList[];
extern SurfaceType ydan_sceneCollisionHeader_00B610SurfaceType[];
extern CollisionPoly ydan_sceneCollisionHeader_00B610Polygons[];
extern Vec3s ydan_sceneCollisionHeader_00B610Vertices[];
extern WaterBox ydan_sceneCollisionHeader_00B610WaterBoxes[];
extern CollisionHeader ydan_sceneCollisionHeader_00B610;
extern CutsceneData gDekuTreeIntroCs[];
extern u64 ydan_sceneTLUT_00B800[];
extern u64 gDekuTreeDayEntranceTex[];
extern u64 gDekuTreeNightEntranceTex[];

extern SceneCmd ydan_mq_sceneSet[];
extern TransitionActorEntry ydan_mq_sceneTransitionActorList[];
extern SurfaceType ydan_mq_sceneCollisionHeader_SurfaceType[];
extern CollisionPoly ydan_mq_sceneCollisionHeader_Polygons[];
extern CollisionHeader ydan_mq_sceneCollisionHeader;
#endif
