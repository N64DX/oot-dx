#ifndef OBJECT_SBEETLE_H
#define OBJECT_SBEETLE_H

#include "animation.h"
#include "ultra64.h"

typedef enum ObjectMiniblinSkel {
    /* 0x00 */ GSCISSORSBEETLESKEL_BONE_POS_LIMB,
    /* 0x01 */ GSCISSORSBEETLESKEL_BONE_ROT_LIMB,
    /* 0x02 */ GSCISSORSBEETLESKEL_BODYFRONT_LIMB,
    /* 0x03 */ GSCISSORSBEETLESKEL_BODYBACK_LIMB,
    /* 0x04 */ GSCISSORSBEETLESKEL_HORN_L_LIMB,
    /* 0x05 */ GSCISSORSBEETLESKEL_HORN_R_LIMB,
    /* 0x06 */ GSCISSORSBEETLESKEL_HEAD_LIMB,
    /* 0x07 */ GSCISSORSBEETLESKEL_PINCER_L_LIMB,
    /* 0x08 */ GSCISSORSBEETLESKEL_PINCER_R_LIMB,
    /* 0x09 */ GSCISSORSBEETLESKEL_LEGBACK1_L_LIMB,
    /* 0x0A */ GSCISSORSBEETLESKEL_LEGBACK2_L_LIMB,
    /* 0x0B */ GSCISSORSBEETLESKEL_LEGBACK1_R_LIMB,
    /* 0x0C */ GSCISSORSBEETLESKEL_LEGBACK2_R_LIMB,
    /* 0x0D */ GSCISSORSBEETLESKEL_LEGFRONT1_L_LIMB,
    /* 0x0E */ GSCISSORSBEETLESKEL_LEGFRONT2_L_LIMB,
    /* 0x0F */ GSCISSORSBEETLESKEL_LEGFRONT1_R_LIMB,
    /* 0x10 */ GSCISSORSBEETLESKEL_LEGFRONT2_R_LIMB,
    /* 0x11 */ GSCISSORSBEETLESKEL_NUM_LIMBS
} ObjectMiniblinSkel;

extern AnimationHeader gScissorsBeetleSkelIdle1Anim;
extern AnimationHeader gScissorsBeetleSkelIdle2Anim;
extern AnimationHeader gScissorsBeetleSkelIdle3Anim;
extern AnimationHeader gScissorsBeetleSkelWalkAnim;
extern AnimationHeader gScissorsBeetleSkelHopAnim;
extern AnimationHeader gScissorsBeetleSkelAttackAnim;
extern AnimationHeader gScissorsBeetleSkelSwingAnim;
extern AnimationHeader gScissorsBeetleSkelHurtAnim;
extern AnimationHeader gScissorsBeetleSkelDieAnim;

extern FlexSkeletonHeader gScissorsBeetleSkel;

#endif
