DEFINE_MESSAGE(0x8000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Hero's Shield   80 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Hero's Shield   80 Rupees\n"
COLOR(DEFAULT) "Once equipped, you can defend \n"

"with " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ". This metal shield won't\n"
"burn anymore!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8002, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
ITEM_ICON(0x5B) QUICKTEXT_ENABLE "You got a " COLOR(LIGHTBLUE) "Hero's Shield" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Switch to the " COLOR(BLUE) "Equipment \n"
"Subscreen" COLOR(RED) " " COLOR(DEFAULT) "and select the\n"
"shield. Press " COLOR(BLUE) "[A] " COLOR(DEFAULT) "to equip it."
BOX_BREAK

ITEM_ICON(0x5B) "Press " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " to crouch and\n"
"defend. If you press " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " while \n"
COLOR(LIGHTBLUE) "[Z] Targeting" COLOR(DEFAULT) ", you can move\n"
"while defending."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8003, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SHIELD_MIRROR) QUICKTEXT_ENABLE "You found the " COLOR(LIGHTBLUE) "Mirror Shield" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"The shield's polished surface can\n"
"reflect light or energy. Press " COLOR(LIGHTBLUE) "[R]\n"
COLOR(DEFAULT) "to use it."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8004, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_KNIFE) QUICKTEXT_ENABLE "You got the " COLOR(RED) "Silver Sword" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"This blade was forged by an\n"
"expert smith to have a wider\n"
"slash range with decent power!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SWORD_BIGGORON) QUICKTEXT_ENABLE "You got the Silver Sword\n"
"reforged into the " COLOR(RED) "Gilded Sword" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"This blade was forged by a\n"
"master smith for great power!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8006, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(0x5A) QUICKTEXT_ENABLE "You got the Kokiri Sword\n"
"reforged into the " COLOR(RED) "Hero's Sword" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"This sword is capable at\n"
"throwing powerful beams!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8007, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_STRENGTH_SILVER_GAUNTLETS) QUICKTEXT_ENABLE "You found the " COLOR(BLUE) "Power Bracelet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"If you wore it, you would\n"
"feel power in your arms, the \n"
"power to lift big things with " COLOR(BLUE) "[A]" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE ITEM_ICON(ITEM_STRENGTH_SILVER_GAUNTLETS) "You did promise to give\n"
"it to " COLOR(RED) "Nabooru" COLOR(DEFAULT) ". You should keep\n"
"your word..."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_STRENGTH_GOLD_GAUNTLETS) QUICKTEXT_ENABLE "You found another " COLOR(BLUE) "Power Bracelet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"You can feel even more power \n"
"coursing through your arms!\n"
"Grab with " COLOR(BLUE) "[A] " COLOR(DEFAULT) "and lift stuff up!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8009, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_BOW) QUICKTEXT_ENABLE "You found the " COLOR(RED) "Hero's Bow" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"On the " COLOR(YELLOW) "Select Item Subscreen" COLOR(DEFAULT) ",\n"
"you can set it to " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " or" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE ITEM_ICON(ITEM_BOW) "Press " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "to take it out\n"
"and hold it. As you hold down\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " you can aim with " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "." COLOR(YELLOW) " " COLOR(DEFAULT) "Release\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " to let fly with an " COLOR(RED) "arrow" COLOR(DEFAULT) "."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x800A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_BOW) QUICKTEXT_ENABLE "You traded the Poacher's Saw\n"
"for some high quality " COLOR(RED) "Gold Dust" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Bring it to a master smith to\n"
"reforge a sword with it!"
),
MSG(),
MSG()
)
