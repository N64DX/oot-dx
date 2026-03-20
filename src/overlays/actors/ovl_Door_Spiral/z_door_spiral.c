/*
 * File: z_door_spiral.c
 * Overlay: ovl_Door_Spiral
 * Description: Staircase
 */

#include "z_door_spiral.h"

#include "gfx.h"
#include "gfx_setupdl.h"
#include "sys_matrix.h"
#include "ichain.h"
#include "array_count.h"
#include "play_state.h"
#include "save.h"

#define FLAGS (ACTOR_FLAG_UPDATE_CULLING_DISABLED)

void DoorSpiral_Init(Actor* thisx, struct PlayState* play);
void DoorSpiral_Destroy(Actor* thisx, struct PlayState* play);
void DoorSpiral_Update(Actor* thisx, struct PlayState* play);
void DoorSpiral_Draw(Actor* thisx, struct PlayState* play);

void DoorSpiral_SetupAction(DoorSpiral* this, DoorSpiralActionFunc actionFunc);
u8 DoorSpiral_GetIndex(struct PlayState* play);
void DoorSpiral_GetObject(DoorSpiral* this, struct PlayState* play);

ActorProfile Door_Spiral_Profile = {
    /**/ ACTOR_DOOR_SPIRAL,
    /**/ ACTORCAT_DOOR,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(DoorSpiral),
    /**/ DoorSpiral_Init,
    /**/ DoorSpiral_Destroy,
    /**/ DoorSpiral_Update,
    /**/ DoorSpiral_Draw,
};

typedef struct {
    /* 0x00 */ s16 objectId;
    /* 0x02 */ s16 sceneId;
    /* 0x04 */ Gfx* dLists[2]; // represents a staircase up or down
} SpiralInfo; // size = 0x8

SpiralInfo sSpiralInfoTable[] = {
    { OBJECT_NUMA_OBJ, SCENE_WOODFALL_TEMPLE, { object_numa_obj_DL_004448, object_numa_obj_DL_0007A8 } },
    { OBJECT_NUMA_OBJ, SCENE_WOODFALL_TEMPLE, { object_numa_obj_DL_0051B8, object_numa_obj_DL_0014C8 } },
};

static InitChainEntry sInitChain[] = {
    ICHAIN_VEC3F(scale, 1, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDistance, 4000, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeScale, 500, ICHAIN_CONTINUE),
    ICHAIN_F32(cullingVolumeDownward, 1000, ICHAIN_STOP),
};

void DoorSpiral_SetupAction(DoorSpiral* this, DoorSpiralActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

u8 DoorSpiral_GetIndex(PlayState* play) {
    u8 i;

    for (i=0; i<ARRAY_COUNT(sSpiralInfoTable); i++)
        if (play->sceneId == sSpiralInfoTable[i].sceneId)
            return i;
    return 0;
}

void DoorSpiral_Init(Actor* thisx, PlayState* play) {
    DoorSpiral* this = (DoorSpiral*)thisx;
    s32 transitionId = GET_TRANSITION_ACTOR_INDEX(thisx);

    Actor_ProcessInitChain(&this->actor, sInitChain);
    this->direction = DOORSPIRAL_GET_DIRECTION(thisx);
    this->index = DoorSpiral_GetIndex(play);
    this->objectSlot = Object_GetSlot(&play->objectCtx, sSpiralInfoTable[this->index].objectId);
    
    if (this->objectSlot < 0) {
        Actor_Kill(&this->actor);
        return;
    }
    
    DoorSpiral_SetupAction(this, DoorSpiral_GetObject);
    Actor_SetFocus(&this->actor, 60.0f);
}

void DoorSpiral_Destroy(Actor* thisx, PlayState* play) { }

void DoorSpiral_GetObject(DoorSpiral* this, PlayState* play) {
    if (Object_IsLoaded(&play->objectCtx, this->objectSlot))
        this->actor.objectSlot = this->objectSlot;
}

void DoorSpiral_Update(Actor* thisx, PlayState* play) {
    DoorSpiral* this = (DoorSpiral*)thisx;
    this->actionFunc(this, play);
}

void DoorSpiral_Draw(Actor* thisx, PlayState* play) {
    DoorSpiral* this = (DoorSpiral*)thisx;

    if (this->actor.objectSlot == this->objectSlot)
        Gfx_DrawDListOpa(play, sSpiralInfoTable[this->index].dLists[this->direction]);
}
