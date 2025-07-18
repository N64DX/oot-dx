    SCENE_CMD_ECHO_SETTINGS(10),
    SCENE_CMD_ROOM_BEHAVIOR(ROOM_TYPE_DUNGEON, ROOM_ENV_DEFAULT, LENS_MODE_SHOW_ACTORS, false /* warp songs enabled */),
    SCENE_CMD_SKYBOX_DISABLES(false /* skybox enabled */, false /* sun/moon enabled */),
    SCENE_CMD_TIME_SETTINGS(/* don't set time */ 0xFF, 0xFF, 0xFF /* time doesn't move */),
    SCENE_CMD_ROOM_SHAPE(&HAKAdan_room_8_030000C0_RoomShapeNormal),
    SCENE_CMD_OBJECT_LIST(ARRAY_COUNT(mq_objects), mq_objects),
    SCENE_CMD_ACTOR_LIST(ARRAY_COUNT(mq_actors), mq_actors),
    SCENE_CMD_END(),
