#include "config.h"
#include "ultra64.h"
#include "ultra64/viint.h"

OSViContext vi[2] = { 0 };
OSViContext* __osViCurr = &vi[0];
OSViContext* __osViNext = &vi[1];

void __osViInit(void) {
    bzero(vi, sizeof(vi));
    __osViCurr = &vi[0];
    __osViNext = &vi[1];

    __osViNext->retraceCount = 1;
    __osViCurr->retraceCount = 1;
    __osViNext->framep = (void*)K0BASE;
    __osViCurr->framep = (void*)K0BASE;

    if (osTvType == OS_TV_PAL) {

#if HIRES && INTERLACED
        __osViNext->modep = &osViModePalHan1;
#else
        __osViNext->modep = &osViModePalLan1;
#endif
    } else if (osTvType == OS_TV_MPAL) {

#if HIRES && INTERLACED
        __osViNext->modep = &osViModeMpalHan1;
#else
        __osViNext->modep = &osViModeMpalLan1;
#endif

    } else {

#if HIRES && INTERLACED
        __osViNext->modep = &osViModeNtscHan1;
#else
        __osViNext->modep = &osViModeNtscLan1;
#endif

    }

    __osViNext->state = VI_STATE_BLACK;
    __osViNext->features = __osViNext->modep->comRegs.ctrl;

    while (IO_READ(VI_CURRENT_REG) > 10) {
        ;
    }
    IO_WRITE(VI_CONTROL_REG, 0);
    __osViSwapContext();
}
