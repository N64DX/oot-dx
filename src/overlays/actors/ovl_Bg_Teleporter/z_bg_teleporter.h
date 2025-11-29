#ifndef Z_BG_TELEPORTER_H
#define Z_BG_TELEPORTER_H

#include "ultra64.h"
#include "actor.h"
#include "play_state.h"

struct BgTeleporter;

typedef void (*BgTeleporterActionFunc)(struct BgTeleporter*, struct PlayState*);

typedef struct BgTeleporter {
    DynaPolyActor dyna;
    u8 switchflag;
    u8 enabled;
    u8 triggered;
    u8 canwarp;
    u8 playCutscene;
    u8 teleportType;
    u8 color;
    s16 warpX;
    u8 room;
    u8 timer;
    u8 warpmode;
    Vec3f warpamount;
    BgTeleporterActionFunc actionFunc;
} BgTeleporter;

#endif
