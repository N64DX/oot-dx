#ifndef _Z_DEMO_EC_H_
#define _Z_DEMO_EC_H_

#include <ultra64.h>
#include <global.h>

struct DemoEc;

typedef void (*DemoEcActionFunc)(struct DemoEc*, GlobalContext*);

typedef struct DemoEc {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ char unk_14C[0x48];
    /* 0x0194 */ s32 unk_194;
    /* 0x0198 */ s32 unk_198;
    /* 0x019C */ char unk_19C[0x0C];
} DemoEc; // size = 0x01A8

extern const ActorInit Demo_Ec_InitVars;

#endif
