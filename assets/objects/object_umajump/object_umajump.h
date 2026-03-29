#ifndef OBJECT_UMAJUMP_H
#define OBJECT_UMAJUMP_H

#include "bgcheck.h"
#include "tex_len.h"
#include "ultra64.h"
#include "z_math.h"

#define gJumpableHorseFenceBrickTex_WIDTH 16
#define gJumpableHorseFenceBrickTex_HEIGHT 64
extern u64 gJumpableHorseFenceBrickTex[TEX_LEN(u64, gJumpableHorseFenceBrickTex_WIDTH, gJumpableHorseFenceBrickTex_HEIGHT, 16)];
#define gJumpableHorseFenceMetalBarTex_WIDTH 16
#define gJumpableHorseFenceMetalBarTex_HEIGHT 64
extern u64 gJumpableHorseFenceMetalBarTex[TEX_LEN(u64, gJumpableHorseFenceMetalBarTex_WIDTH, gJumpableHorseFenceMetalBarTex_HEIGHT, 16)];
extern Gfx gJumpableHorseFenceDL[37];
extern CollisionHeader gJumpableHorseFenceCol;
extern CollisionHeader gJumpableBigHorseFenceCol;

#endif
