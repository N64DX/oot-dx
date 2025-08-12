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
ITEM_ICON(0x5B) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "勇者の盾" COLOR(DEFAULT) "を手に入れた！" QUICKTEXT_DISABLE "\n"
COLOR(BLUE) "装備画面" COLOR(RED) "　" COLOR(DEFAULT) "で盾を選び\n"
COLOR(BLUE) "[A]ボタン" COLOR(DEFAULT) "で装備しよう。"
BOX_BREAK

ITEM_ICON(0x5B) COLOR(LIGHTBLUE) "[R]ボタン" COLOR(DEFAULT) "でしゃがんで防御。\n"
COLOR(LIGHTBLUE) "[Z]注目" COLOR(DEFAULT) "中に" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "を押すと、\n"
"防御しながら移動できるぞ！"
),
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
MSG(
ITEM_ICON(0x5B) QUICKTEXT_ENABLE "Du hast den " COLOR(LIGHTBLUE) "Heldenschild" COLOR(DEFAULT) " erhalten!" QUICKTEXT_DISABLE "\n"
"Wechsle zum " COLOR(BLUE) "Ausrüstungs-\n"
"Bildschirm" COLOR(RED) " " COLOR(DEFAULT) "und wähle den\n"
"Schild. Drücke " COLOR(BLUE) "[A] " COLOR(DEFAULT) ", um ihn auszurüsten."
BOX_BREAK

ITEM_ICON(0x5B) "Drücke " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ", um dich zu\n"
"ducken und zu verteidigen. Wenn du\n"
COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " drückst, während du mit\n"
COLOR(LIGHTBLUE) "[Z] anvisierst" COLOR(DEFAULT) ", kannst du dich\n"
"beim Verteidigen bewegen."
),
MSG(
ITEM_ICON(0x5B) QUICKTEXT_ENABLE "Vous obtenez le " COLOR(LIGHTBLUE) "Bouclier Hylien" COLOR(DEFAULT) " !" QUICKTEXT_DISABLE "\n"
"Allez à l’" COLOR(BLUE) "écran Équipement" COLOR(RED) " " COLOR(DEFAULT) "et\n"
"sélectionnez le bouclier. Appuyez sur\n"
COLOR(BLUE) "[A] " COLOR(DEFAULT) "pour l’équiper."
BOX_BREAK

ITEM_ICON(0x5B) "Appuyez sur " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " pour vous\n"
"accroupir et vous défendre. En\n"
"maintenant " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " pendant un\n"
COLOR(LIGHTBLUE) "ciblage [Z]" COLOR(DEFAULT) ", vous pouvez vous\n"
"déplacer en vous défendant."
)
)

DEFINE_MESSAGE(0x9002, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE COLOR(BLUE) "王家のサイフ" COLOR(DEFAULT) "を　手に入れた！" QUICKTEXT_DISABLE "\n"
"でっかい　でっかい　巨大サイフ。\n"
COLOR(YELLOW) "９９９ルピー" COLOR(DEFAULT) "まで　持てるゾ！"
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "You got a " COLOR(BLUE) "Royal Wallet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"What a gigantic wallet! Now \n"
"you can carry up to " COLOR(YELLOW) "999" COLOR(DEFAULT) " " COLOR(YELLOW) "Rupees" COLOR(DEFAULT) "."
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "Die " COLOR(BLUE) "Königsbörse" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Welch eine gigantische Geldbörse!\n"
"Jetzt kannst Du sogar \n"
COLOR(YELLOW) "999 Rubine" COLOR(DEFAULT) " tragen!"
),
MSG(
UNSKIPPABLE ITEM_ICON(ITEM_GIANTS_WALLET) QUICKTEXT_ENABLE "Vous recevez la " COLOR(BLUE) "Bourse de \n"
"Royale" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE " Elle peut contenir\n"
"jusqu'à " COLOR(YELLOW) "999" COLOR(DEFAULT) " " COLOR(YELLOW) "Rubis" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x9003, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE ITEM_ICON(0x5A)
QUICKTEXT_ENABLE "強敵が残した\n"
COLOR(RED) "勇者の剣" COLOR(DEFAULT) "！　あなたの物です！" QUICKTEXT_DISABLE "\n"
"この剣は強力なビームを\n放つことができます！"
),
MSG(
UNSKIPPABLE ITEM_ICON(0x5A) QUICKTEXT_ENABLE "A powerful foe left behind a\n"
COLOR(RED) "Hero's Sword" COLOR(DEFAULT) "! It is yours now!" QUICKTEXT_DISABLE "\n"
"This sword is capable of\n"
"shooting powerful beams!"
),
MSG(
UNSKIPPABLE ITEM_ICON(0x5A) QUICKTEXT_ENABLE "Ein mächtiger Feind hat das\n"
COLOR(RED) "Schwert des Helden" COLOR(DEFAULT) " hinterlassen! Es gehört nun dir!" QUICKTEXT_DISABLE "\n"
"Dieses Schwert kann\n"
"mächtige Strahlen abschießen!"
),
MSG(
UNSKIPPABLE ITEM_ICON(0x5A) QUICKTEXT_ENABLE "Un puissant ennemi a laissé\n"
COLOR(RED) "l’Épée du Héros" COLOR(DEFAULT) "! Elle est à toi maintenant!" QUICKTEXT_DISABLE "\n"
"Cette épée est capable de\n"
"lancer de puissants rayons!"
)
)

DEFINE_MESSAGE(0x9004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
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
QUICKTEXT_ENABLE "Heldenschild   80 Rubine" QUICKTEXT_DISABLE "\n"
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

DEFINE_MESSAGE(0x9005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
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

DEFINE_MESSAGE(0x9006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
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

DEFINE_MESSAGE(0x9007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE "王家のサイフ　２００ルピー" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Royal Wallet   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Königsbörse   200 Rubine" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Bourse de Royale   200 Rubis" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x9008, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
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
QUICKTEXT_ENABLE COLOR(RED) "Heldenschild   80 Rubine\n"
COLOR(DEFAULT) "Einmal ausgerüstet kannst du mit " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " verteidigen.\n"
"Dieser Metallschild brennt nicht mehr!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bouclier du Héros   80 Rubis\n"
COLOR(DEFAULT) "Une fois équipé, tu peux te défendre\n"
"avec " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ". Ce bouclier en métal ne brûlera plus !" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x9009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "を手に入れた　２００ルピー\n"
COLOR(DEFAULT) "大きなお金持ちのための\n"
"大きめの財布だよ。\n"
"この財布は最大２００ルピーまで入る！" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Adult's Wallet   200 Rupees\n"
COLOR(DEFAULT) "An adult-sized wallet meant for\n"
"big spenders.\n"
"This wallet holds up to 200 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Große Börse   200 Rubine\n"
COLOR(DEFAULT) "Eine große Geldbörse für\n"
"große Ausgaben.\n"
"Diese Börse kann bis zu 200 Rubine halten!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Grande Bourse   200 Rubis\n"
COLOR(DEFAULT) "Un portefeuille de taille adulte\n"
"pour les gros dépensiers.\n"
"Ce portefeuille peut contenir jusqu'à 200 rubis !" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x900A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "巨人のサイフ　２００ルピー\n"
COLOR(DEFAULT) "お金持ちのための\n"
"巨大な財布だよ。\n"
"この財布は最大５００ルピーまで入る！" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Giant's Wallet   200 Rupees\n"
COLOR(DEFAULT) "A giant-sized wallet meant for\n"
"rich people.\n"
"This wallet holds up to 500 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Riesenbörse   200 Rubine\n"
COLOR(DEFAULT) "Eine riesige Geldbörse für\n"
"reiche Leute.\n"
"Diese Börse kann bis zu 500 Rubine halten!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bourse de Géant   200 Rubis\n"
COLOR(DEFAULT) "Un portefeuille géant\n"
"pour les gens riches.\n"
"Ce portefeuille peut contenir jusqu'à 500 rubis !" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x900B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "王家のサイフ　２００ルピー\n"
COLOR(DEFAULT) "ハイリアの中でも\n"
"最も裕福な人のための財布。\n"
"この財布は最大９９９ルピーまで入る！" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Royal Wallet   200 Rupees\n"
COLOR(DEFAULT) "A royal-sized wallet meant for\n"
"only the wealthiest among Hylians.\n"
"This wallet holds up to 999 Rupees!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Königsbörse   200 Rubine\n"
COLOR(DEFAULT) "Eine königliche Börse für\n"
"die Reichsten unter den Hylians.\n"
"Diese Börse kann bis zu 999 Rubine halten!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bourse de Royale   200 Rubis\n"
COLOR(DEFAULT) "Un portefeuille royal réservé\n"
"aux plus riches des Hyliens.\n"
"Ce portefeuille peut contenir jusqu'à 999 rubis !" QUICKTEXT_DISABLE PERSISTENT
)
)
