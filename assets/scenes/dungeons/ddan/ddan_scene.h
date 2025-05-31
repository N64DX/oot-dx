#ifndef DDAN_SCENE_H
#define DDAN_SCENE_H 1

extern SceneCmd ddan_sceneCommands[];
extern SceneCmd* ddan_sceneQuestHeaders[];
extern ActorEntry ddan_sceneStartPositionList0x000060[];
extern TransitionActorEntry ddan_sceneTransitionActorList_000080[];
extern RomFile ddan_sceneRoomList0x0001F0[];
extern Spawn ddan_sceneEntranceList0x000278[];
extern u16 ddan_sceneExitList_00027C[];
extern EnvLightSettings ddan_sceneLightSettings0x000280[];
extern BgCamInfo ddan_sceneCollisionHeader_011D38CamDataList[];
extern SurfaceType ddan_sceneCollisionHeader_011D38SurfaceType[];
extern CollisionPoly ddan_sceneCollisionHeader_011D38Polygons[];
extern Vec3s ddan_sceneCollisionHeader_011D38Vertices[];
extern CollisionHeader ddan_sceneCollisionHeader_011D38;

extern SceneCmd ddan_mq_sceneSet[];
extern TransitionActorEntry ddan_mq_sceneTransitionActorList[];
extern SurfaceType ddan_mq_sceneCollisionHeader_SurfaceType[];
extern CollisionPoly ddan_mq_sceneCollisionHeader_Polygons[];
extern CollisionHeader ddan_mq_sceneCollisionHeader;

extern u64 gDCSceneTLUT[];
extern u64 gDCLavaFloor1Tex[];
extern u64 gDCDayEntranceTex[];
extern u64 gDCLavaFloor8Tex[];
extern u64 gDCLavaFloor7Tex[];
extern u64 gDCNightEntranceTex[];
extern u64 gDCLavaFloor6Tex[];
extern u64 gDCLavaFloor4Tex[];
extern u64 gDCLavaFloor3Tex[];
extern u64 gDCLavaFloor2Tex[];
extern u64 gDCLavaFloor5Tex[];
extern CutsceneData gDcOpeningCs[];
#endif
