#ifndef Z_EN_JSO2_H
#define Z_EN_JSO2_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_jso/object_jso.h"

struct EnJso2;

#define EN_JSO2_AFTERIMAGE_COUNT 20
#define EN_JSO2_FLAME_COUNT      6

typedef void (*EnJso2ActionFunc) (struct EnJso2*, struct PlayState*);

typedef enum EnJso2Type {
    /* 0 */ EN_JSO2_TYPE_LIGHT_ARROW_ROOM, // This type is exclusively used by the Garo Master in Stone Tower Temple who guards the Light Arrow. It has an intro and death cutscene, and the intro cutscene uses many hardcoded coordinates which assume the Garo Master is in the Light Arrow room.
    /* 1 */ EN_JSO2_TYPE_NORMAL            // This type is used everywhere outside of Stone Tower Temple, and it lacks an intro or death cutscene.
} EnJso2Type;

typedef enum EnJso2BodyPart {
    /*  0 */ EN_JSO2_BODYPART_LEFT_SWORD,
    /*  1 */ EN_JSO2_BODYPART_RIGHT_SWORD,
    /*  2 */ EN_JSO2_BODYPART_ROBE_TOP,
    /*  3 */ EN_JSO2_BODYPART_ROBE_BACK,
    /*  4 */ EN_JSO2_BODYPART_ROBE_LEFT,
    /*  5 */ EN_JSO2_BODYPART_ROBE_RIGHT,
    /*  6 */ EN_JSO2_BODYPART_ROBE_FRONT,
    /*  7 */ EN_JSO2_BODYPART_HEAD,
    /*  8 */ EN_JSO2_BODYPART_RIGHT_THIGH,
    /*  9 */ EN_JSO2_BODYPART_RIGHT_FOOT,
    /* 10 */ EN_JSO2_BODYPART_LEFT_THIGH,
    /* 11 */ EN_JSO2_BODYPART_LEFT_FOOT,
    /* 12 */ EN_JSO2_BODYPART_MAX
} EnJso2BodyPart;

typedef enum EnJso2Action {
    /*  0 */ EN_JSO2_ACTION_INTRO_CUTSCENE,
    /*  1 */ EN_JSO2_ACTION_UNK_1, // Checked in EnJso2_Update, but never actually used
    /*  2 */ EN_JSO2_ACTION_UNK_2, // Checked in EnJso2_UpdateDamage, but never actually used
    /*  3 */ EN_JSO2_ACTION_CIRCLE_PLAYER,
    /*  4 */ EN_JSO2_ACTION_GUARD,
    /*  5 */ EN_JSO2_ACTION_SPIN_BEFORE_ATTACK,
    /*  6 */ EN_JSO2_ACTION_DASH_ATTACK,
    /*  7 */ EN_JSO2_ACTION_SLASH,
    /*  8 */ EN_JSO2_ACTION_SPIN_ATTACK,
    /*  9 */ EN_JSO2_ACTION_WAIT_AFTER_SLASH,
    /* 10 */ EN_JSO2_ACTION_STUNNED,
    /* 11 */ EN_JSO2_ACTION_DAMAGED,
    /* 12 */ EN_JSO2_ACTION_JUMP_BACK,
    /* 13 */ EN_JSO2_ACTION_DEAD,
    /* 14 */ EN_JSO2_ACTION_BLOW_UP,
    /* 15 */ EN_JSO2_ACTION_TELEPORT,
    /* 16 */ EN_JSO2_ACTION_FALL_FROM_TELEPORT
} EnJso2Action;

typedef enum EnJso2IntroCsState {
    /*  0 */ EN_JSO2_INTRO_CS_STATE_WAITING_FOR_PLAYER_TO_APPROACH, // Waits for the player to walk toward the Garo Master, then starts the cutscene and transitions to the next state.
    /*  1 */ EN_JSO2_INTRO_CS_STATE_STARTED,                        // Positions the Garo Master, player, and sub camera variables appropriately, then transitions to the next state.
    /*  2 */ EN_JSO2_INTRO_CS_STATE_MOVE_PLAYER_FORWARD,            // Automatically moves the player forward a little bit to get closer to the center of the room.
    /*  3 */ EN_JSO2_INTRO_CS_STATE_SPAWN_FALLING_ROCKS,            // Waits 9 frames, then spawns some rocks to fall from the ceiling.
    /*  4 */ EN_JSO2_INTRO_CS_STATE_WAIT_FOR_ROCKS_TO_FALL,         // Waits 25 frames for the rocks that were spawned in the previous state to fall down and hit the ground.
    /*  5 */ EN_JSO2_INTRO_CS_STATE_PLAYER_SURPRISED,               // Makes the player perform their "surprised" animation, and waits 20 frames.
    /*  6 */ EN_JSO2_INTRO_CS_STATE_PAN_CAMERA_UPWARDS,             // Slowly pans the camera upwards to look at the Garo Master standing above the hole in the ceiling.
    /*  7 */ EN_JSO2_INTRO_CS_STATE_WAIT_BEFORE_LAUGH,              // Waits for 5 frames, doing nothing, before the Garo Master laughs.
    /*  8 */ EN_JSO2_INTRO_CS_STATE_LAUGH,                          // Waits for 45 frames to let the Garo Master's laugh play out.
    /*  9 */ EN_JSO2_INTRO_CS_STATE_JUMP_DOWN,                      // Makes the Garo Master jump down from the hole in the ceiling, drawing afterimages as it falls, until it lands.
    /* 10 */ EN_JSO2_INTRO_CS_STATE_LAND,                           // Spawns a ring of dust, draws afterimages, and plays the landing animation to completion.
    /* 11 */ EN_JSO2_INTRO_CS_STATE_DRAW_SWORDS                     // Makes the Garo Master draw its swords, and gradually scales up the flames on the swords. This state also ends the cutscene once the animation for drawing the swords completes.
} EnJso2IntroCsState;

typedef enum EnJso2AppearState {
    /* 0 */ EN_JSO2_APPEAR_STATE_STARTED,  // Spawns a dust ring, disables the current BGM, plays the "appearance" SFX, and transitions to the next state.
    /* 1 */ EN_JSO2_APPEAR_STATE_APPEARING // This state handles all other aspects of the Garo Master's appearance (starting the mini-boss BGM, scaling up the flames on the swords, etc.)
} EnJso2AppearState;

typedef enum EnJso2DeathCsState {
    /* 0 */ EN_JSO2_DEATH_CS_STATE_STARTED,               // Starts the cutscene and immediately transitions to the next state.
    /* 1 */ EN_JSO2_DEATH_CS_STATE_COLLAPSE,              // Plays the animation of the Garo Master collapsing down onto one knee.
    /* 2 */ EN_JSO2_DEATH_CS_STATE_TREMBLE,               // Plays one loop of the animation where the Garo Master is trembling.
    /* 3 */ EN_JSO2_DEATH_CS_STATE_TELL_HINT,             // Tells the player a hint about using the Light Arrow. The Garo Master also takes its bomb out in this state.
    /* 4 */ EN_JSO2_DEATH_CS_STATE_BLOW_UP_AND_FADE_AWAY, // Detonates the Garo Master's bomb and slowly reduces its alpha until it completely fades away.
    /* 5 */ EN_JSO2_DEATH_CS_STATE_WAIT_AND_END           // Waits for 50 frames to let the Garo Master's laugh play out, then ends the cutscene.
} EnJso2DeathCsState;

typedef enum EnJso2SwordState {
    /* 0 */ EN_JSO2_SWORD_STATE_BOTH_DRAWN,
    /* 2 */ EN_JSO2_SWORD_STATE_NONE_DRAWN = 2 // If the Garo Master is about to blow itself up, it will use this sword state, but EnJso2_OverrideLimbDraw will draw the left sword anyway. When the Garo Master is defeated, the animations for its "weakened" state has it support itself with its left sword, so it wouldn't look right if the sword wasn't drawn.
} EnJso2SwordState;

typedef enum EnJso2DamageEffect {
    /* 0x0 */ EN_JSO2_DMGEFF_IMMUNE,        // Deals no damage and has no special effect
    /* 0x1 */ EN_JSO2_DMGEFF_STUN,          // Deals no damage but stuns the Garo Master
    /* 0x2 */ EN_JSO2_DMGEFF_FIRE,          // Damages and sets the Garo Master on fire
    /* 0x3 */ EN_JSO2_DMGEFF_FREEZE,        // Damages and surrounds the Garo Master with ice
    /* 0x4 */ EN_JSO2_DMGEFF_LIGHT_ORB,     // Damages and surrounds the Garo Master with light orbs
    /* 0x5 */ EN_JSO2_DMGEFF_ELECTRIC_STUN, // Behaves like EN_JSO2_DMGEFF_STUN, but also applies an electric effect
    /* 0xF */ EN_JSO2_DMGEFF_NONE = 0xF     // Damages the Garo Master and has no special effect
} EnJso2DamageEffect;

typedef enum EnJso2Animation {
    /*  0 */ EN_JSO2_ANIM_DASH_ATTACK,
    /*  1 */ EN_JSO2_ANIM_SLASH_START,
    /*  2 */ EN_JSO2_ANIM_SLASH_LOOP,
    /*  3 */ EN_JSO2_ANIM_JUMP_BACK,
    /*  4 */ EN_JSO2_ANIM_DAMAGED,
    /*  5 */ EN_JSO2_ANIM_GUARD,
    /*  6 */ EN_JSO2_ANIM_APPEAR,       // unused
    /*  7 */ EN_JSO2_ANIM_IDLE,         // unused
    /*  8 */ EN_JSO2_ANIM_BOUNCE,
    /*  9 */ EN_JSO2_ANIM_FALL_DOWN,    // unused
    /* 10 */ EN_JSO2_ANIM_KNOCKED_BACK, // unused
    /* 11 */ EN_JSO2_ANIM_COWER,        // unused
    /* 12 */ EN_JSO2_ANIM_LOOK_AROUND,
    /* 13 */ EN_JSO2_ANIM_APPEAR_AND_DRAW_SWORDS,
    /* 14 */ EN_JSO2_ANIM_SPIN_ATTACK,
    /* 15 */ EN_JSO2_ANIM_LAND,
    /* 16 */ EN_JSO2_ANIM_JUMP_DOWN,
    /* 17 */ EN_JSO2_ANIM_LAUGH,
    /* 18 */ EN_JSO2_DRAW_SWORDS,
    /* 19 */ EN_JSO2_COLLAPSE,
    /* 20 */ EN_JSO2_TREMBLE,
    /* 21 */ EN_JSO2_TAKE_OUT_BOMB,
    /* 22 */ EN_JSO2_ANIM_MAX
} EnJso2Animation;

typedef struct EnJso2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime skelAnime;
    /* 0x0188 */ Vec3s jointTable[GARO_MASTER_LIMB_MAX];
    /* 0x0200 */ Vec3s morphTable[GARO_MASTER_LIMB_MAX];
    /* 0x0278 */ EnJso2ActionFunc actionFunc;
    /* 0x0284 */ s16 action;
    /* 0x0286 */ s16 circlingAngle;
    /* 0x0288 */ s16 circlingAngularVelocity;
    /* 0x028A */ s16 attackMovementTimer;
    /* 0x028E */ s16 attackTimer;
    /* 0x0290 */ s16 timer;
    /* 0x0294 */ f32 subCamMaxVelocityFrac;
    /* 0x0298 */ f32 subCamVelocity;
    /* 0x029C */ s32 type;
    /* 0x02A0 */ s16 drawDmgEffAlpha;
    /* 0x02A2 */ s16 drawDmgEffType;
    /* 0x02A4 */ f32 drawDmgEffScale;
    /* 0x02A8 */ f32 drawDmgEffFrozenSteamScale;
    /* 0x02B0 */ s16 bodyPartsCount;
    /* 0x02B4 */ s32 isFadingAway;
    /* 0x02B8 */ Vec3f baseSubCamEye;
    /* 0x02C4 */ Vec3f bombPos;
    /* 0x02D0 */ Actor* bomb;
    /* 0x02D4 */ Vec3f bodyPartsPos[EN_JSO2_BODYPART_MAX];
    /* 0x0364 */ s16 bodyPartIndex;
    /* 0x0366 */ s16 alpha;
    /* 0x0368 */ u8 disableBlure;
    /* 0x036C */ s32 swordState;
    /* 0x0371 */ u8 slashHitSomething;
    /* 0x0374 */ f32 animEndFrame;
    /* 0x0378 */ f32 scale;
    /* 0x0380 */ s32 rightSwordBlureIndex;
    /* 0x0384 */ s32 leftSwordBlureIndex;
    /* 0x0388 */ s32 afterimageCount;
    /* 0x038C */ s16 afterimageIndex;
    /* 0x038E */ s16 flameScroll;
    /* 0x0390 */ Vec3f afterimagePos[EN_JSO2_AFTERIMAGE_COUNT];
    /* 0x0480 */ Vec3s afterimageRot[EN_JSO2_AFTERIMAGE_COUNT];
    /* 0x04F8 */ Vec3s afterimageJointTable[EN_JSO2_AFTERIMAGE_COUNT][GARO_MASTER_LIMB_MAX];
    /* 0x0E58 */ Vec3f knockbackVelocity; // Adds a little push backwards when the Garo Master is bounced off the player's shield, damaged, or stunned
    /* 0x0E64 */ Vec3f flamePos[EN_JSO2_FLAME_COUNT];
    /* 0x0EAC */ Vec3f flameScale[EN_JSO2_FLAME_COUNT];
    /* 0x0EF4 */ ColliderCylinder bodyCollider;
    /* 0x0F40 */ ColliderQuad rightSwordCollider;
    /* 0x0FC0 */ ColliderQuad leftSwordCollider;
    /* 0x1040 */ s32 animIndex;
    /* 0x1044 */ s16 cutsceneTimer;
    /* 0x1046 */ union {
                    s16 cutsceneState; // exclusively used by the EN_JSO2_TYPE_LIGHT_ARROW_ROOM type
                    s16 appearState;   // exclusively used by the EN_JSO2_TYPE_NORMAL type
                };
    /* 0x1048 */ s16 subCamId;
    /* 0x104A */ s16 blowUpFrameCounter;
    /* 0x104C */ f32 subCamFov;
    /* 0x1050 */ f32 subCamFovNext;
    /* 0x1054 */ Vec3f subCamEye;
    /* 0x1060 */ Vec3f subCamAt;
    /* 0x1078 */ Vec3f subCamEyeNext;
    /* 0x1084 */ Vec3f subCamAtNext;
} EnJso2; // size = 0x1090

#endif
