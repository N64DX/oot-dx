/**
 * Somaria Cubes System (Elegy Statues)
 * Form-dependent statues spawned by Cane of Somaria (max 3)
 * - Uses MM Elegy of Emptiness shell models from mm.o2r
 * - Form based on current player transformation
 * - Hookshotable
 * - Switchhookable (future)
 * - Can press switches (all forms except Deku; Goron = heavy switches)
 * - Dominion Rod orb swap: hitting a statue swaps player/statue positions
 *
 * Uses actor hijacking on En_Lightbox
 */

#ifndef Z_ITEM_SOMARIA_CUBE_H
#define Z_ITEM_SOMARIA_CUBE_H

#include "ultra64.h"
#include "actor.h"

typedef enum SomariaCubeState {
    SOMARIA_STATE_SPAWN = 0,
    SOMARIA_STATE_IDLE,
    SOMARIA_STATE_HELD,
    SOMARIA_STATE_THROWN
} SomariaCubeState;

#endif
