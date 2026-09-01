#ifndef Z_EN_TEST2_H
#define Z_EN_TEST2_H

#include "ultra64.h"
#include "actor.h"

struct EnTest2;

#define ENTEST2_GET_TYPE(thisx) ((thisx)->params)

typedef enum EnTest2Type {
    /* 0x0 */ EN_TEST2_TYPE_GRAVE_WALL,
    /* 0x1 */ EN_TEST2_TYPE_GRAVE_BRIDGE,
    /* 0x2 */ EN_TEST2_TYPE_MAX
} EnTest2Type;

typedef struct EnTest2 {
    /* 0x000 */ Actor actor;
} EnTest2; // size = 0x144

#endif
