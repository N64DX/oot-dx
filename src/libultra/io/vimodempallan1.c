/**
 * @file vimodempallan1.c
 *
 * MPAL LAN1 Video Mode
 *
 * L = Low Resolution
 * A = Anti-Aliased
 * N = Deinterlaced
 * 1 = 16-bit Framebuffer
 */
#include "config.h"
#include "ultra64.h"
#include "ultra64/viint.h"

OSViMode osViModeMpalHan1 = {
    OS_VI_MPAL_HAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_SERRATE_ON |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl
        WIDTH(1280),                   // width
        BURST(57, 30, 5, 70),          // burst
        VSYNC(524),                    // vSync
        HSYNC(3088, 0),                // hSync
        LEAP(3100, 3100),              // leap
        HSTART(108, 748),              // hStart
        SCALE(1, 0),                   // xScale
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]
            ORIGIN(1280),       // origin
            SCALE(1, 0),        // yScale
            VSTART(35, 509),    // vStart
            BURST(2, 2, 11, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]
            ORIGIN(2560),       // origin
            SCALE(1, 0),        // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
    },
};

OSViMode osViModeMpalLan1 = {
    OS_VI_MPAL_LAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_ANTIALIAS_MODE_1 |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl

#if HIRES
        WIDTH(640),                    // width
#elif ULTRA_WS
        WIDTH(560),                    // width
#elif WIDESCREEN
        WIDTH(424),                    // width
#else
        WIDTH(320),                    // width
#endif

        BURST(57, 30, 5, 70),          // burst
        VSYNC(525),                    // vSync
        HSYNC(3089, 4),                // hSync
        LEAP(3097, 3098),              // leap
        HSTART(108, 748),              // hStart

#if HIRES
        0x400,                         // xScale
#elif ULTRA_WS
        0x380,                         // xScale
#elif WIDESCREEN
        0x2A6,                         // xScale
#else
        SCALE(2, 0),                   // xScale
#endif

        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]

#if HIRES
            ORIGIN(1280),       // origin
#elif ULTRA_WS
            ORIGIN(1120),       // origin
#elif WIDESCREEN
            ORIGIN(848),        // origin
#else
            ORIGIN(640),        // origin
#endif

#if HIRES
            0x800,              // yScale
#else
            SCALE(1, 0),        // yScale
#endif

            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]

#if HIRES
            ORIGIN(1280),       // origin
#elif ULTRA_WS
            ORIGIN(1120),       // origin
#elif WIDESCREEN
            ORIGIN(848),        // origin
#else
            ORIGIN(640),        // origin
#endif

#if HIRES
            0x800,              // yScale
#else
            SCALE(1, 0),        // yScale
#endif

            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
    },
};
