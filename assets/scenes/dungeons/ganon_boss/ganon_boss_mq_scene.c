#include "assets/scenes/dungeons/ganon_boss/ganon_boss_scene.h"

extern SceneCmd* questHeaders_ganon_boss_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganon_boss_scene),
};

#include "assets/scenes/dungeons/ganon_boss/ganon_boss_scene.c"

static Vec3s cq_vertices[] = {
#include "assets/scenes/dungeons/ganon_boss/scene/vertices.inc.c"
};

static CollisionPoly cq_polygons[] = {
#include "assets/scenes/dungeons/ganon_boss/scene/polygons.inc.c"
};

static SurfaceType cq_surface_types[] = {
#include "assets/scenes/dungeons/ganon_boss/scene/surfaceTypes.inc.c"
};

static CollisionHeader cq_collision = {
#include "assets/scenes/dungeons/ganon_boss/scene/collision.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ganon_boss/scene/header.inc.c"
};

#define mq_header  NULL
#define cmq_header cq_header

SceneCmd* questHeaders_ganon_boss_scene[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
