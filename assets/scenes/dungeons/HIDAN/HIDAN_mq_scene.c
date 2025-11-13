#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

extern SceneCmd* questHeaders_HIDAN_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HIDAN_scene),
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_0200041C[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/pathList_0200041C.inc.c"
};

static Vec3s mq_path_list_02000410[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/pathList_02000410.inc.c"
};

static Vec3s mq_path_list_02000428[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/pathList_02000428.inc.c"
};

static Vec3s mq_path_list_02000434[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/pathList_02000434.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/scene/header.inc.c"
};

SceneCmd* questHeaders_HIDAN_scene[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
