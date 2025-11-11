#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_HAKAdan_scene[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HAKAdan_scene),
};

#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/HAKAdan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/scene/header.inc.c"
};

SceneCmd* questHeaders_HAKAdan_scene[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
