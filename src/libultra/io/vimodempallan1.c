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
#include "resolution.h"
#include "ultra64.h"
#include "ultra64/viint.h"

OSViMode osViModeMpalHan1 = {
    OS_VI_MPAL_HAN1, // type
    {
        // comRegs
        VI_CTRL_TYPE_16 | VI_CTRL_GAMMA_DITHER_ON | VI_CTRL_GAMMA_ON | VI_CTRL_DIVOT_ON | VI_CTRL_SERRATE_ON |
            VI_CTRL_PIXEL_ADV_DEFAULT, // ctrl
        WIDTH(SCREEN_WIDTH * 2),       // width
        BURST(57, 30, 5, 70),          // burst
        VSYNC(524),                    // vSync
        HSYNC(3088, 0),                // hSync
        LEAP(3100, 3100),              // leap
        HSTART(108, 748),              // hStart
        (SCREEN_WIDTH*1024)/640,       // xScale
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]
            ORIGIN(SCREEN_WIDTH * 2), // origin
            (SCREEN_HEIGHT*1024)/480, // yScale
            VSTART(35, 509),    // vStart
            BURST(2, 2, 11, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]
            ORIGIN(SCREEN_WIDTH * 4), // origin
            (SCREEN_HEIGHT*1024)/480, // yScale
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
        WIDTH(SCREEN_WIDTH),           // width
        BURST(57, 30, 5, 70),          // burst
        VSYNC(525),                    // vSync
        HSYNC(3089, 4),                // hSync
        LEAP(3097, 3098),              // leap
        HSTART(108, 748),              // hStart
        (SCREEN_WIDTH*512)/320,        // xScale
        VCURRENT(0),                   // vCurrent
    },
    {
        // fldRegs
        {
            // [0]
            ORIGIN(SCREEN_WIDTH * 2),  // origin
            (SCREEN_HEIGHT*1024)/240,  // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
        {
            // [1]
            ORIGIN(SCREEN_WIDTH * 2),  // origin
            (SCREEN_HEIGHT*1024)/240,  // yScale
            VSTART(37, 511),    // vStart
            BURST(4, 2, 14, 0), // vBurst
            VINTR(2),           // vIntr
        },
    },
};
