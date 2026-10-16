#ifndef OBJECT_BOSS05_H
#define OBJECT_BOSS05_H

#include "bgcheck.h"
#include "animation.h"
#include "ultra64.h"

typedef enum BioDekuBabaLilyPadLimb {
    /* 0x00 */ BIO_DEKU_BABA_LILY_PAD_LIMB_NONE,
    /* 0x01 */ BIO_DEKU_BABA_LILY_PAD_LIMB_ROOTS,
    /* 0x02 */ BIO_DEKU_BABA_LILY_PAD_LIMB_UPPER_STEM,
    /* 0x03 */ BIO_DEKU_BABA_LILY_PAD_LIMB_MIDDLE_STEM,
    /* 0x04 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LOWER_STEM,
    /* 0x05 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LEFT_UPPER_ARM,
    /* 0x06 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LEFT_LOWER_ARM,
    /* 0x07 */ BIO_DEKU_BABA_LILY_PAD_LIMB_RIGHT_UPPER_ARM,
    /* 0x08 */ BIO_DEKU_BABA_LILY_PAD_LIMB_RIGHT_LOWER_ARM,
    /* 0x09 */ BIO_DEKU_BABA_LILY_PAD_LIMB_LEAF,
    /* 0x0A */ BIO_DEKU_BABA_LILY_PAD_LIMB_MAX
} BioDekuBabaLilyPadLimb;

typedef enum BioDekuBabaHeadLimb {
    /* 0x00 */ BIO_DEKU_BABA_HEAD_LIMB_NONE,
    /* 0x01 */ BIO_DEKU_BABA_HEAD_LIMB_BODY,
    /* 0x02 */ BIO_DEKU_BABA_HEAD_LIMB_LOWER_JAW,
    /* 0x03 */ BIO_DEKU_BABA_HEAD_LIMB_UPPER_JAW,
    /* 0x04 */ BIO_DEKU_BABA_HEAD_LIMB_BACK_UPPER_LEG,
    /* 0x05 */ BIO_DEKU_BABA_HEAD_LIMB_BACK_LOWER_LEG,
    /* 0x06 */ BIO_DEKU_BABA_HEAD_LIMB_BACK_FOOT,
    /* 0x07 */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_UPPER_LEG,
    /* 0x08 */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_LOWER_LEG,
    /* 0x09 */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_FOOT,
    /* 0x0A */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_LOWER_EYESTALK,
    /* 0x0B */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_UPPER_EYESTALK,
    /* 0x0C */ BIO_DEKU_BABA_HEAD_LIMB_LEFT_EYE,
    /* 0x0D */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_LOWER_EYESTALK,
    /* 0x0E */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_UPPER_EYESTALK,
    /* 0x0F */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_EYE,
    /* 0x10 */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_UPPER_LEG,
    /* 0x11 */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_LOWER_LEG,
    /* 0x12 */ BIO_DEKU_BABA_HEAD_LIMB_RIGHT_FOOT,
    /* 0x13 */ BIO_DEKU_BABA_HEAD_LIMB_LEAVES,
    /* 0x14 */ BIO_DEKU_BABA_HEAD_LIMB_MAX
} BioDekuBabaHeadLimb;

extern FlexSkeletonHeader gBioDekuBabaHeadSkel;
extern FlexSkeletonHeader gBioDekuBabaLilyPadSkel;

extern CollisionHeader gBioBabaLilypadCol;

extern AnimationHeader gBioDekuBabaHeadAttackAnim;
extern AnimationHeader gBioDekuBabaHeadChargeAnim;
extern AnimationHeader gBioDekuBabaLilyPadIdleAnim;
extern AnimationHeader gBioDekuBabaHeadDamagedAnim;
extern AnimationHeader gBioDekuBabaHeadSpotAnim;
extern AnimationHeader gBioDekuBabaHeadRapidChompAnim;
extern AnimationHeader gBioDekuBabaHeadChompAnim;
extern AnimationHeader gBioDekuBabaHeadTransformAnim;
extern AnimationHeader gBioDekuBabaHeadIdleAnim;
extern AnimationHeader gBioDekuBabaHeadWalkAnim;

#endif
