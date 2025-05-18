#ifndef RESOLUTION_H
#define RESOLUTION_H

#include "config.h"

#if WIDESCREEN
    #define HIRES_MULTIPLY(var) (var / (HIRES ? 2 : 1) * (HIRES ? 3 : 1))
    #define HIRES_DIVIDE(var) (var / (HIRES ? 3 : 1) * (HIRES ? 2 : 1))
#else
    #define HIRES_MULTIPLY(var) (var * (HIRES ? 2 : 1))
    #define HIRES_DIVIDE(var) (var / (HIRES ? 2 : 1))
#endif

#if HIRES && WIDESCREEN
    #define beatingHeartPulsingSizeX (((-130.0f) * 2) - 15.0f)
    #define beatingHeartPulsingSizeY (94.5f * 1.5f)
#else
    #define beatingHeartPulsingSizeX ((WIDESCREEN ? (-181.5f) : (-130.0f)) * (HIRES ? 2 : 1))
    #define beatingHeartPulsingSizeY (94.5f * (HIRES ? 2 : 1))
#endif

#if HIRES && WIDESCREEN
    #define HIRES_WS true
#else
    #define HIRES_WS false
#endif

#endif
