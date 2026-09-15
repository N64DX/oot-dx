/**
 * Somaria Cubes - Elegy statues with hookshot + switchhook support
 * Uses MM Elegy of Emptiness shell models from mm.o2r
 * Uses actor hijacking on En_Lightbox
 *
 * Behavior is identical to the original colored cubes:
 * pick up, throw, wall bounce, switch pressing, hookshot, switchhook.
 * Only the visuals changed to elegy shell DLs.
 */

#include "z_item_somaria_cube.h"

#include "sfx.h"
#include "z_lib.h"
#include "play_state.h"
#include "bgcheck.h"
#include "player.h"

#include "overlays/actors/ovl_En_Lightbox/z_en_lightbox.h"
#include "overlays/actors/ovl_Bg_Bdan_Switch/z_bg_bdan_switch.h"
#include "assets/objects/gameplay_keep/gameplay_keep_extra.h"

#define SOMARIA_MAX_CUBES         3
#define SOMARIA_MAX_COLLIDERS    12      // 3 local + up to 9 remote (3 per remote player)
#define SOMARIA_CUBE_SCALE        0.01f // Elegy shells are large models, scale down
#define SOMARIA_CUBE_SIZE        30
#define SOMARIA_SPAWN_FRAMES     20

#define SOMARIA_GRAVITY          -2.0f
#define SOMARIA_THROW_VEL_Y       8.0f
#define SOMARIA_THROW_SPEED_XZ    6.0f
#define SOMARIA_MIN_VEL_Y       -20.0f

#define SOMARIA_CYL_RADIUS       20
#define SOMARIA_CYL_HEIGHT       60
#define SOMARIA_MASS            255 // MASS_IMMOVABLE

#define SOMARIA_KNOCKBACK_DAMAGE  4

#define SOMARIA_GET_STATE(actor)    ((actor)->home.rot.x)
#define SOMARIA_SET_STATE(actor, s) ((actor)->home.rot.x = (s))
#define SOMARIA_GET_TIMER(actor)    ((actor)->home.rot.z)
#define SOMARIA_SET_TIMER(actor, t) ((actor)->home.rot.z = (t))

#define ACTOR_FLAG_SWITCHHOOKABLE (1 << 28)

#define FLAGS 0

void ObjSomariaCube_Init(Actor* thisx, PlayState* play);
void ObjSomariaCube_Destroy(Actor* thisx, PlayState* play);
void ObjSomariaCube_Update(Actor* thisx, PlayState* play);
void ObjSomariaCube_Draw(Actor* thisx, PlayState* play);

ActorProfile Item_Somaria_Cube_Profile = {
    /**/ ACTOR_ITEM_SOMARIA_CUBE,
    /**/ ACTORCAT_PROP,
    /**/ FLAGS,
    /**/ OBJECT_GAMEPLAY_KEEP,
    /**/ sizeof(Actor),
    /**/ ObjSomariaCube_Init,
    /**/ ObjSomariaCube_Destroy,
    /**/ ObjSomariaCube_Update,
    /**/ ObjSomariaCube_Draw,
};

// MM's EnTorch2_Draw calls Scene_SetRenderModeXlu(play, 0, 0x01) which sets segment 0x0C to sRenderModeSetNoneDL (all gsSPEndDisplayList). The elegy DLs reference 0x0C at offsets 0x00 and 0x10, so those calls become no-ops. The DLs have their own gsSPLoadGeometryMode calls for culling.
// Setting actual cull modes here would ADD cull bits on top of existing ones, making both CULL_BACK+CULL_FRONT active = everything invisible.
static Gfx sSegment0xC_Noop[] = {
    gsSPEndDisplayList(), // offset 0x00 (called by 0x0C000000)
    gsSPEndDisplayList(), // offset 0x08
    gsSPEndDisplayList(), // offset 0x10 (called by 0x0C000010)
    gsSPEndDisplayList(), // offset 0x18
};

static ColliderCylinderInit sColliderInit = {
    {
        COL_MATERIAL_NONE,
        AT_NONE,
        AC_ON | AC_TYPE_PLAYER,
        OC1_NONE,
        OC2_NONE,
        COLSHAPE_CYLINDER,
    },
    {
        ELEM_MATERIAL_UNK0,
        { 0x00000000, HIT_SPECIAL_EFFECT_NONE, 0x00 },
        { 0xFFCFFFFF, HIT_BACKLASH_NONE, 0x00 },
        ATELEM_NONE,
        ACELEM_ON | ACELEM_HOOKABLE,
        OCELEM_NONE,
    },
    { SOMARIA_CYL_RADIUS, SOMARIA_CYL_HEIGHT, 0, { 0, 0, 0 } },
};

typedef struct ColliderSlot {
    ColliderCylinder collider;
    Actor* owner; // Which cube owns this slot (NULL = free)
    u8 initialized;
} ColliderSlot;

static ColliderSlot sColliderPool[SOMARIA_MAX_COLLIDERS] = { 0 };

s8 ObjSomariaCube_GetColliderSlot(Actor* actor) {
    s8 i;

    for (i=0; i<SOMARIA_MAX_COLLIDERS; i++)
        if (sColliderPool[i].owner == actor)
            return i;
    return -1;
}

s8 ObjSomariaCube_AllocCollider(PlayState* play, Actor* actor) {
    s8 i;

    for (i=0; i<SOMARIA_MAX_COLLIDERS; i++) {
        if (sColliderPool[i].owner == NULL) {
            if (!sColliderPool[i].initialized) {
                Collider_InitCylinder(play, &sColliderPool[i].collider);
                sColliderPool[i].initialized = 1;
            }
            Collider_SetCylinder(play, &sColliderPool[i].collider, actor, &sColliderInit);
            sColliderPool[i].owner = actor;
            return i;
        }
    }

    for (i=0; i<SOMARIA_MAX_COLLIDERS; i++) {
        if (sColliderPool[i].owner != NULL && sColliderPool[i].owner->update == NULL) {
            sColliderPool[i].owner = actor;
            Collider_SetCylinder(play, &sColliderPool[i].collider, actor, &sColliderInit);
            return i;
        }
    }
    return -1;
}

void ObjSomariaCube_FreeCollider(PlayState* play, Actor* actor) {
    s8 slot = ObjSomariaCube_GetColliderSlot(actor);

    if (slot >= 0)
        sColliderPool[slot].owner = NULL; // Don't destroy - reuse the initialized collider
}

void ObjSomariaCube_PlaySound(Actor* actor, u16 sfxId) {
    Audio_PlaySfxGeneral(sfxId, &actor->projectedPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

// Check and activate Bg_Bdan_Switch (YELLOW_HEAVY type 0x01) when cube is on top
void ObjSomariaCube_TryActivateHeavySwitch(Actor* cube, PlayState* play) {
    Actor* actor = play->actorCtx.actorLists[ACTORCAT_SWITCH].head;

    while (actor != NULL) {
        if (actor->id == ACTOR_BG_BDAN_SWITCH) {
            u8 switchType = actor->params & 0xFF;

            if (switchType == YELLOW_HEAVY) { // Only affect YELLOW_HEAVY (0x01) switches
                f32 dx = cube->world.pos.x - actor->world.pos.x; // Check if cube is within horizontal range of switch
                f32 dz = cube->world.pos.z - actor->world.pos.z;
                f32 distXZ = sqrtf(dx * dx + dz * dz);
                f32 dy = cube->world.pos.y - actor->world.pos.y; // Check if cube is above switch (within vertical tolerance)

                if (distXZ < 40.0f && dy >= 0.0f && dy < 50.0f) { // Switch is about 40 units radius, cube needs to be on top
                    u8 switchFlag = (actor->params >> 8) & 0x3F; // Activate the switch flag
                    if (!Flags_GetSwitch(play, switchFlag)) {
                        Flags_SetSwitch(play, switchFlag);
                        ObjSomariaCube_PlaySound(cube, NA_SE_EV_FOOT_SWITCH);
                        Audio_PlaySfxGeneral(NA_SE_SY_CORRECT_CHIME, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb); // Play the chime
                    }
                }
            }
        }
        actor = actor->next;
    }
}

void ObjSomariaCube_Init(Actor* thisx, PlayState* play) {
    ObjSomariaCube_AllocCollider(play, thisx);
    thisx->gravity = SOMARIA_GRAVITY;
    thisx->minVelocityY = SOMARIA_MIN_VEL_Y;
    thisx->flags |= ACTOR_FLAG_CAN_PRESS_SWITCHES | ACTOR_FLAG_HOOKSHOT_PULLS_PLAYER | ACTOR_FLAG_SWITCHHOOKABLE;
    thisx->room = -1;
    thisx->shape.shadowDraw = NULL;
    thisx->shape.shadowScale = 0.0f;
    Actor_SetScale(thisx, 0.0f);
    SOMARIA_SET_STATE(thisx, SOMARIA_STATE_SPAWN);
    SOMARIA_SET_TIMER(thisx, SOMARIA_SPAWN_FRAMES);
    ObjSomariaCube_PlaySound(thisx, NA_SE_PL_MAGIC_FIRE);
}

void ObjSomariaCube_Update(Actor* thisx, PlayState* play) {
    SomariaCubeState state = SOMARIA_GET_STATE(thisx);
    s16 timer = SOMARIA_GET_TIMER(thisx);
    Player* player = GET_PLAYER(play);
    s8 slot;

    if (player == NULL)
        return;

    if (timer > 0) {
        SOMARIA_SET_TIMER(thisx, timer - 1);
        timer--;
    }

    switch (state) {
        case SOMARIA_STATE_SPAWN:
            if (thisx->scale.x < SOMARIA_CUBE_SCALE) {
                thisx->scale.x += SOMARIA_CUBE_SCALE / SOMARIA_SPAWN_FRAMES;
                thisx->scale.y = thisx->scale.z = thisx->scale.x;
            }
            if (timer == 0) {
                Actor_SetScale(thisx, SOMARIA_CUBE_SCALE);
                SOMARIA_SET_STATE(thisx, SOMARIA_STATE_IDLE);
            }
            Actor_MoveXZGravity(thisx);
            Actor_UpdateBgCheckInfo(play, thisx, 30.0f, 15.0f, 0.0f, 0x1D);
            break;

        case SOMARIA_STATE_IDLE:
            if (Actor_HasParent(thisx, play)) {
                SOMARIA_SET_STATE(thisx, SOMARIA_STATE_HELD);
                thisx->room = -1;
                break;
            }

            if (thisx->speed > 0.1f && (thisx->bgCheckFlags & BGCHECKFLAG_WALL)) {
                thisx->world.rot.y = thisx->wallYaw;
                ObjSomariaCube_PlaySound(thisx, NA_SE_EV_BOMB_BOUND);
                thisx->speed *= 0.7f;
                thisx->bgCheckFlags &= ~BGCHECKFLAG_WALL;
            }

            if (thisx->bgCheckFlags & BGCHECKFLAG_GROUND) {
                Math_StepToF(&thisx->speed, 0.0f, 1.0f);
                if ((thisx->bgCheckFlags & 0x2) && thisx->velocity.y < -4.0f) {
                    ObjSomariaCube_PlaySound(thisx, NA_SE_EV_BLOCK_BOUND);
                    thisx->velocity.y *= -0.3f;
                }
                Actor_OfferCarry(thisx, play); // Allow player to pick up the cube
                ObjSomariaCube_TryActivateHeavySwitch(thisx, play); // Check if cube is on a heavy weight switch (Bg_Bdan_Switch type 0x01)
            } else Math_StepToF(&thisx->speed, 0.0f, 0.2f);

            Actor_MoveXZGravity(thisx);
            Actor_UpdateBgCheckInfo(play, thisx, 30.0f, 15.0f, 0.0f, 0x1D);
            break;

        case SOMARIA_STATE_HELD:
            if (Actor_HasNoParent(thisx, play)) {
                SOMARIA_SET_STATE(thisx, SOMARIA_STATE_THROWN);
                thisx->velocity.y = SOMARIA_THROW_VEL_Y;
                thisx->speed = SOMARIA_THROW_SPEED_XZ;
                thisx->world.rot.y = player->actor.shape.rot.y;
            }
            break;

        case SOMARIA_STATE_THROWN:
            if (thisx->bgCheckFlags & BGCHECKFLAG_WALL) {
                thisx->world.rot.y = thisx->wallYaw;
                ObjSomariaCube_PlaySound(thisx, NA_SE_EV_BOMB_BOUND);
                thisx->speed *= 0.5f;
                thisx->bgCheckFlags &= ~BGCHECKFLAG_WALL;
            }

            if (thisx->bgCheckFlags & BGCHECKFLAG_GROUND) {
                SOMARIA_SET_STATE(thisx, SOMARIA_STATE_IDLE);
                ObjSomariaCube_PlaySound(thisx, NA_SE_EV_BLOCK_BOUND);
            }

            Actor_MoveXZGravity(thisx);
            Actor_UpdateBgCheckInfo(play, thisx, 30.0f, 15.0f, 0.0f, 0x1D);
            break;
    }

    thisx->focus.pos = thisx->world.pos;
    thisx->focus.pos.y += 15.0f;

    slot = ObjSomariaCube_GetColliderSlot(thisx); // Update collider from pool (AC only for hookshot)
    if (slot >= 0) {
        Collider_UpdateCylinder(thisx, &sColliderPool[slot].collider);
        CollisionCheck_SetAC(play, &play->colChkCtx, &sColliderPool[slot].collider.base);
    }
}

void ObjSomariaCube_Draw(Actor* thisx, PlayState* play) {
    if (thisx->scale.x <= 0.001f)
        return;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    gSPSegment(POLY_OPA_DISP++, 0x0C, sSegment0xC_Noop); // MM's EnTorch2_Draw sets segment 0x0C to no-op DLists via Scene_SetRenderModeXlu. The elegy DLs call gsSPDisplayList(0x0C000000/0x0C000010) which become no-ops.
    gDPSetEnvColor(POLY_OPA_DISP++, 255, 255, 255, 255);
    Gfx_DrawDListOpa(play, gElegyShellHumanDL);
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void ObjSomariaCube_Destroy(Actor* thisx, PlayState* play) {
    ObjSomariaCube_FreeCollider(play, thisx); // Free collider from pool
}
