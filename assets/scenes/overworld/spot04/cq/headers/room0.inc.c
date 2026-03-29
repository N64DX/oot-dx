    SCENE_CMD_ALTERNATE_HEADER_LIST(cq_altHeaders),
    SCENE_CMD_ECHO_SETTINGS(1),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_NORMAL, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false /* skybox enabled */, false /* sun/moon enabled */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0 /* time doesn't move */),
#if OOT_VERSION <= NTSC_1_1
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0_03000580_RoomShapeNormal),
#else
    SCENE_CMD_ROOM_SHAPE(&spot04_room_0_03000580_RoomShapeCullable),
#endif
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(cq_objects), cq_objects),
    SCENE_CMD_ACTOR_LIST(ARRAY_COUNT(cq_actors), cq_actors),
    SCENE_CMD_END(),
