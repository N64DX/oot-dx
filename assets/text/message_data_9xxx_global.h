DEFINE_MESSAGE(0x9000, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(12) COLOR(RED) "黄金のスタルチュラのしるし" COLOR(DEFAULT) "を　手に入れた！" QUICKTEXT_DISABLE "\n"
SHIFT(8) "これまでに" COLOR(RED) TOKENS COLOR(DEFAULT) "こ　あつめた！" FADE(40)
)
,
MSG(
"You got a " COLOR(RED) "Gold Skulltula Token" COLOR(DEFAULT) "!\n"
"You've collected " COLOR(RED) TOKENS COLOR(DEFAULT) COLOR(DEFAULT) " " PLURAL_TOKENS " in total." FADE(40)
)
,
MSG(
"Du erhältst ein " COLOR(RED) "Skulltula-Symbol" COLOR(DEFAULT) ". Du\n"
"hast insgesamt " COLOR(RED) TOKENS COLOR(DEFAULT) COLOR(DEFAULT) " " PLURAL_TOKENS " zerstört." FADE(40)
)
,
MSG(
"Vous venez de détruire une\n"
COLOR(RED) "Skulltula d'or" COLOR(DEFAULT) "!\n"
"Vous avez collecté " COLOR(RED) TOKENS COLOR(DEFAULT) COLOR(DEFAULT) " " PLURAL_TOKENS " au total." FADE(40)
)
)

DEFINE_MESSAGE(0x9001, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SHIELD_HEROS) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "勇者の盾" COLOR(DEFAULT) "を入手！" QUICKTEXT_DISABLE "\n"
COLOR(BLUE) "そうび画面" COLOR(DEFAULT) "に　切りかえて、\n"
"カーソルで選んで　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "でそうび。"
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SHIELD_HEROS) QUICKTEXT_ENABLE "You got a " COLOR(LIGHTBLUE) "Hero's Shield" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Switch to the " COLOR(BLUE) "Equipment \n"
"Subscreen" COLOR(DEFAULT) " and select the\n"
"shield, then equip it with " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SHIELD_HEROS) QUICKTEXT_ENABLE "Der " COLOR(LIGHTBLUE) "Heroenschild" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Gehe ins " COLOR(BLUE) "Ausrüstungs-Menü" COLOR(DEFAULT) ",\n"
"um ihn mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) " auszuwählen."
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SHIELD_HEROS) QUICKTEXT_ENABLE "Vous obtenez un " COLOR(LIGHTBLUE) "Bouclier\n"
"du Héros" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE " Sélectionnez-le à \n"
"l'" COLOR(BLUE) "écran de l'Equipement" COLOR(DEFAULT) ", puis \n"
"appuyez sur " COLOR(BLUE) "[A]" COLOR(DEFAULT) " pour l'équiper."
)
)

DEFINE_MESSAGE(0x9002, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SWORD_HEROS)
QUICKTEXT_ENABLE "強敵が残した\n"
COLOR(RED) "勇者の剣" COLOR(DEFAULT) "！　あなたの物です！" QUICKTEXT_DISABLE "\n"
"この剣は強力なビームを\n放つことができます！"
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SWORD_HEROS) QUICKTEXT_ENABLE "A powerful foe left behind a\n"
COLOR(RED) "Hero's Sword" COLOR(DEFAULT) "! It is yours now!" QUICKTEXT_DISABLE "\n"
"This sword is capable of\n"
"shooting powerful beams!"
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SWORD_HEROS) QUICKTEXT_ENABLE "Ein mächtiger Feind hat das\n"
COLOR(RED) "Heroenschwert" COLOR(DEFAULT) " hinterlassen! Es\n"
"gehört nun dir!" QUICKTEXT_DISABLE " Dieses Schwert\n"
"kann mächtige Strahlen schießen!"
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SWORD_HEROS) QUICKTEXT_ENABLE "Un puissant ennemi a laissé\n"
COLOR(RED) "l’Épée du Héros" COLOR(DEFAULT) "! Elle est à toi maintenant!" QUICKTEXT_DISABLE "\n"
"Cette épée est capable de\n"
"lancer de puissants rayons!"
)
)

DEFINE_MESSAGE(0x9003, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_ROCS_FEATHER) QUICKTEXT_ENABLE "You got the " COLOR(LIGHTBLUE) "Roc's Feather" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Press " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " to leap into the air,\n"
"as light as a feather!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9004, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GOLDEN_FEATHER) QUICKTEXT_ENABLE "You found the " COLOR(LIGHTBLUE) "Golden Feather" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Press " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " to leap into the air.\n"
"This feather is even stronger!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "You got a " COLOR(BLUE) "Master Wallet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"What a worthy wallet! Now\n"
"you can carry up to " COLOR(YELLOW) "999" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9006, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "You got a " COLOR(BLUE) "Royal Wallet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"What a fancy wallet! Now you\n"
"can carry up to " COLOR(YELLOW) "2000" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9007, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "You got a " COLOR(BLUE) "Tycoon's Wallet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"What a gigantic wallet! Now you\n"
"can carry up to " COLOR(YELLOW) "5000" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "You got a " COLOR(BLUE) "Bottomless Wallet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"What a endless wallet! Now you\n"
"can carry up to " COLOR(YELLOW) "9999" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9009, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_AMULET_OF_ENERGY) QUICKTEXT_ENABLE "You got the " COLOR(LIGHTBLUE) "Amulet of Energy" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"It grants you special power\n"
"that enhances your tunics\n"
"at the cost of energy!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x900A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_SWORD_FAIRYS) QUICKTEXT_ENABLE "You got the " COLOR(RED) "Great Fairy's Sword" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Set it to " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "to use it."
BOX_BREAK

UNSKIPPABLE ITEM_ICON(ITEM_SWORD_FAIRYS) "With black roses etched into it,\n"
"the Great Fairy's Sword is the\n"
"most powerful of all blades."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9101, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE "勇者の盾（たて）　８０ルピー" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Hero's Shield   80 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Heroenschild   80 Rubine" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Bouclier du Héros   80 Rubis" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x9103, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE "を手に入れた　２００ルピー" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Adult's Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Große Börse   200 Rubine" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Grande Bourse   200 Rubis" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x9104, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE "巨人のサイフ　２００ルピー" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Giant's Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Riesenbörse   200 Rubine" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Bourse de Géant   200 Rubis" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x9105, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Master Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9106, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Royal Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9107, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Tycoon's Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9108, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Bottomless Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9201, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "勇者の盾　８０ルピー\n"
COLOR(DEFAULT) "装備すると　" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "　で防御できるよ。\n"
"この金属の盾は燃えなくなる！" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Hero's Shield   80 Rupees\n"
COLOR(DEFAULT) "Once equipped, you can defend\n"
"with " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ". This metal shield won't\n"
"burn anymore!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Heroenschild   80 Rubine\n"
COLOR(DEFAULT) "Einmal ausgerüstet kannst du mit " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "\n"
"verteidigen. Dieser Metallschild brennt\n"
"nicht mehr!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bouclier du Héros   80 Rubis\n"
COLOR(DEFAULT) "Une fois équipé, tu peux te défendre\n"
"avec " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ". Ce bouclier en métal ne brûlera plus !" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x9203, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Adult's Wallet   200 Rupees\n"
COLOR(DEFAULT) "An adult-sized wallet meant for\n"
"big spenders.\n"
"This wallet holds up to 200 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9204, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Giant's Wallet   200 Rupees\n"
COLOR(DEFAULT) "A giant-sized wallet meant for\n"
"rich people.\n"
"This wallet holds up to 500 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9205, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Master Wallet   200 Rupees\n"
COLOR(DEFAULT) "A master-sized wallet meant for\n"
"only the Master of Time.\n"
"This wallet holds up to 999 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9206, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Royal Wallet   200 Rupees\n"
COLOR(DEFAULT) "A royal-sized wallet meant for\n"
"those living in luxery.\n"
"This wallet holds up to 2000 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9207, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Tycoon's Wallet   200 Rupees\n"
COLOR(DEFAULT) "A tycoon-sized wallet meant for\n"
"only the wealthiest among Hylians.\n"
"This wallet holds up to 5000 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9208, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bottomless Wallet   200 Rupees\n"
COLOR(DEFAULT) "A bottomless wallet that never\n"
"seems to run out of money.\n"
"This wallet holds up to 9999 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x9209, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "Welcome " NAME "!\n"
"I am the Great Fairy of Strength!"
BOX_BREAK

UNSKIPPABLE "I'm going to enhance your \n"
COLOR(LIGHTBLUE) "Quick Spin" COLOR(DEFAULT) " skill."
BOX_BREAK

UNSKIPPABLE "Receive it now!"),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x920A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Your " COLOR(LIGHTBLUE) "Quick Spin" COLOR(DEFAULT) " skill is enhanced!" QUICKTEXT_DISABLE
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x920B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "Your Quick Spin skill has been \n"
"enhanced! Your quick spins are\n"
"now " COLOR(RED) "fully charged" COLOR(DEFAULT) "."
),
MSG(),
MSG()
)
