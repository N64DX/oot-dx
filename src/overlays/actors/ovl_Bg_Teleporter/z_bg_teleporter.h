#ifndef Z_BG_TELEPORTER_H
#define Z_BG_TELEPORTER_H

#include "ultra64.h"
#include "actor.h"

struct BgTeleporter;

typedef void (*BgTeleporterActionFunc)(struct BgTeleporter*, struct PlayState*);

typedef struct BgTeleporter {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ s16 warpX;
    /* 0x0166 */ u8 switchflag;
    /* 0x0167 */ u8 enabled;
    /* 0x0168 */ u8 triggered;
    /* 0x0169 */ u8 canwarp;
    /* 0x016A */ u8 playCutscene;
    /* 0x016B */ u8 teleportType;
    /* 0x016C */ u8 color;
    /* 0x016D */ u8 room;
    /* 0x016E */ u8 timer;
    /* 0x016F */ u8 warpmode;
    /* 0x0170 */ Vec3f warpamount;
    /* 0x017C */ BgTeleporterActionFunc actionFunc;
} BgTeleporter; // size = 0x180

#endif
