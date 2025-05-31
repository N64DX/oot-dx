#ifndef BDAN_SCENE_H
#define BDAN_SCENE_H 1

extern SceneCmd bdan_sceneCommands[];
extern SceneCmd* bdan_sceneQuestHeaders[];
extern SceneCmd* bdan_sceneAlternateHeaders0x000068[];
extern ActorEntry bdan_sceneStartPositionList0x000078[];
extern TransitionActorEntry bdan_sceneTransitionActorList_000098[];
extern RomFile bdan_sceneRoomList0x0001F8[];
extern Spawn bdan_sceneEntranceList0x000278[];
extern u16 bdan_sceneExitList_00027C[];
extern EnvLightSettings bdan_sceneLightSettings0x000280[];
extern BgCamInfo bdan_sceneCollisionHeader_013054CamDataList[];
extern SurfaceType bdan_sceneCollisionHeader_013054SurfaceType[];
extern CollisionPoly bdan_sceneCollisionHeader_013054Polygons[];
extern Vec3s bdan_sceneCollisionHeader_013054Vertices[];
extern WaterBox bdan_sceneCollisionHeader_013054WaterBoxes[];
extern CollisionHeader bdan_sceneCollisionHeader_013054;
extern CutsceneData gJabuRutoObtainingSapphireUnusedCs[];

extern SceneCmd bdan_mq_sceneSet[];
extern TransitionActorEntry bdan_mq_sceneTransitionActorList[];
extern SurfaceType bdan_mq_sceneCollisionHeader_SurfaceType[];
extern CollisionPoly bdan_mq_sceneCollisionHeader_Polygons[];
extern CollisionHeader bdan_mq_sceneCollisionHeader;

extern SceneCmd bdan_sceneSet_013700[];
extern ActorEntry bdan_sceneStartPositionList0x013768[];
extern TransitionActorEntry bdan_sceneTransitionActorList_013788[];
extern RomFile bdan_sceneRoomList0x0138E8[];
extern Spawn bdan_sceneEntranceList0x013968[];
extern u16 bdan_sceneExitList_01396C[];
extern EnvLightSettings bdan_sceneLightSettings0x013970[];

extern u64 bdan_sceneTLUT_0139D0[];
extern u64 bdan_sceneTLUT_013BD8[];
extern u64 bdan_sceneTex_013DE0[];
extern u64 bdan_sceneTex_0145E0[];
extern u64 bdan_sceneTex_0149E0[];
extern u64 bdan_sceneTex_0151E0[];
extern CutsceneData gJabuIntroCs[];
#endif
