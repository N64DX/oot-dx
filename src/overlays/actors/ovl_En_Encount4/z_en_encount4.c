/*
 * File: z_en_encount4.c
 * Overlay: ovl_En_Encount4
 * Description: Spawner for Dragonflies, Skullfish, and Wallmasters
 */

#include "z_en_encount4.h"

#include "rand.h"
#include "z_lib.h"
#include "play_state.h"

#include "overlays/actors/ovl_En_Grasshopper/z_en_grasshopper.h"
#include "overlays/actors/ovl_En_Wallmas/z_en_wallmas.h"
#include "overlays/actors/ovl_En_Pr2/z_en_pr2.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED | ACTOR_FLAG_LOCK_ON_DISABLED)

void EnEncount4_Init(Actor* thisx, PlayState* play);
void EnEncount4_Update(Actor* thisx, PlayState* play);

void EnEncount4_SpawnActor(EnEncount4* this, PlayState* play);

ActorProfile En_Encount4_Profile = {
    /**/ ACTOR_EN_ENCOUNT4,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(EnEncount4),
    /**/ EnEncount4_Init,
    /**/ NULL,
    /**/ EnEncount4_Update,
    /**/ NULL,
};

static s16 sActorIds[] = {
    ACTOR_EN_GRASSHOPPER, // EN_ENCOUNT4_GRASSHOPPER
    ACTOR_EN_WALLMAS,     // EN_ENCOUNT4_WALLMASTER
    ACTOR_EN_PR2,         // EN_ENCOUNT4_SKULLFISH_RESPAWNING
    ACTOR_EN_PR2,         // EN_ENCOUNT4_SKULLFISH_PATHING
};

static s16 sActorParams[] = {
    DRAGONFLY_PARAMS(DRAGONFLY_TYPE_GROWS_WHEN_SPAWNED), // EN_ENCOUNT4_GRASSHOPPER
    WALLMASTER_PARAMS(WMT_TIMER, 0, false),              // EN_ENCOUNT4_WALLMASTER
    ENPR2_PARAMS(PR2_TYPE_SPAWNED, 0),                   // EN_ENCOUNT4_SKULLFISH_RESPAWNING
    ENPR2_PARAMS(PR2_TYPE_PATHING, 0)                    // EN_ENCOUNT4_SKULLFISH_PATHING
};

void EnEncount4_Init(Actor* thisx, PlayState* play) {
    EnEncount4* this = (EnEncount4*)thisx;

    if (this->actor.params <= 0) {
        Actor_Kill(&this->actor);
        return;
    }

    this->type             = ENENCOUNT4_GET_TYPE(&this->actor);
    this->spawnActiveMax   = ENENCOUNT4_GET_SPAWN_ACTIVE_MAX(&this->actor);
    this->spawnTotalMax    = ENENCOUNT4_GET_SPAWN_TOTAL_MAX(&this->actor);
    this->spawnTimeMin     = ENENCOUNT4_GET_SPAWN_TIME_MIN(&this->actor);
    this->spawnDropTable   = ENENCOUNT4_GET_SPAWN_DROP_ID(&this->actor);
    this->spawnDistanceMax = (ENENCOUNT4_GET_SPAWN_DISTANCE_MAX(&this->actor) * 40.0f) + 120.0f;

    if (this->spawnTotalMax >= ENENCOUNT4_SPAWNS_TOTAL_MAX_INFINITE)
        this->spawnTotalMax = -1;
    if (ENENCOUNT4_GET_SPAWN_DISTANCE_MAX(&this->actor) < 0)
        this->spawnDistanceMax = -1.0f;
    if (this->type == EN_ENCOUNT4_SKULLFISH_PATHING) {
        this->pathIndex = ENENCOUNT4_GET_PATH_INDEX(&this->actor);
        this->path = Path_GetByIndex(play, this->pathIndex, ENENCOUNT4_PATH_INDEX_NONE);
        this->spawnTotalMax = -1;
        this->spawnDistanceMax = -1.0f;
    }
    this->actor.flags &= ~ACTOR_FLAG_ATTENTION_ENABLED;
    this->actionFunc = EnEncount4_SpawnActor;
}

void EnEncount4_SpawnActor(EnEncount4* this, PlayState* play) {
    Player* player = GET_PLAYER(play);
    CollisionPoly* floorPoly;
    Vec3f spawnPos;
    f32 scale, floorHeight;
    s32 bgId;
    s16 rotY, actorId;
    u16 actorParams;

    if ((this->spawnActiveCount >= this->spawnActiveMax || (this->spawnDistanceMax > 0.0f && this->spawnDistanceMax < this->actor.xzDistToPlayer) || (this->spawnTotalMax > 0 && this->spawnTotalMax <= this->spawnTotalCount)))
        return;

    if (this->timer != 0) {
        this->timer++;
        if (this->timer < this->spawnTimeMin)
            return;
    }

    this->timer = 0;
    switch (this->type) {
        case EN_ENCOUNT4_GRASSHOPPER:
            scale = Rand_CenteredFloat(40.0f) + 200.0f;
            rotY = player->actor.shape.rot.y;
            if (this->spawnActiveCount & 1) {
                rotY = -rotY;
                scale = Rand_CenteredFloat(20.0f) + 100.0f;
            }
            spawnPos.x = player->actor.world.pos.x + (Math_SinS(rotY) * scale) + Rand_CenteredFloat(40.0f);
            spawnPos.y = player->actor.floorHeight + 120.0f;
            spawnPos.z = player->actor.world.pos.z + (Math_CosS(rotY) * scale) + Rand_CenteredFloat(40.0f);
            floorHeight = BgCheck_EntityRaycastDown4(&play->colCtx, &floorPoly, &bgId, &this->actor, &spawnPos);
            if (floorHeight <= BGCHECK_Y_MIN || (player->actor.depthInWater != BGCHECK_Y_MIN && floorHeight < (player->actor.world.pos.y - player->actor.depthInWater)))
                return;
            spawnPos.y = floorHeight;
            break;

        case EN_ENCOUNT4_WALLMASTER:
            Math_Vec3f_Copy(&spawnPos, &player->actor.world.pos);
            break;

        case EN_ENCOUNT4_SKULLFISH_RESPAWNING:
            scale = Rand_CenteredFloat(250.0f) + 500.0f;
            rotY = player->actor.shape.rot.y;
            spawnPos.x = player->actor.world.pos.x + (Math_SinS(rotY) * scale) + Rand_CenteredFloat(40.0f);
            spawnPos.y = player->actor.world.pos.y - Rand_ZeroFloat(20.0f);
            spawnPos.z = player->actor.world.pos.z + (Math_CosS(rotY) * scale) + Rand_CenteredFloat(40.0f);
            floorHeight = BgCheck_EntityRaycastDown4(&play->colCtx, &floorPoly, &bgId, &this->actor, &spawnPos);
            if (!(player->stateFlags1 & PLAYER_STATE1_27) || floorHeight <= BGCHECK_Y_MIN || player->actor.depthInWater < floorHeight)
                return;
            break;

        case EN_ENCOUNT4_SKULLFISH_PATHING:
            if (this->path != NULL && !Path_CopyPoint(this->path, 0, &spawnPos))
                Actor_Kill(&this->actor);
            break;

        default:
            break;
    }

    actorId = sActorIds[this->type];
    actorParams = sActorParams[this->type];
    if (Actor_SpawnAsChild(&play->actorCtx, &this->actor, play, actorId, spawnPos.x, spawnPos.y, spawnPos.z, 0, 0, 0, actorParams) != NULL) {
        this->spawnActiveCount++;
        if (this->spawnTotalMax > 0)
            this->spawnTotalCount++;
        if (this->spawnActiveCount >= this->spawnActiveMax && this->spawnTimeMin != 0)
            this->timer = 1;
    }
}

void EnEncount4_Update(Actor* thisx, PlayState* play) {
    EnEncount4* this = (EnEncount4*)thisx;

    this->actionFunc(this, play);
}
