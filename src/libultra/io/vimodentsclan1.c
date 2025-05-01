/**
 * @file vimodentsclan1.c
 *
 * NTSC LAN1 Video Mode
 *
 * L = Low Resolution
 * A = Anti-Aliased
 * N = Deinterlaced
 * 1 = 16-bit Framebuffer
 */
#include "ultra64.h"
#include "ultra64/viint.h"
#include "config.h"

OSViMode osViModeNtscLan1 = {
    OS_VI_NTSC_LAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_ANTIALIAS_MODE_1 |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl

#if WIDESCREEN
        WIDTH(424),                    // width
#else
        WIDTH(320),                    // width
#endif

        BURST(57, 34, 5, 62),          // burst
        VSYNC(525),                    // vSync
        HSYNC(3093, 0),                // hSync
        LEAP(3093, 3093),              // leap
        HSTART(108, 748),              // hStart
#if WIDESCREEN
        0x300,                         // xScale
#else
        SCALE(2, 0),                   // xScale
#endif
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]

#if WIDESCREEN
            ORIGIN(848),        // origin
#else
            ORIGIN(640),        // origin
#endif

            SCALE(1, 0),        // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]

#if WIDESCREEN
            ORIGIN(848),        // origin
#else
            ORIGIN(640),        // origin
#endif

            SCALE(1, 0),        // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
    },
};
