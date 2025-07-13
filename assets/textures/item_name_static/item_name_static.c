#include "item_name_static.h"

#if OOT_NTSC_N64

#include "item_name_static_eng.c"
#include "item_name_static_ger.c"
#include "item_name_static_fra.c"
#include "item_name_static_jpn.c"

#else

#if OOT_NTSC
#include "item_name_static_jpn.c"
#endif

#include "item_name_static_eng.c"

#if OOT_PAL
#include "item_name_static_ger.c"
#include "item_name_static_fra.c"
#endif

#endif
