#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

extern SceneCmd* questHeaders_Bmori1_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_Bmori1_scene),
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/scene/header.inc.c"
};

SceneCmd* questHeaders_Bmori1_scene[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
