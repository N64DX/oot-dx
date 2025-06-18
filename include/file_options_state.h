#ifndef FILE_OPTIONS_STATE_H
#define FILE_OPTIONS_STATE_H

#include "ultra64.h"
#include "game.h"
#include "view.h"

struct FileOptionsState;

typedef struct FileOptionsEntry {
    /* 0x00 */ char* name;
    /* 0x04 */ void  (*setFunc) (void);
    /* 0x04 */ char* (*getFunc) (void);
} FileOptionsEntry; // size = 0x8

typedef struct FileOptionsState {
    /* 0x0000 */ GameState state;
    /* 0x0000 */ FileSelectState fileState;
    /* 0x0000 */ SramContext sramCtx;
    /* 0x00A8 */ View view;
    /* 0x01D0 */ s32 count;
    /* 0x01D4 */ FileOptionsEntry* entries;
    /* 0x01D8 */ s32 currentEntry;
    /* 0x01DC */ s32 pageDownIndex; // Index of pageDownStops
    /* 0x020C */ s32 topDisplayedEntry; // The entry which is currently at the top of the screen
    /* 0x021C */ s32 verticalInputAccumulator;
    /* 0x0220 */ s32 verticalInput;
    /* 0x0224 */ s32 timerUp;
    /* 0x0228 */ s32 timerDown;
    /* 0x022C */ s32 lockUp;
    /* 0x0230 */ s32 lockDown;
    /* 0x0238 */ u8* staticSegment;
} FileOptionsState; // size = 0x240

void FileOptions_Init(GameState* thisx);
void FileOptions_Destroy(GameState* thisx);

#endif
