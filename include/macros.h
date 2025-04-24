#ifndef MACROS_H
#define MACROS_H

#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ARRAY_COUNTU(arr) (u32)(sizeof(arr) / sizeof(arr[0]))
#define ARRAY_COUNT_2D(arr) (s32)(sizeof(arr) / sizeof(arr[0][0]))

#define CHECK_FLAG_ALL(flags, mask) (((flags) & (mask)) == (mask))

#endif
