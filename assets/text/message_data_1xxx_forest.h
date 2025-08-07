DEFINE_MESSAGE(0x1000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) COLOR(LIGHTBLUE) "やっと　目が　さめたのね？\n"
COLOR(DEFAULT) SHIFT(36) COLOR(LIGHTBLUE) "ワタシ、妖精の" COLOR(RED) "ナビィ" COLOR(LIGHTBLUE) "！" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE SHIFT(27) COLOR(LIGHTBLUE) "デクの樹サマの　ご命令で\n"
COLOR(DEFAULT) SHIFT(45) COLOR(LIGHTBLUE) "これから　ワタシが\n"
COLOR(DEFAULT) SHIFT(18) COLOR(LIGHTBLUE) "アナタの" COLOR(RED) "相棒" COLOR(LIGHTBLUE) "よ、ヨロシクね。" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "You finally woke up!\n"
"I'm " COLOR(RED) "Navi " COLOR(LIGHTBLUE) "the fairy!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "The Great Deku Tree asked\n"
"me to be your " COLOR(RED) "partner " COLOR(LIGHTBLUE) "from\n"
"now on! Nice to meet you!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Na endlich bist Du aufgewacht.\n"
"Ich bin " COLOR(RED) "Navi" COLOR(LIGHTBLUE) "!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Der Deku-Baum bat mich, Dich\n"
"ab jetzt zu " COLOR(RED) "begleiten" COLOR(LIGHTBLUE) ".\n"
"Schön, Dich kennenzulernen!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Haa... Enfin debout!\n"
"Moi c'est " COLOR(RED) "Navi" COLOR(LIGHTBLUE) " la fée!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Le très vénérable Arbre Mojo m'a\n"
"désignée pour être ta " COLOR(RED) "partenaire " COLOR(LIGHTBLUE) "!\n"
"J'en suis très honorée!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) QUICKTEXT_ENABLE "ヤッホー、" NAME "！" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE SHIFT(18) "Yahoo! Hi, " NAME "!"
)
,
MSG(
UNSKIPPABLE SHIFT(16) "Guten Morgen, " NAME "!"
)
,
MSG(
UNSKIPPABLE SHIFT(20) "Hé! Salut, " NAME "!"
)
)

DEFINE_MESSAGE(0x1002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(48) "わぁ〜っ、妖精ね！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "やっと、\n"
SHIFT(15) NAME "の　とこにも\n"
SHIFT(15) "妖精が　やってきたんだ！" TEXTID(0x100F)
)
,
MSG(
UNSKIPPABLE "Wow! A fairy!!"
BOX_BREAK

UNSKIPPABLE "Finally, a fairy came to you,\n"
NAME "!" TEXTID(0x100F)
)
,
MSG(
UNSKIPPABLE "Hey! Eine Fee!"
BOX_BREAK

UNSKIPPABLE "Endlich hast Du auch eine Fee,\n"
NAME "!" TEXTID(0x100F)
)
,
MSG(
UNSKIPPABLE "Whoaaa! Une fée!!"
BOX_BREAK

UNSKIPPABLE "Enfin tu as reçu une fée,\n"
NAME "!" TEXTID(0x100F)
)
)

DEFINE_MESSAGE(0x1003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "アタシ、ここで　待ってるから\n"
SHIFT(30) "デクの樹サマのところへ\n"
SHIFT(36) "はやく　行ってあげて！"
)
,
MSG(
"I'll wait for you here.\n"
"Get going! Go see the Great \n"
"Deku Tree!"
)
,
MSG(
"Ich werde hier auf Dich warten.\n"
"Geh nun, denn der Deku-Baum\n"
"hat Dich gerufen!"
)
,
MSG(
"Je vais t'attendre ici!\n"
"Va voir le vénérable Arbre Mojo!"
)
)

DEFINE_MESSAGE(0x1004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "石の前で　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "…\n"
SHIFT(57) "石の前で　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "…"
BOX_BREAK

SHIFT(21) COLOR(RED) "ミド" COLOR(DEFAULT) "のアニキも　ひでぇや…\n"
SHIFT(27) "じぶんちの　まわりの石を\n"
SHIFT(3) "オイラに　そうじさせる　なんてサ。"
)
,
MSG(
COLOR(BLUE) "[A] " COLOR(DEFAULT) "by the stone, pick it up!\n"
COLOR(BLUE) "[A] " COLOR(DEFAULT) "by the stone, pick it up!"
BOX_BREAK

"Mean old" COLOR(RED) " Mido" COLOR(DEFAULT) "...he made me pick \n"
"up the rocks in front of his house."
)
,
MSG(
"Mit" COLOR(BLUE) " [A] " COLOR(DEFAULT) "kannst Du Dinge heben!"
BOX_BREAK

"Dieser arrogante" COLOR(RED) " Mido" COLOR(DEFAULT) "... Er will,\n"
"daß die Steine hier verschwinden.\n"
"Und jetzt soll ich für ihn die\n"
"Arbeit machen!"
)
,
MSG(
COLOR(BLUE) "[A] " COLOR(DEFAULT) "devant une pierre, et han! \n"
"Je la soulève.\n"
COLOR(BLUE) "[A] " COLOR(DEFAULT) "devant une pierre, et yaa!\n"
"Je la soulève."
BOX_BREAK

"Pfouuh, cette peste de " COLOR(RED) "Mido" COLOR(DEFAULT) "...Il \n"
"m'a obligé à ramasser toutes les \n"
"pierres devant chez lui."
)
)

DEFINE_MESSAGE(0x1005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) "アラッ、" COLOR(LIGHTBLUE) "妖精" COLOR(DEFAULT) "！？\n"
SHIFT(6) "よかったわネ、" NAME "。"
BOX_BREAK

UNSKIPPABLE SHIFT(87) "え？"
BOX_BREAK

UNSKIPPABLE SHIFT(24) COLOR(RED) "デクの樹サマ" COLOR(DEFAULT) "の　ご用なの？\n"
SHIFT(45) "それって　すっごく\n"
SHIFT(36) "「めーよ」な　コトよネ！"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "だって　デクの樹サマは\n"
SHIFT(3) "アタシたち　コキリ族の　生みの親。\n"
SHIFT(39) "森の守り神ですもの！"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "なんか　ステキなもの\n"
SHIFT(24) "もらえたりして…　ウフフ！"
)
,
MSG(
UNSKIPPABLE "Oh, you have a " COLOR(LIGHTBLUE) "fairy" COLOR(DEFAULT) " now?!\n"
"That's great, " NAME "!"
BOX_BREAK

UNSKIPPABLE "What?"
BOX_BREAK

UNSKIPPABLE "You've been called by the\n"
COLOR(RED) "Great Deku Tree" COLOR(DEFAULT) "? What an honor!"
BOX_BREAK

UNSKIPPABLE "He may give you a special gift!\n"
"Tee hee!"
BOX_BREAK

UNSKIPPABLE "That's because the Great Deku \n"
"Tree is our father, the forest\n"
"guardian, and he gave life to all \n"
"of us Kokiri!"
)
,
MSG(
UNSKIPPABLE "Oh, Du besitzt endlich eine " COLOR(LIGHTBLUE) "Fee" COLOR(DEFAULT) "?!\n"
"Das ist cool, " NAME "!"
BOX_BREAK

UNSKIPPABLE "Was?"
BOX_BREAK

UNSKIPPABLE "Der " COLOR(RED) "Deku-Baum" COLOR(DEFAULT) " hat Dich zu sich\n"
"gerufen? Das ist eine große Ehre!"
BOX_BREAK

UNSKIPPABLE "Es kommt selten vor, daß der\n"
"Deku-Baum jemanden zu sich ruft."
BOX_BREAK

UNSKIPPABLE "Er ist der Hüter der Wälder und\n"
"hat uns Kokiri erschaffen!"
)
,
MSG(
UNSKIPPABLE "Oh, tu as une " COLOR(LIGHTBLUE) "fée" COLOR(DEFAULT) " maintenant?!\n"
"C'est cool, " NAME "!"
BOX_BREAK

UNSKIPPABLE "Comment?"
BOX_BREAK

UNSKIPPABLE "Tu as été convoqué par le \n"
COLOR(RED) "vénérable Arbre Mojo" COLOR(DEFAULT) "?\n"
"Quel honneur!"
BOX_BREAK

UNSKIPPABLE "Il va peut-être te donner un joli \n"
"cadeau, hi hi!"
BOX_BREAK

UNSKIPPABLE "Il est notre père à tous, tu sais!\n"
"Il protège la forêt de sa toute\n"
"puissance! Il a donné vie à tous\n"
"les Kokiris!"
)
)

DEFINE_MESSAGE(0x1006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "この森の　生き物は　みんな\n"
SHIFT(9) COLOR(RED) "デクの樹サマ" COLOR(DEFAULT) "から　生まれたって\n"
SHIFT(54) "ホントかしら…"
)
,
MSG(
"I wonder if the " COLOR(RED) "Great Deku Tree " COLOR(DEFAULT) "\n"
"gave life to everything in the\n"
"forest, I mean in addition to us \n"
"Kokiri?"
)
,
MSG(
"Ich frage mich, ob der " COLOR(RED) "Deku-Baum " COLOR(DEFAULT) "\n"
"der Schöpfer allen Lebens ist..."
)
,
MSG(
"Je me demande bien si le \n"
COLOR(RED) "vénérable Arbre Mojo " COLOR(DEFAULT) "a créé\n"
"tous les êtres de la forêt."
)
)

DEFINE_MESSAGE(0x1007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "オイラと　れんしゅうしようゼ〜！"
BOX_BREAK

SHIFT(21) COLOR(LIGHTBLUE) "Ｚ注目" COLOR(DEFAULT) "しながら　移動中に" COLOR(BLUE) "[A]\n"
COLOR(DEFAULT) SHIFT(9) "左右で" COLOR(RED) "横っとび" COLOR(DEFAULT) "　後ろで" COLOR(RED) "バック宙\n"
COLOR(DEFAULT) SHIFT(18) "前で　無敵の" COLOR(RED) "回転アタック" COLOR(DEFAULT) "だ！"
BOX_BREAK

SHIFT(6) COLOR(LIGHTBLUE) "Ｚ注目" COLOR(DEFAULT) "中　剣（けん）を　ぬいてれば\n"
SHIFT(39) COLOR(BLUE) "[A]" COLOR(DEFAULT) "で　" COLOR(RED) "ジャンプ斬り" COLOR(DEFAULT) "！！\n"
SHIFT(33) "攻撃力は　２倍だゼ〜！！"
BOX_BREAK

SHIFT(33) "オイラの　となりの" COLOR(RED) "石" COLOR(DEFAULT) "は\n"
SHIFT(9) COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "で注目できるから　石を相手に\n"
SHIFT(33) "れんしゅうしようゼ〜！"
)
,
MSG(
"Hey, let's work on some moves!"
BOX_BREAK

"To " COLOR(RED) "jump sideways " COLOR(DEFAULT) "while " COLOR(LIGHTBLUE) "[Z] \n"
"Targeting" COLOR(DEFAULT) ", press " COLOR(BLUE) "[A] " COLOR(DEFAULT) "as you move\n"
"right or left."
BOX_BREAK

"To do a " COLOR(RED) "backflip" COLOR(DEFAULT) " while " COLOR(LIGHTBLUE) "[Z] \n"
"Targeting" COLOR(DEFAULT) ", press " COLOR(BLUE) "[A] " COLOR(DEFAULT) "as you move\n"
"backwards."
BOX_BREAK

"To do a " COLOR(RED) "roll attack" COLOR(DEFAULT) " while " COLOR(LIGHTBLUE) "[Z] \n"
"Targeting" COLOR(DEFAULT) ", press " COLOR(BLUE) "[A] " COLOR(DEFAULT) "as you move\n"
"forward. While you roll, you can\n"
"avoid damage."
BOX_BREAK

"If you have your sword ready while\n"
COLOR(LIGHTBLUE) "[Z] Targeting" COLOR(DEFAULT) ", you can do a " COLOR(RED) "jump \n"
"attack" COLOR(DEFAULT) " by pressing " COLOR(BLUE) "[A]" COLOR(DEFAULT) "! A jump \n"
"attack does double damage!"
BOX_BREAK

"You can use " COLOR(LIGHTBLUE) "[Z] Targeting " COLOR(DEFAULT) "on the\n"
COLOR(RED) "stone" COLOR(DEFAULT) " next to me, so let's \n"
"practice!"
)
,
MSG(
"Laß uns an Deinen Kampftechniken\n"
"arbeiten!"
BOX_BREAK

"Hältst Du " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " gedrückt und\n"
"läufst dabei nach rechts oder\n"
"links, kannst Du mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) " " COLOR(RED) "Sprünge\n"
"zur Seite " COLOR(DEFAULT) "ausführen."
BOX_BREAK

"Hältst Du " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " gedrückt und läufst\n"
"rückwärts, kannst Du mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) "\n"
"einen " COLOR(RED) "Rückwärtssalto" COLOR(DEFAULT) " ausführen."
BOX_BREAK

"Eine " COLOR(RED) "Rollattacke" COLOR(DEFAULT) " führst Du aus,\n"
"indem Du " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " gedrückt hältst und\n"
"dann " COLOR(BLUE) "[A]" COLOR(DEFAULT) " betätigst. Während der\n"
"Attacke bist Du nicht verwundbar."
BOX_BREAK

"Hast Du Dein Schwert in der\n"
"Hand und hältst " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " gedrückt, \n"
"kannst Du mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) " eine effektive\n"
COLOR(RED) "Sprungattacke" COLOR(DEFAULT) " ausführen."
BOX_BREAK

"Die" COLOR(LIGHTBLUE) " Zielerfassung mit [Z]" COLOR(DEFAULT) "\n"
"kannst Du an diesem " COLOR(RED) "Stein" COLOR(DEFAULT) " \n"
"ausprobieren!"
)
,
MSG(
"Bon, répétons quelques \n"
"mouvements!"
BOX_BREAK

"Cible quelque chose avec la \n"
COLOR(LIGHTBLUE) "Visée [Z]" COLOR(DEFAULT) " et appuie sur " COLOR(BLUE) "[A]" COLOR(DEFAULT) " \n"
"en allant à droite ou à gauche \n"
"pour " COLOR(RED) "bondir sur les côtés" COLOR(DEFAULT) "."
BOX_BREAK

"Cible avec la " COLOR(LIGHTBLUE) "Visée [Z]" COLOR(DEFAULT) ", appuie\n"
"sur " COLOR(BLUE) "[A] " COLOR(DEFAULT) "tout en pointant vers\n"
"l'arrière pour faire un " COLOR(RED) "saut \n"
"périlleux arrière" COLOR(DEFAULT) "."
BOX_BREAK

"Pour faire une " COLOR(RED) "roulade" COLOR(DEFAULT) ", cible\n"
"avec la " COLOR(LIGHTBLUE) "Visée [Z]" COLOR(DEFAULT) " et appuie \n"
"sur " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Dégaine ton épée et utilise la \n"
COLOR(LIGHTBLUE) "Visée [Z]" COLOR(DEFAULT) " pour effectuer une \n"
COLOR(RED) "Attaque sautée" COLOR(DEFAULT) " avec " COLOR(BLUE) "[A]" COLOR(DEFAULT) "!\n"
"Elle fait deux fois plus mal!"
BOX_BREAK

"Entraîne-toi à la " COLOR(LIGHTBLUE) "Visée [Z]" COLOR(DEFAULT) " sur\n"
"ces pierres, et essaie tous ces \n"
"nouveaux mouvements!"
)
)

DEFINE_MESSAGE(0x1008, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(48) "森の　外に　出ちゃ\n"
SHIFT(51) "イケナイんだゾ！" TEXTID(0x1009)
)
,
MSG(
UNSKIPPABLE "You're not allowed to leave the \n"
"forest!" TEXTID(0x1009)
)
,
MSG(
UNSKIPPABLE "Du hast nicht die Erlaubnis, das\n"
"Dorf zu verlassen!" TEXTID(0x1009)
)
,
MSG(
UNSKIPPABLE "Tu n'es pas autorisé à quitter la \n"
"forêt, petit Kokiri!" TEXTID(0x1009)
)
)

DEFINE_MESSAGE(0x1009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "コキリ族は\n"
"この森から　出たら　シんじゃうって\n"
SHIFT(18) "デクの樹サマも　言ってたゾ！"
)
,
MSG(
"The Great Deku Tree said that if\n"
"a Kokiri leaves the woods, he or \n"
"she will die!"
)
,
MSG(
"Der Deku-Baum sprach, daß jeder\n"
"Kokiri, der das Dorf verläßt, \n"
"zum Sterben verdammt ist!"
)
,
MSG(
"Le très vénérable Arbre Mojo dit\n"
"qu'un Kokiri hors de la forêt est\n"
"un Kokiri mort!"
)
)

DEFINE_MESSAGE(0x100A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(39) "オイラ、サリアんちの\n"
SHIFT(24) "草かり　やらされてんだヨ。\n"
SHIFT(6) COLOR(RED) "ミド" COLOR(DEFAULT) "のアニキの　命令なんだ〜っ！"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "アニキってば\n"
SHIFT(3) "サリアに　気に入られたいからって\n"
SHIFT(21) "自分で　引き受けたんだぜ…" TEXTID(0x100B)
)
,
MSG(
UNSKIPPABLE "That meanie," COLOR(RED) " Mido" COLOR(DEFAULT) ", made me cut \n"
"the grass at Saria's house."
BOX_BREAK

UNSKIPPABLE "Mido told Saria he would do it so\n"
"she would like him, but I'm the one\n"
"doing all the work!" TEXTID(0x100B)
)
,
MSG(
UNSKIPPABLE "Dieser großmäulige" COLOR(RED) " Mido" COLOR(DEFAULT) "!\n"
"Ich muß für ihn das Unkraut vor\n"
"Salias Haus entfernen."
BOX_BREAK

UNSKIPPABLE "Er hat Salia erzählt, daß ER das\n"
"für sie erledigen würde. Und nun\n"
"muß ich es tun!" TEXTID(0x100B)
)
,
MSG(
UNSKIPPABLE "Cette peste de " COLOR(RED) "Mido" COLOR(DEFAULT) " m'a obligé à\n"
"tondre la pelouse devant la maison\n"
"de Saria."
BOX_BREAK

UNSKIPPABLE "Mido drague Saria en lui rendant \n"
"service! Mais au bout du compte \n"
"c'est moi qui me tape le sale \n"
"boulot à sa place!" TEXTID(0x100B)
)
)

DEFINE_MESSAGE(0x100B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "オマエ　" COLOR(RED) "サリア" COLOR(DEFAULT) "と　仲いいんだから\n"
SHIFT(48) "草かり　手伝えよ！\n"
SHIFT(3) "でてきたモノ　みんな　ヤルからサ。"
)
,
MSG(
"You and " COLOR(RED) "Saria" COLOR(DEFAULT) " are close friends,\n"
"so will you help me cut the \n"
"grass?"
BOX_BREAK

"I'll let you keep anything that \n"
"you find while cutting it."
)
,
MSG(
COLOR(RED) "Salia" COLOR(DEFAULT) " und Du, Ihr seid doch gute\n"
"Freunde. Hilfst Du mir bei meiner \n"
"Arbeit?"
BOX_BREAK

"Du darfst auch alles behalten, was \n"
"Du findest."
)
,
MSG(
"Toi et " COLOR(RED) "Saria" COLOR(DEFAULT) ", vous êtes plutôt \n"
"copains, non? Alors pourquoi tu \n"
"m'aiderais pas un peu à couper \n"
"cette herbe!"
BOX_BREAK

"Tu n'as qu'à garder tout ce que tu \n"
"y trouveras."
)
)

DEFINE_MESSAGE(0x100C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(66) "そう　そう！\n"
SHIFT(36) "そうやって　使うのヨ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "やっと　アナタにも\n"
SHIFT(12) COLOR(LIGHTBLUE) "妖精" COLOR(DEFAULT) "が　やってきたってわけネ！"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "じゃ　妖精を使って\n"
SHIFT(30) "話す方法　おしえたげる。" TEXTID(0x100D)
)
,
MSG(
UNSKIPPABLE "Yes, yes! That's how you use a\n"
COLOR(LIGHTBLUE) "fairy" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "It's so great that you finally have\n"
"a fairy" COLOR(RED) " " COLOR(DEFAULT) "partner!"
BOX_BREAK

UNSKIPPABLE "I'll teach you how to talk to \n"
"people using your fairy!" TEXTID(0x100D)
)
,
MSG(
UNSKIPPABLE "Gut gemacht! Dies war mit Hilfe\n"
"Deiner " COLOR(LIGHTBLUE) "Fee" COLOR(DEFAULT) " möglich!"
BOX_BREAK

UNSKIPPABLE "Wie schön, daß auch Du endlich\n"
"eine ständige Begleiterin hast!"
BOX_BREAK

UNSKIPPABLE "Ich werde Dich lehren, ihre\n"
"Kräfte richtig zu nutzen!" TEXTID(0x100D)
)
,
MSG(
UNSKIPPABLE "Bravo! \n"
"Voilà comment s'utilise une " COLOR(LIGHTBLUE) "fée" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "C'est vraiment chouette d'en avoir\n"
"une, hein?"
BOX_BREAK

UNSKIPPABLE "Je vais t'apprendre à parler aux \n"
"gens avec ta fée!" TEXTID(0x100D)
)
)

DEFINE_MESSAGE(0x100D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(21) "妖精は　人や　物に　向かって\n"
SHIFT(6) "飛んで行くから　" COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "を押してみて！\n"
SHIFT(12) "その方向を　「" COLOR(RED) "注目" COLOR(DEFAULT) "」できるわヨ。"
BOX_BREAK

SHIFT(42) "「" COLOR(LIGHTBLUE) "Ｚ注目" COLOR(DEFAULT) "」を　使えば、\n"
"こんなに　はなれてても　話せるし…"
BOX_BREAK

SHIFT(15) "「注目」する相手が　いなくても\n"
SHIFT(21) COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "を押せば　" COLOR(RED) "前を向ける" COLOR(DEFAULT) "から\n"
SHIFT(63) "やってみて！"
)
,
MSG(
"When a fairy flies near a person \n"
"or thing, press " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " to " COLOR(RED) "look " COLOR(DEFAULT) "in that\n"
"direction."
BOX_BREAK

"If you use " COLOR(LIGHTBLUE) "[Z] Targeting" COLOR(DEFAULT) ", you can \n"
"talk to people from a distance, \n"
"like we're doing now."
BOX_BREAK

"When you have nothing that you\n"
"can target, you can press " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " just\n"
"to " COLOR(RED) "look forward" COLOR(DEFAULT) ".\n"
"Try it!"
)
,
MSG(
"Fliegt Deine Fee zu einem Objekt  \n"
"oder einer Person, drücke " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) ", um \n"
COLOR(RED) "dorthin zu schauen" COLOR(DEFAULT) "."
BOX_BREAK

"Drückst Du " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " und dann " COLOR(BLUE) "[A]" COLOR(DEFAULT) ",\n"
"kannst Du mit weiter entfernten\n"
"Personen sprechen."
BOX_BREAK

"Wenn Du kein Ziel erfaßt,\n"
"kannst Du " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " nutzen, um\n"
COLOR(RED) "geradeaus" COLOR(DEFAULT) " " COLOR(RED) "zu schauen" COLOR(DEFAULT) ".\n"
"Versuch es!"
)
,
MSG(
"Quand une fée vole autour de\n"
"quelqu'un, utilise " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " pour " COLOR(RED) "regarder" COLOR(DEFAULT) " \n"
"dans sa direction."
BOX_BREAK

"Utilise la " COLOR(LIGHTBLUE) "Visée [Z]" COLOR(DEFAULT) " pour parler \n"
"aux gens de loin, un peu comme\n"
"nous sommes en train de faire."
BOX_BREAK

"Et si tu n'as rien à cibler, appuie \n"
"sur " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " pour " COLOR(RED) "regarder" COLOR(DEFAULT) " devant toi."
)
)

DEFINE_MESSAGE(0x100E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(81) "マァ！\n"
SHIFT(33) "やっと　" COLOR(LIGHTBLUE) "妖精" COLOR(DEFAULT) "が　きたの？"
BOX_BREAK

UNSKIPPABLE SHIFT(57) "じゃ、いろいろ\n"
SHIFT(21) "「れんしゅう」しなくちゃネ。" TEXTID(0x1019)
)
,
MSG(
UNSKIPPABLE "Oh, a " COLOR(LIGHTBLUE) "fairy " COLOR(DEFAULT) "finally came to you!"
BOX_BREAK

UNSKIPPABLE "Now you have a lot to learn!" TEXTID(0x1019)
)
,
MSG(
UNSKIPPABLE "Ah, Du besitzt endlich eine " COLOR(LIGHTBLUE) "Fee" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Nun gibt es viel zu lernen!" TEXTID(0x1019)
)
,
MSG(
UNSKIPPABLE "Ah! Enfin tu as eu ta " COLOR(LIGHTBLUE) "fée" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Mais tu as encore beaucoup à \n"
"apprendre!" TEXTID(0x1019)
)
)

DEFINE_MESSAGE(0x100F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(63) "よかったネ！"
BOX_BREAK

SHIFT(39) "なんだか　サリアまで\n"
SHIFT(39) "うれしくなっちゃう！"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "これで　" NAME "も\n"
SHIFT(9) "りっぱな　コキリ族の　仲間よネ！" TEXTID(0x1010)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) "Wow! " QUICKTEXT_ENABLE "That's great news!" QUICKTEXT_DISABLE "\n"
"I'm so happy for you!"
BOX_BREAK

UNSKIPPABLE "Now you're a true Kokiri,\n"
NAME "!" TEXTID(0x1010)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) "Wow! " QUICKTEXT_ENABLE "Das ist cool!" QUICKTEXT_DISABLE "\n"
"Ich freue mich für Dich!"
BOX_BREAK

UNSKIPPABLE "Nun bist Du ein wahrer Kokiri,\n"
NAME "!" TEXTID(0x1010)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) "Yipii! " QUICKTEXT_ENABLE "Quelle bonne nouvelle!" QUICKTEXT_DISABLE "\n"
"Je suis si heureuse!"
BOX_BREAK

UNSKIPPABLE "Tu es maintenant un vrai Kokiri,\n"
NAME "!" TEXTID(0x1010)
)
)

DEFINE_MESSAGE(0x1010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(87) "え？\n"
SHIFT(24) "デクの樹サマの　ご用なの？"
BOX_BREAK

UNSKIPPABLE SHIFT(54) "スゴイじゃない！\n"
SHIFT(54) "デクの樹サマと\n"
SHIFT(36) "お話し　できるなんて！" TEXTID(0x1003)
)
,
MSG(
UNSKIPPABLE "Is that right? \n"
"The Great Deku Tree has \n"
"summoned you?"
BOX_BREAK

UNSKIPPABLE "It's quite an honor to talk to the\n"
"Great Deku Tree!" TEXTID(0x1003)
)
,
MSG(
UNSKIPPABLE "Ist es wirklich wahr? \n"
"Der Deku-Baum möchte, daß Du\n"
"zu ihm kommst?"
BOX_BREAK

UNSKIPPABLE "Es ist eine große Ehre, vor den\n"
"Deku-Baum treten zu dürfen!" TEXTID(0x1003)
)
,
MSG(
UNSKIPPABLE "Alors, c'est vrai? \n"
"Le très vénérable Arbre Mojo t'a \n"
"convoqué?"
BOX_BREAK

UNSKIPPABLE "C'est un véritable honneur d'être\n"
"convoqué par le vénérable Arbre\n"
"Mojo, tu sais!" TEXTID(0x1003)
)
)

DEFINE_MESSAGE(0x1011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) "行っちゃうのね…"
)
,
MSG(
UNSKIPPABLE "Oh, you're leaving..."
)
,
MSG(
UNSKIPPABLE "Oh, Du verläßt uns?"
)
,
MSG(
UNSKIPPABLE SHIFT(28) "Oh...alors tu pars...déjà..."
)
)

DEFINE_MESSAGE(0x1012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "でも　そんなの　どうでも　いい！\n"
SHIFT(15) "アタシたち　ず〜っと　友だち！\n"
SHIFT(63) "そうでしょ？"
)
,
MSG(
UNSKIPPABLE "But that's OK, because we'll be\n"
"friends forever...\n"
"won't we?"
)
,
MSG(
UNSKIPPABLE "Sicher hast Du Deine Gründe.\n"
"Versprich mir, daß wir immer \n"
"Freunde bleiben, ja?"
)
,
MSG(
UNSKIPPABLE "Ce n'est pas grave...\n"
"Nous serons amis pour toujours...\n"
"N'est-ce pas?"
)
)

DEFINE_MESSAGE(0x1013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "この　オカリナ…　あげる！\n"
SHIFT(42) "たいせつに　してネ。"
)
,
MSG(
UNSKIPPABLE "I want you to have this Ocarina...\n"
"Please take good care of it."
)
,
MSG(
UNSKIPPABLE "Ich möchte, daß Du meine\n"
"Okarina an Dich nimmst."
)
,
MSG(
UNSKIPPABLE "Je veux que tu gardes cet \n"
"ocarina...\n"
"Prends-en grand soin!"
)
)

DEFINE_MESSAGE(0x1014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(48) "オカリナ　ふいて、\n"
SHIFT(12) "思い出したら　かえってきてネ。"
)
,
MSG(
"When you play my Ocarina, I hope\n"
"you will think of me and come\n"
"back to the forest to visit."
)
,
MSG(
"Sie bedeutet mir sehr viel...\n"
"Wann immer Du sie spielst, sollst\n"
"Du an mich denken..."
)
,
MSG(
"Pense à moi en jouant de l'ocarina.\n"
"Et un jour peut-être...\n"
"Tu reviendras me voir..."
)
)

DEFINE_MESSAGE(0x1015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(78) "おぉ…\n"
SHIFT(39) "ナビィ…　戻ったか…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "そして　" NAME "…\n"
SHIFT(21) "よく　来てくれた…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "森の精霊である…　この　ワシ、\n"
SHIFT(9) COLOR(RED) "デクの樹" COLOR(DEFAULT) "の話を　聞いておくれ…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "お前は　最近、毎日のように\n"
SHIFT(6) "恐ろしい夢を　見ているはずじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "その夢は、今　この世界に　忍び寄る\n"
SHIFT(33) "邪悪な気配　そのもの…\n"
SHIFT(15) "お前は、それを　感じたのじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) NAME "よ…\n"
SHIFT(30) "今、ここで　お前の勇気を\n"
SHIFT(30) "ためさせてほしい。" TEXTID(0x1016)
)
,
MSG(
UNSKIPPABLE "Oh... Navi...\n"
"Thou hast returned..."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"Welcome..."
BOX_BREAK

UNSKIPPABLE "Listen carefully to what I, the\n"
COLOR(RED) "Deku Tree" COLOR(DEFAULT) ", am about to tell thee..."
BOX_BREAK

UNSKIPPABLE "Thy slumber these past moons \n"
"must have been restless, and\n"
"full of nightmares..."
BOX_BREAK

UNSKIPPABLE "As the servants of evil gain\n"
"strength, a vile climate pervades\n"
"the land and causes nightmares\n"
"to those sensitive to it..."
BOX_BREAK

UNSKIPPABLE "Verily, thou hast felt it..."
BOX_BREAK

UNSKIPPABLE NAME "... \n"
"The time has come to test thy\n"
"courage..." TEXTID(0x1016)
)
,
MSG(
UNSKIPPABLE "Oh... Navi...\n"
"Du hast Deinen Auftrag\n"
"also erfüllt!"
BOX_BREAK

UNSKIPPABLE "Sei willkommen, " NAME "!"
BOX_BREAK

UNSKIPPABLE "Höre nun die Worte, die ich,\n"
"der" COLOR(RED) " Deku-Baum" COLOR(DEFAULT) ", Dir zu sagen habe."
BOX_BREAK

UNSKIPPABLE "Die vergangenen Nächte müssen\n"
"für Dich ruhelos und von finsteren\n"
"Träumen geprägt gewesen sein."
BOX_BREAK

UNSKIPPABLE "In diesen Tagen, da die Diener\n"
"des Bösen zu neuer Stärke\n"
"gelangen, werden die Auserwählten\n"
"von Alpträumen geplagt."
BOX_BREAK

UNSKIPPABLE "Dies ist auch Dir widerfahren!"
BOX_BREAK

UNSKIPPABLE NAME "... \n"
"Nun ist die Zeit gekommen, da es\n"
"gilt, Deinen Mut zu prüfen!" TEXTID(0x1016)
)
,
MSG(
UNSKIPPABLE "Oh... Navi...\n"
"Enfin te voici..."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"Sois le bienvenu..."
BOX_BREAK

UNSKIPPABLE "Ecoute, écoute bien, jeune enfant...\n"
"Moi, " COLOR(RED) "l'Arbre Mojo" COLOR(DEFAULT) ", de par mes \n"
"sages paroles, vais te révéler la\n"
"sombre réalité!"
BOX_BREAK

UNSKIPPABLE "Ton sommeil, depuis plusieurs\n"
"lunes, est tourmenté par\n"
"d'épuisants songes et de terribles \n"
"cauchemars..."
BOX_BREAK

UNSKIPPABLE "Alors que les forces obscures\n"
"grandissent, une aura maléfique\n"
"s'étend sur le monde, pervertissant\n"
"nos rêves de sombres présages!"
BOX_BREAK

UNSKIPPABLE "Et toi aussi, jeune enfant, tu as \n"
"ressenti cette infâmie..."
BOX_BREAK

UNSKIPPABLE NAME "... \n"
"Le temps est venu pour toi de \n"
"mettre ton courage à l'épreuve..." TEXTID(0x1016)
)
)

DEFINE_MESSAGE(0x1016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "ワシは　のろいを　かけられておる。\n"
SHIFT(36) "お前の　知恵と　勇気で\n"
SHIFT(18) "それを　解いてほしいのじゃ。"
BOX_BREAK

"その　覚悟が　あるかな…？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"I have been " COLOR(RED) "cursed" COLOR(DEFAULT) "...\n"
"I need you to break the curse\n"
"with your wisdom and courage."
BOX_BREAK

"Dost thou have courage enough\n"
"to undertake this task?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Ein " COLOR(RED) "Fluch" COLOR(DEFAULT) " lastet auf mir!\n"
"Deine Jugend und Kraft sollen mir\n"
"helfen, den Fluch zu brechen."
BOX_BREAK

"Hast Du den Mut, diese Prüfung\n"
"auf Dich zu nehmen?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Je suis sous l'emprise d'une\n"
"odieuse " COLOR(RED) "malédiction" COLOR(DEFAULT) "...\n"
"Pour me libérer, j'ai besoin de \n"
"ta vaillance et de ta sagesse."
BOX_BREAK

"Auras-tu le courage d'entreprendre\n"
"cette noble quête?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "では、" NAME "よ。\n"
SHIFT(15) "ナビィと　共に\n"
SHIFT(18) "ワシの　体内へ　入るがよい…"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "妖精　ナビィ…\n"
SHIFT(9) NAME "の　力となれ…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "よいか　" NAME "…\n"
SHIFT(30) COLOR(LIGHTBLUE) "ナビィ" COLOR(DEFAULT) "が　語りかける時、\n"
SHIFT(21) COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "を使い　耳をかたむけよ…"
)
,
MSG(
UNSKIPPABLE "Then enter, brave \n"
NAME ", and thou too, \n"
"Navi..."
BOX_BREAK

UNSKIPPABLE "Navi the fairy...  \n"
"Thou must aid " NAME "..."
BOX_BREAK

UNSKIPPABLE "And " NAME "...When " COLOR(LIGHTBLUE) "Navi \n"
COLOR(DEFAULT) "speaks, use " COLOR(YELLOW) "[C-Up] " COLOR(DEFAULT) "to listen well \n"
"to her words of wisdom..."
)
,
MSG(
UNSKIPPABLE "So sei es! Tritt ein, tapferer \n"
NAME ", und auch Du, \n"
"Navi."
BOX_BREAK

UNSKIPPABLE "Navi, holde Fee...  \n"
"Unterstütze " NAME "!"
BOX_BREAK

UNSKIPPABLE "Und Du " NAME ", höre mit\n"
COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " " COLOR(LIGHTBLUE) "Navis" COLOR(DEFAULT) " Worte, denn es\n"
"sind Worte der Weisheit."
)
,
MSG(
UNSKIPPABLE "Alors entre, brave " NAME ",\n"
"et toi aussi Navi..."
BOX_BREAK

UNSKIPPABLE "Navi la fée, tu aideras   \n"
NAME " de ton mieux..."
BOX_BREAK

UNSKIPPABLE "Et toi " NAME ", quand " COLOR(LIGHTBLUE) "Navi \n"
COLOR(DEFAULT) "désirera te parler, utilise " COLOR(YELLOW) "[C-Up] " COLOR(DEFAULT) "pour\n"
"écouter ses conseils avisés..."
)
)

DEFINE_MESSAGE(0x1018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(18) "うむ…　まだ　自信がないか…\n"
SHIFT(15) "それでは　コキリの森に　戻り、\n"
SHIFT(15) "戦い方を　学んでくるが　よい。"
BOX_BREAK

SHIFT(15) "そして　覚悟が　できたならば、\n"
SHIFT(33) "再び　ここへ　きて　" COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "で\n"
SHIFT(21) "ワシに　話しかけておくれ…"
)
,
MSG(
"Perhaps you do not yet have \n"
"confidence in your abilities...\n"
"Return to the Kokiri Forest to\n"
"learn the skills of combat..."
BOX_BREAK

"When thou art ready, return here \n"
"and speak with me by using " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "..."
)
,
MSG(
"Womöglich fehlt Dir das Vertrauen \n"
"in Deine eigenen Fähigkeiten.\n"
"Kehre in den Kokiri-Wald zurück\n"
"und übe Deine Kampfeskunst!"
BOX_BREAK

"Fühlst Du, daß Deine Zeit \n"
"gekommen ist, tritt mir erneut \n"
"gegenüber und drücke" COLOR(LIGHTBLUE) " [Z]" COLOR(DEFAULT) "."
)
,
MSG(
"Soit... Il est sans doute encore \n"
"trop tôt pour toi...\n"
"Alors retourne dans la forêt pour \n"
"terminer ton apprentissage..."
BOX_BREAK

"Une fois prêt, reviens te présenter\n"
"devant moi... Parle en appuyant \n"
"sur " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "..."
)
)

DEFINE_MESSAGE(0x1019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "「れんしゅう」するなら\n"
SHIFT(27) "「" COLOR(ADJUSTABLE) "森のれんしゅうじょう" COLOR(DEFAULT) "」。\n"
SHIFT(33) "場所は　すぐ　この上ヨ！"
)
,
MSG(
"The best place to go to learn\n"
"some new skills is in the " COLOR(ADJUSTABLE) "Forest \n"
"Training Center" COLOR(DEFAULT) "." COLOR(ADJUSTABLE) " " COLOR(DEFAULT) "It's on the hill\n"
"just above here."
)
,
MSG(
"Der beste Ort, um zu lernen,\n"
"Fähigkeiten richtig einzusetzen,\n"
"ist das " COLOR(ADJUSTABLE) "Kokiri Trainingslager\n"
COLOR(DEFAULT) "hier auf dem Hügel."
)
,
MSG(
"L'" COLOR(ADJUSTABLE) "aire d'entraînement sylvestre " COLOR(DEFAULT) " \n"
"t'enseignera de nouvelles \n"
"techniques. Dirige-toi vers \n"
"cette colline..."
)
)

DEFINE_MESSAGE(0x101A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) SHIFT(21) QUICKTEXT_ENABLE "いたいッピ！" QUICKTEXT_DISABLE "　" QUICKTEXT_ENABLE "かんべんッピ！" QUICKTEXT_DISABLE "\n"
SHIFT(9) "ヒント　いうから、ゆるしてッピ！"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(15) "高いガケから　ジャンプする時\n"
SHIFT(30) COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "を　前にいれていれば、\n"
SHIFT(18) "クルリ回って　ノーダメージ。"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(51) "あんまり　高いと\n"
SHIFT(12) "保証できないけどネ…　ケケッ！"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(42) "ま、勇気が　あるなら\n"
SHIFT(15) "チャレンジするッピ！　" QUICKTEXT_ENABLE "ケケッ！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) QUICKTEXT_ENABLE "Ow-ow-ow!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Forgive me, master!" QUICKTEXT_DISABLE "\n"
"If I give you a clue, will you let \n"
"me go?"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "When you jump off a high cliff,\n"
"if you hold " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " forward, you will\n"
"roll on the ground when you land \n"
"and won't get hurt from the fall."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "I can't guarantee it will\n"
"work, though, if the cliff is really,\n"
"really high, heh heh!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Well, try it if you are feeling\n"
"bold!\n"
QUICKTEXT_ENABLE "Wah ha hah!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) QUICKTEXT_ENABLE "Vergebung, Herr!" QUICKTEXT_DISABLE "\n"
"Läßt Du mich gehen, wenn ich\n"
"Dir ein Geheimnis anvertraue?"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Springst Du aus großer\n"
"Höhe und drückst bei der Landung\n"
"den " COLOR(LIGHTBLUE) "[Control-Pad] " COLOR(DEFAULT) "nach vorn, rollst Du Dich\n"
"ab und linderst so den Aufprall."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Allerdings kann ich nicht\n"
"wirklich garantieren, daß dies\n"
"bei jeder Absprunghöhe klappt..."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Probier es einfach aus, wenn\n"
"Du Mut hast!\n"
QUICKTEXT_ENABLE "Ich verschwinde!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) QUICKTEXT_ENABLE "Aïe-ouille-aïe!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Pardon, seigneur!" QUICKTEXT_DISABLE "\n"
"Je te donne un indice et tu me \n"
"laisses partir, OK?"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Tu peux sauter d'une falaise\n"
"sans te faire mal. Maintiens " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " \n"
"vers l'avant pour faire une roulade\n"
"et ainsi amortir ta chute."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Bon d'accord, ça ne marche pas\n"
"à tous les coups... Surtout si la \n"
"falaise est super haute...\n"
"Gnark, gnark..."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Essaie quand même!\n"
QUICKTEXT_ENABLE "Warf.. arf.. arf!!!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x101B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "ヒヒッ…\n"
SHIFT(24) "お面の下は　妖精のコだな？"
)
,
MSG(
"Hee hee!\n"
"Under that mask...aren't you that\n"
"Kokiri kid?"
)
,
MSG(
"Hey!\n"
"Du da, unter der Maske. Bist Du\n"
"nicht der junge Kokiri?"
)
,
MSG(
"Tiens tiens!...\n"
"On dirait bien le p'tit Kokiri\n"
"derrière ce masque!"
)
)

DEFINE_MESSAGE(0x101C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "なかなか　ユニークな　お面だ。\n"
SHIFT(42) "ヒヒッ、気に入った。\n"
SHIFT(3) "ちょっとは　強そうに　見えるかも。"
BOX_BREAK

"ボクに　ソレ　ゆずれよ。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いやだ" COLOR(DEFAULT)
)
,
MSG(
"Quite an unusual mask you have\n"
"there. Hee hee! I like it! It may\n"
"make me look a little bit tougher."
BOX_BREAK

"Hey, why don't you give it to me?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "No way" COLOR(DEFAULT)
)
,
MSG(
"Eine coole Maske hast Du da, echt\n"
"groovy! Mit dem Teil würde ich\n"
"sicher einige Leute schocken."
BOX_BREAK

"Hey, gibst Du mir die Maske?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Pas mal ton masque. Il me plaît!\n"
"Avec ça sur ma face, j'aurai l'air\n"
"d'un dur, un vrai!"
BOX_BREAK

"Donne! Donne! Donne!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "Jamais" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x101D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "…残念だね、ヒヒッ。"
)
,
MSG(
"Doh! That's too bad for me..."
)
,
MSG(
"Blöd, ich hätte sie gerne gehabt..."
)
,
MSG(
"Beuh! T'es nul..."
)
)

DEFINE_MESSAGE(0x101E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "ヒヒヒッ！\n"
SHIFT(27) "仲間に　じまんしよっと！！"
)
,
MSG(
"Yowza! I'm gonna wear this \n"
"all the time!"
)
,
MSG(
"Cool! Ich werde sie immer tragen!"
)
,
MSG(
"Ouais!!! Je vais le porter toute\n"
"la journée!"
)
)

DEFINE_MESSAGE(0x101F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SFX(NA_SE_SY_TRE_BOX_APPEAR) SHIFT(27) "２０ルピーの　お面なのに\n"
SHIFT(12) COLOR(RED) "１０ルピー" COLOR(DEFAULT) "しか　くれなかった！！\n"
SHIFT(69) "ソンした！"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "１０ルピーを　自分で　穴うめして\n"
SHIFT(27) "お面の代金　" COLOR(RED) "２０ルピー" COLOR(DEFAULT) "を　\n"
SHIFT(30) "お面屋に　納めに戻ろう。"
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_SY_TRE_BOX_APPEAR) "He just gave you " COLOR(RED) "10 Rupees" COLOR(DEFAULT) " for \n"
"this 20-Rupee mask! You lost \n"
"money on that deal!"
BOX_BREAK

UNSKIPPABLE "Go back to the Mask Shop \n"
"and pay " COLOR(RED) "20 Rupees" COLOR(DEFAULT) " for the \n"
"mask. The difference will have to \n"
"come out of your own pocket."
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_SY_TRE_BOX_APPEAR) "Er hat Dir nur " COLOR(RED) "10 Rubine" COLOR(DEFAULT) " \n"
"für die 20 Rubine teure Maske\n"
"gegeben!\n"
"Ein schlechtes Geschäft!"
BOX_BREAK

UNSKIPPABLE "Geh zurück zum Maskenhändler \n"
"und gib ihm seine " COLOR(RED) "20 Rubine" COLOR(DEFAULT) ".\n"
"Den Verlust mußt Du aus Deiner \n"
"eigenen Tasche bezahlen."
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_SY_TRE_BOX_APPEAR) "Il n'a donné que " COLOR(RED) "10 Rubis" COLOR(DEFAULT) "! Et ce \n"
"masque en vaut 20! Tu t'es fait \n"
"avoir, mec!"
BOX_BREAK

UNSKIPPABLE "Retournons à la Foire aux Masques\n"
"payer les " COLOR(RED) "20 Rubis" COLOR(DEFAULT) ". La différence, \n"
"c'est pour ta pomme!!!"
)
)

DEFINE_MESSAGE(0x1020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "仲間うちでも　評判いいんだ、\n"
SHIFT(36) "この　お面。　ヒヒヒッ！"
)
,
MSG(
"My buddies really want this mask!\n"
"Hee hee hee!"
)
,
MSG(
"Ich bin ein Zombie! Du mußt\n"
"schreiend davonlaufen!"
)
,
MSG(
"Tous mes copains veulent le même \n"
"masque, j'ai la super cote!!!\n"
"Nananèreuh..."
)
)

DEFINE_MESSAGE(0x1021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "なんだ…　だいじょうぶだったの？\n"
SHIFT(9) "じゃ、森からは　出なかったのか？"
)
,
MSG(
"Oh, you're OK? You didn't leave \n"
"the forest after all, did you?"
)
,
MSG(
"Du hier? Ich dachte, Du hättest \n"
"den Wald verlassen..."
)
,
MSG(
"Tout va bien? \n"
"Tu n'as pas quitté la forêt?"
)
)

DEFINE_MESSAGE(0x1022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "ジャンプする時\n"
SHIFT(30) COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "を　前にいれていれば、\n"
SHIFT(18) "クルリ回って　ノーダメージ。"
BOX_BREAK

SHIFT(39) "あんまり　高いガケは\n"
SHIFT(24) "ダメだけどネ…　知ってた？"
)
,
MSG(
"Did you know that if you hold " COLOR(LIGHTBLUE) "▼\n"
COLOR(DEFAULT) "forward when you jump off a cliff,\n"
"you'll roll when you land. This will\n"
"absorb the shock of your landing."
BOX_BREAK

"If you fall too far, though, you'll\n"
"still get hurt..."
)
,
MSG(
"Wußtest Du, daß Du Dich mit dem \n"
COLOR(LIGHTBLUE) "[Control-Pad] " COLOR(DEFAULT) "abrollen kannst, wenn Du aus\n"
"großer Höhe herabspringst?\n"
"Das lindert Deinen Aufprall."
BOX_BREAK

"Ist es allerdings zu hoch, wirst\n"
"Du dennoch Schaden nehmen..."
)
,
MSG(
"Sais-tu qu'en maintenant " COLOR(LIGHTBLUE) "▼ " COLOR(DEFAULT) "vers" COLOR(LIGHTBLUE) "\n"
COLOR(DEFAULT) "l'avant pendant un saut tu peux \n"
"faire une roulade pour amortir ta \n"
"chute?"
BOX_BREAK

"Bien sûr, tomber de trop haut te\n"
"fera quand même bobo..."
)
)

DEFINE_MESSAGE(0x1023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "サリア、\n"
SHIFT(6) "いつものとこで　待ってるってサ。"
)
,
MSG(
"Saria said she's waiting at the\n"
"usual spot."
)
,
MSG(
"Salia sagte, sie erwarte Dich\n"
"am üblichen Ort."
)
,
MSG(
"Saria t'attend à l'endroit habituel."
)
)

DEFINE_MESSAGE(0x1024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(9) "よくやってくれた、\n"
SHIFT(9) "ありがとう　" NAME "…"
)
,
MSG(
UNSKIPPABLE "Well done, " NAME "..."
)
,
MSG(
UNSKIPPABLE "Hab Dank, " NAME "!"
)
,
MSG(
UNSKIPPABLE "Félicitations, " NAME "..."
)
)

DEFINE_MESSAGE(0x1025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "いい　パチンコ　持ってんじゃん。"
BOX_BREAK

SHIFT(36) "パチンコってのはサ…\n"
SHIFT(30) COLOR(YELLOW) "[C]" COLOR(DEFAULT) "押しながら　ねらって、\n"
SHIFT(9) "はなした時　撃つと　いいカンジ！"
BOX_BREAK

SHIFT(6) "それから　パチンコかまえてる時、\n"
SHIFT(3) COLOR(LIGHTBLUE) "Ｚ注目" COLOR(DEFAULT) "したら　" COLOR(RED) "移動しながら撃てる\n"
COLOR(DEFAULT) SHIFT(48) "って、知ってたか？"
)
,
MSG(
"You have a cool Slingshot, huh?"
BOX_BREAK

"You know what's cool about it?\n"
"You can aim while holding down\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " and shoot by releasing the\n"
"button! How cool!"
BOX_BREAK

"If you have the Slingshot ready,\n"
"you can use " COLOR(LIGHTBLUE) "[Z] Targeting" COLOR(DEFAULT) " to \n"
COLOR(RED) "shoot while moving" COLOR(DEFAULT) ".... Did you \n"
"know that?"
)
,
MSG(
"Hey, eine prächtige Feen-Schleuder\n"
"hast Du da..."
BOX_BREAK

"Hältst Du " COLOR(YELLOW) "[C] " COLOR(DEFAULT) "gedrückt, kannst Du\n"
"mit ihr zielen. Läßt Du den Knopf\n"
"los, schießt Du einen Deku-Kern." COLOR(YELLOW) "." COLOR(DEFAULT) "\n"
"Bist Du ein guter Schütze?"
BOX_BREAK

"Hältst Du die Schleuder in der\n"
"Hand und drückst " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) ", kannst Du" COLOR(LIGHTBLUE) " \n"
COLOR(DEFAULT) "sogar schießen, " COLOR(RED) "während Du Dich\n"
"bewegst" COLOR(DEFAULT) "."
)
,
MSG(
"Whoa! Il est cool ton lance-pierre!"
BOX_BREAK

"Tu peux viser en maintenant " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " \n"
"et tirer en relâchant le bouton!\n"
"Pratique, non?"
BOX_BREAK

"Garde ton lance-pierre en main, \n"
"cible avec la " COLOR(LIGHTBLUE) "Visée [Z] " COLOR(DEFAULT) "et" COLOR(LIGHTBLUE) " " COLOR(RED) "tire en \n"
"te déplaçant!\n"
COLOR(DEFAULT) "Tu le savais pas ça, hein?"
)
)

DEFINE_MESSAGE(0x1026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(21) "いや、" NAME "よ…\n"
SHIFT(12) "聞きたくないでは　すまされぬ！\n"
SHIFT(18) "ワシには　もう　時間がない…"
)
,
MSG(
"No, " NAME "...\n"
"Thou must know my time is short..."
)
,
MSG(
"Du mußt, " NAME "!\n"
"Mir bleibt nur wenig Zeit!"
)
,
MSG(
"Hélas non, " NAME "...\n"
"Sache que mon temps est compté..."
)
)

DEFINE_MESSAGE(0x1027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "では…　心して　聞いてくれ…\n"
SHIFT(18) "ワシに　のろいを　かけた者は\n"
SHIFT(42) COLOR(RED) "黒き砂漠の民" COLOR(DEFAULT) "じゃ…"
)
,
MSG(
UNSKIPPABLE "Now...listen carefully...\n"
"A " COLOR(RED) "wicked man of the desert" COLOR(DEFAULT) " \n"
"cast this dreadful curse upon me..."
)
,
MSG(
UNSKIPPABLE "Höre, was ich zu sagen habe.\n"
"Ein " COLOR(RED) "Diener des Bösen, der aus der \n"
"Wüste kam" COLOR(DEFAULT) ", hat mich verflucht!"
)
,
MSG(
UNSKIPPABLE "Maintenant...écoute-moi bien... \n"
"Un" COLOR(RED) " vil cavalier du désert " COLOR(DEFAULT) "m'a \n"
"infligé cette terrible et odieuse \n"
"malédiction..."
)
)

DEFINE_MESSAGE(0x1028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "サリアを　さがしてんのか？\n"
SHIFT(27) "いつもの　" COLOR(ADJUSTABLE) "迷いの森" COLOR(DEFAULT) "　だろ。"
BOX_BREAK

SHIFT(24) "知らないなんて　言うなヨ？\n"
SHIFT(30) "ガケの上だろ、入り口は！"
BOX_BREAK

SHIFT(57) "どーせ　迷って\n"
SHIFT(18) "戻ってくるに　決まってらぁ！"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "フン！" QUICKTEXT_DISABLE
)
,
MSG(
"If you're looking for Saria, she's\n"
"in the " COLOR(ADJUSTABLE) "Lost Woods" COLOR(DEFAULT) ", as usual."
BOX_BREAK

"Don't tell me you don't know \n"
"where that is! The entrance is up\n"
"on the cliff overlooking the \n"
"village!"
BOX_BREAK

"I know you'll get lost! Don't \n"
"worry, you'll just end up back at\n"
"the entrance!"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "Harumph!" QUICKTEXT_DISABLE
)
,
MSG(
"Falls Du Salia suchst: Sie ist in \n"
"den " COLOR(ADJUSTABLE) "Verlorenen Wäldern" COLOR(DEFAULT) "."
BOX_BREAK

"Der Eingang? Der ist irgendwo\n"
"hier im Dorf!"
BOX_BREAK

"Sicher wird einer wie Du sich im\n"
"Wald verlaufen. Da nützt Dir auch\n"
"Deine Fee nichts!"
BOX_BREAK

SHIFT(36) QUICKTEXT_ENABLE "Und jetzt verschwinde!" QUICKTEXT_DISABLE
)
,
MSG(
"Tu cherches Saria? \n"
"Elle est dans les " COLOR(ADJUSTABLE) "Bois Perdus" COLOR(DEFAULT) ".\n"
"Comme d'habitude..."
BOX_BREAK

"Ne dis pas que tu ne sais plus \n"
"comment y aller! L'entrée est sur \n"
"la falaise au-dessus du village!"
BOX_BREAK

"Je parie que tu vas te perdre...\n"
"Minable!"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "Pfeuhh!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x1029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "あの　黒き砂漠の民を\n"
SHIFT(48) "トライフォースに\n"
SHIFT(36) "触れさせては　ならぬ！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "悪しき心を持つ　あの者を\n"
SHIFT(21) "聖地へ　行かせては　ならぬ！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "あの者は　ワシの力を　うばい\n"
SHIFT(30) "死の　のろいを　かけた…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "やがて　のろいは\n"
SHIFT(3) "ワシの命をも　むしばんでいった…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "お前は　見事に　のろいを\n"
SHIFT(9) "解いてくれたが、ワシの命までは\n"
SHIFT(21) "もとには　戻らぬようじゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "ワシは　まもなく\n"
SHIFT(21) "死を　むかえるじゃろう…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "だが…　悲しむことは　ない…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "なぜなら　今　こうして…\n"
"お前に　この事を　伝えられたこと…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "それが　ハイラルに　残された\n"
SHIFT(30) "最後の希望だからじゃ…"
)
,
MSG(
UNSKIPPABLE "Thou must never allow the desert \n"
"man in black armor to lay his \n"
"hands on the sacred Triforce..."
BOX_BREAK

UNSKIPPABLE "Thou must never suffer that man,\n"
"with his evil heart, to enter the \n"
"Sacred Realm" COLOR(RED) " " COLOR(DEFAULT) "of legend..."
BOX_BREAK

UNSKIPPABLE "That evil man who cast the death \n"
"curse upon me and sapped my \n"
"power..."
BOX_BREAK

UNSKIPPABLE "Because of that curse, my end is\n"
"nigh..."
BOX_BREAK

UNSKIPPABLE "Though your valiant efforts to \n"
"break the curse were successful, \n"
"I was doomed before you started..."
BOX_BREAK

UNSKIPPABLE "Yes, I will pass away soon...\n"
UNSKIPPABLE "But do not grieve for me..."
BOX_BREAK

UNSKIPPABLE "I have been able to tell you of \n"
"these important matters..."
BOX_BREAK

UNSKIPPABLE "This is Hyrule's final hope..."
)
,
MSG(
UNSKIPPABLE "Niemals darf es dem Teufel \n"
"aus der Wüste gelingen, die\n"
"Macht des Triforce zu erringen."
BOX_BREAK

UNSKIPPABLE "Nie darf der, der Böses in\n"
"seinem Herzen trägt, das \n"
"Heilige Reich betreten!"
BOX_BREAK

UNSKIPPABLE "Der Dämon, der den Fluch auf \n"
"mich legte und mir die Kraft\n"
"raubte!"
BOX_BREAK

UNSKIPPABLE "Mein Ende naht, das Böse nagt\n"
"an meinen Wurzeln..."
BOX_BREAK

UNSKIPPABLE "Obwohl Du den Fluch gebrochen\n"
"hast, kommt Deine Hilfe zu spät...\n"
"Ich bin zum Sterben verdammt."
BOX_BREAK

UNSKIPPABLE "Meine Zeit ist vorüber...\n"
UNSKIPPABLE "Doch trauere nicht um mich!"
BOX_BREAK

UNSKIPPABLE "Mein Auftrag war, Dich einzuweihen \n"
"in die Geschehnisse um Hyrule..."
BOX_BREAK

UNSKIPPABLE "Du bist des Landes letzte \n"
"Hoffnung!"
)
,
MSG(
UNSKIPPABLE "Tu ne dois surtout pas laisser \n"
"l'homme du désert en armure noire \n"
"s'approcher de la sainte Triforce..."
BOX_BREAK

UNSKIPPABLE "Et tu ne permettras jamais que \n"
"cet homme au coeur si mauvais \n"
"puisse s'immiscer dans le très \n"
"Saint Royaume des Légendes..."
BOX_BREAK

UNSKIPPABLE "Ce vil chacal m'a jeté cette \n"
"malédiction infecte et mortelle \n"
"pour saper mon pouvoir."
BOX_BREAK

UNSKIPPABLE "Ce sort si néfaste me promet un \n"
"trépas imminent..."
BOX_BREAK

UNSKIPPABLE "Même si tes vaillants efforts\n"
"ont eu raison de ce maléfice, mon\n"
"destin est scellé depuis le début..."
BOX_BREAK

UNSKIPPABLE "Hélas, je ne peux m'y soustraire:\n"
"le moment fatal est proche..."
BOX_BREAK

UNSKIPPABLE "Mais ne te lamente pas sur \n"
"mon sort..."
BOX_BREAK

UNSKIPPABLE "Je t'ai transmis mon savoir...\n"
"Tu connais la vérité maintenant...\n"
"Mon rôle s'achève ici..."
BOX_BREAK

UNSKIPPABLE "Tu es le dernier espoir d'Hyrule!"
)
)

DEFINE_MESSAGE(0x102A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "たのむぞ、" NAME "…\n"
SHIFT(18) "お前の　勇気を　信じておる…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "妖精　ナビィよ…\n"
SHIFT(27) NAME "を　たすけ、\n"
SHIFT(27) "ワシの志を　ついでくれ…"
BOX_BREAK

UNSKIPPABLE SHIFT(45) TEXT_SPEED(2) "よいな…　ナビィ…" TEXT_SPEED(0) "\n"
SHIFT(51) TEXT_SPEED(3) "さらば…　じゃ…" TEXT_SPEED(0)
)
,
MSG(
UNSKIPPABLE "The future depends upon thee,\n"
NAME "...\n"
"Thou art courageous..."
BOX_BREAK

UNSKIPPABLE "Navi the fairy...\n"
"Help " NAME " to carry out \n"
"my will..."
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) "I entreat ye... Navi..." TEXT_SPEED(0) "\n"
TEXT_SPEED(3) "Good...bye..." TEXT_SPEED(0)
)
,
MSG(
UNSKIPPABLE "Die Zukunft liegt in Deinen \n"
"Händen, " NAME "...\n"
"Ich weiß, Du hast die Kraft..."
BOX_BREAK

UNSKIPPABLE "Navi...\n"
"Hilf " NAME ", meinen letzten \n"
"Willen zu verwirklichen..."
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) "Ich ersuche Dich... Navi..." TEXT_SPEED(0) "\n"
TEXT_SPEED(3) "So... lebt... denn... wohl..." TEXT_SPEED(0)
)
,
MSG(
UNSKIPPABLE "La destinée du monde dépend de \n"
"tes actes...\n"
NAME "...\n"
"Tu es courageux et vaillant..."
BOX_BREAK

UNSKIPPABLE "Navi, belle petite fée...\n"
"Aide " NAME " dans sa \n"
"quête..."
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) "Je t'en prie... Navi..." TEXT_SPEED(0) "\n"
TEXT_SPEED(3) "...Adieuuuu..." TEXT_SPEED(0)
)
)

DEFINE_MESSAGE(0x102B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) COLOR(LIGHTBLUE) "行きましょ、" NAME "！\n"
COLOR(DEFAULT) SHIFT(12) COLOR(LIGHTBLUE) "ハイラル城へ！！" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Let's go to Hyrule Castle,\n"
NAME "!!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Du hast die Worte des \n"
"Deku-Baumes gehört! Nur Du kannst\n"
"Hyrule retten! Laß uns also zum\n"
"Schloß aufbrechen, " NAME "!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Allons au Château d'Hyrule,\n"
NAME "!!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x102C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) TEXT_SPEED(1) COLOR(LIGHTBLUE) "さよなら…" COLOR(DEFAULT) TEXT_SPEED(0) COLOR(LIGHTBLUE) "　デクの樹サマ…" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(1) COLOR(LIGHTBLUE) "Good-bye..." COLOR(DEFAULT) TEXT_SPEED(0) COLOR(LIGHTBLUE) "Great Deku Tree..." COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(1) COLOR(LIGHTBLUE) "Leb wohl... " COLOR(DEFAULT) TEXT_SPEED(0) COLOR(LIGHTBLUE) "weiser Deku-Baum..." COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(1) COLOR(LIGHTBLUE) "Adieu..." COLOR(DEFAULT) TEXT_SPEED(0) COLOR(LIGHTBLUE) "Vénérable Arbre Mojo..." COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x102D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "…残念だね、ヒヒッ！"
)
,
MSG(
"Too bad...Heh heh!"
)
,
MSG(
"Wie schade..."
)
,
MSG(
"Dommage...Hein? Hein?"
)
)

DEFINE_MESSAGE(0x102E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"もう　１回　やろうよ。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Do you want to play some more?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Spielst Du mit uns?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Tu veux encore tenter ta chance?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x102F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "なんだ、「" COLOR(LIGHTBLUE) "妖精なし" COLOR(DEFAULT) "」！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "デクの樹サマに　なんの用ダ！\n"
SHIFT(9) "妖精もいない　半人前のくせに…" TEXTID(0x10D0)
)
,
MSG(
UNSKIPPABLE "Hey you! \"" COLOR(LIGHTBLUE) "Mr. No Fairy" COLOR(DEFAULT) "!\"\n"
"What's your business with the\n"
"Great Deku Tree?"
BOX_BREAK

UNSKIPPABLE "Without a fairy, you're not\n"
"even a real man!" TEXTID(0x10D0)
)
,
MSG(
UNSKIPPABLE "Hey Du " COLOR(LIGHTBLUE) "feenloser Versager" COLOR(DEFAULT) "!\n"
"Was hast Du mit dem Deku-Baum\n"
"zu bereden?"
BOX_BREAK

UNSKIPPABLE "Ohne Fee bist Du nicht mal\n"
"ein richtiger Mann!" TEXTID(0x10D0)
)
,
MSG(
UNSKIPPABLE "Hé, toi là! \n"
"\"" COLOR(LIGHTBLUE) "Monsieur J'ai-pas-d'fée" COLOR(DEFAULT) "!\"\n"
"Tu lui veux quoi au vénérable \n"
"Arbre Mojo?"
BOX_BREAK

UNSKIPPABLE "Sans fée t'es même pas un vrai \n"
"Kokiri, d'abord!" TEXTID(0x10D0)
)
)

DEFINE_MESSAGE(0x1030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ここを　通りたきゃ\n"
SHIFT(57) COLOR(ADJUSTABLE) "剣" COLOR(DEFAULT) "と　" COLOR(LIGHTBLUE) "盾" COLOR(DEFAULT) "ぐらい\n"
SHIFT(45) "「" COLOR(BLUE) "そうび" COLOR(DEFAULT) "」してきナ！"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "フン！" QUICKTEXT_DISABLE
)
,
MSG(
"If you want to pass through here,\n"
"you should at least " COLOR(BLUE) "equip" COLOR(DEFAULT) " a " COLOR(ADJUSTABLE) "sword" COLOR(RED) "\n"
COLOR(DEFAULT) "and " COLOR(LIGHTBLUE) "shield" COLOR(DEFAULT) "!"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "Sheesh!" QUICKTEXT_DISABLE
)
,
MSG(
"Wenn Du passieren willst, solltest\n"
"Du wenigstens mit einem " COLOR(ADJUSTABLE) "Schwert \n"
COLOR(DEFAULT) "und einem " COLOR(LIGHTBLUE) "Schild " COLOR(DEFAULT) "ausgerüstet sein!"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "Verschwinde!" QUICKTEXT_DISABLE
)
,
MSG(
"Si tu veux passer, " COLOR(BLUE) "équipe-toi" COLOR(DEFAULT) " \n"
"d'abord d'une " COLOR(ADJUSTABLE) "épée" COLOR(DEFAULT) " et d'un " COLOR(LIGHTBLUE) "bouclier" COLOR(BLUE) "," COLOR(DEFAULT) "\n"
"minus!"
BOX_BREAK

SHIFT(81) QUICKTEXT_ENABLE "Pfeuh!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x1031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(87) QUICKTEXT_ENABLE "え？" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(15) COLOR(RED) "ミド" COLOR(DEFAULT) "が　デクの樹サマの広場へ\n"
SHIFT(45) "通してくれないの？" TEXTID(0x10C8)
)
,
MSG(
SHIFT(87) QUICKTEXT_ENABLE "What?!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Mido " COLOR(DEFAULT) "won't let you go to see \n"
"the Great Deku Tree?" TEXTID(0x10C8)
)
,
MSG(
SHIFT(87) QUICKTEXT_ENABLE "Was?!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Mido " COLOR(DEFAULT) "läßt Dich nicht zum \n"
"Deku-Baum?" TEXTID(0x10C8)
)
,
MSG(
SHIFT(77) QUICKTEXT_ENABLE "Quoi?!" QUICKTEXT_DISABLE "\n"
UNSKIPPABLE COLOR(RED) "Mido " COLOR(DEFAULT) "ne veut pas te laisser voir\n"
"le vénérable Arbre Mojo?" TEXTID(0x10C8)
)
)

DEFINE_MESSAGE(0x1032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) COLOR(LIGHTBLUE) "盾（たて）" COLOR(DEFAULT) "は　お店にも　あるけど\n"
SHIFT(12) COLOR(ADJUSTABLE) "剣（けん）" COLOR(DEFAULT) "は　この森の　どこかに\n"
SHIFT(21) "１本しかないって　聞いたヨ。"
)
,
MSG(
"You can buy a " COLOR(LIGHTBLUE) "shield" COLOR(DEFAULT) " at the shop,\n"
"but there is only one " COLOR(ADJUSTABLE) "sword" COLOR(DEFAULT) "\n"
"hidden somewhere in the forest."
)
,
MSG(
"Das " COLOR(ADJUSTABLE) "Schwert" COLOR(DEFAULT) " ist irgendwo\n"
"verborgen, sagt man. Es ist das\n"
"einzige Schwert in Kokiri! Den\n"
COLOR(LIGHTBLUE) "Schild" COLOR(DEFAULT) " kannst Du im Laden kaufen."
)
,
MSG(
"Va t'acheter un " COLOR(LIGHTBLUE) "bouclier " COLOR(DEFAULT) "à la \n"
"boutique Kokiri. Mais pour l'" COLOR(ADJUSTABLE) "épée" COLOR(DEFAULT) "... \n"
"Cherche bien dans un coin du \n"
"village!"
)
)

DEFINE_MESSAGE(0x1033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(9) "デクの樹サマのとこ　行きたきゃ\n"
SHIFT(15) COLOR(ADJUSTABLE) "剣（けん）" COLOR(DEFAULT) "と　" COLOR(LIGHTBLUE) "盾（たて）" COLOR(DEFAULT) "くらいは\n"
SHIFT(30) "「そうび」してこい…って" TEXTID(0x10D2)
)
,
MSG(
UNSKIPPABLE "If you want to see the \n"
"Great Deku Tree, you should at \n"
"least equip a " COLOR(ADJUSTABLE) "sword" COLOR(DEFAULT) " and " COLOR(LIGHTBLUE) "shield" COLOR(DEFAULT) "!" TEXTID(0x10D2)
)
,
MSG(
UNSKIPPABLE "Bevor Du zum Deku-Baum darfst, \n"
"mußt Du Dich zunächst mit einem\n"
COLOR(ADJUSTABLE) "Schwert" COLOR(DEFAULT) " und einem " COLOR(LIGHTBLUE) "Schild" COLOR(DEFAULT) " \n"
"ausrüsten!" TEXTID(0x10D2)
)
,
MSG(
UNSKIPPABLE "Si tu veux voir le Vénérable Arbre\n"
"Mojo, Il te faut d'abord une " COLOR(ADJUSTABLE) "épée" COLOR(DEFAULT) " \n"
"et un " COLOR(LIGHTBLUE) "bouclier" COLOR(DEFAULT) "!" TEXTID(0x10D2)
)
)

DEFINE_MESSAGE(0x1034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "この　ミドさまは　オマエなんて\n"
SHIFT(12) "ぜ〜ったい　みとめねぇかんナ！"
BOX_BREAK

SHIFT(60) "ちくしょー…\n"
SHIFT(6) "なんで　デクの樹サマも、サリアも\n"
SHIFT(18) "オマエなんかを…　ブツブツ。"
)
,
MSG(
"I, the great Mido," COLOR(RED) " " COLOR(DEFAULT) "will never \n"
"accept you as one of us!"
BOX_BREAK

"Shoot! How did you get to be the\n"
"favorite of Saria and the Great\n"
"Deku Tree? Huh?!\n"
"Grumble...grumble..."
)
,
MSG(
"Ich werde Dich niemals als einen \n"
"der Unseren akzeptieren!"
BOX_BREAK

"Wie nur kann es sein, daß erst\n"
"Salia und nun auch der Deku-Baum\n"
"so viel Vertrauen zu Dir haben? \n"
"Grummel... Grummel..."
)
,
MSG(
"Moââ, le grand Mido, je ne \n"
"t'accepterai jamais comme l'un\n"
"des nôtres!"
BOX_BREAK

"Et puis d'abord, comment t'as fait \n"
"pour être le chouchou de Saria et\n"
"du vénérable Arbre Mojo?!  \n"
".......Pfeuuh!......."
)
)

DEFINE_MESSAGE(0x1035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"画面の" COLOR(RED) "アイコン" COLOR(DEFAULT) "のこと　おしえるよ。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "黄色のアイコン\n"
    "青色のアイコン" COLOR(DEFAULT)
)
,
MSG(
"I can teach you about the " COLOR(RED) "icons\n"
COLOR(DEFAULT) "at the top of the screen.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "About the yellow icons\n"
    "About the blue icon" COLOR(DEFAULT)
)
,
MSG(
"Ich kann Dir erklären, was die\n"
"Bildschirm-Symbole bedeuten.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Die gelben Symbole\n"
    "Das blaue Symbol" COLOR(DEFAULT)
)
,
MSG(
"Je peux te renseigner sur les \n"
COLOR(RED) "icônes " COLOR(DEFAULT) "en haut de l'écran. \n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Les icônes jaunes\n"
    "Les icônes bleues" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "画面右上に　表示される\n"
SHIFT(27) "３つの　黄色いアイコンは\n"
SHIFT(51) COLOR(YELLOW) "Ｃアイコン" COLOR(DEFAULT) "だヨ。"
BOX_BREAK

SHIFT(45) COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "で　使える\n"
SHIFT(18) "アイテムを　表示してるのサ。"
BOX_BREAK

SHIFT(24) COLOR(YELLOW) "Ｃアイテム" COLOR(DEFAULT) "を　入手したら、\n"
SHIFT(27) COLOR(YELLOW) "Ｃアイテム画面" COLOR(DEFAULT) "に　入って\n"
SHIFT(18) COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "に　セットするんダ。"
)
,
MSG(
"The three yellow icons in the \n"
"upper right are called " COLOR(YELLOW) "[C] icons" COLOR(DEFAULT) "."
BOX_BREAK

"They display the things you can\n"
"use with the " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "," COLOR(YELLOW) " [C-Down] " COLOR(DEFAULT) "and" COLOR(YELLOW) " \n"
"[C-Right] " COLOR(DEFAULT) "buttons."
BOX_BREAK

"Once you get a " COLOR(YELLOW) "[C] Button item" COLOR(DEFAULT) ", \n"
"go into the " COLOR(YELLOW) "Select Item Subscreen" COLOR(DEFAULT) " \n"
"and set it to one of the three\n"
COLOR(YELLOW) "[C] Buttons" COLOR(DEFAULT) "."
)
,
MSG(
"Die drei gelben Symbole am \n"
"rechten oberen Bildrand sind die \n"
COLOR(YELLOW) "Gegenstands-Symbole" COLOR(DEFAULT) "."
BOX_BREAK

"Sie zeigen Dir die Gegenstände an,\n"
"die Du mit " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "," COLOR(YELLOW) " [C-Down] " COLOR(DEFAULT) "und" COLOR(YELLOW) " [C-Right] \n"
COLOR(DEFAULT) "einsetzen kannst."
BOX_BREAK

"Hast Du einen " COLOR(YELLOW) "[C]-Gegenstand" COLOR(DEFAULT) " \n"
"erhalten, begib Dich ins \n"
COLOR(YELLOW) "Gegenstands-Menü " COLOR(DEFAULT) "und plaziere \n"
"ihn auf einem der " COLOR(YELLOW) "[C]-Knöpfe" COLOR(DEFAULT) "."
)
,
MSG(
"Les trois icônes jaunes dans le \n"
"coin en haut à droite s'appellent:\n"
COLOR(YELLOW) "Icônes" COLOR(DEFAULT) " " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "."
BOX_BREAK

"Elles montrent ce que tu peux \n"
"utiliser avec les boutons " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "," COLOR(YELLOW) " [C-Down] \n"
COLOR(DEFAULT) "et " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "."
BOX_BREAK

"Quand tu obtiens un nouvel " COLOR(YELLOW) "objet" COLOR(DEFAULT) ", \n"
"tu peux l'assigner à l'un des trois\n"
"boutons " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " en activant le menu \n"
"de l'" COLOR(YELLOW) "inventaire" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x1037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(21) "画面上の　青色のアイコンは\n"
SHIFT(27) COLOR(BLUE) "アクションアイコン" COLOR(DEFAULT) "だヨ。"
BOX_BREAK

SHIFT(33) "アクションアイコンは、\n"
SHIFT(27) COLOR(BLUE) "[A]" COLOR(DEFAULT) "で　できるアクションを\n"
SHIFT(45) "表示しているんダ。"
BOX_BREAK

SHIFT(39) "立ち止まって　よ〜く\n"
SHIFT(12) "自分の動きを　確認するんだネ。"
)
,
MSG(
"The blue icon at the top of the\n"
"screen is called the " COLOR(BLUE) "Action Icon" COLOR(DEFAULT) "."
BOX_BREAK

"This Action Icon shows you \n"
"what action you will perform\n"
"when you press " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Stop in many spots to see the\n"
"different things you can do."
)
,
MSG(
"Das blaue Symbol ist das " COLOR(BLUE) "Aktions-\n"
"Symbol" COLOR(DEFAULT) "."
BOX_BREAK

"Dieses Symbol gibt an, welche \n"
"Aktion Du ausführst, wenn Du\n"
COLOR(BLUE) "[A] " COLOR(DEFAULT) "betätigst."
BOX_BREAK

"An bestimmten Stellen hast Du die\n"
"Möglichkeit, verschiedene Aktionen\n"
"auszuführen."
)
,
MSG(
"L'icône bleue en haut de l'écran \n"
"est l'" COLOR(BLUE) "Icône d'Action" COLOR(DEFAULT) "."
BOX_BREAK

"Cette icône t'indique les actions\n"
"réalisables en appuyant sur " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Selon l'endroit et le moment, ce \n"
"bouton te permettra de faire\n"
"différentes actions.\n"
"Observe bien l'icône d'action!"
)
)

DEFINE_MESSAGE(0x1038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) COLOR(RED) "アイテム" COLOR(DEFAULT) "と　" COLOR(RED) "マップ" COLOR(DEFAULT) "のことなら\n"
SHIFT(48) "オイラに　聞きな！\n"
SHIFT(9) "長い話が　イヤなら　やめときナ！"
BOX_BREAK

THREE_CHOICE
    COLOR(ADJUSTABLE) "マップについて\n"
    "アイテムについて\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
"If you want to learn about the\n"
COLOR(RED) "map " COLOR(DEFAULT) "and " COLOR(RED) "items" COLOR(DEFAULT) ", just ask me.\n"
"But don't ask unless you want\n"
"to hear a long explanation."
BOX_BREAK

"What do you want to know about?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "About the map \n"
    "About items\n"
    "Don't ask" COLOR(DEFAULT)
)
,
MSG(
"Wenn Du etwas über die " COLOR(RED) "Karte" COLOR(DEFAULT) "\n"
"oder die" COLOR(RED) " Gegenstände " COLOR(DEFAULT) "erfahren\n"
"möchtest, kann ich Dir \n"
"weiterhelfen."
BOX_BREAK

"Was interessiert Dich?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Karte\n"
    "Gegenstände\n"
    "Zurück" COLOR(DEFAULT)
)
,
MSG(
"Je suis incollable sur la " COLOR(RED) "carte" COLOR(DEFAULT) " et \n"
"les " COLOR(RED) "objets" COLOR(DEFAULT) "... Pose-moi n'importe\n"
"quelle question mais prépare-toi à  \n"
"de longues explications!"
BOX_BREAK

"Bon alors, tu veux savoir quoi?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Ben...C'est quoi la carte?\n"
    "Heu..Les objets... \n"
    "Houlà! Me parle pas, toi!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(51) "ゲーム中　右下に\n"
SHIFT(30) "でてるのが　" COLOR(RED) "マップ" COLOR(DEFAULT) "だよ。"
BOX_BREAK

SHIFT(9) COLOR(YELLOW) "黄色い矢印" COLOR(DEFAULT) "が　現在位置と　方向。\n"
SHIFT(6) COLOR(RED) "赤いマーク" COLOR(DEFAULT) "が　入ってきた場所だ。"
BOX_BREAK

SHIFT(45) COLOR(LIGHTBLUE) "[L]" COLOR(DEFAULT) "で　マップ表示を\n"
SHIFT(36) "ＯＮ　ＯＦＦできるヨ。"
BOX_BREAK

SHIFT(45) "地名が　見たけりゃ\n"
SHIFT(6) COLOR(RED) "スタートボタン" COLOR(DEFAULT) "を　押してごらん。"
BOX_BREAK

SHIFT(9) "「アイテムモード」に　はいるから\n"
SHIFT(30) COLOR(RED) "マップ画面" COLOR(DEFAULT) "を　選ぶんだ。"
BOX_BREAK

SHIFT(3) "マップ画面では、ハイラルの地図を\n"
SHIFT(30) "見ることが　できるのサ。\n"
SHIFT(69) "わかった？"
)
,
MSG(
"There is a " COLOR(RED) "map" COLOR(DEFAULT) " displayed at the\n"
"bottom right of the screen."
BOX_BREAK

"The " COLOR(YELLOW) "yellow arrow " COLOR(DEFAULT) "shows your \n"
"current position and direction you\n"
"are facing. The " COLOR(RED) "red mark " COLOR(DEFAULT) "shows\n"
"where you entered the area from."
BOX_BREAK

"You can turn the map display on\n"
"and off with the " COLOR(LIGHTBLUE) "[L]" COLOR(DEFAULT) "."
BOX_BREAK

"If you want to see the name of a\n"
"place, press " COLOR(RED) "START" COLOR(DEFAULT) "."
BOX_BREAK

"You'll get into the Subscreens.\n"
"Select the " COLOR(RED) "Map Subscreen" COLOR(DEFAULT) "."
BOX_BREAK

"On the Map Subscreen, you can \n"
"see a map of Hyrule.\n"
"Did you get all that?"
)
,
MSG(
"Ein " COLOR(RED) "Kartenausschnitt" COLOR(DEFAULT) " wird am\n"
"rechten unteren Bildrand angezeigt."
BOX_BREAK

"Der " COLOR(YELLOW) "gelbe Pfeil" COLOR(DEFAULT) " zeigt Deine\n"
"derzeitige Position und\n"
"Deine Blickrichtung. Der " COLOR(RED) "rote\n"
"Pfeil" COLOR(DEFAULT) " symbolisiert den Eingang."
BOX_BREAK

"Mit " COLOR(LIGHTBLUE) "[L] " COLOR(DEFAULT) "kannst Du die Anzeige\n"
"ein- und ausblenden."
BOX_BREAK

"Drückst Du " COLOR(RED) "START, " COLOR(DEFAULT) "kannst Du\n"
"Deinen derzeitigen Aufenthaltsort\n"
"feststellen."
BOX_BREAK

"Neben anderen Menüs findest Du\n"
"hier den " COLOR(RED) "Karten-Bildschirm" COLOR(DEFAULT) "."
BOX_BREAK

"Dieser zeigt Dir eine Karte des\n"
"Landes Hyrule oder des Labyrinths,\n"
"in dem Du Dich gerade befindest."
)
,
MSG(
"Il y a une " COLOR(RED) "carte" COLOR(DEFAULT) " affichée dans le \n"
"coin en bas à droite."
BOX_BREAK

"La " COLOR(YELLOW) "flèche jaune" COLOR(DEFAULT) " montre ta position \n"
"et ton orientation actuelles. La \n"
COLOR(RED) "marque rouge" COLOR(DEFAULT) " indique l'endroit par \n"
"lequel tu es entré sur cette carte."
BOX_BREAK

"Tu peux supprimer l'affichage de la \n"
"carte avec  " COLOR(LIGHTBLUE) "[L]" COLOR(DEFAULT) "."
BOX_BREAK

"Pour connaître le nom des divers\n"
"emplacements de la carte, appuie \n"
"sur " COLOR(RED) "START" COLOR(DEFAULT) "."
BOX_BREAK

"Tu feras alors apparaître le\n"
COLOR(RED) "Sous-Menu de la Carte" COLOR(DEFAULT) "."
BOX_BREAK

"Seront alors affichés la carte\n"
"générale d'Hyrule ainsi qu'une\n"
"multitude de renseignements!\n"
"Tu as bien tout compris?"
)
)

DEFINE_MESSAGE(0x103A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "アイテムには　「" COLOR(BLUE) "そうびアイテム" COLOR(DEFAULT) "」と\n"
SHIFT(39) "「" COLOR(YELLOW) "Ｃアイテム" COLOR(DEFAULT) "」、そして\n"
"「" COLOR(LIGHTBLUE) "その他のアイテム" COLOR(DEFAULT) "」の　３種類ある。"
BOX_BREAK

SHIFT(42) "「" COLOR(BLUE) "そうびアイテム" COLOR(DEFAULT) "」は\n"
SHIFT(3) "剣（けん）や　盾（たて）や「服」などの\n"
SHIFT(39) "身につけるアイテム。"
BOX_BREAK

SHIFT(45) "「" COLOR(YELLOW) "Ｃアイテム" COLOR(DEFAULT) "」は、\n"
SHIFT(33) COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "に　セットして\n"
SHIFT(12) "そのボタンで使う　アイテムだ。"
BOX_BREAK

SHIFT(33) "「" COLOR(LIGHTBLUE) "その他のアイテム" COLOR(DEFAULT) "」は、\n"
SHIFT(45) "冒険で　集めた物で\n"
"持っているだけでいい　アイテムだ。"
BOX_BREAK

"「そうび」を　変えたり、確認する時は\n"
SHIFT(6) COLOR(RED) "スタートボタン" COLOR(DEFAULT) "を　押してごらん。"
BOX_BREAK

SHIFT(9) "「アイテムモード」に　はいるから\n"
SHIFT(30) COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "や　" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "で　４つの画面に\n"
SHIFT(15) "切り替えて　変更すれば　いい。"
BOX_BREAK

SHIFT(36) "「" COLOR(BLUE) "そうび" COLOR(DEFAULT) "」の決定は　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "。\n"
SHIFT(12) COLOR(YELLOW) "Ｃアイテム" COLOR(DEFAULT) "は　" COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) "・" COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "で決定。\n"
SHIFT(18) "一度　" COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "や　" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "で　見てごらん。"
BOX_BREAK

SHIFT(30) "長〜い説明だったけど…\n"
SHIFT(69) "わかった？"
)
,
MSG(
"There are three kinds of items:\n"
COLOR(BLUE) "Equipment items" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C] Button items" COLOR(DEFAULT) "\n"
"and " COLOR(LIGHTBLUE) "Quest items" COLOR(DEFAULT) "."
BOX_BREAK

COLOR(BLUE) "Equipment items" COLOR(DEFAULT) " are things like \n"
"the sword, shield and clothes \n"
"that are effective when you equip\n"
"them."
BOX_BREAK

COLOR(YELLOW) "[C] Button items" COLOR(DEFAULT) " can be set to \n"
COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) ", and " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ", and\n"
"used by pressing those buttons."
BOX_BREAK

COLOR(LIGHTBLUE) "Quest items " COLOR(DEFAULT) "are things you \n"
"collect during your adventure. You\n"
"just carry them around."
BOX_BREAK

"If you want to change equipment\n"
"or just check on your inventory,\n"
"press " COLOR(RED) "START" COLOR(DEFAULT) ". \n"
"You will get into the Subscreens."
BOX_BREAK

"Switch to one of the four \n"
"different Subscreens with " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " or\n"
COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "and change or check items as\n"
"you please. Take a look around!"
BOX_BREAK

"When you decide to equip an \n"
COLOR(BLUE) "Equipment item" COLOR(DEFAULT) ", press " COLOR(BLUE) "[A]" COLOR(DEFAULT) ". For\n"
COLOR(YELLOW) "[C] Button items" COLOR(DEFAULT) ", press " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ",\n"
COLOR(YELLOW) "[C-Down] " COLOR(DEFAULT) "or " COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) "."
BOX_BREAK

"That was a pretty long explanation.\n"
"Did you understand everything?"
)
,
MSG(
"Es gibt drei Arten von Gegenständen:\n"
COLOR(BLUE) "Ausrüstungs-" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C]-Knopf- " COLOR(DEFAULT) "und" COLOR(YELLOW) " \n"
COLOR(LIGHTBLUE) "Missions-Gegenstände" COLOR(DEFAULT) "."
BOX_BREAK

COLOR(BLUE) "Ausrüstungs-Gegenstände" COLOR(DEFAULT) " sind \n"
"Dinge wie Schwert, Schild oder \n"
"Rüstung. Wähle sie mit dem Cursor\n"
"aus und bestätige mit " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

COLOR(YELLOW) "[C]-Knopf-Gegenstände " COLOR(DEFAULT) "kannst Du \n"
"auf die Knöpfe " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " oder " COLOR(YELLOW) "[C-Right]\n"
COLOR(DEFAULT) "legen und sie durch diese auch\n"
"einsetzen."
BOX_BREAK

COLOR(LIGHTBLUE) "Missions-Gegenstände " COLOR(DEFAULT) "sammelst Du \n"
"während Deines Abenteuers. Du\n"
"mußt sie nicht speziell auswählen,\n"
"damit Du sie nutzen kannst."
BOX_BREAK

"Willst Du Deine Ausrüstung\n"
"verändern oder auch nur Dein \n"
"Inventar begutachten, drücke\n"
COLOR(RED) "START" COLOR(DEFAULT) "."
BOX_BREAK

"Mit " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " oder " COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "kannst Du" COLOR(LIGHTBLUE) "\n"
COLOR(DEFAULT) "zwischen den verschiedenen\n"
"Menüs hin- und herwechseln."
BOX_BREAK

"Mit Cursor und " COLOR(BLUE) "[A] " COLOR(DEFAULT) "wählst Du einen \n"
COLOR(BLUE) "Ausrüstungs-Gegenstand" COLOR(DEFAULT) ", mit " COLOR(YELLOW) "[C-Left],\n"
"[C-Down] " COLOR(DEFAULT) "oder" COLOR(YELLOW) " [C-Right] " COLOR(DEFAULT) "wählst Du einen \n"
COLOR(YELLOW) "[C]-Knopf-Gegenstand" COLOR(DEFAULT) "."
BOX_BREAK

"Das waren eine Menge\n"
"Erklärungen, nicht wahr?"
)
,
MSG(
"Les objets appartiennent à trois\n"
"catégories différentes:\n"
"l'" COLOR(BLUE) "Equipement" COLOR(DEFAULT) ", l'" COLOR(YELLOW) "Inventaire" COLOR(DEFAULT) " et \n"
"le " COLOR(LIGHTBLUE) "Statut" COLOR(DEFAULT) "."
BOX_BREAK

"Les objets de" COLOR(BLUE) " " COLOR(DEFAULT) "l'" COLOR(BLUE) "Equipement" COLOR(DEFAULT) " sont  \n"
"les épées, les boucliers les \n"
"tuniques, etc... Equipe-les pour \n"
"les rendre actifs!"
BOX_BREAK

"Ceux de l'" COLOR(YELLOW) "Inventaire" COLOR(DEFAULT) " peuvent être \n"
"assignés aux boutons " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) ", " COLOR(YELLOW) "[C-Down]" COLOR(DEFAULT) " et \n"
COLOR(YELLOW) "[C-Right]" COLOR(DEFAULT) ". Pour les utiliser, appuie sur \n"
"le bouton correspondant!"
BOX_BREAK

"Ceux du " COLOR(LIGHTBLUE) "Statut" COLOR(DEFAULT) " sont des objets  \n"
"amassés au gré de l'aventure.\n"
"Tu ne peux que les porter!"
BOX_BREAK

"Si tu veux organiser ton\n"
"équipement ou juste vérifier ton \n"
"inventaire, appuie sur " COLOR(RED) "START" COLOR(DEFAULT) ". Des \n"
"sous-menus apparaîtront!"
BOX_BREAK

"Passe d'un sous-menu à l'autre \n"
"avec " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " ou " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) ". Familiarise-toi \n"
"avec ce système!"
BOX_BREAK

"Utilise " COLOR(BLUE) "[A]" COLOR(DEFAULT) " pour activer un \n"
COLOR(BLUE) "Equipement" COLOR(DEFAULT) ", et  " COLOR(YELLOW) "[C-Left]" COLOR(DEFAULT) "," COLOR(YELLOW) " [C-Down] " COLOR(DEFAULT) "ou" COLOR(YELLOW) " [C-Right]" COLOR(DEFAULT) " \n"
"pour l'" COLOR(YELLOW) "Inventaire" COLOR(DEFAULT) "."
BOX_BREAK

"Bwouff...C'était long!!!\n"
"J'espère que tu as bien tout \n"
"compris?"
)
)

DEFINE_MESSAGE(0x103B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "じゃ、これだけは　おぼえときなヨ。\n"
COLOR(ADJUSTABLE) "セーブ" COLOR(DEFAULT) "したい時は" COLOR(RED) "スタートボタン" COLOR(DEFAULT) "で\n"
SHIFT(6) "「アイテムモード」に　はいって" COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "。"
)
,
MSG(
"Well, just remember this. If you\n"
"want to " COLOR(ADJUSTABLE) "save" COLOR(DEFAULT) ", press " COLOR(RED) "START " COLOR(DEFAULT) "to get\n"
"into the Subscreens, then press\n"
COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "."
)
,
MSG(
"Willst Du Deinen Spielstand \n"
COLOR(ADJUSTABLE) "sichern" COLOR(DEFAULT) ", drücke " COLOR(RED) "START" COLOR(DEFAULT) ", um zu\n"
"den Menüs zu gelangen und dann\n"
COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) ", um zu sichern."
)
,
MSG(
"Souviens-toi bien: pour \n"
COLOR(ADJUSTABLE) "sauvegarder" COLOR(DEFAULT) ", appuie sur " COLOR(RED) "START" COLOR(DEFAULT) " \n"
"pour accéder aux sous-menus puis \n"
"sur " COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x103C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) "おネエちゃんは　ルピー持って\n"
SHIFT(6) "赤いお屋根のお店へ　おかいもの。\n"
SHIFT(75) "クスス！"
BOX_BREAK

SHIFT(60) COLOR(RED) "ルピー" COLOR(DEFAULT) "って…\n"
SHIFT(18) COLOR(ADJUSTABLE) "緑" COLOR(DEFAULT) "が　１　、" COLOR(BLUE) "青" COLOR(DEFAULT) "が　５　、" COLOR(RED) "赤" COLOR(DEFAULT) "は　２０\n"
SHIFT(33) "なんですって。　クスス！"
)
,
MSG(
"My sister took some Rupees and \n"
"went shopping at the store\n"
"that has a red roof.\n"
"Tee hee!"
BOX_BREAK

"Speaking of " COLOR(RED) "Rupees" COLOR(DEFAULT) ", a " COLOR(ADJUSTABLE) "green " COLOR(DEFAULT) "one\n"
"is worth one, a " COLOR(BLUE) "blue" COLOR(DEFAULT) " one is worth\n"
"five and a " COLOR(RED) "red" COLOR(DEFAULT) " one is worth \n"
"twenty. Hee hee!"
)
,
MSG(
"Meine Schwester hat einige \n"
"Rubine genommen und ist zum\n"
"Kokiri-Laden gegangen, um\n"
"dort einzukaufen!"
BOX_BREAK

"Apropos " COLOR(RED) "Rubine" COLOR(DEFAULT) ": Je größer Deine\n"
"Börse ist, desto mehr Rubine\n"
"kannst Du tragen..."
)
,
MSG(
"Ma soeur est partie faire des \n"
"emplettes à la Boutique au toit \n"
"rouge. Hi hi!"
BOX_BREAK

"Au fait, un " COLOR(RED) "Rubis" COLOR(DEFAULT) " " COLOR(ADJUSTABLE) "vert" COLOR(DEFAULT) " ne vaut \n"
"qu'un rubis, mais un " COLOR(BLUE) "bleu" COLOR(DEFAULT) " en vaut\n"
"cinq et un " COLOR(RED) "rouge" COLOR(DEFAULT) " en vaut vingt!\n"
"Hii hii hihi!"
)
)

DEFINE_MESSAGE(0x103D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "この　お店…\n"
SHIFT(21) "この森に　あるものばっかり\n"
SHIFT(39) "売ってるネ。　クスス！"
BOX_BREAK

SHIFT(27) COLOR(RED) "デクの盾（たて）" COLOR(DEFAULT) "の　使い方\n"
SHIFT(45) "知ってる？　クスス！"
BOX_BREAK

SHIFT(27) "まず　盾を　手に入れたら、\n"
COLOR(RED) "スタートボタン" COLOR(DEFAULT) "でアイテムモードに\n"
SHIFT(3) "切りかえて、" COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "や" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "で　画面を選ぶ。"
BOX_BREAK

SHIFT(33) COLOR(BLUE) "そうび画面" COLOR(DEFAULT) "を　選んだら\n"
SHIFT(9) "身につけたいアイテムを　選んで\n"
SHIFT(36) COLOR(BLUE) "[A]" COLOR(DEFAULT) "で　「そうび」するの。"
BOX_BREAK

SHIFT(6) "「そうび」してから　" COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "で　かまえて\n"
SHIFT(9) COLOR(LIGHTBLUE) "[Control-Pad]（スティック）" COLOR(DEFAULT) "で　かまえた角度\n"
SHIFT(12) "変えられるんだって…　クスス！"
)
,
MSG(
"This shop...It sells things you\n"
"can get in the forest for free!\n"
"Tee hee!"
BOX_BREAK

"Do you know how to use the \n"
COLOR(RED) "Deku Shield" COLOR(DEFAULT) "? Tee hee!"
BOX_BREAK

"When you get the shield, press\n"
COLOR(RED) "START " COLOR(DEFAULT) "to get into the Subscreens.\n"
"Select the " COLOR(BLUE) "Equipment Subscreen\n"
COLOR(DEFAULT) "with " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " or " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "."
BOX_BREAK

"On the " COLOR(BLUE) "Equipment Subscreen" COLOR(DEFAULT) ", \n"
"choose the item you want to equip\n"
"and press " COLOR(BLUE) "[A]" COLOR(DEFAULT) " to equip that item."
BOX_BREAK

"Once you equip it, hold it up\n"
"with " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " and change its angle\n"
"with " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ". Tee hee!"
)
,
MSG(
"Manche Dinge in diesem Laden\n"
"findest Du auch im Wald. Den\n"
"Deku-Schild jedoch nicht! Ihn mußt\n"
"Du kaufen!"
BOX_BREAK

"Weißt Du, wie man den " COLOR(RED) "Deku-\n"
"Schild " COLOR(DEFAULT) "richtig einsetzt?"
BOX_BREAK

"Hast Du den Schild erhalten,\n"
"drücke" COLOR(RED) " START" COLOR(DEFAULT) ", um zu den Menüs\n"
"zu gelangen. Begib Dich nun \n"
"zum " COLOR(BLUE) "Ausrüstungs-Menü" COLOR(DEFAULT) "."
BOX_BREAK

"Hier wählst Du mit dem Cursor \n"
"den Schild, mit dem Du Dich\n"
"ausrüsten willst, und drückst" COLOR(BLUE) " [A]" COLOR(DEFAULT) "," COLOR(BLUE) "\n"
COLOR(DEFAULT) "um Deine Wahl zu bestätigen."
BOX_BREAK

"Ist der Schild gewählt, kannst Du\n"
"ihn mit " COLOR(LIGHTBLUE) "[R] " COLOR(DEFAULT) "einsetzen und mit " COLOR(LIGHTBLUE) "[Control-Pad]\n"
COLOR(DEFAULT) "seinen Winkel verändern."
)
,
MSG(
"Ce que propose cette boutique\n"
"se trouve dans la forêt!\n"
"Tii hii!"
BOX_BREAK

"Tu sais comment ça s'utilise un \n"
COLOR(RED) "Bouclier Mojo" COLOR(DEFAULT) ", hein, tu l'sais??"
BOX_BREAK

"Une fois acheté, appuie sur " COLOR(RED) "START\n"
COLOR(DEFAULT) "pour accéder aux sous-menus. \n"
"Sélectionne le " COLOR(BLUE) "sous-menu \n"
"Equipement " COLOR(DEFAULT) "avec " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) " ou " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) "."
BOX_BREAK

"Dans le " COLOR(BLUE) "Sous-Menu Equipement" COLOR(DEFAULT) ", \n"
"choisis l'objet qui t'intéresse et \n"
"active-le avec " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
BOX_BREAK

"Une fois ton bouclier prêt,\n"
"brandis-le avec " COLOR(LIGHTBLUE) "[R]" COLOR(DEFAULT) " et change ton \n"
"angle de défense avec " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
"Tii hii!"
)
)

DEFINE_MESSAGE(0x103E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "の使い方　聞く？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
"Do you want to know how to use\n"
"the " COLOR(YELLOW) "[C-Up] Button" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Willst Du wissen, wie man " COLOR(YELLOW) "[C-Up] \n"
COLOR(DEFAULT) "verwendet?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Veux-tu savoir comment utiliser\n"
"le " COLOR(YELLOW) "bouton" COLOR(DEFAULT) " " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x103F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "を　押すと、\n"
SHIFT(18) "視点を　切り替えられるんダ。"
BOX_BREAK

SHIFT(12) "こういう所では　上からの視点。\n"
SHIFT(30) "表に出たら　自分の視点。\n"
SHIFT(30) "いろいろ　やってごらん。"
BOX_BREAK

SHIFT(27) "「" COLOR(YELLOW) "ナビィ" COLOR(DEFAULT) "」の文字の　点滅は\n"
SHIFT(39) "妖精ナビィが　なにか\n"
SHIFT(24) "話そうと　しているサイン。"
BOX_BREAK

SHIFT(36) COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "で　会話できるから、\n"
SHIFT(57) "話してみなヨ。"
)
,
MSG(
"If you press " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) ", you can\n"
"change your view."
BOX_BREAK

"In a place like this, it will switch\n"
"to a top-down view. Outdoors, in\n"
"a field for example, it will switch\n"
"to a first-person perspective."
BOX_BREAK

"Also, when \"" COLOR(YELLOW) "Navi" COLOR(DEFAULT) "\" is displayed in\n"
"the upper right of your screen, \n"
"Navi the fairy wants to talk to\n"
"you. Use " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " to listen to her!"
)
,
MSG(
"Drückst Du " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) ", kannst Du die\n"
"Kameraperspektive verändern."
BOX_BREAK

"In geschlossenen Räumen wie \n"
"diesem wechselst Du zur Vogel-\n"
"perspektive, unter freiem Himmel\n"
"zur Ego-Perspektive."
BOX_BREAK

"Ist " COLOR(YELLOW) "Navi" COLOR(DEFAULT) " dort zu lesen, will Dir\n"
"Deine Fee etwas mitteilen.\n"
"Ihre Botschaft kannst Du \n"
"dann mit " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " abrufen."
)
,
MSG(
"Appuie sur " COLOR(YELLOW) "[C-Up] " COLOR(DEFAULT) "pour changer de \n"
"vue."
BOX_BREAK

"Dans un endroit comme celui-ci, \n"
"tu activeras une vue du dessus. \n"
"Mais à l'extérieur tu activeras une\n"
"vue subjective."
BOX_BREAK

"Quand \"" COLOR(YELLOW) "Navi" COLOR(DEFAULT) "\" apparaît en haut de \n"
"l'écran, ta fée a quelque chose à\n"
"dire! Appuie alors sur " COLOR(YELLOW) "[C-Up] " COLOR(DEFAULT) "pour \n"
"l'écouter!"
)
)

DEFINE_MESSAGE(0x1040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(6) "ま、やってみれば　わかるけどネ…"
)
,
MSG(
"Well, if you play around with it, \n"
"you'll figure it out."
)
,
MSG(
"Na gut, dann finde es selbst \n"
"heraus!"
)
,
MSG(
"C'est sûr, tu pourrais le découvrir\n"
"tout seul!"
)
)

DEFINE_MESSAGE(0x1041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "…サリアの曲と\n"
SHIFT(42) "ちょっと　ちがうね。"
)
,
MSG(
"That's not quite Saria's Song..."
)
,
MSG(
"Das klingt nicht wie Salias Lied..."
)
,
MSG(
"Mouais...C'est pas exactement \n"
"comme ça, la chanson de Saria..."
)
)

DEFINE_MESSAGE(0x1042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "ミドのアニキ、\n"
SHIFT(30) "すっげー　きげんわりー！\n"
SHIFT(36) "なんか　あったのかナ？"
)
,
MSG(
"Mido" COLOR(RED) " " COLOR(DEFAULT) "is very upset!\n"
"Did something happen to him?"
)
,
MSG(
"Mido" COLOR(RED) " " COLOR(DEFAULT) "ist sehr aufgebracht!\n"
"Ich frage mich, was er hat?"
)
,
MSG(
"Mido est vraiment furieux!\n"
"Que lui est-il arrivé?"
)
)

DEFINE_MESSAGE(0x1043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "なに？　どこ行くの？"
BOX_BREAK

SHIFT(75) "お城…？\n"
SHIFT(48) "お城って　どこヨ？"
)
,
MSG(
"What? Where are you going?!"
BOX_BREAK

"To the castle?\n"
"Where is the castle?"
)
,
MSG(
"Was?! Wo gehst Du hin?"
BOX_BREAK

"Zum Schloß?\n"
"Wo liegt das Schloß?"
)
,
MSG(
"Quoi? Où tu vas?!"
BOX_BREAK

"Au château?\n"
"C'est quoi un château?"
)
)

DEFINE_MESSAGE(0x1044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "オレたち、コキリ族は\n"
SHIFT(6) "森から出たら　シんじゃうんだゼ。\n"
SHIFT(21) "オマエ、ホントに　行くのか？"
)
,
MSG(
"We Kokiri will die if we leave the\n"
"forest!"
BOX_BREAK

"You're not going to try to leave\n"
"the forest, are you?!"
)
,
MSG(
"Kokiri, die das Dorf verlassen,\n"
"sind zum Sterben verdammt!"
BOX_BREAK

"Du hast doch nicht etwa vor,\n"
"es auszuprobieren?!"
)
,
MSG(
"Un Kokiri ne peut quitter la forêt!\n"
"On dit souvent: \n"
"\"Qui n'en sort, n'en meurt!\""
BOX_BREAK

"...Comment ça?\n"
"Tu vas quitter la forêt?\n"
"Et notre proverbe?\n"
"T'en fais quoi?!"
)
)

DEFINE_MESSAGE(0x1045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(24) "おい、" NAME "！\n"
SHIFT(24) "オマエ　なにやったんだヨ？"
BOX_BREAK

UNSKIPPABLE SHIFT(54) "デクの樹サマ…\n"
SHIFT(12) "シんじゃったんじゃないのか？！"
BOX_BREAK

UNSKIPPABLE SHIFT(57) "どーすんだよ！\n"
SHIFT(30) "オマエのせいだかんナ！！" EVENT
)
,
MSG(
UNSKIPPABLE "Hey, " NAME "!\n"
"What did you do?!"
BOX_BREAK

UNSKIPPABLE "The Great Deku Tree...did he...\n"
"die?"
BOX_BREAK

UNSKIPPABLE "How could you do a thing like \n"
"that?! It's all your fault!!" EVENT
)
,
MSG(
UNSKIPPABLE "Hey, " NAME "!\n"
"Was hast Du getan?!"
BOX_BREAK

UNSKIPPABLE "Der Deku-Baum...\n"
"Ist er... tot?"
BOX_BREAK

UNSKIPPABLE "Wie konntest Du das nur tun?! \n"
"Es ist alles Deine Schuld!" EVENT
)
,
MSG(
UNSKIPPABLE "Hé, " NAME "!\n"
"Qu'as-tu encore fait?!"
BOX_BREAK

UNSKIPPABLE "Le très vénérable Arbre Mojo...\n"
"Il est...mort...?"
BOX_BREAK

UNSKIPPABLE "Comment as-tu pu faire une chose \n"
"pareille?! Tout est de ta faute!!\n"
"Nous allons tous mourir à cause \n"
"de toi!!!" EVENT
)
)

DEFINE_MESSAGE(0x1046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "なんだヨ！\n"
SHIFT(6) "オイラんちで　なにやってんだヨ！"
)
,
MSG(
QUICKTEXT_ENABLE "Hey!!" QUICKTEXT_DISABLE "\n"
"What are you doing in my house?!"
)
,
MSG(
"Der Deku-Baum ist tot... Ist damit\n"
"auch unser Ende nah?"
)
,
MSG(
QUICKTEXT_ENABLE "Hé!!" QUICKTEXT_DISABLE "\n"
"Qu'est-ce que tu trafiques \n"
"chez moi?!"
)
)

DEFINE_MESSAGE(0x1047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE "ぶじだったのね　" NAME "。" TEXTID(0x1048)
)
,
MSG(
UNSKIPPABLE NAME ", you're safe!" TEXTID(0x1048)
)
,
MSG(
UNSKIPPABLE "Hallo " NAME "!" TEXTID(0x1048)
)
,
MSG(
UNSKIPPABLE NAME ", tu vas bien?" TEXTID(0x1048)
)
)

DEFINE_MESSAGE(0x1048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "サリアと　" NAME "は\n"
SHIFT(21) "ずっと　友だちだヨ…"
)
,
MSG(
"Saria and " NAME " will be\n"
"friends forever."
)
,
MSG(
"Wir werden doch immer Freunde\n"
"bleiben, oder nicht?"
)
,
MSG(
"Saria et " NAME " seront \n"
"amis pour toujours."
)
)

DEFINE_MESSAGE(0x1049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "デクの樹サマ　どうかしたの？"
)
,
MSG(
"Did something happen to the \n"
"Great Deku Tree?"
)
,
MSG(
"Ist etwas mit dem Deku-Baum \n"
"geschehen?"
)
,
MSG(
"Il est arrivé quelque chose au \n"
"très vénérable Arbre Mojo?"
)
)

DEFINE_MESSAGE(0x104A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "なんだか　森の空気が　変わった…\n"
SHIFT(57) "そんな　感じ…"
)
,
MSG(
"Somehow, it seems that the air in\n"
"the forest has changed."
)
,
MSG(
"Mir scheint, es ist kühler\n"
"geworden im Wald..."
)
,
MSG(
"La forêt a changé... "
)
)

DEFINE_MESSAGE(0x104B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) NAME "、どっか　行くの？"
)
,
MSG(
NAME ", are you going\n"
"to go away?"
)
,
MSG(
NAME ", hast Du vor, uns\n"
"zu verlassen?"
)
,
MSG(
NAME ", \n"
"vas-tu nous quitter?"
)
)

DEFINE_MESSAGE(0x104C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "盾　なくしたら　かえってくる？"
)
,
MSG(
"If you lose your shield, will\n"
"you come back?"
)
,
MSG(
"Kommst Du wieder, wenn Du einen\n"
"neuen Schild brauchst?"
)
,
MSG(
"Si jamais tu perds ton bouclier, \n"
"reviens nous voir!"
)
)

DEFINE_MESSAGE(0x104D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(27) "若い衆の　言いますには…\n"
SHIFT(24) "たいへん　神々しい　お顔…\n"
SHIFT(51) "だそうですッピ。"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(15) "みつぎものとして　" COLOR(RED) "デクの棒" COLOR(DEFAULT) "を\n"
SHIFT(15) "お受け取りくださいませませ。\n"
"持てる数も　ふやしてさしあげます。"
BOX_BREAK

SHIFT(48) "チチンプイプイ…"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(78) "ピッ！！" EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) "All of the young Deku Scrub\n"
"brothers agree...you look exactly \n"
"like our sacred forest totem!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "As an offering from us, please\n"
"accept these " COLOR(RED) "Deku Sticks" COLOR(DEFAULT) ".\n"
"We will also enhance your\n"
"carrying skills!"
BOX_BREAK

"Abracadabra!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Alakazaaaam!" EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) "Meine Brüder und ich sind uns\n"
"einig... Du siehst genauso aus \n"
"wie unser Heiliger Totem!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Nimm diese " COLOR(RED) "Deku-Stäbe" COLOR(DEFAULT) " als\n"
"Zeichen unserer Ehrfurcht.\n"
"Zudem werden wir dafür sorgen,\n"
"daß Du nun mehr tragen kannst!"
BOX_BREAK

"Hobrobbel... Kadobbel..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Kazabbarobbel!" EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) "Mes frères sont tous d'accord...\n"
"Tu es le sosie de notre totem!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Accepte l'offrande de notre \n"
"communauté. Prends ces quelques \n"
COLOR(RED) "Bâtons" COLOR(DEFAULT) " " COLOR(RED) "Mojo" COLOR(DEFAULT) ". Tu pourras \n"
"aussi en transporter plus!"
BOX_BREAK

"Abracadabra!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Alakazaaaam!" EVENT
)
)

DEFINE_MESSAGE(0x104E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "イヤな風が　ふいてきて…\n"
SHIFT(15) "森に　イヤなヤツが　ふえたの。\n"
SHIFT(72) "コワい…"
)
,
MSG(
"Since the Great Deku Tree\n"
"withered...more meanies have \n"
"been appearing in the forest...\n"
"I'm scared!"
)
,
MSG(
"Seit der Deku-Baum uns nicht \n"
"mehr beschützt, treiben sich\n"
"unheimliche Kreaturen in den\n"
"Wäldern herum! Ich habe Angst..."
)
,
MSG(
"Depuis la mort du très vénérable \n"
"Arbre Mojo de nombreux monstres\n"
"sont apparus dans la forêt...\n"
"J'ai très peur!"
)
)

DEFINE_MESSAGE(0x104F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "イヤな風は　森の神殿から\n"
SHIFT(51) "ふいてくるんダ。"
BOX_BREAK

UNSKIPPABLE SHIFT(72) COLOR(RED) "サリア" COLOR(DEFAULT) "が\n"
SHIFT(27) "「なんとかしなきゃ！」って\n"
SHIFT(51) "行っちゃったヨ！" TEXTID(0x1050)
)
,
MSG(
UNSKIPPABLE "An evil wind is blowing from the \n"
"direction of the Forest Temple."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Saria" COLOR(DEFAULT) " left, saying,\n"
"\"I have to do something\n"
"about it!\"" TEXTID(0x1050)
)
,
MSG(
UNSKIPPABLE "Ein kalter, dämonischer Wind \n"
"weht aus der Richtung des \n"
"Waldtempels."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Salia" COLOR(DEFAULT) " ist fort. Sie sagte, sie \n"
"wolle etwas dagegen unternehmen!" TEXTID(0x1050)
)
,
MSG(
UNSKIPPABLE "Un vent diabolique nous vient du \n"
"Temple de la forêt."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Saria" COLOR(DEFAULT) ", avant de partir, nous a dit:\n"
"\"Je dois aller voir ce qu'il se \n"
"passe là-bas!\"" TEXTID(0x1050)
)
)

DEFINE_MESSAGE(0x1050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) COLOR(ADJUSTABLE) "森の神殿" COLOR(DEFAULT) "は、迷いの森をぬけた\n"
SHIFT(54) "聖域に　あるヨ。"
)
,
MSG(
"The " COLOR(ADJUSTABLE) "Forest Temple " COLOR(DEFAULT) "is located \n"
"in the Sacred Forest Meadow in\n"
"the far side of the Lost Woods."
)
,
MSG(
"Der " COLOR(ADJUSTABLE) "Waldtempel " COLOR(DEFAULT) "befindet sich bei \n"
"der Heiligen Lichtung, tief in\n"
"den Verlorenen Wäldern."
)
,
MSG(
"Le " COLOR(ADJUSTABLE) "Temple de la Forêt se trouve\n"
COLOR(DEFAULT) "près du Bosquet Sacré au fond \n"
"des Bois Perdus."
)
)

DEFINE_MESSAGE(0x1051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "サリア…\n"
SHIFT(9) "神殿行ったまま　かえらないの…"
)
,
MSG(
"Saria went to the temple and \n"
"hasn't come back..."
)
,
MSG(
"Salia ging zum Waldtempel und\n"
"kam bisher nicht zurück..."
)
,
MSG(
"Saria est partie dans le temple, \n"
"mais elle n'en est jamais revenue..."
)
)

DEFINE_MESSAGE(0x1052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "おニイちゃん、\n"
SHIFT(30) "デクの盾は　使えないヨ。\n"
SHIFT(36) "これは　「こども」だけ！"
)
,
MSG(
"Hi, mister! You can't use a\n"
"Deku Shield! It's only for\n"
"kids!"
)
,
MSG(
"Sie können mit Sicherheit keinen\n"
"Deku-Schild mehr benutzen, dafür\n"
"sind Sie zu alt!"
)
,
MSG(
"Hé, m'sieur! Vous pouvez pas \n"
"utiliser un Bouclier Mojo!\n"
"C'est pour les gamins!"
)
)

DEFINE_MESSAGE(0x1053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "サリアのこと　知ってるの？\n"
SHIFT(33) "ヘンな　おニイちゃん…" TEXTID(0x1054)
)
,
MSG(
"Where's Saria? \n"
"Do you know Saria, " AGE_BOY "?\n"
"That's weird..." TEXTID(0x1054)
)
,
MSG(
"Wo Salia ist? \n"
"Sie kennen Salia?\n"
"Das ist merkwürdig..." TEXTID(0x1054)
)
,
MSG(
"Hein? Où est Saria? \n"
"Vous la connaissez, Saria?\n"
"Heu...t'es un menteur, monsieur?" TEXTID(0x1054)
)
)

DEFINE_MESSAGE(0x1054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "こんなときに　" COLOR(RED) "ミド" COLOR(DEFAULT) "のアニキは\n"
SHIFT(24) "どこ　行っちゃったんだろ？"
)
,
MSG(
"Where has " COLOR(RED) "Mido" COLOR(DEFAULT) " gone during such\n"
"an emergency?"
)
,
MSG(
COLOR(RED) "Mido" COLOR(DEFAULT) " ist seit einiger Zeit\n"
"verschwunden... Wo er wohl \n"
"steckt?"
)
,
MSG(
"Mais où est donc " COLOR(RED) "Mido" COLOR(DEFAULT) "... \n"
"On a besoin de lui par ces temps \n"
"difficiles!"
)
)

DEFINE_MESSAGE(0x1055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "フーン…　おニイちゃん…\n"
SHIFT(9) "森に　はいっても　ヘーキなんダ。"
BOX_BREAK

SHIFT(6) "ヤなヤツに　イジめられなかった？\n"
SHIFT(21) "デクの樹サマが　いたときは\n"
SHIFT(6) "あんなヤツら　いなかったのにサ。" TEXTID(0x1056)
)
,
MSG(
"I see. You didn't have any \n"
"problems entering the forest, \n"
AGE_BOY "..."
BOX_BREAK

"Did the meanies out there bother\n"
"you much? Before the Great Deku \n"
"Tree died, you wouldn't see things\n"
"like that around here...." TEXTID(0x1056)
)
,
MSG(
"Sie haben mit Sicherheit keine \n"
"Probleme, den Tempel zu betreten,\n"
"mein Herr!"
BOX_BREAK

"Wurden Sie von den Kreaturen\n"
"belästigt? Als der Deku-Baum uns \n"
"noch beschützte, haben sich keine\n"
"Dämonen hier herumgetrieben..." TEXTID(0x1056)
)
,
MSG(
"Vous êtes entré dans la forêt \n"
"sans problème?"
BOX_BREAK

"Les monstres ne vous ont pas \n"
"attaqué? Du temps du Vénérable \n"
"Arbre Mojo, vous n'auriez pas vu \n"
"de pareilles nuisances dans le coin." TEXTID(0x1056)
)
)

DEFINE_MESSAGE(0x1056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "外は　アブないから\n"
SHIFT(21) "ずっと　家の中に　いるんダ。\n"
SHIFT(9) "たいくつで　おかしくなりそう…"
)
,
MSG(
"Since it's dangerous outside, I \n"
"always stay inside my house. \n"
"But I'm bored to death in here!"
)
,
MSG(
"Weil es draußen so gefährlich \n"
"ist, habe ich das Haus nicht mehr \n"
"verlassen. Nun langweile ich mich\n"
"hier zu Tode..."
)
,
MSG(
"C'est super dangereux dehors!\n"
"Alors je reste cloîtré chez moi!\n"
"....j'm'ennuie..."
)
)

DEFINE_MESSAGE(0x1057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "お店で　売ってる　「" COLOR(RED) "矢" COLOR(DEFAULT) "」は、\n"
"「" COLOR(RED) "弓" COLOR(DEFAULT) "」持ってるヒトだけ　買えるの。\n"
SHIFT(18) "おニイちゃん、「弓」持ってる？"
)
,
MSG(
"You can buy " COLOR(RED) "arrows " COLOR(DEFAULT) "at a shop \n"
"only if you have a " COLOR(RED) "bow" COLOR(DEFAULT) ". Have you \n"
"got one, " AGE_BOY "?"
)
,
MSG(
"Wenn Sie einen " COLOR(RED) "Bogen" COLOR(DEFAULT) " besitzen, \n"
"können Sie im Laden " COLOR(RED) "Pfeile" COLOR(DEFAULT) " kaufen. \n"
"Haben Sie einen Bogen?"
)
,
MSG(
"Les " COLOR(RED) "flèches" COLOR(DEFAULT) " ne sont que pour les\n"
"archers... Vous avez un " COLOR(RED) "arc" COLOR(DEFAULT) ", vous?"
)
)

DEFINE_MESSAGE(0x1058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(15) "おニイちゃん、旅のヒト？\n"
SHIFT(9) "じゃ、" NAME "ってコに\n"
SHIFT(9) "どっかで　会わなかった？"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "そのコの　イタズラで、\n"
SHIFT(9) "デクの樹サマ　かれちゃったって\n"
SHIFT(33) "ミドが　言ってたけど…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "サリアだけは　最後まで\n"
SHIFT(3) NAME "を　かばってた…" TEXTID(0x1059)
)
,
MSG(
UNSKIPPABLE "Have you been travelling around\n"
"much, " AGE_GUY "?\n"
"Have you ever met a boy named \n"
NAME "?"
BOX_BREAK

UNSKIPPABLE "Mido said that the Great Deku \n"
"Tree withered because that boy\n"
"did something wrong to it..."
BOX_BREAK

UNSKIPPABLE "Only Saria defended \n"
NAME "--until she left." TEXTID(0x1059)
)
,
MSG(
UNSKIPPABLE "Sie scheinen viel in der Welt\n"
"herumgekommen zu sein...\n"
"Haben Sie jemals einen Jungen \n"
"namens " NAME " getroffen?"
BOX_BREAK

UNSKIPPABLE "Mido behauptete damals, daß \n"
"dieser Junge Schuld am Tod des\n"
"Deku-Baumes hatte..."
BOX_BREAK

UNSKIPPABLE "Nur Salia hat " NAME " \n"
"immer verteidigt..." TEXTID(0x1059)
)
,
MSG(
UNSKIPPABLE "Avez-vous beaucoup voyagé, \n"
"monsieur?\n"
"Avez-vous déja rencontré un \n"
"garçon nommé " NAME "?"
BOX_BREAK

UNSKIPPABLE "Mido à raconté à tout le monde \n"
"que " NAME " a tué le\n"
"vénérable Arbre Mojo..."
BOX_BREAK

UNSKIPPABLE "Il n'y avait que Saria pour dire le \n"
"contraire!\n"
"Enfin...quand Saria était encore\n"
"parmi nous." TEXTID(0x1059)
)
)

DEFINE_MESSAGE(0x1059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "アタシたち　まちがってたのかナ…"
)
,
MSG(
"Maybe we misunderstood...."
)
,
MSG(
"Vielleicht hatte Mido Unrecht..."
)
,
MSG(
"Qui peut savoir la vérité?"
)
)

DEFINE_MESSAGE(0x105A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "おニイちゃんって、\n"
SHIFT(15) "どっかで　会ったこと…　ある？"
)
,
MSG(
"Haven't I seen you somewhere\n"
"before, " AGE_BOY "?"
)
,
MSG(
"Irgendwie kommen Sie mir bekannt\n"
"vor, mein Herr!"
)
,
MSG(
"On s'connaît, monsieur?"
)
)

DEFINE_MESSAGE(0x105B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(30) "おニイちゃん、\n"
SHIFT(30) NAME "ってコ\n"
SHIFT(30) "知らない？"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "むかし、森から　出て行ったまま\n"
SHIFT(48) "帰ってこないの…" TEXTID(0x105C)
)
,
MSG(
UNSKIPPABLE AGE_GUY_C ", do you know a boy \n"
"named " NAME "?"
BOX_BREAK

UNSKIPPABLE "He left the forest and never\n"
"came back..." TEXTID(0x105C)
)
,
MSG(
UNSKIPPABLE "Kennen Sie einen Jungen namens \n"
NAME "?"
BOX_BREAK

UNSKIPPABLE "Er hat den Wald verlassen und \n"
"kehrte nie zurück..." TEXTID(0x105C)
)
,
MSG(
UNSKIPPABLE "Monsieur, connaissez-vous un \n"
"garçon du nom de " NAME "?"
BOX_BREAK

UNSKIPPABLE "Il a quitté la forêt et n'est jamais\n"
"revenu..." TEXTID(0x105C)
)
)

DEFINE_MESSAGE(0x105C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "もう、帰ってこないのかナ〜。\n"
SHIFT(12) NAME "…"
)
,
MSG(
"I wonder if " NAME " will \n"
"ever return?"
)
,
MSG(
"Ich frage mich, ob " NAME "  \n"
"jemals zurückkommen wird?"
)
,
MSG(
"Je me demande si " NAME "  \n"
"reviendra un jour..."
)
)

DEFINE_MESSAGE(0x105D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(9) "ニイちゃん　イイな、おっきくて！\n"
SHIFT(48) "ニイちゃんみたく\n"
SHIFT(33) "おっきくなりたいな〜。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "おっきくなって　強くなって…\n"
SHIFT(6) "デクナッツとか　やっつけたいな。\n"
SHIFT(78) "でも…" TEXTID(0x105E)
)
,
MSG(
UNSKIPPABLE "It would be awesome to be big \n"
"like you, mister! I really want to\n"
"be big like you!"
BOX_BREAK

UNSKIPPABLE "I want to be big and strong and \n"
"beat up the Deku Scrubs, but..." TEXTID(0x105E)
)
,
MSG(
UNSKIPPABLE "Es muß fantastisch sein, wenn \n"
"man so groß ist. Ich wäre auch \n"
"gerne so groß!"
BOX_BREAK

UNSKIPPABLE "Das wäre mein Traum. Dann \n"
"könnte ich das Unkraut mit bloßen \n"
"Händen beseitigen..." TEXTID(0x105E)
)
,
MSG(
UNSKIPPABLE "Etre grand, c'est trop cool!\n"
"Je veux être une grosse brute \n"
"comme vous, m'sieur!"
BOX_BREAK

UNSKIPPABLE "I Je voudrais être très grand et \n"
"très fort pour me battre contre \n"
"les Pestes Mojo, mais...je ne suis\n"
"que petit et faible..." TEXTID(0x105E)
)
)

DEFINE_MESSAGE(0x105E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "オイラたち、コキリ族って\n"
SHIFT(18) "おっきくなれないんだって…\n"
SHIFT(57) "つまんねーの！"
)
,
MSG(
"We Kokiri won't ever get bigger \n"
"for the rest of our lives...\n"
"What a bummer!"
)
,
MSG(
"Doch dummerweise altern wir \n"
"Kokiri nicht...\n"
"Das ist schade!"
)
,
MSG(
"Nous les Kokiris ne seront jamais \n"
"grands...\n"
"C'est vraiment pas drôle!"
)
)

DEFINE_MESSAGE(0x105F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "なんで　ニイちゃん、\n"
SHIFT(48) "妖精　つれてるの？\n"
SHIFT(3) "オイラたちの　仲間じゃないのに…"
)
,
MSG(
"Why is that fairy following you \n"
"around? You're not one of us!"
)
,
MSG(
"Warum folgt Ihnen eine Fee?\n"
"Sie sind kein Kokiri!"
)
,
MSG(
"Pourquoi une fée vous suit \n"
"partout? Vous n'êtes pourtant pas \n"
"un Kokiri!"
)
)

DEFINE_MESSAGE(0x1060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(51) "なんだ、オマエ！？"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "そんな　" COLOR(ADJUSTABLE) "コキリっぽい服" COLOR(DEFAULT) "　なんかで\n"
SHIFT(45) "ごまかされないゾ！" TEXTID(0x1061)
)
,
MSG(
UNSKIPPABLE "What are you? Though you wear \n"
"Kokirish clothing, you can't\n"
"fool me!" TEXTID(0x1061)
)
,
MSG(
UNSKIPPABLE "Wer sind Sie? Mich können Sie \n"
"nicht täuschen, auch wenn Sie  \n"
"Kokiri-Kleidung tragen!" TEXTID(0x1061)
)
,
MSG(
UNSKIPPABLE "Mais qui êtes-vous? \n"
"Votre habit Kokiri ne marche pas!\n"
"Je ne suis pas né de la dernière\n"
"giboulée!" TEXTID(0x1061)
)
)

DEFINE_MESSAGE(0x1061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "オイラ、サリアに\n"
SHIFT(39) "「やくそく」したんダ。\n"
SHIFT(27) "ここは　ダレも　通さない！"
)
,
MSG(
"I promised Saria I would never\n"
"let anybody go through here."
)
,
MSG(
"Ich habe Salia versprochen, sie\n"
"vor allen Gefahren zu schützen."
)
,
MSG(
"J'ai promis à Saria de ne laisser \n"
"passer personne."
)
)

DEFINE_MESSAGE(0x1062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "ボク、" COLOR(RED) "デクの樹のこども　" COLOR(DEFAULT) "デス！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "キミと　サリアが、森の神殿の\n"
SHIFT(9) "のろいを　解いてくれたから　ボク、\n"
SHIFT(18) "生まれることが　できたデス。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "本当に　ありがとうデス。"
)
,
MSG(
UNSKIPPABLE "Hi there! I'm the " COLOR(RED) "Deku Tree \n"
"sprout" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Because you and Saria" COLOR(RED) " " COLOR(DEFAULT) "broke the\n"
"curse on the Forest Temple, I \n"
"can grow and flourish!"
BOX_BREAK

UNSKIPPABLE "Thanks a lot!"
)
,
MSG(
UNSKIPPABLE "Sei gegrüßt! Ich bin der " COLOR(RED) "Sproß \n"
"des Deku-Baumes" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Weil Du und Salia den Fluch\n"
"vom Waldtempel genommen haben,\n"
"kann ich wachsen und sprießen!"
BOX_BREAK

UNSKIPPABLE "Hab Dank!"
)
,
MSG(
UNSKIPPABLE "Bonzour tout le monde! Ze suis le \n"
COLOR(RED) "Bourzeon de l'Arbre Mozo" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Comme tu as brizé la malédiction\n"
"du Temple de la Forêt, ze peux \n"
"croître et fleurir!"
BOX_BREAK

UNSKIPPABLE "Merzi beaucoup!"
)
)

DEFINE_MESSAGE(0x1063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "昔の仲間には　もう　会ったデスか？\n"
SHIFT(18) "みんな　大きくなった　キミに\n"
SHIFT(33) "気づかなかったデスね。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) COLOR(ADJUSTABLE) "コキリ族" COLOR(DEFAULT) "は　大人にならない民族…\n"
SHIFT(9) "七年たっても　子供のまま　デス。"
)
,
MSG(
UNSKIPPABLE "Hey, have you seen your old\n"
"friends? None of them recognized\n"
"you with your grown-up body, did\n"
"they?"
BOX_BREAK

UNSKIPPABLE "That's because the " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) " never\n"
"grow up! Even after seven years,\n"
"they're still kids!"
)
,
MSG(
UNSKIPPABLE "Hast Du Deine alten Freunde\n"
"wiedergesehen? Wahrscheinlich \n"
"wird Dich von ihnen niemand \n"
"mehr wiedererkennen..."
BOX_BREAK

UNSKIPPABLE "Das liegt daran, daß " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) " niemals\n"
"altern. Die vergangenen Jahre \n"
"gingen an ihnen spurlos vorüber!"
)
,
MSG(
UNSKIPPABLE "Tu as vu tes zanciens zamis?\n"
"Ze ne pense pas qu'ils te \n"
"reconnaissent avec ta grande \n"
"taille..."
BOX_BREAK

UNSKIPPABLE "C'est parze que les " COLOR(ADJUSTABLE) "Kokiris" COLOR(DEFAULT) " ne \n"
"grandissent zamais! Même après \n"
"sept ans, ils restent des zenfants!"
)
)

DEFINE_MESSAGE(0x1064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(69) "それじゃ、\n"
SHIFT(6) "なぜ　キミは　大人になったのか…\n"
SHIFT(51) "知りたいデスか？"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "気づいてるかも　知れないけど、\n"
SHIFT(9) "キミは　コキリ族じゃないデス…\n"
SHIFT(15) "本当は　" COLOR(LIGHTBLUE) "ハイリア人　" COLOR(DEFAULT) "なんデス！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "いつか　その秘密を　話すこと、\n"
SHIFT(6) "それが　ボクの役目だったんデス。"
)
,
MSG(
UNSKIPPABLE "You must be wondering why only\n"
"you have grown up!"
BOX_BREAK

UNSKIPPABLE "Well, as you might have already \n"
"guessed, you are not a Kokiri!\n"
"You are actually a " COLOR(LIGHTBLUE) "Hylian" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "I am happy to finally reveal this\n"
"secret to you!"
)
,
MSG(
UNSKIPPABLE "Sicher fragst Du Dich, warum Du\n"
"gealtert bist!"
BOX_BREAK

UNSKIPPABLE "Nun, Du hast es sicher schon \n"
"geahnt, Du bist kein Kokiri!\n"
"Du bist ein" COLOR(LIGHTBLUE) " Hylianer" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Ich bin froh, Dir dieses Geheimnis\n"
"endlich offenbart zu haben!"
)
,
MSG(
UNSKIPPABLE "Tu dois te demander alors \n"
"pourquoi tu as grandi!"
BOX_BREAK

UNSKIPPABLE "Bon, comme tu as dézà dû le \n"
"deviner, tu n'es pas vraiment un \n"
"Kokiri! Tu es zen fait " COLOR(LIGHTBLUE) "Hylien" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Ze suis si content de te révéler\n"
"ce secret!"
)
)

DEFINE_MESSAGE(0x1065, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
MSG(
SHIFT(45) "まだ　ハイラル王が\n"
SHIFT(27) "この国を　統一する以前…\n"
SHIFT(18) "はげしい戦争が　あったデス。"
BOX_BREAK_DELAYED(90)

SHIFT(18) "ある時、その戦火を　のがれて\n"
SHIFT(15) "ハイリア人の　" COLOR(RED) "母親" COLOR(DEFAULT) "と" COLOR(RED) "赤ん坊" COLOR(DEFAULT) "が\n"
SHIFT(18) "禁断の森に　逃げ込んだデス。"
BOX_BREAK_DELAYED(90)

SHIFT(18) "深いキズを負っていた母親は\n"
SHIFT(39) "森の精霊　" COLOR(RED) "デクの樹" COLOR(DEFAULT) "に\n"
SHIFT(12) "我が子の命を　たくしたのデス。"
BOX_BREAK_DELAYED(90)

SHIFT(18) "デクの樹は　その子を　見た時\n"
"世界の未来にかかわる宿命を　感じ、\n"
SHIFT(15) "受け入れる決意をしたのデス。"
BOX_BREAK_DELAYED(90)

SHIFT(27) "母親が　息をひきとった後\n"
SHIFT(3) "赤ん坊は" COLOR(ADJUSTABLE) "コキリ族" COLOR(DEFAULT) "として育てられ、\n"
SHIFT(3) "ついに　運命の日を　迎えたのデス！" FADE(90)
)
,
MSG(
"Some time ago, before the King of\n"
"Hyrule unified this country, there\n"
"was a fierce war in our world."
BOX_BREAK_DELAYED(90)

"One day, to escape from the fires\n"
"of the war, a " COLOR(RED) "Hylian mother " COLOR(DEFAULT) "and \n"
"her " COLOR(RED) "baby boy" COLOR(DEFAULT) " entered this \n"
"forbidden forest."
BOX_BREAK_DELAYED(90)

"The mother was gravely injured...\n"
"Her only choice was to entrust\n"
"the child to the " COLOR(RED) "Deku Tree" COLOR(DEFAULT) ", the \n"
"guardian spirit of the forest."
BOX_BREAK_DELAYED(90)

"The Deku Tree could sense that\n"
"this was a child of destiny, whose\n"
"fate would affect the entire world,\n"
"so he took him into the forest."
BOX_BREAK_DELAYED(90)

"After the mother passed away, \n"
"the baby was raised as a " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) ".\n"
"And now, finally, the day of \n"
"destiny has come!" FADE(90)
)
,
MSG(
"Vor langer Zeit fand in Hyrule\n"
"ein Krieg statt, der nahezu eine\n"
"halbe Dekade andauerte."
BOX_BREAK_DELAYED(90)

"Um diesem Krieg zu entkommen,\n"
"gab eine " COLOR(RED) "junge hylianische Mutter\n"
COLOR(DEFAULT) "ihr" COLOR(RED) " Baby " COLOR(DEFAULT) "in die Obhut des Waldes."
BOX_BREAK_DELAYED(90)

"Als sich das Leben der Mutter \n"
"dem Ende zuneigte, vertraute sie\n"
"es dem " COLOR(RED) "Deku-Baum " COLOR(DEFAULT) "an..."
BOX_BREAK_DELAYED(90)

"Der Deku-Baum ahnte bereits, daß\n"
"es sich bei dem Baby um ein Kind\n"
"des Schicksals handelte!"
BOX_BREAK_DELAYED(90)

"Die" COLOR(ADJUSTABLE) " Kokiri " COLOR(DEFAULT) "zogen das Kind auf, und\n"
"es lebte dort bis zu jenem Tag, da\n"
"sich die Prophezeiung erfüllte." FADE(90)
)
,
MSG(
"Il y a très longtemps, il y eut \n"
"une guerre terrible, avant même \n"
"que le roi Hyrule n'unifie ce pays."
BOX_BREAK_DELAYED(90)

"Un zour, pour échapper à ce \n"
"conflit, une " COLOR(RED) "Maman Hylienne" COLOR(DEFAULT) " et son \n"
COLOR(RED) "Petit Bébé" COLOR(DEFAULT) " entrèrent dans cette \n"
"forêt interdite."
BOX_BREAK_DELAYED(90)

"Cette pauvre maman était \n"
"gravement blessée. Son seul espoir\n"
"était de confier son bébé à l'Arbre\n"
"Mozo, l'esprit gardien de la forêt."
BOX_BREAK_DELAYED(90)

"L'Arbre Mozo pouvait dézà sentir \n"
"le pouvoir de cet enfant dont la \n"
"destinée allait affecter le monde \n"
"entier. Ainsi fut-il adopté..."
BOX_BREAK_DELAYED(90)

"Après la mort de sa pauvre \n"
"maman, il fut élevé comme un \n"
COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) ". Et désormais sa destinée\n"
"doit s'accomplir!" FADE(90)
)
)

DEFINE_MESSAGE(0x1066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "キミは　" COLOR(LIGHTBLUE) "ハイリア人" COLOR(DEFAULT) "の子…\n"
SHIFT(24) "いずれ　この　コキリの森を\n"
SHIFT(15) "出て行く　運命だったのデス…"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "そして…\n"
SHIFT(6) "自分の宿命を　知った今、キミには\n"
SHIFT(18) "やるべきことが　あるのデス。"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "そう…\n"
SHIFT(18) "このハイラルを　救う使命が！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "さあ　" NAME "、\n"
SHIFT(12) "すべての神殿の　のろいを解き、\n"
SHIFT(18) "平和を　取り戻すのデス！！"
)
,
MSG(
UNSKIPPABLE "You are a " COLOR(LIGHTBLUE) "Hylian" COLOR(DEFAULT) ", and were\n"
"always bound to leave this forest."
BOX_BREAK

UNSKIPPABLE "And now...\n"
"You have learned your own \n"
"destiny...\n"
"So you know what you must do..."
BOX_BREAK

UNSKIPPABLE "That's right...\n"
"You must save the land of \n"
"Hyrule!"
BOX_BREAK

UNSKIPPABLE "Now, " NAME ", break the \n"
"curses on all of the Temples,\n"
"and return peace to Hyrule!!"
)
,
MSG(
UNSKIPPABLE "Du bist " COLOR(LIGHTBLUE) "Hylianer" COLOR(DEFAULT) ". Es war immer\n"
"Deine Bestimmung, den Wald zu \n"
"verlassen."
BOX_BREAK

UNSKIPPABLE "Dein Schicksal...\n"
"Nun hat es sich endlich erfüllt!\n"
"Du weißt, was Du zu tun hast..."
BOX_BREAK

UNSKIPPABLE "Du mußt Hyrule vor dem Untergang \n"
"bewahren!"
BOX_BREAK

UNSKIPPABLE "So sei es, " NAME "! Befreie\n"
"die Tempel von ihren Flüchen und\n"
"sorge für Frieden in Hyrule!"
)
,
MSG(
UNSKIPPABLE "Tu es zun " COLOR(LIGHTBLUE) "Hylien" COLOR(DEFAULT) ", depuis \n"
"touzours ze savais que tu \n"
"devais quitter la forêt."
BOX_BREAK

UNSKIPPABLE "Tu connais ta propre destinée...\n"
"Tu sais ce qu'il te reste à \n"
"faire..."
BOX_BREAK

UNSKIPPABLE "Tu dois sauver Hyrule!"
BOX_BREAK

UNSKIPPABLE "Va, " NAME "... Dissipe la \n"
"malédiction zetée sur les temples\n"
"et rétablis paix et amour sur \n"
"Hyrule!!"
)
)

DEFINE_MESSAGE(0x1067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(78) "それ…\n"
SHIFT(15) "サリアが　よく　ふいてた曲ダ！\n"
SHIFT(6) "オマエ…　サリア　知ってんのか？"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "その曲…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "サリアが　友だちにだけ\n"
SHIFT(21) "おしえてくれる　歌なのに…" TEXTID(0x106F)
)
,
MSG(
UNSKIPPABLE SHIFT(55) "That melody?!"
BOX_BREAK

UNSKIPPABLE "Saria plays that song all the \n"
"time!\n"
"You...Do you know Saria?"
BOX_BREAK

UNSKIPPABLE "That song..."
BOX_BREAK

UNSKIPPABLE "Saria taught that song only \n"
"to her friends..." TEXTID(0x106F)
)
,
MSG(
UNSKIPPABLE SHIFT(55) "Diese Melodie?!"
BOX_BREAK

UNSKIPPABLE "Salia hat sie geschrieben! \n"
"Sie... Sie kennen Salia?"
BOX_BREAK

UNSKIPPABLE "Das Lied..."
BOX_BREAK

UNSKIPPABLE "Salia hat das Lied nur ihren \n"
"engsten Freunden beigebracht..." TEXTID(0x106F)
)
,
MSG(
UNSKIPPABLE SHIFT(52) "Cette melodie?!"
BOX_BREAK

UNSKIPPABLE "Saria la jouait tout le temps!\n"
"Vous...connaissez Saria?"
BOX_BREAK

UNSKIPPABLE "Cette chanson..."
BOX_BREAK

UNSKIPPABLE "Saria ne l'a enseignée qu'à ses\n"
"amis..." TEXTID(0x106F)
)
)

DEFINE_MESSAGE(0x1068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "オマエ　見てると…\n"
SHIFT(66) "なんだか…\n"
SHIFT(39) "アイツ　思い出すヨ…"
)
,
MSG(
"When I see you... \n"
"I don't know why, but I remember...\n"
"him..."
)
,
MSG(
"Komisch... \n"
"Irgendwie erinnert er mich an\n"
"jemanden..."
)
,
MSG(
"Je ne sais pas pourquoi, mais... \n"
"Vous me rappelez...l'autre..."
)
)

DEFINE_MESSAGE(0x1069, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(21) "我が魔力に　囚われし者よ…\n"
SHIFT(36) "夢と　現実の　はざまで\n"
SHIFT(18) "みじめな屍を　さらすがよい！"
)
,
MSG(
UNSKIPPABLE "I have you now!\n"
"In this gap between dreams and \n"
"reality, soon all that will remain\n"
"of you will be your dead body!"
)
,
MSG(
UNSKIPPABLE "Der, der von meinem Fluch gebannt,\n"
"im Reich zwischen Wirklichkeit und\n"
"Traum, kann sein leblos Gebein\n"
"schon jetzt begraben!"
)
,
MSG(
UNSKIPPABLE "Capturé dans l'enfer de ma \n"
"malédiction, assis sur le seuil de\n"
"la réalité et du rêve, il ne restera\n"
"de toi qu'un corps décharné!"
)
)

DEFINE_MESSAGE(0x106A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "ありがとう…\n"
SHIFT(15) "アナタのおかげで　賢者として\n"
SHIFT(15) "目覚めることが　できました…"
BOX_BREAK

UNSKIPPABLE SHIFT(48) "ワタシは　" COLOR(ADJUSTABLE) "サリア" COLOR(DEFAULT) "。\n"
SHIFT(45) "森の神殿の　賢者…"
)
,
MSG(
UNSKIPPABLE "Thank you...\n"
"Because of you, I could awaken as\n"
"a Sage..."
BOX_BREAK

UNSKIPPABLE "I am " COLOR(ADJUSTABLE) "Saria" COLOR(DEFAULT) ".\n"
"The Sage of the Forest Temple..."
)
,
MSG(
UNSKIPPABLE "Danke!\n"
"Dank Deiner Hilfe wurde ich in \n"
"den Kreis der Weisen\n"
"aufgenommen."
BOX_BREAK

UNSKIPPABLE "Nun bin ich die\n"
"Weise des Waldtempels..."
)
,
MSG(
UNSKIPPABLE "Merci, merci beaucoup...\n"
"Grâce à toi, je m'éveille à la \n"
"conscience de Sage..."
BOX_BREAK

UNSKIPPABLE "Je suis " COLOR(ADJUSTABLE) "Saria" COLOR(DEFAULT) ".\n"
"Sage du Temple de la Forêt..."
)
)

DEFINE_MESSAGE(0x106B, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(33) "サリアは、いつまでも…\n"
SHIFT(21) "アナタの　友だちだからネ…" FADE(80)
)
,
MSG(
UNSKIPPABLE SHIFT(40) "Saria will always be...\n"
SHIFT(60) "your friend..." FADE(80)
)
,
MSG(
UNSKIPPABLE SHIFT(56) "Ich werde immer\n"
SHIFT(45) "Deine Freundin sein..." FADE(80)
)
,
MSG(
UNSKIPPABLE SHIFT(38) "Saria sera toujours...\n"
SHIFT(68) "Ton amie..." FADE(80)
)
)

DEFINE_MESSAGE(0x106C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "時の流れは　残酷なもの…\n"
SHIFT(18) "人それぞれ　速さは　ちがう…\n"
SHIFT(12) "そして　それは　変えられない…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "時は流れても　変わらぬもの、\n"
SHIFT(30) "それは　幼き日の　追憶…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "思い出の場所へ　誘う調べ\n"
SHIFT(9) COLOR(ADJUSTABLE) "森のメヌエット" COLOR(DEFAULT) "を　聞くがいい…"
)
,
MSG(
UNSKIPPABLE "The flow of time is always cruel...\n"
"Its speed seems different for\n"
"each person, but no one can \n"
"change it..."
BOX_BREAK

UNSKIPPABLE "A thing that doesn't change with\n"
"time is a memory of younger days..."
BOX_BREAK

UNSKIPPABLE "In order to come back here again,\n"
"play the " COLOR(ADJUSTABLE) "Minuet of Forest" COLOR(DEFAULT) "."
)
,
MSG(
UNSKIPPABLE "Der Fluß der Zeit ist grausam...\n"
"Seine Geschwindigkeit scheint für\n"
"jede Person vorbestimmt. Niemand \n"
"hat die Möglichkeit, sie zu ändern..."
BOX_BREAK

UNSKIPPABLE "Etwas, das sich nie verändern \n"
"wird, sind die Erinnerungen an \n"
"vergangene Tage. Genieße daher\n"
"jede Sekunde Deines Lebens..."
BOX_BREAK

UNSKIPPABLE "Mit dem " COLOR(ADJUSTABLE) "Menuett des Waldes\n"
COLOR(DEFAULT) "kehrst Du zum Waldtempel zurück."
)
,
MSG(
UNSKIPPABLE "La course du temps est cruelle...\n"
"Sa vitesse est perçue différemment\n"
"par chacun, mais personne ne peut\n"
"la modifier..."
BOX_BREAK

UNSKIPPABLE "Seule la mémoire des jours \n"
"anciens n'est pas altérée..."
BOX_BREAK

UNSKIPPABLE "Pour revenir ici, joue le \n"
COLOR(ADJUSTABLE) "Menuet des bois" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x106D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(6) NAME "…　また会おう！"
)
,
MSG(
UNSKIPPABLE NAME "...\n"
"I'll see you again..."
)
,
MSG(
UNSKIPPABLE NAME "...\n"
"Wir werden uns wiedersehen..."
)
,
MSG(
UNSKIPPABLE NAME "...\n"
"A très bientôt..."
)
)

DEFINE_MESSAGE(0x106E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "サリア　まだ　帰ってこない…\n"
SHIFT(36) "でも　いつか　きっと…\n"
SHIFT(36) "きっと　帰ってくるヨ！"
)
,
MSG(
"Saria hasn't come back yet...\n"
"But I know she'll return someday..."
)
,
MSG(
"Salia ist noch immer nicht zurück...\n"
"Doch ich weiß, eines Tages wird \n"
"sie wiederkommen..."
)
,
MSG(
"Saria n'est pas encore revenue...\n"
"Mais je sais qu'elle reviendra \n"
"bientôt..."
)
)

DEFINE_MESSAGE(0x106F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(66) "わかった…\n"
SHIFT(54) "オマエ　信じる！" TEXTID(0x1068)
)
,
MSG(
UNSKIPPABLE "OK...\n"
"I trust you." TEXTID(0x1068)
)
,
MSG(
UNSKIPPABLE "Nun gut...\n"
"Ich vertraue Dir." TEXTID(0x1068)
)
,
MSG(
UNSKIPPABLE "OK...\n"
"Je te fais confiance." TEXTID(0x1068)
)
)

DEFINE_MESSAGE(0x1070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(72) "そうか…"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "サリア…\n"
SHIFT(27) "もう　戻ってこないのか…"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "でも…　\n"
SHIFT(9) "オイラ、サリアと　約束したんダ。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) NAME "が　帰ってきたら\n"
SHIFT(3) "サリアが　ずっと　待ってたこと…\n"
SHIFT(3) "ぜったい　おしえてやる！　って…"
BOX_BREAK

UNSKIPPABLE SHIFT(69) TEXT_SPEED(3) "だって・・・\n"
SHIFT(36) "サリアは、アイツを・・・" TEXT_SPEED(0) TEXTID(0x1071)
)
,
MSG(
UNSKIPPABLE "Oh...I see..."
BOX_BREAK

UNSKIPPABLE "Saria won't ever come back..."
BOX_BREAK

UNSKIPPABLE "But...I...I made a promise to \n"
"Saria..."
BOX_BREAK

UNSKIPPABLE "If " NAME " came back, I \n"
"would be sure to tell him that \n"
"Saria had been waiting for him..."
BOX_BREAK

UNSKIPPABLE "Because " TEXT_SPEED(3) "Saria...really...\n"
"liked..." TEXT_SPEED(0) TEXTID(0x1071)
)
,
MSG(
UNSKIPPABLE "Oh... Ich verstehe."
BOX_BREAK

UNSKIPPABLE "Salia wird nicht zurückkommen."
BOX_BREAK

UNSKIPPABLE "Ich gab Salia das Versprechen, \n"
"daß..."
BOX_BREAK

UNSKIPPABLE "...ich " NAME " etwas mitteile,\n"
"falls er zurückkehrt. Salia sagte,\n"
"sie würde auf ihn warten...\n"
"Für immer..."
BOX_BREAK

UNSKIPPABLE "Ich glaube " TEXT_SPEED(3) "Salia... mochte...\n"
"ihn..." TEXT_SPEED(0) TEXTID(0x1071)
)
,
MSG(
UNSKIPPABLE "Oh...Je vois..."
BOX_BREAK

UNSKIPPABLE "Saria ne reviendra jamais..."
BOX_BREAK

UNSKIPPABLE "Mais...je...j'avais fait une promesse \n"
"à Saria..."
BOX_BREAK

UNSKIPPABLE "Si " NAME " revient un jour, \n"
"je voudrais lui dire que Saria \n"
"l'attend..."
BOX_BREAK

UNSKIPPABLE "Parce que " TEXT_SPEED(3) "Saria...aimait..." TEXT_SPEED(0) TEXTID(0x1071)
)
)

DEFINE_MESSAGE(0x1071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "なあ、オマエ！！"
BOX_BREAK

SHIFT(18) "どっかで　アイツに　会ったら\n"
SHIFT(12) "このこと…　伝えてほしいんダ。" TEXTID(0x10D6)
)
,
MSG(
SHIFT(75) "Hey, you."
BOX_BREAK

"If you see him somewhere, please\n"
"let him know..." TEXTID(0x10D6)
)
,
MSG(
SHIFT(75) "Fremder..."
BOX_BREAK

"Falls Sie ihn irgendwo sehen,\n"
"lassen Sie es ihn wissen..." TEXTID(0x10D6)
)
,
MSG(
SHIFT(70) "Mais toi..."
BOX_BREAK

"Fais-lui le message...\n"
"S'il te plaît..." TEXTID(0x10D6)
)
)

DEFINE_MESSAGE(0x1072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "けんじゅつ　おしえてくれよぉ！\n"
SHIFT(45) "オイラ　" COLOR(ADJUSTABLE) "[B]" COLOR(DEFAULT) "押すしか\n"
SHIFT(18) "やったこと　ないんだよぉ〜！"
)
,
MSG(
"Teach me some fancy fencing!\n"
"All I've ever done is tap " COLOR(ADJUSTABLE) "[B] " COLOR(DEFAULT) "all\n"
"my life!"
)
,
MSG(
"Fremder, ich möchte von Ihnen \n"
"lernen. Können Sie mir ein paar\n"
"neue Kampftechniken beibringen?"
)
,
MSG(
"Apprends-moi à me battre comme\n"
"toi! Tout ce que je sais faire \n"
"c'est appuyer sur " COLOR(ADJUSTABLE) "[B]!\n"
COLOR(DEFAULT) "Haaa! Si j'avais lu les pancartes!"
)
)

DEFINE_MESSAGE(0x1073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "やっぱり、おニイちゃんって\n"
SHIFT(33) "だれかに　にてるナァ…"
)
,
MSG(
"I still think you really look like\n"
"somebody I've seen before, " AGE_BOY "."
)
,
MSG(
"Ich glaube immer noch, daß ich\n"
"Sie irgendwoher kenne..."
)
,
MSG(
"Vous ressemblez à quelqu'un que \n"
"je connais, monsieur."
)
)

DEFINE_MESSAGE(0x1074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "ニイちゃん、カッコイーな〜！\n"
"オイラも　ニイちゃんみたくなるゾ！\n"
SHIFT(45) "ちっちゃくてもね。"
)
,
MSG(
"You're such a big, strong guy!\n"
"I really want to be like you \n"
"someday even though I'll always be\n"
"small."
)
,
MSG(
"So groß und kräftig wie Sie wäre\n"
"ich auch gerne. Hmmm, größer\n"
"werde ich bestimmt nicht. Vielleicht \n"
"klappt's ja mit der Kraft..."
)
,
MSG(
"Vous êtes tellement fort! Un jour, \n"
"je serai comme vous! Même si je \n"
"reste un nabot toute ma vie."
)
)

DEFINE_MESSAGE(0x1075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) NAME "…\n"
SHIFT(36) "帰ってくるかなぁ…"
)
,
MSG(
NAME "... I wonder if he \n"
"will come back..."
)
,
MSG(
NAME "...\n"
"Ich frage mich, ob er\n"
"jemals zurückkehrt..."
)
,
MSG(
NAME "... \n"
"Je me demande s'il reviendra\n"
"un jour..."
)
)

DEFINE_MESSAGE(0x1076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "オイラ…　なんだか、昔っから\n"
SHIFT(15) "ニイちゃん　知ってるよーな…\n"
SHIFT(36) "そんな気が　するんダ。"
)
,
MSG(
"I feel like I've known you for a\n"
"long time, " AGE_BOY "!"
)
,
MSG(
"Es kommt mir so vor, als würde\n"
"ich Sie schon seit Jahren kennen!"
)
,
MSG(
"J'ai l'impression de vous connaître \n"
"depuis longtemps, monsieur!"
)
)

DEFINE_MESSAGE(0x1077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "デクの樹ひろばに\n"
SHIFT(6) COLOR(RED) "デクの樹のこども" COLOR(DEFAULT) "が　生まれたヨ！\n"
SHIFT(9) "これで　この森も　もとどおりネ。"
)
,
MSG(
"Now that the " COLOR(RED) "Deku Tree's sprout" COLOR(DEFAULT) "\n"
"is growing in the Great Deku \n"
"Tree's meadow, the forest has\n"
"returned to normal!"
)
,
MSG(
"Nun, da der " COLOR(RED) "Sproß des Deku-Baumes\n"
COLOR(DEFAULT) "wächst und gedeiht, herrschen im\n"
"Wald wieder Ruhe und Frieden!"
)
,
MSG(
"Le " COLOR(RED) "Bourgeon de l'Arbre Mojo \n"
COLOR(DEFAULT) "grandit paisiblement et la forêt\n"
"est de nouveau joyeuse!"
)
)

DEFINE_MESSAGE(0x1078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "森は　ボクたち\n"
SHIFT(24) "みんなで　守っていくデス！"
)
,
MSG(
"We'll all work together to protect\n"
"the forest!"
)
,
MSG(
"Ich werde alles tun, um den Wald\n"
"zu beschützen!"
)
,
MSG(
"Nous assurerons tous ensemble la \n"
"protection de la forêt!"
)
)

DEFINE_MESSAGE(0x1079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "なんだか　ちかごろ\n"
SHIFT(30) "いい風が　ふいてきたヨ！"
)
,
MSG(
"Somehow, a fair wind has begun\n"
"to blow recently."
)
,
MSG(
"Das Klima hat sich wieder \n"
"verändert. Es ist nun angenehm\n"
"warm..."
)
,
MSG(
"Un vent paisible commence à \n"
"souffler sur la forêt."
)
)

DEFINE_MESSAGE(0x107A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "いい風が　ふくようになったから\n"
SHIFT(9) "きっと　" NAME "も\n"
SHIFT(9) "帰ってくるサ！"
)
,
MSG(
"Since a fair wind started to \n"
"blow, I'm sure " NAME " \n"
"will come back!"
)
,
MSG(
"Seit es im Wald wieder\n"
"sicher ist, glaube ich,\n"
"daß " NAME " zurückkehren \n"
"wird!"
)
,
MSG(
"Ce vent paisible fera sûrement\n"
"revenir " NAME " !"
)
)

DEFINE_MESSAGE(0x107B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(75) "サリア、\n"
SHIFT(21) "もう　帰ってこないのかナ…"
)
,
MSG(
"I wonder if Saria will come back..."
)
,
MSG(
"Ich frage mich, was aus Salia \n"
"geworden ist..."
)
,
MSG(
"Je me demande si Saria va revenir."
)
)

DEFINE_MESSAGE(0x107C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(39) NAME "、\n"
SHIFT(39) "いつか　帰ってくる…"
)
,
MSG(
"I'm sure " NAME " will \n"
"return someday!"
)
,
MSG(
"Sicher wird " NAME " eines \n"
"Tages zurückkommen..."
)
,
MSG(
NAME " reviendra un jour!\n"
"C'est certain!"
)
)

DEFINE_MESSAGE(0x107D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) COLOR(LIGHTBLUE) "デクの樹サマ…\n"
COLOR(DEFAULT) SHIFT(42) COLOR(LIGHTBLUE) "ただ今　戻りました！" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(46) COLOR(LIGHTBLUE) "Great Deku Tree...\n"
COLOR(DEFAULT) SHIFT(72) COLOR(LIGHTBLUE) "I'm back!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(46) COLOR(LIGHTBLUE) "Deku-Baum...\n"
COLOR(DEFAULT) SHIFT(34) COLOR(LIGHTBLUE) "Ich bin zurückgekehrt!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(31) COLOR(LIGHTBLUE) "Vénérable Arbre Mojo...\n"
COLOR(DEFAULT) SHIFT(45) COLOR(LIGHTBLUE) "Je suis de retour!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x107E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "あの者は　邪悪な　魔力を　操り、\n"
SHIFT(6) "ハイラルの　どこかにある　という\n"
SHIFT(21) "聖地を　探し求めておった…"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "なぜなら…　聖地には、\n"
SHIFT(6) "神の力を　秘めた　伝説の　聖三角、\n"
SHIFT(3) COLOR(LIGHTBLUE) "トライフォース" COLOR(DEFAULT) "が　あるからじゃ…"
)
,
MSG(
UNSKIPPABLE "This evil man ceaselessly uses\n"
"his vile, sorcerous powers in his\n"
"search for the Sacred Realm that\n"
"is connected to Hyrule..."
BOX_BREAK

UNSKIPPABLE "For it is in that Sacred Realm \n"
"that one will find the divine\n"
"relic, the " COLOR(LIGHTBLUE) "Triforce" COLOR(DEFAULT) ", which contains \n"
"the essence of the gods..."
)
,
MSG(
UNSKIPPABLE "Das Böse in Menschengestalt\n"
"setzt seine diabolischen Kräfte\n"
"rücksichtslos ein, um Zugang\n"
"zum Heiligen Reich zu erlangen..."
BOX_BREAK

UNSKIPPABLE "In diesem Heiligen Reich ruht \n"
"das " COLOR(LIGHTBLUE) "Triforce" COLOR(DEFAULT) ", ein mächtiges Relikt \n"
"der Götter, und wartet auf den,\n"
"der seine Kraft zu nutzen weiß..."
)
,
MSG(
UNSKIPPABLE "L'homme maléfique ne cesse de \n"
"faire appel à ses sombres et vils \n"
"pouvoirs pour trouver le Saint \n"
"Royaume relié à Hyrule..."
BOX_BREAK

UNSKIPPABLE "Car dans le Saint Royaume \n"
"sommeille la divine relique, la \n"
COLOR(LIGHTBLUE) "Triforce" COLOR(DEFAULT) ", renfermant des pouvoirs\n"
"comparables à ceux des dieux..."
)
)

DEFINE_MESSAGE(0x107F, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(12) "世に　理なく、命未だ　形なさず。" QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(6) "Before time began, before spirits\n"
SHIFT(49) "and life existed..." QUICKTEXT_DISABLE FADE(80)
)
,
MSG(
QUICKTEXT_ENABLE "Vor Tausenden von Jahren..." QUICKTEXT_DISABLE FADE(80)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(26) "Avant le début du temps,\n"
SHIFT(42) "avant que vie et \n"
SHIFT(47) "esprit n'existent..." QUICKTEXT_DISABLE FADE(80)
)
)

DEFINE_MESSAGE(0x1080, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(39) "混沌の地　ハイラルに\n"
SHIFT(36) "黄金の三大神、降臨す。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(2) "Three golden goddesses descended\n"
SHIFT(4) "upon the chaos that was Hyrule..." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE "...stiegen drei Göttinnen aus dem\n"
"Chaos der Gezeiten empor..." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(7) "Trois déesses d'or et de lumière\n"
SHIFT(5) "descendirent sur l'amas chaotique\n"
SHIFT(30) "qu'allait devenir Hyrule..." QUICKTEXT_DISABLE FADE(99)
)
)

DEFINE_MESSAGE(0x1081, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "すなわち、力の女神　ディン…" QUICKTEXT_DISABLE FADE(50)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(19) "Din, the goddess of power..." QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(26) "Din, die Göttin der Kraft..." QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(26) "Din, déesse de la Force..." QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x1082, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(39) "知恵の女神　ネール…" QUICKTEXT_DISABLE FADE(50)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(9) "Nayru, the goddess of wisdom..." QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(8) "Nayru, die Göttin der Weisheit..." QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "Nayru, déesse de la Sagesse..." QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x1083, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(30) "勇気の女神　フロルなり。" QUICKTEXT_DISABLE FADE(50)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(6) "Farore, the goddess of courage..." QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(12) "Farore, die Göttin des Mutes..." QUICKTEXT_DISABLE FADE(60)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(19) "Farore, déesse du Courage..." QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x1084, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(72) "ディン…" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(83) "Din..." QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(83) "Din..." QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(83) "Din..." QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x1085, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE "その　たくましき　炎の腕を　もって、\n"
SHIFT(21) "地を耕し、赤き大地を　創る。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(2) "With her strong flaming arms, she\n"
SHIFT(10) "cultivated the land and created\n"
SHIFT(58) "the red earth." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(17) "Mit dem feurigen Odem ihres\n"
SHIFT(17) "Körpers schuf sie unsere Welt." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(31) "De ses bras enflammés,\n"
SHIFT(40) "elle sculpta le sol et\n"
SHIFT(41) "créa la terre rouge." QUICKTEXT_DISABLE FADE(99)
)
)

DEFINE_MESSAGE(0x1086, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(72) "ネール…" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(76) "Nayru..." QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(76) "Nayru..." QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(76) "Nayru..." QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x1087, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(21) "その叡知を　大地に　注ぎて、\n"
SHIFT(42) "世界に　法を与える。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(3) "Poured her wisdom onto the earth\n"
SHIFT(15) "and gave the spirit of law to\n"
SHIFT(69) "the world." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(40) "Sie schenkte der Welt\n"
SHIFT(38) "die Gabe der Weisheit." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "Elle inonda de sa sagesse la\n"
SHIFT(16) "terre et apporta ordre et loi\n"
SHIFT(58) "sur ce monde." QUICKTEXT_DISABLE FADE(99)
)
)

DEFINE_MESSAGE(0x1088, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(72) "フロル…" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(75) "Farore..." QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(75) "Farore..." QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(75) "Farore..." QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x1089, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(30) "その　豊かなる心により、\n"
SHIFT(9) "法を守りし　全ての命　創造せり。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(9) "With her rich soul, produced all\n"
SHIFT(20) "life forms who would uphold\n"
SHIFT(75) "the law." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(19) "Sie spendete Leben und schuf\n"
SHIFT(56) "sämtliche Formen\n"
SHIFT(68) "des Daseins." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(13) "De son âme infinie, elle donna\n"
SHIFT(14) "vie aux êtres issus de l'ordre\n"
SHIFT(64) "et de la loi." QUICKTEXT_DISABLE FADE(99)
)
)

DEFINE_MESSAGE(0x108A, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(27) "三大神、その　使命を終え、\n"
SHIFT(24) "彼の国へ　去り行きたもう。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(22) "The three great goddesses,\n"
SHIFT(34) "their labors completed,\n"
SHIFT(25) "departed for the heavens." QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(30) "Als ihr Tun vollendet war,\n"
SHIFT(48) "zogen die Göttinnen\n"
SHIFT(76) "gen Eden." QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(43) "Les trois déesses, \n"
SHIFT(36) "leur oeuvre accomplie,\n"
SHIFT(6) "s'en retournèrent vers les cieux." QUICKTEXT_DISABLE FADE(90)
)
)

DEFINE_MESSAGE(0x108B, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(42) "神々の　去りし地に、\n"
SHIFT(30) "黄金の聖三角　残し置く。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(20) "And golden sacred triangles\n"
SHIFT(7) "remained at the point where the\n"
SHIFT(27) "goddesses left the world." QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "Triforce-Symbole künden\n"
SHIFT(24) "noch heute von den Stätten,\n"
SHIFT(51) "die sie besuchten." QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(9) "Leur départ fit alors apparaître\n"
SHIFT(45) "trois triangles d'or,\n"
SHIFT(12) "seuls vestiges de leur pouvoir." QUICKTEXT_DISABLE FADE(90)
)
)

DEFINE_MESSAGE(0x108C, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "この後、その　聖三角を\n"
SHIFT(18) "世の理の　礎とするものなり。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(8) "Since then, the sacred triangles\n"
SHIFT(14) "have become the basis of our\n"
SHIFT(46) "world's providence." QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(37) "Seither ist das Triforce\n"
SHIFT(70) "ein Zeichen\n"
SHIFT(36) "göttlicher Prophezeiung!" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "Depuis, les triangles sacrés\n"
SHIFT(27) "symbolisent l'essence de \n"
SHIFT(56) "notre création." QUICKTEXT_DISABLE FADE(90)
)
)

DEFINE_MESSAGE(0x108D, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(57) "また、この地を\n"
SHIFT(36) "聖地と　するものなり。" QUICKTEXT_DISABLE FADE(90)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(15) "And, the resting place of the\n"
SHIFT(28) "triangles has become the\n"
SHIFT(59) "Sacred Realm." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(29) "Das Relikt der Götter ruht\n"
SHIFT(43) "nun im Heiligen Reich." QUICKTEXT_DISABLE FADE(99)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(47) "Et depuis ce jour,\n"
SHIFT(6) "Le Saint Royaume est le berceau\n"
SHIFT(30) "des triangles de justice." QUICKTEXT_DISABLE FADE(99)
)
)

DEFINE_MESSAGE(0x108E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "小僧、なかなか　やるな…\n"
SHIFT(39) "少しは　腕を上げた…\n"
SHIFT(51) "と　いうわけか…"
BOX_BREAK_DELAYED(60)

SHIFT(24) "だが…　貴様が　倒したのは\n"
SHIFT(18) "所詮、オレの幻影に　すぎぬ…\n"
SHIFT(3) "オレと　戦う時は　こうはいかんぞ！"
BOX_BREAK_DELAYED(60)

SHIFT(12) "…それにしても　不甲斐なき奴！\n"
SHIFT(21) "次元の狭間に　消え去れい！！" FADE(60)
)
,
MSG(
"Hey kid, you did quite well...\n"
"It looks like you may be gaining\n"
"some slight skill..."
BOX_BREAK_DELAYED(60)

"But you have defeated only my\n"
"phantom...\n"
"When you fight the real me, it \n"
"won't be so easy!"
BOX_BREAK_DELAYED(60)

"What a worthless creation that \n"
"ghost was! I will banish it to\n"
"the gap between dimensions!!" FADE(60)
)
,
MSG(
"Du hast Dich tapfer geschlagen...\n"
"Es scheint, daß Du viel gelernt\n"
"hast! Jedoch..."
BOX_BREAK_DELAYED(60)

"Du hast nur mein Phantom besiegt!\n"
"Trittst Du meinem wahren Ich\n"
"gegenüber, wirst Du vernichtet!"
BOX_BREAK_DELAYED(60)

"Ich werde die reitende Kreatur nun \n"
"in den Hades verbannen, denn sie\n"
"hat ihren Schöpfer enttäuscht!" FADE(60)
)
,
MSG(
"Alors moucheron... Tu as appris à\n"
"combattre! Tu revendiques le sang\n"
"des guerriers..."
BOX_BREAK_DELAYED(60)

"Tu n'as vaincu que mon faible\n"
"spectre... Quand l'heure de \n"
"l'affrontement sonnera, l'ombre du\n"
"trépas sera sur toi."
BOX_BREAK_DELAYED(60)

"Ce fantôme était une création \n"
"pitoyable, je vais le bannir par-delà\n"
"les seuils dimensionnels!!" FADE(60)
)
)

DEFINE_MESSAGE(0x108F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(51) "きっと　アナタが\n"
SHIFT(15) "来てくれると　信じていたわ…\n"
SHIFT(45) "だって、アナタは…"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "ううん…"
BOX_BREAK_DELAYED(30)

UNSKIPPABLE SHIFT(42) "なにも　言わないで。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "アナタと　ワタシは…\n"
SHIFT(57) "同じ　世界では\n"
SHIFT(15) "生きていけない　運命だもん…"
)
,
MSG(
UNSKIPPABLE "I always believed that you would \n"
"come. Because I know you..."
BOX_BREAK

UNSKIPPABLE "No..."
BOX_BREAK_DELAYED(30)

UNSKIPPABLE "You don't have to explain\n"
"it to me..."
BOX_BREAK

UNSKIPPABLE "Because it is destiny that you \n"
"and I can't live in the same world."
)
,
MSG(
UNSKIPPABLE "Ich habe stets gewußt, daß Du\n"
"zu Höherem berufen bist..."
BOX_BREAK

UNSKIPPABLE "Ich hege große Gefühle für Dich..."
BOX_BREAK_DELAYED(30)

UNSKIPPABLE "Doch es ist Bestimmung, daß\n"
"wir verschiedene Wege gehen..."
BOX_BREAK

UNSKIPPABLE "Du und ich... Wir können nicht \n"
"in derselben Welt leben."
)
,
MSG(
UNSKIPPABLE "J'ai toujours su que tu reviendrais.\n"
"Je le savais, je te connais bien..."
BOX_BREAK

UNSKIPPABLE "Non..."
BOX_BREAK_DELAYED(30)

UNSKIPPABLE "Tu n'as pas besoin de te justifier\n"
"devant moi..."
BOX_BREAK

UNSKIPPABLE "Le destin n'a pas voulu que nous\n"
"vivions dans le même monde."
)
)

DEFINE_MESSAGE(0x1090, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "サリアは　森の賢者として、\n"
SHIFT(21) "アナタを　たすけていくの…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "さあ、" COLOR(ADJUSTABLE) "このメダル" COLOR(DEFAULT) "を　受け取って。"
)
,
MSG(
UNSKIPPABLE "I will stay here as the Forest\n"
"Sage and help you..."
BOX_BREAK

UNSKIPPABLE "Now, please take this \n"
COLOR(ADJUSTABLE) "Medallion" COLOR(DEFAULT) "..."
)
,
MSG(
UNSKIPPABLE "Ich werde Dich als Weise des\n"
"Waldes stets unterstützen..."
BOX_BREAK

UNSKIPPABLE "Nimm dieses " COLOR(ADJUSTABLE) "Amulett " COLOR(DEFAULT) "an Dich..."
)
,
MSG(
UNSKIPPABLE "En temps que Sage de la forêt, \n"
"ma place est ici..."
BOX_BREAK

UNSKIPPABLE "Tiens... Prends ce " COLOR(ADJUSTABLE) "Médaillon" COLOR(DEFAULT) "..."
)
)

DEFINE_MESSAGE(0x1091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(57) "お前の　勇気…\n"
SHIFT(21) "たしかに　見せてもらった…"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "お前は　ワシの願いを　たくすに\n"
SHIFT(21) "ふさわしい　少年であった…"
)
,
MSG(
UNSKIPPABLE "Thou hast verily demonstrated \n"
"thy courage..."
BOX_BREAK

UNSKIPPABLE "I knew that thou wouldst be able\n"
"to carry out my wishes..."
)
,
MSG(
UNSKIPPABLE "Du hast Deinen Mut eindrucksvoll \n"
"unter Beweis gestellt."
BOX_BREAK

UNSKIPPABLE "Ich wußte, daß Du mein Vertrauen\n"
"nicht enttäuschen würdest!"
)
,
MSG(
UNSKIPPABLE "Tu as fait preuve de courage\n"
"et de sagesse..."
BOX_BREAK

UNSKIPPABLE "Tu te révèles digne de mon estime\n"
"et de ma confiance..."
)
)

DEFINE_MESSAGE(0x1092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(30) "では、あらためて　お前に\n"
SHIFT(27) "ワシの願いを　伝えたい…"
BOX_BREAK

"聞いてくれるかな…？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Now, I have yet more to tell ye,\n"
"wouldst thou listen...\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Doch Du stehst erst am Anfang \n"
"Deiner Mission. Höre mich an...\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"J'ai encore bien des choses à te\n"
"dire veux-tu bien les écouter?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(12) NAME "　よ…\n"
SHIFT(15) "ハイラルの城に　行くがよい…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "その城には、" COLOR(RED) "神に選ばれし姫" COLOR(DEFAULT) "が\n"
SHIFT(27) "おいでに　なるはずじゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) COLOR(RED) "この石" COLOR(DEFAULT) "を　持ってゆけ…\n"
SHIFT(24) "あの男が　ワシに　のろいを\n"
SHIFT(15) "かけてまで欲した　この石を…"
)
,
MSG(
UNSKIPPABLE NAME "...\n"
"Go now to Hyrule Castle..."
BOX_BREAK

UNSKIPPABLE "There, thou will surely meet\n"
"the " COLOR(RED) "Princess of Destiny" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Take " COLOR(RED) "this stone " COLOR(DEFAULT) "with you.\n"
"The stone that man wanted so\n"
"much, that he cast the curse on\n"
"me..."
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Begib Dich nun zum Schloß!"
BOX_BREAK

UNSKIPPABLE "Suche dort die " COLOR(RED) "Prinzessin" COLOR(DEFAULT) " auf,\n"
"denn sie teilt Dein Schicksal."
BOX_BREAK

UNSKIPPABLE "Nimm " COLOR(RED) "diesen Stein" COLOR(DEFAULT) " an Dich. Er\n"
"war das Begehr des Mannes, der\n"
"mich mit dem Fluch belegte."
)
,
MSG(
UNSKIPPABLE NAME "...\n"
"Va au Château d'Hyrule..."
BOX_BREAK

UNSKIPPABLE "Tu y rencontreras la \n"
COLOR(RED) "Princesse de la Destinée" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Prends cette " COLOR(RED) "Pierre" COLOR(DEFAULT) "...\n"
"Elle est la cause de la malédiction\n"
"jetée sur moi par l'homme sombre."
)
)

DEFINE_MESSAGE(0x1094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "サリア、わかってた…\n"
SHIFT(21) NAME "　いつか\n"
SHIFT(21) "森を　出て行っちゃうって…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "だって　" NAME "…\n"
SHIFT(3) "サリアたちと　どこか　ちがうもん。"
)
,
MSG(
UNSKIPPABLE "I" COLOR(RED) " " COLOR(DEFAULT) "knew...\n"
"that you would leave the forest...\n"
"someday, " NAME "..."
BOX_BREAK

UNSKIPPABLE "Because you are different from\n"
"me" COLOR(RED) " " COLOR(DEFAULT) "and my friends...."
)
,
MSG(
UNSKIPPABLE "Ich wußte, daß Du den Wald\n"
"eines Tages verlassen\n"
"würdest, " NAME "."
BOX_BREAK

UNSKIPPABLE "Denn Du bist anders als meine\n"
"Freunde und ich..."
)
,
MSG(
UNSKIPPABLE "J'ai toujours su qu'un jour...\n"
"Tu quitterais la forêt,\n"
NAME "..."
BOX_BREAK

UNSKIPPABLE "Car tu es différent de nous..."
)
)

DEFINE_MESSAGE(0x1095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_3) SHIFT(3) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) NAME "！" COLOR(DEFAULT) QUICKTEXT_DISABLE "\n"
SHIFT(3) COLOR(LIGHTBLUE) "ねぇ、おきてよ　" COLOR(DEFAULT) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) NAME "！" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(12) COLOR(RED) "デクの樹サマ" COLOR(LIGHTBLUE) "が　お呼びなのよ！\n"
COLOR(DEFAULT) SHIFT(12) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) NAME "、おきなさい！" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_3) COLOR(LIGHTBLUE) "Hello, " QUICKTEXT_ENABLE NAME QUICKTEXT_DISABLE "!\n"
"Wake up!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "The" COLOR(RED) " Great Deku Tree " COLOR(LIGHTBLUE) "wants\n"
"to talk to you!\n"
QUICKTEXT_ENABLE NAME ", get up!" QUICKTEXT_DISABLE COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_3) COLOR(LIGHTBLUE) "Hallo " QUICKTEXT_ENABLE NAME QUICKTEXT_DISABLE "!\n"
"Wach auf!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Der" COLOR(RED) " Deku-Baum " COLOR(LIGHTBLUE) "hat Dich zu" COLOR(RED) " " COLOR(LIGHTBLUE) "\n"
"sich gerufen!\n"
QUICKTEXT_ENABLE NAME ", wach auf!" QUICKTEXT_DISABLE COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_3) COLOR(LIGHTBLUE) "Hé, " QUICKTEXT_ENABLE NAME QUICKTEXT_DISABLE "!\n"
"Debout! Maintenant!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Le très " COLOR(RED) "vénérable Arbre Mojo \n"
COLOR(LIGHTBLUE) "veut te parler!\n"
"Réveille-toi, " NAME "!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(54) COLOR(LIGHTBLUE) "う〜ん…　" COLOR(DEFAULT) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "もぅ！" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(12) COLOR(LIGHTBLUE) "こんな　ねぼすけが　ハイラルの\n"
COLOR(DEFAULT) SHIFT(24) COLOR(LIGHTBLUE) "運命を　にぎってるなんて、\n"
COLOR(DEFAULT) SHIFT(51) COLOR(LIGHTBLUE) "ホントかしら…？" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) "Hey! " QUICKTEXT_ENABLE "C'mon!" QUICKTEXT_DISABLE COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Can Hyrule's destiny really depend\n"
"on such a lazy boy?" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) "Los! " QUICKTEXT_ENABLE "Komm schon!" QUICKTEXT_DISABLE COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Sollte die Zukunft Hyrules\n"
"wirklich in den Händen dieser\n"
"Schlafmütze liegen?" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) QUICKTEXT_ENABLE "Ho!" QUICKTEXT_DISABLE " Tu vas te lever, oui?" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "La destinée d'Hyrule repose-t-elle \n"
"sur un garçon aussi paresseux?" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "もう　ジャンプなんて　古いね。\n"
SHIFT(27) "今は　" COLOR(RED) "バック宙" COLOR(DEFAULT) "に　夢中サ！\n"
SHIFT(54) "オマエ　できる？"
)
,
MSG(
"Jumping is going out of style now.\n"
"I'm crazy about doing " COLOR(RED) "backflips" COLOR(DEFAULT) "!\n"
SHIFT(50) "Can you do one?"
)
,
MSG(
"Springen ist langweilig...\n"
"Ein" COLOR(RED) " Rückwärtssalto" COLOR(DEFAULT) " ist cooler!\n"
"Beherrschst Du diese Technik?"
)
,
MSG(
"Sauter, c'est plus à la mode. \n"
"Moi j'fais des " COLOR(RED) "sauts périlleux" COLOR(DEFAULT) "!\n"
"Tu sais en faire un, toi?"
)
)

DEFINE_MESSAGE(0x1098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(24) COLOR(RED) "デクの樹サマ" COLOR(LIGHTBLUE) "が　お呼びよ！\n"
COLOR(DEFAULT) SHIFT(15) COLOR(LIGHTBLUE) "さあ、いっしょに　行きましょ！" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "The " COLOR(RED) "Great Deku Tree \n"
COLOR(LIGHTBLUE) "has summoned you!\n"
"So let's get going, right now!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Der" COLOR(RED) " Deku-Baum " COLOR(LIGHTBLUE) "hat Dich\n"
"zu sich befohlen...\n"
"Steh also endlich auf!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Le très " COLOR(RED) "vénérable Arbre Mojo " COLOR(LIGHTBLUE) "\n"
"veut te parler!\n"
"Allons-y tout de suite!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x1099, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(72) "ナビィ…\n"
SHIFT(33) "妖精ナビィ、どこじゃ…\n"
SHIFT(51) "ここへ　おいで…"
)
,
MSG(
UNSKIPPABLE SHIFT(75) "Navi...\n"
SHIFT(35) "Navi, where art thou?\n"
SHIFT(57) "Come hither...."
)
,
MSG(
UNSKIPPABLE SHIFT(75) "Navi...\n"
SHIFT(46) "Navi, wo bist Du?\n"
SHIFT(57) "Erscheine..."
)
,
MSG(
UNSKIPPABLE SHIFT(75) "Navi...\n"
SHIFT(55) "Navi, où es-tu?\n"
SHIFT(60) "Viens à moi..."
)
)

DEFINE_MESSAGE(0x109A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "おぉ、" COLOR(LIGHTBLUE) "妖精ナビィ" COLOR(DEFAULT) "…\n"
SHIFT(24) "この　ワシの…　" COLOR(RED) "デクの樹" COLOR(DEFAULT) "の\n"
SHIFT(33) "言葉を　聞いておくれ…"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "お前も　感じておろう？\n"
SHIFT(15) "この世に満ちた　悪しき力を…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "今、ハイラルは　その力に\n"
SHIFT(18) "飲み込まれようとしておる…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "この　" COLOR(RED) "コキリの森" COLOR(DEFAULT) "は、命の源…\n"
SHIFT(27) "人の侵入を　こばむことで\n"
SHIFT(21) "外の世界をも　守ってきた…"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "しかし…\n"
SHIFT(12) "この　強大な　悪しき力の前では\n"
SHIFT(15) "今のワシは　まったくの無力…"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "どうやら　あの　" COLOR(RED) "妖精を持たぬ子" COLOR(DEFAULT) "が\n"
"立たねばならぬ時が　来たようじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "あの子こそ、このハイラルを\n"
SHIFT(27) "善き方向へ　みちびく者…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "さあ、" COLOR(LIGHTBLUE) "ナビィ" COLOR(DEFAULT) "よ…\n"
"あの子を　ここへ　いざなうのじゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "ワシに　残された時は\n"
SHIFT(39) "もう…　多くはない…"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "たのんだぞ…"
)
,
MSG(
UNSKIPPABLE "Oh, " COLOR(LIGHTBLUE) "Navi the fairy" COLOR(DEFAULT) "...\n"
"Listen to my words, the words of \n"
"the " COLOR(RED) "Deku Tree" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Dost thou sense it?\n"
"The climate of evil descending \n"
"upon this realm..."
BOX_BREAK

UNSKIPPABLE "Malevolent forces even now are\n"
"mustering to attack our land\n"
"of Hyrule..."
BOX_BREAK

UNSKIPPABLE "For so long, the " COLOR(RED) "Kokiri Forest" COLOR(DEFAULT) ", the\n"
"source of life, has stood as a \n"
"barrier, deterring outsiders and \n"
"maintaining the order of the world..."
BOX_BREAK

UNSKIPPABLE "But...before this tremendous evil\n"
"power, even my power is as \n"
"nothing..."
BOX_BREAK

UNSKIPPABLE "It seems the time has come for \n"
"the " COLOR(RED) "boy without a fairy " COLOR(DEFAULT) "to begin \n"
"his journey..."
BOX_BREAK

UNSKIPPABLE "The youth whose destiny it is to\n"
"lead Hyrule to the path of \n"
"justice and truth..."
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Navi" COLOR(DEFAULT) "...go now! Find our young\n"
"friend and guide him to me..."
BOX_BREAK

UNSKIPPABLE "I do not have much time left."
BOX_BREAK

UNSKIPPABLE "Fly, Navi, fly! The fate of the\n"
"forest, nay, the world, depends\n"
"upon thee!"
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Navi, holde Fee" COLOR(DEFAULT) "...\n"
"Höre die Worte des \n"
COLOR(RED) "Deku-Baumes" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Spürst Du es?\n"
"Diabolische Kräfte bedrohen \n"
"unser Land."
BOX_BREAK

UNSKIPPABLE "Die Kreaturen der Nacht sammeln \n"
"sich, um das Schicksal Hyrules \n"
"zu besiegeln."
BOX_BREAK

UNSKIPPABLE "Für lange Zeit war ich es, der\n"
"die Schatten des Unheils daran\n"
"hinderte, das Land zu erobern."
BOX_BREAK

UNSKIPPABLE "Doch nun ist die Konzentration\n"
"des Bösen so stark, daß meine  \n"
"Kräfte nicht ausreichen, die \n"
"dunklen Mächte zu bannen..."
BOX_BREAK

UNSKIPPABLE "Die Zeit scheint reif, da der \n"
COLOR(RED) "Junge ohne Fee " COLOR(DEFAULT) "seine Bestimmung \n"
"erfahren soll..."
BOX_BREAK

UNSKIPPABLE "Die Jugend und Reinheit des\n"
"Jungen sollen Hyrule wieder auf\n"
"den Pfad des Lichtes führen..."
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Navi" COLOR(DEFAULT) "... Geh nun! Finde unseren\n"
"Freund und geleite ihn zu mir..."
BOX_BREAK

UNSKIPPABLE "Meine Zeit ist fast vorüber...\n"
"Mir bleiben nur noch wenige\n"
"Stunden."
BOX_BREAK

UNSKIPPABLE "Flieg, Navi, flieg! Das Schicksal \n"
"des Dorfes, gar das der ganzen \n"
"Welt, liegt in den Händen dieses \n"
"Jungen..."
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Navi la fée" COLOR(DEFAULT) "...\n"
"Ecoute mes paroles, les paroles du\n"
"très vénérable" COLOR(RED) " Arbre Mojo" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Sens-tu le danger qui rôde?\n"
"Cette aura ténébreuse qui s'abat \n"
"sur le royaume..."
BOX_BREAK

UNSKIPPABLE "Des forces maléfiques s'activent\n"
"dans l'ombre et préparent l'invasion\n"
"d'Hyrule..."
BOX_BREAK

UNSKIPPABLE "Depuis toujours la " COLOR(RED) "Forêt Kokiri" COLOR(DEFAULT) "\n"
"s'élève comme un rempart contre \n"
"les forces chaotiques, assurant le\n"
"maintien de l'ordre et de la loi..."
BOX_BREAK

UNSKIPPABLE "Mais face à ce pouvoir terrifiant\n"
"et infernal, mes forces ne sont\n"
"que misère..."
BOX_BREAK

UNSKIPPABLE "Le temps est venu pour ce " COLOR(RED) "garçon \n"
"sans fée " COLOR(DEFAULT) "de commencer son \n"
"périple..."
BOX_BREAK

UNSKIPPABLE "Cet enfant dont la destinée est\n"
"de conduire Hyrule sur la voie de \n"
"la justice et de la vérité..."
BOX_BREAK

UNSKIPPABLE "Va... " COLOR(LIGHTBLUE) "Navi" COLOR(DEFAULT) "! Trouve notre jeune ami \n"
"et présente-le devant moi..."
BOX_BREAK

UNSKIPPABLE "Il ne me reste que peu de temps."
BOX_BREAK

UNSKIPPABLE "Vole, Navi, vole! Le destin de la \n"
"forêt, que dis-je, du monde dépend\n"
"de toi!!!"
)
)

DEFINE_MESSAGE(0x109B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) SHIFT(9) "ゆるしてッピ！　もーしないッピ！\n"
SHIFT(42) "みのがしてくれたら\n"
SHIFT(36) "いーこと　教えるピー。"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "この先にいる　三つ子デクナッツは、\n"
SHIFT(15) "決まった順に　やっつけないと\n"
SHIFT(45) "復活しちゃうッピ。"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(33) "その順番は…　" TEXT_SPEED(5) COLOR(LIGHTBLUE) "２　３　　１" COLOR(DEFAULT) TEXT_SPEED(0) "\n"
SHIFT(21) "「" COLOR(LIGHTBLUE) "ニイさんイチバン" COLOR(DEFAULT) "」だッピ！"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(24) "オイラって…　ヒドイやつ？" EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) "Please forgive me, master! I'll \n"
"never do it again! If you spare \n"
"me, I'll teach you something cool."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "You will never beat my brothers \n"
"up ahead unless you punish them \n"
"in the proper order."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "The order is..." TEXT_SPEED(5) COLOR(LIGHTBLUE) "2  3  1" COLOR(DEFAULT) TEXT_SPEED(0) "\n"
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Twenty-three is number one!" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Do you think I'm a traitor?" EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) "Vergib mir, Herr! Ich werde \n"
"es nicht wieder tun! Laß mich frei,\n"
"und ich gebe ein Geheimnis preis."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Nie wirst Du meine Brüder \n"
"bezwingen, wenn Du sie nicht in \n"
"richtiger Reihenfolge besiegst!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Merke Dir... " TEXT_SPEED(5) COLOR(LIGHTBLUE) "2  3  1" COLOR(DEFAULT) TEXT_SPEED(0) "\n"
UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Rechts vor links, aber\n"
"die goldene Mitte geht vor!" COLOR(DEFAULT) QUICKTEXT_DISABLE "\n"
"Bin ich jetzt ein Verräter?" EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) "Pitié, Seigneur! Je ne le ferai \n"
"plus jamais! Epargne-moi et je te \n"
"donne un indice."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Tu ne pourras jamais battre mes \n"
"frères si tu ne respectes pas un\n"
"ordre précis!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Le bon ordre est..." TEXT_SPEED(5) COLOR(LIGHTBLUE) "2 - 3 - 1!" COLOR(DEFAULT) TEXT_SPEED(0) "\n"
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Vingt-trois est numéro un! Ha ha!" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Tu crois que j'suis un traître?" EVENT
)
)

DEFINE_MESSAGE(0x109C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) SHIFT(33) "どーして　オイラたちの\n"
SHIFT(33) "ヒミツ　知ってるピー！？\n"
SHIFT(57) QUICKTEXT_ENABLE "くやしーッピ！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(33) "あんまり　くやしーから\n"
SHIFT(33) "ゴーマさまの　ヒミツも\n"
SHIFT(45) "バラしちゃうッピ！"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(9) "ゴーマさまに　トドメをさすには\n"
SHIFT(6) COLOR(RED) "ひるんだスキ" COLOR(DEFAULT) "に　剣で攻撃だッピ。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "ゴーマさま…　ゴーマんなさい。"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(69) QUICKTEXT_ENABLE "なんちて。" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) "How did you know our secret?!\n"
"How " QUICKTEXT_ENABLE "irritating!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "It's so annoying that I'm going to\n"
"reveal the secret of Queen Gohma\n"
"to you!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "In order to administer the coup de\n"
"grace to Queen Gohma, strike\n"
"with your sword " COLOR(RED) "while she's \n"
"stunned" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Oh, Queenie..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE "Sorry about that!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) "Woher kanntest Du unser Geheimnis?!\n"
"Bist Du ein " QUICKTEXT_ENABLE "Hellseher?" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "So sei es denn. Ich werde\n"
"Dir das Geheimnis der Spinnenkönigin\n"
"verraten..."
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Um sie zu vernichten, solltest Du\n"
"die Früchte des Baumes nutzen... \n"
"Ein Gegner, der sich " COLOR(RED) "nicht bewegt" COLOR(DEFAULT) ", \n"
"läßt sich leichter bezwingen..."
BOX_BREAK

UNSKIPPABLE "Vergebt mir, Königin..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE "Schande über mich!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_FAINT) "Qui t'a donné notre secret?!\n"
"Hmmm... " QUICKTEXT_ENABLE "ça me rend dingue!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "J'suis tellement en pétard que je \n"
"vais te dire le point faible de \n"
COLOR(RED) "Gohma notre Reine" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Pour lui administrer le coup de \n"
"grâce, frappe son oeil avec ton \n"
"épée après l'avoir " COLOR(RED) "étourdie" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Oh ma Reine, ma p'tite Reine..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE SHIFT(27) "Je ne suis qu'un traître!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x109D, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "ハイラル王国に　広がる　深き森…"
BOX_BREAK_DELAYED(40)

SHIFT(3) "その森を　守り続けてきた　ワシを、\n"
SHIFT(6) "人は　デクの樹と　呼んでおった…" FADE(70)
)
,
MSG(
"In the vast, deep forest of Hyrule..."
BOX_BREAK_DELAYED(40)

SHIFT(22) "Long have I served as the\n"
SHIFT(51) "guardian spirit...\n"
SHIFT(12) "I am known as the Deku Tree..." FADE(70)
)
,
MSG(
"Es war einst in einem fernen Land..."
BOX_BREAK_DELAYED(40)

SHIFT(10) "Seit Anbeginn der Zeit wacht der\n"
SHIFT(24) "mächtige Deku-Baum über die\n"
SHIFT(48) "Kinder des Waldes!" FADE(70)
)
,
MSG(
"Dans l'immense forêt d'Hyrule..."
BOX_BREAK_DELAYED(40)

SHIFT(11) "Les siècles m'ont choisi comme\n"
SHIFT(15) "le gardien spirituel des bois...\n"
SHIFT(31) "Je suis... l'Arbre Mojo..." FADE(70)
)
)

DEFINE_MESSAGE(0x109E, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "この森には　コキリ族という\n"
SHIFT(36) "者たちが　住んでおる。"
BOX_BREAK_DELAYED(60)

SHIFT(51) "彼らは　それぞれ\n"
SHIFT(3) "自分だけの　妖精を　持っておった。" FADE(60)
)
,
MSG(
SHIFT(11) "The children of the forest, the\n"
SHIFT(25) "Kokiri, live here with me."
BOX_BREAK_DELAYED(60)

SHIFT(11) "Each Kokiri has his or her own\n"
SHIFT(56) "guardian fairy." FADE(60)
)
,
MSG(
SHIFT(33) "Jedem der Kokiri schenkt\n"
SHIFT(41) "der Wächter eine Fee."
BOX_BREAK_DELAYED(60)

SHIFT(13) "Als seine Abgesandten schützen\n"
SHIFT(34) "sie jene reinen Herzens." FADE(60)
)
,
MSG(
SHIFT(15) "Les Kokiris sont mes enfants.\n"
SHIFT(15) "Ils sont le peuple de la forêt."
BOX_BREAK_DELAYED(60)

SHIFT(10) "Dès la naissance, chaque Kokiri\n"
SHIFT(60) "reçoit sa fée." FADE(60)
)
)

DEFINE_MESSAGE(0x109F, TEXTBOX_TYPE_NONE_BOTTOM, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "じゃが…　たった　ひとりだけ　\n"
"妖精を持たぬ少年がおったのじゃ…" FADE(60)
)
,
MSG(
SHIFT(11) "However, there is one boy" COLOR(RED) " " COLOR(DEFAULT) "who\n"
SHIFT(32) "does not have a fairy..." FADE(60)
)
,
MSG(
SHIFT(17) "Das Schicksal hat jedoch einen\n"
SHIFT(8) "auserkoren, dessen Bestimmung es\n"
SHIFT(17) "ist, den Gesetzen vergangener\n"
SHIFT(43) "Zeiten zu entfliehen..." FADE(60)
)
,
MSG(
SHIFT(25) "Mais seul un jeune garçon\n"
SHIFT(42) "n'avait pas de fée..." FADE(60)
)
)

DEFINE_MESSAGE(0x10A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(9) "おわびに　デクの実　売るッピー！\n"
SHIFT(27) COLOR(RED) "５個　２０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I surrender! In return, I will sell \n"
"you Deku Nuts!\n"
COLOR(RED) "5 pieces   20 Rupees" COLOR(DEFAULT) " they are!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Vergib mir... Darf ich Dir Deku-  \n"
"Nüsse anbieten?\n"
COLOR(RED) "5 Stück   " COLOR(DEFAULT) "kosten" COLOR(RED) "  20 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Je me rends, c'est bon! En \n"
"échange je veux bien te vendre \n"
"des Noix Mojo!\n"
COLOR(RED) "5 unités   20 Rubis" COLOR(DEFAULT) ", c'est le prix!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(9) "おわびに　デクの棒　売るッピー！\n"
SHIFT(27) COLOR(RED) "１本　１５ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "All right! You win! In return,\n"
"I will sell you Deku Sticks!\n"
COLOR(RED) "1 piece   15 Rupees " COLOR(DEFAULT) "they are!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Du hast gesiegt. Laß mich Dir einen\n"
"Deku-Stab anbieten!\n"
COLOR(RED) "1 Stück   " COLOR(DEFAULT) "kostet" COLOR(RED) "  15 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "T'es le plus fort! Je vais\n"
"te vendre des Bâtons Mojo, tiens!\n"
COLOR(RED) "1 unité   15 Rubis, " COLOR(DEFAULT) "t'en veux?" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
"おわびに　ハートのかけら売るッピ！\n"
SHIFT(30) COLOR(RED) "１個　１０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "All right! You win! In return for\n"
"sparing me, I will sell you a \n"
"Piece of Heart!\n"
COLOR(RED) "1 piece   10 Rupees " COLOR(DEFAULT) "it is!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Ich bin bezwungen. Verschone mich,\n"
"und ich werde Dir ein Herzteil zum \n"
"Kauf anbieten!\n"
COLOR(RED) "1 Stück   " COLOR(DEFAULT) "kostet" COLOR(RED) "  10 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "J'abandonne! Tu veux bien \n"
"m'acheter des coeurs?\n"
COLOR(RED) "1 unité   10 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE "ほしいッピ？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE "Let's make a deal!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "No way" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE "Laß uns ein Geschäft machen!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE "Alors...ça marche?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "Non, jamais!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x10A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(78) QUICKTEXT_ENABLE "ピー！！" QUICKTEXT_DISABLE "\n"
SHIFT(42) "そんなら　帰るッピ！"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) QUICKTEXT_ENABLE "YIKES!!" QUICKTEXT_DISABLE "\n"
"I'm going home then!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) QUICKTEXT_ENABLE "Ups!" QUICKTEXT_DISABLE "\n"
"Dann verschwinde ich besser!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) QUICKTEXT_ENABLE "GLOPS!!" QUICKTEXT_DISABLE "\n"
"J'me rentre, si c'est comme ça!"
)
)

DEFINE_MESSAGE(0x10A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(36) "ルピー　たりないッピ！\n"
SHIFT(63) "出直すッピ。"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Not enough Rupees! \n"
"Come back again!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Du hast zu wenig Rubine! \n"
"Komm später wieder!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Pas assez de rubis!\n"
"Reviens plus tard!"
)
)

DEFINE_MESSAGE(0x10A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(24) "それ以上　持てないッピよ。\n"
SHIFT(63) "出直すッピ。"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "You can't have this now!\n"
"Come back again!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Du hast schon genug davon!\n"
"Komm später wieder!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "T'en as plein tes poches!\n"
"reviens plus tard!"
)
)

DEFINE_MESSAGE(0x10A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE SHIFT(45) "まいどありーッピ！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE SHIFT(45) "Thank you very much!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE SHIFT(67) "Hab Dank!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_DAMAGE) QUICKTEXT_ENABLE SHIFT(65) "Merci bien!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x10A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "まってたヨ、" NAME "。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "ここは　" COLOR(RED) "森の聖域" COLOR(DEFAULT) "…\n"
SHIFT(30) "サリアの　ヒミツの場所！\n"
SHIFT(39) "なんだか　ここって…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "これからの　ふたりにとって\n"
SHIFT(9) "すっごく　だいじな場所になる…\n"
SHIFT(42) "そんな気が　するの。"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "ここで　この曲　ふくと\n"
SHIFT(12) "妖精たちと　お話しできるのよ。" TEXTID(0x10A9)
)
,
MSG(
UNSKIPPABLE "I've been waiting for you,\n"
NAME "!"
BOX_BREAK

UNSKIPPABLE "This is the " COLOR(RED) "Sacred Forest Meadow" COLOR(DEFAULT) ".\n"
"It's" COLOR(RED) " " COLOR(DEFAULT) "my secret place!\n"
"I feel..."
BOX_BREAK

UNSKIPPABLE "This place will be very \n"
"important for both of us someday.\n"
"That's what I feel."
BOX_BREAK

UNSKIPPABLE "If you play the Ocarina here, you \n"
"can talk with the spirits in the \n"
"forest." TEXTID(0x10A9)
)
,
MSG(
UNSKIPPABLE "Ich habe auf Dich gewartet,\n"
NAME "!"
BOX_BREAK

UNSKIPPABLE "Dies ist die " COLOR(RED) "Heilige Lichtung" COLOR(DEFAULT) ",\n"
"mein Lieblingsort!\n"
"Ich spüre etwas..."
BOX_BREAK

UNSKIPPABLE "Dieser Ort wird für uns beide \n"
"von schicksalhafter Bedeutung sein.\n"
"Das kann ich fühlen..."
BOX_BREAK

UNSKIPPABLE "Spielst Du hier die Okarina, \n"
"kannst Du zu den Geistern des \n"
"Waldes sprechen." TEXTID(0x10A9)
)
,
MSG(
UNSKIPPABLE "Je t'attendais,\n"
NAME "!"
BOX_BREAK

UNSKIPPABLE "Nous sommes ici dans le " COLOR(RED) "Bosquet \n"
"Sacré" COLOR(DEFAULT) ". C'est mon jardin secret!\n"
"J'ai le sentiment que..."
BOX_BREAK

UNSKIPPABLE "Cet endroit sera très important \n"
"pour nous deux. J'en suis sûre!"
BOX_BREAK

UNSKIPPABLE "Joue de l'ocarina ici et tu pourras\n"
"parler avec les esprits de la forêt." TEXTID(0x10A9)
)
)

DEFINE_MESSAGE(0x10A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"いっしょに　オカリナふいてみる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "うん\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
"Would you like to play the \n"
"Ocarina with me?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "Don't do it" COLOR(DEFAULT)
)
,
MSG(
"Machst Du mir die Freude und \n"
"spielst mit mir?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Veux-tu jouer de l'ocarina \n"
"avec moi?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x10AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) "じゃ、アタシの　ふいた\n"
SHIFT(9) "メロディを　マネして　ふいてネ！\n"
SHIFT(81) "いい？"
)
,
MSG(
UNSKIPPABLE "OK, try to follow along with the\n"
"melody I will play.\n"
"Are you ready?"
)
,
MSG(
UNSKIPPABLE "Versuch, die Melodie, die ich\n"
"spiele, nachzuspielen...\n"
"Bist Du bereit?"
)
,
MSG(
UNSKIPPABLE "Essaie de suivre cette mélodie.\n"
"Tu es prêt?"
)
)

DEFINE_MESSAGE(0x10AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) "え〜っ、つまんない〜！\n"
SHIFT(3) "そんなこと　言わないで　やろ〜よ！"
)
,
MSG(
UNSKIPPABLE "Huh?!\n"
"How boring!\n"
"C'mon! Play along!"
)
,
MSG(
UNSKIPPABLE "Was?!\n"
"Du enttäuschst mich!\n"
"Komm schon, spiel mir nach!"
)
,
MSG(
UNSKIPPABLE "Heu?!\n"
"T'es pas drôle!\n"
"Allez! Jouons ensemble!"
)
)

DEFINE_MESSAGE(0x10AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(54) "うまい！　うまい！"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "この曲、わすれないで…\n"
SHIFT(45) "やくそくだからネ！" TEXTID(0x10AD)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(54) "Great! Great!"
BOX_BREAK

UNSKIPPABLE "Please don't forget this song!\n"
"Do you promise?" TEXTID(0x10AD)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(47) "Wie wunderschön!"
BOX_BREAK

UNSKIPPABLE "Du darfst dieses Lied nie \n"
"vergessen. Versprich es!" TEXTID(0x10AD)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(58) "Bravo! Bravo!"
BOX_BREAK

UNSKIPPABLE "N'oublie jamais cette mélodie!\n"
"Tu me le promets?" TEXTID(0x10AD)
)
)

DEFINE_MESSAGE(0x10AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "わたしの声…　聞きたくなったら\n"
SHIFT(27) COLOR(ADJUSTABLE) "サリアの歌" COLOR(DEFAULT) "を　ふいてネ…\n"
SHIFT(33) "いつでも　話せるから…"
)
,
MSG(
"When you want to hear my voice,\n"
"play " COLOR(ADJUSTABLE) "Saria's Song" COLOR(DEFAULT) ". You can talk \n"
"with me anytime..."
)
,
MSG(
"Willst Du meine Stimme hören, so \n"
"spiele " COLOR(ADJUSTABLE) "Salias Lied" COLOR(DEFAULT) ". Du kannst \n"
"Dich jederzeit mit mir \n"
"unterhalten..."
)
,
MSG(
"Entonne le " COLOR(ADJUSTABLE) "Chant de Saria " COLOR(DEFAULT) "si tu \n"
"as besoin de me parler..."
)
)

DEFINE_MESSAGE(0x10AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "サリアのオカリナ　大事にしてる？"
)
,
MSG(
"Are you taking good care of \n"
"my Ocarina?"
)
,
MSG(
"Paß gut auf meine Okarina \n"
"auf..."
)
,
MSG(
"Prends-tu bien soin de mon \n"
"ocarina?"
)
)

DEFINE_MESSAGE(0x10AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(66) "やる〜っ！！\n"
SHIFT(42) "おまえ　スゴイッピ！\n"
SHIFT(36) "１００発　１００中ッピ！"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(51) "そんな　アナタに\n"
SHIFT(36) "ステキな　プレゼント！\n"
SHIFT(30) "やるから、もってくッピ！" EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Cool!\n"
"You're great!  You scored\n"
"three perfect bull's-eyes!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "I have to give a neat present\n"
"to such a wonderful person!\n"
"Please take it!" EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Fantastisch!\n"
"Du hast dreimal ins Schwarze\n"
"getroffen!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Dein Talent soll nicht ohne Lohn\n"
"bleiben! Hier, nimm dies an Dich!" EVENT
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Whoaa!\n"
"Tu es très fort!\n"
"Trois fois dans le mille!"
BOX_BREAK

UNSKIPPABLE SFX(NA_SE_EN_NUTS_DAMAGE) "Je me sens obligé de t'offrir\n"
"un cadeau! Prends donc ceci!" EVENT
)
)

DEFINE_MESSAGE(0x10B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "サリアのコトなら\n"
SHIFT(30) "ミドが　知ってるかもネ。"
BOX_BREAK

SHIFT(51) "ミド、自分の家で\n"
SHIFT(39) "ふてくされてるわよ。"
)
,
MSG(
"Mido might know something about\n"
"Saria's whereabouts."
BOX_BREAK

"I think Mido is sulking in one of \n"
"the houses around here."
)
,
MSG(
"Vielleicht weiß Mido, wo sich Salia\n"
"aufhält..."
BOX_BREAK

"Er hat sich beleidigt in eines der \n"
"Häuser zurückgezogen."
)
,
MSG(
"S'il y a quelqu'un pour savoir ce\n"
"que fait Saria, c'est bien Mido!"
BOX_BREAK

"Il est sûrement dans le coin."
)
)

DEFINE_MESSAGE(0x10B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(90) COLOR(LIGHTBLUE) "？？\n"
COLOR(DEFAULT) SHIFT(15) COLOR(LIGHTBLUE) "反応ないヨ…　寝てるのかな？" COLOR(DEFAULT)
)
,
MSG(
SHIFT(90) COLOR(LIGHTBLUE) "??\n"
COLOR(DEFAULT) SHIFT(21) COLOR(LIGHTBLUE) "No response. He's sleeping." COLOR(DEFAULT)
)
,
MSG(
SHIFT(90) COLOR(LIGHTBLUE) "Hallo?\n"
COLOR(DEFAULT) SHIFT(53) COLOR(LIGHTBLUE) "Er reagiert nicht!\n"
COLOR(DEFAULT) SHIFT(35) COLOR(LIGHTBLUE) "Er scheint zu schlafen..." COLOR(DEFAULT)
)
,
MSG(
SHIFT(90) COLOR(LIGHTBLUE) "??\n"
COLOR(DEFAULT) SHIFT(21) COLOR(LIGHTBLUE) "Pas de réponse. Il doit dormir." COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x10B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(39) "コジロー？　なぜだ…？"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "オレのような　イイヤツにしか\n"
SHIFT(27) "なつかない　トリなのに…\n"
SHIFT(51) "と、いうことは…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "オマエ、イイヤツだな！？"
BOX_BREAK

UNSKIPPABLE SHIFT(66) QUICKTEXT_ENABLE "そうだな！！" QUICKTEXT_DISABLE "\n"
SHIFT(45) QUICKTEXT_ENABLE "きっと　そうだっ！！" QUICKTEXT_DISABLE "\n"
SHIFT(45) "たのむ！　イイヤツ！"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "この　ブツを\n"
SHIFT(3) "カカリコ村の　" COLOR(RED) "クスリ屋のババア" COLOR(DEFAULT) "に\n"
SHIFT(63) "届けてくれ！" EVENT
)
,
MSG(
UNSKIPPABLE "Cojiro?  Why?\n"
"Normally only a nice guy like me \n"
"can tame you..."
BOX_BREAK

UNSKIPPABLE "Which means..."
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(1) "You... " TEXT_SPEED(0) "You must be a nice guy!\n"
QUICKTEXT_ENABLE "Must be!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "You must be!!" QUICKTEXT_DISABLE "\n"
"Please Mr. Nice Guy! Please!"
BOX_BREAK

UNSKIPPABLE "Deliver this stuff to the " COLOR(RED) "old\n"
"hag in the potion shop " COLOR(DEFAULT) "in Kakariko\n"
"Village!" EVENT
)
,
MSG(
UNSKIPPABLE "Henni?  Was?!\n"
"Ich dachte, nur ein netter Mensch\n"
"wie ich kann Dich zähmen..."
BOX_BREAK

UNSKIPPABLE "Das bedeutet..."
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(1) "Du... " TEXT_SPEED(0) "Du mußt in Ordnung sein!\n"
QUICKTEXT_ENABLE "Ja, ganz bestimmt!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Ich vertraue Dir!" QUICKTEXT_DISABLE "\n"
"Tust Du mir einen Gefallen?"
BOX_BREAK

UNSKIPPABLE "Bring dies hier zum " COLOR(RED) "Laden der \n"
"Hexe Asa" COLOR(DEFAULT) " in Kakariko!" EVENT
)
,
MSG(
UNSKIPPABLE "Un P'tit Poulet?  Comment ça?\n"
"Seul un chic type comme moi peut\n"
"s'en occuper..."
BOX_BREAK

UNSKIPPABLE "Ce qui veut dire que..."
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(1) "Toi... " TEXT_SPEED(0) "Toi aussi, tu es un chic type!\n"
QUICKTEXT_ENABLE "Incroyable!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE "Un chic type! Un vrai!" QUICKTEXT_DISABLE "\n"
"Oh, je t'en supplie..."
BOX_BREAK

UNSKIPPABLE "Apporte ceci à l'" COLOR(RED) "Apothicaire" COLOR(DEFAULT) " du\n"
"village Cocorico!" EVENT
)
)

DEFINE_MESSAGE(0x10B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"時間がたつと消えちまう…　たのむ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"This will disappear if you take\n"
"too long, so you gotta hurry!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "I can't" COLOR(DEFAULT)
)
,
MSG(
"Doch laß Dir nicht zuviel Zeit,\n"
"denn sonst löst es sich auf!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Dépêche-toi sinon ceci va pourrir!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "J'peux pas!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x10B4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "そうだよな…　" QUICKTEXT_ENABLE "そうだよっ！！" QUICKTEXT_DISABLE "\n"
SHIFT(9) "おまえは　イイヤツじゃねーっ！！\n"
SHIFT(66) QUICKTEXT_ENABLE "うせろっ！！" QUICKTEXT_DISABLE
)
,
MSG(
"Oh, yeah. " QUICKTEXT_ENABLE "That's it!" QUICKTEXT_DISABLE "\n"
"You aren't a nice guy after all!!\n"
QUICKTEXT_ENABLE "Get away from me!" QUICKTEXT_DISABLE
)
,
MSG(
"Ach... " QUICKTEXT_ENABLE "Na sowas..." QUICKTEXT_DISABLE "\n"
"Du scheinst doch nicht so nett zu \n"
"sein, wie ich dachte!\n"
QUICKTEXT_ENABLE "Du enttäuschst mich!" QUICKTEXT_DISABLE
)
,
MSG(
"Ha bon. " QUICKTEXT_ENABLE "Tu l'prends comme ça?" QUICKTEXT_DISABLE "\n"
"T'es pas si chic que ça, alors!!\n"
QUICKTEXT_ENABLE "Dégage!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x10B5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "サリアが　会いたがってたヨ。\n"
SHIFT(60) "もう　会った？"
)
,
MSG(
"Saria wanted to see you...\n"
"Did she find you already?"
)
,
MSG(
"Salia hat nach Dir gesucht...\n"
"Hat sie Dich schon gefunden?"
)
,
MSG(
"Saria te cherchait...\n"
"L'as-tu vue?"
)
)

DEFINE_MESSAGE(0x10B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "急げよ、イイヤツ！\n"
SHIFT(18) "消えないうちに　届けてくれ。\n"
SHIFT(48) "くそババアによ…"
)
,
MSG(
"Hurry up, nice guy!\n"
"Before it disappears, deliver it\n"
"to that old wench...."
)
,
MSG(
"Beeil Dich, mein Freund!\n"
"Bevor es sich auflöst, muß es bei\n"
"der Hexe sein..."
)
,
MSG(
"Grouille-toi, mon nouveau copain!\n"
"Apporte-le à la vieille peau, avant \n"
"qu'il ne soit trop tard..."
)
)

DEFINE_MESSAGE(0x10B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "あのヒト、もう　いないヨ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "森に　入ったヒトは\n"
SHIFT(30) "みぃ〜んな　いなくなる。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "みぃ〜んな　スタルフォス。\n"
SHIFT(21) "だから　いないの、あのヒト。\n"
"残ったのは　ノコギリだけ。　フフッ！" TEXTID(0x10B8)
)
,
MSG(
UNSKIPPABLE "That guy isn't here anymore."
BOX_BREAK

UNSKIPPABLE "Anybody who comes into the \n"
"forest will be lost."
BOX_BREAK

UNSKIPPABLE "Everybody will become a Stalfos.\n"
"Everybody, Stalfos.\n"
"So, he's not here anymore.\n"
"Only his saw is left. Hee hee." TEXTID(0x10B8)
)
,
MSG(
UNSKIPPABLE "Er ist nicht mehr hier..."
BOX_BREAK

UNSKIPPABLE "Jedes Wesen, das kein Kokiri ist,\n"
"ist in diesen Wäldern verloren."
BOX_BREAK

UNSKIPPABLE "Sicher hat er sich inzwischen\n"
"auch in eine Pflanze verwandelt.\n"
"Alles, was von ihm übrig blieb,\n"
"ist diese Säge hier." TEXTID(0x10B8)
)
,
MSG(
UNSKIPPABLE "Le garçon n'est plus ici."
BOX_BREAK

UNSKIPPABLE "Un Hylien perdu dans la forêt est\n"
"un Hylien de moins! (proverbe)"
BOX_BREAK

UNSKIPPABLE "Un Hylien perdu dans la forêt \n"
"devient un monstre......\n"
"Il ne reste que sa scie. Hii hii." TEXTID(0x10B8)
)
)

DEFINE_MESSAGE(0x10B8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "ソレ…　森から作ったでしょ？"
BOX_BREAK

"返して！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"That medicine is made of \n"
"forest mushrooms. Give it back!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Die Medizin besteht aus \n"
"Waldpilzen! Gib sie mir! \n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"La mixture est à base de champi-\n"
"gnons. Voulez-vous la rendre?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x10B9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "フフフッ。\n"
SHIFT(30) "あなたも…　なっちゃう？"
)
,
MSG(
"Heh heh heh.\n"
"Are you going to be... too?\n"
"Heh heh!"
)
,
MSG(
"Wirst auch Du Dich verwandeln?"
)
,
MSG(
"Hi hi hi hi!\n"
"Vas-tu te transformer en monstre,\n"
"toi aussi?"
)
)

DEFINE_MESSAGE(0x10BA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "いらっしゃいませー\n"
SHIFT(27) "盾（たて）は　売ってるゾー\n"
SHIFT(21) "剣（けん）は　売ってないゾー" EVENT
)
,
MSG(
"We sell shields, but not swords!" EVENT
)
,
MSG(
"Wir verkaufen Schilde, aber keine \n"
"Schwerter!" EVENT
)
,
MSG(
"Nous vendons des boucliers, mais\n"
"pas d'épées!" EVENT
)
)

DEFINE_MESSAGE(0x10BB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) COLOR(ADJUSTABLE) "サリアの歌" COLOR(DEFAULT) "　知ってるんだな。\n"
SHIFT(27) "じゃ、ボクらは　友だちだ。\n"
SHIFT(39) "記念に　コレ　あげる。"
)
,
MSG(
UNSKIPPABLE "You know " COLOR(ADJUSTABLE) "Saria's Song" COLOR(DEFAULT) "! We should\n"
"be friends! Here, take this!"
)
,
MSG(
UNSKIPPABLE "Du kennst " COLOR(ADJUSTABLE) "Salias Lied" COLOR(DEFAULT) "! Wir sollten \n"
"Freunde werden! Hier, nimm das..."
)
,
MSG(
UNSKIPPABLE "Tu connais le " COLOR(ADJUSTABLE) "Chant de Saria" COLOR(DEFAULT) "! \n"
"Alors soyons amis! \n"
"Tiens, prends donc ceci!"
)
)

DEFINE_MESSAGE(0x10BC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "…ねえ、オイラって\n"
SHIFT(15) "顔が　さびしいって　思わない？\n"
SHIFT(3) "ユニークさに　欠けるってゆーか…"
)
,
MSG(
"Hi! Do you think my face is kind\n"
"of plain?\n"
"It's just not very unusual..."
)
,
MSG(
"Hi! Wie findest Du mein Outfit?\n"
"Ich gebe zu, es ist nicht \n"
"besonders aufregend..."
)
,
MSG(
"Salut! Ne trouves-tu pas que mon\n"
"visage n'a rien d'extraordinaire?\n"
"J'aimerais avoir du style..."
)
)

DEFINE_MESSAGE(0x10BD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) "また　いっしょに　演奏しよう。"
)
,
MSG(
"Let's play again sometime!"
)
,
MSG(
"Laß uns mal wieder spielen!"
)
,
MSG(
"Reviens jouer quand tu veux!"
)
)

DEFINE_MESSAGE(0x10BE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) "その　オカリナで、\n"
SHIFT(24) "ボクらの曲に　ついてきな！\n"
SHIFT(33) "まず、ボクから　いくよ。"
)
,
MSG(
UNSKIPPABLE "Follow along with our song on \n"
"your Ocarina. We'll lead you \n"
"into it."
)
,
MSG(
UNSKIPPABLE "Stimme in unser Lied mit Deiner \n"
"Okarina ein. Wir fangen an..."
)
,
MSG(
UNSKIPPABLE "Accompagne-nous avec ton ocarina. \n"
"Nous allons te donner le rythme."
)
)

DEFINE_MESSAGE(0x10BF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE "なかなか　いいセッションだったよ。\n"
SHIFT(3) "友情のしるしに　コレ　受け取って。"
)
,
MSG(
UNSKIPPABLE "That was quite a nice session.\n"
"As a token of our friendship, \n"
"please take this."
)
,
MSG(
UNSKIPPABLE "Das hat Spaß gemacht. Nimm dies\n"
"als Beweis unserer Freundschaft."
)
,
MSG(
UNSKIPPABLE "Quelle belle prestation!\n"
"En gage de notre amitié, \n"
"accepte donc ceci."
)
)

DEFINE_MESSAGE(0x10C0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "お〜い、こっちだよ。\n"
SHIFT(69) "ホホ〜ゥ！"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(36) NAME "よ…\n"
SHIFT(48) "また　会ったのぉ。\n"
SHIFT(12) "ワシの話を　お聞き。　ホホ〜ッ！" TEXTID(0x10C1)
)
,
MSG(
UNSKIPPABLE "Hey, over here!\n"
"Hoo hoo!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE NAME "...Good to see you\n"
"again! Listen to this!\n"
"Hoot hoot...." TEXTID(0x10C1)
)
,
MSG(
UNSKIPPABLE "Willkommen!\n"
"Ich habe Dich erwartet!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Schön, Dich wiederzusehen, \n"
NAME ". Hör mir gut zu!" TEXTID(0x10C1)
)
,
MSG(
UNSKIPPABLE "Hé ho! Par ici!\n"
"Hou hou!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE NAME "... \n"
"Quel plaisir de te voir! \n"
"Ecoute donc mes sages paroles!\n"
"Hou hou...." TEXTID(0x10C1)
)
)

DEFINE_MESSAGE(0x10C1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "この　迷いの森を　ぬけると\n"
SHIFT(48) "そこは　" COLOR(ADJUSTABLE) "森の聖域" COLOR(DEFAULT) "。"
BOX_BREAK

SHIFT(15) "おとずれる者も　めったにない\n"
SHIFT(39) "聖なる場所なのじゃ。"
BOX_BREAK

SHIFT(78) "おや…\n"
SHIFT(27) "なにやら　ふしぎな調べが\n"
SHIFT(42) "聞こえてくるのぉ…"
BOX_BREAK

SHIFT(39) "お前も　耳をすまして\n"
SHIFT(42) "聞いてみるがよい…\n"
SHIFT(57) "ホホッホ〜ッ！" EVENT
)
,
MSG(
"After going through the Lost \n"
"Woods, you will come upon the \n"
COLOR(ADJUSTABLE) "Sacred Forest Meadow" COLOR(DEFAULT) "."
BOX_BREAK

"That is a sacred place where few\n"
"people have ever walked."
BOX_BREAK

"Shhhh...What's that?\n"
"I can hear a mysterious tune..."
BOX_BREAK

"You should listen for that tune\n"
"too...\n"
"Hoo hoo ho!" EVENT
)
,
MSG(
"Hier in den Verlorenen Wäldern \n"
"wirst Du die " COLOR(ADJUSTABLE) "Heilige Lichtung" COLOR(DEFAULT) " \n"
"finden."
BOX_BREAK

"Dies ist ein Ort, den bisher nur\n"
"wenige Leute betreten haben."
BOX_BREAK

"Still... Ich höre etwas...\n"
"Ich höre eine fremde Melodie!"
BOX_BREAK

"Kannst Du sie auch hören?" EVENT
)
,
MSG(
"Après avoir traversé les Bois \n"
"Perdus tu arriveras au " COLOR(ADJUSTABLE) "Bosquet\n"
"Sacré" COLOR(DEFAULT) "."
BOX_BREAK

"Ce saint domaine ne fut exploré\n"
"que par très peu d'aventuriers."
BOX_BREAK

"Chuuut... Ecoute...\n"
"J'entends un chant mystérieux..."
BOX_BREAK

"Tu devrais tendre l'oreille à\n"
"ton tour! Hou hou hou!" EVENT
)
)

DEFINE_MESSAGE(0x10C2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"もう一度　聞くかい？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Do you want to hear what I said\n"
"again?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Muß ich mich noch einmal \n"
"wiederholen?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Veux-tu que je répète tout ça?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x10C3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "お前に　勇気が　あるならば\n"
"森をぬけることも　できるじゃろう。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "森から聞こえる音を　たよりに\n"
SHIFT(33) "行きなさい。　ホッホ〜！"
)
,
MSG(
UNSKIPPABLE "If you are courageous, you\n"
"will make it through the forest\n"
"just fine..."
BOX_BREAK

UNSKIPPABLE "Just follow your ears and listen\n"
"to the sounds coming from the\n"
"forest! \n"
"Hoot hoot!"
)
,
MSG(
UNSKIPPABLE "Beweise Dein Geschick und finde\n"
"den Weg durch den Wald..."
BOX_BREAK

UNSKIPPABLE "Verlasse Dich auf Dein Gehör\n"
"und Du wirst schon bald Dein\n"
"Ziel erreichen!"
)
,
MSG(
UNSKIPPABLE "Sois courageux et la forêt ne\n"
"te posera pas de problèmes..."
BOX_BREAK

UNSKIPPABLE "Fais confiance à tes oreilles,\n"
"dirige-toi grâce aux sons de \n"
"la forêt! Hou hou!"
)
)

DEFINE_MESSAGE(0x10C4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(63) "ホホォ〜ッ！"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(21) "サリアから　オカリナの歌を\n"
SHIFT(39) "教えてもらったかな？"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "そのメロディは　ふしぎな力を\n"
SHIFT(39) "秘めておるようじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "このハイラルには　まだまだ\n"
SHIFT(21) "そんな　ふしぎなメロディが\n"
SHIFT(12) "あるかもしれんのぉ…　ホホォ。" TEXTID(0x10C5)
)
,
MSG(
UNSKIPPABLE "Hoo hoo!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Did you learn an Ocarina song\n"
"from Saria?"
BOX_BREAK

UNSKIPPABLE "That melody seems to have some\n"
"mysterious power."
BOX_BREAK

UNSKIPPABLE "There may be some other \n"
"mysterious songs like this that\n"
"you can learn in Hyrule." TEXTID(0x10C5)
)
,
MSG(
UNSKIPPABLE NAME "...!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Hat Salia Dir ihr Lied \n"
"beigebracht?"
BOX_BREAK

UNSKIPPABLE "Das Lied scheint geheimnisvolle\n"
"Kräfte zu haben."
BOX_BREAK

UNSKIPPABLE "Ich hörte, daß an anderen \n"
"Orten ebenfalls die Möglichkeit\n"
"besteht, Lieder zu lernen. Zum \n"
"Beispiel in Hyrule..." TEXTID(0x10C5)
)
,
MSG(
UNSKIPPABLE "Hou hou!"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE "Saria t'a-t-elle appris une chanson?"
BOX_BREAK

UNSKIPPABLE "Cette mélodie semble avoir de \n"
"mystérieux pouvoirs."
BOX_BREAK

UNSKIPPABLE "Tu apprendras sûrement d'autres \n"
"chants au gré de ton périple..." TEXTID(0x10C5)
)
)

DEFINE_MESSAGE(0x10C5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(6) "そのオカリナを　" COLOR(YELLOW) "[C]" COLOR(DEFAULT) "で　かまえた時\n"
SHIFT(9) "メロディを　必要とする場所では\n"
SHIFT(42) COLOR(RED) "楽譜" COLOR(DEFAULT) "が　表示される。"
BOX_BREAK

SHIFT(33) "お前の　知っている曲を\n"
SHIFT(42) "吹いてみるが　いい。"
BOX_BREAK

SHIFT(27) "楽譜が　表示されぬ時にも\n"
SHIFT(24) "吹いてみるのも　よかろう。\n"
SHIFT(27) "フォ　フォ　フォ〜っとな。" EVENT
)
,
MSG(
"If you hold the Ocarina with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "\n"
"where a melody is necessary, a \n"
COLOR(RED) "musical staff " COLOR(DEFAULT) "will appear."
BOX_BREAK

"I recommend that you play a song\n"
"you know."
BOX_BREAK

"I also suggest that you play even\n"
"when a score is not displayed. \n"
"Just like this:\n"
"Hoo hoo hoo hoot hoot hoot!" EVENT
)
,
MSG(
"Plazierst Du die Okarina auf " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "\n"
"und wählst sie aus, werden\n"
COLOR(RED) "Notenlinien" COLOR(DEFAULT) " erscheinen."
BOX_BREAK

"Ich empfehle Dir, hier eines der\n"
"Lieder zu spielen, die Du erlernt \n"
"hast."
BOX_BREAK

"Du kannst natürlich auch ohne\n"
"Notenlinien spielen. Auch das \n"
"macht Spaß!" EVENT
)
,
MSG(
"Utilise ton ocarina avec les \n"
"boutons " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " au bon endroit et une \n"
COLOR(RED) "portée " COLOR(DEFAULT) "apparaîtra."
BOX_BREAK

"Je te conseille alors de jouer un \n"
"chant que tu connais."
BOX_BREAK

"Je te conseille aussi de jouer\n"
"même si la portée n'apparaît pas.\n"
"Comme ça:\n"
"Hou hou hou hout hout hout!" EVENT
)
)

DEFINE_MESSAGE(0x10C6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"もう一度　聞くかい？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Do you want to hear what I\n"
"said again?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Muß ich alles nochmal sagen?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Veux-tu que je répète tout ça?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x10C7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "メロディは　アイテムモードの\n"
SHIFT(6) COLOR(LIGHTBLUE) "オカリナ画面" COLOR(DEFAULT) "に　記録されておる。\n"
SHIFT(15) "よーく　おぼえて　おきなさい。"
)
,
MSG(
UNSKIPPABLE "Melodies you have learned \n"
"will be recorded on the " COLOR(LIGHTBLUE) "Quest \n"
"Status Subscreen" COLOR(DEFAULT) ". You should \n"
"memorize those melodies."
)
,
MSG(
UNSKIPPABLE "Alle Lieder, die Du lernst, \n"
"werden Dir im " COLOR(LIGHTBLUE) "Status-Menü \n"
COLOR(DEFAULT) "angezeigt. Lerne sie, denn Du \n"
"wirst sie häufig brauchen."
)
,
MSG(
UNSKIPPABLE "Les mélodies que tu apprendras\n"
"seront enregistrées dans le \n"
COLOR(LIGHTBLUE) "Sous-Menu du Statut" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x10C8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(78) "もう…\n"
SHIFT(33) "アイツってば　どーして\n"
SHIFT(12) "イジワルばっかり　するんだろ？"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "でも…\n"
SHIFT(3) "ミドの　言ってること　ほんとヨ。" TEXTID(0x10C9)
)
,
MSG(
UNSKIPPABLE "Ohh...That bum! I don't know why \n"
"he's always so mean to everyone!"
BOX_BREAK

UNSKIPPABLE "What he said is true, though." TEXTID(0x10C9)
)
,
MSG(
UNSKIPPABLE "Dieser Mido! Ich frage mich, was \n"
"er sich dabei denkt..."
BOX_BREAK

UNSKIPPABLE "Dennoch ist das, was er sagte, \n"
"wahr." TEXTID(0x10C9)
)
,
MSG(
UNSKIPPABLE "Ohh...Le vilain! Je ne sais \n"
"pas pourquoi il est si méchant\n"
"avec tout le monde!"
BOX_BREAK

UNSKIPPABLE "Même s'il a raison cette fois-ci!" TEXTID(0x10C9)
)
)

DEFINE_MESSAGE(0x10C9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(69) "この　森…\n"
SHIFT(45) "ヘンなのよ、最近…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "もしものコトも　あるし、\n"
SHIFT(9) "武器は　あったほうが　いいわネ。" TEXTID(0x1032)
)
,
MSG(
UNSKIPPABLE "The forest...strange things have\n"
"been happening here lately..."
BOX_BREAK

UNSKIPPABLE "You need to be ready for anything.\n"
"You'd better find a weapon!" TEXTID(0x1032)
)
,
MSG(
UNSKIPPABLE "Im Wald gehen in letzter Zeit\n"
"merkwürdige Dinge vor sich..."
BOX_BREAK

UNSKIPPABLE "Wir müssen auf alles vorbereitet \n"
"sein. Du solltest Dir eine Waffe \n"
"suchen!" TEXTID(0x1032)
)
,
MSG(
UNSKIPPABLE "Il se passe des choses étranges \n"
"dans la forêt..."
BOX_BREAK

UNSKIPPABLE "Sois prêt à tout!\n"
"Tu ferais mieux de te trouver une \n"
"arme!" TEXTID(0x1032)
)
)

DEFINE_MESSAGE(0x10CA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(3) "おわびに　" COLOR(RED) "デクのタネ" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(21) COLOR(RED) "３０個　４０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "All right! You win! In return,\n"
"I will sell you " COLOR(RED) "Deku Seeds" COLOR(DEFAULT) "!\n"
COLOR(RED) "30 pieces   40 Rupees" COLOR(DEFAULT) " they are!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Hab Gnade! Ich kann Dir \n"
COLOR(RED) "Deku-Kerne " COLOR(DEFAULT) "anbieten!\n"
COLOR(RED) "30 Stück   " COLOR(DEFAULT) "kosten" COLOR(RED) "   40 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Paix! Gentil! T'as gagné! \n"
"Veux-tu des " COLOR(RED) "Graines Mojo" COLOR(DEFAULT) "?\n"
COLOR(RED) "30 unités   40 Rubis, " COLOR(DEFAULT) "pas cher!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10CB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(9) "おわびに　" COLOR(RED) "デクの盾" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(42) COLOR(RED) "５０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I give up! If you let me go,\n"
"I will sell you a " COLOR(RED) "Deku Shield" COLOR(DEFAULT) "! It's\n"
COLOR(RED) "50 Rupees" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Ich gebe auf! Wie wär's, wenn ich\n"
"Dir einen " COLOR(RED) "Deku-Schild" COLOR(DEFAULT) " verkaufen \n"
"würde! Er kostet " COLOR(RED) "50 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "J'me rends! Laisse-moi partir et \n"
"je te vends un Bouclier Mojo pour\n"
COLOR(RED) "50 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10CC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(9) "おわびに　" COLOR(RED) "バクダン" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(27) COLOR(RED) "５個　４０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I quit! If you let me go, I'll sell \n"
"you some " COLOR(RED) "Bombs" COLOR(DEFAULT) "!\n"
COLOR(RED) "5 pieces   40 Rupees" COLOR(DEFAULT) " they are!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) " Hab Erbarmen! Ich kann Dir \n"
"einige" COLOR(RED) " Bomben " COLOR(DEFAULT) "verkaufen!\n"
COLOR(RED) "5 Stück   kosten    40 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "J'abandonne! Veux-tu des " COLOR(RED) "bombes" COLOR(DEFAULT) "?\n"
COLOR(RED) "5 unités   40 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10CD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(27) "おわびに　" COLOR(RED) "矢" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(21) COLOR(RED) "３０本　７０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Knock it off! Leave me alone, and \n"
"I will sell you " COLOR(RED) "Arrows" COLOR(DEFAULT) "!\n"
COLOR(RED) "30 pieces   70 Rupees" COLOR(DEFAULT) " they are!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Halte ein! Laß mich gehen und \n"
"ich verkaufe Dir " COLOR(RED) "Pfeile" COLOR(DEFAULT) "!\n"
COLOR(RED) "30 Stück   kosten   70 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "C'est bon! Laisse-moi tranquille\n"
"et je te vends des " COLOR(RED) "flèches" COLOR(DEFAULT) "!\n"
COLOR(RED) "30 unités   70 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10CE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(3) "おわびに　" COLOR(RED) "赤いクスリ" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(42) COLOR(RED) "４０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "All right! You win! If you spare \n"
"me, I will sell you a " COLOR(RED) "Red Potion" COLOR(DEFAULT) " \n"
"for " COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Vergib mir! Laß mich laufen, und \n"
"ich verkaufe Dir " COLOR(RED) "Rotes Elixier" COLOR(DEFAULT) " für \n"
"nur " COLOR(RED) "40 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "T'as gagné! Epargne-moi et je te\n"
"vends une " COLOR(RED) "potion rouge" COLOR(DEFAULT) " pour \n"
COLOR(RED) "40 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10CF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(3) "おわびに　" COLOR(ADJUSTABLE) "緑のクスリ" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(42) COLOR(RED) "４０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "All right! You win! Spare me, and\n"
"I will sell you a " COLOR(ADJUSTABLE) "Green Potion" COLOR(DEFAULT) " for \n"
COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Hab Gnade! Verschone mich und \n"
"ich verkaufe Dir " COLOR(ADJUSTABLE) "Grünes Elixier" COLOR(DEFAULT) " für \n"
"nur " COLOR(RED) "40 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "T'as gagné! Epargne-moi et je te \n"
"vends une " COLOR(ADJUSTABLE) "potion verte" COLOR(DEFAULT) " pour \n"
COLOR(RED) "40 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10D0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(81) "アレ？"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "い、いるじゃん、妖精…"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "なに〜っ！？\n"
SHIFT(12) "デクの樹サマに　呼ばれたって？" TEXTID(0x10D1)
)
,
MSG(
UNSKIPPABLE "What?! You've got a fairy?!\n"
"Say what? The Great Deku Tree\n"
"actually summoned you?" TEXTID(0x10D1)
)
,
MSG(
UNSKIPPABLE "Was?! Du hast eine Fee?!\n"
"Und der Deku-Baum hat Dich zu \n"
"sich gerufen?" TEXTID(0x10D1)
)
,
MSG(
UNSKIPPABLE "Quoi?!? Tu as une fée?!\n"
"Comment? Le Vénérable Arbre \n"
"Mojo t'a convoqué?" TEXTID(0x10D1)
)
)

DEFINE_MESSAGE(0x10D1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(63) "なんだよっ！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "なんで　この　" COLOR(RED) "ミド" COLOR(DEFAULT) "さまじゃなくて\n"
SHIFT(42) "オマエ　なんだよっ！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "お、おっもしろくね〜っ！！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "オイラは　みとめねぇゾ！\n"
SHIFT(33) "オマエなんて　まともな\n"
SHIFT(12) "「そうび」も　してないジャンか！"
BOX_BREAK

UNSKIPPABLE SHIFT(21) COLOR(ADJUSTABLE) "剣（けん）" COLOR(DEFAULT) "と　" COLOR(LIGHTBLUE) "盾（たて）" COLOR(DEFAULT) "ぐらい\n"
SHIFT(9) "持ってなくちゃ　デクの樹サマの\n"
SHIFT(18) "お手伝いなんて　できないゼ！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "ま、オイラも　持ってないけどナ…" TEXTID(0x1030)
)
,
MSG(
UNSKIPPABLE "Whaaaaaaat?!"
BOX_BREAK

UNSKIPPABLE "Why would he summon you and not \n"
"the great " COLOR(RED) "Mido" COLOR(DEFAULT) "?"
BOX_BREAK

UNSKIPPABLE "This isn't funny..."
BOX_BREAK

UNSKIPPABLE "I don't believe it!\n"
"You aren't even fully equipped\n"
"yet!"
BOX_BREAK

UNSKIPPABLE "How do you think you're going to \n"
"help the Great Deku Tree without\n"
"both a " COLOR(ADJUSTABLE) "sword" COLOR(RED) " " COLOR(DEFAULT) "and " COLOR(LIGHTBLUE) "shield" COLOR(RED) " " COLOR(DEFAULT) "ready?"
BOX_BREAK

"What? You're right, I don't have\n"
"my equipment ready, but..." TEXTID(0x1030)
)
,
MSG(
UNSKIPPABLE "Was muß ich da hören?!"
BOX_BREAK

UNSKIPPABLE "Wieso sollte er DICH und nicht \n"
"den großen" COLOR(RED) " Mido " COLOR(DEFAULT) "zu sich rufen?"
BOX_BREAK

UNSKIPPABLE "Das kann nicht sein..."
BOX_BREAK

UNSKIPPABLE "Ich glaube es einfach nicht!\n"
"Du bist nicht einmal richtig\n"
"ausgerüstet!"
BOX_BREAK

UNSKIPPABLE "Wie willst Du dem Deku-Baum \n"
"denn ohne " COLOR(ADJUSTABLE) "Schwert" COLOR(DEFAULT) " und " COLOR(LIGHTBLUE) "Schild" COLOR(DEFAULT) "\n"
"gegenübertreten?"
BOX_BREAK

"Was? Das stimmt, ich bin auch \n"
"nicht ausgerüstet, aber das ist\n"
"etwas anderes..." TEXTID(0x1030)
)
,
MSG(
UNSKIPPABLE SHIFT(51) "Heiiiiinnnnnnnn?!"
BOX_BREAK

UNSKIPPABLE "Et pourquoi j'suis pas \n"
"convoqué, moi le grand " COLOR(RED) "Mido" COLOR(DEFAULT) "? "
BOX_BREAK

UNSKIPPABLE "C'est pas juste..."
BOX_BREAK

UNSKIPPABLE "J'te crois pas!\n"
"Tu n'es même pas équipé!"
BOX_BREAK

UNSKIPPABLE "Comment pourrais-tu aider le \n"
"Vénérable Arbre Mojo sans " COLOR(ADJUSTABLE) "épée" COLOR(DEFAULT) " \n"
"ni " COLOR(LIGHTBLUE) "bouclier" COLOR(DEFAULT) ", hein!?"
BOX_BREAK

"Quoi? \n"
"Ok, mon équipement non plus n'est\n"
"pas prêt mais...\n"
"Et puis de quoi j'me mêle?" TEXTID(0x1030)
)
)

DEFINE_MESSAGE(0x10D2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(81) "あれ？"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "なんだ、" COLOR(LIGHTBLUE) "デクの盾" COLOR(DEFAULT) "つけてるじゃん。"
BOX_BREAK

UNSKIPPABLE SHIFT(84) "あ！？"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "そ…　それ、「" COLOR(ADJUSTABLE) "コキリの剣" COLOR(DEFAULT) "」？\n"
SHIFT(48) "ちっくしょーっ！！" TEXTID(0x10D3)
)
,
MSG(
UNSKIPPABLE SHIFT(45) "Eh, what's that?!"
BOX_BREAK

UNSKIPPABLE "Oh, you have a " COLOR(LIGHTBLUE) "Deku Shield" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "And what's THAT?!"
BOX_BREAK

UNSKIPPABLE "Is that the " COLOR(ADJUSTABLE) "Kokiri Sword" COLOR(DEFAULT) "?!"
BOX_BREAK

UNSKIPPABLE "GOOD GRIEF!!" TEXTID(0x10D3)
)
,
MSG(
UNSKIPPABLE SHIFT(43) "Hey, was ist das?!"
BOX_BREAK

UNSKIPPABLE "Du besitzt einen " COLOR(LIGHTBLUE) "Deku-Schild" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Und... Und auf Deinem Rücken\n"
"trägst Du ein Schwert!"
BOX_BREAK

UNSKIPPABLE "Unglaublich! Es ist in der\n"
"Tat das " COLOR(ADJUSTABLE) "Kokiri-Schwert" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "HEILIGER DEKU!" TEXTID(0x10D3)
)
,
MSG(
UNSKIPPABLE SHIFT(36) "Heu... C'est quoi ça?!"
BOX_BREAK

UNSKIPPABLE "Oh! Tu as un " COLOR(LIGHTBLUE) "Bouclier" COLOR(DEFAULT) " " COLOR(LIGHTBLUE) "Mojo" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Et pis ça c'est quoi?!"
BOX_BREAK

UNSKIPPABLE "Mais... C'est l'" COLOR(ADJUSTABLE) "Epée" COLOR(DEFAULT) " " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) "!?"
BOX_BREAK

UNSKIPPABLE SHIFT(48) "BEN CA ALORS!!" TEXTID(0x10D3)
)
)

DEFINE_MESSAGE(0x10D3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) "でもヨ、そんなモン　持ってたって\n"
SHIFT(6) "ヨワいやつは　ヨワいんだかんナ！"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "フンッ！！" TEXTID(0x1034)
)
,
MSG(
UNSKIPPABLE "Well, even with all that stuff, \n"
"a wimp is still a wimp, huh?" TEXTID(0x1034)
)
,
MSG(
UNSKIPPABLE "Wie dem auch sei, ein Weichling \n"
"bleibt immer ein Weichling!" TEXTID(0x1034)
)
,
MSG(
UNSKIPPABLE "Enfin... Même avec tout ça,\n"
"une mauviette est toujours une \n"
"mauviette, hein?" TEXTID(0x1034)
)
)

DEFINE_MESSAGE(0x10D4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(9) "おわびに　" COLOR(RED) "デクの棒" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(42) COLOR(RED) "１５ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I lost! Now I'll sell you a " COLOR(RED) "Deku \n"
"Stick " COLOR(DEFAULT) "for " COLOR(RED) "15 Rupees" COLOR(DEFAULT) "." TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Laß mich laufen und ich verkaufe \n"
"Dir einen " COLOR(RED) "Deku-Stab" COLOR(DEFAULT) " für nur \n"
COLOR(RED) "15 Rubine!" COLOR(DEFAULT) TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Houlà! Doucement! J'ai perdu mais\n"
"je peux te vendre des \n"
COLOR(RED) "Bâtons" COLOR(DEFAULT) " " COLOR(RED) "Mojo " COLOR(DEFAULT) "pour " COLOR(RED) "15 Rubis" COLOR(DEFAULT) "." TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10D5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！\n"
SHIFT(9) "おわびに　" COLOR(RED) "デクの実" COLOR(DEFAULT) "　売るッピー！\n"
SHIFT(27) COLOR(RED) "５個　２０ルピー　" COLOR(DEFAULT) "だピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I lost! Now I'll sell you " COLOR(RED) "Deku \n"
"Nuts " COLOR(DEFAULT) "if you leave me alone.\n"
COLOR(RED) "5 pieces   20 Rupees " COLOR(DEFAULT) "they are." TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Verzeih mir! Ich kann Dir " COLOR(RED) "Deku-\n"
"Nüsse" COLOR(DEFAULT) " zum Kauf anbieten!\n"
COLOR(RED) "5 Stück   kosten    20 Rubine!" COLOR(DEFAULT) TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Perdu! Dommage pour moi! \n"
"Veux-tu des " COLOR(RED) "Noix" COLOR(DEFAULT) " " COLOR(RED) "Mojo" COLOR(DEFAULT) "?\n"
COLOR(RED) "5 unités   20 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10D6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "それから　ついでに…"
BOX_BREAK

SHIFT(51) "イジワルして・・・\n"
SHIFT(45) QUICKTEXT_ENABLE "ゴメン！" QUICKTEXT_DISABLE "　って…サ。"
)
,
MSG(
"And also..."
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(13) "I'm sorry for being mean to him." QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(69) "Tell him that, too."
)
,
MSG(
"Noch etwas..."
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(8) "Es tut mir leid, daß ich gemein \n"
SHIFT(60) "zu ihm war." QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(20) "Sagen Sie ihm das bitte auch!"
)
,
MSG(
"Et aussi..."
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(58) "Dis-lui aussi..." QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(50) "Que je m'excuse."
)
)

DEFINE_MESSAGE(0x10D7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "フフフ…\n"
SHIFT(21) "ここまで　来れたら　一人前。" TEXTID(0x10D8)
)
,
MSG(
"Hee hee hee!\n"
"You came all the way up here?\n"
"You're a real man!" TEXTID(0x10D8)
)
,
MSG(
"Du hast einen beschwerlichen Weg\n"
"hinter Dir...\n"
"Du scheinst ein wahrer Held zu \n"
"sein!" TEXTID(0x10D8)
)
,
MSG(
"Hii hii hii!\n"
"Tu es arrivé jusqu'ici tout seul? \n"
"Comme un grand?\n"
"T'es un homme, un vrai de vrai!" TEXTID(0x10D8)
)
)

DEFINE_MESSAGE(0x10D8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "見て、イイけしきでしょ？\n"
SHIFT(36) COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "で　視点を　かえれば\n"
SHIFT(15) COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "で　この森を　見わたせるヨ。"
)
,
MSG(
"Look! Isn't this view pretty?\n"
"Change your viewpoint with " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) ",\n"
"so you can look around the forest\n"
"with " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "."
)
,
MSG(
"Sieh doch nur, ist die Aussicht \n"
"nicht wunderschön? Wechsle den \n"
"Blickwinkel mit " COLOR(YELLOW) "[C-Up] " COLOR(DEFAULT) "und nutze" COLOR(YELLOW) " " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ",\n"
"um die Sicht zu genießen."
)
,
MSG(
"Regarde! Belle vue, non?\n"
"Tu peux changer ton angle de vue \n"
"avec " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " et ainsi admirer la forêt \n"
"avec " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x10D9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "デクの樹サマに　なに　したの！？"
)
,
MSG(
"What did you do to the Great\n"
"Deku Tree?"
)
,
MSG(
"Was hast Du mit dem Deku-Baum \n"
"gemacht?"
)
,
MSG(
"Qu'as-tu fait au très vénérable \n"
"Arbre Mojo?"
)
)

DEFINE_MESSAGE(0x10DA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "迷いの森へ　行くなら\n"
SHIFT(12) "「そうび」は　しとかなくちゃネ。\n"
SHIFT(72) "フフフ…"
)
,
MSG(
"If you want to go to the Lost \n"
"Woods, you'd better equip the\n"
"right gear!\n"
"Hee hee!"
)
,
MSG(
"Bevor Du Dich in die Verlorenen \n"
"Wälder begibst, solltest Du Dich \n"
"besser ausrüsten!"
)
,
MSG(
"Avant d'aller dans les Bois Perdus, \n"
"il te faudra d'abord te trouver le \n"
"bon équipement!\n"
"Hii hii!"
)
)

DEFINE_MESSAGE(0x10DB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(27) "若い衆の　言いますには…\n"
SHIFT(24) "たいへん　恐ろしい　お顔…\n"
SHIFT(51) "だそうですッピ。"
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) SHIFT(39) COLOR(RED) "デクの実" COLOR(DEFAULT) "を　たくさん\n"
SHIFT(27) "用意しましたので　どーか\n"
SHIFT(12) "怒りを　おしずめください〜っ！"
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) SHIFT(39) "もちろん　持てる数も\n"
SHIFT(15) "ふやさせていただきます〜っ。"
BOX_BREAK

SHIFT(48) "チチンプイプイ…"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(78) "ピッ！！" EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "All my young Deku Scrub brothers\n"
"say...\n"
"You have a horrible face!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) "But don't worry! We will reward\n"
"you with many " COLOR(RED) "Deku Nuts" COLOR(DEFAULT) "."
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) "Of course, we will also enable \n"
"you to carry more of them!"
BOX_BREAK

"Abracadabra..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Alakazaaaam!!" EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Meine Brüder und ich sind uns\n"
"einig...\n"
"Du bist potthäßlich!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) "Zum Trost werden wir Dich mit \n"
"einigen " COLOR(RED) "Deku-Nüssen " COLOR(DEFAULT) "versorgen."
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) "Außerdem werden wir dafür \n"
"sorgen, daß Du von nun an mehr \n"
"Nüsse tragen kannst!"
BOX_BREAK

"Hobrobbel... Kadobbel..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Wazakamobbel!" EVENT
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Tous mes frères sont d'accord: \n"
"Ta face est trop moche..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) "Mais ne pleure pas! \n"
"On va te donner des " COLOR(RED) "Noix Mojo" COLOR(DEFAULT) "."
BOX_BREAK

SFX(NA_SE_EN_NUTS_FAINT) "Nous allons aussi te donner le \n"
"pouvoir d'en porter plus!"
BOX_BREAK

"Abracadabra..."
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Alakazaaaam!!" EVENT
)
)

DEFINE_MESSAGE(0x10DC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(18) "おわびに　" COLOR(RED) "デクの棒" COLOR(DEFAULT) "を　もっと\n"
SHIFT(18) "持てるように　してやるッピ！\n"
SHIFT(15) "ただし　" COLOR(RED) "４０ルピー　" COLOR(DEFAULT) "だっピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I surrender!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "To make your quest easier,\n"
"I can enable you to pick up more\n"
COLOR(RED) "Deku Sticks" COLOR(DEFAULT) "!\n"
"But, it'll cost you " COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Hab Gnade!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Verschone mich und ich sorge\n"
"dafür, daß Du von nun an mehr\n"
COLOR(RED) "Deku-Stäbe " COLOR(DEFAULT) "tragen kannst!\n"
"Es kostet Dich nur " COLOR(RED) "40 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "J'me rends!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Pour faciliter ta quête, je peux\n"
"te donner le pouvoir de porter \n"
"plus de " COLOR(RED) "Bâtons Mojo" COLOR(DEFAULT) "!\n"
"Cela te coûtera " COLOR(RED) "40 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10DD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(57) "まいったピー！"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) SHIFT(18) "おわびに　" COLOR(RED) "デクの実" COLOR(DEFAULT) "を　もっと\n"
SHIFT(18) "持てるように　してやるッピ！\n"
SHIFT(15) "ただし　" COLOR(RED) "４０ルピー　" COLOR(DEFAULT) "だっピー！" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "I surrender!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "To make your quest easier, I can\n"
"enable you to pick up more " COLOR(RED) "Deku\n"
"Nuts" COLOR(DEFAULT) "!\n"
"But, it'll cost you " COLOR(RED) "40 Rupees" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Verschone mich!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Gewähr mir Gnade und ich sorge\n"
"dafür, daß Du von nun an mehr\n"
COLOR(RED) "Deku-Nüsse " COLOR(DEFAULT) "tragen kannst!\n"
"Es kostet Dich nur " COLOR(RED) "40 Rubine" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "J'me rends!"
BOX_BREAK

SFX(NA_SE_EN_NUTS_DAMAGE) "Pour faciliter ta quête, je peux\n"
"te donner le pouvoir de porter \n"
"plus de " COLOR(RED) "Noix" COLOR(DEFAULT) " " COLOR(RED) "Mojo" COLOR(DEFAULT) "!\n"
"Cela te coûtera " COLOR(RED) "40 Rubis" COLOR(DEFAULT) "!" TEXTID(0x10A3)
)
)

DEFINE_MESSAGE(0x10DE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) SHIFT(69) "ざんねん！\n"
SHIFT(36) "今は、買えませんッピ。"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "So sorry!\n"
"You can't buy that right now!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Tut mir leid, aber Du kannst das \n"
"jetzt nicht kaufen!"
)
,
MSG(
SFX(NA_SE_EN_NUTS_FAINT) "Yaaaa! Dommage! \n"
"Pas d'argent, pas d'amis!"
)
)

DEFINE_MESSAGE(0x10DF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "あのヒト、もう　いないヨ。"
BOX_BREAK

SHIFT(45) "森に　入ったヒトは\n"
SHIFT(30) "みぃ〜んな　いなくなる。"
BOX_BREAK

SHIFT(24) "みぃ〜んな　スタルフォス。\n"
SHIFT(21) "だから　いないの、あのヒト。"
)
,
MSG(
"That guy isn't here anymore."
BOX_BREAK

"Anybody who comes into the \n"
"forest will be lost."
BOX_BREAK

"Everybody will become a Stalfos.\n"
"Everybody, Stalfos.\n"
"So, he's not here anymore."
)
,
MSG(
"Der, den Du suchst,\n"
"ist nicht mehr hier..."
BOX_BREAK

"Jeder, der diesen Wald betritt und \n"
"kein Kokiri ist, ist verdammt..."
BOX_BREAK

"Jeder...\n"
"Sicher hat er sich schon längst in \n"
"eine Pflanze verwandelt..."
)
,
MSG(
"Le garçon n'est plus ici."
BOX_BREAK

"Un Hylien dans la forêt est un\n"
"Hylien de moins. (proverbe)"
BOX_BREAK

"Il est devenu un monstre.\n"
"Comme tous les autres."
)
)
