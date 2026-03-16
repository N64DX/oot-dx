#include "assets/scenes/dungeons/ydan/ydan_scene.h"

extern SceneCmd* questHeaders_ydan_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ydan_scene),
};

#include "assets/scenes/dungeons/ydan/ydan_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/ydan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/scene/header.inc.c"
};

SceneCmd* questHeaders_ydan_scene[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
