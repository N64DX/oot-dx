DEFINE_MESSAGE(0x8000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Hero's Shield   80 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
)
,
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
)
,
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
ITEM_ICON(0x5A) QUICKTEXT_ENABLE "You got a " COLOR(LIGHTBLUE) "Hero's Shield" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Switch to the " COLOR(BLUE) "Equipment \n"
"Subscreen" COLOR(RED) " " COLOR(DEFAULT) "and select the\n"
"shield. Press " COLOR(BLUE) "[A] " COLOR(DEFAULT) "to equip it."
BOX_BREAK

ITEM_ICON(0x5A) "Press " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " to crouch and\n"
"defend. If you press " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " while \n"
COLOR(LIGHTBLUE) "[Z] Targeting" COLOR(DEFAULT) ", you can move\n"
"while defending."
)
,
MSG(),
MSG()
)
