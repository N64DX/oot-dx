#ifndef Z_EN_WIZ_BROCK_H
#define Z_EN_WIZ_BROCK_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_wiz/object_wiz.h"

typedef enum EnWizBrockPlatformType {
    /* 0 */ EN_WIZ_BROCK_PLATFORM_TYPE_INACTIVE,
    /* 1 */ EN_WIZ_BROCK_PLATFORM_TYPE_FIRE,
    /* 2 */ EN_WIZ_BROCK_PLATFORM_TYPE_ICE,
    /* 3 */ EN_WIZ_BROCK_PLATFORM_TYPE_MAX
} EnWizBrockPlatformType;

struct EnWizBrock;

typedef void (*EnWizBrockActionFunc) ( struct EnWizBrock*, struct PlayState*);

typedef struct EnWizBrock {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x1A0 */ EnWizBrockActionFunc actionFunc;
    /* 0x1A4 */ s16 timer; // Counter for despawing blocks (Max of 37)
    /* 0x1A8 */ u8 platformIndex; // Numeric identifier for platform
    /* 0x1AA */ u8 platformType; // Determines element type for platform (ice/fire)
    /* 0x1AC */ f32 alpha;
} EnWizBrock; // size = 0x1B0

#endif
