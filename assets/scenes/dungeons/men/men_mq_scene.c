#include "assets/scenes/dungeons/men/men_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_men_scene[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_men_scene),
};

#include "assets/scenes/dungeons/men/men_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/men/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/men/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/men/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/men/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/scene/header.inc.c"
};

SceneCmd* questHeaders_men_scene[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
