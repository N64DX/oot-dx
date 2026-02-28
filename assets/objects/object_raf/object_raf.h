#ifndef OBJECT_RAF_H
#define OBJECT_RAF_H

#include "bgcheck.h"
#include "animation.h"
#include "ultra64.h"

typedef enum CarnivorousLilyPadLimb {
    /* 0x00 */ CARNIVOROUS_LILY_PAD_LIMB_NONE,
    /* 0x01 */ CARNIVOROUS_LILY_PAD_LIMB_FLOWER,
    /* 0x02 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_LOWER_SEGMENT,
    /* 0x03 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_MIDDLE_SEGMENT,
    /* 0x04 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_1_UPPER_SEGMENT,
    /* 0x05 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_LOWER_SEGMENT,
    /* 0x06 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_MIDDLE_SEGMENT,
    /* 0x07 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_2_UPPER_SEGMENT,
    /* 0x08 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_LOWER_SEGMENT,
    /* 0x09 */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_MIDDLE_SEGMENT,
    /* 0x0A */ CARNIVOROUS_LILY_PAD_LIMB_TRAP_3_UPPER_SEGMENT,
    /* 0x0B */ CARNIVOROUS_LILY_PAD_LIMB_ROOTS,
    /* 0x0C */ CARNIVOROUS_LILY_PAD_LIMB_MAX
} CarnivorousLilyPadLimb;

extern u64 gCarnivorousLilyPadTrapPetalTex[];
extern u64 gCarnivorousLilyPadTrapTeethTex[];
extern CollisionPoly gCarnivorousLilyPadColPolygons[];
extern Gfx gCarnivorousLilyPadTexturelessPlatformDL[];
extern Gfx gCarnivorousLilyPadFlowerDL[];
extern Gfx gCarnivorousLilyPadRootsDL[];
extern Gfx gCarnivorousLilyPadTrap3LowerSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap3MiddleSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap3UpperSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap2LowerSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap2MiddleSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap2UpperSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap1LowerSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap1MiddleSegmentDL[];
extern Gfx gCarnivorousLilyPadTrap1UpperSegmentDL[];
extern Gfx gCarnivorousLilyPadParticlePetalDL[];
extern Gfx gCarnivorousLilyPadParticleTeethDL[];
extern Gfx gCarnivorousLilyPadParticleDL[];
extern Vec3s gCarnivorousLilyPadColVertices[];
extern CollisionHeader gCarnivorousLilyPadCol;
extern AnimationHeader gCarnivorousLilyPadConvulseAnim;
extern AnimationHeader gCarnivorousLilyPadDeathAnim;
extern AnimationHeader gCarnivorousLilyPadSpitAnim;
extern AnimationHeader gCarnivorousLilyPadChewAnim;
extern AnimationHeader gCarnivorousLilyPadCloseAnim;
extern void* gCarnivorousLilyPadSkelLimbs[];
extern FlexSkeletonHeader gCarnivorousLilyPadSkel;

#endif
