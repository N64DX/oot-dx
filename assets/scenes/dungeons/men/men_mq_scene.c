#include "assets/scenes/dungeons/men/men_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
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

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
