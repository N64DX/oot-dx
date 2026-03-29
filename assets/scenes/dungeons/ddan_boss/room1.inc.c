    SCENE_CMD_ECHO_SETTINGS(7),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_BOSS, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(true /* no skybox */, true /* no sun/moon */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
#if OOT_VERSION <= NTSC_1_1
    SCENE_CMD_ROOM_SHAPE(&ddan_boss_room_1_030000D0_RoomShapeNormal),
#else
    SCENE_CMD_ROOM_SHAPE(&ddan_boss_room_1_030000D0_RoomShapeCullable),
#endif
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(cq_objects), cq_objects),
    SCENE_CMD_ACTOR_LIST(ARRAY_COUNT(cq_actors), cq_actors),
    SCENE_CMD_END(),
