#include "versions.h"

#if OOT_NTSC_N64
    #include "message_data_00xx_items.h"
    #include "message_data_01xx_navi.h"
    #include "message_data_02xx_doors.h"
    #include "message_data_03xx_signs.h"
    #include "message_data_04xx_gossip.h"
    #include "message_data_06xx_enemies.h"
    #include "message_data_08xx_songs.h"
    #include "message_data_1xxx_forest.h"
    #include "message_data_2xxx_ranch_&_zelda.h"
    #include "message_data_3xxx_mountain.h"
    #include "message_data_4xxx_lake.h"
    #include "message_data_5xxx_kakariko.h"
    #include "message_data_6xxx_valley.h"
    #include "message_data_7xxx_market_&_masks.h"
    #include "message_data_8xxx_child_quest.h"
    #include "message_data_9xxx_global.h"
#else
    #include "text/message_data.h"
    #if !PLATFORM_IQUE
        #include "message_data_8xxx_child_quest.h"
        #include "message_data_9xxx_global.h"
    #endif
#endif

/*
 * The following two messages should be kept last and in this order.
 * Message 0xFFFD must be last to not break the message debugger (see R_MESSAGE_DEBUGGER_TEXTID).
 * Message 0xFFFC must be immediately before message 0xFFFD to not break Font_LoadOrderedFont.
 */
DEFINE_MESSAGE_FFFC(0xFFFC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"０１２３４５６７８９あいうえおかきくけこ\n"
"さしすせそたちつてとなにぬねのはひふへほ\n"
"まみむめもやゆよらりるれろわをんぁぃぅぇ\n"
"ぉっゃゅょがぎぐげござじずぜぞだぢづでど\n"
"ばびぶべぼぱぴぷぺぽアイウエオカキクケコ\n"
"サシスセソタチツテトナニヌネノハヒフヘホ\n"
"マミムメモヤユヨラリルレロワヲンァィゥェ\n"
"ォッャュョガギグゲゴザジズゼゾダヂヅデド\n"
"バビブベボパピプペポヴＡＢＣＤＥＦＧＨＩ\n"
"ＪＫＬＭＮＯＰＱＲＳＴＵＶＷＸＹＺａｂｃ\n"
"ｄｅｆｇｈｉｊｋｌｍｎｏｐｑｒｓｔｕｖｗ\n"
"ｘｙｚ　┯？！：−（）゛゜，．／"
)
,
MSG(
"0123456789\n"
"ABCDEFGHIJKLMN\n"
"OPQRSTUVWXYZ\n"
"abcdefghijklmn\n"
"opqrstuvwxyz\n"
" -.\n"
)
,
MSG(/* UNUSED */)
,
MSG(/* UNUSED */)
)
DEFINE_MESSAGE(0xFFFD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE, MSG(), MSG(), MSG(), MSG())
