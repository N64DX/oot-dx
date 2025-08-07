DEFINE_MESSAGE_JPN(0x4000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(21) "この目玉が　ウマいんじゃ！！\n"
SHIFT(3) "今夜は　久しぶりに　目玉焼きじゃ！\n"
SHIFT(33) "ウヒョヒョヒョヒョッ！"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "これは　いいものを　いただいた。\n"
SHIFT(12) "キングゾーラに　よろしくのぉ。\n"
SHIFT(63) "え？　ちがう？" EVENT
)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
)
DEFINE_MESSAGE_NES(0x4000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(/* MISSING */)
,
MSG(
UNSKIPPABLE "These eyeballs are so delicious!\n"
"Tonight I will cook fried eyeballs \n"
"for the first time in a long time!\n"
"Uhoy hoy hoo houy hoy!"
BOX_BREAK

UNSKIPPABLE "Such great stuff! Please say \n"
"thank you to King Zora!\n"
"Eh? What?" EVENT
)
,
MSG(
UNSKIPPABLE "Diese Augen schmecken göttlich!\n"
"Endlich kann ich mal wieder\n"
"gebratene Augäpfel in Sahnesoße\n"
"essen! Mmmmh...!"
BOX_BREAK

UNSKIPPABLE "Großartig! Richte König Zora\n"
"meinen Dank aus!\n"
"Bitte? Was willst Du?" EVENT
)
,
MSG(
UNSKIPPABLE "Ces yeux sont délicieux!\n"
"Je vais m'en faire un bon ragoût!\n"
"Nyaha ha ha ha!"
BOX_BREAK

UNSKIPPABLE "Dis bien merci au Roi Zora!\n"
"Hein? Quoi?" EVENT
)
)

DEFINE_MESSAGE_JPN(0x4001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(33) COLOR(RED) "ダイゴロンの目薬" COLOR(DEFAULT) "とな？\n"
SHIFT(36) "な〜んじゃ　つまらん。\n"
SHIFT(6) "そ〜ならそ〜と　早く言いなさい。" EVENT
)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
)
DEFINE_MESSAGE_NES(0x4001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(/* MISSING */)
,
MSG(
UNSKIPPABLE "These are for making " COLOR(RED) "Biggoron's \n"
"Eye Drops" COLOR(DEFAULT) "? Oh, how disappointing!\n"
"You should have said so in the \n"
"first place!" EVENT
)
,
MSG(
UNSKIPPABLE "Du willst, daß ich " COLOR(RED) "Augentropfen" COLOR(DEFAULT) " \n"
COLOR(RED) "für Biggoron" COLOR(DEFAULT) " herstelle? Oh, wie\n"
"außerordentlich schade! Das\n"
"hättest Du gleich sagen sollen!" EVENT
)
,
MSG(
UNSKIPPABLE "Je dois en faire des " COLOR(RED) "Gouttes pour\n"
"Biggoron" COLOR(DEFAULT) "? Oh! Quel dommage!\n"
"Tu m'as donné faim!" EVENT
)
)

DEFINE_MESSAGE(0x4002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) NAME "！\n"
SHIFT(36) "こっちだよ、ホホーゥ。"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(45) "いまごろ　" COLOR(RED) "サリア" COLOR(DEFAULT) "は\n"
SHIFT(15) "どうしておるかのぅ？　ホホォ。\n"
SHIFT(6) "一度　森に戻ってみてはどうじゃ。"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"This way!  Hoo hoo!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "I wonder what " COLOR(RED) "Saria" COLOR(DEFAULT) " is doing now?\n"
"How about going back to the\n"
"forest sometime?"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Hier entlang!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Ich frage mich, was " COLOR(RED) "Salia\n"
COLOR(DEFAULT) "gerade macht. Warum gehst Du\n"
"nicht mal wieder zu ihr?"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Par ici!  Hou hou!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Je me demande ce que devient \n"
COLOR(RED) "Saria" COLOR(DEFAULT) "! Pourquoi ne pas aller dans \n"
"la forêt de temps en temps?"
)
)

DEFINE_MESSAGE(0x4003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(51) "どうしたのかな？\n"
SHIFT(21) "こんな所まで　くるなんて…"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(21) "たまには　アイテムモードで\n"
SHIFT(18) COLOR(RED) "マップ画面" COLOR(DEFAULT) "を　見るのじゃぞ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) NAME "よ。\n"
SHIFT(27) "ここは　豊かな水に満ちた\n"
SHIFT(27) "美しい湖じゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(48) "この湖の　底には、\n"
SHIFT(3) "水の神をまつる　" COLOR(BLUE) "水の神殿" COLOR(DEFAULT) "が　ある。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "ここを　守るのは　" COLOR(BLUE) "ゾーラの一族" COLOR(DEFAULT) "。\n"
SHIFT(9) "はるか　北東の　ゾーラ川に　すむ\n"
SHIFT(63) "水の一族だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ハイラル王の　一族だけが\n"
SHIFT(33) "ゾーラの里へ　行ける…\n"
SHIFT(27) "と、いうがな…　ホホ〜ッ！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "私は　" COLOR(RED) "お城" COLOR(DEFAULT) "まで　戻るところだ。\n"
SHIFT(39) "いっしょに　くるなら\n"
SHIFT(36) "私に　つかまりなさい。"
)
,
MSG(
UNSKIPPABLE "What are you doing? You've come \n"
"a long way to get up here..."
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "You should look at the " COLOR(RED) "Map \n"
"Subscreen " COLOR(DEFAULT) "sometimes."
BOX_BREAK

UNSKIPPABLE NAME ", this is a beautiful\n"
"lake full of pure, clear water."
BOX_BREAK

UNSKIPPABLE "At the lake bottom there is\n"
"a " COLOR(BLUE) "Water Temple " COLOR(DEFAULT) "used to worship\n"
"the water spirits. The " COLOR(BLUE) "Zoras " COLOR(DEFAULT) "are\n"
"guardians of the temple. Hoo hoo."
BOX_BREAK

UNSKIPPABLE "The Zoras come from Zora's\n"
"Domain in northeast Hyrule. An\n"
"aquatic race, they are longtime\n"
"allies of Hyrule's Royal Family."
BOX_BREAK

UNSKIPPABLE "I heard that only the Royal Family\n"
"of Hyrule can enter Zora's Domain...\n"
"Hoo hoo!"
BOX_BREAK

UNSKIPPABLE "I'm on my way back to the " COLOR(RED) "castle" COLOR(DEFAULT) ".\n"
"If you want to come with me, hold\n"
"on to my talons!"
)
,
MSG(
UNSKIPPABLE "Was machst Du denn? Du hast\n"
"ja ganz schön lange gebraucht..."
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Vielleicht solltest Du ab und zu\n"
"auf die " COLOR(RED) "Karte " COLOR(DEFAULT) "schauen."
BOX_BREAK

UNSKIPPABLE NAME ", das hier ist ein \n"
"ruhiger See mit kristallklarem,\n"
"kühlem Wasser."
BOX_BREAK

UNSKIPPABLE "Auf seinem Grund befindet sich\n"
"der Zugang zum " COLOR(BLUE) "Wassertempel" COLOR(DEFAULT) ".\n"
"Die " COLOR(BLUE) "Zoras " COLOR(DEFAULT) "wachen über ihn."
BOX_BREAK

UNSKIPPABLE "Die Zoras sind Angehörige von\n"
"Zoras Reich im Nordosten Hyrules.\n"
"Sie sind stolze Amphibienwesen und\n"
"seit Urzeiten der Königsfamilie treu."
BOX_BREAK

UNSKIPPABLE "Ich hörte, nur einem Angehörigen\n"
"der königlichen Familie würde der\n"
"Zutritt zu Zoras Reich gestattet!"
BOX_BREAK

UNSKIPPABLE "Ich bin übrigens gerade auf dem\n"
"Weg zum " COLOR(RED) "Schloß" COLOR(DEFAULT) ". Wenn Du mit mir\n"
"kommen möchtest, halte Dich an\n"
"meinen Krallen fest!"
)
,
MSG(
UNSKIPPABLE "Que fais-tu là? Tu as parcouru\n"
"un bien long chemin pour arriver\n"
"jusqu'ici..."
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "N'hésite pas à consulter le \n"
COLOR(RED) "Sous-menu de la Carte" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE NAME "... \n"
"Regarde autour de toi...\n"
"Ce lac est d'une pureté cristalline."
BOX_BREAK

UNSKIPPABLE "Au fond des eaux se trouve le \n"
COLOR(BLUE) "Temple de l'Eau " COLOR(DEFAULT) "dédié aux " COLOR(BLUE) "Esprits \n"
"de l'Eau" COLOR(DEFAULT) ". Les Zoras en sont\n"
"les gardiens. Hou, hou!"
BOX_BREAK

UNSKIPPABLE "Les Zoras sont originaires du \n"
"Domaine Zora au Nord Est d'Hyrule.\n"
"Cette race aquatique est fidèle à\n"
"la Famille Royale."
BOX_BREAK

UNSKIPPABLE "Seuls les membres de la Famille \n"
"Royale peuvent entrer dans le \n"
"Domaine Zora...\n"
"Hou hou!"
BOX_BREAK

UNSKIPPABLE "Bon, je retourne au " COLOR(RED) "château" COLOR(DEFAULT) ".\n"
"Pour venir avec moi, accroche-toi \n"
"à mes serres!"
)
)

DEFINE_MESSAGE(0x4004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "私は　" COLOR(RED) "お城" COLOR(DEFAULT) "まで　戻るところだ。\n"
SHIFT(39) "いっしょに　くるなら\n"
SHIFT(36) "私に　つかまりなさい。"
)
,
MSG(
"I'm on my way back to the " COLOR(RED) "castle" COLOR(DEFAULT) ".\n"
"If you want to come with me, hold\n"
"on to my talons!"
)
,
MSG(
"Ich bin übrigens gerade auf dem\n"
"Weg zum " COLOR(RED) "Schloß" COLOR(DEFAULT) ". Wenn Du mit mir\n"
"kommen möchtest, halte Dich an\n"
"meinen Krallen fest!"
)
,
MSG(
"Bon, je retourne au " COLOR(RED) "château" COLOR(DEFAULT) ".\n"
"Pour venir avec moi, accroche-toi \n"
"à mes serres!"
)
)

DEFINE_MESSAGE(0x4005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(81) "…ン？"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "ビンの中に　なにか　入っている。\n"
SHIFT(57) COLOR(RED) "手紙" COLOR(DEFAULT) "みたいだ！"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "『" COLOR(PURPLE) "たすけてたもれ！\n"
COLOR(DEFAULT) SHIFT(12) COLOR(PURPLE) "わらわは　" COLOR(YELLOW) "ジャブジャブさま" COLOR(PURPLE) "の\n"
COLOR(DEFAULT) SHIFT(12) COLOR(PURPLE) "お腹の中で　まっておる。" COLOR(DEFAULT) SHIFT(18) COLOR(YELLOW) "ルト" COLOR(DEFAULT) "』" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "『" COLOR(PURPLE) "追伸　父上には　ナイショゾラ！" COLOR(DEFAULT) "』" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "...Huh?"
BOX_BREAK

UNSKIPPABLE "It looks like there is something\n"
"already inside this bottle.\n"
"It's a " COLOR(RED) "letter" COLOR(DEFAULT) ":"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(12) "\"" COLOR(PURPLE) "Help me.\n"
COLOR(DEFAULT) SHIFT(12) COLOR(PURPLE) "I'm waiting for you inside\n"
COLOR(DEFAULT) SHIFT(12) COLOR(YELLOW) "Lord Jabu-Jabu's" COLOR(PURPLE) " belly.\n"
COLOR(DEFAULT) SHIFT(24) "--" COLOR(YELLOW) "Ruto" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(12) COLOR(PURPLE) "PS: Don't tell my father!" COLOR(DEFAULT) "\"" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE SHIFT(86) "Nanu?"
BOX_BREAK

UNSKIPPABLE "Sieht aus, als wäre da etwas in\n"
"der Flasche drin...\n"
"Oh, es ist ein " COLOR(RED) "Brief" COLOR(DEFAULT) ":"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(57) COLOR(PURPLE) "Hilf mir!\n"
COLOR(DEFAULT) SHIFT(44) COLOR(PURPLE) "Ich bin im Bauch von\n"
COLOR(DEFAULT) SHIFT(32) COLOR(YELLOW) "Lord Jabu-Jabu" COLOR(PURPLE) " gefangen!\n"
COLOR(DEFAULT) SHIFT(90) COLOR(YELLOW) "Ruto" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(52) COLOR(PURPLE) "PS: Verrate bitte \n"
COLOR(DEFAULT) SHIFT(45) COLOR(PURPLE) "meinem Daddy nichts!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "...Hein?"
BOX_BREAK

UNSKIPPABLE "Il y a quelque chose dans\n"
"cette bouteille. C'est une " COLOR(RED) "lettre" COLOR(DEFAULT) ":"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(12) "\"" COLOR(PURPLE) "A l'aide!\n"
COLOR(DEFAULT) SHIFT(12) COLOR(PURPLE) "Je suis enfermée dans le\n"
COLOR(DEFAULT) SHIFT(12) COLOR(PURPLE) "ventre du" COLOR(DEFAULT) " " COLOR(YELLOW) "Grand Jabu-Jabu!" COLOR(PURPLE) "\n"
COLOR(DEFAULT) SHIFT(24) "-" COLOR(YELLOW) "Ruto" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(12) COLOR(PURPLE) "PS: N'en parlez pas à Père." COLOR(DEFAULT) "\"" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x4006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(54) "だれだ　キミは？"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "ボクらは\n"
SHIFT(45) "ほこり高き　水の民\n"
SHIFT(69) COLOR(BLUE) "ゾーラ族" COLOR(DEFAULT) "！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "キミが　ハイラル王家の使者？\n"
SHIFT(48) "なんの　ご用かな？"
)
,
MSG(
UNSKIPPABLE "Who are you?"
BOX_BREAK

UNSKIPPABLE "We are the " COLOR(BLUE) "Zoras" COLOR(DEFAULT) ", the proud\n"
"aquatic people!"
BOX_BREAK

UNSKIPPABLE "So...you say you have some \n"
"connection with Hyrule's Royal\n"
"Family... \n"
"Well, what do you want from us?"
)
,
MSG(
UNSKIPPABLE "Wer seid Ihr?"
BOX_BREAK

UNSKIPPABLE "Wir sind die " COLOR(BLUE) "Zoras" COLOR(DEFAULT) ", das stolze\n"
"hylianische Amphibiengeschlecht!"
BOX_BREAK

UNSKIPPABLE "So... Ihr behauptet, ein\n"
"Angehöriger von Hyrules\n"
"königlicher Familie zu sein... \n"
"Nun denn, was wollt Ihr von uns?"
)
,
MSG(
UNSKIPPABLE "Qui es-tu?"
BOX_BREAK

UNSKIPPABLE "Nous sommes les " COLOR(BLUE) "Zoras" COLOR(DEFAULT) ", fier \n"
"peuple aquatique!"
BOX_BREAK

UNSKIPPABLE "Tu dis avoir quelques liens avec\n"
"la Famille Royale d'Hyrule...\n"
"Que pouvons nous faire pour toi?"
)
)

DEFINE_MESSAGE(0x4007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "ボクたちは　潜水が　得意。\n"
SHIFT(48) "キミは　どうかな？"
BOX_BREAK

SHIFT(9) "もぐるのが　ウマくなりたければ\n"
"滝の上の" COLOR(RED) "潜水ゲーム" COLOR(DEFAULT) "に　チャレンジ！\n"
SHIFT(51) "やってみたかい？"
)
,
MSG(
"We are good at diving!\n"
"How about you?"
BOX_BREAK

"If you want to be a master diver,\n"
"try the " COLOR(RED) "diving game" COLOR(DEFAULT) " at the top \n"
"of the waterfall!\n"
"Have you tried it already?"
)
,
MSG(
"Wir sind gewandte Taucher!\n"
"Wie steht es mit Euch?"
BOX_BREAK

"Wollt Ihr ebenso meisterlich\n"
"tauchen, macht mit bei unserem\n"
COLOR(RED) "Tauchspiel" COLOR(DEFAULT) " am höchsten Punkt des\n"
"Wasserfalls! Schon ausprobiert?"
)
,
MSG(
"Nous sommes d'excellents \n"
"plongeurs! Et toi?"
BOX_BREAK

"Pour devenir un bon plongeur, \n"
"essaie le " COLOR(RED) "jeu du plongeon " COLOR(DEFAULT) "en haut \n"
"de la cascade! Va piquer une tête!"
)
)

DEFINE_MESSAGE(0x4008, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(3) "川の源流には　ゾーラの泉が　ある。\n"
SHIFT(9) "その泉には　" COLOR(RED) "ジャブジャブさま" COLOR(DEFAULT) "が\n"
SHIFT(36) "住んで　いらっしゃる。" TEXTID(0x4009)
)
,
MSG(
UNSKIPPABLE "Zora's Fountain is the \n"
"source of the river.\n"
COLOR(RED) "Lord Jabu-Jabu " COLOR(DEFAULT) "lives in the \n"
"fountain." TEXTID(0x4009)
)
,
MSG(
UNSKIPPABLE "Aus Zoras Quelle entspringt\n"
"der Fluß.\n"
"Die Quelle ist auch die Residenz\n"
"von " COLOR(RED) "Lord Jabu-Jabu" COLOR(DEFAULT) "." TEXTID(0x4009)
)
,
MSG(
UNSKIPPABLE "La Fontaine Zora est la source\n"
"du fleuve.\n"
COLOR(RED) "Le Grand Jabu-Jabu " COLOR(DEFAULT) "vit dans cette" COLOR(RED) " \n"
COLOR(DEFAULT) "fontaine." TEXTID(0x4009)
)
)

DEFINE_MESSAGE(0x4009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "ジャブジャブさまは　ゾーラの神。\n"
SHIFT(27) "朝晩の　お食事のしたくは\n"
SHIFT(12) COLOR(RED) "ルト姫サマ" COLOR(DEFAULT) "の　担当だったんだ。"
)
,
MSG(
"Lord Jabu-Jabu is the patron deity\n"
"of the Zoras. " COLOR(RED) "Princess Ruto" COLOR(DEFAULT) " is in \n"
"charge of preparing his meals, \n"
"morning and night."
)
,
MSG(
"Lord Jabu-Jabu ist Schutzheiliger\n"
"der Zoras. " COLOR(RED) "Prinzessin Ruto" COLOR(DEFAULT) " sorgt\n"
"täglich für seine Nahrung."
)
,
MSG(
"Le Grand Jabu-Jabu est notre dieu.\n"
"La " COLOR(RED) "Princesse Ruto" COLOR(DEFAULT) "  a pour mission \n"
"de lui préparer ses repas matin et\n"
"soir."
)
)

DEFINE_MESSAGE(0x400A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "我々　ゾーラは　みな\n"
SHIFT(21) "偉大なる　" COLOR(RED) "キングゾーラ様" COLOR(DEFAULT) "に\n"
SHIFT(33) "おつかえしているんだ。"
)
,
MSG(
"We Zoras all serve the great \n"
COLOR(RED) "King Zora" COLOR(DEFAULT) "."
)
,
MSG(
"Wir Zoras dienen dem mächtigen \n"
COLOR(RED) "König Zora" COLOR(DEFAULT) "."
)
,
MSG(
"Nous sommes tous les sujets du\n"
"grand " COLOR(RED) "Roi Zora" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x400B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "偉大なる、キングゾーラ様は\n"
SHIFT(6) COLOR(RED) "王家の部屋" COLOR(DEFAULT) "に　おいでのはずだよ。"
)
,
MSG(
"The great King Zora should be in\n"
"the " COLOR(RED) "Royal Chamber" COLOR(DEFAULT) "."
)
,
MSG(
"Der mächtige König Zora befindet\n"
"sich derzeit im " COLOR(RED) "Königsgemach" COLOR(DEFAULT) "."
)
,
MSG(
"Le grand Roi Zora est dans la\n"
COLOR(RED) "salle du trône" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x400C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"ジャブジャブさまを　見た？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Have you seen Lord Jabu-Jabu?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Habt Ihr bereits Lord Jabu-Jabu\n"
"kennengelernt?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"As-tu vu le Grand Jabu-Jabu?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x400D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "『ゾーラの伝説』では\n"
SHIFT(9) "ジャブジャブさまに　" COLOR(RED) "おサカナ" COLOR(DEFAULT) "を\n"
"そなえると　幸せになれるそうだよ。"
)
,
MSG(
"According to the \"Legend of Zora,\"\n"
"the act of offering a " COLOR(RED) "fish" COLOR(DEFAULT) " to Lord \n"
"Jabu-Jabu will make you happy."
)
,
MSG(
"Nach den Legenden unseres Volkes\n"
"wird dem Gutes zuteil, der Lord\n"
"Jabu-Jabu einen " COLOR(RED) "Fisch" COLOR(DEFAULT) " kredenzt."
)
,
MSG(
"Selon la \"Légende Zora\", faire\n"
"présent d'un poisson au Grand\n"
"Jabu-Jabu te rendra heureux pour\n"
"la journée."
)
)

DEFINE_MESSAGE(0x400E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "そりゃ〜　いかん！"
BOX_BREAK

SHIFT(21) "このあたりへきたら、一度は\n"
COLOR(RED) "ジャブジャブさま" COLOR(DEFAULT) "を　見とかなきゃ。"
BOX_BREAK

SHIFT(3) "キングゾーラ様の　玉座の向こうに\n"
SHIFT(3) "ジャブジャブさまの　いらっしゃる\n"
SHIFT(9) COLOR(BLUE) "ゾーラの泉" COLOR(DEFAULT) "が　あるんだ。　でも…"
BOX_BREAK

SHIFT(3) "キングゾーラ様のゆるしが　ないと\n"
SHIFT(18) "ゾーラの泉には　行けないよ。"
)
,
MSG(
"Oh, that's not good."
BOX_BREAK

"Everybody who comes around here \n"
"should see " COLOR(RED) "Lord Jabu-Jabu" COLOR(DEFAULT) " at \n"
"least once!"
BOX_BREAK

"Zora's Fountain is just beyond \n"
"King Zora's throne. That is where\n"
"Lord Jabu-Jabu swims. But..."
BOX_BREAK

"unless you have King Zora's\n"
"permission, you can't go to \n"
"Zora's Fountain."
)
,
MSG(
"Oh, wie bedauerlich."
BOX_BREAK

"Jeder, der unser Reich besucht,\n"
"sollte wenigstens einmal\n"
"um eine Audienz bei\n"
COLOR(RED) "Lord Jabu-Jabu" COLOR(DEFAULT) " ersuchen!"
BOX_BREAK

"Direkt hinter dem Thron des\n"
"mächtigen König Zora befindet sich\n"
"Zoras Quelle. Dort lebt\n"
"Lord Jabu-Jabu."
BOX_BREAK

"Fehlt Euch aber König Zoras\n"
"Erlaubnis, könnt Ihr die\n"
"Quelle nicht betreten."
)
,
MSG(
"Non? Quel dommage!"
BOX_BREAK

"Tous les nouveaux visiteurs se \n"
"doivent de présenter leurs \n"
"respects au " COLOR(RED) "Grand Jabu-Jabu" COLOR(DEFAULT) "!"
BOX_BREAK

"La Fontaine Zora est juste \n"
"derrière la salle du trône du Roi \n"
"Zora. Le Grand Jabu-Jabu y prend\n"
"son bain. Mais..."
BOX_BREAK

"Sans la permission du Roi Zora\n"
"tu ne pourras y accéder."
)
)

DEFINE_MESSAGE(0x400F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) COLOR(RED) "ルト姫サマ" COLOR(DEFAULT) "が　見つからないんだ。\n"
SHIFT(9) COLOR(BLUE) "ハイリア湖" COLOR(DEFAULT) "まで　さがしてるのに\n"
SHIFT(27) "まだ　見つからないんだ…"
)
,
MSG(
UNSKIPPABLE "We haven't found " COLOR(RED) "Princess Ruto\n"
COLOR(DEFAULT) "even though some of us have \n"
"searched as far as " COLOR(BLUE) "Lake Hylia" COLOR(DEFAULT) "...."
)
,
MSG(
UNSKIPPABLE "Wir haben " COLOR(RED) "Prinzessin Ruto\n"
COLOR(DEFAULT) "immer noch nicht gefunden, obwohl\n"
"wir sogar am " COLOR(BLUE) "Hylia-See" COLOR(DEFAULT) " suchten..."
)
,
MSG(
UNSKIPPABLE "La " COLOR(RED) "Princesse Ruto " COLOR(DEFAULT) "est introuvable.\n"
"Nous l'avons cherchée partout, \n"
"même dans le " COLOR(BLUE) "Lac Hylia" COLOR(DEFAULT) "...."
)
)

DEFINE_MESSAGE(0x4010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "なにか　" COLOR(RED) "ルト姫" COLOR(DEFAULT) "の　てがかりでも\n"
SHIFT(15) "見つけたら　キングゾーラ様に\n"
SHIFT(24) "見せに　行ってくれないか？"
)
,
MSG(
"If you find any clues to\n"
COLOR(RED) "Princess Ruto's " COLOR(DEFAULT) "whereabouts,\n"
"will you show them to King Zora?"
)
,
MSG(
"Wenn Ihr einen Hinweis auf den\n"
"Verbleib von " COLOR(RED) "Prinzessin Ruto " COLOR(DEFAULT) "habt,\n"
"teilt es bitte König Zora mit!"
)
,
MSG(
"Si tu trouves des indices sur la\n"
"disparition de la " COLOR(RED) "Princesse Ruto" COLOR(DEFAULT) ", \n"
"va vite en informer notre Roi!"
)
)

DEFINE_MESSAGE(0x4011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ハイラルの　水は、すべて\n"
SHIFT(6) COLOR(BLUE) "ゾーラの泉" COLOR(DEFAULT) "から　流れてきている。"
BOX_BREAK

SHIFT(51) "その水は　すべて\n"
SHIFT(15) "やがて　ハイラルの　南のはて、\n"
SHIFT(27) COLOR(BLUE) "ハイリア湖" COLOR(DEFAULT) "に　流れつく…"
)
,
MSG(
"All of the water in Hyrule flows\n"
"from " COLOR(BLUE) "Zora's Fountain" COLOR(DEFAULT) "."
BOX_BREAK

"That water flows through Zora's\n"
"River, which eventually reaches\n"
COLOR(BLUE) "Lake Hylia " COLOR(DEFAULT) "to the south."
)
,
MSG(
"Alles Wasser in Hyrule entspringt\n"
COLOR(BLUE) "Zoras Quelle" COLOR(DEFAULT) "."
BOX_BREAK

"Das Wasser fließt durch den\n"
"Zora-Fluß und schließlich in den\n"
COLOR(BLUE) "Hylia-See " COLOR(DEFAULT) "im Süden Hyrules."
)
,
MSG(
"Toute l'eau d'Hyrule provient de la\n"
COLOR(BLUE) "Fontaine Zora" COLOR(DEFAULT) "."
BOX_BREAK

"Cette eau parcourt le Fleuve Zora\n"
"et aboutit dans le " COLOR(BLUE) "Lac Hylia " COLOR(DEFAULT) "\n"
"au sud."
)
)

DEFINE_MESSAGE(0x4012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(84) "あ〜\n"
SHIFT(30) "余は　いきかえったゾラ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "余を　たすけてくれたのは\n"
SHIFT(48) "そのほう　ゾラか？\n"
SHIFT(36) "うむ、くるしゅうない！"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "そのほう、見たところ\n"
SHIFT(24) "水中では　くるしそうじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "余の　感謝の気持ちとして\n"
SHIFT(36) COLOR(RED) "この服" COLOR(DEFAULT) "を　さずけよう。\n"
SHIFT(3) "これなら　水中も　くるしゅうない！"
)
,
MSG(
UNSKIPPABLE "Oh--I've come back to life!"
BOX_BREAK

UNSKIPPABLE "Was it you who saved me?\n"
"Don't be nervous!"
BOX_BREAK

UNSKIPPABLE "It looks like you have a hard time\n"
"breathing underwater."
BOX_BREAK

UNSKIPPABLE "As an expression of my gratitude,\n"
"I grant you this " COLOR(RED) "tunic" COLOR(DEFAULT) ". With this,\n"
"you won't choke underwater."
)
,
MSG(
UNSKIPPABLE "Oh, ich fühle mich wie neugeboren!"
BOX_BREAK

UNSKIPPABLE "Seid Ihr es, der mich vom Eis\n"
"befreit hat? Ich danke Euch!"
BOX_BREAK

UNSKIPPABLE "Mir scheint, Ihr könnt Euch nicht\n"
"sehr lange unter Wasser aufhalten."
BOX_BREAK

UNSKIPPABLE "Als Zeichen meines Dankes nehmt\n"
"bitte diese " COLOR(RED) "Rüstung" COLOR(DEFAULT) ". Mit ihr könnt\n"
"Ihr nun auch unter Wasser atmen!"
)
,
MSG(
UNSKIPPABLE "Oh--Nous revenons à la vie!"
BOX_BREAK

UNSKIPPABLE "Est-ce toi qui Nous a sauvé?\n"
"Ne sois pas timide devant Nous!"
BOX_BREAK

UNSKIPPABLE "Il Nous semble que tu ne puisses \n"
"respirer sous l'eau comme les \n"
"nobles Zoras..."
BOX_BREAK

UNSKIPPABLE "En reconnaissance de tes services,\n"
"Nous t'offrons cette " COLOR(RED) "tunique" COLOR(DEFAULT) ". \n"
"Elle te permettra de respirer sous\n"
"l'eau. Comme Nous, quoi."
)
)

DEFINE_MESSAGE(0x4013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "ルト姫は　ハイリア湖を\n"
SHIFT(9) "調べたいと　言っておったゾラ…\n"
SHIFT(30) "また　また　心配だゾラ…"
)
,
MSG(
"Princess Ruto has gone to Lake \n"
"Hylia and has not come back...\n"
"I'm so worried...again!"
)
,
MSG(
"Prinzessin Ruto hat sich zum\n"
"Hylia-See begeben...\n"
"Ich mache mir erneut große Sorgen\n"
"um sie..."
)
,
MSG(
"La Princesse Ruto est partie au \n"
"Lac Hylia et n'est jamais revenue.\n"
"Nous sommes inquiet..."
)
)

DEFINE_MESSAGE(0x4014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(78) "ほう…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "これは、これは…　ふむ　ふむ…\n"
SHIFT(51) "ふむ、" COLOR(RED) "目薬" COLOR(DEFAULT) "とな…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "あるようでも　あり…\n"
SHIFT(39) "ないようでも　あり…\n"
SHIFT(24) "クスリの原料は　あるゾラ。"
BOX_BREAK

UNSKIPPABLE "湖研究所の博士に　" COLOR(RED) "コレ" COLOR(DEFAULT) "を　わたせば\n"
SHIFT(33) "つくってもらえるゾラ。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "しかし…　コレは　新鮮なうちに\n"
SHIFT(60) "届けないと…" TEXTID(0x4015)
)
,
MSG(
UNSKIPPABLE "Ooh...\n"
"This is... well... hmmm...\n"
"Hmmm... " COLOR(RED) "Eye drops" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "You might say we have them,\n"
"you might say we don't...\n"
"We do have the ingredients."
BOX_BREAK

UNSKIPPABLE "If you take the " COLOR(RED) "ingredients " COLOR(DEFAULT) "to the\n"
"doctor at the lake laboratory, he\n"
"can make the drops for you."
BOX_BREAK

UNSKIPPABLE "But you need to deliver them\n"
"fresh..." TEXTID(0x4015)
)
,
MSG(
UNSKIPPABLE "Ooh...\n"
"Das ist eine... Nun... Hmmm...\n"
"Hmmm... " COLOR(RED) "Augentropfen" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Nun, wir haben in jedem Fall die\n"
"erforderlichen Zutaten dafür."
BOX_BREAK

UNSKIPPABLE "Bringt diese " COLOR(RED) "Zutaten " COLOR(DEFAULT) "zum\n"
"Labor am See. Dort werden die\n"
"Augentropfen für Euch zubereitet."
BOX_BREAK

UNSKIPPABLE "Doch eilt, denn die Zutaten\n"
"müssen frisch sein..." TEXTID(0x4015)
)
,
MSG(
UNSKIPPABLE "Hoo...\n"
"Il veut donc....hmmm...\n"
"Hmmm... " COLOR(RED) "Des Gouttes" COLOR(DEFAULT) "...?"
BOX_BREAK

UNSKIPPABLE "Peut-être en avons-Nous,\n"
"peut-être n'en avons-Nous pas...\n"
"Nous en avons les " COLOR(RED) "ingrédients" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Apporte les ingrédients au docteur\n"
"du " COLOR(RED) "laboratoire" COLOR(DEFAULT) ", il en fera des\n"
"Gouttes!"
BOX_BREAK

UNSKIPPABLE "Mais garde-les au frais..." TEXTID(0x4015)
)
)

DEFINE_MESSAGE(0x4015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
COLOR(RED) "クサらせない" COLOR(DEFAULT) "で　行けるゾラか？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Can you make it " COLOR(RED) "before they\n"
"spoil" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Werdet Ihr es schaffen,\n"
COLOR(RED) "bevor sie verderben" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Peux-tu t'en occuper avant qu'" COLOR(RED) "ils \n"
"ne se dessèchent" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "クサらせそうゾラか？\n"
SHIFT(45) "馬に乗って行けば、\n"
SHIFT(12) "行けない距離ではないゾラが…"
)
,
MSG(
"Then you think they'll spoil \n"
"before you can get there?\n"
"It's not that far if you make the \n"
"connection on horseback..."
)
,
MSG(
"Ihr glaubt, nicht schnell genug zu\n"
"sein? Nun, auf dem Rücken eines\n"
"flinken Pferdes könnt Ihr die\n"
"Wegstrecke schneller zurücklegen..."
)
,
MSG(
"Alors ne penses-tu pas être aussi\n"
"rapide que Nous?\n"
"Ce n'est qu'à une minute à cheval!"
)
)

DEFINE_MESSAGE(0x4017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(69) "ホホーゥ！"
BOX_BREAK_DELAYED(40)

SHIFT(9) NAME "よ、ちょっとは\n"
SHIFT(9) "たくましくなったようだのぉ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "ゼルダ姫は　お前が\n"
SHIFT(12) "戻ってくるのを　待っておるぞ。"
BOX_BREAK

UNSKIPPABLE SHIFT(48) COLOR(RED) "ゴロンのルビー" COLOR(DEFAULT) "は\n"
SHIFT(18) "もう　手に入れたはずじゃな！"
)
,
MSG(
UNSKIPPABLE "Hoot hoot!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE NAME ", you look like \n"
"you're getting more comfortable\n"
"in your role as adventurer."
BOX_BREAK

UNSKIPPABLE "I think Princess Zelda is \n"
"waiting for you to visit her again."
BOX_BREAK

UNSKIPPABLE "You already have the " COLOR(RED) "Goron's Ruby" COLOR(DEFAULT) "," COLOR(RED) "\n"
COLOR(DEFAULT) "don't you?"
)
,
MSG(
UNSKIPPABLE "Sei gegrüßt!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE NAME ", es sieht aus, als\n"
"würdest Du Dich langsam an Dein\n"
"Abenteuerleben gewöhnen!"
BOX_BREAK

UNSKIPPABLE "Ich glaube, Prinzessin Zelda wartet\n"
"darauf, daß Du sie wieder besuchst."
BOX_BREAK

UNSKIPPABLE "Du besitzt doch schon den\n"
COLOR(RED) "Goronen-Opal" COLOR(DEFAULT) ", oder nicht?"
)
,
MSG(
UNSKIPPABLE "Hou hou!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE NAME ", \n"
"Ton aventure te plait-elle?"
BOX_BREAK

UNSKIPPABLE "La Princesse Zelda t'attend."
BOX_BREAK

UNSKIPPABLE "Tu as déjà le " COLOR(RED) "Rubis Goron" COLOR(DEFAULT) ",\n"
"n'est-ce pas?"
)
)

DEFINE_MESSAGE(0x4018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "ワシは　ハイリア湖の水と\n"
SHIFT(39) "ヘンなモノを　まぜて\n"
SHIFT(6) "クスリをつくる　研究をしておる。"
BOX_BREAK

SHIFT(33) "クスリ屋の　バアさんも\n"
SHIFT(12) "ワシの弟子　みたいなモンじゃ！\n"
SHIFT(45) "フォッフォッフォ！"
)
,
MSG(
"Hello there, son. I'm researching \n"
"the process of making medicine by \n"
"mixing Lake Hylia's water with \n"
"various unusual compounds."
BOX_BREAK

"Perhaps you've met that old lady \n"
"from the potion shop...she is like \n"
"a student of mine...\n"
"Ho ho ho!"
)
,
MSG(
"Hallo! Ich bin gerade dabei,\n"
"das Wasser aus dem Hylia-See\n"
"mit einigen seltsamen Substanzen\n"
"zu vermischen."
BOX_BREAK

"Vielleicht hast Du ja schon mal mit\n"
"Asa, der alten Frau in Kakarikos\n"
"Hexenladen gesprochen... Sie hat\n"
"viel von mir gelernt..."
)
,
MSG(
"Salut à toi, mon garçon! \n"
"En mélangeant l'eau du Lac Hylia à\n"
"des trucs baveux je fais des \n"
"potions dégueulasses!!!"
BOX_BREAK

"As-tu déjà rencontré la p'tite \n"
"vieille de l'apothicaire?"
BOX_BREAK

"Elle est comme mon élève et \n"
"teste toutes mes potions...\n"
"Nyarf nyarf nyarf!"
)
)

DEFINE_MESSAGE_JPN(0x4019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) QUICKTEXT_ENABLE "おおっ！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(3) "ゾーラの里が　氷にとざされて以来\n"
SHIFT(12) "めったに　見ることの　なかった\n"
SHIFT(21) COLOR(RED) "メダマガエル" COLOR(DEFAULT) "では　ないか？！" EVENT
)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
)
DEFINE_MESSAGE_NES(0x4019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(/* MISSING */)
,
MSG(
QUICKTEXT_ENABLE "Oh, wow!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "I haven't seen an " COLOR(RED) "Eyeball Frog" COLOR(DEFAULT) " \n"
"like this since Zora's Domain froze\n"
"over!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Oh, wow!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Ich habe keinen " COLOR(RED) "Glotzfrosch" COLOR(DEFAULT) " \n"
"mehr gesehen, seit Zoras Reich\n"
"vom Eis überzogen wurde!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Oh! Woah!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Superbe " COLOR(RED) "Crapaud-qui-louche" COLOR(DEFAULT) ".\n"
"Un spécimen comme celui-ci se\n"
"fait rare depuis un bon moment!" EVENT
)
)

DEFINE_MESSAGE(0x401A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "余の　かわいい　" COLOR(RED) "ルト姫" COLOR(DEFAULT) "よ…\n"
SHIFT(12) "いったい　どこへ　行ったゾラ…"
)
,
MSG(
"Oh, my dear, sweet " COLOR(RED) "Princess Ruto" COLOR(DEFAULT) "...\n"
"Where has she gone?\n"
"I'm so worried..."
)
,
MSG(
"Oh, meine liebste, teuerste\n"
COLOR(RED) "Prinzessin Ruto" COLOR(DEFAULT) "...\n"
"Wo mag sie sein?\n"
"Ich mache mir solche Sorgen..."
)
,
MSG(
"Notre chère et douce Princesse\n"
"Ruto... Mais où est-elle?\n"
"Nous sommes si inquiet..."
)
)

DEFINE_MESSAGE(0x401B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "おー、その手紙は！？\n"
SHIFT(42) QUICKTEXT_ENABLE COLOR(RED) "ルト姫の手紙" COLOR(DEFAULT) "ゾラ！！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(72) "ルト姫は\n"
"ジャブジャブさまの　お腹の中とな？"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "そんな　バカなゾラ！？"
BOX_BREAK

UNSKIPPABLE "我らの守り神　" COLOR(RED) "ジャブジャブさま" COLOR(DEFAULT) "が、\n"
SHIFT(33) "余のかわいい　ルト姫を\n"
SHIFT(12) "食べたりするハズは　ないゾラ！"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "だが、あの…　" COLOR(RED) "ガノンドロフ" COLOR(DEFAULT) "とか\n"
SHIFT(36) "いうヤツが　きてから、\n"
SHIFT(6) "ジャブジャブさまは　ヘンだゾラ。"
BOX_BREAK

UNSKIPPABLE SHIFT(75) "…よし！\n"
"そちを　信じて　ジャブジャブさまの\n"
SHIFT(3) "祭壇に　つづく道へ　通してやろう。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "この手紙は　余が　あずかるゾラ。\n"
SHIFT(3) "入っていた" COLOR(RED) "ビン" COLOR(DEFAULT) "は、そちにやるから\n"
SHIFT(24) "ありがたく　受け取るゾラ！" TEXTID(0x401C)
)
,
MSG(
UNSKIPPABLE "Ho, this letter! \n"
"It's from " COLOR(RED) "Princess Ruto" COLOR(DEFAULT) "!!"
BOX_BREAK

UNSKIPPABLE "Hmmm...Let's see...\n"
"She's inside Lord Jabu-Jabu?\n"
"That's not possible!"
BOX_BREAK

UNSKIPPABLE "Our guardian god, " COLOR(RED) "Lord Jabu-Jabu" COLOR(DEFAULT) ",\n"
"would never eat my dear Princess\n"
"Ruto!"
BOX_BREAK

UNSKIPPABLE "But since that stranger, " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ",\n"
"came here, Lord Jabu-Jabu has \n"
"been a little green around the\n"
"gills..."
BOX_BREAK

UNSKIPPABLE "The evidence seems clear.\n"
"Of course, you'll go find Ruto.\n"
"You can pass through here to the \n"
"altar of Lord Jabu-Jabu."
BOX_BREAK

UNSKIPPABLE "I'll keep this letter. You keep the \n"
COLOR(RED) "bottle " COLOR(DEFAULT) "it was in. Take it \n"
"respectfully!" TEXTID(0x401C)
)
,
MSG(
UNSKIPPABLE "Dieser Brief! \n"
"Er ist von " COLOR(RED) "Prinzessin Ruto" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Hmmm... Laßt mich lesen...\n"
"Sie ist im Bauch von\n"
"Lord Jabu-Jabu?\n"
"Das ist doch nicht möglich!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Lord Jabu-Jabu " COLOR(DEFAULT) "ist unser\n"
"Schutzheiliger und würde\n"
"Prinzessin Ruto niemals\n"
"verspeisen!"
BOX_BREAK

UNSKIPPABLE "Doch seit dieser seltsame\n"
"Fremdling namens " COLOR(RED) "Ganondorf" COLOR(DEFAULT) " unser\n"
"Reich besucht hat, benimmt sich\n"
"Lord Jabu-Jabu etwas sonderbar..."
BOX_BREAK

UNSKIPPABLE "Der Brief scheint echt zu sein. Ihr\n"
"dürft Prinzessin Ruto suchen, wenn\n"
"Ihr mögt. Passiert das Tor\n"
"hinter mir!"
BOX_BREAK

UNSKIPPABLE "Ich behalte diesen Brief. Nehmt Ihr\n"
"die " COLOR(RED) "Flasche" COLOR(DEFAULT) ", in der er sich befand.\n"
"Ihr werdet sie bestimmt gut\n"
"nutzen können!" TEXTID(0x401C)
)
,
MSG(
UNSKIPPABLE "Ho! Cette lettre! \n"
"Elle est de la " COLOR(RED) "Princesse Ruto" COLOR(DEFAULT) "!!"
BOX_BREAK

UNSKIPPABLE "Hmmm...voyons voir...\n"
"Elle est dans le ventre du Grand\n"
"Jabu-Jabu?\n"
"C'est incroyable!"
BOX_BREAK

UNSKIPPABLE "Notre dieu protecteur, le " COLOR(RED) "Grand" COLOR(DEFAULT) "\n"
COLOR(RED) "Jabu-Jabu" COLOR(DEFAULT) ", ne ferait jamais une\n"
"chose pareille à la Princesse Ruto!"
BOX_BREAK

UNSKIPPABLE "Mais depuis la venue de cet \n"
"étranger, " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", le Grand \n"
"Jabu-Jabu est un peu pâlot..."
BOX_BREAK

UNSKIPPABLE "Les faits sont clairs...\n"
"Tu dois délivrer Notre Ruto!\n"
"Passe derrière Nous et dirige-toi \n"
"vers l'autel du Grand Jabu-Jabu."
BOX_BREAK

UNSKIPPABLE "Nous gardons cette lettre.\n"
"Tu peux conserver cette " COLOR(RED) "bouteille" COLOR(DEFAULT) "!" TEXTID(0x401C)
)
)

DEFINE_MESSAGE(0x401C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "はやく、余の　かわいい　" COLOR(RED) "ルト姫" COLOR(DEFAULT) "を\n"
SHIFT(9) "見つけ出してきてくれぃ…ゾラ！"
)
,
MSG(
"Please find my dear " COLOR(RED) "Princess Ruto" COLOR(DEFAULT) "\n"
"immediately... Zora!"
)
,
MSG(
"Bitte findet meine liebste\n"
COLOR(RED) "Prinzessin Ruto" COLOR(DEFAULT) "\n"
"so schnell Ihr könnt!"
)
,
MSG(
"Nous t'en prions...\n"
"Sauve la " COLOR(RED) "Princesse Ruto" COLOR(DEFAULT) "..."
)
)

DEFINE_MESSAGE(0x401D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(21) COLOR(LIGHTBLUE) "水中では　息が　できないよ！\n"
COLOR(DEFAULT) SHIFT(3) COLOR(LIGHTBLUE) "苦しくなったら　" COLOR(DEFAULT) "ブーツ" COLOR(LIGHTBLUE) "を　ぬいで！" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "You can't breathe underwater!\n"
"If you start choking, take off\n"
"those " COLOR(DEFAULT) "boots" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Du kannst unter Wasser nicht\n"
"atmen! Wird Dir die Luft knapp,\n"
"ziehe diese " COLOR(DEFAULT) "Stiefel " COLOR(LIGHTBLUE) "aus!" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Vous ne pouvez respirer sous l'eau!\n"
"Retirez ves " COLOR(DEFAULT) "bottes " COLOR(LIGHTBLUE) "avant qu'il ne\n"
"soit trop tard!" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x401E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "あ〜れ〜っ！！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "Ooooh Noooooo!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(66) "Ooooh neiiiin!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "Hoooo! Noooooonnnn!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x401F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(84) "あ〜\n"
SHIFT(30) "余は　いきかえったゾラ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "余を　たすけてくれたのは\n"
SHIFT(48) "そのほう　ゾラか？\n"
SHIFT(36) "うむ、くるしゅうない！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "余の　感謝の気持ちとして\n"
SHIFT(24) COLOR(BLUE) "ゾーラの服" COLOR(DEFAULT) "を　さずけよう。\n"
SHIFT(45) "これなら　水中も…"
BOX_BREAK

UNSKIPPABLE SHIFT(81) "なに？\n"
SHIFT(36) "もう　持っておるとな？\n"
SHIFT(33) "用意のいい　男じゃの…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "では　感謝の気持ちを　こめて\n"
SHIFT(45) "一発　キッスでも…\n"
SHIFT(36) "え、いらない？　あ、そ…"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "では　かわりに　ワシの\n"
SHIFT(24) "悩みを　きいてもらうゾラ。" TEXTID(0x4013)
)
,
MSG(
UNSKIPPABLE "Ohhh, I'm revived...\n"
"Was it you who saved me?\n"
"Don't be so nervous!"
BOX_BREAK

UNSKIPPABLE "I will give you a " COLOR(BLUE) "Zora Tunic " COLOR(DEFAULT) "as\n"
"a token of my thanks. If you have\n"
"this, you can... What?!"
BOX_BREAK

UNSKIPPABLE "You already have one? You're \n"
"ready for anything, aren't you!"
BOX_BREAK

UNSKIPPABLE "With my heartfelt thanks...how \n"
"about a KISS?! What? You don't \n"
"want it?! Oh well..."
BOX_BREAK

UNSKIPPABLE "If you don't want my rewards, you\n"
"can listen to my troubles..." TEXTID(0x4013)
)
,
MSG(
UNSKIPPABLE "Oh, ich bin wieder frei...\n"
"Seid Ihr es, der mich vom Eis\n"
"befreit hat? Ich danke Euch!"
BOX_BREAK

UNSKIPPABLE "Als Zeichen meines Dankes nehmt\n"
"bitte diese " COLOR(BLUE) "Zora-Rüstung" COLOR(DEFAULT) ". Damit\n"
"könnt Ihr... Wie bitte?!"
BOX_BREAK

UNSKIPPABLE "Ihr habt sie bereits? Mir scheint,\n"
"Ihr seid auf alles vorbereitet!"
BOX_BREAK

UNSKIPPABLE "Laßt mich Euch dennoch herzlich\n"
"danken... Wie wäre es mit einem \n"
"königlichen KUSS?! Ihr mögt das\n"
"nicht? Nun denn..."
BOX_BREAK

UNSKIPPABLE "Wenn Ihr meinen Dank nicht wollt,\n"
"dann lauscht wenigstens meinen\n"
"Sorgen..." TEXTID(0x4013)
)
,
MSG(
UNSKIPPABLE "Oh--Nous revenons à la vie!"
BOX_BREAK

UNSKIPPABLE "Nous as-tu sauvé?\n"
"Ne sois pas timide et parle-Nous!"
BOX_BREAK

UNSKIPPABLE "Nous allons te donner cette \n"
"tunique Zora en gage de Notre \n"
"immense gratitude!\n"
"Tu pourras...Quoi?!"
BOX_BREAK

UNSKIPPABLE "Tu en as déjà une? \n"
"Tu es à la mode, toi!"
BOX_BREAK

UNSKIPPABLE "Bon alors...\n"
"Que dirais-tu d'un de Nos bisous?\n"
"Quoi? Tu n'en veux pas?\n"
"Ha! Bon..."
BOX_BREAK

UNSKIPPABLE "Si tu ne veux pas de Nos cadeaux,\n"
"écoute au moins Nos petits\n"
"malheurs..." TEXTID(0x4013)
)
)

DEFINE_MESSAGE(0x4020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "ボクは　" COLOR(BLUE) "ゾーラ族" COLOR(DEFAULT) "。\n"
SHIFT(21) "ここで　かわいい　ゾーラの\n"
SHIFT(24) "女のコを　見なかったかい？"
)
,
MSG(
"I am a " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". Have you seen a \n"
"pretty Zora girl around here?"
)
,
MSG(
"Ich bin ein " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". Habt Ihr nicht\n"
"irgendwo ein hübsches\n"
"Zora-Mädchen gesehen?"
)
,
MSG(
"Je suis un " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". As-tu vu une\n"
"jolie fille zora dans le coin?"
)
)

DEFINE_MESSAGE(0x4021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "ボクは　" COLOR(BLUE) "ゾーラ族" COLOR(DEFAULT) "。\n"
SHIFT(33) "なにか　かわったものが\n"
SHIFT(33) "流れついていないかな？"
)
,
MSG(
"I am a " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". Have you seen\n"
"anything strange in the lake?\n"
"The river carries many things \n"
"into this lake!"
)
,
MSG(
"Ich bin ein " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". Habt Ihr nicht\n"
"manch Seltsames in diesem See\n"
"gefunden?\n"
"Der Fluß trägt vieles hierher!"
)
,
MSG(
"Je suis un " COLOR(BLUE) "Zora" COLOR(DEFAULT) ". As-tu vu quelque\n"
"chose d'étrange dans le Lac? \n"
"Le fleuve véhicule souvent bien\n"
"des curiosités!"
)
)

DEFINE_MESSAGE(0x4022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(33) QUICKTEXT_ENABLE "おそかったではないか！" QUICKTEXT_DISABLE "\n"
SHIFT(24) QUICKTEXT_ENABLE "なにを　しておったのじゃ！" QUICKTEXT_DISABLE "\n"
SHIFT(33) "こ…　この…　" QUICKTEXT_ENABLE "役立たず！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(60) "チョッピリ…\n"
SHIFT(30) "ココロぼそかったゾラ…"
)
,
MSG(
UNSKIPPABLE "You..." QUICKTEXT_ENABLE "You're late!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "What took you so long?" QUICKTEXT_DISABLE "\n"
"You're " QUICKTEXT_ENABLE "useless!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "I was just lonely, that's all...\n"
"Just a little!!"
)
,
MSG(
UNSKIPPABLE "Du... " QUICKTEXT_ENABLE "Du bist spät dran!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Warum hat es so lange gedauert?" QUICKTEXT_DISABLE "\n"
"Du " QUICKTEXT_ENABLE "bist eine ziemlich lahme Ente!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Na gut... Ich hab mich ein bißchen\n"
"einsam gefühlt, das ist alles...\n"
"Aber nur ein bißchen!"
)
,
MSG(
UNSKIPPABLE "Toi..." QUICKTEXT_ENABLE "t'es en retard!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Je t'attends depuis une heure!" QUICKTEXT_DISABLE "\n"
"Tu es " QUICKTEXT_ENABLE "NUL!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Je me sentais seule, c'est tout...\n"
"Juste un peu!!"
)
)

DEFINE_MESSAGE(0x4023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(60) "チョッピリ…\n"
SHIFT(21) "コワかったんだから…ゾラ！"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "I was scared..." QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "A little!" QUICKTEXT_DISABLE " Just a little!!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Ich hatte Angst..." QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Aber nur ein wenig!" QUICKTEXT_DISABLE "\n"
"Nur ein wenig!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "J'avais peur..." QUICKTEXT_DISABLE QUICKTEXT_ENABLE "un peu!" QUICKTEXT_DISABLE " \n"
"Enfin juste un peu!!"
)
)

DEFINE_MESSAGE(0x4024, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(45) NAME "！\n"
SHIFT(45) NAME "！"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
NAME "!"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
NAME "!"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
NAME "!"
)
)

DEFINE_MESSAGE(0x4025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(75) QUICKTEXT_ENABLE "そなた！" QUICKTEXT_DISABLE "\n"
SHIFT(6) "思ったより…　カッコよかったぞ。\n"
SHIFT(51) "チョッピリ…な。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "ま…　たすけてもらったのだから、\n"
SHIFT(6) "なにか　礼を　してやっても　よい。"
BOX_BREAK

"なにが　望みじゃ、いうてみよ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "水の精霊石ほしい\n"
    "べつにない…" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "You!" QUICKTEXT_DISABLE "\n"
"You looked cool...cooler than I \n"
"thought you would, anyway... \n"
QUICKTEXT_ENABLE "Just a little!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Well, anyway, you saved me, so I \n"
"guess I'll reward you."
BOX_BREAK

UNSKIPPABLE "What do you wish? Just tell me...\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "I want that Spiritual Stone.\n"
    "Nothing really..." COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Hey, Du!" QUICKTEXT_DISABLE "\n"
"Du bist cool...\n"
"Ein bißchen mehr als andere... \n"
QUICKTEXT_ENABLE "Aber nur ein bißchen!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Naja, egal, Du hast mich gerettet.\n"
"Ich denke, ich kann Dir eine\n"
"Belohnung dafür geben."
BOX_BREAK

UNSKIPPABLE "Was möchtest Du? Sag's mir...\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ich möchte den Heiligen Stein!\n"
    "Eigentlich nichts..." COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Toi!" QUICKTEXT_DISABLE "\n"
"T'es cool... Plus cool que je ne le\n"
"pensais... " QUICKTEXT_ENABLE "Enfin juste un peu!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Tu m'as sauvée... Je dois donc te \n"
"récompenser!"
BOX_BREAK

UNSKIPPABLE "Que veux-tu de moi? Je t'écoute...\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "La Pierre Ancestrale\n"
    "Rien du tout" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(54) "水の精霊石とは\n"
SHIFT(3) COLOR(BLUE) "ゾーラのサファイア" COLOR(DEFAULT) "のことじゃな？" TEXTID(0x4027)
)
,
MSG(
UNSKIPPABLE "You mean the Spiritual Stone of\n"
"Water, " COLOR(BLUE) "Zora's Sapphire" COLOR(DEFAULT) ", don't you?" TEXTID(0x4027)
)
,
MSG(
UNSKIPPABLE "Du sprichst vom Heiligen Stein des\n"
"Wassers, dem " COLOR(BLUE) "Zora-Saphir" COLOR(DEFAULT) "?" TEXTID(0x4027)
)
,
MSG(
UNSKIPPABLE "Tu veux le " COLOR(BLUE) "Saphir Zora" COLOR(DEFAULT) "?" TEXTID(0x4027)
)
)

DEFINE_MESSAGE(0x4027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "この　サファイアは、\n"
SHIFT(3) "わらわの夫となる者に　さずけよと\n"
SHIFT(21) "母上に　いただいたのじゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "いわば\n"
SHIFT(15) "ゾーラの　えんげーじりんぐ…"
BOX_BREAK

SHIFT(69) QUICKTEXT_ENABLE "よかろう！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(72) "そなたに\n"
SHIFT(24) "わらわの　イチバン　大切な\n"
SHIFT(6) "ゾーラのサファイアを　さずける！"
)
,
MSG(
UNSKIPPABLE "My mother gave it to me and said \n"
"I should give it only to the man \n"
"who will be my husband. You might\n"
"call it the Zora's Engagement Ring!"
BOX_BREAK

UNSKIPPABLE SHIFT(69) QUICKTEXT_ENABLE "All right!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "I'll give you my most precious\n"
"possession: \n"
"Zora's Sapphire!"
)
,
MSG(
UNSKIPPABLE "Ich habe ihn von meiner Mama\n"
"bekommen und darf ihn nur dem\n"
"geben, der mich heiratet. Es ist so\n"
"eine Art Verlobungsring der Zoras!"
BOX_BREAK

UNSKIPPABLE SHIFT(84) QUICKTEXT_ENABLE "Okay!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Ich gebe Dir meinen wertvollsten\n"
"Schatz: Den Zora-Saphir!"
)
,
MSG(
UNSKIPPABLE "Ma mère me l'a transmis et je ne\n"
"le donnerai qu'à mon futur mari.\n"
"C'est une bague de fiançailles \n"
"Zora!"
BOX_BREAK

UNSKIPPABLE SHIFT(78) QUICKTEXT_ENABLE "Bon OK!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Je te donne mon bien le plus\n"
"précieux:\n"
"Le Saphir Zora!"
)
)

DEFINE_MESSAGE(0x4028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(24) "父上には　ナイショ…ゾラ！"
)
,
MSG(
"Don't tell my father..."
)
,
MSG(
"Sag's bloß nicht meinem Daddy..."
)
,
MSG(
"Ne le dis pas à Père..."
)
)

DEFINE_MESSAGE(0x4029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(72) "ウフフ…\n"
SHIFT(24) "えんりょは　いらないゾラ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "そなたの　キモチは\n"
SHIFT(12) "わらわには　おみとおし…ゾラ！" TEXTID(0x4027)
)
,
MSG(
UNSKIPPABLE "Heeheehee... Don't be shy."
BOX_BREAK

UNSKIPPABLE "I can tell what you're thinking..." TEXTID(0x4027)
)
,
MSG(
UNSKIPPABLE "Hihihi... Sei nicht so schüchtern!"
BOX_BREAK

UNSKIPPABLE "Ich weiß genau, was Du gerade\n"
"denkst..." TEXTID(0x4027)
)
,
MSG(
UNSKIPPABLE "Hihihihi... Ne sois pas timide."
BOX_BREAK

UNSKIPPABLE "Je sais à quoi tu penses..." TEXTID(0x4027)
)
)

DEFINE_MESSAGE(0x402A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "サカナを　買いたいけど、\n"
SHIFT(6) "ちょっと　ねだんが　高いしなあ…"
BOX_BREAK

SHIFT(21) "しかたないから　そのへんで\n"
SHIFT(42) "およいでるサカナを\n"
SHIFT(45) "つかまえようっと。"
)
,
MSG(
"I want to buy a fish, but they are\n"
"a little too expensive..."
BOX_BREAK

"I have no choice but to catch one\n"
"of the fishes that's swimming\n"
"around out there."
)
,
MSG(
"Ich wollte eigentlich einen Fisch\n"
"kaufen, aber er ist ein bißchen zu\n"
"teuer..."
BOX_BREAK

"Da muß ich wohl einen der\n"
"Fische fangen, die hier\n"
"herumschwimmen."
)
,
MSG(
"Je veux acheter un poisson mais \n"
"je n'ai pas assez d'argent..."
BOX_BREAK

"Il ne me reste qu'à en pêcher un.\n"
"Il y en a dans ce coin..."
)
)

DEFINE_MESSAGE(0x402B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) "おお、" NAME "よ！\n"
SHIFT(12) "姫を　助けてくれたそうじゃな。\n"
SHIFT(12) "感謝するゾラ！"
)
,
MSG(
"Oh, " NAME "!\n"
"So, you saved the Princess, eh?\n"
"I really appreciate it!"
)
,
MSG(
"Oh, " NAME "!\n"
"Ihr habt also\n"
"Prinzessin Ruto gerettet?\n"
"Ich bin sehr froh darüber!"
)
,
MSG(
"Oh, " NAME "!\n"
"Alors tu as sauvé la Princesse?\n"
"Nous en sommes ravi!"
)
)

DEFINE_MESSAGE(0x402C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "わらわの　イチバン　大切なモノ、\n"
SHIFT(42) "役に　立ったゾラ…？\n"
SHIFT(81) "ウフ！"
)
,
MSG(
"Did my most precious possession\n"
"help you in your quest? Heehee!"
)
,
MSG(
"Ich hoffe, mein wertvollster\n"
"Schatz wird Dir bei Deiner Mission\n"
"helfen. Das wäre super!"
)
,
MSG(
"Prends-tu soin de mon bien le plus \n"
"précieux?\n"
"Hihihihihihi!"
)
)

DEFINE_MESSAGE(0x402D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "おや、" NAME "さま。\n"
SHIFT(18) "あれ以来、ルト姫サマは\n"
SHIFT(18) "アナタに　夢中です！"
)
,
MSG(
"Oh, hi " NAME "!\n"
"You're all Princess Ruto will talk\n"
"about lately!"
)
,
MSG(
"Oh, hallo " NAME "!\n"
"Prinzessin Ruto spricht in der\n"
"letzten Zeit nur noch über Euch!"
)
,
MSG(
"Oh! Salut " NAME "!\n"
"La Princesse Ruto ne parle que de\n"
"toi!"
)
)

DEFINE_MESSAGE(0x402E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "これは、" NAME "さま。\n"
SHIFT(12) "おかげで　ジャブジャブさまも\n"
SHIFT(12) "お静まりに　なられたようです。"
)
,
MSG(
"Oh, it's you, " NAME "!\n"
"Thanks to you, Lord Jabu-Jabu is\n"
"back to normal!"
)
,
MSG(
"Oh, Ihr seid es, " NAME "!\n"
"Dank Euch ist Lord Jabu-Jabu\n"
"endlich wieder der alte!"
)
,
MSG(
"Oh! C'est toi, " NAME "!\n"
"Merci pour tout! Le Grand \n"
"Jabu-Jabu est en pleine forme!"
)
)

DEFINE_MESSAGE(0x402F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(36) "我々　ゾーラ族は　みな\n"
SHIFT(12) "キングゾーラ様を　尊敬してる。\n"
SHIFT(6) "王としての風格が　あるよ。　ウン！"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "キングゾーラ様には\n"
SHIFT(9) "お一人だけ　姫が　いらっしゃる。\n"
SHIFT(18) COLOR(RED) "ルト" COLOR(DEFAULT) "という名の　お姫サマだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "この　ルト姫サマが、\n"
SHIFT(24) "手に負えない　おてんばで、\n"
SHIFT(21) "王の　なやみのタネ　なんだ。" TEXTID(0x400B)
)
,
MSG(
UNSKIPPABLE "We Zoras all respect the great\n"
"King Zora! He has the dignity of\n"
"a king. Oh yeah, he does."
BOX_BREAK

UNSKIPPABLE "The grand King Zora has a \n"
"Princess named " COLOR(RED) "Ruto" COLOR(DEFAULT) ". She's an\n"
"only child."
BOX_BREAK

UNSKIPPABLE "She's also a wild tomboy, and it\n"
"seems like she's always causing\n"
"the King a lot of trouble!" TEXTID(0x400B)
)
,
MSG(
UNSKIPPABLE "Wir Zoras achten den mächtigen\n"
"König Zora sehr. Er hat wahrlich\n"
"königliche Würde!"
BOX_BREAK

UNSKIPPABLE "Der mächtige König Zora hat eine\n"
"Tochter, Prinzessin " COLOR(RED) "Ruto" COLOR(DEFAULT) ". Sie ist\n"
"sein einziges Kind."
BOX_BREAK

UNSKIPPABLE "Sie ist ziemlich wild und\n"
"sorgt für ordentlichen Wirbel\n"
"hier in Zoras Reich." TEXTID(0x400B)
)
,
MSG(
UNSKIPPABLE "Tous les Zoras respectent le Roi\n"
"Zora! Il a la dignité et la noblesse\n"
"d'un grand souverain! \n"
"Il a une classe...dingue!"
BOX_BREAK

UNSKIPPABLE "Le grand Roi Zora a une fille \n"
"unique: la Princesse " COLOR(RED) "Ruto" COLOR(DEFAULT) ". "
BOX_BREAK

UNSKIPPABLE "C'est un vrai garçon manqué!\n"
"Notre Roi en est très inquiet." TEXTID(0x400B)
)
)

DEFINE_MESSAGE_JPN(0x4030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(60) "さあ、できた。"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "このクスリは\n"
"防腐剤は　一切使用しておりません。\n"
SHIFT(18) "この気温では、" COLOR(RED) "長くはもたん" COLOR(DEFAULT) "。"
BOX_BREAK

UNSKIPPABLE SHIFT(54) "ゴロンの山まで\n"
SHIFT(36) "キバって　走りなさい。\n"
SHIFT(57) "若いんだから。"
)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
,
MSG(/* MISSING */)
)
DEFINE_MESSAGE_NES(0x4030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(/* MISSING */)
,
MSG(
UNSKIPPABLE "Here it is."
BOX_BREAK

UNSKIPPABLE "This medicine doesn't have any\n"
"preservatives in it. So it " COLOR(RED) "won't \n"
"last long " COLOR(DEFAULT) "at this temperature."
BOX_BREAK

UNSKIPPABLE "Run as fast as you can to \n"
"Death Mountain. You're young--\n"
"you can do it!"
)
,
MSG(
UNSKIPPABLE "Bitte sehr."
BOX_BREAK

UNSKIPPABLE "Diese Medizin ist " COLOR(RED) "nicht lange\n"
"haltbar" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Eile so schnell wie möglich zu\n"
"den Goronen. Du bist ja noch jung\n"
"und hast flinke Beine!"
)
,
MSG(
UNSKIPPABLE "Voilà!"
BOX_BREAK

UNSKIPPABLE "Garanties sans colorants ni \n"
"conservateurs! Mais elles risquent\n"
"de tourner dans " COLOR(RED) "peu de temps" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Va vite à la montagne Goron! \n"
"Tu es jeune et rapide, non?\n"
"Tu peux y arriver!"
)
)

DEFINE_MESSAGE(0x4031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(72) "ホホ〜ッ"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(9) "たくましくなったものじゃのぉ、\n"
SHIFT(9) NAME "！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "この先は　" COLOR(BLUE) "ゾーラ族" COLOR(DEFAULT) "のすみか。\n"
SHIFT(15) "彼らは　ハイラル王家に　仕え、\n"
SHIFT(30) "この水源を　守っておる。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "王家と　かかわりを　持つ者にしか\n"
SHIFT(21) "彼らは　扉を　開かぬのじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) COLOR(RED) "王家に伝わる調べ" COLOR(DEFAULT) "を　聞かせよ。\n"
SHIFT(6) "ゾーラ族の耳に　とどく場所でな。\n"
SHIFT(69) "ホホ〜ッ！"
)
,
MSG(
UNSKIPPABLE "Hoo hoo! Looks like you've gotten\n"
"bigger and stronger already,\n"
NAME "!"
BOX_BREAK

UNSKIPPABLE "Just ahead lies " COLOR(BLUE) "Zora's Domain" COLOR(DEFAULT) ". \n"
"The Zoras serve Hyrule's Royal \n"
"Family by protecting this water \n"
"source."
BOX_BREAK

UNSKIPPABLE "Their door will not open for \n"
"anyone except those who have\n"
"some connection with the Royal \n"
"Family."
BOX_BREAK

UNSKIPPABLE "Let them hear the " COLOR(RED) "melody of the \n"
"Royal Family" COLOR(DEFAULT) "!\n"
"Hooo hoo hoooot!"
)
,
MSG(
UNSKIPPABLE "Hallo! Es sieht aus, als wärest Du\n"
"erfahrener und kräftiger geworden,\n"
NAME "!"
BOX_BREAK

UNSKIPPABLE "Direkt vor Dir liegt " COLOR(BLUE) "Zoras Reich" COLOR(DEFAULT) ".\n"
"Die Zoras dienen der königlichen\n"
"Familie von Hyrule und bewachen\n"
"dieses Gewässer."
BOX_BREAK

UNSKIPPABLE "Das Tor zu ihrem Reich öffnet\n"
"sich nur einem Abgesandten der \n"
"königlichen Familie."
BOX_BREAK

UNSKIPPABLE "Spiele vor dem Portal ein\n"
COLOR(RED) "Schlaflied" COLOR(DEFAULT) " aus der Überlieferung\n"
"der königlichen Familie!"
)
,
MSG(
UNSKIPPABLE "Hou hou! \n"
"Tu es devenu très fort, \n"
NAME "!"
BOX_BREAK

UNSKIPPABLE "Plus loin se trouve le " COLOR(BLUE) "Domaine\n"
"Zora" COLOR(DEFAULT) ". Les Zoras protègent cette \n"
"source d'eau et servent la Famille \n"
"Royale d'Hyrule."
BOX_BREAK

UNSKIPPABLE "Leur porte ne s'ouvrira que pour\n"
"un ami de la Famille Royale."
BOX_BREAK

UNSKIPPABLE "Chante haut et fort la " COLOR(RED) "Mélodie de \n"
"la Famille Royale" COLOR(DEFAULT) "!\n"
"Houu hou hoouu!"
)
)

DEFINE_MESSAGE(0x4032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "今度　来るときは\n"
SHIFT(42) "手土産　忘れるなよ。"
)
,
MSG(
"When you come back next time, \n"
"don't forget to bring me a \n"
"souvenir!"
)
,
MSG(
"Wenn Du wieder mal vorbeikommst,\n"
"bring mir doch ein Souvenir mit!"
)
,
MSG(
"Apporte-moi un p'tit cadeau la\n"
"prochaine fois!"
)
)

DEFINE_MESSAGE(0x4033, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(39) "ルト姫を　みつけた！！\n"
SHIFT(27) "これで　キングゾーラから\n"
SHIFT(9) COLOR(BLUE) "水の精霊石" COLOR(DEFAULT) "が　もらえる…　カモ？"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "…………ん？"
)
,
MSG(
UNSKIPPABLE "You found Princess Ruto!\n"
"Now King Zora will give you the \n"
COLOR(BLUE) "Spiritual Stone of Water" COLOR(DEFAULT) "...\n"
"Well, maybe."
BOX_BREAK

UNSKIPPABLE "Huh?"
)
,
MSG(
UNSKIPPABLE "Du hast Prinzessin Ruto gefunden!\n"
"Jetzt wird Dir König Zora sicher\n"
"den " COLOR(BLUE) "Heiligen Stein des Wassers\n"
COLOR(DEFAULT) "geben..."
BOX_BREAK

UNSKIPPABLE "Oder etwa nicht?"
)
,
MSG(
UNSKIPPABLE "Vous avez trouvé la Princesse \n"
"Ruto! Le Roi Zora vous donnera \n"
"sûrement la " COLOR(BLUE) "Pierre Ancestrale de \n"
"l'Eau" COLOR(DEFAULT) "! Enfin...peut-être."
BOX_BREAK

UNSKIPPABLE "Hummm?"
)
)

DEFINE_MESSAGE(0x4034, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(33) "イチバン大切なモノ…？\n"
SHIFT(36) "よく　わからないケド、\n"
"２つの石が　集まった！　あと１つだ！"
)
,
MSG(
UNSKIPPABLE "Her most precious possession?\n"
"You don't know what she's talking\n"
"about, but you've collected two \n"
"Spiritual Stones! Only one to go!"
)
,
MSG(
UNSKIPPABLE "Prinzessin Ruto hat Dir ihren\n"
"wertvollsten Schatz gegeben!\n"
"Du besitzt nun zwei Heilige Steine!\n"
"Jetzt fehlt nur noch einer!"
)
,
MSG(
UNSKIPPABLE "Son \"bien le plus précieux\"?\n"
"Vous ne savez pas de quoi elle\n"
"parlait mais vous avez deux\n"
"Pierres! Plus qu'une à trouver!"
)
)

DEFINE_MESSAGE(0x4035, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(33) "イチバン大切なモノ…？\n"
SHIFT(36) "よく　わからないケド、\n"
SHIFT(18) "ついに　石が　３つそろった！！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "ゼルダ姫のもとへ　もどろう！！"
)
,
MSG(
UNSKIPPABLE "Her most precious possession?\n"
"You don't know what she's talking\n"
"about, but you've finally collected\n"
"all three Spiritual Stones!!"
BOX_BREAK

UNSKIPPABLE "Go back to see Princess Zelda!"
)
,
MSG(
UNSKIPPABLE "Prinzessin Ruto hat Dir\n"
"ihren wertvollsten Schatz gegeben!\n"
"Nun besitzt Du die\n"
"drei Heiligen Steine!"
BOX_BREAK

UNSKIPPABLE "Jetzt schnell zu Prinzessin Zelda!"
)
,
MSG(
UNSKIPPABLE "Son \"bien le plus précieux\"?\n"
"Vous ne savez pas de quoi elle\n"
"parlait mais vous avez les trois\n"
"Pierres Ancestrales!!"
BOX_BREAK

UNSKIPPABLE "Allez voir Zelda!"
)
)

DEFINE_MESSAGE(0x4036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "また会ったな、\n"
SHIFT(42) NAME "…"
)
,
MSG(
UNSKIPPABLE "We meet again, " NAME "..."
)
,
MSG(
UNSKIPPABLE "Sei gegrüßt, " NAME "..."
)
,
MSG(
UNSKIPPABLE "A nouveau nos routes se croisent,\n"
NAME "..."
)
)

DEFINE_MESSAGE(0x4037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "この氷は　邪悪な呪いによるもの…\n"
SHIFT(12) COLOR(BLUE) "水の神殿" COLOR(DEFAULT) "の魔物こそ　呪いの源。\n"
SHIFT(21) "源を断たねば、氷はとけぬ…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ゾーラの里を　救うため…\n"
"危険に立ち向かう　覚悟があるなら、\n"
SHIFT(18) "神殿へ導く調べを　教えよう。"
)
,
MSG(
UNSKIPPABLE "This ice is created by an evil\n"
"curse... The monster in the " COLOR(BLUE) "Water\n"
"Temple " COLOR(DEFAULT) "is the source of the curse."
BOX_BREAK

UNSKIPPABLE "Unless you shut off the source, \n"
"this ice will never melt...."
BOX_BREAK

UNSKIPPABLE "If you have courage enough to \n"
"confront the danger and save \n"
"the Zoras, I will teach you the \n"
"melody that leads to the temple."
)
,
MSG(
UNSKIPPABLE "Dieses Eis wurde von einer bösen\n"
"Macht erschaffen... Das Ungeheuer\n"
"im " COLOR(BLUE) "Wassertempel" COLOR(DEFAULT) " ist der Urheber\n"
"dieses Unheils."
BOX_BREAK

UNSKIPPABLE "Du mußt das Übel beseitigen,\n"
"sonst wird dieses Eis nie mehr\n"
"schmelzen..."
BOX_BREAK

UNSKIPPABLE "Hast Du Mut, den Gefahren im\n"
"Tempel zu trotzen und die Zoras\n"
"zu retten, dann erlerne nun die\n"
"Melodie, die Dich zum Tempel führt."
)
,
MSG(
UNSKIPPABLE "Cette glace est le fruit d'une \n"
"malédiction... Le monstre du " COLOR(BLUE) "Temple \n"
"de l'Eau" COLOR(DEFAULT) " en est la source."
BOX_BREAK

UNSKIPPABLE "Vivant, la glace ne pourra jamais\n"
"fondre...."
BOX_BREAK

UNSKIPPABLE "Ton courage puisse-t-il sauver tous\n"
"les Zoras. Je vais t'enseigner la\n"
"mélodie du Temple de l'Eau."
)
)

DEFINE_MESSAGE(0x4038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "時は移り、人も移る…\n"
SHIFT(24) "それは　水の流れにも似て、\n"
SHIFT(21) "決して　とどまる事はない…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "幼き心は、気高き大志に…\n"
SHIFT(33) "幼き恋は、深き慈愛へ…\n"
SHIFT(9) "澄んだ水面は　成長をうつす鏡…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "おのが姿を　見つめるために、\n"
SHIFT(9) COLOR(BLUE) "水のセレナーデ" COLOR(DEFAULT) "を　聞くがいい…"
)
,
MSG(
UNSKIPPABLE "Time passes, people move....\n"
"Like a river's flow, it never ends..."
BOX_BREAK

UNSKIPPABLE "A childish mind will turn to\n"
"noble ambition... Young love will\n"
"become deep affection... The clear \n"
"water's surface reflects growth..."
BOX_BREAK

UNSKIPPABLE "Now listen to the " COLOR(BLUE) "Serenade of \n"
"Water" COLOR(DEFAULT) " to reflect upon yourself...."
)
,
MSG(
UNSKIPPABLE "Zeit entschwindet, Menschen\n"
"scheiden...\n"
"In ewig wie des Wassers Fluß..."
BOX_BREAK

UNSKIPPABLE "Zu königlichem Streben reift des\n"
"Kindes Mut... Junger Liebe Knospen\n"
"erblühen groß und stark... Des\n"
"Wassers Kraft allein dies schafft!"
BOX_BREAK

UNSKIPPABLE "Lausche der " COLOR(BLUE) "Serenade des Wassers\n"
COLOR(DEFAULT) "und trage sie in Deinem Herzen..."
)
,
MSG(
UNSKIPPABLE "Le temps file et emporte les\n"
"hommes...\n"
"Ainsi coule le fleuve et jamais ne\n"
"s'arrête..."
BOX_BREAK

UNSKIPPABLE "Un jeune esprit renferme un coeur\n"
"ambitieux... Des amours légères \n"
"cèdent à une passion profonde...  \n"
"Un miroir d'eau pure reflète la vie."
BOX_BREAK

UNSKIPPABLE "Ecoute la " COLOR(BLUE) "Sérénade de l'Eau " COLOR(DEFAULT) "et \n"
"contemple ton reflet..."
)
)

DEFINE_MESSAGE(0x4039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "ゾーラ族に　会いに来たなら\n"
SHIFT(30) "ムダ足だったようだな…\n"
SHIFT(57) "見ての通りだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ゾーラたちは、一人残らず\n"
SHIFT(57) "厚い　氷の下…"
BOX_BREAK

UNSKIPPABLE SHIFT(48) "ゾーラの姫だけは\n"
SHIFT(27) "なんとか　助け出したが…\n"
SHIFT(66) "その姫も…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "「" COLOR(BLUE) "水の神殿" COLOR(DEFAULT) "へ行く」と、\n"
SHIFT(15) "言い残して　行ってしまった…"
)
,
MSG(
UNSKIPPABLE "If you came here to meet the \n"
"Zoras, you wasted your time...\n"
"This is all there is..."
BOX_BREAK

UNSKIPPABLE "With one exception, the Zoras \n"
"are now sealed under this thick \n"
"ice sheet..."
BOX_BREAK

UNSKIPPABLE "I managed to rescue the Zora\n"
"princess from under the ice, but... \n"
"she left to head for the " COLOR(BLUE) "Water \n"
"Temple" COLOR(DEFAULT) "..."
)
,
MSG(
UNSKIPPABLE "Wenn Du hierher kamst, um die\n"
"Zoras zu retten, hast Du den\n"
"ersten Schritt getan. Doch mehr\n"
"findest Du hier nicht..."
BOX_BREAK

UNSKIPPABLE "Mit einer Ausnahme sind alle\n"
"Zoras unter einer dicken \n"
"Eisschicht gefangen..."
BOX_BREAK

UNSKIPPABLE "Ich konnte nur ihre Prinzessin\n"
"retten, aber sie lief in Richtung \n"
"des" COLOR(BLUE) " Wassertempels " COLOR(DEFAULT) "davon!"
)
,
MSG(
UNSKIPPABLE "Tu arrives trop tard, les Zoras \n"
"ne sont pas ici...\n"
"Voici ce qu'il en reste..."
BOX_BREAK

UNSKIPPABLE "Les Zoras sont prisonniers de\n"
"cette vague de glace! \n"
"Tous...sauf une......"
BOX_BREAK

UNSKIPPABLE "J'ai pu sauver la Princesse du gel\n"
"éternel, mais elle s'est rendue \n"
"au " COLOR(BLUE) "Temple de l'Eau" COLOR(DEFAULT) "..."
)
)

DEFINE_MESSAGE(0x403A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "サカナを　買うなら\n"
SHIFT(42) "入れ物が　ないとね。" EVENT
)
,
MSG(
"If you want to buy fish, you need\n"
"a container to put them in." EVENT
)
,
MSG(
"Wenn Du einen Fisch kaufen willst,\n"
"dann brauchst Du etwas, worin Du\n"
"ihn aufbewahren kannst." EVENT
)
,
MSG(
"Il te faut un récipient pour \n"
"acheter un poisson." EVENT
)
)

DEFINE_MESSAGE(0x403B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) COLOR(BLUE) "ゾーラの服" COLOR(DEFAULT) "を　買いたい？\n"
SHIFT(27) "この服は　最高級品だから\n"
SHIFT(48) "すっごく　高いよ。"
BOX_BREAK

SHIFT(24) "今まで　これを　買えたのは\n"
SHIFT(30) "「" COLOR(RED) "カカリコ村の大金持ち" COLOR(DEFAULT) "」\n"
SHIFT(57) "だけらしいよ。" EVENT
)
,
MSG(
"You say you want to buy a " COLOR(BLUE) "Zora\n"
"Tunic" COLOR(DEFAULT) "? That tunic is made of the\n"
"finest material, and is therefore\n"
"exceedingly expensive!"
BOX_BREAK

"In fact, I'm afraid only that " COLOR(RED) "very\n"
"rich family in Kakariko Village " COLOR(DEFAULT) "can\n"
"afford this fine garment..." EVENT
)
,
MSG(
"Du willst die " COLOR(BLUE) "Zora-Rüstung" COLOR(DEFAULT) " kaufen?\n"
"Sie ist aus edelstem Material und\n"
"daher enorm teuer!"
BOX_BREAK

"Ich schätze, nur " COLOR(RED) "diese sehr\n"
"reiche Familie in Kakariko" COLOR(DEFAULT) " kann\n"
"sie sich leisten." EVENT
)
,
MSG(
"Tu veux acheter une " COLOR(BLUE) "tunique Zora" COLOR(DEFAULT) "?\n"
"Cet habit est cousu d'un tissu\n"
"précieux. Il est honteusement cher!"
BOX_BREAK

COLOR(RED) "Les familles fortunées" COLOR(DEFAULT) " de Cocorico \n"
"sont les seules à pouvoir se \n"
"l'offrir!" EVENT
)
)

DEFINE_MESSAGE(0x403E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "おぉ、そなた…\n"
SHIFT(18) "もしや、" NAME "…？"
BOX_BREAK

UNSKIPPABLE SHIFT(24) NAME "　じゃな！"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "わらわじゃ！\n"
SHIFT(33) "そなたの　フィアンセ…\n"
SHIFT(9) "ゾーラの　プリンセス、" COLOR(BLUE) "ルト" COLOR(DEFAULT) "じゃ！"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "七年前の　二人だけの約束、\n"
SHIFT(30) "すべて　おぼえておるぞ。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "七年も　わらわを　放っておくとは\n"
SHIFT(15) "そなたも　ヒドい男じゃゾラ…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "じゃが、今は　ゆっくりと\n"
SHIFT(12) "愛を　語らっておる時ではない。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "そなたも　見たであろう？\n"
SHIFT(21) "凍りついた　ゾーラの里を…"
BOX_BREAK

UNSKIPPABLE SHIFT(57) "わらわだけは\n"
SHIFT(42) COLOR(RED) "シーク" COLOR(DEFAULT) "という若者に\n"
SHIFT(15) "なんとか　助けてもらったが…"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "父上も　ゾーラたちも…" TEXT_SPEED(2) "　まだ…" TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE SHIFT(15) "わらわは　みんなを　助けたい！\n"
SHIFT(18) "ゾーラの里を　救いたいゾラ！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "そなた、協力してたもれ。\n"
SHIFT(48) "そなたの妻となる\n"
SHIFT(36) "わらわの　たのみじゃ！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) NAME "、わらわと共に、\n"
SHIFT(6) "神殿の魔物を　倒すのじゃ。\n"
SHIFT(6) "よいか！"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "この神殿には\n"
COLOR(RED) "水の高さを変える場所" COLOR(DEFAULT) "が　３つある。\n"
SHIFT(21) "それを　うまく　使うのじゃ！"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "わらわは　先に　ゆく！\n"
SHIFT(27) "さっさと　ついてまいれ！！"
)
,
MSG(
UNSKIPPABLE "Oh...you... If I'm right...\n"
NAME "?!"
BOX_BREAK

UNSKIPPABLE "You're " NAME ", aren't\n"
"you?"
BOX_BREAK

UNSKIPPABLE "It's me, your fiancée, " COLOR(BLUE) "Ruto" COLOR(DEFAULT) "!\n"
"Princess of the Zoras!"
BOX_BREAK

UNSKIPPABLE "I never forgot the vows we\n"
"made to each other seven years \n"
"ago!"
BOX_BREAK

UNSKIPPABLE "You're a terrible man to have \n"
"kept me waiting for these seven\n"
"long years..."
BOX_BREAK

UNSKIPPABLE "But now is not the time to talk \n"
"about love..."
BOX_BREAK

UNSKIPPABLE "I'm sure you've already seen it!\n"
"Zora's Domain--totally frozen!"
BOX_BREAK

UNSKIPPABLE "A young man named " COLOR(RED) "Sheik" COLOR(DEFAULT) " saved \n"
"me from under the ice..."
BOX_BREAK

UNSKIPPABLE "But my father and the other \n"
"Zoras have not" TEXT_SPEED(2) "...yet..." TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE "I want to save them all!\n"
"I want to save Zora's Domain!"
BOX_BREAK

UNSKIPPABLE "You! You have to help me!\n"
"This is a request from me, the\n"
"woman who is going to be your\n"
"wife!"
BOX_BREAK

UNSKIPPABLE NAME ", you have to \n"
"help me destroy the evil monster\n"
"in the Temple, OK?!"
BOX_BREAK

UNSKIPPABLE "Inside the Water Temple, there are \n"
COLOR(RED) "three places" COLOR(DEFAULT) " where you can \n"
"change the water level."
BOX_BREAK

UNSKIPPABLE "I'll lead the way.\n"
"Follow me, quickly!!"
)
,
MSG(
UNSKIPPABLE "Oh... Wenn ich mich recht\n"
"entsinne... " NAME "?!"
BOX_BREAK

UNSKIPPABLE "Du bist " NAME ", oder?"
BOX_BREAK

UNSKIPPABLE "Ich bin es! " COLOR(BLUE) "Ruto" COLOR(DEFAULT) ", Deine Braut!\n"
"Die Prinzessin der Zoras!"
BOX_BREAK

UNSKIPPABLE "Ich werde nie vergessen, was\n"
"wir uns vor Jahren\n"
"geschworen haben!"
BOX_BREAK

UNSKIPPABLE "Es war grauenvoll von Dir,\n"
"mich sieben lange Jahre\n"
"warten zu lassen!"
BOX_BREAK

UNSKIPPABLE "Doch jetzt ist nicht die Zeit,\n"
"über Liebe zu sprechen. Es ist\n"
"etwas Furchtbares geschehen!"
BOX_BREAK

UNSKIPPABLE "Zoras Reich ist eingefroren!\n"
"Alles ist über und über mit\n"
"Eis bedeckt!"
BOX_BREAK

UNSKIPPABLE "Ein junger Mann namens " COLOR(RED) "Shiek\n"
COLOR(DEFAULT) "hat mich aus dem Eis gerettet..."
BOX_BREAK

UNSKIPPABLE "Aber die anderen Zoras wurden\n"
TEXT_SPEED(2) "... noch nicht..." TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE "Ich will sie retten. Alle!\n"
"Ich will Zoras Reich retten!"
BOX_BREAK

UNSKIPPABLE "Du mußt mir helfen! Du mußt\n"
"es für mich tun - für die Frau, die\n"
"Du heiraten wirst!"
BOX_BREAK

UNSKIPPABLE NAME ", hilf mir, das\n"
"bösartige Ungeheuer zu\n"
"vernichten, das in diesem Tempel\n"
"lauert. Wirst Du das tun?"
BOX_BREAK

UNSKIPPABLE "Im Wassertempel gibt es " COLOR(RED) "drei\n"
"Stellen" COLOR(DEFAULT) ", an denen Du den\n"
"Wasserstand verändern kannst."
BOX_BREAK

UNSKIPPABLE "Ich zeige Dir den Weg.\n"
"Folge mir! Und beeile Dich!"
)
,
MSG(
UNSKIPPABLE "Ho!...Toi?...Tu es?...\n"
NAME "?!"
BOX_BREAK

UNSKIPPABLE NAME ", c'est bien toi?"
BOX_BREAK

UNSKIPPABLE "C'est moi, " COLOR(BLUE) "Ruto" COLOR(DEFAULT) "!" COLOR(BLUE) " " COLOR(DEFAULT) "Ta fiancée!\n"
"Princesse des Zoras!"
BOX_BREAK

UNSKIPPABLE "Je n'ai pas oublié notre promesse!"
BOX_BREAK

UNSKIPPABLE "Tu ne manques pas d'air!\n"
"Me faire attendre pendant sept \n"
"longues années..."
BOX_BREAK

UNSKIPPABLE "Mais l'heure n'est pas vraiment \n"
"aux histoires de coeur..."
BOX_BREAK

UNSKIPPABLE "As-tu vu le Domaine Zora?\n"
"Tout est gelé!"
BOX_BREAK

UNSKIPPABLE "Un jeune homme nommé " COLOR(RED) "Sheik" COLOR(DEFAULT) " m'a \n"
"sauvée des glaces..."
BOX_BREAK

UNSKIPPABLE "Mais mon père et les autres Zoras\n"
"sont" TEXT_SPEED(2) "...encore..." TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE "Je veux tous les sauver!\n"
"Je veux sauver le Domaine Zora!"
BOX_BREAK

UNSKIPPABLE "Tu dois m'aider!\n"
"C'est une faveur que je te \n"
"demande, moi...ta future femme!"
BOX_BREAK

UNSKIPPABLE NAME ", \n"
"tu dois m'aider à détruire l'infect\n"
"monstre du temple, d'accord?!"
BOX_BREAK

UNSKIPPABLE "Tu trouveras " COLOR(RED) "trois endroits" COLOR(DEFAULT) " te \n"
"permettant de changer le niveau \n"
"de l'eau."
BOX_BREAK

UNSKIPPABLE "Je passe devant...\n"
"Suis-moi! Vite!!!"
)
)

DEFINE_MESSAGE(0x403F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(24) NAME "！\n"
SHIFT(24) "気をつけるゾラ！！\n"
SHIFT(24) "それは　ただの水ではない！"
)
,
MSG(
UNSKIPPABLE NAME "! Look out!\n"
"That isn't normal water over \n"
"there!"
)
,
MSG(
UNSKIPPABLE NAME "! Vorsicht!\n"
"Das hier sieht nicht aus wie\n"
"gewöhnliches Wasser...\n"
"Irgendetwas lauert hier!"
)
,
MSG(
UNSKIPPABLE NAME "! Attention!\n"
"Cette eau n'est pas normale!"
)
)

DEFINE_MESSAGE(0x4041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) NAME "…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "さすが、フィアンセとして\n"
SHIFT(3) "わらわが　選んだだけの事は　ある。"
BOX_BREAK

UNSKIPPABLE SHIFT(75) "これで、\n"
SHIFT(21) "ゾーラの里も　ゾーラたちも\n"
SHIFT(21) "いずれ　元に戻るであろう…"
)
,
MSG(
UNSKIPPABLE NAME "..."
BOX_BREAK

UNSKIPPABLE "I would have expected no less\n"
"from the man I chose to be my\n"
"husband."
BOX_BREAK

UNSKIPPABLE "Zora's Domain and its people\n"
"will eventually return to their\n"
"original state."
)
,
MSG(
UNSKIPPABLE NAME "..."
BOX_BREAK

UNSKIPPABLE "Ich hätte nichts anderes von\n"
"jemandem erwartet, den ich zu\n"
"meinem Ehemann auserkoren habe!"
BOX_BREAK

UNSKIPPABLE "Zoras Reich und seine Bewohner\n"
"können dank Deiner Hilfe\n"
"wieder in Freiheit leben."
)
,
MSG(
UNSKIPPABLE NAME "..."
BOX_BREAK

UNSKIPPABLE "Tu es bien digne d'être mon futur\n"
"époux."
BOX_BREAK

UNSKIPPABLE "Le Domaine Zora et son peuple \n"
"vont enfin se libérer des glaces."
)
)

DEFINE_MESSAGE(0x4042, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(24) "もし　シークに　会ったら…\n"
SHIFT(12) "わらわが　礼を言っておったと、\n"
SHIFT(30) "伝えてくれ…　よいな…" FADE(90)
)
,
MSG(
UNSKIPPABLE "If you see Sheik, \n"
"please give him my thanks, OK?" FADE(90)
)
,
MSG(
UNSKIPPABLE "Wenn Du Shiek triffst, danke\n"
"ihm von mir, okay?" FADE(90)
)
,
MSG(
UNSKIPPABLE "Dis bien merci à Sheik de ma part." FADE(90)
)
)

DEFINE_MESSAGE(0x4043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(30) "ルト姫が、ボクに礼を…？"
BOX_BREAK

UNSKIPPABLE SHIFT(69) "…そうか。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "彼女のためにも、ハイラルの平和を\n"
SHIFT(24) "はやく　取り戻さねば…な。"
)
,
MSG(
UNSKIPPABLE "Did Ruto want to thank me?"
BOX_BREAK

UNSKIPPABLE "I see...."
BOX_BREAK

UNSKIPPABLE "We have to return peace to \n"
"Hyrule for her sake, too. \n"
"Don't we?"
)
,
MSG(
UNSKIPPABLE "Ruto wollte sich bei mir \n"
"bedanken?"
BOX_BREAK

UNSKIPPABLE "Ich verstehe..."
BOX_BREAK

UNSKIPPABLE "Auch in ihrem Namen müssen wir\n"
"Hyrule den Frieden wiederbringen!"
)
,
MSG(
UNSKIPPABLE "Ruto veut me remercier?"
BOX_BREAK

UNSKIPPABLE "Je vois...."
BOX_BREAK

UNSKIPPABLE "C'est aussi pour elle que nous \n"
"devons ramener paix et joie \n"
"en Hyrule."
)
)

DEFINE_MESSAGE(0x4045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "そうか…　ルト姫は、\n"
SHIFT(21) "水の神殿に　行ったゾラか…"
)
,
MSG(
"Ah, I see...\n"
"Princess Ruto went to the Water\n"
"Temple..."
)
,
MSG(
"Ah, ich verstehe...\n"
"Prinzessin Ruto ist zum\n"
"Wassertempel gegangen..."
)
,
MSG(
"Nous voyons...\n"
"La Princesse Ruto est dans le \n"
"Temple de l'Eau..."
)
)

DEFINE_MESSAGE(0x4046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "では…　その　ほうびとして…\n"
SHIFT(27) "我が　永遠の愛を　与える！"
BOX_BREAK

UNSKIPPABLE SHIFT(81) "…と、\n"
SHIFT(15) "言いたいところで　あったが…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "それは　今のわらわには\n"
SHIFT(24) "かなわぬ願いのようじゃ…"
)
,
MSG(
UNSKIPPABLE "As a reward...\n"
"I grant my eternal love to you."
BOX_BREAK

UNSKIPPABLE "Well, that's what I want to say, \n"
"but I don't think I can offer that\n"
"now."
)
,
MSG(
UNSKIPPABLE "Als meinen Lohn... gewähre\n"
"ich Dir meine ewige Liebe!"
BOX_BREAK

UNSKIPPABLE "Äh, naja, das würde ich gern,\n"
"aber ich merke, daß Du an eine \n"
"andere denkst..."
)
,
MSG(
UNSKIPPABLE "Comme récompense...\n"
"Je t'offre mon amour éternel."
BOX_BREAK

UNSKIPPABLE "Même si pour l'instant je ne peux\n"
"t'en offrir davantage."
)
)

DEFINE_MESSAGE(0x4047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "ゼルダ姫は…　生きておる！\n"
SHIFT(18) "わらわには…　わかるのじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "だから…\n"
SHIFT(30) "だから、くじけるでない！"
)
,
MSG(
UNSKIPPABLE "Princess Zelda... She's alive. I can\n"
"sense it...so don't be discouraged."
)
,
MSG(
UNSKIPPABLE "Prinzessin Zelda... Sie ist am\n"
"Leben! Ich spüre es. Also laß\n"
"Dich nicht entmutigen!"
)
,
MSG(
UNSKIPPABLE "La Princesse Zelda...Elle est en vie.\n"
"Je le sens. Ne te décourage pas."
)
)

DEFINE_MESSAGE(0x4048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(78) "キャー\n"
SHIFT(27) "なんじゃ　このタコ〜！？" QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(63) "Keeeyaaaah!\n"
SHIFT(15) "What is this?! An octopus?!" QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(72) "Iiiihhhh!!!\n"
SHIFT(49) "Was ist das denn?!\n"
SHIFT(61) "Ein Oktopus?!" QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(66) "Beuâââârk!\n"
SHIFT(23) "C'est quoi? Une pieuvre?!" QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x4049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "わらわは、" COLOR(BLUE) "水の賢者" COLOR(DEFAULT) "として\n"
SHIFT(15) "水の神殿を　守らねばならぬ…"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "そして…　そなた…"
BOX_BREAK

UNSKIPPABLE SHIFT(54) "「" COLOR(RED) "ゼルダ" COLOR(DEFAULT) "」という\n"
SHIFT(42) "姫を　探しておろう？"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "わらわに　かくし事はできぬぞ。\n"
SHIFT(75) "フフッ！"
)
,
MSG(
UNSKIPPABLE "I have to guard the Water \n"
"Temple as the " COLOR(BLUE) "Sage of Water" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "And you... You're searching for the\n"
"princess, " COLOR(RED) "Zelda" COLOR(DEFAULT) "?"
BOX_BREAK

UNSKIPPABLE "Hah!\n"
"You can't hide anything from me!"
)
,
MSG(
UNSKIPPABLE "Als " COLOR(BLUE) "Weise des Wassers\n"
COLOR(DEFAULT) "ist es meine Aufgabe, den \n"
"Wassertempel zu bewachen..."
BOX_BREAK

UNSKIPPABLE "Und Du... Du suchst nach\n"
"Prinzessin " COLOR(RED) "Zelda" COLOR(DEFAULT) "?"
BOX_BREAK

UNSKIPPABLE "Gib es zu! Du kannst nichts\n"
"vor mir verheimlichen!"
)
,
MSG(
UNSKIPPABLE "En tant que " COLOR(BLUE) "Sage de l'Eau" COLOR(DEFAULT) "," COLOR(BLUE) " \n"
COLOR(DEFAULT) "mon devoir est d'assurer la garde \n"
"du Temple de l'Eau..."
BOX_BREAK

UNSKIPPABLE "Le tien est de chercher la \n"
"Princesse...comment...?\n"
COLOR(RED) "Zelda" COLOR(DEFAULT) "?"
BOX_BREAK

UNSKIPPABLE "Ha!\n"
"Tu ne peux rien me cacher!"
)
)

DEFINE_MESSAGE(0x404A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(9) "そなたの　さらなる活躍を　信じ、\n"
SHIFT(33) "この　" COLOR(BLUE) "メダル" COLOR(DEFAULT) "を　与える！\n"
SHIFT(15) "つつしんで、受け取るが　よい！"
)
,
MSG(
UNSKIPPABLE "I can tell that nothing will stop\n"
"you in your quest for justice and \n"
"peace... You must take this \n"
COLOR(BLUE) "Medallion" COLOR(DEFAULT) "... Take it respectfully!"
)
,
MSG(
UNSKIPPABLE "Ich weiß, Dich wird nichts\n"
"aufhalten in Deinem Kampf für den\n"
"Frieden... Nimm daher dieses\n"
COLOR(BLUE) "Amulett" COLOR(DEFAULT) " und trage es mit Würde!"
)
,
MSG(
UNSKIPPABLE "Ta quête de justice et de paix \n"
"sera victorieuse...j'en suis sûre.\n"
"Prends ce " COLOR(BLUE) "Médaillon " COLOR(DEFAULT) "et garde-le\n"
"précieusement!"
)
)

DEFINE_MESSAGE(0x404B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "そのほうは　ナニものじゃ？"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "わらわは\n"
SHIFT(12) "ゾーラのプリンセス　" COLOR(RED) "ルト" COLOR(DEFAULT) "じゃ！"
BOX_BREAK

UNSKIPPABLE SHIFT(81) QUICKTEXT_ENABLE "なに？" QUICKTEXT_DISABLE "\n"
SHIFT(21) "父上にたのまれて　わらわを\n"
SHIFT(36) "たすけにきた　じゃと？"
BOX_BREAK

UNSKIPPABLE "そんなこと　たのんだおぼえは" QUICKTEXT_ENABLE "ナイ！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(18) "ビンに　はいった『てがみ』？\n"
SHIFT(27) "そんなモノ…　し、" QUICKTEXT_ENABLE "しらん！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "父上が　シンパイしようが　しまいが\n"
SHIFT(18) "そんなことは　" QUICKTEXT_ENABLE "かんけいナイ！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(6) "と、とにかく…　いまは　かえれぬ。\n"
SHIFT(9) "そのほうこそ、" QUICKTEXT_ENABLE "さっさと　かえれ！" QUICKTEXT_DISABLE "\n"
SHIFT(75) QUICKTEXT_ENABLE "よいな！" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "You! Who are you?!"
BOX_BREAK

UNSKIPPABLE "I am " COLOR(RED) "Ruto" COLOR(DEFAULT) ", Princess of the Zoras."
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "What?!" QUICKTEXT_DISABLE "\n"
"Are you saying my father asked \n"
"you to come here to save me?"
BOX_BREAK

UNSKIPPABLE "I'd " QUICKTEXT_ENABLE "never" QUICKTEXT_DISABLE " ask anyone to do such a\n"
"thing!"
BOX_BREAK

UNSKIPPABLE "\"Letter in a Bottle?\"  I have\n"
QUICKTEXT_ENABLE "no idea" QUICKTEXT_DISABLE " what you're talking about!"
BOX_BREAK

UNSKIPPABLE "My father is worried about me?"
BOX_BREAK

UNSKIPPABLE "I don't " QUICKTEXT_ENABLE "care!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Anyway, I can't go home right now.\n"
"And you... " QUICKTEXT_ENABLE "Get out of here!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Understand?!" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "Hey, Du! Wer bist Du?!"
BOX_BREAK

UNSKIPPABLE "Ich bin " COLOR(RED) "Ruto" COLOR(DEFAULT) ", Prinzessin der Zoras."
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Was?!" QUICKTEXT_DISABLE "\n"
"Mein Daddy hat Dich geschickt,\n"
"um mich zu retten?"
BOX_BREAK

UNSKIPPABLE "Ich würde " QUICKTEXT_ENABLE "niemals" QUICKTEXT_DISABLE " jemanden\n"
"um so etwas bitten!"
BOX_BREAK

UNSKIPPABLE "Flaschenpost? Ich weiß\n"
QUICKTEXT_ENABLE "überhaupt nicht" QUICKTEXT_DISABLE ", wovon Du redest!"
BOX_BREAK

UNSKIPPABLE "Mein Daddy hat Angst um mich?"
BOX_BREAK

UNSKIPPABLE "Ist mir " QUICKTEXT_ENABLE "total" QUICKTEXT_DISABLE " egal!"
BOX_BREAK

UNSKIPPABLE "Außerdem kann ich jetzt sowieso\n"
"nicht heim. Und Du... " QUICKTEXT_ENABLE "Verschwinde!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Kapiert?!" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "Toi! Qui es-tu?!"
BOX_BREAK

UNSKIPPABLE "Je suis " COLOR(RED) "Ruto" COLOR(DEFAULT) ", Princesse des Zoras."
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Quoi?!" QUICKTEXT_DISABLE "\n"
"Mon père t'a demandé de me \n"
"sauver?"
BOX_BREAK

UNSKIPPABLE "Je n'ai " QUICKTEXT_ENABLE "rien" QUICKTEXT_DISABLE " demandé à personne!"
BOX_BREAK

UNSKIPPABLE "\"Un message dans une bouteille?\" \n"
"Je ne " QUICKTEXT_ENABLE "vois pas" QUICKTEXT_DISABLE " de quoi tu parles!"
BOX_BREAK

UNSKIPPABLE "Mon père est très inquiet?"
BOX_BREAK

UNSKIPPABLE "J'm'en " QUICKTEXT_ENABLE "fiche!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "De toute façon, je ne peux pas \n"
"partir maintenant.\n"
"Quant à toi..." QUICKTEXT_ENABLE "Va-t'en d'ici!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Compris?!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x404C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) "ま〜だ　ウロウロしておったのか？\n"
SHIFT(6) "はやく　かえれというたじゃろう！"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "わらわは　おさなきころより\n"
SHIFT(21) "ジャブジャブさまの　なかに\n"
SHIFT(3) "はいっておるから　ヘーキじゃが…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "いまの　ジャブジャブさまは\n"
SHIFT(39) "すご〜く　ヘンじゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "ビリビリする　クラゲや、\n"
SHIFT(9) "へんなアナなんか　あいてるし…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "おかげで　だいじなイシまで…\n"
SHIFT(9) "ア、それは　コッチのはなしじゃ！\n"
SHIFT(57) "と、とにかく…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "そのほうは　" QUICKTEXT_ENABLE "さっさと　かえれ！" QUICKTEXT_DISABLE "\n"
SHIFT(75) QUICKTEXT_ENABLE "よいな！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE "Are you still hanging around here?\n"
"I told you to go away!"
BOX_BREAK

UNSKIPPABLE "I'm OK. I've been going inside\n"
"Lord Jabu-Jabu's belly since I was\n"
"little, but..."
BOX_BREAK

UNSKIPPABLE "Lord Jabu-Jabu is very strange \n"
"today..."
BOX_BREAK

UNSKIPPABLE "There are electrified jellyfish and\n"
"strange holes around..."
BOX_BREAK

UNSKIPPABLE "On top of that, my precious stone \n"
"was...but...\n"
QUICKTEXT_ENABLE "That's none of your business!" QUICKTEXT_DISABLE "\n"
"Anyway..."
BOX_BREAK

UNSKIPPABLE "You! " QUICKTEXT_ENABLE "Go home now!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Understand?!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE "Bist Du immer noch hier? Du bist\n"
"ja schlimmer als eine Klette!"
BOX_BREAK

UNSKIPPABLE "Ich bin okay. Schon seit ich eine\n"
"kleine Zora-Prinzessin war, laufe\n"
"ich hin und wieder in Lord\n"
"Jabu-Jabus Bauch herum. Aber..."
BOX_BREAK

UNSKIPPABLE "Lord Jabu-Jabu ist heute ziemlich\n"
"seltsam..."
BOX_BREAK

UNSKIPPABLE "Hier sind auf einmal elektrisch \n"
"geladene Quallen und seltsame\n"
"Löcher..."
BOX_BREAK

UNSKIPPABLE "Obendrein habe ich meinen\n"
"wertvollsten Stein...\n"
QUICKTEXT_ENABLE "Aber das geht Dich gar nichts an!" QUICKTEXT_DISABLE "\n"
"Egal..."
BOX_BREAK

UNSKIPPABLE "Du! " QUICKTEXT_ENABLE "Verschwinde!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Kapiert?!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE "Tu es encore là, toi?\n"
"Je t'ai dit de partir!"
BOX_BREAK

UNSKIPPABLE "Je vais dans le ventre de \n"
"Jabu-Jabu depuis que je suis toute \n"
"petite! Alors j't'ai pas attendu!"
BOX_BREAK

UNSKIPPABLE "Le Grand Jabu-Jabu n'est pas \n"
"dans son assiette aujourd'hui..."
BOX_BREAK

UNSKIPPABLE "Il y a d'étranges méduses \n"
"électriques et des trous partout..."
BOX_BREAK

UNSKIPPABLE "Et en plus, ma chère pierre a été...\n"
QUICKTEXT_ENABLE "Mais c'est pas tes oignons!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Toi! " QUICKTEXT_ENABLE "Tu rentres chez toi!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Compris?!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x404D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(66) "…そんなに\n"
SHIFT(12) "…わらわのコトが　シンパイか？"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "ならば…　とくべつに　わらわを\n"
SHIFT(15) "はこぶ　「めいよ」を　あたえる！"
BOX_BREAK

UNSKIPPABLE SHIFT(33) QUICKTEXT_ENABLE "ただし" QUICKTEXT_DISABLE "…　さがしモノが\n"
SHIFT(3) "みつかるまで、ぜ〜ったいココから\n"
SHIFT(6) "でてゆかんから、そのつもりでな。" EVENT
)
,
MSG(
UNSKIPPABLE "You're that worried about me?"
BOX_BREAK

UNSKIPPABLE "Then I will give you the honor\n"
"of carrying me!"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "However" QUICKTEXT_DISABLE "...I won't leave until I \n"
"find the thing I'm looking for.\n"
"You'd better believe me!" EVENT
)
,
MSG(
UNSKIPPABLE "Du machst Dir echt solche Sorgen\n"
"um mich?"
BOX_BREAK

UNSKIPPABLE "Dann wird Dir eine besondere Ehre\n"
"zuteil: Du darfst mich tragen!"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Und übrigens" QUICKTEXT_DISABLE "... Ich bleibe bei Dir,\n"
"bis ich gefunden habe, wonach ich\n"
"suche! Kein Witz! Ich mein's ernst!" EVENT
)
,
MSG(
UNSKIPPABLE "Tu t'inquiètes tant que ça pour \n"
"moi?"
BOX_BREAK

UNSKIPPABLE "Alors je t'accorde l'honneur de me\n"
"porter!"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Toutefois" QUICKTEXT_DISABLE "...Je ne partirai pas \n"
"sans avoir trouvé ce que je \n"
"cherche. Tu peux en être sûr!" EVENT
)
)

DEFINE_MESSAGE(0x404E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) QUICKTEXT_ENABLE "この　ぶれ〜モノ！" QUICKTEXT_DISABLE "\n"
SHIFT(12) "おきざりにするとは　なんじゃ！\n"
SHIFT(12) "オトコなら　セキニンを　とれ！！" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "How inconsiderate!" QUICKTEXT_DISABLE "\n"
"How could you leave me behind?! \n"
"If you're a man, act like one! \n"
"Take responsibility!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Wie unaufmerksam von Dir!" QUICKTEXT_DISABLE "\n"
"Warum läßt Du mich sitzen?!\n"
"Wenn Du ein Mann sein willst,\n"
"dann verhalte Dich auch so!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Ho! Vilain!" QUICKTEXT_DISABLE "\n"
"Tu m'as abandonnée?!\n"
"Comment oses-tu faire une chose\n"
"pareille à une Princesse?" EVENT
)
)

DEFINE_MESSAGE(0x404F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "ア、" QUICKTEXT_ENABLE "アレじゃ！" QUICKTEXT_DISABLE "\n"
SHIFT(9) "わらわが　さがしておったのは！！\n"
SHIFT(6) "はやく　あそこへおろしてたもれ！"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "That's it!" QUICKTEXT_DISABLE "\n"
"That's what I've been looking for!\n"
"Throw me up there! \n"
"Onto the platform!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Da ist er ja!" QUICKTEXT_DISABLE "\n"
"Danach habe ich gesucht!\n"
"Wirf mich auf die Plattform!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Voilà!" QUICKTEXT_DISABLE "\n"
"C'est ça que je cherche!\n"
"Lance-moi sur cette plate-forme!"
)
)

DEFINE_MESSAGE(0x4050, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) QUICKTEXT_ENABLE "ルト姫が　" COLOR(BLUE) "精霊石" COLOR(DEFAULT) "を　入手した！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(75) "…って、\n"
SHIFT(39) "なんで　ルト姫なの？"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Princess Ruto got the \n"
COLOR(BLUE) "Spiritual Stone" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) "But" TEXT_SPEED(0) " why Princess Ruto?"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Prinzessin Ruto hat den \n"
COLOR(BLUE) "Heiligen Stein" COLOR(DEFAULT) " wieder!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) "Aber" TEXT_SPEED(0) " warum Prinzessin Ruto?"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "La Princesse Ruto trouve la \n"
COLOR(BLUE) "Pierre Ancestrale" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) "Mais" TEXT_SPEED(0) " pourquoi la Princesse Ruto?"
)
)

DEFINE_MESSAGE(0x4051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(51) "あー、よかった…\n"
SHIFT(12) "やっと　みつけた…　母上の石…"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "ジャブジャブさまに\n"
SHIFT(18) "のみこまれてしもうたときは\n"
SHIFT(15) "どうしよーかと　おもったぞ…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "食事を　はこんできたら\n"
"きゅうに　のみこまれたもんだから、\n"
SHIFT(33) "おどろいて　ポロリと…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "でも…　みつかったからには\n"
SHIFT(15) "こんなトコには　ようは　ない！"
)
,
MSG(
UNSKIPPABLE "Oh my goodness!\n"
"I finally found... \n"
"My mother's stone..."
BOX_BREAK

UNSKIPPABLE "I got very upset when Lord Jabu-\n"
"Jabu swallowed it..."
BOX_BREAK

UNSKIPPABLE "While I was feeding him, he\n"
"suddenly swallowed me! I was \n"
"so surprised I dropped it inside..."
BOX_BREAK

UNSKIPPABLE "But, now that I've found it, \n"
"I don't need to be in here \n"
"anymore!"
)
,
MSG(
UNSKIPPABLE "Gott sei Dank!\n"
"Endlich... \n"
"Der Stein von meiner Mama..."
BOX_BREAK

UNSKIPPABLE "Als ich Lord Jabu-Jabu gefüttert\n"
"habe, hat er wild um sich\n"
"geschlagen! Vor Schreck habe ich\n"
"den Stein fallen lassen!"
BOX_BREAK

UNSKIPPABLE "Und ganz plötzlich hat er mich\n"
"und den Stein verschluckt..."
BOX_BREAK

UNSKIPPABLE "Aber jetzt habe ich ihn wieder\n"
"und kann heimgehen!"
)
,
MSG(
UNSKIPPABLE "Enfin!\n"
"J'ai trouvé... \n"
"La Pierre de ma maman..."
BOX_BREAK

UNSKIPPABLE "J'étais tellement triste quand le\n"
"Grand Jabu-Jabu l'a avalée..."
BOX_BREAK

UNSKIPPABLE "Tout ça s'est passé pendant son\n"
"repas... Il s'est agité et m'a avalée\n"
"d'un seul coup!"
BOX_BREAK

UNSKIPPABLE "Bon...on peut partir maintenant!"
)
)

DEFINE_MESSAGE(0x4052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "さ、はやく　つれてかえってくれ！"
)
,
MSG(
"So, take me home, right now!"
)
,
MSG(
"Bring mich jetzt schnell heim!"
)
,
MSG(
"Ramène-moi à la maison!\n"
"Tout de suite!"
)
)

DEFINE_MESSAGE(0x4053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"潜水ゲーム　２０ルピー…やる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Diving Game   20 Rupees\n"
"Want to play?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Tauchspiel   20 Rubine\n"
"Macht Ihr mit?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Jeu du plongeon: 20 Rubis.\n"
"Tu veux essayer?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) QUICKTEXT_ENABLE "オッケ〜イ！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(21) "ここからバラまく　ルピーを\n"
SHIFT(9) "時間内に　すべて　ひろえるかな？"
BOX_BREAK

SHIFT(9) "全部ひろえたら、ここへ　おいで。\n"
SHIFT(42) "い〜モノ　やるから！" EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(63) "OKAY!" QUICKTEXT_DISABLE
BOX_BREAK

"Pick up all the Rupees I throw \n"
"from here. You have only a limited\n"
"amount of time!"
BOX_BREAK

"When you pick them all up, \n"
"come back here! I'll give you\n"
"something very nice!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(63) "Okay!" QUICKTEXT_DISABLE
BOX_BREAK

"Sammelt alle Steine ein, die ich\n"
"nach unten werfe. Ihr habt dafür\n"
"nur begrenzt Zeit!"
BOX_BREAK

"Sind alle eingesammelt, kommt\n"
"hierher zurück. Dann bekommt\n"
"Ihr etwas sehr Schönes!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(71) "PARFAIT!" QUICKTEXT_DISABLE
BOX_BREAK

"Ramasse tous les rubis avant la \n"
"fin du chrono!"
BOX_BREAK

"Passe cette épreuve et reviens me \n"
"voir pour gagner un prix!" EVENT
)
)

DEFINE_MESSAGE(0x4055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(39) "オ〜イ　オメデト〜！！\n"
SHIFT(6) "い〜モノやるから、取りに来な〜！" EVENT
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Hey!  Congratulations!" QUICKTEXT_DISABLE "\n"
"I've got something \n"
"very nice for you!\n"
"Come and get it!" EVENT
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Gratuliere!" QUICKTEXT_DISABLE "\n"
"Ich habe etwas Tolles für Euch!\n"
"Holt es Euch ab!" EVENT
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Hé! Félicitations!" QUICKTEXT_DISABLE "\n"
"J'ai un beau cadeau pour toi! \n"
"Viens vite le chercher!" EVENT
)
)

DEFINE_MESSAGE(0x4056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(12) "なかなか　イイもぐりっぷりだ！\n"
SHIFT(9) "さあ、コイツを　受け取ってくれ。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "コイツは　オレたちの「" COLOR(RED) "ウロコ" COLOR(DEFAULT) "」。\n"
SHIFT(21) "これさえあれば、もっと深く\n"
SHIFT(42) "水中を　もぐれるぜ。" EVENT
)
,
MSG(
UNSKIPPABLE "What a graceful dive!\n"
"Now, please take this!"
BOX_BREAK

UNSKIPPABLE "This is a \"" COLOR(RED) "scale" COLOR(DEFAULT) "\" of our kind.\n"
"With this, you can dive much\n"
"deeper under the water." EVENT
)
,
MSG(
UNSKIPPABLE "Wie elegant Ihr getaucht seid!\n"
"Hier, nehmt dies als Lohn!"
BOX_BREAK

UNSKIPPABLE "Dies ist eine " COLOR(RED) "silberne Schuppe" COLOR(DEFAULT) "\n"
"der Zoras. Mit ihr kann man viel\n"
"tiefer tauchen!" EVENT
)
,
MSG(
UNSKIPPABLE "Quel magnifique plongeon!\n"
"Prends donc ceci!"
BOX_BREAK

UNSKIPPABLE "Cette \"" COLOR(RED) "écaille" COLOR(DEFAULT) "\" de Zora te\n"
"permettra de plonger plus \n"
"profondément." EVENT
)
)

DEFINE_MESSAGE(0x4057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE "湖の水から　魔の力が　消えてゆく…\n"
NAME "、やったな…"
)
,
MSG(
UNSKIPPABLE "As the water rises, the evil \n"
"is vanishing from the lake...\n"
NAME ", you did it!"
)
,
MSG(
UNSKIPPABLE "Das Wasser steigt, und das Böse\n"
"verläßt den See...\n"
NAME ", Du hast\n"
"es geschafft!"
)
,
MSG(
UNSKIPPABLE "Les flots s'élèvent... \n"
"Et le mal se dissout...\n"
"Tu as triomphé " NAME "!"
)
)

DEFINE_MESSAGE(0x4058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(72) "ボクは…\n"
SHIFT(9) "キミが　この世界を救ってくれる\n"
SHIFT(51) "と、信じている…"
)
,
MSG(
UNSKIPPABLE "I...believe that you are going to \n"
"save this world..."
)
,
MSG(
UNSKIPPABLE "Ich... bin nun überzeugt, daß Du\n"
"diese Welt retten wirst..."
)
,
MSG(
UNSKIPPABLE "Je te crois capable de sauver ce \n"
"monde..."
)
)

DEFINE_MESSAGE(0x4059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "見たまえ…　" NAME "。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "キミと　ルト姫の力で\n"
SHIFT(45) "魔物は　倒された…"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "湖は　再び　清らかな水に満たされ、\n"
SHIFT(21) "元の姿を　取り戻したのだ…"
)
,
MSG(
UNSKIPPABLE "Look at that, " NAME "..."
BOX_BREAK

UNSKIPPABLE "Together, you and Princess Ruto \n"
"destroyed the evil monster!"
BOX_BREAK

UNSKIPPABLE "Once again, the lake is filled with\n"
"pure water. All is as it was here."
)
,
MSG(
UNSKIPPABLE "Schau, " NAME "..."
BOX_BREAK

UNSKIPPABLE "Du und Prinzessin Ruto, ihr habt\n"
"gemeinsam das bösartige Monster\n"
"besiegt!"
BOX_BREAK

UNSKIPPABLE "Der See füllt sich mit reinem\n"
"Wasser, und alles ist wie zuvor."
)
,
MSG(
UNSKIPPABLE "Regarde, " NAME "..."
BOX_BREAK

UNSKIPPABLE "La bête maléfique a péri. \n"
"Toi et la Princesse Ruto avez\n"
"accompli cet acte héroïque!"
BOX_BREAK

UNSKIPPABLE "Les eaux pures et claires \n"
"emplissent à nouveau ce paisible \n"
"lac..."
)
)

DEFINE_MESSAGE(0x405A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(66) COLOR(RED) "スタート！！" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(81) COLOR(RED) "START!" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(66) COLOR(RED) "START!" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(56) COLOR(RED) "Et c'est parti!" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x405B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "滝から飛びおりたら　近道だぜ。" EVENT
)
,
MSG(
"Go over the falls for a shortcut." EVENT
)
,
MSG(
"Spring den Wasserfall hinab,\n"
"um Zeit zu sparen." EVENT
)
,
MSG(
"Passe les cascades pour un \n"
"raccourci!" EVENT
)
)

DEFINE_MESSAGE(0x405C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"２０ルピーで　取り放題…やる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Take as much as you want for \n"
"20 Rupees.  Want to play?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Nehmt soviel Ihr wollt für\n"
"20 Rubine. Macht Ihr mit?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Attrape un maximum pour 20 Rubis.\n"
"Ca te tente?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x405D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "オ〜イ　オメデト〜！！" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Hey!  Congratulations!!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Gratuliere!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Hé! Bravo!!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x405E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(24) COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "は　いらんかね。\n"
SHIFT(6) "あんまり　売れ行き　よくないな…"
BOX_BREAK

"１つぶ　" COLOR(RED) "１０ルピー" COLOR(DEFAULT) "　でいいや。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"How about some " COLOR(RED) "Magic Beans" COLOR(DEFAULT) "?\n"
"They aren't selling very well..."
BOX_BREAK

"How about...\n"
COLOR(RED) "10 Rupees" COLOR(DEFAULT) " for one piece?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Ein paar " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) " gefällig?\n"
"Sie gehen nicht besonders gut..."
BOX_BREAK

"Wie wäre es mit...\n"
COLOR(RED) "10 Rubine" COLOR(DEFAULT) " das Stück?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Les ventes sont faibles..."
BOX_BREAK

"Je t'en propose...\n"
COLOR(RED) "10 Rubis" COLOR(DEFAULT) " pièce?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x405F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(24) COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "は　いらんかね。\n"
SHIFT(36) "まだ　人気は　今一つ…"
BOX_BREAK

"１つぶ　" COLOR(RED) "２０ルピー" COLOR(DEFAULT) "　でどう？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"How about some " COLOR(RED) "Magic Beans" COLOR(DEFAULT) "?\n"
"Well, they're not that popular yet."
BOX_BREAK

"How about...\n"
COLOR(RED) "20 Rupees" COLOR(DEFAULT) " for one piece?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Ein paar " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) " gefällig?\n"
"Sie sind noch nicht so beliebt."
BOX_BREAK

"Wie wäre es mit...\n"
COLOR(RED) "20 Rubine" COLOR(DEFAULT) " das Stück?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Leur succès est médiocre."
BOX_BREAK

"Je t'en propose...\n"
COLOR(RED) "20 Rubis" COLOR(DEFAULT) " pièce?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(24) COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "は　いらんかね。\n"
SHIFT(18) "わりと　人気　あるんだけど…"
BOX_BREAK

"１つぶ　" COLOR(RED) "３０ルピー" COLOR(DEFAULT) "　でいかが？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"How about some " COLOR(RED) "Magic Beans" COLOR(DEFAULT) "?\n"
"They are getting to be quite \n"
"popular..."
BOX_BREAK

COLOR(RED) "30 Rupees" COLOR(DEFAULT) " for one piece.\n"
"How about it?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Ein paar " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) " gefällig?\n"
"Sie werden langsam beliebter..."
BOX_BREAK

COLOR(RED) "30 Rubine" COLOR(DEFAULT) " das Stück.\n"
"Wie wäre es?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Ils sont assez populaires..."
BOX_BREAK

COLOR(RED) "30 Rubis" COLOR(DEFAULT) " pièce.\n"
"T'en veux?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(24) COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "は　いらんかね。\n"
SHIFT(42) "今　話題の商品です。"
BOX_BREAK

"１つぶ　" COLOR(RED) "４０ルピー" COLOR(DEFAULT) "　です。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"How about some " COLOR(RED) "Magic Beans" COLOR(DEFAULT) "?\n"
"They're all the rage!"
BOX_BREAK

COLOR(RED) "40 Rupees" COLOR(DEFAULT) " for one piece.\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Ein paar " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) " gefällig?\n"
"Sie gehen weg wie warme Semmeln!"
BOX_BREAK

COLOR(RED) "40 Rubine" COLOR(DEFAULT) " das Stück.\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Ils sont à la mode!"
BOX_BREAK

COLOR(RED) "40 Rubis" COLOR(DEFAULT) " pièce.\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(24) "人気商品　" COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "だよ！\n"
SHIFT(21) "今　買わないと　ソンするよ！"
BOX_BREAK

"今なら　１つぶ　" COLOR(RED) "５０ルピー" COLOR(DEFAULT) "だ。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"We have the popular " COLOR(RED) "Magic Beans" COLOR(DEFAULT) "!\n"
"You'll regret it if you don't buy \n"
"them now!"
BOX_BREAK

COLOR(RED) "50 Rupees" COLOR(DEFAULT) " for one piece.\n"
"(Just for now.)\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Hier gibt's die tollen " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) "!\n"
"Wer sie nicht kauft, der wird es\n"
"wirklich bereuen!"
BOX_BREAK

COLOR(RED) "50 Rubine" COLOR(DEFAULT) " das Stück.\n"
"(Aber nur jetzt!)\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Il ne m'en reste que très peu!"
BOX_BREAK

COLOR(RED) "50 Rubis" COLOR(DEFAULT) " pièce.\n"
"(Offre spéciale)\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(18) "超人気商品　" COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "だよ！\n"
SHIFT(6) "悩んでいたら　売り切れちゃうよ！"
BOX_BREAK

"大特価　１つぶ　" COLOR(RED) "６０ルピー" COLOR(DEFAULT) "だ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"These are the super-popular \n"
COLOR(RED) "Magic Beans" COLOR(DEFAULT) "! In case you're \n"
"wondering, they'll soon be sold out!"
BOX_BREAK

"Super price!\n"
COLOR(RED) "60 Rupees" COLOR(DEFAULT) " for one piece!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Die weltberühmten " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) "!\n"
"Sie sind absolut beliebt und sicher\n"
"schon bald ausverkauft!"
BOX_BREAK

"Ein Superpreis!\n"
COLOR(RED) "60 Rubine" COLOR(DEFAULT) " das Stück!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Ils sont siiiii bons!"
BOX_BREAK

"Super promo!\n"
COLOR(RED) "60 Rubis " COLOR(DEFAULT) "pièce!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(6) "まぼろしの商品　" COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "だよ！\n"
SHIFT(15) "これが　最後のチャンスかも…"
BOX_BREAK

"大特価　１つぶ　" COLOR(RED) "７０ルピー" COLOR(DEFAULT) "だ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"We have the super-rare \n"
COLOR(RED) "Magic Beans" COLOR(DEFAULT) "! This could be your\n"
"last chance!"
BOX_BREAK

"Special price!\n"
COLOR(RED) "70 Rupees" COLOR(DEFAULT) " for one piece!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Hier gibt es die seltenen\n"
COLOR(RED) "Wundererbsen" COLOR(DEFAULT) "! Dies könnte die\n"
"letzte Chance sein!"
BOX_BREAK

"Mein Spezial-Preis!\n"
COLOR(RED) "70 Rubine" COLOR(DEFAULT) " das Stück!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Ca marche du tonnerre!"
BOX_BREAK

"Promo de la mort!\n"
COLOR(RED) "70 Rubis" COLOR(DEFAULT) " pièce!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(18) "伝説の商品　" COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "だよ！\n"
SHIFT(6) "あんたにだけなら　売ってやろう。"
BOX_BREAK

"大特価　１つぶ　" COLOR(RED) "８０ルピー" COLOR(DEFAULT) "だ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"We have the legendary \n"
COLOR(RED) "Magic Beans" COLOR(DEFAULT) "! I'll sell them only \n"
"to you!"
BOX_BREAK

"Super price!\n"
COLOR(RED) "80 Rupees" COLOR(DEFAULT) " for one piece!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Wir haben die legendären \n"
COLOR(RED) "Wundererbsen" COLOR(DEFAULT) "! Ich verkaufe sie\n"
"normalerweise an niemanden!"
BOX_BREAK

"Mein Super-Preis!\n"
COLOR(RED) "80 Rubine" COLOR(DEFAULT) " das Stück!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Ils sont introuvables!"
BOX_BREAK

"Offre de folie!\n"
COLOR(RED) "80 Rubis" COLOR(DEFAULT) " pièce!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui \n"
    "No" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(24) COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "…　ほしいかい？\n"
SHIFT(6) "安くはないけど、それでもほしい？"
BOX_BREAK

"１つぶ　" COLOR(RED) "９０ルピー" COLOR(DEFAULT) "ならいいぜ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"Do you want..." COLOR(RED) "Magic Beans" COLOR(DEFAULT) "?! \n"
"They aren't cheap, but...do you\n"
"still want them?"
BOX_BREAK

"I can't let them go for less than\n"
COLOR(RED) "90 Rupees" COLOR(DEFAULT) " apiece!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(RED) "Wundererbsen" COLOR(DEFAULT) "?! Die sind sehr\n"
"teuer, aber... ich verkaufe\n"
"sie gern!"
BOX_BREAK

"Aber ich muß mindestens\n"
COLOR(RED) "90 Rubine" COLOR(DEFAULT) " für eine haben!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"C'est cher mais...c'est cool!"
BOX_BREAK

"Je ne peux les lâcher à moins de\n"
COLOR(RED) "90 Rubis" COLOR(DEFAULT) " pièce!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "ポリ…ポリ…ポリ…\n"
SHIFT(33) COLOR(RED) "魔法のマメ" COLOR(DEFAULT) "…　あるよ…\n"
SHIFT(27) "どうだい？　ほしいか？　ん？"
BOX_BREAK

COLOR(RED) "１００ルピー" COLOR(DEFAULT) "なら　いいぜ！　ケケ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Chomp chomp chomp...\n"
"We have..." COLOR(RED) "Magic Beans" COLOR(DEFAULT) "! \n"
"Do you want them...huh? Huh?"
BOX_BREAK

COLOR(RED) "100 Rupees" COLOR(DEFAULT) " for one piece!\n"
"Keyahahah!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Wir verkaufen... " COLOR(RED) "Wundererbsen" COLOR(DEFAULT) "! \n"
"Du willst sie kaufen... Na gut!"
BOX_BREAK

COLOR(RED) "100 Rubine" COLOR(DEFAULT) " für eine!\n"
"Juhuuu!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Miam miam miam...\n"
"Veux-tu des " COLOR(RED) "haricots magiques" COLOR(DEFAULT) "?\n"
"Combien??? Devine!!!! \n"
"Hé hé hé..."
BOX_BREAK

COLOR(RED) "100 Rubis pièce" COLOR(DEFAULT) "!\n"
"Wouahahahahaha!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "あ、そう…　ポリ…ポリ…"
)
,
MSG(
"Oh well...\n"
"Chomp chomp..."
)
,
MSG(
"Na gut..."
)
,
MSG(
"Ha! Bon...\n"
"Miam miam..."
)
)

DEFINE_MESSAGE(0x4069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "お金がないなら　売れねぇな。\n"
SHIFT(60) "ポリ…ポリ…"
)
,
MSG(
"You don't have enough money.\n"
"I can't sell them to you.\n"
"Chomp chomp..."
)
,
MSG(
"Das ist zu wenig Geld.\n"
"Ich kann sie nicht verkaufen."
)
,
MSG(
"Pas assez d'argent! \n"
"J'vais pas te les donner pour \n"
"rien! Miam miam..."
)
)

DEFINE_MESSAGE(0x406A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "マメを　" COLOR(YELLOW) "[C]" COLOR(DEFAULT) "にセットして、\n"
SHIFT(21) "ためしに　この横の土の上で\n"
SHIFT(18) "使ってみなよ。　ポリ…ポリ…"
)
,
MSG(
"Set a bean to " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "and use it on\n"
"the dirt right here."
)
,
MSG(
"Plaziere eine Wundererbse auf " COLOR(YELLOW) "[C]\n"
COLOR(DEFAULT) "und pflanze sie hier in die Erde."
)
,
MSG(
"Assigne un haricot à " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "et \n"
"plante-le dans la terre à côté."
)
)

DEFINE_MESSAGE(0x406B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "おっと　残念…　売り切れた。\n"
SHIFT(48) "ポリ…ポリ…　え？\n"
SHIFT(12) "このマメは　売り物じゃないよ！"
)
,
MSG(
"Oh, too bad! We're sold out!\n"
"Chomp chomp...What?\n"
"Oh, these beans are not for sale!"
)
,
MSG(
"Oh, wie schade! Die Wundererbsen\n"
"sind ausverkauft! Wie bitte?\n"
"Oh, diese hier sind unverkäuflich!"
)
,
MSG(
"Dommage! Je suis en rupture de\n"
"de stock! Miam miam...Comment?\n"
"Non! Ces haricots ne sont pas à \n"
"vendre! C'est mon goûter..."
)
)

DEFINE_MESSAGE(0x406C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "マメを　うえるなら　やわらかい所。\n"
SHIFT(30) "いろいろ　さがしてみな。\n"
SHIFT(42) "ポリ…ポリ…ポリ…"
)
,
MSG(
"If you want to plant beans, go\n"
"around and look for soft soil.\n"
"Chomp chomp chomp."
)
,
MSG(
"Es gibt eine Menge Orte, an denen\n"
"man  Wundererbsen pflanzen kann.\n"
"Suche nach einem quadratischen\n"
"Fleckchen Erde!"
)
,
MSG(
"Tu trouveras de nombreux trous\n"
"pour planter tes haricots...\n"
"Cherche bien!!!\n"
"Miam miam miam."
)
)

DEFINE_MESSAGE(0x406D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(21) "今、お前は　" COLOR(RED) "１Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(6) "もぐったうちにも　はいっとらん。"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "1 meter" COLOR(DEFAULT) " just now. But I wouldn't \n"
"call that a real dive."
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist nur " COLOR(RED) "1 Meter" COLOR(DEFAULT) " tief getaucht. Das\n"
"würde ich nicht \"Tauchen\" nennen..."
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "un mètre" COLOR(DEFAULT) ". \n"
"C'est pas terrible."
)
)

DEFINE_MESSAGE(0x406E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(18) "今、お前は　" COLOR(RED) "２Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(6) "もぐったうちにも　はいっとらん。"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "2 meters" COLOR(DEFAULT) " just now. But I wouldn't \n"
"call that a real dive."
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist nur " COLOR(RED) "2 Meter" COLOR(DEFAULT) " tief getaucht. Das\n"
"würde ich nicht \"Tauchen\" nennen..."
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "2 mètres" COLOR(DEFAULT) ". \n"
"C'est pas terrible."
)
)

DEFINE_MESSAGE(0x406F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(18) "今、お前は　" COLOR(RED) "３Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(6) "もぐったうちにも　はいっとらん。"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "3 meters" COLOR(DEFAULT) " just now. But I wouldn't \n"
"call that a real dive."
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist nur " COLOR(RED) "3 Meter" COLOR(DEFAULT) " tief getaucht. Das\n"
"würde ich nicht \"Tauchen\" nennen..."
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "3 mètres" COLOR(DEFAULT) ". \n"
"C'est pas terrible."
)
)

DEFINE_MESSAGE(0x4070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(18) "今、お前は　" COLOR(RED) "４Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(45) "まだ　まだ　あまい！"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "4 meters " COLOR(DEFAULT) "just now. Still not \n"
"deep enough!"
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist nur " COLOR(RED) "4 Meter" COLOR(DEFAULT) " tief getaucht. Das\n"
"würde ich nicht \"Tauchen\" nennen..."
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "4 mètres" COLOR(DEFAULT) ". \n"
"Ce n'est pas assez."
)
)

DEFINE_MESSAGE(0x4071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(18) "今、お前は　" COLOR(RED) "５Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(45) "まだ　まだ　あまい！"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "5 meters " COLOR(DEFAULT) "just now. Still not \n"
"deep enough!"
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist jetzt " COLOR(RED) "5 Meter" COLOR(DEFAULT) " tief getaucht. Das\n"
"ist noch nicht tief genug..."
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "5 mètres" COLOR(DEFAULT) ". \n"
"Ce n'est pas assez."
)
)

DEFINE_MESSAGE(0x4072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(18) "今、お前は　" COLOR(RED) "６Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(24) "もっと　もぐれるはずじゃ！"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "6 meters" COLOR(DEFAULT) " just now. You should be\n"
"able to dive deeper!"
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist jetzt " COLOR(RED) "6 Meter" COLOR(DEFAULT) " tief getaucht. Du\n"
"solltest tiefer tauchen können!"
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "6 mètres" COLOR(DEFAULT) ". \n"
"Tu peux faire mieux."
)
)

DEFINE_MESSAGE(0x4073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(18) "今、お前は　" COLOR(RED) "７Ｍ　" COLOR(DEFAULT) "もぐったな。\n"
SHIFT(24) "もっと　もぐれるはずじゃ！"
)
,
MSG(
"You may not have noticed, but I've\n"
"been watching you. You dove \n"
COLOR(RED) "7 meters" COLOR(DEFAULT) " just now. You should be\n"
"able to dive deeper!"
)
,
MSG(
"Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"bist jetzt " COLOR(RED) "7 Meter" COLOR(DEFAULT) " tief getaucht. Du\n"
"solltest tiefer tauchen können!"
)
,
MSG(
"Sans que tu le saches, je \n"
"t'observais... \n"
"Tu viens de plonger à " COLOR(RED) "7 mètres" COLOR(DEFAULT) ". \n"
"Tu peux faire mieux."
)
)

DEFINE_MESSAGE(0x4074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) "見てないようで、ワシは見ておる。\n"
SHIFT(9) "今、お前は　" COLOR(RED) "水底にタッチ" COLOR(DEFAULT) "したな。\n"
SHIFT(21) "みごとじゃ、コレ　やるぞい！"
)
,
MSG(
UNSKIPPABLE "You may not have noticed, but I've\n"
"been watching you. You " COLOR(RED) "touched \n"
"the bottom " COLOR(DEFAULT) "just now.  Fantastic!\n"
"I'll give this to you!"
)
,
MSG(
UNSKIPPABLE "Du hast es vielleicht nicht bemerkt,\n"
"aber ich habe Dich beobachtet. Du\n"
"hast den " COLOR(RED) "Grund des Sees" COLOR(DEFAULT) " erreicht!\n"
"Super! Hier ist etwas für Dich!"
)
,
MSG(
UNSKIPPABLE "Sans que tu le saches, je\n"
"t'observais...\n"
"Tu as " COLOR(RED) "touché le fond" COLOR(DEFAULT) ". Tu es fort!\n"
"Prends ceci en récompense!"
)
)

DEFINE_MESSAGE(0x4075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "お前のもぐりは　天下一品じゃ。\n"
SHIFT(30) "ハイリア湖の底なんかに\n"
SHIFT(24) "もぐってみては　どうかな？"
)
,
MSG(
"Your diving is the best in the \n"
"world. Why don't you dive to the \n"
"bottom of Lake Hylia?"
)
,
MSG(
"Du scheinst der beste Taucher \n"
"Hyrules zu sein! Warum tauchst\n"
"Du nicht mal auf den \n"
"Grund des Hylia-Sees?"
)
,
MSG(
"Tu es le meilleur plongeur du \n"
"monde... Peut-être devrais-tu \n"
"plonger dans le Lac Hylia?"
)
)

DEFINE_MESSAGE(0x4076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "オラ、さすらいのカカシ　" COLOR(RED) "ピエール" COLOR(DEFAULT) "。\n"
SHIFT(9) "魂をゆさぶる　サウンドを　求め、\n"
SHIFT(36) "さすらいたい　カカシ。"
)
,
MSG(
"My name is " COLOR(RED) "Pierre" COLOR(DEFAULT) ", the wandering\n"
"scarecrow. Actually, I wish I could\n"
"wander to look for soul-moving\n"
"sounds, but I'm kind of stuck here."
)
,
MSG(
"Ich bin " COLOR(RED) "Balzac" COLOR(DEFAULT) ", die Vogelscheuche.\n"
"Ich wünschte, ich könnte reisen,\n"
"um herzergreifende Lieder zu\n"
"hören. Aber ich stecke hier fest..."
)
,
MSG(
"Mon nom est " COLOR(RED) "Pierre" COLOR(DEFAULT) " l'épouvantail! \n"
"J'adore les rythmes entraînants! \n"
"Mais je suis planté ici..."
)
)

DEFINE_MESSAGE(0x4077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "いい曲だ〜っ！　心に残ったぞ〜！" EVENT
)
,
MSG(
"Fantastic tune! It touches my \n"
"heart!" EVENT
)
,
MSG(
"Eine wunderschöne Melodie!\n"
"Sie geht richtig ans Herz!" EVENT
)
,
MSG(
"Superbe mélodie! \n"
"Elle fait bouger mon p'tit corps!" EVENT
)
)

DEFINE_MESSAGE(0x4078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "いい曲できたら　また　聞かせろよ。" EVENT
)
,
MSG(
"If you come up with a nice song,\n"
"come back and let me hear it!" EVENT
)
,
MSG(
"Wenn Dir ein schönes Lied einfällt,\n"
"komm her und spiel es mir vor!" EVENT
)
,
MSG(
"N'hésite pas à revenir me chanter\n"
"quelque chose!" EVENT
)
)

DEFINE_MESSAGE(0x4079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"アンタが　聞かせてくれた　あの曲は\n"
SHIFT(15) "今でも　オラの心に　残ってる。\n"
SHIFT(42) "一発　やってみっか！" EVENT
)
,
MSG(
"That song you played for me still\n"
"stays in my heart. Let's hear it\n"
"again!" EVENT
)
,
MSG(
"Es ist lange her, aber würdest Du\n"
"mir nochmal das schöne Lied von\n"
"damals vorspielen?" EVENT
)
,
MSG(
"Cette mélodie est gravée au fond\n"
"de mon coeur...\n"
"Joue-la encore une fois!" EVENT
)
)

DEFINE_MESSAGE(0x407A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) "アンタが　聞かせてくれた曲は\n"
SHIFT(36) "オラの心に　残ってる。\n"
SHIFT(42) "一発　やってみっか！" EVENT
)
,
MSG(
"That song you played for me \n"
"stays in my heart!" EVENT
)
,
MSG(
"Das Lied von damals werde ich\n"
"nie vergessen!" EVENT
)
,
MSG(
"Je garde cette mélodie au fond \n"
"de mon coeur!" EVENT
)
)

DEFINE_MESSAGE(0x407B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"えっと…　つり　" COLOR(RED) "２０ルピー" COLOR(DEFAULT) "で　やる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "やる\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "やらない" COLOR(DEFAULT)
)
,
MSG(
"Well, do you want to go fishing \n"
"for " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Nun, willst Du für nur\n"
COLOR(RED) "20 Rubine" COLOR(DEFAULT) " angeln?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"La partie de pêche te coûtera...\n"
COLOR(RED) "20 Rubis" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x407C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"お〜っと、" COLOR(RED) "振動パック" COLOR(DEFAULT) "持ってへんの？\n"
"持ってたら　ブルブルすんのにな〜。\n"
SHIFT(9) "ほんなら　今回は　ブルブルなし！" EVENT
)
,
MSG(
"Oh, no! You don't have a " COLOR(RED) "Rumble \n"
"Pak" COLOR(DEFAULT) "! With a Rumble Pak, you can\n"
"feel the vibrations of a fish on\n"
"your hook."
BOX_BREAK

"This time, no rumble for you!" EVENT
)
,
MSG(
"Oh, nein! Dir fehlt ein " COLOR(RED) "Rumble \n"
"Pak" COLOR(DEFAULT) "! Damit würdest Du spüren,\n"
"wenn ein Fisch am Haken ist."
BOX_BREAK

"Pech für Dich!" EVENT
)
,
MSG(
"Ha! Tu n'as pas de " COLOR(RED) "Kit Vibration" COLOR(DEFAULT) "! \n"
"Tu ne pourras malheureusement \n"
"pas sentir les poissons taquiner \n"
"ton hameçon."
BOX_BREAK

"Pas de vibrations pour toi!" EVENT
)
)

DEFINE_MESSAGE(0x407D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "おぉっ、" COLOR(RED) "振動パック　" COLOR(DEFAULT) "持ってるやん！\n"
SHIFT(3) "兄さん　今日は　ブルブルすんで〜！" EVENT
)
,
MSG(
"Wow! You have a " COLOR(RED) "Rumble Pak" COLOR(DEFAULT) "!\n"
"Today, you can feel the vibration,\n"
"young " AGE_LAD "!" EVENT
)
,
MSG(
"Wow! Du hast ein " COLOR(RED) "Rumble Pak" COLOR(DEFAULT) "!\n"
"Jetzt spürst Du, ob Du etwas an\n"
"der Angel hast, mein Junge!" EVENT
)
,
MSG(
"Whoa! Tu as un " COLOR(RED) "Kit Vibration" COLOR(DEFAULT) "!\n"
"Tu pourras sentir les poissons\n"
"taquiner ton hameçon!" EVENT
)
)

DEFINE_MESSAGE(0x407E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "金　足らんがな、ホンマに…"
)
,
MSG(
"Shucks! You don't have enough \n"
"money."
)
,
MSG(
"Mist! Du hast nicht genug Geld."
)
,
MSG(
"Dommage! Tu n'as pas assez\n"
"d'argent!"
)
)

DEFINE_MESSAGE(0x407F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(57) "説明するで〜！"
BOX_BREAK

SHIFT(27) "水ぎわまで　歩いていって\n"
SHIFT(18) "適当に　" COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "で　サカナを　注目。\n"
SHIFT(24) COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "で投げて、" COLOR(BLUE) "[A]" COLOR(DEFAULT) "でブレーキ。"
BOX_BREAK

SHIFT(51) "着水したら　" COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "で\n"
SHIFT(21) "グリグリと　ルアーを　操作。\n"
SHIFT(15) "ヘタな人は　" COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "でも　やれます。"
BOX_BREAK

SHIFT(12) COLOR(BLUE) "[A]" COLOR(DEFAULT) "で巻上げ、" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "と" COLOR(BLUE) "[A]" COLOR(DEFAULT) "で早巻上げ。"
BOX_BREAK

SHIFT(15) "サカナが　エサに食いついたら\n"
SHIFT(3) COLOR(BLUE) "[A]" COLOR(DEFAULT) "と　" COLOR(LIGHTBLUE) "[Control-Pad]の下" COLOR(DEFAULT) "で　うまく　ひっかけて\n"
SHIFT(54) "あとは　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "のみ！"
BOX_BREAK

"わかった？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "いいえ" COLOR(DEFAULT)
)
,
MSG(
"OK, listen up!"
BOX_BREAK

"Walk up to the water's edge and\n"
"press " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " to look at a fish."
BOX_BREAK

"While looking at a fish, you can \n"
"cast your line with " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) ". Press " COLOR(BLUE) "[A]\n"
COLOR(DEFAULT) "to brake the line."
BOX_BREAK

"When the lure drops into the \n"
"water, you can wiggle it with " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
"If you're a novice, you can also\n"
"use " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "."
BOX_BREAK

"Reel in your lure with " COLOR(BLUE) "[A]" COLOR(DEFAULT) ". Hold \n"
"down " COLOR(BLUE) "[A]" COLOR(DEFAULT) " and " COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "to reel it in \n"
"faster."
BOX_BREAK

"If you feel a hit, press " COLOR(BLUE) "[A]" COLOR(ADJUSTABLE) " " COLOR(DEFAULT) "and\n"
COLOR(LIGHTBLUE) "[Control-Pad] down " COLOR(DEFAULT) "to set the hook.\n"
"After that, reel it in with " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Do you understand?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Geh zum Rand des Sees und drücke\n"
COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) ", um die Fische anzuschauen.\n"
"Wirf die Leine mit " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " aus und\n"
"stoppe sie mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Laß Deinen Köder mit " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " im\n"
"Wasser zappeln. Als Anfänger\n"
"kannst Du auch " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) " benutzen."
BOX_BREAK

"Hole die Angelschnur mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) " ein.\n"
"Wenn Du " COLOR(BLUE) "[A]" COLOR(DEFAULT) " und " COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "gedrückt\n"
"hältst, kannst Du den Fang\n"
"schneller einholen!"
BOX_BREAK

"Spürst Du, daß etwas anbeißt,\n"
"drücke " COLOR(BLUE) "[A]" COLOR(ADJUSTABLE) " " COLOR(DEFAULT) "und " COLOR(LIGHTBLUE) "[Control-Pad] nach unten" COLOR(DEFAULT) ",\n"
"um den Haken festzusetzen. Dann\n"
"hole die Leine mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) " ein."
BOX_BREAK

"Möchtest Du Deine Ergebnisse\n"
"beim Angeln festhalten, mußt Du\n"
"Deinen Fang wiegen lassen!"
BOX_BREAK

"Angelst Du als Kind, wird Dein\n"
"Ergebnis auch in der Zukunft\n"
"festgehalten. Umgekehrt ist\n"
"dies nicht möglich."
BOX_BREAK

"Hast Du alles verstanden?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Bon! Je t'explique!"
BOX_BREAK

"Approche-toi du bord de l'eau et \n"
"appuie sur " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " pour repérer un\n"
"poisson."
BOX_BREAK

"Envoie ta ligne vers ce poisson \n"
"avec " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "  puis appuie sur " COLOR(BLUE) "[A] " COLOR(DEFAULT) "pour\n"
"arrêter le déroulement de la ligne."
BOX_BREAK

"Remue l'appât avec " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " ou utilise\n"
COLOR(ADJUSTABLE) "[B] " COLOR(DEFAULT) "si tu es un débutant!"
BOX_BREAK

"Remonte ta ligne avec " COLOR(BLUE) "[A] " COLOR(DEFAULT) "et \n"
"appuie sur " COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "pour l'enrouler \n"
"plus vite."
BOX_BREAK

"Si tu sens une touche, accroche-la\n"
"avec " COLOR(BLUE) "[A]" COLOR(ADJUSTABLE) " " COLOR(DEFAULT) "et " COLOR(LIGHTBLUE) "[Control-Pad] " COLOR(DEFAULT) "vers le bas. \n"
"Remonte ensuite la ligne avec " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Tu as bien tout compris?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(27) "時間は　気前よく　無制限！\n"
SHIFT(3) "でも　サカナのキープは　一匹だけ。\n"
SHIFT(3) "今の記録は　え〜っと　" COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "。"
BOX_BREAK

SHIFT(51) "投げた後は　" COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "で\n"
SHIFT(36) "視点切り替えも　可能！"
BOX_BREAK

SHIFT(45) "では、スタートッ！！" EVENT
)
,
MSG(
"I'm so generous, I'll let you fish\n"
"for as long as you want. However,\n"
"you can keep only one fish."
BOX_BREAK

"The biggest fish ever caught here\n"
"weighed " COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "."
BOX_BREAK

"After you cast, you can change\n"
"your view with " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "."
BOX_BREAK

SHIFT(65) "Let's fish!" EVENT
)
,
MSG(
"Ich bin sehr großzügig. Du kannst\n"
"angeln, solange Du möchtest."
BOX_BREAK

"Der größte Fang an diesem See\n"
"wog " COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "."
BOX_BREAK

"Wenn Du Deine Angel ausgeworfen \n"
"hast, kannst Du die Blickrichtung\n"
"mit " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " ändern."
BOX_BREAK

SHIFT(74) "Petri Heil!" EVENT
)
,
MSG(
"Je suis très généreux aujourd'hui!\n"
"Tu peux pêcher aussi longtemps \n"
"que tu le désires... Mais tu ne \n"
"pourras conserver qu'un poisson."
BOX_BREAK

"Le poisson le plus gros jamais \n"
"attrapé pèse " COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "."
BOX_BREAK

"Au fait! Change ton angle de vue\n"
"avec " COLOR(LIGHTBLUE) "[Z] " COLOR(DEFAULT) "après avoir jeté ta ligne."
BOX_BREAK

SHIFT(32) "Allez hop! A la pêche!" EVENT
)
)

DEFINE_MESSAGE(0x4081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(63) "ハッハッハ！\n"
SHIFT(30) "ちゃんと　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "と　" COLOR(LIGHTBLUE) "[Control-Pad]の下" COLOR(DEFAULT) "で\n"
SHIFT(12) "うまく　ひっかけた？　ホンマに？"
)
,
MSG(
"Wah ha haah!\n"
"Did you set the hook by pressing\n"
COLOR(BLUE) "[A]" COLOR(DEFAULT) " and " COLOR(LIGHTBLUE) "[Control-Pad] down" COLOR(DEFAULT) "?"
)
,
MSG(
"Hahaha!\n"
"Hast Du den Haken nicht mit " COLOR(BLUE) "[A]\n"
COLOR(DEFAULT) "und " COLOR(LIGHTBLUE) "[Control-Pad] nach unten" COLOR(DEFAULT) " angezogen?"
)
,
MSG(
"Wah ha ha ha ha!\n"
"As-tu accroché ce poisson en \n"
"appuyant sur " COLOR(BLUE) "[A]" COLOR(DEFAULT) " et " COLOR(LIGHTBLUE) "[Control-Pad] " COLOR(DEFAULT) "en bas?"
)
)

DEFINE_MESSAGE(0x4082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) "な〜に　やってんねん、ホンマ。" FADE(60)
)
,
MSG(
"Hey, what happened?\n"
"You lost it!" FADE(60)
)
,
MSG(
"Hey, was ist passiert?\n"
"Du hast den Fisch verloren!" FADE(60)
)
,
MSG(
"Que s'est-il passé?\n"
"Tu as perdu ta prise!" FADE(60)
)
)

DEFINE_MESSAGE(0x4083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(63) "ふむ　ふむ…\n"
SHIFT(27) COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "ってとこやね。"
BOX_BREAK

"キープする？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Well, well...it's about " COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) ". \n"
"Do you want to keep it?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Naja... Der wiegt etwa " COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) ". \n"
"Willst Du ihn behalten?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Mouais... Il pèse " COLOR(RED) FISH_INFO " livres." COLOR(DEFAULT) "\n"
"Veux-tu le garder?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) "なんか　よう？"
BOX_BREAK

THREE_CHOICE
    COLOR(ADJUSTABLE) "サカナをみてよ\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "なにか話そうよ\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "もうやめる" COLOR(DEFAULT)
)
,
MSG(
"What do you want?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Weigh my fish.\n"
    "Let's talk about something.\n"
    "I want to quit." COLOR(DEFAULT)
)
,
MSG(
"Was möchtest Du?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Wiege meinen Fisch!\n"
    "Laß uns ein wenig reden...\n"
    "Mir reicht's!" COLOR(DEFAULT)
)
,
MSG(
"Que veux-tu?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Peser mon bô poisson!\n"
    "Discuter un peu\n"
    "Partir" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"情熱だけじゃ　サカナはつれへんで。\n"
SHIFT(39) "いや、マジで　マジで。"
)
,
MSG(
"Passion alone won't catch you \n"
"many fish. I'm serious!"
)
,
MSG(
"Du mußt Dich schon etwas  \n"
"gedulden, wenn Du einen guten\n"
"Fang machen willst! Ehrlich!"
)
,
MSG(
"La passion seule ne fait pas le \n"
"bon pêcheur!"
)
)

DEFINE_MESSAGE(0x4086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "おぉぉぉぉぉぉぉぉぉっ！！"
BOX_BREAK

SHIFT(18) "これは　デカい！　記録更新や！\n"
SHIFT(15) COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "は　あるで　マジで。\n"
SHIFT(30) "よっしゃ、景品は　コレ！！" EVENT
)
,
MSG(
SHIFT(75) "WHOA!"
BOX_BREAK

"This fish is huge! It looks like a \n"
"new record! It weighs at least \n"
COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "! Seriously! \n"
"OK, here is your prize!" EVENT
)
,
MSG(
SHIFT(85) "WOW!!"
BOX_BREAK

"Das ist ja ein Prachtkerl! Sieht\n"
"ganz nach einem neuen Rekord aus!\n"
"Er wiegt mindestens " COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "!\n"
"Okay, hier ist Dein Preis!" EVENT
)
,
MSG(
SHIFT(75) "WHOAAAA!"
BOX_BREAK

"Ce poisson est é-norme! C'est un \n"
"nouveau record! Il pèse au bas\n"
"mot " COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "! Vraiment! \n"
"Tiens voilà ton prix!" EVENT
)
)

DEFINE_MESSAGE(0x4087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) "なにすんねんな　ホンマ！" FADE(60)
)
,
MSG(
"What? \n"
"What are you doing to me?!" FADE(60)
)
,
MSG(
"Was? \n"
"Was machst Du mit mir?!" FADE(60)
)
,
MSG(
"Héééé! \n"
"J'suis pas un poisson moi!!" FADE(60)
)
)

DEFINE_MESSAGE(0x4088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) "ちょっと　兄さん、なんか\n"
SHIFT(12) "大事な用事が　あるんちゃうの？"
BOX_BREAK

SHIFT(87) "え？\n"
SHIFT(3) "ここで　遊んでる方が　楽しいやて？"
BOX_BREAK

SHIFT(3) "そーやって　ダメになっていった人\n"
SHIFT(15) "よーけ　おるんやで、ホンマに。\n"
SHIFT(54) "ま、いいけどね。"
)
,
MSG(
"Hey, young " AGE_LAD "! Don't you have \n"
"anything important you should be\n"
"doing?"
BOX_BREAK

"What? Are you saying it's more \n"
"fun to play here?"
BOX_BREAK

"I've seen many people ruin their\n"
"lives with that kind of attitude.\n"
"I'm serious!\n"
"Oh well..."
)
,
MSG(
"Hey, Junge! Hast Du nichts\n"
"Besseres zu tun?"
BOX_BREAK

"Was? Du willst weiter hier\n"
"rumlungern?"
BOX_BREAK

"Mit so einer Einstellung bringt man\n"
"es im Leben zu nichts, glaub mir!\n"
"Naja..."
)
,
MSG(
"Hé! P'tite tête! T'as pas un truc\n"
"plus important à faire?"
BOX_BREAK

"Quoi? Tu trouves que c'est plus\n"
"drôle de jouer ici?"
BOX_BREAK

"Y'en a beaucoup qui sont morts\n"
"en faisant ça! C'est mauvais pour\n"
"la santé! Sérieux!\n"
"Enfin bon..."
)
)

DEFINE_MESSAGE(0x4089, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(21) "ただいまの記録　" FISH_INFO "センチ\n"
SHIFT(30) "つったひと　" NAME QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "The biggest fish ever caught in\n"
"this pond weighed " FISH_INFO " pounds.\n"
"The angler: " NAME QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Der größte Fang an diesem See\n"
"wog " FISH_INFO " Pfund.\n"
"Gefangen von: " NAME QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Plus gros poisson jamais pêché.\n"
"Poids:  " FISH_INFO " livres.\n"
"Pêcheur: " NAME QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x408A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"まだ　やる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Do you want to continue fishing?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Willst Du weiter angeln?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Veux-tu continuer à pêcher?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x408B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "えーっと、" COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "…\n"
SHIFT(51) "まだ　まだ　やね。" EVENT
)
,
MSG(
"Well, it weighs " COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "...\n"
"Not bad, but there are bigger\n"
"fish in there!" EVENT
)
,
MSG(
"Naja, er wiegt " COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "...\n"
"Nicht schlecht, aber in diesem See\n"
"gibt es auch größere Brocken!" EVENT
)
,
MSG(
"Il ne pèse que:  " COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "...\n"
"Y'a plus gros, c'est sûr!" EVENT
)
)

DEFINE_MESSAGE(0x408C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(63) "なんやねん、\n"
SHIFT(36) "サカナ　おらんやんか！\n"
SHIFT(30) "フニャ　フニャ　フニャ…" EVENT
)
,
MSG(
"Hey, c'mon! You don't have a fish!\n"
"Shucks!" EVENT
)
,
MSG(
"Hey, Du hast doch gar keinen\n"
"Fisch gefangen! Weichei!" EVENT
)
,
MSG(
"Ben alors! C'est pas la forme?" EVENT
)
)

DEFINE_MESSAGE(0x408D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(81) "え？\n"
SHIFT(18) "他のルアーで　つりたいって？"
BOX_BREAK

SHIFT(36) "なに　ゆーてんねんナ！\n"
SHIFT(42) "ワガママな　奴やな！"
BOX_BREAK

"「たいこーぼーは　ルアーを　選ばず」\n"
SHIFT(21) "知らんのかいナ、ホンマに…"
)
,
MSG(
"You want to try another lure?\n"
"What are you talking about? Are\n"
"you so selfish?"
BOX_BREAK

"Don't you know the old saying,\n"
"\"A great fisherman never chooses\n"
"his own lure?\""
)
,
MSG(
"Du willst einen anderen Köder?\n"
"Meinst Du, darauf kommt es an?\n"
"Man braucht Talent und Erfahrung!\n"
"Hör mir zu:"
BOX_BREAK

"Ich habe den Sachsen das Angeln\n"
"beigebracht. Seitdem sind es die\n"
"Angelsachsen! Alles klar?"
)
,
MSG(
"Tu veux essayer un autre appât?\n"
"N'as-tu pas confiance en moi?\n"
"N'aimes-tu pas mon matériel?"
BOX_BREAK

"On dit souvent:\n"
"\"Le bon pêcheur ne décide jamais\n"
"de ses appâts!\""
)
)

DEFINE_MESSAGE(0x408E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(81) "え？\n"
SHIFT(63) "つりのコツ？"
BOX_BREAK

SHIFT(12) "それは　企業秘密です。　マジで。"
)
,
MSG(
"What? Do you want to know some \n"
"fishing secrets? I can't tell you\n"
"any. They are company secrets.\n"
"Seriously!"
)
,
MSG(
"Was? Du möchtest ein paar Tricks\n"
"erfahren? Die kann ich Dir nicht\n"
"verraten. Die sind geheim.\n"
"Ehrlich!"
)
,
MSG(
"Quoi? Tu veux connaître ma \n"
"technique secrète de pêche?\n"
"Ben justement, ma technique...\n"
"Elle est secrète..."
)
)

DEFINE_MESSAGE(0x408F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(81) "え？\n"
SHIFT(9) "おっちゃん、つり　うまいかって？"
BOX_BREAK

SHIFT(39) "あったりまえやがな！\n"
SHIFT(9) "プロやで、プロ！　マジで　マジで。"
)
,
MSG(
"What? You want to know if I'm a \n"
"good fisherman?"
BOX_BREAK

"Of course I am! I'm an old pro!\n"
"Do you know what a pro is?\n"
"I'm telling you the truth!"
)
,
MSG(
"Was? Du willst wissen, ob ich ein\n"
"guter Angler bin?"
BOX_BREAK

"Klar doch! Ein echter Pro!\n"
"Weißt Du überhaupt, was das ist?\n"
"So wie du angelst, wohl kaum!"
)
,
MSG(
"Quoi? Tu veux savoir si je suis \n"
"un bon pêcheur!"
BOX_BREAK

"T'étais pas né que le grand \n"
"Jabu-Jabu se balançait au bout de\n"
"ma ligne! \n"
"J'suis un pro! Une pointure!"
)
)

DEFINE_MESSAGE(0x4090, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) QUICKTEXT_ENABLE "つりぼりでのエチケット" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(41) QUICKTEXT_ENABLE "１．しずむルアー禁止！\n"
SHIFT(39) "２．ゴミはすてるな！\n"
SHIFT(39) "３．しずかに歩こう！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(39) QUICKTEXT_ENABLE "４．ひとに投げるな！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Rules and Regulations" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "1. Don't use sinking lures.\n"
"2. Don't litter.\n"
"3. Walk quietly." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "4. Don't cast at anyone." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Verhaltensmaßregeln" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "1. Benutzen Sie keine fremden\n"
"Köder.\n"
"2. Nicht ins Wasser..." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "3. Keine Hamster als Köder\n"
"verwenden!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Règlement:" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "1. Ne pas utiliser d'appâts coulants.\n"
"2. Ne pas cracher dans l'étang.\n"
"3. Rester calme." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "4. Ne pas jeter sa ligne sur \n"
"le patron.\n"
"5. Ne pas utiliser de bombes." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x4091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(75) "おおっ！\n"
SHIFT(42) "コ、コレは　デカい！！\n"
COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "というコトに　しとこう。"
BOX_BREAK

"キープしとく？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Wow! This is a real lunker!\n"
"Let's see...it weighs\n"
COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "!"
BOX_BREAK

"Do you want to keep it?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Wow! Das ist ja ein echter\n"
"Brocken! Tatsächlich! Er wiegt\n"
COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "!"
BOX_BREAK

"Willst Du ihn behalten?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Wooaa! Quel gros morceau!\n"
"Voyons voir... Il pèse...\n"
COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "!"
BOX_BREAK

"Veux-tu le garder?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(18) "大きくなってから　来てみい。\n"
SHIFT(12) "サカナも　デカクなっとんでぇ。\n"
SHIFT(75) "たぶん。"
)
,
MSG(
"Come back when you get older!\n"
"The fish will be bigger, too...\n"
"Well, maybe."
)
,
MSG(
"Komm wieder, wenn Du älter bist!\n"
"Dann sind auch die Fische größer...\n"
"Naja, oder auch nicht."
)
,
MSG(
"Reviens une fois plus grand!\n"
"Les poissons auront grandi aussi!\n"
"Wha ha ha ha...hmm...hmm."
)
)

DEFINE_MESSAGE(0x4093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "アッ、兄さん！\n"
SHIFT(21) "覚えてんで！　久しぶりやな。"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "何年ぶりやろ…　七年？\n"
SHIFT(24) "今まで　なにしとったんや？"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "もう　兄さんしか　客おらへんし\n"
SHIFT(15) "商売あがったりや。　ホンマに。\n"
SHIFT(9) "おかげで　アタマも…　いや別に。"
BOX_BREAK

UNSKIPPABLE "じゃ　" COLOR(RED) "２０ルピー" COLOR(DEFAULT) "で　つってみる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "いいえ" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Hey, " AGE_BOY "! I remember you!\n"
"It's been a long time!"
BOX_BREAK

UNSKIPPABLE "How many years has it been?\n"
"Seven years?! What have you\n"
"been doing all this time?!"
BOX_BREAK

UNSKIPPABLE "You're my only customer. I'm \n"
"almost out of business! Seriously!\n"
"On top of that, my hair..."
BOX_BREAK

UNSKIPPABLE "Uh, I mean, never mind..."
BOX_BREAK

UNSKIPPABLE "Well, do you want to go fishing?\n"
"It costs only " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Hey, Typ! Wir kennen uns doch!\n"
"Ist aber schon lange her!"
BOX_BREAK

UNSKIPPABLE "Wieviel Jahre waren das?\n"
"Sieben Jahre?! Was hast Du denn\n"
"die ganze Zeit getrieben?!"
BOX_BREAK

UNSKIPPABLE "Du bist mein einziger Kunde.\n"
"Ich mache fast kein Geschäft\n"
"mehr!\n"
"Obendrein werden meine Haare..."
BOX_BREAK

UNSKIPPABLE "Naja, äh, egal..."
BOX_BREAK

UNSKIPPABLE "Na gut, willst Du fischen gehen?\n"
"Es kostet nur " COLOR(RED) "20 Rubine" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Hé, jeune homme! Je me souviens \n"
"de toi! Cela fait un bail!"
BOX_BREAK

UNSKIPPABLE "Combien d'années? Sept?! \n"
"Alors...quelles nouvelles?!"
BOX_BREAK

UNSKIPPABLE "Moi? Bof....\n"
"Tu es mon seul client. \n"
"Je n'ai plus de boulot.\n"
"Les temps sont durs!"
BOX_BREAK

UNSKIPPABLE "En plus mes cheveux..."
BOX_BREAK

UNSKIPPABLE "Enfin...\n"
"C'est un charme dont j'me passe."
BOX_BREAK

UNSKIPPABLE "Bon...tu veux pêcher?\n"
COLOR(RED) "20 Rubis" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(87) "え？"
BOX_BREAK

SHIFT(12) "べつの場所でも　つりたいって？\n"
SHIFT(36) "なに　ゆーてんねんナ！\n"
SHIFT(12) "商売に　なれヘンがな。　ホンマ。"
)
,
MSG(
"What?"
BOX_BREAK

"You want to go fishing in a \n"
"different fishing pond?!\n"
"What are you talking about?"
BOX_BREAK

"I'll go out of business if you go\n"
"somewhere else!\n"
"I'm serious!"
)
,
MSG(
"Was?"
BOX_BREAK

"Du willst woanders fischen\n"
"gehen?! Du bist wohl nicht\n"
"mehr ganz bei Trost?"
BOX_BREAK

"Wenn Du hier nicht angelst, geh\n"
"ich ja völlig Pleite!\n"
"Ganz im Ernst!"
)
,
MSG(
"Quoi?"
BOX_BREAK

"Tu veux pêcher ailleurs? \n"
"T'es fou!?"
BOX_BREAK

"Qu'est-ce que je vais devenir?"
)
)

DEFINE_MESSAGE(0x4095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(87) "え？"
BOX_BREAK

SHIFT(15) "なんで　ワキ　かいてるかって？\n"
SHIFT(36) "なに　ゆーてんねんナ！\n"
SHIFT(6) "ワイも　よーわからんわ。　マジで。"
)
,
MSG(
"What?"
BOX_BREAK

"You want to know why I'm \n"
"scratching all the time?\n"
"What are you talking about?"
BOX_BREAK

"Actually, I have no idea.\n"
"I'm serious!"
)
,
MSG(
"Was?"
BOX_BREAK

"Du willst mit Fliegen fischen?\n"
"Glaubst, dann läuft's besser?"
BOX_BREAK

"Bleib mal lieber bei den Würmern.\n"
"Ganz ehrlich!"
)
,
MSG(
"Quoi?"
BOX_BREAK

"Pourquoi j'me gratte tout l'temps?\n"
"Mais...j'me gratte pas!\n"
"T'es un p'tit marrant, toi!"
)
)

DEFINE_MESSAGE(0x4096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(87) "え？"
BOX_BREAK

"水にごってて、サカナみえヘンって？\n"
SHIFT(36) "なに　ゆーてんねんナ！\n"
SHIFT(6) "こんな日こそ　オモロイんやがナ。"
BOX_BREAK

SHIFT(9) "見えないサカナに　突然　ヒット！\n"
SHIFT(21) "う〜ん　エキサイティング！！\n"
SHIFT(45) "ほんま　マジ　マジ。"
)
,
MSG(
"What?"
BOX_BREAK

"Are you trying to tell me you\n"
"can't see the fish because the\n"
"water is cloudy?"
BOX_BREAK

"What are you talking about?\n"
"This time of day makes for \n"
"fishing at its finest!"
BOX_BREAK

"You can hook a fish out of the\n"
"blue, when you least expect it.\n"
"Now that's exciting!"
BOX_BREAK

"I'm serious.  Really, I am!"
)
,
MSG(
"Was?"
BOX_BREAK

"Was meinst Du damit, daß Du\n"
"keine Fische siehst, weil das\n"
"Wasser zu trüb ist?"
BOX_BREAK

"So ein Schwachsinn!\n"
"An solchen Tagen macht Fischen\n"
"noch mehr Spaß!"
BOX_BREAK

"Du erwischst einen Fisch, wenn\n"
"Du es am wenigsten erwartest!\n"
"Das ist doch richtig genial!"
BOX_BREAK

"Ganz im Ernst!"
)
,
MSG(
"Quoi?"
BOX_BREAK

"L'eau est trop sombre?\n"
"Les poissons ne mordent pas?"
BOX_BREAK

"Mais.... N'importe quoi!\n"
"C'est le meilleur moment pour\n"
"pêcher!"
BOX_BREAK

"Un énorme poisson peut mordre à\n"
"n'importe quel moment!\n"
"C'est ça la grande aventure de la\n"
"pêche, mon p'tit bonhomme!"
)
)

DEFINE_MESSAGE(0x4097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) "ナニ　やってんねんナ！\n"
SHIFT(24) "アカンって、ゆーてんがナ！\n"
SHIFT(18) "ひどいヤツやなぁ、ほんまに！"
BOX_BREAK

"ボウシ返してもらうで！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かえす\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "いやだ" COLOR(DEFAULT)
)
,
MSG(
"Hey, what are you doing?\n"
"I told you not to do that!\n"
"You're terrible!\n"
"Seriously!"
BOX_BREAK

"Give me back my hat!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "No way" COLOR(DEFAULT)
)
,
MSG(
"Hey, was soll das?\n"
"Paß doch auf!\n"
"Du bist ja total schusselig!\n"
"Dumpfbacke!"
BOX_BREAK

"Gib mir meine Mütze wieder!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Okay!\n"
    "Auf keinen Fall!" COLOR(DEFAULT)
)
,
MSG(
"Hé! Ho non! C'est interdit, ça!\n"
"Rends-moi mon chapeau ou \n"
"j't'accroche à mon hameçon!"
BOX_BREAK

"Tu m'cherches ou quoi?\n"
"Rends-le moi!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "Jamais!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(57) "ん？　待てよ…？\n"
SHIFT(15) "前に　キープしたサカナの方が\n"
SHIFT(27) "大きかったみたいだけど？"
BOX_BREAK

"それでも　キープする？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "やっぱりやめる\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "それでもキープ" COLOR(DEFAULT)
)
,
MSG(
"What? Huh? Oh?\n"
"I think the fish you already\n"
"kept was bigger than this one..."
BOX_BREAK

"Do you still want to keep it?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "No, I don't want it\n"
    "Yes, I want to keep it anyway" COLOR(DEFAULT)
)
,
MSG(
"Was? Oh!\n"
"Du hast ja schon größere Viecher\n"
"an Land gezogen..."
BOX_BREAK

"Willst Du ihn trotzdem behalten?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ich wil ihn nicht! \n"
    "Ich behalte ihn!" COLOR(DEFAULT)
)
,
MSG(
"Quoi? Humm? Oh?\n"
"Je crois que ce poisson est plus\n"
"petit que ta précédente prise..."
BOX_BREAK

"Tu veux vraiment le garder?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Non\n"
    "Oui" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x4099, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(75) "ゲゲッ！\n"
SHIFT(9) "なんか　ヘンなサカナを　つった。\n"
SHIFT(21) "それも　" COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "も　ある。"
BOX_BREAK

"どうしよう？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "とりあえずキープ\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "こんなのいらん" COLOR(DEFAULT)
)
,
MSG(
"Gosh! That's a strange fish you\n"
"caught there! On top of that, it\n"
"weighs " COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "!"
BOX_BREAK

"What do you want to do with it?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Keep it anyway\n"
    "I don't want it" COLOR(DEFAULT)
)
,
MSG(
"Hey! Was ist das denn für ein\n"
"komischer Fisch? Er wiegt auch\n"
COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "!"
BOX_BREAK

"Was willst Du damit machen?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Behalten!\n"
    "Nicht behalten!" COLOR(DEFAULT)
)
,
MSG(
"Peuchère! Il est bizarre ce \n"
"poisson! En plus il pèse\n"
COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "!"
BOX_BREAK

"Veux-tu le garder?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x409A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(81) "おっ！"
BOX_BREAK

SHIFT(51) "こ、これは！！！！！！\n"
SHIFT(33) "なんと　" COLOR(RED) "しずむルアー" COLOR(DEFAULT) "を\n"
SHIFT(45) "ひろってしまった。"
BOX_BREAK

"どうしよう？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "さっそく使おう\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "こんなのいらん" COLOR(DEFAULT)
)
,
MSG(
"Wow!"
BOX_BREAK

"Is this what I think it is?\n"
"Astonishing!\n"
"You snagged a " COLOR(RED) "sinking lure" COLOR(DEFAULT) "!"
BOX_BREAK

"What do you want to do with it?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Use it now.\n"
    "Get rid of it." COLOR(DEFAULT)
)
,
MSG(
"Wow!"
BOX_BREAK

"Hast Du tatsächlich...\n"
"Unglaublich!\n"
"Du hast einen " COLOR(RED) "fremden Köder\n"
COLOR(DEFAULT) "erwischt!"
BOX_BREAK

"Was willst Du damit tun?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Damit angeln!\n"
    "Wegwerfen!" COLOR(DEFAULT)
)
,
MSG(
SHIFT(20) "Mmmm? C'est quoi ce truc?"
BOX_BREAK

"C'est pas un...? Incroyable!\n"
"Vous trouvez un " COLOR(RED) "appât coulant" COLOR(DEFAULT) "!"
BOX_BREAK

"Voulez-vous l'utiliser maintenant?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Jamais!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x409B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(66) "どれどれ…"
BOX_BREAK

SHIFT(69) "おおーっ！\n"
SHIFT(42) "これは　めずらしい！\n"
SHIFT(27) COLOR(RED) "ハイラルどじょう" COLOR(DEFAULT) "やがな。"
BOX_BREAK

SHIFT(33) "これやったら　大きさに\n"
SHIFT(24) "かかわらず　景品は　コレ！！" EVENT
)
,
MSG(
"Well, well..."
BOX_BREAK

"WOW! What a rare fish!\n"
"This is a " COLOR(RED) "Hyrule Loach" COLOR(DEFAULT) "!"
BOX_BREAK

"For this fish, size doesn't \n"
"matter. I'll give you this \n"
"prize!" EVENT
)
,
MSG(
"Nun ja..."
BOX_BREAK

"Wow! Welch ein seltener Fisch!\n"
"Eine " COLOR(RED) "hylianische Forelle" COLOR(DEFAULT) "!"
BOX_BREAK

"Da kommt es nicht auf die Größe\n"
"an! Ich gebe Dir diesen Preis!" EVENT
)
,
MSG(
"Voyons, voyons..."
BOX_BREAK

"WOW! C'est pas commun!\n"
"C'est un " COLOR(RED) "brochet Hylien" COLOR(DEFAULT) "!"
BOX_BREAK

"Ce poisson est si rare, son poids \n"
"n'est pas important... \n"
"Voilà ton prix!" EVENT
)
)

DEFINE_MESSAGE(0x409C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(51) "最近、このサカナ\n"
SHIFT(12) "めっきり　少なくなっとんねん。\n"
SHIFT(24) "そやから　逃がしたんねん。" EVENT
)
,
MSG(
"Recently, the number of these\n"
"fish has decreased tremendously,\n"
"so I'm going to release this one." EVENT
)
,
MSG(
"In der letzten Zeit haben wir kaum\n"
"noch solche Fische gefangen. Ich \n"
"laß ihn lieber wieder schwimmen." EVENT
)
,
MSG(
"Ce type de poisson se fait rare.\n"
"Je vais le relâcher." EVENT
)
)

DEFINE_MESSAGE(0x409D, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(30) "つりぼりでのエチケット" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(41) "１．しずむルアー禁止！\n"
SHIFT(39) "２．ゴミはすてるな！\n"
SHIFT(39) "３．しずかに歩こう！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Rules and Regulations\n"
"1. Don't use sinking lures.\n"
"2. Don't litter.\n"
"3. Walk quietly." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Verhaltensmaßregeln\n"
"1. Keine fremden Köder benutzen.\n"
"2. Keinen Dreck machen.\n"
"3. Ruhe!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Règlement:\n"
"1. Ne pas utiliser d'appâts coulants.\n"
"2. Ne pas utiliser de bombes.\n"
"3. Rester calme." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x409E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "ちょっと！　ちょっと！\n"
"つりざお　持っていったらアカンて！"
BOX_BREAK

SHIFT(27) "やめる時は　カウンターへ\n"
SHIFT(21) "チャンと　かえしに　きてや。\n"
SHIFT(75) "マジで！"
)
,
MSG(
"Hey! Hey!\n"
"You can't take the rod out of\n"
"here!"
BOX_BREAK

"When you quit fishing, return \n"
"the rod to the counter.\n"
"I'm serious!"
)
,
MSG(
"Hey! Hey!\n"
"Du kannst die Angel doch nicht\n"
"einfach mitnehmen!"
BOX_BREAK

"Wenn Du aufhören willst, dann\n"
"bringe sie zum Angelverleih\n"
"zurück! Ganz im Ernst!"
)
,
MSG(
"Holà! Holà!\n"
"Les cannes ne sortent pas d'ici!"
BOX_BREAK

"Ta journée de pêche finie, \n"
"rapporte ta canne au patron!"
)
)

DEFINE_MESSAGE(0x409F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "ヤッバ〜ッ！！！\n"
SHIFT(39) "かなりデカイぜ〜っ！"
BOX_BREAK

SHIFT(39) "画面から　ハミ出てて\n"
SHIFT(33) "よく　わからないけど…\n"
SHIFT(9) COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "くらい　ありそうだ！！"
BOX_BREAK

"もちろん　キープだよね？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "もちろんキープ\n"
    COLOR(DEFAULT) COLOR(ADJUSTABLE) "べつにいらん" COLOR(DEFAULT)
)
,
MSG(
"Oh my gosh!\n"
"This fish is gigantic!!"
BOX_BREAK

"A fish this big can't even fit\n"
"on the screen, and I can't weigh it\n"
"accurately, but it looks like it's\n"
"about " COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "!!"
BOX_BREAK

"You'll want to keep this one,\n"
"right?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Keep it\n"
    "Don't keep it" COLOR(DEFAULT)
)
,
MSG(
"Göttlich!!!\n"
"Dieser Fisch ist ja riesengroß!"
BOX_BREAK

"Der paßt in keine Pfanne!\n"
"Er ist sogar für meine Waage\n"
"zu groß. Er wiegt\n"
"bestimmt " COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "!"
BOX_BREAK

"Du willst ihn bestimmt behalten,\n"
"oder nicht?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Behalten!\n"
    "Nicht behalten!" COLOR(DEFAULT)
)
,
MSG(
"Ohhhh mon Dieuuuuu!!!\n"
"Ce poisson est énooooorme!!"
BOX_BREAK

"Il ne tient même pas à l'écran! \n"
"J'peux pas l'peser... Il va faire \n"
"imploser ma balance!!! \n"
"Il doit faire " COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "!"
BOX_BREAK

"Tu veux garder ce monstre, hein?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Le garder" COLOR(DEFAULT) "\n"
    COLOR(ADJUSTABLE) "Ne pas le garder" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x40A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) "よう　ベイベー！\n"
SHIFT(15) "この　" COLOR(RED) "カカシのボヌール" COLOR(DEFAULT) "さんは\n"
"物おぼえがいいって　有名なんだぜ！"
BOX_BREAK

SHIFT(42) "いい曲が　できたら、\n"
SHIFT(48) "また　吹いてみな！\n"
"こないだの曲は　こうだぜベイベー！"
BOX_BREAK

SHIFT(75) "そ〜れ！" EVENT
)
,
MSG(
"Hey, baby!\n"
"I'm " COLOR(RED) "Bonooru" COLOR(DEFAULT) ", the scarecrow!\n"
"You've probably heard about my\n"
"fantastic memory!"
BOX_BREAK

"If you have a new tune to play,\n"
"blow it!"
BOX_BREAK

"This is the song you tooted last \n"
"time, baby!"
BOX_BREAK

"Hit it!" EVENT
)
,
MSG(
"Hey, Süßer!\n"
"Ich bin " COLOR(RED) "Byron" COLOR(DEFAULT) ", die Vogelscheuche!\n"
"Du hast bestimmt schon von meinem\n"
"tollen Gedächtnis gehört!"
BOX_BREAK

"Wenn Du ein neues Lied weißt -\n"
"raus damit!"
BOX_BREAK

"Dies ist das Lied, das Du beim\n"
"letzten Mal geflötet hast!"
BOX_BREAK

"Los dann!" EVENT
)
,
MSG(
"Hé! P'tit mec!\n"
"Moi c'est " COLOR(RED) "Bonooru" COLOR(DEFAULT) ", l'épouvantail!\n"
"j'ai une mémoire fabuleuse!"
BOX_BREAK

"N'hésite pas à me jouer une\n"
"super mélodie!"
BOX_BREAK

"Voilà la mélodie que tu m'as jouée\n"
"la dernière fois, mec!"
BOX_BREAK

"Chauffe, petit!" EVENT
)
)

DEFINE_MESSAGE(0x40A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(21) "オラ、天才カカシ　" COLOR(RED) "ボヌール" COLOR(DEFAULT) "。\n"
SHIFT(12) "一度　きいたことは　ゼーッタイ\n"
SHIFT(6) "わすれないカカシだぜ、ベイベー！"
)
,
MSG(
"I am " COLOR(RED) "Bonooru" COLOR(DEFAULT) ", the scarecrow\n"
"musical genius!\n"
"I hear a song once, and I never\n"
"forget it, baby!"
)
,
MSG(
"Ich bin " COLOR(RED) "Byron" COLOR(DEFAULT) ", das musikalische\n"
"Vogelscheuchen-Genie! Wenn ich\n"
"ein Lied einmal gehört habe, \n"
"vergesse ich es nie mehr, Süßer!"
)
,
MSG(
"Je suis " COLOR(RED) "Bonooru" COLOR(DEFAULT) " l'épouvan-tail \n"
"musi-cal et gé-nial!\n"
"Moi...J'n'oublie jamais une mélodie!"
)
)

DEFINE_MESSAGE(0x40A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(21) "ピエールを　呼びたい時には\n"
SHIFT(18) "いつもの曲を　ふいてるかい？\n"
SHIFT(3) "近くにいれば　力になるぜ、ベイベ。"
)
,
MSG(
"Play the usual tune to call\n"
"Pierre!\n"
"If he's nearby, he'll come out to\n"
"help you, baby!"
)
,
MSG(
"Spiel das Lied, damit Du Balzac\n"
"rufen kannst!\n"
"Wenn er in der Nähe ist, dann\n"
"hilft er Dir, Süßer!"
)
,
MSG(
"Entonne ta mélodie pour appeler \n"
"mon copain Pierre! \n"
"Il apparaîtra s'il se trouve dans \n"
"l'coin, mec!"
)
)

DEFINE_MESSAGE(0x40A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(81) "おや？\n"
SHIFT(21) "オマエ　いつかの　妖精だな？\n"
SHIFT(18) "ずいぶん　大きくなったな〜。"
BOX_BREAK

SHIFT(27) "え〜っと　オマエの曲は…"
BOX_BREAK

SHIFT(81) "あれ？"
BOX_BREAK

SHIFT(12) "いや　忘れたりなんかしないぜ！\n"
SHIFT(24) "オマエこそ　忘れたんだろ？"
BOX_BREAK

"オカリナ持ってるなら　ふいてみな！\n"
SHIFT(69) "…ベイベ。"
)
,
MSG(
"Hey! Aren't you the fairy buddy I\n"
"met a long time ago?\n"
"Wow, you grew, dude!"
BOX_BREAK

"Well, here's your song..."
BOX_BREAK

"What?"
BOX_BREAK

"No, I never forget!\n"
"You, you're the one who forgot...\n"
"aren't you? If you have an \n"
"Ocarina, play that song, baby!"
)
,
MSG(
"Hey! Bist Du nicht der Typ aus\n"
"dem Kokiri-Wald?\n"
"Mann, bist Du gewachsen!"
BOX_BREAK

"Okay, das ist Dein Lied..."
BOX_BREAK

"Was?"
BOX_BREAK

"Ich hab eben ein Elefantenhirn!\n"
"Du hast eher ein Hirn wie ein Sieb,\n"
"mein Guter! Nimm Deine Okarina\n"
"und flöte das Lied, Süßer!"
)
,
MSG(
"Hé! N'es-tu pas le p'tit mec à la\n"
"fée d'il y a sept ans?\n"
"Wow! T'as bien grandi!"
BOX_BREAK

"Tiens voilà ta mélodie..."
BOX_BREAK

"Quoi?"
BOX_BREAK

"Non, moi j'oublie rien!\n"
"Alors joue ta mélodie pour voir...\n"
"Tu l'as peut-être oubliée, qui sait?\n"
"Joue, mec! Joue!!!"
)
)

DEFINE_MESSAGE(0x40A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(39) "オオッ！　オカリナだ！\n"
SHIFT(9) "そいつで　なんか　ふいてみなよ！\n"
SHIFT(69) "ベイベー！" EVENT
)
,
MSG(
"Whoa! You have an ocarina!\n"
"Hey, why don't you lay a tune\n"
"on me with it, baby?!" EVENT
)
,
MSG(
"Whoa! Du hast eine Okarina!\n"
"Hey, warum flötest Du mir nicht\n"
"was vor, Süßer?!" EVENT
)
,
MSG(
"Whaouuu! Tu as un ocarina!\n"
"Pourquoi ne pas en pousser une \n"
"petite?" EVENT
)
)

DEFINE_MESSAGE(0x40A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(18) "う〜ん…　まずまずの曲だな。\n"
SHIFT(21) "ま、いちおう　おぼえとくぜ！"
BOX_BREAK

SHIFT(72) "８音しか\n"
SHIFT(9) "おぼえられないわけじゃないが、\n"
SHIFT(18) "このへんにしとくぜ、ベイベ。" EVENT
)
,
MSG(
"Well...not bad!\n"
"I will remember it for you \n"
"anyway!"
BOX_BREAK

"I don't mean I can remember only\n"
"eight notes, but let's just cut it\n"
"right there for now, baby!" EVENT
)
,
MSG(
"Naja... Nicht so schlecht!\n"
"Ich werde die Melodie im Kopf\n"
"behalten!"
BOX_BREAK

"Ich kann mir jedoch höchstens\n"
"acht Noten merken.\n"
"Also für heute laß gut sein,\n"
"Süßer." EVENT
)
,
MSG(
"Mmmmm.... Pas mal!\n"
"Je vais l'enregistrer pour toi!"
BOX_BREAK

"A la différence de Pierre, je peux\n"
"mémoriser n'importe quelle chanson,\n"
"même très longue! Mais ne \n"
"retenons que cette partie, OK?" EVENT
)
)

DEFINE_MESSAGE(0x40A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(57) "そんな曲じゃ、\n"
"カカシのハートにゃ　ひびかないぜ、\n"
SHIFT(69) "ベイベ〜！" EVENT
)
,
MSG(
"Play it like that and you'll\n"
"never move this scarecrow's heart,\n"
"baby!" EVENT
)
,
MSG(
"Wenn Du so einen Unsinn flötest,\n"
"gewinnst Du keinen Blumentopf,\n"
"Süßer!" EVENT
)
,
MSG(
"C'est mal! \n"
"Jouer de cette façon ne fera \n"
"jamais bouger mon p'tit corps!!!" EVENT
)
)

DEFINE_MESSAGE(0x40A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) "イッエ〜ィ！！\n"
SHIFT(42) "そうだ　その曲だ！！！\n"
SHIFT(27) "カンシャカンゲキィ〜ッ！"
BOX_BREAK

SHIFT(12) "いや　忘れてたわけじゃないぜ。\n"
SHIFT(3) "でも　お礼したい気分だ、ベイベー！"
BOX_BREAK

SHIFT(69) "・・・・・・・・。\n"
SHIFT(75) "そうだ！"
BOX_BREAK

SHIFT(6) "オラの仲間　ピエールが　どっかで\n"
SHIFT(9) "さすらってるから　呼びたい時に\n"
SHIFT(36) "その曲を　吹いてみな！"
BOX_BREAK

SHIFT(21) "近くにいれば　力になるよう\n"
SHIFT(18) "言っといてやるぜ、ベイベー！" EVENT
)
,
MSG(
"OH YEAHHH!!\n"
"That's it, that's the tune!!\n"
"You rock!! I'm blown away!"
BOX_BREAK

"Oh, no, no! I didn't forget the\n"
"song...I never forget anything!\n"
"But I just feel like rewarding\n"
"you, baby!"
BOX_BREAK

"........\n"
"I have a good idea!"
BOX_BREAK

"My buddy Pierre is wandering\n"
"around, so play that tune when\n"
"you want to call him!"
BOX_BREAK

"I'll tell him to help you if he's\n"
"nearby and hears that song, baby!" EVENT
)
,
MSG(
"OH YEAHHH!!\n"
"Das ist es! Das geht ab!\n"
"Mir haut's den Vogel raus!"
BOX_BREAK

"Ich hab das nie vergessen!\n"
"Ich hab ja kein Stroh im Hirn!\n"
"Ich glaube, Du hast Dir eine\n"
"Belohnung verdient, Süßer!"
BOX_BREAK

"Ich hab eine prima Idee!"
BOX_BREAK

"Mein Bruder Balzac reist in ganz\n"
"Hyrule herum. Wenn Du ihn rufen\n"
"willst, dann spiele dieses Lied!"
BOX_BREAK

"Wenn er in der Nähe ist und es\n"
"hört, dann wird er Dir helfen!" EVENT
)
,
MSG(
"HO YEAHHH!!\n"
"C'est ça! C'est la mélodie!!\n"
"Ca balance!! Je suis soufflé!"
BOX_BREAK

"Je n'ai pas oublié cette mélodie...\n"
"Je n'oublie jamais rien! \n"
"Je vais te récompenser, mec!"
BOX_BREAK

"........\n"
"J'ai une idée!"
BOX_BREAK

"Mon pote Pierre se balade dans le\n"
"coin! Joue cette mélodie et il\n"
"apparaîtra...peut-être!"
BOX_BREAK

"Je vais lui dire de t'aider au \n"
"son de ton ocarina!" EVENT
)
)

DEFINE_MESSAGE(0x40A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "そうそう　そのオカリナだ！\n"
SHIFT(9) "そいつで　あの曲　ふいてみなよ！\n"
SHIFT(69) "ベイベー！" EVENT
)
,
MSG(
"Hey, it's the Ocarina!\n"
"Play that song with it,\n"
"baby!" EVENT
)
,
MSG(
"Hey, die Okarina!\n"
"Spiel ein Lied damit,\n"
"Süßer!" EVENT
)
,
MSG(
"Hé! C'est un ocarina!\n"
"Joue ta chanson, mec!" EVENT
)
)

DEFINE_MESSAGE(0x40A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) SHIFT(3) "ボッチャン　おかりな　オジョ〜ズ。\n"
SHIFT(9) "ウ〜ン！　イイ　めろでぃダ、ゲコ！\n"
SHIFT(21) "ミンナデ　練習スル、ゲ〜コ！"
BOX_BREAK

SHIFT(6) "ミヤゲニ　るぴぃ　持ッテク、ゲコ！\n"
SHIFT(24) "イイ　めろでぃガ　デキタラ\n"
SHIFT(24) "マタ　キカセテ　ケロ　ケロ！" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) "Young lad, you play the Ocarina\n"
"well... Mmmmm...! That melody is \n"
"so fine...ribbit! We all should\n"
"practice it, ribbit!"
BOX_BREAK

"Take Rupees as a souvenir!\n"
"If you come up with another nice \n"
"melody, please drop by and play\n"
"it...Ribbit ribbit!" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) "Mein Freund, Du spielst die\n"
"Okarina gut... Mmmh...!\n"
"Eine nette Melodie... Wir sollten\n"
"sie alle üben!"
BOX_BREAK

"Nimm dies hier als Lohn!\n"
"Wenn Dir mal wieder eine feine\n"
"Weise durch den Kopf schießt,\n"
"komm vorbei und spiel sie vor!" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) "Quel chant délicieux!\n"
"Cette mélodie est très belle...\n"
"Crooâââââ! Nous allons l'apprendre\n"
"par coeur...Croooââââ !"
BOX_BREAK

"Prends donc ces Rubis!\n"
"N'hésite pas à revenir nous\n"
"chanter quelque chose...\n"
"Croooâââ croooâââ!" EVENT
)
)

DEFINE_MESSAGE(0x40AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) SHIFT(75) "ウ〜ン！\n"
SHIFT(27) "イイ　めろでぃダ、ゲ〜コ！"
BOX_BREAK

SHIFT(39) "アメ　アメ　フレ　フレ\n"
SHIFT(60) "ゲ〜コ　ゲコ！"
BOX_BREAK

SHIFT(33) "モットフレ　モットフレ\n"
SHIFT(45) "ゲ〜コ　ゲコ〜ッ！！\n"
SHIFT(39) "サイコ〜デ、ゲ〜コ！！"
BOX_BREAK

"かえるノ　気持チヲ　持ッテク、ゲコ！\n"
SHIFT(9) "ジャ〜　マタ！　オレタチ　ケエル。" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) "Wow, that melody is so cool! \n"
"Ribbit!"
BOX_BREAK

"Siiiiingin' in the raaaaaain,\n"
"Oh what a feeling! \n"
"Rrrrrribbbit!!"
BOX_BREAK

"Please take this as a token of\n"
"our froggish gratitude, ribbit!\n"
"All right. See you, ribbit!" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) "Wow, ein cooler Song,\n"
"Freund!"
BOX_BREAK

"\"Siiiiingin' in the raaaaaain...\"\n"
"Wirklich schön! "
BOX_BREAK

"Steck Dir das hier als Gage\n"
"für den abgefahrenen Gig ein!\n"
"Alles klar, wir sehen uns!" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) "Crooooââââââ!\n"
"Cette mélodie est divine! \n"
"Croooâââââ!"
BOX_BREAK

"Je chaaaaannnte sous la pluie!\n"
"Croooââââ!!"
BOX_BREAK

"La communauté grenouille te dit:\n"
"Merci!!! A bientôt!!\n"
"Crooooâââââ!" EVENT
)
)

DEFINE_MESSAGE(0x40AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) SHIFT(15) "ズラリ　ソロッタ　大物ガエル！\n"
SHIFT(3) "世界ニ　ホコル　５大ての〜るゲコ！"
BOX_BREAK

SHIFT(21) "オレタチヲ　じゃんぷサセテ\n"
SHIFT(9) "頭ノ上ノ　ムシ、食ワセテオクレ！"
BOX_BREAK

SHIFT(36) "ソレデハ　ハジメ〜ッ！" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) "Look at us, we're all huge frogs!!\n"
"We are the world famous Fabulous\n"
"Five Froggish Tenors!!\n"
"Rrrribbit!!"
BOX_BREAK

"Make us jump so we can eat the \n"
"bugs flying above us, ribbit!"
BOX_BREAK

"OK? \n"
"Then, ready, set, go!" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) "Hey, wir sind die Riesenfrösche!\n"
"Die berühmten, unerreichten\n"
"fünf fabulösen Froschtenöre!"
BOX_BREAK

"Bring uns zum Springen, damit wir\n"
"die Fliegen über uns erwischen!"
BOX_BREAK

"Okay?\n"
"Also los dann!" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_1) "Nous sommes les célèbres ténors \n"
"grenouillesques!!! Les stars de \n"
"l'étang! Croooââââ!!"
BOX_BREAK

"Fais-nous sauter pour avaler les\n"
"insectes! Croooââââ!!!"
BOX_BREAK

"D'accord? \n"
"Trois, deux, un, PARTEZ!" EVENT
)
)

DEFINE_MESSAGE(0x40AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) SHIFT(30) "ボッチャン　オジョ〜ズ！\n"
SHIFT(45) "ぱ〜ふぇくとネ〜！\n"
SHIFT(9) "オレタチモ　ハライッパイ、ゲコ！"
BOX_BREAK

SHIFT(3) "かえるノ　感謝ノ品　持ッテカエル？" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) "Young boy, you did grrreat!\n"
"Perrrrrfect!\n"
"We are stuffed, ribbit!"
BOX_BREAK

"Would you take this token of our\n"
"gratitude?" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) "Junge, das war genial!\n"
"Perrrrrfekt!\n"
"Wir platzen gleich!"
BOX_BREAK

"Das hier ist doch genug als Dank,\n"
"oder nicht?" EVENT
)
,
MSG(
SFX(NA_SE_EV_FROG_CRY_0) "Fantastique! Délicieux!\n"
"Un repas bien équilibré!\n"
"Crooooââââââ!"
BOX_BREAK

"Gros crapauds et belles grenouilles\n"
"te disent: Merci! Burp." EVENT
)
)

DEFINE_MESSAGE(0x40AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(51) "おっと、その曲は\n"
SHIFT(24) "おぼえられないぜ、ベイベ。\n"
SHIFT(3) "なぜかは　いえない　オーマイガッ！"
)
,
MSG(
"Oh well, I don't remember that \n"
"song, baby.\n"
"Why? That's what I can't tell ya!\n"
"Good golly!"
)
,
MSG(
"Naja, an dieses Lied kann ich mich\n"
"aber gar nicht erinnern, Süßer!\n"
"Warum? Weiß ich auch nicht!"
)
,
MSG(
"Je ne me souviens pas de cette \n"
"chanson, mec! \n"
"Pourquoi? J'sais pas moi!"
)
)

DEFINE_MESSAGE(0x40AE, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(21) "ただいまの記録　" FISH_INFO "センチ\n"
SHIFT(51) "つったひと　店長" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "The biggest fish ever caught in\n"
"this pond weighed " FISH_INFO " pounds.\n"
"The angler: the pond owner" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Der größte Fang, der in diesem See \n"
"gemacht wurde, wog " FISH_INFO " Pfund.\n"
"Gefangen vom Besitzer des Sees!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Le plus gros poisson pêché dans \n"
"cet étang pèse: " FISH_INFO " livres.\n"
"Pêcheur: le patron " QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x40AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(87) "え？\n"
SHIFT(18) "他のルアーで　つりたいって？\n"
SHIFT(15) "とか　いいながら、ソレなんや？"
BOX_BREAK

SHIFT(45) "ナニ？　おちとった？\n"
SHIFT(9) "いちおう　ルールでは　禁止やで。\n"
SHIFT(30) "いちおうな。　ホンマに…"
)
,
MSG(
"What?\n"
"Do you want to fish with a \n"
"different lure?\n"
"...Hey, what's that?"
BOX_BREAK

"What? You just picked it up?\n"
"Usually, the rules says you can't\n"
"use one of those. I mean, usually. \n"
"But, what the heck..."
)
,
MSG(
"Was?\n"
"Du willst einen anderen\n"
"Köder benutzen?\n"
"Hey, was ist das denn?"
BOX_BREAK

"Das hast Du gerade erwischt?\n"
"Nach den Regeln darfst Du sowas\n"
"ja eigentlich nicht benutzen.\n"
"Aber, naja, was soll's..."
)
,
MSG(
"Quoi? Tu veux pêcher avec un \n"
"autre appât?\n"
"...Hé! C'est quoi ça?"
BOX_BREAK

"Quoi? Tu l'as trouvé? Mon oeil!\n"
"Tu n'as pas le droit d'utiliser ça! \n"
"C'est le règlement!\n"
"Enfin...je passe l'éponge..."
)
)

DEFINE_MESSAGE(0x40B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "うおぉぉぉぉぉぉぉっ！！\n"
SHIFT(15) "これは　デカイ！！　記録更新や！\n"
SHIFT(21) COLOR(RED) FISH_INFO "センチ" COLOR(DEFAULT) "も　あるやんけ！！"
BOX_BREAK

SHIFT(3) "でも、しずむルアーは　ルール違反。\n"
SHIFT(18) "景品は　ナシや。　ハッハッハ！" EVENT
)
,
MSG(
"YAHOOOOOO!\n"
"This is HUGE!! A new record!!\n"
"This...this weighs as much as...\n"
COLOR(RED) FISH_INFO " pounds" COLOR(DEFAULT) "!!"
BOX_BREAK

"Buuuuuuuut! That sinking lure is\n"
"in violation of the rules!\n"
"So, no prize for you.\n"
"Wah ha ha ha ha ha!" EVENT
)
,
MSG(
"WOW!\n"
"Der ist RIESIG! Ein neuer Rekord!\n"
"Der... Der wiegt ganze...\n"
COLOR(RED) FISH_INFO " Pfund" COLOR(DEFAULT) "!"
BOX_BREAK

"Aaaaaaber! Der fremde Köder war\n"
"ein Verstoß gegen die Regeln!\n"
"Also gibt es auch keinen Preis!\n"
"Hehe!" EVENT
)
,
MSG(
"WHOOOOOAAAAAAOOOO!\n"
"Il est E-N-O-R-M-E!!! \n"
"Tu as pulvérisé le record!!! \n"
"Il pèse " COLOR(RED) FISH_INFO " livres" COLOR(DEFAULT) "!!"
BOX_BREAK

"Maaaaaaais...tu n'as pas utilisé un\n"
"appât réglementaire!\n"
"Donc...pas de prix pour toi!\n"
"Hé hé hé hé!!! P'tit tricheur!" EVENT
)
)

DEFINE_MESSAGE(0x40B1, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(21) "ただいまの記録　" FISH_INFO "センチ\n"
SHIFT(30) "つったひと　" NAME "\n"
SHIFT(48) "しずむルアー使用" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "The biggest fish ever caught in\n"
"this pond weighed " FISH_INFO " pounds.\n"
"The angler: " NAME "\n"
"(NOTE: With illegal sinking lure.)" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Größter Fang: " FISH_INFO " Pfund.\n"
"Gefangen von: " NAME "\n"
"(HINWEIS: Disqualifiziert wegen\n"
"Benutzung eines fremden Köders!)" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Le plus gros poisson pêché dans\n"
"cet étang pèse: " FISH_INFO " livres.\n"
"Pêcheur: " NAME "\n"
"(NOTE: appât non-réglementaire!)" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x40B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "アレ？　なかなか　スナオやんか。\n"
SHIFT(15) "でも　みんなには　ヒミツやで、\n"
SHIFT(66) "ほんまに…" EVENT
)
,
MSG(
"You're a kind-hearted kid!\n"
"But don't tell anyone about this.\n"
"Seriously!" EVENT
)
,
MSG(
"Du bist ein netter Junge!\n"
"Aber erzähl es nicht weiter.\n"
"Ehrenwort?" EVENT
)
,
MSG(
"T'es un bon p'tit gars!\n"
"Mais ne dis pas à tout le monde \n"
"que j'ai plus un poil sur l'caillou!" EVENT
)
)

DEFINE_MESSAGE(0x40B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "ワ〜ッ！！！！"
BOX_BREAK

SHIFT(54) "なんでやネン！！\n"
SHIFT(30) "どういうつもりやネン！！"
BOX_BREAK

SHIFT(30) "タダでは　すませヘンで！\n"
SHIFT(39) "罰金　" COLOR(RED) "５０ルピー" COLOR(DEFAULT) "や！！" EVENT
)
,
MSG(
"WHAAAAAT?!?"
BOX_BREAK

"Why are you doing this to me?\n"
"What are you thinking?"
BOX_BREAK

"I'm not going to let you get off\n"
"that easy! You have to pay me a \n"
COLOR(RED) "50-Rupee " COLOR(DEFAULT) "fine!\n"
"Seriously!" EVENT
)
,
MSG(
"WAAAS!?"
BOX_BREAK

"Warum machst Du das mit mir?\n"
"Was denkst Du Dir eigentlich?"
BOX_BREAK

"So leicht kommst Du nicht davon!\n"
"Du zahlst Strafe, und zwar \n"
COLOR(RED) "50 Rubine" COLOR(DEFAULT) "!\n"
"Garantiert!" EVENT
)
,
MSG(
"QUOIIIIII?!?"
BOX_BREAK

"Pourquoi tant de haine?\n"
"T'es un punk, toi?"
BOX_BREAK

"Mais j'vais pas m'laisser faire!\n"
"Paie-moi " COLOR(RED) "50 Rubis" COLOR(DEFAULT) "!\n"
"Non mais des fois!" EVENT
)
)
