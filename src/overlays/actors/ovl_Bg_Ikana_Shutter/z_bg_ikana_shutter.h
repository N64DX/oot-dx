#ifndef Z_BG_IKANA_SHUTTER_H
#define Z_BG_IKANA_SHUTTER_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_ikana_obj/object_ikana_obj.h"

struct BgIkanaShutter;

typedef void (*BgIkanaShutterActionFunc)(struct BgIkanaShutter*, struct PlayState*);

#define BGIKANASHUTTER_GET_SWITCH_FLAG(thisx) (((thisx)->params) & 0x3F)
#define BGIKANASHUTTER_GET_100(thisx)         (((thisx)->params >> 8) & 1)

typedef struct BgIkanaShutter {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ BgIkanaShutterActionFunc actionFunc;
    /* 0x160 */ u8 csId;
} BgIkanaShutter; // size = 0x164

#endif
