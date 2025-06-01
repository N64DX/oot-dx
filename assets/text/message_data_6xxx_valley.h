DEFINE_MESSAGE(0x6000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(48) "おい　そこのヤツ！\n"
SHIFT(75) "止まれ！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Halt! Stay where you are!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Halt! Bleib, wo Du bist!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(25) "Halte! On ne bouge plus!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "よう、新入り！"
)
,
MSG(
"Hey, newcomer!"
)
,
MSG(
"Nun, Kleiner?"
)
,
MSG(
"Salut le nouveau!"
)
)

DEFINE_MESSAGE(0x6002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "よう、新入り！\n"
SHIFT(6) "開けてやるから、ちょっと待ちナ！"
)
,
MSG(
"Hey, newcomer! Wait a second \n"
"and I'll open the gate for you."
)
,
MSG(
"Hey, Kleiner! Warte eine Sekunde,\n"
"dann öffne ich Dir das Tor."
)
,
MSG(
"Une minute, le nouveau...\n"
"Je vais t'ouvrir la porte."
)
)

DEFINE_MESSAGE(0x6003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(9) "アタイらを　ナメんじゃないよ！！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Don't take us so lightly!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Unterschätz uns nicht!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(15) "Ne jamais défier une Gerudo!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) "アンタの仕事、見せてもらったヨ。\n"
SHIFT(18) "ここの守りを　やぶるなんて、\n"
SHIFT(18) "なかなか　イイ腕じゃないか！"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "ガノンドロフ様以外の　男なんて\n"
SHIFT(33) "みんな　役立たずだって\n"
SHIFT(24) "思ってたけど、見直したヨ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "アタイは　ナボール様から\n"
SHIFT(18) "この砦を　まかされてる者サ。"
BOX_BREAK

UNSKIPPABLE SHIFT(60) COLOR(RED) "ナボール様" COLOR(DEFAULT) "は\n"
SHIFT(18) "魔王　ガノンドロフ様の片腕、\n"
SHIFT(42) "ゲルド族の　首領だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "今は　砂漠のかなた…\n"
SHIFT(24) COLOR(YELLOW) "魂の神殿" COLOR(DEFAULT) "に　おいでなのサ。"
BOX_BREAK

UNSKIPPABLE "アタイらの仲間に　なりたいんだネ？\n"
SHIFT(48) "ＯＫ　いいだろう！\n"
SHIFT(30) "仲間と　みとめてやるヨ！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "コイツを　もっていきな。\n"
SHIFT(57) "コレが　あれば\n"
SHIFT(21) "この砦を　自由に　歩けるヨ。" EVENT
)
,
MSG(
UNSKIPPABLE "I've seen your fine work. To get \n"
"past the guards here, you must \n"
"have good thieving skills."
BOX_BREAK

UNSKIPPABLE "I used to think that all men, \n"
"besides the great Ganondorf, were \n"
"useless...but now that I've seen\n"
"you, I don't think so anymore!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "The exalted Nabooru" COLOR(DEFAULT) ", our leader, \n"
"put me in charge of this fortress."
BOX_BREAK

UNSKIPPABLE "Nabooru is the second-in-command\n"
"to the great Ganondorf, King of \n"
"the Gerudo Thieves."
BOX_BREAK

UNSKIPPABLE "Her headquarters are in the " COLOR(YELLOW) "Spirit\n"
"Temple" COLOR(DEFAULT) ", which is at the end of the\n"
"desert."
BOX_BREAK

UNSKIPPABLE "Say, you must want to become \n"
"one of us, eh?\n"
"All right, then!\n"
"You're in from now on!"
BOX_BREAK

UNSKIPPABLE "Take this. With it, you will\n"
"have free access to all areas of\n"
"the fortress!" EVENT
)
,
MSG(
UNSKIPPABLE "Ich bin beeindruckt. Um an unseren\n"
"Wachen vorbeizukommen, muß man\n"
"schon sehr geschickt sein."
BOX_BREAK

UNSKIPPABLE "Ich habe immer gedacht, alle Typen\n"
"außer Ganondorf wären ziemliche\n"
"Waschlappen... Aber ich muß\n"
"meine Meinung ändern!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Unsere Anführerin Naboru" COLOR(DEFAULT) "\n"
"hat mir die Verantwortung für\n"
"diese Festung übertragen."
BOX_BREAK

UNSKIPPABLE "Naboru ist die Stellvertreterin\n"
"des mächtigen Ganondorf,\n"
"des Herrn der Gerudo-Kriegerinnen."
BOX_BREAK

UNSKIPPABLE "Sie ist gerade auf dem Weg zum\n"
COLOR(YELLOW) "Geistertempel" COLOR(DEFAULT) ", der sich jenseits\n"
"der Wüste befindet. Sie vermutet\n"
"dort ein wertvolles Relikt."
BOX_BREAK

UNSKIPPABLE "Du willst also einer von uns\n"
"werden, was? Na gut, Du hast\n"
"Deine Fähigkeiten bewiesen! \n"
"Du bist nun ein Gerudo!"
BOX_BREAK

UNSKIPPABLE "Nimm dies. Damit kannst Du Dich\n"
"in der Festung frei bewegen!" EVENT
)
,
MSG(
UNSKIPPABLE "J'ai vu comment tu as évité les\n"
"gardes. Tu es fort et rapide."
BOX_BREAK

UNSKIPPABLE "J'ai toujours pensé que les mâles\n"
"n'étaient que des larves! Tous \n"
"sauf le Grand Ganondorf, bien sûr!\n"
"Mais tu m'as prouvé le contraire..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Nabooru l'exaltée" COLOR(DEFAULT) ", notre chef, \n"
"m'a confié la garde de cette \n"
"forteresse."
BOX_BREAK

UNSKIPPABLE "Nabooru est le bras droit du \n"
"grand Ganondorf, Roi des Voleurs\n"
"Gerudo."
BOX_BREAK

UNSKIPPABLE "Son quartier général se trouve \n"
"dans le " COLOR(YELLOW) "Temple de l'Esprit" COLOR(DEFAULT) ", au-delà \n"
"du désert..."
BOX_BREAK

UNSKIPPABLE "A mon avis...tu aimerais devenir un\n"
"Gerudo! J'me trompe?\n"
"Alors c'est chose faite!"
BOX_BREAK

UNSKIPPABLE "Prends donc ceci. C'est une carte \n"
"de membre Gerudo. Toutes les \n"
"pièces de la forteresse te seront\n"
"désormais accessibles!" EVENT
)
)

DEFINE_MESSAGE(0x6005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "これからは　ナボール様のおられる\n"
SHIFT(39) COLOR(YELLOW) "魂の神殿" COLOR(DEFAULT) "へと　つづく\n"
SHIFT(12) "砂漠への門も　出入り自由だよ。"
)
,
MSG(
"From now on, you're free to come\n"
"and go as you please through the \n"
"gate to the desert."
BOX_BREAK

"You'll find the " COLOR(YELLOW) "Spirit Temple" COLOR(DEFAULT) "," COLOR(YELLOW) " \n"
COLOR(DEFAULT) "where the exalted Nabooru lives,\n"
"out there in the desert."
)
,
MSG(
"Ab jetzt kannst Du das Tor zur\n"
"Wüste durchschreiten,\n"
"wann immer Du willst."
BOX_BREAK

"Dort findest Du den " COLOR(YELLOW) "Geistertempel" COLOR(DEFAULT) "," COLOR(YELLOW) " \n"
COLOR(DEFAULT) "in dem sich die herrliche Naboru\n"
"zur Zeit aufhält."
)
,
MSG(
"Tu es désormais libre d'emprunter\n"
"la porte du désert."
BOX_BREAK

"Tu trouveras dans le désert le \n"
COLOR(YELLOW) "Temple de l'Esprit" COLOR(DEFAULT) ". \n"
"Nabooru l'exaltée y a élu domicile."
)
)

DEFINE_MESSAGE(0x6006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(75) "バカめ！" QUICKTEXT_DISABLE "\n"
SHIFT(24) "そこで　おとなしくしてろ！"
)
,
MSG(
QUICKTEXT_ENABLE "Stupid Kid!" QUICKTEXT_DISABLE "\n"
"Get in there and keep quiet!"
)
,
MSG(
QUICKTEXT_ENABLE "Weichei!" QUICKTEXT_DISABLE "\n"
"Hinein mit Dir!\n"
"Und halt die Klappe!"
)
,
MSG(
QUICKTEXT_ENABLE "Pauvre idiot!" QUICKTEXT_DISABLE "\n"
"Entre là-dedans et reste \n"
"tranquille!"
)
)

DEFINE_MESSAGE(0x6007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(15) "どっからきたか　しらないけど\n"
SHIFT(6) "ここの　守りを　ぬけてくるなんて\n"
SHIFT(33) "いい度胸してるわねー。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "アタイらの　大工仲間…\n"
SHIFT(9) "みんな　ここに　つかまってるの。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ここから　出してくれたら\n"
SHIFT(42) "きっと　役に立つわ。"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "でも…　気をつけて！\n"
SHIFT(39) "見張りの　" COLOR(RED) "ゲルド族" COLOR(DEFAULT) "が\n"
SHIFT(21) "どっかに　" TEXT_SPEED(2) "いるはずだけど…" TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE SHIFT(48) "ア！　" QUICKTEXT_ENABLE "あぶないっ！！" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "I have no idea where you \n"
"come from, but you must have a\n"
"lot of guts to make it past all\n"
"the guards around here!"
BOX_BREAK

UNSKIPPABLE "All of my fellow carpenters\n"
"are imprisoned somewhere in here."
BOX_BREAK

UNSKIPPABLE "If you can get us out of here,\n"
"we'll repay the favor somehow!"
BOX_BREAK

UNSKIPPABLE "But be careful! There're sure\n"
"to be " COLOR(RED) "Gerudo " COLOR(DEFAULT) "guards somewhere \n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "around" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "here" QUICKTEXT_DISABLE "...." TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Woo!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Watch out!" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "Ich weiß zwar nicht, woher Du \n"
"kommst, aber Du mußt ganz schön \n"
"mutig sein, wenn Du Dich an den\n"
"Wachen vorbeitraust!"
BOX_BREAK

UNSKIPPABLE "Meine anderen Kumpels sind\n"
"auch irgendwo eingesperrt."
BOX_BREAK

UNSKIPPABLE "Befreie uns bitte alle!"
BOX_BREAK

UNSKIPPABLE "Aber sei vorsichtig! Hier gibt's\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "jede" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Menge" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
COLOR(RED) "Gerudo-Wächterinnen" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Hey!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Paß auf!" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE "Tu as évité tous les gardes?\n"
"Je ne sais pas d'où tu viens, mais\n"
"tu dois être très fort!"
BOX_BREAK

UNSKIPPABLE "Tous les autres ouvriers sont\n"
"enfermés dans la forteresse."
BOX_BREAK

UNSKIPPABLE "Fais-nous tous sortir de ce\n"
"traquenard et nous te rendrons un\n"
"grand service!"
BOX_BREAK

UNSKIPPABLE "Sois prudent! Des gardes " COLOR(RED) "Gerudos" COLOR(DEFAULT) " \n"
"rôdent dans les couloirs..."
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Woah!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Attention!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6008, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(66) "過去の入口" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(46) "The Entrance to the Past" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(28) "Portal in die Vergangenheit" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(17) "Le Seuil ouvert sur le Passé" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6009, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(66) "現在の入口" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "The Entrance to the Present" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(37) "Portal in die Gegenwart" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(12) "Le Seuil ouvert sur le Présent" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x600A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(66) "未来の入口" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "The Entrance to the Future" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(45) "Portal in die Zukunft" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(17) "Le Seuil ouvert sur le Futur" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x600B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SFX(NA_SE_EN_PO_LAUGH) SHIFT(12) "行きはヨイヨイ　帰りはイナイ。\n"
SHIFT(33) "片道かぎりの　道案内…\n"
SHIFT(12) "うまく　オイラに　ついてきナ…" FADE(90)
)
,
MSG(
SFX(NA_SE_EN_PO_LAUGH) "I'll be your guide on your way,\n"
"but coming back, I won't play!\n"
"I'll show you the only way to go,\n"
"so follow me and don't be slow!" FADE(90)
)
,
MSG(
SFX(NA_SE_EN_PO_LAUGH) "Den rechten Weg, den zeig ich Dir,\n"
"denn Du hast dafür kein Gespür.\n"
"Nun flott und folge mir sehr dicht.\n"
"Alleine überlebst Du's nicht!" FADE(90)
)
,
MSG(
SFX(NA_SE_EN_PO_LAUGH) "Le sentier laisse-moi te révéler\n"
"ou du désert tu seras prisonnier.\n"
"Poursuis bien mon halo spectral\n"
"qui te mènera jusqu'au lieu du mal!" FADE(90)
)
)

DEFINE_MESSAGE(0x600C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) "過去・現在・未来…"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "キミの持つ　マスターソードは、\n"
SHIFT(33) "その流れを　旅する舟…\n"
SHIFT(12) "時の神殿に　その港は存在する。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "砂漠の邪神像を　" COLOR(YELLOW) "魂の神殿" COLOR(DEFAULT) "として\n"
SHIFT(21) "再生させるには、時の流れを\n"
SHIFT(21) "さかのぼらねば　ならない…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "幼き者を　砂漠へ誘う　調べ\n"
SHIFT(9) COLOR(YELLOW) "魂のレクイエム" COLOR(DEFAULT) "を　聞くがいい…"
)
,
MSG(
UNSKIPPABLE "Past, present, future..."
BOX_BREAK

UNSKIPPABLE "The Master Sword is a ship with \n"
"which you can sail upstream and\n"
"downstream through time's river..."
BOX_BREAK

UNSKIPPABLE "The port for that ship is in the\n"
"Temple of Time..."
BOX_BREAK

UNSKIPPABLE "To restore the Desert Colossus\n"
"and enter the " COLOR(YELLOW) "Spirit Temple" COLOR(DEFAULT) ", you\n"
"must travel back through time's\n"
"flow..."
BOX_BREAK

UNSKIPPABLE "Listen to this " COLOR(YELLOW) "Requiem of Spirit" COLOR(DEFAULT) "...\n"
"This melody will lead a child back\n"
"to the desert."
)
,
MSG(
UNSKIPPABLE "Vergangenheit...\n"
"Gegenwart...\n"
"Zukunft..."
BOX_BREAK

UNSKIPPABLE "Das Master-Schwert sei Dir ein\n"
"Ruder auf Deinem Weg hin und\n"
"zurück durch die Ströme der Zeit..."
BOX_BREAK

UNSKIPPABLE "Der Hafen der Zeitwanderer liegt\n"
"in der Zitadelle der Zeit..."
BOX_BREAK

UNSKIPPABLE "Willst Du den Wüstenkoloss\n"
"betreten und in den " COLOR(YELLOW) "Geistertempel" COLOR(DEFAULT) "\n"
"eindringen, mußt Du wieder zurück\n"
"auf den Wellen der Zeiten..."
BOX_BREAK

UNSKIPPABLE "Höre nun das " COLOR(YELLOW) "Requiem der Geister" COLOR(DEFAULT) "!\n"
"Es wird Dich als Kind\n"
"in die Wüste zurückbringen!"
)
,
MSG(
UNSKIPPABLE "Passé, présent, futur..."
BOX_BREAK

UNSKIPPABLE "L'épée de Légende est un esquif\n"
"voguant sur les flots tumultueux \n"
"du temps..."
BOX_BREAK

UNSKIPPABLE "Son voyage fait halte dans le\n"
"Temple du Temps..."
BOX_BREAK

UNSKIPPABLE "Pour entrer dans ce " COLOR(YELLOW) "Temple" COLOR(DEFAULT) ", \n"
"remonte le cours des âges..."
BOX_BREAK

UNSKIPPABLE "Entends le " COLOR(YELLOW) "Requiem des Esprits" COLOR(DEFAULT) "...\n"
"Cette mélodie conduira un enfant\n"
"aux portes du désert."
)
)

DEFINE_MESSAGE(0x600D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "アタイは　ゲルド一の　弓の名手！\n"
SHIFT(3) "さらに　ゲルド一の　乗馬の達人だ！"
BOX_BREAK

COLOR(RED) "２０ルピー" COLOR(DEFAULT) "で　やぶさめ　やるかい？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"I am the Gerudo master of \n"
"horseback archery! On top of \n"
"that, I'm the Gerudo master of\n"
"horseback riding!"
BOX_BREAK

"Want to try horseback archery\n"
"for " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Ich bin die Gerudo-Meisterin im\n"
"berittenen Bogenschießen! Ach ja,\n"
"und ich bin obendrein die beste\n"
"Reiterin der Gerudos!"
BOX_BREAK

"Willst Du gegen mich antreten?\n"
"Das kostet nur " COLOR(RED) "20 Rubine" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Je suis la meilleure archère \n"
"montée des Gerudos! Je suis \n"
"aussi la meilleure cavalière!"
BOX_BREAK

"L'archerie montée te tente?\n"
"Alors paie " COLOR(RED) "20 Rubis" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x600E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "いい度胸だね…\n"
SHIFT(24) "気に入った！　ついてきな！！"
)
,
MSG(
"You have guts--I like you. \n"
"Follow me."
)
,
MSG(
"Du hast Mut! Typen wie Dich\n"
"mag ich! \n"
"Folge mir."
)
,
MSG(
"Tu as du cran...j'aime ça.\n"
"Suis-moi!!!"
)
)

DEFINE_MESSAGE(0x600F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "馬がいなけりゃ　話にならないね。"
)
,
MSG(
"It's out of the question if you \n"
"don't have a horse!"
)
,
MSG(
"Das kannst Du vergessen, wenn\n"
"Du kein Pferd hast!"
)
,
MSG(
"Mais t'es un crétin!\n"
"L'archerie montée se fait à cheval!\n"
"Si t'en a pas...t'en fais pas!\n"
"C'est logique!!!"
)
)

DEFINE_MESSAGE(0x6010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(30) "腰抜けには　用はないよ！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "I won't have anything to do with a\n"
"coward like you!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Mit so einem Weichei will ich\n"
"nichts zu tun haben!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Lâche! Fuis mon regard! \n"
"Tu n'es que l'ombre d'un rat!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "フン、口ほどにもないねぇ。\n"
SHIFT(57) "出直してきな！"
)
,
MSG(
"Ah, you are not as good as you \n"
"claim. Maybe next time."
)
,
MSG(
"Na, so gut bist Du wohl doch\n"
"nicht! Vielleicht beim nächsten\n"
"Mal."
)
,
MSG(
"Tu es faible... \n"
"Comme tous les hommes!\n"
"Peut-être la prochaine fois."
)
)

DEFINE_MESSAGE(0x6012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "や、やるじゃないか…"
BOX_BREAK

SHIFT(3) "今日のところは　負けを　認めるよ。\n"
SHIFT(42) "アタイも　まだ　まだ\n"
SHIFT(33) "修業が　足りないねぇ…"
)
,
MSG(
"You did well."
BOX_BREAK

"For today, I admit I lost. \n"
"It seems I have a lot of room for \n"
"improvement."
)
,
MSG(
"Das ist ja super gelaufen!"
BOX_BREAK

"Ich muß zugeben, Du hast mich\n"
"ganz schön abgezogen. \n"
"Ich muß wohl noch besser werden..."
)
,
MSG(
"Tu es fort. J'en conviens."
BOX_BREAK

"Aujourd'hui je perds, demain à moi\n"
"la victoire!!!"
)
)

DEFINE_MESSAGE(0x6013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ここは　ゲルド族の" COLOR(RED) "修練場" COLOR(DEFAULT) "。"
BOX_BREAK

SHIFT(9) "会員証を　持たぬ者は　入れない！"
)
,
MSG(
"This is the Gerudo's " COLOR(RED) "Training \n"
"Ground" COLOR(DEFAULT) "."
BOX_BREAK

"Nobody is allowed to enter \n"
"without a membership card."
)
,
MSG(
"Das ist die " COLOR(RED) "Trainingsarena" COLOR(DEFAULT) " der\n"
"Gerudo-Kriegerinnen."
BOX_BREAK

"Ohne Gerudo-Paß kommst Du hier\n"
"nicht hinein!"
)
,
MSG(
"Voici l'entrée du " COLOR(RED) "Gymnase Gerudo" COLOR(DEFAULT) "."
BOX_BREAK

"Ne sont autorisés que les \n"
"membres actifs."
)
)

DEFINE_MESSAGE(0x6014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ここは　ゲルド族の" COLOR(RED) "修練場" COLOR(DEFAULT) "。"
BOX_BREAK

SHIFT(60) "会員証　確認！"
BOX_BREAK

"１回　１０ルピー　だよ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "やる\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
"This is the Gerudo's " COLOR(RED) "Training\n"
"Ground" COLOR(DEFAULT) "."
BOX_BREAK

"Membership card verified."
BOX_BREAK

"One try for 10 Rupees!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Try\n"
    "Don't try" COLOR(DEFAULT)
)
,
MSG(
"Das ist die " COLOR(RED) "Trainingsarena" COLOR(DEFAULT) " der\n"
"Gerudo-Kriegerinnen."
BOX_BREAK

"Du hast den Gerudo-Paß?\n"
"Gut, dann darfst Du hinein."
BOX_BREAK

"Ein Versuch kostet 10 Rubine!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ich versuche es!\n"
    "Ich lasse es bleiben!" COLOR(DEFAULT)
)
,
MSG(
"Voici l'entrée du " COLOR(RED) "Gymnase Gerudo" COLOR(DEFAULT) "."
BOX_BREAK

"Carte de membre acceptée."
BOX_BREAK

"Une session pour 10 Rubis!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x6015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "じゃ、１０ルピー　いただくよ！\n"
SHIFT(36) "せいぜい　がんばりな！" EVENT
)
,
MSG(
"All right, I'll take your 10 Rupees.\n"
"Give it your best shot!" EVENT
)
,
MSG(
"Okay, her mit den 10 Rubinen.\n"
"Schieß ordentlich!" EVENT
)
,
MSG(
"C'est parti...\n"
"Bonne chance, le nouveau!\n"
"Ha ha ha ha ha!" EVENT
)
)

DEFINE_MESSAGE(0x6016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "金が　足りないよ！\n"
QUICKTEXT_ENABLE SHIFT(57) "出直してきな！" QUICKTEXT_DISABLE
)
,
MSG(
"You don't have enough money!\n"
QUICKTEXT_ENABLE "Come back again." QUICKTEXT_DISABLE
)
,
MSG(
"Du hast nicht genug Geld!\n"
QUICKTEXT_ENABLE "Komm später wieder." QUICKTEXT_DISABLE
)
,
MSG(
"Tu n'as pas assez d'argent!\n"
QUICKTEXT_ENABLE "Reviens les poches pleines." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(60) "よう、新入り。"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "砂漠へ　行くのかい？\n"
SHIFT(9) "それじゃ、ここを　開けてやるよ。\n"
SHIFT(72) "でもな…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) COLOR(RED) "ふたつの試練" COLOR(DEFAULT) "を　クリアしないと\n"
SHIFT(30) "砂漠は　こえられないよ。" TEXTID(0x6018)
)
,
MSG(
UNSKIPPABLE "Hey, rookie!"
BOX_BREAK

UNSKIPPABLE "Are you going into the desert?\n"
"I'll open this gate for you, but..."
BOX_BREAK

UNSKIPPABLE "You can't cross the desert \n"
"unless you pass the " COLOR(RED) "two trials" COLOR(DEFAULT) "." TEXTID(0x6018)
)
,
MSG(
UNSKIPPABLE "Hey, Grünschnabel!"
BOX_BREAK

UNSKIPPABLE "Willst Du Dich wirklich in\n"
"die Wüste begeben?\n"
"Na gut, ich öffne das Tor, aber..."
BOX_BREAK

UNSKIPPABLE "Es ist nicht leicht, den" COLOR(RED) "\n"
"Geistertempel" COLOR(DEFAULT) " zu erreichen!" TEXTID(0x6018)
)
,
MSG(
UNSKIPPABLE "Hé! Le nouveau!"
BOX_BREAK

UNSKIPPABLE "Vas-tu dans le désert?\n"
"Je t'ouvre la porte, mais..."
BOX_BREAK

UNSKIPPABLE "Prends garde: tu ne pourras \n"
"traverser le désert sans passer \n"
"les " COLOR(RED) "deux épreuves" COLOR(DEFAULT) "." TEXTID(0x6018)
)
)

DEFINE_MESSAGE(0x6018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "ひとつめの試練…　" COLOR(RED) "砂の大河" COLOR(DEFAULT) "。"
BOX_BREAK

SHIFT(9) "この河は　歩いては　渡れないよ。\n"
SHIFT(15) "渡った後は　アタイらの立てた\n"
SHIFT(12) COLOR(RED) "旗（はた）" COLOR(DEFAULT) "を　目印にして行きナ！"
BOX_BREAK

SHIFT(9) "ふたつめの試練…　" COLOR(RED) "幻の案内人" COLOR(DEFAULT) "。"
BOX_BREAK

SHIFT(15) COLOR(RED) "真実を見ぬく目" COLOR(DEFAULT) "を　もたぬ者は\n"
SHIFT(21) "ここへ　戻るしかないんだ。\n"
SHIFT(12) "でも、行くんだろ？　止めないよ。" EVENT
)
,
MSG(
"The first trial is...the " COLOR(RED) "River of \n"
"Sand" COLOR(DEFAULT) "! You can't walk across this\n"
"river! After you cross it, follow\n"
"the flags we placed there."
BOX_BREAK

"The second trial is...the " COLOR(RED) "Phantom\n"
"Guide" COLOR(DEFAULT) "!"
BOX_BREAK

"Those without " COLOR(RED) "eyes that can see\n"
"the truth " COLOR(DEFAULT) "will only find themselves\n"
"returning here."
BOX_BREAK

"You are going anyway, aren't you?\n"
"I won't stop you...\n"
"Go ahead!" EVENT
)
,
MSG(
"Zunächst mußt Du den... " COLOR(RED) "Treibsand-\n"
"Graben" COLOR(DEFAULT) " überqueren! Dann folge\n"
"auf dem richtigen Weg den Flaggen,\n"
"sonst schluckt Dich der Sand."
BOX_BREAK

"Die zweite Prüfung: Folge dem\n"
COLOR(RED) "Wüstengeist" COLOR(DEFAULT) "!"
BOX_BREAK

"Ohne das " COLOR(RED) "Auge der Wahrheit " COLOR(DEFAULT) "aber\n"
"landest Du direkt wieder hier!"
BOX_BREAK

"Du willst immer noch dorthin?\n"
"Ich halte Dich nicht auf...\n"
"Mach's gut!" EVENT
)
,
MSG(
"La première épreuve est le " COLOR(RED) "Fleuve\n"
"de Sable" COLOR(DEFAULT) "! Franchis-le et suis le\n"
"chemin bordé de drapeaux."
BOX_BREAK

"La deuxième épreuve est... \n"
COLOR(RED) "Le Guide Spectral" COLOR(DEFAULT) "!"
BOX_BREAK

"Ceux qui ne peuvent" COLOR(RED) " distinguer la \n"
"vérité de leurs yeux " COLOR(DEFAULT) "s'en \n"
"reviendront ici."
BOX_BREAK

"Enfin...si ton choix est fait, je ne\n"
"peux te retarder davantage...\n"
"Fonce, beau gosse!!!" EVENT
)
)

DEFINE_MESSAGE(0x6019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(3) "なんで　こんなとこに　きたんだい？\n"
SHIFT(9) "ま…　アタイも　いえないけどサ。" TEXTID(0x601A)
)
,
MSG(
UNSKIPPABLE "Why did you come all the\n"
"way down here? What? You were\n"
"just about to ask me the same \n"
"thing?" TEXTID(0x601A)
)
,
MSG(
UNSKIPPABLE "Warum bist Du schon wieder hier?\n"
"Was? Willst Du mich etwa noch\n"
"einmal dasselbe fragen?" TEXTID(0x601A)
)
,
MSG(
UNSKIPPABLE "Que fais-tu là? Quoi?\n"
"Tu allais me poser la même \n"
"question?" TEXTID(0x601A)
)
)

DEFINE_MESSAGE(0x601A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "ここまで　きたら　流れにまかせて\n"
SHIFT(27) "とことん　行ってみるのも\n"
SHIFT(57) "いいモンだよ。"
)
,
MSG(
"Well, now that you're down here, \n"
"you may as well make the best of \n"
"things!"
)
,
MSG(
"Naja, wenn Du sowieso schon da\n"
"bist, dann mach das Beste draus!"
)
,
MSG(
"Te voilà bien avancé!\n"
"Comment vas-tu remonter à \n"
"présent?"
)
)

DEFINE_MESSAGE(0x601B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "そーかい　すまねえな！\n"
SHIFT(12) "じゃ、こんなモンで　わりぃけど\n"
SHIFT(42) "受け取ってくんな！！"
)
,
MSG(
"Good kid! Thanks!\n"
"I'm sorry that I can't give you\n"
"something as good in return, but...\n"
"take this anyway!"
)
,
MSG(
"Guter Junge! Vielen Dank!\n"
"Ich kann Dir zwar nichts derart \n"
"Wertvolles zum Tausch anbieten,\n"
"aber... vielleicht ist das ja okay!"
)
,
MSG(
"Merci mon garçon!\n"
"Désolé, je n'ai pas grand chose à \n"
"te donner, mais...\n"
"Prends ceci...pour le geste!"
)
)

DEFINE_MESSAGE(0x601D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(21) "見慣れない　ボーヤだねぇ…\n"
SHIFT(33) "アンタみたいな　子供が\n"
SHIFT(9) "こんなところに　なんの用だい？"
BOX_BREAK

THREE_CHOICE
    COLOR(ADJUSTABLE) "神殿を見にきた\n"
    "賢者を探しに\n"
    "なんでもない" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "I haven't seen you around, kid..."
BOX_BREAK

"What do you want?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "To see the temple\n"
    "Looking for the Sages\n"
    "Nothing, really" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Ich habe Dich noch nie gesehen,\n"
"Kleiner..."
BOX_BREAK

"Was willst Du hier?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Den Tempel anschauen!\n"
    "Ich suche die Weisen!\n"
    "Eigentlich nichts!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Tu es nouveau dans le coin, \n"
"gamin..."
BOX_BREAK

"Que veux-tu?\n"
THREE_CHOICE
    COLOR(ADJUSTABLE) "Voir le Temple\n"
    "Je cherche les Sages\n"
    "Heu...j'me balade" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x601E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "ボーヤみたいな　子供が\n"
SHIFT(21) "神殿に　しのびこもうなんて\n"
SHIFT(57) "似合わないよ。"
)
,
MSG(
"You're just a kid! The temple is\n"
"no place for kids!"
)
,
MSG(
"Du bist noch zu klein! Der Tempel\n"
"ist nicht der richtige Ort für\n"
"Kinder. Geh woanders spielen!"
)
,
MSG(
"Tu n'es qu'un gamin! \n"
"Et les temples... C'est pas pour \n"
"les gamins!"
)
)

DEFINE_MESSAGE(0x601F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "賢者　だって？\n"
SHIFT(30) "そんなヤツ、知らないね。"
)
,
MSG(
"A Sage? I don't know anyone\n"
"like that."
)
,
MSG(
"Ein Weiser? Keine Ahnung! Ist\n"
"das jemand, der Vater und Mutter\n"
"verloren hat?"
)
,
MSG(
"Quoi? Les Sages? \n"
"C'est quoi donc?\n"
"Ici il n'y a que des voleurs!"
)
)

DEFINE_MESSAGE(0x6020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(18) "用がないなら　丁度よかった！\n"
SHIFT(21) "アタイの　たのみ　聞いてよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "おっと、その前に…\n"
SHIFT(72) "アンタ…"
BOX_BREAK

"ガノンドロフ一味じゃないだろね？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "そうだといったら？\n"
    "ちがう！" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "You have nothing to do? What \n"
"good timing! Can you do me a \n"
"favor, kid?"
BOX_BREAK

UNSKIPPABLE "Wait a second, I want to ask you\n"
"first--you wouldn't happen to be\n"
"one of Ganondorf's..."
BOX_BREAK

"followers...would you?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "What if I am?\n"
    "I hate Ganondorf!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Du hast nichts Besseres zu tun?\n"
"Du kommst wie gerufen! Kannst Du\n"
"mir einen Gefallen tun, Kleiner?"
BOX_BREAK

UNSKIPPABLE "Moment mal, Du bist doch nicht\n"
"etwa einer von Ganondorfs..."
BOX_BREAK

"Anhängern... Oder?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Und wenn es so wäre?\n"
    "Ich hasse Ganondorf!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Tu te balades? Tu n'as donc rien \n"
"à faire? Ca tombe très bien! \n"
"J'ai un petit service à te \n"
"demander..."
BOX_BREAK

UNSKIPPABLE "Au fait...juste une question...\n"
"Tu ne serais pas un des sbires \n"
"de..."
BOX_BREAK

"Ganondorf...par hasard?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Peut-être...j'hésite encore.\n"
    "Ganondorf? Je le HAIS!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x6021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(51) "アッハッハッハ！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "カッコつけんじゃないよ！\n"
SHIFT(45) "聞いてみただけさ！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "アンタみたいな　ボーヤが\n"
SHIFT(3) "ガノンドロフの仲間な訳ないだろ！"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "ま、冗談は　さておき…" TEXTID(0x6023)
)
,
MSG(
UNSKIPPABLE "Wha-ha-ha!\n"
"Don't try to act cool, kid.\n"
"I was just asking!"
BOX_BREAK

UNSKIPPABLE "A kid like you could never be\n"
"one of Ganondorf's followers!"
BOX_BREAK

UNSKIPPABLE "Well, let's cut to the chase..." TEXTID(0x6023)
)
,
MSG(
UNSKIPPABLE "Hahaha!\n"
"Gib nicht so an, Kleiner!"
BOX_BREAK

UNSKIPPABLE "Jemand wie Du könnte nie einer\n"
"von Ganondorfs Anhängern sein!"
BOX_BREAK

UNSKIPPABLE "Diese Schurken sind aus\n"
"ganz anderem Holz geschnitzt..." TEXTID(0x6023)
)
,
MSG(
UNSKIPPABLE "Wha-ha-ha-ha!\n"
"Tu veux jouer au dur! \n"
"C'est trooooop mignon!"
BOX_BREAK

UNSKIPPABLE "Crois-tu que Ganondorf recruterait\n"
"un gamin comme toi?"
BOX_BREAK

UNSKIPPABLE "Bon...allons droit au but..." TEXTID(0x6023)
)
)

DEFINE_MESSAGE(0x6022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(75) "フフン！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "いい根性　してるじゃないか。\n"
SHIFT(57) "気に入ったよ！" TEXTID(0x6023)
)
,
MSG(
UNSKIPPABLE "Uh-huh!"
BOX_BREAK

UNSKIPPABLE "You've got guts.\n"
"I think I like you." TEXTID(0x6023)
)
,
MSG(
UNSKIPPABLE "Ach was!"
BOX_BREAK

UNSKIPPABLE "Du bist ganz schön mutig.\n"
"Ich glaube, ich mag Dich." TEXTID(0x6023)
)
,
MSG(
UNSKIPPABLE "Ho-hoh!"
BOX_BREAK

UNSKIPPABLE "Tu n'as pas froid au yeux!\n"
"Hmm...J'aime ça." TEXTID(0x6023)
)
)

DEFINE_MESSAGE(0x6023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(18) "まず　自己紹介しておこうか。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "アタイは、ゲルド族の　" COLOR(RED) "ナボール" COLOR(DEFAULT) "。\n"
SHIFT(30) "一匹オオカミの　盗賊さ。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "だけど　誤解しないでよ！"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "同じ　盗賊でも、大勢で　弱い者から\n"
SHIFT(9) "物を盗んだり、人殺しをする様な\n"
SHIFT(18) "ガノンドロフとは　違うんだ！"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "ボーヤは　知らないだろうけど、\n"
SHIFT(18) "アタイらは　女ばかりの民族。\n"
SHIFT(9) "男が生まれるのは　百年に一人…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "そうして生まれた　ゲルドの男は\n"
"ゲルドの王になれる「おきて」だけど\n"
SHIFT(3) "あんな奴　アタイは　みとめないよ！"
BOX_BREAK

UNSKIPPABLE SHIFT(87) "で、\n"
SHIFT(9) "ボーヤは　なんていう　名前だい？"
BOX_BREAK

UNSKIPPABLE SHIFT(39) NAME "？\n"
SHIFT(39) "ヘンな　名前だねぇ…"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ま、いいや。" TEXTID(0x6024)
)
,
MSG(
UNSKIPPABLE "First of all, let me introduce \n"
"myself. I'm " COLOR(RED) "Nabooru " COLOR(DEFAULT) "of the Gerudo.\n"
"I'm a lone wolf thief."
BOX_BREAK

UNSKIPPABLE "But don't get me wrong!"
BOX_BREAK

UNSKIPPABLE "Though we're both thieves, I'm \n"
"completely different from\n"
"Ganondorf."
BOX_BREAK

UNSKIPPABLE "With his followers, he stole\n"
"from women and children, and he \n"
"even killed people!"
BOX_BREAK

UNSKIPPABLE "A kid like you may not know this, \n"
"but the Gerudo race consists only\n"
"of women. Only one man is born\n"
"every hundred years..."
BOX_BREAK

UNSKIPPABLE "Even though our laws say that\n"
"lone male Gerudo must become\n"
"King of the Gerudo, I'll never\n"
"bow to such an evil man!"
BOX_BREAK

UNSKIPPABLE "By the way, what is your name, \n"
"kid?"
BOX_BREAK

UNSKIPPABLE NAME "?!"
BOX_BREAK

UNSKIPPABLE "What kind of name is that?\n"
"Well...anyway..." TEXTID(0x6024)
)
,
MSG(
UNSKIPPABLE "Aber erst will ich mich vorstellen.\n"
"Ich bin die Gerudo-Kriegerin\n"
COLOR(RED) "Naboru" COLOR(DEFAULT) ". Ich gehe lieber allein\n"
"auf Beutetour."
BOX_BREAK

UNSKIPPABLE "Und noch etwas solltest\n"
"Du wissen!"
BOX_BREAK

UNSKIPPABLE "Ganondorf und ich gehören\n"
"zwar demselben Volk an, doch wir\n"
"sind grundverschieden."
BOX_BREAK

UNSKIPPABLE "Ganondorf und seine Anhänger\n"
"haben auch Frauen und Kinder\n"
"beraubt, ja sogar getötet!"
BOX_BREAK

UNSKIPPABLE "Wisse, das Gerudo-Geschlecht\n"
"besteht nur aus Frauen. Nur alle \n"
"100 Jahre wird ein Mann geboren..."
BOX_BREAK

UNSKIPPABLE "Auch wenn es unser Gesetz so\n"
"will, daß dieser Mann der König\n"
"der Gerudo wird, so schwöre ich\n"
"Ganondorf niemals im Leben Treue!"
BOX_BREAK

UNSKIPPABLE "Ach, wie war eigentlich Dein \n"
"Name, Kleiner?"
BOX_BREAK

UNSKIPPABLE NAME "?!"
BOX_BREAK

UNSKIPPABLE "Was ist das denn für ein\n"
"komischer Name?\n"
"Naja, egal..." TEXTID(0x6024)
)
,
MSG(
UNSKIPPABLE "Je me présente: mon nom est \n"
COLOR(RED) "Nabooru " COLOR(DEFAULT) "la Gerudo! Je suis une \n"
"voleuse solitaire."
BOX_BREAK

UNSKIPPABLE "Mais...attention!"
BOX_BREAK

UNSKIPPABLE "Ganondorf et moi-même sommes\n"
"des voleurs, soit! Mais je suis \n"
"très différente de ce chacal!"
BOX_BREAK

UNSKIPPABLE "Ganondorf et ses infâmes\n"
"serviteurs volent les femmes et\n"
"les enfants. Ils commettent parfois \n"
"des meurtres!!!"
BOX_BREAK

UNSKIPPABLE "Sais-tu que la race des Gerudos\n"
"ne comporte que des femmes? \n"
"Un homme Gerudo n'apparaît qu'une\n"
"fois tous les cent ans."
BOX_BREAK

UNSKIPPABLE "Nos lois sont claires: cet homme\n"
"est né pour être roi des Gerudos.\n"
"Mais je refuse de jurer allégeance\n"
"à un homme aussi vil!"
BOX_BREAK

UNSKIPPABLE "Je parle, je parle et...au fait...\n"
"Quel est ton nom?"
BOX_BREAK

UNSKIPPABLE NAME "?!"
BOX_BREAK

UNSKIPPABLE "Whoa! Tes parents ont le sens de\n"
"l'humour! Quel drôle de nom!\n"
"Enfin...peu importe..." TEXTID(0x6024)
)
)

DEFINE_MESSAGE(0x6024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(21) "アタイの　たのみってのは…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "この　ちっこい穴を　くぐって\n"
SHIFT(15) "お宝を　とってきてほしいって\n"
SHIFT(69) "事なんだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "そいつは　" COLOR(BLUE) "銀のグローブ" COLOR(DEFAULT) "っていう、\n"
"重い物でも押したり引いたりできる\n"
SHIFT(45) "便利な道具なのさ。"
BOX_BREAK

UNSKIPPABLE SHIFT(54) "おっと、ボーヤ。\n"
SHIFT(15) "お宝を　横取りしようったって\n"
SHIFT(69) "ダメだよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "銀のグローブは　子供にゃ\n"
SHIFT(12) "「そうび」しても　効果ないんだ。\n"
SHIFT(6) "ま、素直に　アタイに　渡すんだネ。"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "この　魂の神殿は\n"
SHIFT(24) "ガノンドロフの手下どもが\n"
SHIFT(30) "アジトに　使ってるんだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "銀のグローブさえあれば\n"
SHIFT(24) "神殿の奥に　もぐりこめる。"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "そこにある　お宝を　ごっそり\n"
SHIFT(27) "いただいて　ヤツらの鼻を\n"
SHIFT(21) "あかしてやろうって寸法サ！"
BOX_BREAK

"どうだい、やってくれるね？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "I want to ask you a favor..."
BOX_BREAK

UNSKIPPABLE "Will you go through this tiny hole\n"
"and get a treasure that's inside?"
BOX_BREAK

UNSKIPPABLE "The treasure is the " COLOR(BLUE) "Silver\n"
"Gauntlets" COLOR(DEFAULT) ". If you equip them, you\n"
"can easily push and pull very \n"
"heavy things!"
BOX_BREAK

UNSKIPPABLE "No, no, no, kid! Don't even think\n"
"about taking this treasure for \n"
"yourself!"
BOX_BREAK

UNSKIPPABLE "The Silver Gauntlets won't fit a\n"
"little kid like you if you try to \n"
"equip them! I want you to be a \n"
"good boy and give them to me!"
BOX_BREAK

UNSKIPPABLE "Ganondorf and his minions are\n"
"using the Spirit Temple as a \n"
"hideout."
BOX_BREAK

UNSKIPPABLE "Only the Silver Gauntlets will \n"
"allow me to sneak deep into the\n"
"temple."
BOX_BREAK

UNSKIPPABLE "Once there, I'm going to steal all\n"
"the treasure inside and mess up\n"
"their plans!"
BOX_BREAK

"How about it? Will you do it?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Ich möchte Dich um einen Gefallen\n"
"bitten..."
BOX_BREAK

UNSKIPPABLE "Schaffst Du es, durch diesen\n"
"engen Durchlaß zu kriechen und\n"
"einen Schatz zu bergen?"
BOX_BREAK

UNSKIPPABLE "Es handelt sich um ein uraltes\n"
"Diebesrelikt, die " COLOR(BLUE) "Krafthandschuhe" COLOR(DEFAULT) ".\n"
"Damit kann man sehr schwere\n"
"Dinge anheben!"
BOX_BREAK

UNSKIPPABLE "Hey, Kleiner! Denk nicht mal dran,\n"
"Dir die Handschuhe selbst unter\n"
"den Nagel zu reißen!"
BOX_BREAK

UNSKIPPABLE "Die Krafthandschuhe würden Dir\n"
"sowieso nicht passen!\n"
"Sei anständig und bring sie mir!"
BOX_BREAK

UNSKIPPABLE "Ganondorf und seine Vasallen\n"
"nutzen den Geistertempel als\n"
"eines ihrer Verstecke."
BOX_BREAK

UNSKIPPABLE "Nur mit den Krafthandschuhen\n"
"kann ich mich hier hineinstehlen!"
BOX_BREAK

UNSKIPPABLE "Dann kann ich nicht nur all ihr\n"
"Diebesgut an mich nehmen, sondern\n"
"auch ihre grauenvollen Pläne\n"
"durchkreuzen!"
BOX_BREAK

"Also, wie ist es? Machst Du's?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Rends-moi service, veux-tu?"
BOX_BREAK

UNSKIPPABLE "De l'autre côté de ce passage se\n"
"trouve un trésor. Peux-tu me le \n"
"rapporter?"
BOX_BREAK

UNSKIPPABLE "Ce trésor renferme les " COLOR(BLUE) "Gantelets \n"
"d'argent" COLOR(DEFAULT) ". En les portant, n'importe\n"
"qui peut déplacer d'immenses \n"
"objets!"
BOX_BREAK

UNSKIPPABLE "Non, non, non, gamin! \n"
"Ne pense même pas à les garder \n"
"pour ta pomme!"
BOX_BREAK

UNSKIPPABLE "Les Gantelets d'argent sont trop\n"
"grands pour tes petites mains!\n"
"Sois un gentil petit et rapporte\n"
"à tata Nabooru!"
BOX_BREAK

UNSKIPPABLE "Ganondorf et ses sbires ont élu \n"
"domicile dans ce temple."
BOX_BREAK

UNSKIPPABLE "Grâce aux Gantelets d'argent, je\n"
"pourrai m'y glisser discrètement..."
BOX_BREAK

UNSKIPPABLE "Une fois sur place, je déroberai \n"
"leurs trésors et saccagerai leurs \n"
"plans de conquête!"
BOX_BREAK

"Alors? Veux-tu m'aider?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Nan, j'veux pas!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x6025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(63) "ありがとよ！"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "アタイと　ボーヤで、\n"
SHIFT(15) "ガノンドロフ一味に　ひとアワ\n"
SHIFT(21) "吹かせてやろうじゃないか！" TEXTID(0x6026)
)
,
MSG(
UNSKIPPABLE "Thanks, kid!"
BOX_BREAK

UNSKIPPABLE "You and I, let's give Ganondorf\n"
"and his followers a big surprise,\n"
"shall we?" TEXTID(0x6026)
)
,
MSG(
UNSKIPPABLE "Danke, Kleiner!"
BOX_BREAK

UNSKIPPABLE "Wir beide werden Ganondorfs\n"
"Tyrannei beenden! Nicht wahr,\n"
"Kleiner?" TEXTID(0x6026)
)
,
MSG(
UNSKIPPABLE "Merci bien, gamin!"
BOX_BREAK

UNSKIPPABLE "Nous allons mettre une de ces\n"
"pagailles dans les affaires de \n"
"Ganondorf! On va bien rire!" TEXTID(0x6026)
)
)

DEFINE_MESSAGE(0x6026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "もし、無事に　" COLOR(BLUE) "銀のグローブ" COLOR(DEFAULT) "を\n"
SHIFT(54) "手に入れたら…"
BOX_BREAK

SHIFT(36) "イイこと　してやるよ！"
)
,
MSG(
"If you can successfully get the \n"
COLOR(BLUE) "Silver Gauntlets" COLOR(DEFAULT) "..."
BOX_BREAK

"I'll do something great" COLOR(RED) " " COLOR(DEFAULT) "for you!"
)
,
MSG(
"Wenn Du die " COLOR(BLUE) "Krafthandschuhe\n"
COLOR(DEFAULT) "besorgst..."
BOX_BREAK

"Dann werde ich mich bei Dir\n"
"revanchieren!"
)
,
MSG(
"En échange, si tu me rapportes \n"
"les " COLOR(BLUE) "Gantelets d'argent" COLOR(DEFAULT) "..."
BOX_BREAK

"Je te donnerai un petit bisou!"
)
)

DEFINE_MESSAGE(0x6027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "なんだい、\n"
SHIFT(9) "やっぱり　ボーヤは　ボーヤだね！"
)
,
MSG(
"Well, what did I expect?\n"
"After all, you're just a kid!"
)
,
MSG(
"Naja, was kann man von einem\n"
"Kind wie Dir schon erwarten?"
)
,
MSG(
"Pfff... Après tout, tu n'es qu'un\n"
"gamin! Allez, ouste! Du balai!"
)
)

DEFINE_MESSAGE(0x6028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(69) "アタイを\n"
SHIFT(21) "どこへ　連れて行く気だい！？"
)
,
MSG(
UNSKIPPABLE "Hey! Where are you taking me?!"
)
,
MSG(
UNSKIPPABLE "Hey! Was macht Ihr miesen\n"
"alten Weiber mit mir?!"
)
,
MSG(
UNSKIPPABLE "Hé! Lâchez-moi! Nooon!"
)
)

DEFINE_MESSAGE(0x6029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(54) "ホッ　ホッ　ホ…\n"
"誰か　来たようですよ、コウメさん…"
)
,
MSG(
UNSKIPPABLE "Ho ho ho!\n"
"Looks like someone is here, Koume."
)
,
MSG(
UNSKIPPABLE "Hihihihi!\n"
"Sieht so aus, als hätten wir einen \n"
"ordentlichen Fang gemacht, Koume!"
)
,
MSG(
UNSKIPPABLE "Gni...gni...gniii!\n"
"Tiens, tiens, tiens!!!\n"
"Voici de la visite, Koume!"
)
)

DEFINE_MESSAGE(0x602A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "ヒッ　ヒッ　ヒ…\n"
SHIFT(9) "そのようですねぇ、コタケさん…"
)
,
MSG(
UNSKIPPABLE "Hee hee hee!\n"
"Looks like it, Kotake!"
)
,
MSG(
UNSKIPPABLE "Hihihihi!\n"
"Sieht ganz so aus, Kotake!"
)
,
MSG(
UNSKIPPABLE "Gnan...gnan...gnan!\n"
"De la visite en effet, Kotake!"
)
)

DEFINE_MESSAGE(0x602B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(18) "我らの神殿へ　侵入するとは、\n"
SHIFT(9) "恐れを知らぬ　不届き者よのぉ…\n"
SHIFT(60) "ホッホッホ…"
)
,
MSG(
UNSKIPPABLE "What an outrageous fellow he is,\n"
"to intrude so boldly into our \n"
"Temple...\n"
"Ho ho ho!"
)
,
MSG(
UNSKIPPABLE "Wie außergewöhnlich, daß sich\n"
"jemand so tief in unseren Tempel\n"
"hineintraut...\n"
"Hihihihi!"
)
,
MSG(
UNSKIPPABLE "Qui es-tu, jeune impudent, pour\n"
"t'introduire dans notre temple?\n"
"Gni...gni...gni!"
)
)

DEFINE_MESSAGE(0x602C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) "では、その　不届き者に\n"
SHIFT(3) "罰を　与えてやりましょうかねぇ…\n"
SHIFT(60) "ヒッヒッヒ…"
)
,
MSG(
UNSKIPPABLE "We should teach this outrageous\n"
"fellow a lesson!\n"
"Hee hee hee!"
)
,
MSG(
UNSKIPPABLE "Wir sollten ihm eine ordentliche \n"
"Lektion erteilen!\n"
"Hihihihi!"
)
,
MSG(
UNSKIPPABLE "Une bonne correction!\n"
"Oh oui! Une bonne correction!\n"
"Gnan...gnan...gnan!"
)
)

DEFINE_MESSAGE(0x602D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "我らの　忠実なる下僕よ…"
)
,
MSG(
UNSKIPPABLE "Oh, loyal minion..."
)
,
MSG(
UNSKIPPABLE "Oh, treuer Vasall..."
)
,
MSG(
UNSKIPPABLE "Esclave! Entends-moi..."
)
)

DEFINE_MESSAGE(0x602E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "我らにかわり、侵入者を　殺せ！"
)
,
MSG(
UNSKIPPABLE "Destroy this intruder on \n"
"our behalf!"
)
,
MSG(
UNSKIPPABLE "Zerstöre diesen Eindringling!"
)
,
MSG(
UNSKIPPABLE "Mon verbe est ton ordre...\n"
"Tue ce jeune sot! Tue!!!"
)
)

DEFINE_MESSAGE(0x602F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(42) "ガノンドロフ様ニ…\n"
SHIFT(33) "サカラウ者…　コロス…"
)
,
MSG(
UNSKIPPABLE "Great Ganondorf's...Enemy...\n"
"Must die..."
)
,
MSG(
UNSKIPPABLE "Ganondorfs... Feinde...\n"
"müssen sterben..."
)
,
MSG(
UNSKIPPABLE "Grand Ganondorf... Intrus...\n"
"Mise à mort..."
)
)

DEFINE_MESSAGE(0x6030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(75) "…うっ。\n"
SHIFT(24) "ア、アタイは　いったい…？"
)
,
MSG(
UNSKIPPABLE "Unnnh...\n"
"Where am I...?"
)
,
MSG(
UNSKIPPABLE "Uuhh...\n"
"Wo bin ich...?"
)
,
MSG(
UNSKIPPABLE "Hein? Quoi?...\n"
"Où suis-je...?"
)
)

DEFINE_MESSAGE(0x6031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(63) "おや、おや…\n"
"正気に戻ってしまったようですよ…\n"
SHIFT(60) "コウメさん…"
)
,
MSG(
UNSKIPPABLE "Well, well...\n"
"Looks like she's back to normal...\n"
"Koume..."
)
,
MSG(
UNSKIPPABLE "Grummel...\n"
"Sieht aus, als hätte sie sich\n"
"befreien können, Koume..."
)
,
MSG(
UNSKIPPABLE "Tiens, tiens...\n"
"Le charme est brisé...\n"
"Koume..."
)
)

DEFINE_MESSAGE(0x6032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "たかが　小娘とはいえ\n"
"こいつを慕う者もいますからねぇ…\n"
SHIFT(60) "コタケさん…"
)
,
MSG(
UNSKIPPABLE "She's just a little girl,\n"
"but she commands a lot of \n"
"respect among the Gerudo, Kotake..."
)
,
MSG(
UNSKIPPABLE "Sie ist noch jung, genießt aber\n"
"hohen Respekt unter den Gerudo-\n"
"Kriegerinnen, Kotake..."
)
,
MSG(
UNSKIPPABLE "Ce n'est qu'une jeune fille\n"
"mais grande est son influence au \n"
"sein des Gerudos, Kotake..."
)
)

DEFINE_MESSAGE(0x6033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "もう少し　ガノンドロフ様の\n"
SHIFT(18) "役に立ってもらいましょう…\n"
SHIFT(60) "ホッホッホ…"
)
,
MSG(
UNSKIPPABLE "Maybe we should make her work\n"
"for the great Ganondorf for\n"
"a little while longer!\n"
"Ho ho ho!"
)
,
MSG(
UNSKIPPABLE "Vielleicht sollten wir sie etwas\n"
"länger zum Dienste des mächtigen\n"
"Ganondorf versklaven!\n"
"Hihihihi!"
)
,
MSG(
UNSKIPPABLE "Elle se doit de servir la noble \n"
"cause du Seigneur Ganondorf!\n"
"Gni...gni...gni!"
)
)

DEFINE_MESSAGE(0x6034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(57) "では、もう一度\n"
"洗脳し直してあげましょうかねぇ…\n"
SHIFT(60) "ヒッヒッヒ…"
)
,
MSG(
UNSKIPPABLE "Then we should brainwash her\n"
"again!\n"
"Hee hee hee!"
)
,
MSG(
UNSKIPPABLE "Wir sollten ihr Gehirn einer neuen\n"
"Behandlung unterziehen!\n"
"Hihihihi!"
)
,
MSG(
UNSKIPPABLE "Utilisons le charme une fois\n"
"encore....\n"
"Gnan...gnan...gnan!"
)
)

DEFINE_MESSAGE(0x6035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(75) "ボーヤ、\n"
SHIFT(12) "まずは　礼を言わせてもらうヨ。"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "ヘヘヘ…\n"
SHIFT(21) "七年前の　あのチビすけが\n"
SHIFT(3) "もう　いっぱしの　剣士じゃないか。"
)
,
MSG(
UNSKIPPABLE "Kid, let me thank you."
BOX_BREAK

UNSKIPPABLE "Heheheh...look what the little\n"
"kid has become in the past seven\n"
"years--a competent swordsman!"
)
,
MSG(
UNSKIPPABLE "Kleiner, ich muß Dir danken."
BOX_BREAK

UNSKIPPABLE "Hey... Sieh mal an, was aus Dir\n"
"geworden ist - ein talentierter\n"
"Schwertkämpfer!"
)
,
MSG(
UNSKIPPABLE "Merci, gamin...du fond du coeur.\n"
UNSKIPPABLE "Regardez-moi ça! \n"
"Le gamin est devenu un grand\n"
"guerrier!"
)
)

DEFINE_MESSAGE(0x6036, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(72) "アンタが\n"
SHIFT(24) "こんな　イイ男になるって、\n"
SHIFT(54) "わかってりゃ…"
BOX_BREAK_DELAYED(80)

SHIFT(54) "あの時の約束…\n"
SHIFT(33) "守ってやりたかったね…" FADE(80)
)
,
MSG(
"If only I knew you would become \n"
"such a handsome man..."
BOX_BREAK_DELAYED(80)

"I should have kept the promise\n"
"I made back then..." FADE(80)
)
,
MSG(
"Du bist wirklich ein tapferer Held \n"
"geworden!"
BOX_BREAK_DELAYED(80)

"Dir gebührt eine ganz spezielle\n"
"Anerkennung..." FADE(80)
)
,
MSG(
"Tu es devenu beau et fort..."
BOX_BREAK_DELAYED(80)

"J'aurais dû tenir ma promesse..." FADE(80)
)
)

DEFINE_MESSAGE(0x6037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "アタイが　大切にしていた\n"
SHIFT(3) COLOR(RED) "コイツ" COLOR(DEFAULT) "をやるから、また　勝負だよ！"
)
,
MSG(
UNSKIPPABLE "Here, I'll give you " COLOR(RED) "this" COLOR(DEFAULT) "...\n"
"It's a very important thing to me.\n"
"Let's have a competition later!"
)
,
MSG(
UNSKIPPABLE "Hier, nimm " COLOR(RED) "dies" COLOR(DEFAULT) "...\n"
"Es ist ein wichtiges Dokument.\n"
"Unsere Kräfte im Bogenschießen\n"
"können wir auch später messen!"
)
,
MSG(
UNSKIPPABLE "Tiens! Je te donne " COLOR(RED) "ceci" COLOR(DEFAULT) "...\n"
"J'y tiens beaucoup. \n"
"Mais tu as mérité ma confiance!"
)
)

DEFINE_MESSAGE(0x6038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(6) NAME "…　また会おう！"
)
,
MSG(
UNSKIPPABLE NAME "...see you again!"
)
,
MSG(
UNSKIPPABLE NAME "... Wir sehen uns!"
)
,
MSG(
UNSKIPPABLE NAME "...A bientôt!"
)
)

DEFINE_MESSAGE(0x6039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "それにしても…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "この　アタイとしたことが\n"
SHIFT(18) "とんだドジ　ふんじまったヨ。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "あのバアさんたちに　洗脳されて\n"
SHIFT(21) "いいように　ガノンドロフに\n"
SHIFT(24) "利用されちまうなんてネ…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "だけど　面白いじゃないか！\n"
SHIFT(6) "そのアタイが　" COLOR(YELLOW) "魂の賢者" COLOR(DEFAULT) "だなんて！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "六賢者の一人として　やつらと\n"
SHIFT(3) "戦うことになるなんてサ！　フフッ！"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "この借りは　キッチリ\n"
SHIFT(12) "返させてもらうことにするヨ！！"
)
,
MSG(
UNSKIPPABLE "By the way..."
BOX_BREAK

UNSKIPPABLE "I really messed up..."
BOX_BREAK

UNSKIPPABLE "I was brainwashed by those old\n"
"witches and used by Ganondorf to\n"
"do his evil will..."
BOX_BREAK

UNSKIPPABLE "But isn't it funny? That a person\n"
"like me could turn out to be the\n"
COLOR(YELLOW) "Sage of Spirit" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "And now, I'm going to fight\n"
"them as one of the six Sages!\n"
"Heh heh..."
BOX_BREAK

UNSKIPPABLE "I'm going to pay them back for\n"
"what they did to me!"
)
,
MSG(
UNSKIPPABLE "Au weia..."
BOX_BREAK

UNSKIPPABLE "Ich bin völlig durcheinander..."
BOX_BREAK

UNSKIPPABLE "Die beiden alten Weiber haben\n"
"mich verhext. Ich mußte für\n"
"Ganondorf tun, was er\n"
"verlangte..."
BOX_BREAK

UNSKIPPABLE "Aber bist Du nicht überrascht?\n"
"Jemand wie ich ist letztendlich die\n"
COLOR(YELLOW) "Weise der Geister" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Ab jetzt kämpfe ich als eine der\n"
"Weisen gegen das Böse!"
BOX_BREAK

UNSKIPPABLE "Nun werden sie für das bezahlen,\n"
"was sie mir angetan haben!"
)
,
MSG(
UNSKIPPABLE "Au fait..."
BOX_BREAK

UNSKIPPABLE "Excuse-moi de t'avoir attaqué."
BOX_BREAK

UNSKIPPABLE "J'étais sous le contrôle des\n"
"sorcières et sous les ordres de\n"
"Ganondorf... Pouah!"
BOX_BREAK

UNSKIPPABLE "Toute cette histoire est \n"
"incroyable, non? \n"
"Moi! Le " COLOR(YELLOW) "Sage de l'Esprit" COLOR(DEFAULT) "! \n"
"C'est à mourir de rire!"
BOX_BREAK

UNSKIPPABLE "Mais en tant que Sage, mon devoir \n"
"est désormais de combattre!\n"
"Hé hé hé..."
BOX_BREAK

UNSKIPPABLE "Ma vengeance sera terrible!\n"
"Yaaaaaaaaah!!! "
)
)

DEFINE_MESSAGE(0x603A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(72) "ボーヤ…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "いや…\n"
SHIFT(15) "時の勇者　" NAME "…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "あの時の　約束の　かわりに\n"
SHIFT(27) "この　" COLOR(YELLOW) "メダル" COLOR(DEFAULT) "を　あげるよ！\n"
SHIFT(63) "受け取りな！"
)
,
MSG(
UNSKIPPABLE "Kid..."
BOX_BREAK

UNSKIPPABLE "No...\n"
NAME ", the Hero of Time!"
BOX_BREAK

UNSKIPPABLE "Instead of keeping the promise I\n"
"made back then, I give you this\n"
COLOR(YELLOW) "Medallion" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Take it!"
)
,
MSG(
UNSKIPPABLE "Kleiner..."
BOX_BREAK

UNSKIPPABLE "Nein...\n"
NAME ", der strahlende\n"
"Wanderer durch die Zeiten!"
BOX_BREAK

UNSKIPPABLE "Als Dank dafür, daß Du den\n"
"Fluch vom Geistertempel genommen\n"
"hast, übergebe ich Dir\n"
"dieses " COLOR(YELLOW) "Amulett" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Nimm es!"
)
,
MSG(
UNSKIPPABLE "Gamin...heu..."
BOX_BREAK

UNSKIPPABLE "Non...\n"
NAME ", Héros du Temps!"
BOX_BREAK

UNSKIPPABLE "Je te remets ce " COLOR(YELLOW) "Médaillon" COLOR(DEFAULT) "!\n"
"Le p'tit bisou sera pour plus tard."
BOX_BREAK

UNSKIPPABLE "Prends-en soin!"
)
)

DEFINE_MESSAGE(0x603B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(15) QUICKTEXT_ENABLE "ちくしょう！" QUICKTEXT_DISABLE "　放しやがれ！！"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(18) "Yeearggh!" QUICKTEXT_DISABLE " Let me go!!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(46) "Aaargh!" QUICKTEXT_DISABLE " Laßt mich!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(11) "Yaaaaaah!" QUICKTEXT_DISABLE " Laissez-moi partir!!"
)
)

DEFINE_MESSAGE(0x603C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(60) "て、" QUICKTEXT_ENABLE "てめぇら！" QUICKTEXT_DISABLE "\n"
SHIFT(24) "ガノンドロフの一味だな！？"
)
,
MSG(
UNSKIPPABLE SHIFT(51) "You, " QUICKTEXT_ENABLE "you fiends!" QUICKTEXT_DISABLE "\n"
SHIFT(41) "Ganondorf's minions!"
)
,
MSG(
UNSKIPPABLE SHIFT(20) "Ihr " QUICKTEXT_ENABLE "widerlichen alten Hexen!" QUICKTEXT_DISABLE "\n"
SHIFT(3) "Ihr seid Ganondorfs eklige Sklaven!"
)
,
MSG(
UNSKIPPABLE SHIFT(31) QUICKTEXT_ENABLE "Créatures démoniaques!" QUICKTEXT_DISABLE "\n"
SHIFT(35) "Larbins de Ganondorf!"
)
)

DEFINE_MESSAGE(0x603D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(33) NAME "〜ッ！" QUICKTEXT_DISABLE "\n"
SHIFT(48) "早く　逃げろ〜っ！"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(30) NAME "!" QUICKTEXT_DISABLE "\n"
SHIFT(32) "Get out of here! Now!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(32) "Flüchte, " NAME "!" QUICKTEXT_DISABLE "\n"
SHIFT(81) "Schnell!"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(30) NAME "!" QUICKTEXT_DISABLE "\n"
SHIFT(37) "Fuis cet enfer! Vite!"
)
)

DEFINE_MESSAGE(0x603E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "こいつら　あやしげな魔法を…"
)
,
MSG(
UNSKIPPABLE SHIFT(12) "These witches! They're using\n"
SHIFT(43) "black magic on me!"
)
,
MSG(
UNSKIPPABLE SHIFT(21) "Verdammte Hexen! Sie setzen\n"
SHIFT(13) "schwarze Magie gegen mich ein!"
)
,
MSG(
UNSKIPPABLE SHIFT(16) "Ces sorcières! Elles utilisent\n"
SHIFT(25) "leur magie noire sur moi!"
)
)

DEFINE_MESSAGE(0x603F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "よお、新入り！\n"
SHIFT(24) "ここは　" COLOR(RED) "やぶさめ競技場" COLOR(DEFAULT) "だ。"
BOX_BREAK

SHIFT(21) "我らは　長年の　修業の結果、\n"
SHIFT(24) "疾風の如く走る　馬上より、\n"
SHIFT(6) "弓矢を　撃てるようになったのだ。"
BOX_BREAK

SHIFT(27) "お前も　馬に乗れるなら、\n"
SHIFT(24) "一度　挑戦してみることだ。\n"
SHIFT(6) "キケンな競技だが、おもしろいぞ！"
)
,
MSG(
"Hey, newcomer! This is our \n"
COLOR(RED) "horseback archery field" COLOR(DEFAULT) "."
BOX_BREAK

"After a lot of hard practice and\n"
"training, we finally have the skill\n"
"to hit the bull's-eye while riding\n"
"like the wind!"
BOX_BREAK

"When you finally learn how to ride\n"
"a horse, you should come back\n"
"and try it. It's a dangerous sport,\n"
"but it's fun!"
)
,
MSG(
"Hey, Kleiner! Das ist die " COLOR(RED) "Arena\n"
"für Bogenschießen zu Pferde" COLOR(DEFAULT) "."
BOX_BREAK

"Wir treffen genau den Mittelpunkt\n"
"der Zielscheibe. Egal, wie wild wir\n"
"reiten!"
BOX_BREAK

"Wenn Du reiten kannst, dann\n"
"komm zu uns und probier es auch\n"
"aus. Es ist gefährlich - aber ein\n"
"Riesenspaß!"
)
,
MSG(
"Hé, l'nouveau! Voici notre " COLOR(RED) "terrain\n"
"d'archerie montée" COLOR(DEFAULT) "."
BOX_BREAK

"Tout en faisant galoper nos \n"
"chevaux, nos flèches se plantent\n"
"dans le mille à tous les coups!"
BOX_BREAK

"Apprends à monter à cheval et\n"
"reviens nous voir pour tester tes\n"
"capacités... On va bien rire!"
)
)

DEFINE_MESSAGE(0x6040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "よぉ、新入り！\n"
SHIFT(12) "いい馬に　乗ってるじゃないか！"
BOX_BREAK

SHIFT(15) "どっから　いただいてきたのか\n"
SHIFT(30) "知らないが…　どうだい、\n"
SHIFT(12) COLOR(RED) "やぶさめ" COLOR(DEFAULT) "に　挑戦してみないか？"
BOX_BREAK

SHIFT(3) "馬が　走り始めたら　的を弓でうつ。\n"
"行きと帰りで　何ポイントとれるか。\n"
SHIFT(36) "使える矢は　２０本だ。"
BOX_BREAK

SHIFT(24) COLOR(RED) "１０００ポイント" COLOR(DEFAULT) "　獲れれば\n"
SHIFT(42) "イイものを　やろう。" EVENT
)
,
MSG(
"Hey newcomer, you have a fine \n"
"horse!"
BOX_BREAK

"I don't know where you stole \n"
"it from, but..."
BOX_BREAK

"OK, how about challenging this \n"
COLOR(RED) "horseback archery" COLOR(DEFAULT) "?"
BOX_BREAK

"Once the horse starts galloping,\n"
"shoot the targets with your\n"
"arrows. "
BOX_BREAK

"Let's see how many points you \n"
"can score. You get 20 arrows."
BOX_BREAK

"If you can score " COLOR(RED) "1,000 points" COLOR(DEFAULT) ", I\n"
"will give you something good!" EVENT
)
,
MSG(
"Hey, Junge, Du hast da aber ein\n"
"tolles Pferd!"
BOX_BREAK

"Keine Ahnung, wo Du das geklaut\n"
"hast, aber..."
BOX_BREAK

"...wie wäre es mit einer Runde\n"
COLOR(RED) "Bogenschießen" COLOR(DEFAULT) " " COLOR(RED) "zu Pferde" COLOR(DEFAULT) "!?"
BOX_BREAK

"Sowie Dein Pferd galoppiert,\n"
"schieße mit Deinen Pfeilen auf\n"
"die Zielscheiben."
BOX_BREAK

"Wir werden ja sehen, wie oft Du\n"
"triffst! Du bekommst 20 Pfeile."
BOX_BREAK

"Wenn Du " COLOR(RED) "1.000 Punkte" COLOR(DEFAULT) " erreichst,\n"
"erhältst Du einen genialen\n"
"Preis!" EVENT
)
,
MSG(
"Hé, l'nouveau!\n"
"Ton cheval a fière allure!"
BOX_BREAK

"Je ne sais où tu l'as volé, mais..."
BOX_BREAK

"Pourquoi ne pas participer au\n"
"concours d'archers montés?"
BOX_BREAK

"Fais galoper ton destrier et\n"
"décoche tes flèches vers les \n"
"cibles. "
BOX_BREAK

"Tu as 20 flèches. Voyons un peu \n"
"quel sera ton score après un\n"
"aller-retour."
BOX_BREAK

"Totalise plus de " COLOR(RED) "1,000 points" COLOR(DEFAULT) ",\n"
"et tu gagneras un prix!" EVENT
)
)

DEFINE_MESSAGE(0x6041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
COLOR(RED) "２０ルピー" COLOR(DEFAULT) "で　挑戦するかい？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Do you want to try for " COLOR(RED) "20 Rupees" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Willst Du es versuchen?\n"
"Es kostet nur " COLOR(RED) "20 Rubine" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Veux-tu tenter ta chance pour \n"
COLOR(RED) "20 Rubis" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x6042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "やぁ、新入り！\n"
SHIFT(39) "元気そうじゃないか。"
BOX_BREAK

SHIFT(9) "また一つ　腕前を　見せてくれよ。\n"
SHIFT(3) "今回の目標は　" COLOR(RED) "１５００ポイント" COLOR(DEFAULT) "だ。" EVENT
)
,
MSG(
"Hey, rookie!\n"
"You're looking good!\n"
"Show me your skill again!"
BOX_BREAK

"You should set a new goal of\n"
COLOR(RED) "1,500 points" COLOR(DEFAULT) " and try again!" EVENT
)
,
MSG(
"Hey, Kleiner!\n"
"Das sieht gar nicht schlecht aus!\n"
"Zeig's mir nochmal!"
BOX_BREAK

"Versuche doch jetzt,\n"
COLOR(RED) "1.500 Punkte" COLOR(DEFAULT) " zu erreichen!" EVENT
)
,
MSG(
"Hé, l'nouveau!\n"
"T'es plutôt doué!\n"
"Augmentons un peu la difficulté..."
BOX_BREAK

"Totalise " COLOR(RED) "1,500 points " COLOR(DEFAULT) "ou plus \n"
"pour voir!" EVENT
)
)

DEFINE_MESSAGE(0x6043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "なんだ、まだ　挑戦する気か？\n"
SHIFT(6) "なかなか　見どころのあるヤツだ。" EVENT
)
,
MSG(
"What? Do you want to try again?\n"
"Looks like you have some\n"
"potential!" EVENT
)
,
MSG(
"Was? Du willst es nochmal\n"
"versuchen?\n"
"Du gibst wohl so schnell nicht\n"
"auf, was?" EVENT
)
,
MSG(
"Quoi? Tu veux recommencer?\n"
"Tu as un certain potentiel!" EVENT
)
)

DEFINE_MESSAGE(0x6044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "しんじられない！！\n"
SHIFT(30) "お前こそ　究極の達人だ。"
BOX_BREAK

"達人に　ふさわしい武具を与えよう！"
BOX_BREAK

SHIFT(9) "この　矢立ては　私の大切なモノ。\n"
SHIFT(3) "お前には　これを　もらってほしい。\n"
SHIFT(36) "大事に　使ってくれよ。"
)
,
MSG(
"I'll be darned! You are the ultimate\n"
"master!"
BOX_BREAK

"I will give you an item suitable\n"
"for the master."
BOX_BREAK

"This quiver is very important to \n"
"me. I want you to have it.\n"
"Take good care of it, OK?"
)
,
MSG(
"Donnerwetter! Du bist ja ein \n"
"wahrer Meister Deines Fachs!"
BOX_BREAK

"Ich gebe Dir etwas, dessen nur\n"
"ein echter Meister würdig ist."
BOX_BREAK

"Es ist ein wertvoller Köcher,\n"
"den ich Dir überreiche. Er gehört\n"
"nun Dir. Behandle ihn gut!"
)
,
MSG(
"Fabuleux! Un vrai maître!"
BOX_BREAK

"Prends cet objet, il conviendra\n"
"mieux à un expert comme toi."
BOX_BREAK

"Ce carquois m'est très cher.\n"
"Mais je tiens à te le donner.\n"
"Prends-en soin, OK?"
)
)

DEFINE_MESSAGE(0x6045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) POINTS "ポイントとは　な…\n"
SHIFT(33) "ハハハ！　まだまだだな。" EVENT
)
,
MSG(
POINTS " points...Hmm...\n"
"Wha-ha-ha! You have plenty of \n"
"room for improvement!" EVENT
)
,
MSG(
POINTS " Punkte... Hmmm...\n"
"Hahaha! Da mußt Du wohl noch\n"
"ein bißchen üben!" EVENT
)
,
MSG(
POINTS " points?!?\n"
"Wha-ha-ha! La gloire n'est pas \n"
"pour tout de suite!" EVENT
)
)

DEFINE_MESSAGE(0x6046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "すばらしい！！"
BOX_BREAK

SHIFT(42) "お前こそ　真の達人。\n"
SHIFT(21) "お前に　コレを　さずけよう。\n"
SHIFT(3) "あとは　さらなる　修業あるのみだ。"
)
,
MSG(
"Fantastic!\n"
"You are a true master!"
BOX_BREAK

"I will give this to you.\n"
"Keep improving yourself!"
)
,
MSG(
"Großartig!\n"
"Du bist ja ein absoluter König\n"
"im Bogenschießen!"
BOX_BREAK

"Hier, nimm dies.\n"
"Du kannst es bestimmt\n"
"gut gebrauchen!"
)
,
MSG(
"Fantastique! De toute beauté!\n"
"Tu es un archer d'exception!"
BOX_BREAK

"Ceci te sera d'une grande aide..."
)
)

DEFINE_MESSAGE(0x6047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) POINTS "ポイントか…\n"
SHIFT(42) "なかなか　いい腕だ！" EVENT
)
,
MSG(
POINTS " points...\n"
"Quite impressive!" EVENT
)
,
MSG(
POINTS " Punkte...\n"
"Ganz ordentlich!" EVENT
)
,
MSG(
POINTS " points...\n"
"Pas mal...enfin...bof." EVENT
)
)

DEFINE_MESSAGE(0x6048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(21) "バカな子だねぇ…　自分から\n"
SHIFT(21) "ガノンドロフ様に　捧げる\n"
SHIFT(9) "イケニエに　なりにくるなんて…" FADE(90)
)
,
MSG(
"Look at that stupid kid!\n"
"He came on his own to offer \n"
"himself as a sacrifice to the\n"
"great Ganondorf..." FADE(90)
)
,
MSG(
"Sieh Dir diesen Dummkopf an!\n"
"Er kam freiwillig als Opfer\n"
"für den mächtigen Ganondorf..." FADE(90)
)
,
MSG(
"Quel jeune insensé!\n"
"Venir de son propre chef s'offrir \n"
"en sacrifice au Grand Ganondorf..." FADE(90)
)
)

DEFINE_MESSAGE(0x6049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "アタシの炎で　骨まで焼いてやる…" FADE(60)
)
,
MSG(
SHIFT(5) "With my flame, I will burn him to\n"
SHIFT(70) "the bone!" FADE(60)
)
,
MSG(
SHIFT(42) "Meine Flammen werden\n"
SHIFT(60) "ihn bis auf die\n"
SHIFT(46) "Knochen verbrennen!" FADE(60)
)
,
MSG(
SHIFT(20) "Le souffle de mes flammes \n"
SHIFT(40) "consumera son âme!" FADE(60)
)
)

DEFINE_MESSAGE(0x604A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"アタシの冷気で魂まで凍るがいい…" FADE(60)
)
,
MSG(
"With my frost, I will freeze him to\n"
SHIFT(70) "his soul!" FADE(60)
)
,
MSG(
SHIFT(63) "Mein Eiszauber\n"
SHIFT(57) "wird seine Seele\n"
SHIFT(58) "gefriertrocknen!" FADE(60)
)
,
MSG(
SHIFT(27) "La morsure de ma glace \n"
SHIFT(47) "pétrifiera ses os!" FADE(60)
)
)

DEFINE_MESSAGE(0x604B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "え〜い　ちょこざいな…\n"
SHIFT(21) "今度こそ　本気で　いくぞい。\n"
SHIFT(48) "のぉ　コタケさん！" FADE(90)
)
,
MSG(
SHIFT(28) "Shoot, what a fresh kid!\n"
SHIFT(21) "This time, we'll get serious,\n"
SHIFT(60) "right Kotake?" FADE(90)
)
,
MSG(
SHIFT(40) "Verhext und zugenäht!\n"
SHIFT(37) "So ein widerliches Balg!\n"
SHIFT(28) "Ab jetzt machen wir Ernst!\n"
SHIFT(66) "Was, Kotake?" FADE(90)
)
,
MSG(
SHIFT(40) "Quelle petite peste!\n"
SHIFT(18) "Cette fois, c'est du serieux,\n"
SHIFT(38) "n'est-ce pas Kotake?" FADE(90)
)
)

DEFINE_MESSAGE(0x604C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(75) "おや…？"
BOX_BREAK_DELAYED(20)

SHIFT(36) "な、なぁ　コウメさん…\n"
"そのアタマの上のモノは　なんじゃ？" FADE(60)
)
,
MSG(
SHIFT(75) "What?"
BOX_BREAK_DELAYED(20)

SHIFT(10) "Hey, Koume, what is that above\n"
SHIFT(65) "your head?" FADE(60)
)
,
MSG(
SHIFT(80) "Waaaas?"
BOX_BREAK_DELAYED(20)

SHIFT(21) "Hey, Koume! Was schwebt da\n"
SHIFT(50) "über Deinem Kopf?" FADE(60)
)
,
MSG(
SHIFT(81) "Hein?"
BOX_BREAK_DELAYED(20)

SHIFT(23) "Hé! Koume! Tu as un truc\n"
SHIFT(36) "au-dessus de la tête!" FADE(60)
)
)

DEFINE_MESSAGE(0x604D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "そーいう　アンタの上にも　あるぞ！\n"
SHIFT(63) "コタケさん。" FADE(60)
)
,
MSG(
SHIFT(11) "I don't know, but you have one\n"
SHIFT(20) "over your head too, Kotake!" FADE(60)
)
,
MSG(
SHIFT(23) "Weiß ich nicht, aber über Dir\n"
SHIFT(21) "schwebt auch etwas, Kotake!" FADE(60)
)
,
MSG(
SHIFT(25) "Heu? Regarde! Toi aussi!\n"
SHIFT(21) "C'est quoi ce machin rond?" FADE(60)
)
)

DEFINE_MESSAGE(0x604E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(57) "あたしゃ、まだ\n"
SHIFT(6) "４００年しか　生きてないんだよ！" FADE(40)
)
,
MSG(
SHIFT(20) "But I'm only 400 years old!" FADE(40)
)
,
MSG(
SHIFT(11) "Aber ich bin erst 400 Jahre alt!" FADE(40)
)
,
MSG(
SHIFT(24) "Mais je n'ai que 400 ans!" FADE(40)
)
)

DEFINE_MESSAGE(0x604F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(18) "あたしなんて　３８０年だよ！" FADE(40)
)
,
MSG(
SHIFT(20) "And I'm just 380 years old!" FADE(40)
)
,
MSG(
SHIFT(15) "Und ich bin erst 380 Jahre alt!" FADE(40)
)
,
MSG(
SHIFT(20) "Et moi je n'ai que 380 ans!" FADE(40)
)
)

DEFINE_MESSAGE(0x6050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) "ふたごなのに\n"
SHIFT(6) "２０年も　サバよむんじゃないよ！" FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(12) "We're twins! Don't try to lie\n"
SHIFT(53) "about your age!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(51) "Wir sind Zwillinge!\n"
SHIFT(16) "Mach Dich nicht jünger,\n"
SHIFT(62) "als Du bist!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(8) "Nous sommes jumelles! Tu ne \n"
SHIFT(25) "peux pas avoir 380 ans! \n"
SHIFT(52) "Arrête de mentir!" QUICKTEXT_DISABLE FADE(40)
)
)

DEFINE_MESSAGE(0x6051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(6) "アンタこそ　ボケてんじゃないの！" QUICKTEXT_DISABLE FADE(20)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(6) "You must have gone senile!" QUICKTEXT_DISABLE FADE(20)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(40) "Du bist ja völlig senil!" QUICKTEXT_DISABLE FADE(20)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(46) "T'es devenue sénile!" QUICKTEXT_DISABLE FADE(20)
)
)

DEFINE_MESSAGE(0x6052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "だれが　ボケてるって？\n"
SHIFT(12) "それが　姉に対して　いう言葉？" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(30) "Who are you calling senile?!\n"
SHIFT(22) "Is that how you treat your\n"
SHIFT(61) "older sister?" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(27) "Wen nennst Du hier senil?!\n"
SHIFT(38) "Behandelt man so seine\n"
SHIFT(50) "ältere Schwester?" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "Quoi? C'est moi la sénile?\n"
SHIFT(1) "Cause meilleur à ta grande soeur!" QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x6053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(15) "ふたごに　姉も　妹もあるかい！" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "We are twins! \n"
SHIFT(38) "How can you be older?" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(48) "Wir sind Zwillinge! \n"
SHIFT(20) "Wie kannst Du da älter sein?" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(5) "ON...EST...JUMELLES! JU-MELLES!\n"
SHIFT(5) "Tu ne peux pas être plus vieille \n"
SHIFT(67) "que moi!" QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x6054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(78) "キー！！\n"
SHIFT(21) "この　ハクジョーもの〜！！" QUICKTEXT_DISABLE FADE(20)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(63) "Keeeyaaah!!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE SHIFT(32) "How heartless you are!" QUICKTEXT_DISABLE FADE(20)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(79) "Iiihhhh!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE SHIFT(36) "Du herzloses Miststück!" QUICKTEXT_DISABLE FADE(20)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(53) "Gnyyaaaarghh!!" QUICKTEXT_DISABLE "\n"
QUICKTEXT_ENABLE SHIFT(13) "C'que tu peux être sournoise!" QUICKTEXT_DISABLE FADE(20)
)
)

DEFINE_MESSAGE(0x6055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "なんだい、コノ　おんしらず！！" QUICKTEXT_DISABLE FADE(10)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "How can you be so ungrateful?" QUICKTEXT_DISABLE FADE(10)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(42) "Du undankbares Weib!" QUICKTEXT_DISABLE FADE(10)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(16) "Comment fais-tu pour être  \n"
SHIFT(52) "aussi mesquine?" QUICKTEXT_DISABLE FADE(10)
)
)

DEFINE_MESSAGE(0x6056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(51) "ハクジョーもの！" QUICKTEXT_DISABLE FADE(4)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(53) "You're heartless!!" QUICKTEXT_DISABLE FADE(4)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(58) "Du bist herzlos!" QUICKTEXT_DISABLE FADE(4)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(57) "T'es sournoise!!" QUICKTEXT_DISABLE FADE(4)
)
)

DEFINE_MESSAGE(0x6057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(63) "おんしらず！" QUICKTEXT_DISABLE FADE(4)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(51) "You ungrateful..." QUICKTEXT_DISABLE FADE(4)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "Und Du bist undankbar..." QUICKTEXT_DISABLE FADE(4)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(55) "T'es mesquine..." QUICKTEXT_DISABLE FADE(4)
)
)

DEFINE_MESSAGE(0x6058, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(33) "バケてでてやるぅ〜！！" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(33) "I'll come back to haunt you!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(41) "Ich mach Dich fertig!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(16) "En tout cas...moi j'suis sexy!" QUICKTEXT_DISABLE FADE(40)
)
)

DEFINE_MESSAGE(0x6059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) QUICKTEXT_ENABLE "さぁ　ホンキでいくヨ、コタケさん！" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE "OK, let's get serious now, Kotake!" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE "Okay, laß uns jetzt Ernst machen!" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
QUICKTEXT_ENABLE "Bon... Cette fois y'en a marre!" QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x605A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) QUICKTEXT_ENABLE "オッケー　コウメさん！" QUICKTEXT_DISABLE
BOX_BREAK_DELAYED(20)

SHIFT(48) QUICKTEXT_ENABLE "コタケ" QUICKTEXT_DISABLE "＆" QUICKTEXT_ENABLE "コウメの" QUICKTEXT_DISABLE "\n"
SHIFT(3) QUICKTEXT_ENABLE "セクシー" QUICKTEXT_DISABLE "ダイナマイツ" QUICKTEXT_ENABLE "アタ〜ック！" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
SHIFT(55) QUICKTEXT_ENABLE "Oh, OK, Koume." QUICKTEXT_DISABLE
BOX_BREAK_DELAYED(20)

SHIFT(48) QUICKTEXT_ENABLE "Kotake" QUICKTEXT_DISABLE " and " QUICKTEXT_ENABLE "Koume's" QUICKTEXT_DISABLE "\n"
SHIFT(28) QUICKTEXT_ENABLE "Double" QUICKTEXT_DISABLE " Dynamite " QUICKTEXT_ENABLE "Attack!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
SHIFT(65) QUICKTEXT_ENABLE "Okay, Koume." QUICKTEXT_DISABLE
BOX_BREAK_DELAYED(20)

SHIFT(44) QUICKTEXT_ENABLE "Kotakes" QUICKTEXT_DISABLE " und " QUICKTEXT_ENABLE "Koumes" QUICKTEXT_DISABLE "\n"
SHIFT(45) QUICKTEXT_ENABLE "Sexy" QUICKTEXT_DISABLE " Thermo " QUICKTEXT_ENABLE "Hexy!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
SHIFT(50) QUICKTEXT_ENABLE "En avant, Koume!" QUICKTEXT_DISABLE
BOX_BREAK_DELAYED(20)

SHIFT(45) QUICKTEXT_ENABLE "Kotake" QUICKTEXT_DISABLE " et " QUICKTEXT_ENABLE "Koume" QUICKTEXT_DISABLE "...\n"
SHIFT(28) QUICKTEXT_ENABLE "Double" QUICKTEXT_DISABLE " Fusion " QUICKTEXT_ENABLE "Maléfique!" QUICKTEXT_DISABLE FADE(40)
)
)

DEFINE_MESSAGE(0x605B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(33) "助けに　きてくれたの！？\n"
SHIFT(60) "ウレシ〜ッ！！\n"
SHIFT(30) "アタイ、" COLOR(RED) "大工のイチロー" COLOR(DEFAULT) "。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "女の軍団に　あこがれてきたのに\n"
SHIFT(3) "オトコってだけで　こんな仕打ち…\n"
SHIFT(45) "シツレイしちゃう！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "もう、ゲルドなんて　コリゴリ！\n"
SHIFT(6) "あと" COLOR(RED) "３人" COLOR(DEFAULT) "、仲間が　捕まってるから\n"
SHIFT(9) "助けてやってね。　たのんだわよ！"
)
,
MSG(
UNSKIPPABLE "Did you come here to save me? \n"
"Oh, that's just swell! I'm " COLOR(RED) "Ichiro\n"
"the carpenter" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "We were really interested in \n"
"joining their all-female group, but \n"
"they locked us up like this just\n"
"because we're men!"
BOX_BREAK

UNSKIPPABLE "We don't care about the Gerudo \n"
"anymore! They're so rude!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Three of my fellows" COLOR(DEFAULT) " have also \n"
"been captured, so please help \n"
"them escape, too!"
)
,
MSG(
UNSKIPPABLE "Bist Du hier, um mich zu retten? \n"
"Oh, das ist ja wirklich nett!\n"
"Ich bin " COLOR(RED) "John, der Zimmermann" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Wir wollten uns eigentlich den\n"
"Gerudo-Kriegerinnen anschließen...\n"
"Aber dann haben sie uns\n"
"eingesperrt, weil wir Männer sind!"
BOX_BREAK

UNSKIPPABLE "Jetzt wollen wir aber lieber\n"
"wieder heim! Diese Gerudos sind\n"
"schrecklich ungehobelt!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Drei meiner Kumpels" COLOR(DEFAULT) " sind hier\n"
"noch eingesperrt.\n"
"Befreie sie bitte!"
)
,
MSG(
UNSKIPPABLE "Tu es venu pour me sauver?\n"
"Alors ça, c'est trop chou! \n"
"Je suis " COLOR(RED) "Hiro l'ouvrier" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Nous voulions tous joindre leur\n"
"club de filles mais elles nous ont\n"
"enfermés! Tout ça parce que nous\n"
"sommes des...mâles!"
BOX_BREAK

UNSKIPPABLE "Au diable ces jolies filles Gerudos!\n"
"Elles sont trop dures!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Trois de mes compagnons" COLOR(DEFAULT) " sont \n"
"aussi enfermés. Peux-tu les sauver?"
)
)

DEFINE_MESSAGE(0x605C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(48) "カワイイ　ボーヤ！\n"
SHIFT(24) "助けてくれて　サンキュー！\n"
SHIFT(36) "アタイ、" COLOR(RED) "大工のジロー" COLOR(DEFAULT) "。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "オンナって　コワイわ〜っ！\n"
SHIFT(21) "これなら　大工やってる方が\n"
SHIFT(36) "ず〜っと　カッコイイ。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "もう　こんなとこ　サヨナラよ！\n"
SHIFT(9) "あと" COLOR(RED) "２人" COLOR(DEFAULT) "、仲間が　捕まってるの。\n"
SHIFT(15) "助けてやってよ。　たのむわね！"
)
,
MSG(
UNSKIPPABLE "You're a cute kid! Thank you for\n"
"coming to save me! I'm " COLOR(RED) "Jiro, the \n"
"carpenter" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "These women are so scary! I'd\n"
"rather work as a carpenter than\n"
"join them!"
BOX_BREAK

UNSKIPPABLE "I can't wait to say good-bye to\n"
"this place! " COLOR(RED) "Two of my buddies " COLOR(DEFAULT) "\n"
"are still being held prisoner. Will\n"
"you please get them out, too?"
)
,
MSG(
UNSKIPPABLE "Das ist wirklich nett von Dir,\n"
"Kleiner! Danke für die Rettung!\n"
"Ich bin " COLOR(RED) "Paul, der Zimmermann" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Diese Frauen hier machen mir\n"
"Angst! Ich bleibe lieber weiter\n"
"Zimmermann, als mich ihnen\n"
"anzuschließen!"
BOX_BREAK

UNSKIPPABLE "Ich kann es kaum erwarten, wieder\n"
"daheim zu sein! " COLOR(RED) "Zwei meiner\n"
"Kumpels " COLOR(DEFAULT) "sind noch eingesperrt.\n"
"Hilfst Du ihnen?"
)
,
MSG(
UNSKIPPABLE "Gentil petit bouchon! \n"
"Je suis " COLOR(RED) "Julio l'ouvrier" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Ces femmes me font peur! \n"
"Je préfère travailler que d'en \n"
"épouser une!"
BOX_BREAK

UNSKIPPABLE "J'ai hâte de quitter cet endroit!\n"
"Mais encore " COLOR(RED) "deux petits camarades\n"
COLOR(DEFAULT) "sont enfermés! Peux-tu les sauver?"
)
)

DEFINE_MESSAGE(0x605D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(48) "ありがと、ボーヤ！\n"
SHIFT(51) "やるじゃな〜い！\n"
SHIFT(30) "アタイ、" COLOR(RED) "大工のサブロー" COLOR(DEFAULT) "。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "ボーヤ、ウチの親方に　会った？\n"
SHIFT(9) "心配させちゃったわね、きっと…\n"
SHIFT(81) "ウフ！"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "はやく　かえって　安心させなきゃ。\n"
SHIFT(6) "あと" COLOR(RED) "１人" COLOR(DEFAULT) "、仲間が　捕まってるから\n"
SHIFT(15) "助けてやってね。　おねがいね！"
)
,
MSG(
UNSKIPPABLE "Thanks, boy! You're fantastic!\n"
"I'm " COLOR(RED) "Sabooro, the carpenter" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Have you seen our boss, boy?\n"
"He's probably worried about me!\n"
"I have to get back to him \n"
QUICKTEXT_ENABLE "immediately!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE COLOR(RED) "One more of our workers " COLOR(DEFAULT) "is still\n"
"a prisoner. Please save him!"
)
,
MSG(
UNSKIPPABLE "Danke, Junge! Du bist super!\n"
"Ich bin " COLOR(RED) "George, der Zimmermann" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Hast Du unseren Chef gesehen?\n"
"Er hat vielleicht Angst um uns!\n"
"Ich muß " QUICKTEXT_ENABLE "sofort" QUICKTEXT_DISABLE " zu ihm!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Einer von uns " COLOR(DEFAULT) "ist noch gefangen.\n"
"Bitte hilf auch ihm!"
)
,
MSG(
UNSKIPPABLE "Merci p'tite tête, t'es un amour! \n"
"Je suis " COLOR(RED) "Jibo l'ouvrier" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "T'as pas vu notre chef? Y doit\n"
"se faire du mouron! Je dois le \n"
"voir maintenant! Je suis déjà à la\n"
QUICKTEXT_ENABLE "bourre!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Mais un " COLOR(RED) "autre ouvrier " COLOR(DEFAULT) "est \n"
"encore enfermé... Sauve-le!\n"
"Je l'aime tant!"
)
)

DEFINE_MESSAGE(0x605E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(15) "アタイだけ　忘れられたんじゃ\n"
SHIFT(12) "ないかと　思ったわ。　よかった！\n"
SHIFT(36) "アタイ、" COLOR(RED) "大工のシロー" COLOR(DEFAULT) "。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "助けてくれた　お礼に\n"
SHIFT(30) "いいこと　教えてアゲル。\n"
SHIFT(18) "ゲルドたちが　いってたのよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "幻影の砂漠を　越えるには、\n"
SHIFT(18) "『" COLOR(RED) "真実を見る目" COLOR(DEFAULT) "』が　必要だ。\n"
SHIFT(15) "そこは　女神が　いる…ってね！"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "じゃ、" COLOR(RED) "ゲルドの谷のテント" COLOR(DEFAULT) "に\n"
SHIFT(12) "戻ってるから、よっていってね。\n"
SHIFT(18) "いいこと　あるかも！　じゃっ！"
)
,
MSG(
UNSKIPPABLE "I was afraid you were going to \n"
"forget about me! Now I'm free!\n"
"Thanks! I'm " COLOR(RED) "Shiro the carpenter" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "For rescuing me, I'll tell you\n"
"something interesting about the\n"
"desert that I overheard the\n"
"Gerudos talking about."
BOX_BREAK

UNSKIPPABLE "They said, \"In order to cross the\n"
"Haunted Wasteland, you'll need the\n"
"'" COLOR(RED) "eye of truth" COLOR(DEFAULT) ".' The Colossus is on\n"
"the far side of the wasteland...\""
BOX_BREAK

UNSKIPPABLE "OK, now I'm going back to my\n"
COLOR(RED) "tent near Gerudo Valley" COLOR(DEFAULT) ", so, \n"
"drop by sometime. You may find \n"
"something helpful there! Byeee!"
)
,
MSG(
UNSKIPPABLE "Ich habe schon gedacht, Du hättest\n"
"mich vergessen! Vielen Dank!\n"
"Ich bin " COLOR(RED) "Ringo, der Zimmermann" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Dafür, daß Du mich befreit hast,\n"
"verrate ich Dir, was sich die\n"
"Gerudos über die Wüste erzählen:"
BOX_BREAK

UNSKIPPABLE "\"Wer die Gespensterwüste\n"
"durchqueren will, braucht das " COLOR(RED) "Auge\n"
"der Wahrheit" COLOR(DEFAULT) ". Den Wüstenkoloss\n"
"findet man jenseits der Wüste...\""
BOX_BREAK

UNSKIPPABLE "Ich gehe jetzt zu meinem " COLOR(RED) "Zelt in\n"
"der Nähe des Gerudotals" COLOR(DEFAULT) ". Schau\n"
"doch mal vorbei, vielleicht gibt es\n"
"dort etwas für Dich! Leb wohl!"
)
,
MSG(
UNSKIPPABLE "Youki! Je suis Liiiiibre!\n"
"Mon nom est " COLOR(RED) "Nico l'ouvrier" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Pour te remercier, voici ce que\n"
"mes petites oreilles d'amour ont \n"
"entendu il n'y a pas si longtemps..."
BOX_BREAK

UNSKIPPABLE "\"Seul l'oeil de vérité peut faire\n"
"traverser le désert... La déesse \n"
"est au-delà des sables...\""
BOX_BREAK

UNSKIPPABLE "Bon...je retourne dans ma\n"
COLOR(RED) "tente près de la Vallée Gerudo" COLOR(DEFAULT) "!\n"
"Viens donc y faire un tour!\n"
"Saluuuut!"
)
)

DEFINE_MESSAGE(0x605F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(18) "盗賊団のボスは、" COLOR(RED) "ナボール" COLOR(DEFAULT) "よ。\n"
SHIFT(15) "砂漠の遺跡で、いろんな人間を\n"
SHIFT(6) "洗脳する実験を　やってるみたい。"
)
,
MSG(
"The leader of the gang of thieves\n"
"is " COLOR(RED) "Nabooru" COLOR(DEFAULT) ". She is experimenting \n"
"in brainwashing many people at \n"
"the ruins in the desert."
)
,
MSG(
COLOR(RED) "Naboru" COLOR(DEFAULT) ", die Anführerin der Gerudo-\n"
"Kriegerinnen, scheint Menschen\n"
"für ihre Zwecke zu versklaven..."
)
,
MSG(
"Le chef du clan des voleurs est \n"
COLOR(RED) "Nabooru" COLOR(DEFAULT) ". Elle efface la mémoire \n"
"des voyageurs près des ruines\n"
"dans le désert."
)
)

DEFINE_MESSAGE(0x6060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) "盗賊団を　影で　操っていたのは\n"
SHIFT(24) "ガノンドロフだったのね…"
)
,
MSG(
"Oh, it was Ganondorf the Evil\n"
"King who was behind the gang of \n"
"thieves..."
)
,
MSG(
"Oh, es war Ganondorf, der\n"
"Großmeister des Bösen, der hinter\n"
"allem steckte...?"
)
,
MSG(
"Ganondorf, le seigneur du malin, \n"
"est derrière toute cette histoire\n"
"de voleuses..."
)
)

DEFINE_MESSAGE(0x6061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "一匹オオカミの盗賊だった頃の\n"
SHIFT(27) COLOR(RED) "ナボール" COLOR(DEFAULT) "は　弱い者からは\n"
"決して　モノを　盗まなかったのに…" TEXTID(0x6062)
)
,
MSG(
UNSKIPPABLE "When " COLOR(RED) "Nabooru" COLOR(DEFAULT) " was a lone wolf \n"
"thief, she never stole from \n"
"the weak, but..." TEXTID(0x6062)
)
,
MSG(
UNSKIPPABLE "Als " COLOR(RED) "Naboru" COLOR(DEFAULT) " noch zu den Diebinnen\n"
"gehörte, hat sie nie die Schwachen\n"
"und Armen bestohlen." TEXTID(0x6062)
)
,
MSG(
UNSKIPPABLE "Quand " COLOR(RED) "Nabooru" COLOR(DEFAULT) " n'était qu'une \n"
"voleuse solitaire, elle ne dérobait\n"
"jamais les faibles, mais..." TEXTID(0x6062)
)
)

DEFINE_MESSAGE(0x6062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) "今じゃ、ナボールの盗賊団って\n"
"いったら　冷酷・非情・残忍の代名詞。\n"
SHIFT(12) "義賊なんて　聞いてあきれるわ。"
)
,
MSG(
"Now, Nabooru's gang of thieves \n"
"stands for cruelty and brutality.\n"
"She claims to be a chivalrous \n"
"robber, but...no way!"
)
,
MSG(
"Jetzt aber sind sie und ihre\n"
"Diebinnen brutal und rücksichtslos\n"
"geworden. Sie behauptet, sie sei\n"
"edel, aber... Von wegen!"
)
,
MSG(
"Aujourd'hui le clan de Nabooru est \n"
"violent et cruel! Elle se prétend \n"
"noble et chevaleresque...\n"
"Ben voyons!"
)
)

DEFINE_MESSAGE(0x6063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(39) "ナボールは　やっぱり\n"
SHIFT(36) "ガノンドロフの一味に\n"
SHIFT(42) "洗脳されてたのね…"
)
,
MSG(
"Like I suspected, Nabooru was \n"
"brainwashed by Ganondorf's \n"
"followers..."
)
,
MSG(
"Wie ich mir dachte: Naboru wurde\n"
"mit Hexerei von Ganondorfs\n"
"Schergen zu einer willenlosen\n"
"Sklavin gemacht..."
)
,
MSG(
"Comme je l'ai toujours dit, \n"
"Nabooru était manipulée par les \n"
"sbires de Ganondorf..."
)
)

DEFINE_MESSAGE(0x6064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "ゲルド族の世界では、\n"
SHIFT(18) "乗馬と　弓の腕の　優れた者が\n"
SHIFT(51) "尊敬されるのよ。" TEXTID(0x6065)
)
,
MSG(
UNSKIPPABLE "In Gerudo society, those who have\n"
"great skill in horseback riding and\n"
"archery are well respected." TEXTID(0x6065)
)
,
MSG(
UNSKIPPABLE "Bei den Gerudo-Kriegerinnen\n"
"genießen besonders jene hohes\n"
"Ansehen, die gute Reiter und \n"
"Bogenschützen sind." TEXTID(0x6065)
)
,
MSG(
UNSKIPPABLE "Chez les Gerudos, un bon archer\n"
"et un fier cavalier est toujours \n"
"respecté." TEXTID(0x6065)
)
)

DEFINE_MESSAGE(0x6065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "砦で　やぶさめに　挑戦してみた？\n"
SHIFT(39) "自分の馬が　あるなら\n"
SHIFT(6) "砦のゲルドが　受け付けてるわよ。"
)
,
MSG(
"How about trying horseback \n"
"archery at the Gerudo's Fortress?"
BOX_BREAK

"If you have a horse, a Gerudo \n"
"from the fortress will set up \n"
"your challenge."
)
,
MSG(
"Wie wär's mit etwas Bogenschießen\n"
"zu Pferde?"
BOX_BREAK

"Wenn Du ein Pferd besitzt, dann\n"
"findet sich in der Festung sicher\n"
"eine Gerudo, die Dich\n"
"herausfordert!"
)
,
MSG(
"Tu devrais te risquer au concours \n"
"d'archerie montée près de la \n"
"forteresse Gerudo!"
BOX_BREAK

"Si tu as un cheval, une Gerudo\n"
"te lancera un défi."
)
)

DEFINE_MESSAGE(0x6066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) "やるわね、おニイさん！"
)
,
MSG(
"You did so great, young man!"
)
,
MSG(
"Das hast Du großartig\n"
"gemacht, Junge!"
)
,
MSG(
"Tu as été brillant, jeune homme!"
)
)

DEFINE_MESSAGE(0x6067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) "アタイたち　５人が　そろったら\n"
SHIFT(18) "橋を架けるなんて　朝メシ前！"
)
,
MSG(
"Building a bridge over the valley\n"
"is a simple task for four\n"
"carpenters."
)
,
MSG(
"Wenn wir alle zusammen sind,\n"
"ist es ein Kinderspiel, eine\n"
"Brücke über den Abgrund\n"
"zu bauen!"
)
,
MSG(
"Construire un pont est une simple \n"
"tâche si nous travaillons en équipe."
)
)

DEFINE_MESSAGE(0x6068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(6) "魔法使いババアが　いなくなれば、\n"
SHIFT(3) "盗賊団なんて　もう　こわくないわ。"
)
,
MSG(
"Without the old witches, the gang\n"
"of thieves isn't all that scary!"
)
,
MSG(
"Ohne die widerlichen alten Hexen\n"
"machen mir die Gerudos nicht\n"
"mehr soviel Angst!"
)
,
MSG(
"Sans ces sales vieilles sorcières, \n"
"le clan des voleuses est moins\n"
"terrifiant!"
)
)

DEFINE_MESSAGE(0x6069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "この先は　我ら　" COLOR(RED) "ゲルド族の砦" COLOR(DEFAULT) "だ。\n"
SHIFT(24) "子供のくる場所　じゃない！"
)
,
MSG(
"The " COLOR(RED) "Gerudo's Fortress " COLOR(DEFAULT) "is located \n"
"beyond this gate. A kid like you \n"
"has no business there."
)
,
MSG(
"Hinter diesem Tor befindet sich\n"
"die " COLOR(RED) "Gerudo-Festung" COLOR(DEFAULT) ". Kinder haben\n"
"hier nichts zu suchen."
)
,
MSG(
"La " COLOR(RED) "forteresse Gerudo" COLOR(DEFAULT) " est de \n"
"l'autre côté...mais un gamin comme \n"
"toi n'a rien à y faire."
)
)

DEFINE_MESSAGE(0x606A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) SHIFT(18) "オレっちは、" COLOR(RED) "大工の親方" COLOR(DEFAULT) "でぃ。\n"
SHIFT(24) "ゲルドの盗賊団のヤツラ…\n"
SHIFT(36) "橋を　落としやがった！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "橋を　直してやりてぇが、\n"
SHIFT(12) "オレっちの仲間が　いね〜んだ！"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "アイツら\n"
"「大工はダッセ〜から　盗賊になる！」\n"
SHIFT(36) "なんて言いやがって…"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "ゲルドの砦" COLOR(DEFAULT) "へ　行っちまいやがった。" TEXTID(0x606B)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "I am a " COLOR(RED) "master craftsman" COLOR(DEFAULT) ". Those\n"
"Gerudo thieves...they broke the\n"
"bridge."
BOX_BREAK

UNSKIPPABLE "I want to fix it, but all of my \n"
"workers are gone!"
BOX_BREAK

UNSKIPPABLE "They said working as carpenters\n"
"isn't cool, and they went to the\n"
COLOR(RED) "Gerudo's Fortress " COLOR(DEFAULT) "to become \n"
"thieves..." TEXTID(0x606B)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Ich bin " COLOR(RED) "Handwerkermeister" COLOR(DEFAULT) ".\n"
"Es waren Gerudos, die die Brücke\n"
"zerstört haben."
BOX_BREAK

UNSKIPPABLE "Ich will sie reparieren, aber meine\n"
"Leute sind verschwunden!"
BOX_BREAK

UNSKIPPABLE "Sie haben gesagt, ihr Job sei öde.\n"
"Sie wollten lieber in die " COLOR(RED) "Gerudo-\n"
"Festung " COLOR(DEFAULT) "gehen, um Diebe\n"
"zu werden..." TEXTID(0x606B)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Je suis le " COLOR(RED) "chef des ouvriers" COLOR(DEFAULT) ". \n"
"Les voleuses Gerudos ont cassé \n"
"mon joli pont."
BOX_BREAK

UNSKIPPABLE "J'aimerais le réparer mais mes \n"
"hommes ont disparu!\n"
"Alors...je suis coincé ici."
BOX_BREAK

UNSKIPPABLE "Leur condition d'ouvrier ne leur \n"
"plaisait pas...des mauviettes, oui! \n"
"Alors ils sont tous partis à \n"
"la " COLOR(RED) "forteresse Gerudo" COLOR(DEFAULT) "..." TEXTID(0x606B)
)
)

DEFINE_MESSAGE(0x606B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "オメエ…　ゲルドの砦へ　行くなら\n"
SHIFT(27) "オレっちの仲間の　様子を\n"
SHIFT(39) "見てきてくれねぇか？"
)
,
MSG(
"Hey, you! If you're going to the \n"
"fortress, would you mind finding\n"
"out what my workers are doing\n"
"over there?"
)
,
MSG(
"Hey, Du! Wenn Du schon in die\n"
"Festung gehst... Kannst Du\n"
"herausfinden, was meine Jungs\n"
"dort tun?"
)
,
MSG(
"Hé! Toi! Tu vas à la forteresse?\n"
"Pourrais-tu voir ce que fabriquent\n"
"mes ouvriers?"
)
)

DEFINE_MESSAGE(0x606C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "おぅ、オレっちの仲間を\n"
SHIFT(15) "たすけてくれたんだってなっ！\n"
SHIFT(6) "お礼に　橋かけさせてもらったぜ！"
BOX_BREAK

SHIFT(36) "どうでぇ、いい橋だろ？\n"
SHIFT(21) "あんな　ヘナチョコ大工でも\n"
SHIFT(18) "５人そろえば　役に立つんだ。"
)
,
MSG(
"Hey, I heard you saved my men.\n"
"When they returned, we built this\n"
"bridge."
BOX_BREAK

"Look at this! \n"
"Isn't it a fine bridge?"
BOX_BREAK

"They may be wimpy carpenters, \n"
"but once they all got together,\n"
"they got the job done."
)
,
MSG(
"Hey, ich habe gehört, daß Du\n"
"meine Leute gerettet hast.\n"
"Als Gegenleistung haben wir die\n"
"Brücke repariert!"
BOX_BREAK

"Schau her! Ist sie nicht toll?"
BOX_BREAK

"Meine Arbeiter sind ziemliche\n"
"Weicheier. Aber wenn sie alle\n"
"gemeinsam zulangen, dann ist so \n"
"ein Job schnell erledigt."
)
,
MSG(
"Hé! C'est toi qui as sauvé mes \n"
"hommes! Pour te remercier on t'a \n"
"construit ce pont! Pas mal, hein!\n"
"C'est pas du boulot d'Goron!!!"
BOX_BREAK

"Il est droit, il est soigné...\n"
"Mon pont à moi c'est le plus beau\n"
"de tous les ponts du mooooonde!"
BOX_BREAK

"Mes ouvriers sont, soit, un peu\n"
"paresseux...mais en travaillant en\n"
"équipe, ils font du bon travail!"
)
)

DEFINE_MESSAGE(0x606D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) SHIFT(78) "ア〜！！\n"
SHIFT(9) "その　ノコギリは　オレっちのだ！"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "けど…　そいつぁ…\n"
SHIFT(33) "ウチの　ババアんとこに\n"
"おいてきたハズだが…　まあいいや！" TEXTID(0x606E)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Hey, that saw! It's mine!"
BOX_BREAK

UNSKIPPABLE "But... I thought I left that saw\n"
"with my old lady... Oh well..." TEXTID(0x606E)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Oh, das ist ja meine Säge!"
BOX_BREAK

UNSKIPPABLE "Aber... Ich dachte, ich hätte sie\n"
"bei der alten Frau liegen gelassen..." TEXTID(0x606E)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Hé! Mais c'est ma scie!"
BOX_BREAK

UNSKIPPABLE "Je l'avais égarée chez ma vieille \n"
"femme...C'est fou!" TEXTID(0x606E)
)
)

DEFINE_MESSAGE(0x606E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"ダイゴロンの道具が　イカレたんで、\n"
SHIFT(54) "ゴロンの里まで\n"
SHIFT(12) "修理に　出すとこだったんでぃ！"
BOX_BREAK

"丁度いい、けぇしてくれ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"My Biggoron tool broke, so I was\n"
"going to Goron City to get it\n"
"repaired."
BOX_BREAK

"Your coming here is great timing.\n"
"Will you give me my saw?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Ich besitze übrigens ein\n"
"zerbrochenes Biggoron-Schwert.\n"
"Du müßtest es nur von einem\n"
"Goronen reparieren lassen..."
BOX_BREAK

"Ich würde es gegen die Säge\n"
"eintauschen! Gibst Du sie mir?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Mon outil Biggoron est brisé. \n"
"Je m'apprêtais à le faire réparer \n"
"au village Goron."
BOX_BREAK

"Ta venue est providentielle.\n"
"Peux-tu me rendre la scie?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x606F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) QUICKTEXT_ENABLE "なんだと！？\n"
SHIFT(33) "この　ネコババヤロー！！" QUICKTEXT_DISABLE
)
,
MSG(
SHIFT(71) QUICKTEXT_ENABLE "What?!\n"
SHIFT(20) "You're a dirty, rotten thief!" QUICKTEXT_DISABLE
)
,
MSG(
SHIFT(83) QUICKTEXT_ENABLE "Was?!\n"
SHIFT(3) "Du stinkender, widerlicher Dieb!" QUICKTEXT_DISABLE
)
,
MSG(
SHIFT(77) QUICKTEXT_ENABLE "Quoi?!\n"
SHIFT(48) "Sale petit voleur!\n"
SHIFT(56) "JE TE HAIS!!!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x6070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ここは　ゲルドの" COLOR(RED) "修練場" COLOR(DEFAULT) "。\n"
SHIFT(3) "資格なき者　入る事　まかりならん！"
)
,
MSG(
"This is the Gerudo's " COLOR(RED) "Training \n"
"Ground" COLOR(DEFAULT) ". Unqualified persons are \n"
"not allowed."
)
,
MSG(
"Dies ist die " COLOR(RED) "Trainingsarena " COLOR(DEFAULT) "der\n"
"Gerudos. Wer sie betreten will,\n"
"braucht ein besonderes\n"
"Dokument!"
)
,
MSG(
"Voici l'entrée du " COLOR(RED) "Gymnase " COLOR(DEFAULT) "Gerudo.\n"
"Les personnes non autorisées sont\n"
"interdites d'accès!"
)
)

DEFINE_MESSAGE(0x6071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ここは　ゲルドの" COLOR(RED) "修練場" COLOR(DEFAULT) "。\n"
SHIFT(9) "資格を持つ者よ…　おのれの力を\n"
SHIFT(15) "存分に　みがいてくるが　いい！" EVENT
)
,
MSG(
"This is the Gerudo's" COLOR(RED) " Training\n"
"Ground" COLOR(DEFAULT) ". You're qualified...\n"
"C'mon in and hone your skills\n"
"as much as you want." EVENT
)
,
MSG(
"Dies ist die " COLOR(RED) "Trainingsarena " COLOR(DEFAULT) "der \n"
"Gerudos." COLOR(RED) " " COLOR(DEFAULT) "Du darfst eintreten...\n"
"Trainiere Deine Fähigkeiten, so\n"
"lange Du willst." EVENT
)
,
MSG(
"Voici l'entrée du " COLOR(RED) "Gymnase " COLOR(DEFAULT) "Gerudo.\n"
"Carte de membre valide...\n"
"Entre et donne-toi à fond!" EVENT
)
)

DEFINE_MESSAGE(0x6072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ここは　ゲルドの" COLOR(RED) "修練場" COLOR(DEFAULT) "。\n"
SHIFT(27) "たとえ　資格ある者でも…\n"
SHIFT(9) "宝物を　ひとりじめは　するなよ！"
)
,
MSG(
"This is the Gerudo's" COLOR(RED) " Training \n"
"Ground" COLOR(DEFAULT) ". Even though you're \n"
"qualified, don't hog all the \n"
"treasure here for yourself!"
)
,
MSG(
"Dies ist die " COLOR(RED) "Trainingsarena " COLOR(DEFAULT) "der \n"
"Gerudos. Auch wenn Du sehr gut\n"
"bist: Sacke nicht alle Schätze\n"
"selbst ein!"
)
,
MSG(
"Voici l'entrée du " COLOR(RED) "Gymnase " COLOR(DEFAULT) "Gerudo. \n"
"Même si ta carte est valide, ne \n"
"garde pas tous les trésors pour\n"
"ta pomme!"
)
)

DEFINE_MESSAGE(0x6074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "オ〜　残念デ〜ス。"
BOX_BREAK

SHIFT(39) "魂の神殿ヘノ　目印ハ\n"
SHIFT(12) "店ヲ出テ　" COLOR(RED) "左ノ旗（ハタ）" COLOR(DEFAULT) "デ〜ス。\n"
SHIFT(9) "気ガ変ワッタラ　マタ　来テネ〜。"
)
,
MSG(
"Oh, that's too bad."
BOX_BREAK

"The mark that will lead you to the\n"
"Spirit Temple is the " COLOR(RED) "flag on\n"
"the left " COLOR(DEFAULT) "outside the shop."
BOX_BREAK

"If you change your mind, please\n"
"come back again!"
)
,
MSG(
"Oh, wie schade."
BOX_BREAK

"Das Zeichen, welches Euch zum\n"
"Geistertempel führt, ist die " COLOR(RED) "Flagge\n"
"zur Linken" COLOR(DEFAULT) " außerhalb des Ladens."
BOX_BREAK

"Solltet Ihr es Euch anders\n"
"überlegen, dann kommt doch\n"
"bitte wieder!"
)
,
MSG(
"Oh! Comme c'i dommage"
BOX_BREAK

"Li marque qui ti mènera au Temple\n"
"di Isprits c'i li " COLOR(RED) "drapeau à gauche \n"
COLOR(DEFAULT) "en sortant d'ici."
BOX_BREAK

"N'hisite pas à rivinir mi voir!"
)
)

DEFINE_MESSAGE(0x6075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "オ〜　るぴぃ　足リマセ〜ン！\n"
SHIFT(30) "ビタ一文　マケマセ〜ン！"
)
,
MSG(
"Ohh, not enough Rupees.\n"
"No discounts, even a Rupee."
)
,
MSG(
"Oh, Ihr habt zu wenig Rubine.\n"
"Ich gebe keinen Nachlass,\n"
"nicht einen Rubin!"
)
,
MSG(
"Oh! Ti as pas assez di Rubis!\n"
"Ji fi pas cridit ici!!!"
)
)

DEFINE_MESSAGE(0x6076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(78) "ふふ…\n"
SHIFT(24) "キミは　なにか　別のことに\n"
SHIFT(33) "挑戦しているようだね？"
BOX_BREAK

SHIFT(39) "私に　挑戦したければ\n"
SHIFT(15) "きれいな体になってきなさい。\n"
SHIFT(78) "ふふ…"
)
,
MSG(
"Heh heh.\n"
"You're already in the middle of \n"
"something, aren't you."
BOX_BREAK

"If you want to challenge me, you\n"
"have to come here with a clear\n"
"mind. No other distractions!"
)
,
MSG(
"Keuch...\n"
"Du bist doch schon mit etwas\n"
"anderem beschäftigt, oder?"
BOX_BREAK

"Wenn Du mich herausfordern willst,\n"
"dann komm wieder, wenn Du den\n"
"Kopf dafür frei hast!"
)
,
MSG(
"Hé! Hé!\n"
"Tu m'as l'air préoccupé."
BOX_BREAK

"Pour me défier, il faut avoir\n"
"l'esprit clair... Une course est\n"
"un travail mental et physique!"
)
)

DEFINE_MESSAGE(0x6077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "オ〜　イ〜ラッシャ〜イ！！"
BOX_BREAK

SHIFT(15) "ワタシ　世界中ノ　珍品・奇品ヲ\n"
SHIFT(15) "皆様ニ　オ売リ　シテイマ〜ス。\n"
SHIFT(51) "今回ノ　商品ハ…"
BOX_BREAK

SHIFT(24) "走ル　危険物、マァ　コワイ！\n"
SHIFT(9) "オ金モラウマデ　答エハ　ヒミツ！"
BOX_BREAK

COLOR(RED) "２００るぴぃ" COLOR(DEFAULT) "デ〜ス。　買ウ？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
)
,
MSG(
SHIFT(65) "Wellcome!"
BOX_BREAK

"I am selling stuff, strange and \n"
"rare, from all over the world to \n"
"everybody.\n"
"Today's special is..."
BOX_BREAK

"A dangerous, running object! \n"
"Terrifying! \n"
"I won't tell you what it is until \n"
"I see the money...."
BOX_BREAK

"How about " COLOR(RED) "200 Rupees" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
)
,
MSG(
SHIFT(70) "Willkommen!"
BOX_BREAK

"Ich verkaufe hier seltsame, seltene\n"
"Sachen aus der ganzen Welt. Mein\n"
"heutiges Angebot ist..."
BOX_BREAK

"Ein bombiges, ferngesteuertes\n"
"Objekt! Furchterregend!\n"
"Ich erzähle Euch erst etwas davon,\n"
"wenn ich Geld sehe..."
BOX_BREAK

"Wie wär's mit " COLOR(RED) "200 Rubinen" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
)
,
MSG(
"Bienvinue chez Sabib al Mamoud!"
BOX_BREAK

"Ji vends di choses...mirvilleuses.\n"
"Li curiositi, li objits magiques...\n"
"Ti trove tout chi Sabib al Mamoud!\n"
"Aujourd'hui, ji ti propose..."
BOX_BREAK

"Une arme qu'elle est tirrible!\n"
"Mais montre à Sabib tes Rubis..."
BOX_BREAK

"Donne " COLOR(RED) "200 Rubis " COLOR(DEFAULT) "et ji ti li donne.\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x6078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "マイドアリ〜！！"
BOX_BREAK

SHIFT(18) "答エハ" TEXT_SPEED(3) "　" COLOR(RED) "ボムチュウ" COLOR(DEFAULT) TEXT_SPEED(0) "　デシタ〜！！"
BOX_BREAK

SHIFT(39) "魂の神殿ヘノ　目印ハ\n"
SHIFT(12) "店ヲ出テ　" COLOR(RED) "左ノ旗（ハタ）" COLOR(DEFAULT) "デ〜ス。\n"
SHIFT(9) "気ガ変ワッタラ　マタ　来テネ〜。"
)
,
MSG(
"Thank you very much!"
BOX_BREAK

"What I'm selling is..." TEXT_SPEED(2) COLOR(RED) "Bombchu" COLOR(DEFAULT) "!" TEXT_SPEED(0)
BOX_BREAK

"The mark that will lead you to\n"
"the Spirit Temple is the " COLOR(RED) "flag on\n"
"the left " COLOR(DEFAULT) "outside the shop.\n"
"Be seeing you!"
)
,
MSG(
"Vielen herzlichen Dank!"
BOX_BREAK

"Ich verkaufe... " TEXT_SPEED(2) COLOR(RED) "Krabbelminen" COLOR(DEFAULT) "!" TEXT_SPEED(0)
BOX_BREAK

"Das Zeichen, welches Euch zum\n"
"Geistertempel führt, ist die " COLOR(RED) "Flagge\n"
"zur Linken" COLOR(DEFAULT) " außerhalb des Ladens.\n"
"Schaut mal wieder vorbei!"
)
,
MSG(
"Merci di li beaucoup!\n"
"Ti es beau! Que ti es beau!"
BOX_BREAK

"Ci qui ji li vends c'est di...\n"
TEXT_SPEED(2) COLOR(RED) "Missiles Teigneux" COLOR(DEFAULT) "!" TEXT_SPEED(0)
BOX_BREAK

"Si ti veux aller au Temple di \n"
"l'Isprit va vers li " COLOR(RED) "drapeau à\n"
"gauche " COLOR(DEFAULT) "en sortant d'ici!"
)
)

DEFINE_MESSAGE(0x6079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "どうした、" NAME "？\n"
SHIFT(18) "久しぶりで　おどろいたか？"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "おまえには　長い日々が、\n"
SHIFT(9) "この世界では　無かったも　同然。\n"
SHIFT(12) "まことに　不思議なことじゃて。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "ふたつの時代を　行き来する\n"
SHIFT(21) "少年のことを、この私ですら\n"
SHIFT(12) "伝説だとばかり　思っとったよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) NAME "よ、\n"
SHIFT(24) "おまえは　すっかり\n"
SHIFT(24) "勇者の風格を　身につけた。" TEXTID(0x607A)
)
,
MSG(
UNSKIPPABLE "Hey, what's up, " NAME "?\n"
"Surprised to see me?"
BOX_BREAK

UNSKIPPABLE "A long time in this world is\n"
"almost nothing to you, is it?\n"
"How mysterious!"
BOX_BREAK

UNSKIPPABLE "Even I thought that the tales of a\n"
"boy who could travel back and\n"
"forth through time was merely a\n"
"legend."
BOX_BREAK

UNSKIPPABLE NAME ", you have fully \n"
"matured as an adult." TEXTID(0x607A)
)
,
MSG(
UNSKIPPABLE "Hey, was ist, " NAME "?\n"
"Überrascht, mich zu sehen?"
BOX_BREAK

UNSKIPPABLE "Lange Jahre in der Zukunft\n"
"bedeuten anscheinend gar\n"
"nichts. Hier sind nur wenige\n"
"Sekunden vergangen!"
BOX_BREAK

UNSKIPPABLE "Sogar ich hatte gedacht, daß\n"
"Reisen durch die Zeit eine reine\n"
"Legende seien."
BOX_BREAK

UNSKIPPABLE NAME ", Du hast viel\n"
"Erfahrung gesammelt!" TEXTID(0x607A)
)
,
MSG(
UNSKIPPABLE "Bonjour " NAME "!\n"
"Content de me voir?"
BOX_BREAK

UNSKIPPABLE "Le temps n'a aucune prise sur toi! \n"
"Comme c'est étrange!"
BOX_BREAK

UNSKIPPABLE "J'ai toujours cru qu'un voyageur \n"
"du temps n'était qu'une légende..."
BOX_BREAK

UNSKIPPABLE NAME ", \n"
"tu es devenu un adulte!" TEXTID(0x607A)
)
)

DEFINE_MESSAGE(0x607A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "この先　おまえの勇気に\n"
SHIFT(27) "ハイラルの　すべての民の\n"
SHIFT(36) "未来が　かかっておる。"
BOX_BREAK

SHIFT(3) "もう　ワシの出る幕では　ないのぉ。\n"
SHIFT(18) "では　最後のアドバイスじゃ。"
BOX_BREAK

SHIFT(9) "この神殿に　巣くう　二人の魔女、\n"
SHIFT(12) "やつらを　倒すには　その魔力を\n"
SHIFT(9) COLOR(RED) "逆に利用" COLOR(DEFAULT) "することじゃ。　ホホッ！" TEXTID(0x607B)
)
,
MSG(
"From now on, the future of all the\n"
"people in Hyrule is on your \n"
"shoulders."
BOX_BREAK

"Maybe it's not my time anymore. \n"
"Here is my last advice."
BOX_BREAK

"Two witches inhabit this temple. In \n"
"order to destroy them, " COLOR(RED) "turn their \n"
"own magic power against them" COLOR(DEFAULT) ".\n"
"Hoo hoot!" TEXTID(0x607B)
)
,
MSG(
"Das Schicksal Hyrules liegt von\n"
"nun an in Deinen Händen."
BOX_BREAK

"Vielleicht ist meine Zeit jetzt\n"
"vorüber. Hier ist ein letzter Rat:"
BOX_BREAK

"In diesem Tempel hausen zwei alte\n"
"Hexen. Um sie zu vernichten,\n"
COLOR(RED) "schlage sie mit ihren eigenen\n"
"magischen Waffen" COLOR(DEFAULT) "!" TEXTID(0x607B)
)
,
MSG(
"Le destin d'Hyrule est désormais\n"
"entre tes mains."
BOX_BREAK

"Le moment est mal choisi mais \n"
"voici un dernier conseil..."
BOX_BREAK

"Deux puissantes sorcières habitent\n"
"dans ce temple. Pour les vaincre, \n"
"il te faudra " COLOR(RED) "utiliser contre elles \n"
"leur propre magie" COLOR(DEFAULT) ". Hou hou!" TEXTID(0x607B)
)
)

DEFINE_MESSAGE(0x607B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"もう一度　話を聞くかい？\n"
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
"Möchtest Du das, was ich gesagt\n"
"habe, noch einmal hören?\n"
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

DEFINE_MESSAGE(0x607C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "ワシは　お前を　見守ってゆく。\n"
SHIFT(15) "これまでも…　これからもな…\n"
SHIFT(69) "ホホ〜ッ！"
)
,
MSG(
UNSKIPPABLE "I will continue to watch you...\n"
"Hoo hoo hoo hoot!"
)
,
MSG(
UNSKIPPABLE "Ich werde Dich\n"
"weiterhin beobachten...\n"
"Viel Glück!"
)
,
MSG(
UNSKIPPABLE "Je garde un oeil sur toi...\n"
"Hou hou hou hou!"
)
)

DEFINE_MESSAGE(0x607D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(24) "私は　さすらいの「走り屋」。\n"
SHIFT(45) "ケモノの心を求め、\n"
SHIFT(9) "陸地ある所　すべて　走ってきた。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "時には　ヒト、ケモノを　問わず\n"
SHIFT(48) "あまたの挑戦者を\n"
SHIFT(36) "ブッチぎったものだ…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "見たところ…　なかなか…\n"
SHIFT(24) "よい体つきを　しているな。"
BOX_BREAK

UNSKIPPABLE SHIFT(69) "ふんふん。\n"
SHIFT(6) "ケモノの心が　少しはあると見た。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ゲルドの橋の完成記念に、\n"
SHIFT(9) "挑戦者を募集していたところだ。" TEXTID(0x607E)
)
,
MSG(
UNSKIPPABLE "I'm the wandering running man!\n"
"I've run all over this land in\n"
"search of true competitive spirit."
BOX_BREAK

UNSKIPPABLE "I beat all my challengers, man and\n"
"beast."
BOX_BREAK

UNSKIPPABLE "You're an athletic guy, and you\n"
"look like you might have a true\n"
"killer instinct, too."
BOX_BREAK

UNSKIPPABLE "Now that the bridge over Gerudo\n"
"Valley is complete, I'm looking for\n"
"a challenger to have a \n"
"commemorative race against." TEXTID(0x607E)
)
,
MSG(
UNSKIPPABLE "Ich bin reisender Rennläufer!\n"
"Ich habe das ganze Land berannt...\n"
"ähh, bereist, um jemanden mit\n"
"echtem Sportsgeist zu finden!"
BOX_BREAK

UNSKIPPABLE "Ob Mensch oder Tier - ich habe\n"
"alle Herausforderer geschlagen."
BOX_BREAK

UNSKIPPABLE "Du siehst sportlich aus und hast\n"
"wohl auch den nötigen Biß!"
BOX_BREAK

UNSKIPPABLE "Da jetzt die Brücke über den\n"
"Abgrund repariert wurde,\n"
"suche ich einen Herausforderer\n"
"für einen Marathon!" TEXTID(0x607E)
)
,
MSG(
UNSKIPPABLE "Je suis le marathonien errant!\n"
"J'ai parcouru ce monde à la \n"
"recherche du véritable esprit\n"
"de compétition."
BOX_BREAK

UNSKIPPABLE "J'ai triomphé de tous mes \n"
"adversaires...\n"
"Car je suis...(tadaaaaa!).....\n"
QUICKTEXT_ENABLE "Le marathonien errant" QUICKTEXT_DISABLE "!"
BOX_BREAK

UNSKIPPABLE "Tu m'as l'air costaud. \n"
"L'instinct du furieux guerrier \n"
"sanguinaire brille dans ton regard."
BOX_BREAK

UNSKIPPABLE "Le pont de la vallée Gerudo est \n"
"à nouveau en état. Je cherche des\n"
"adversaires de valeur." TEXTID(0x607E)
)
)

DEFINE_MESSAGE(0x607E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(21) "ここから　" COLOR(ADJUSTABLE) "迷いの森の橋" COLOR(DEFAULT) "まで\n"
COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) "…　それが最速タイム。\n"
SHIFT(54) "それも　私のね。"
BOX_BREAK

"記録に挑戦する気はあるかい？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"The best time to go from here to \n"
"the " COLOR(ADJUSTABLE) "bridge in the Lost Woods " COLOR(DEFAULT) "was\n"
COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) ".  That's my record."
BOX_BREAK

"Will you challenge my record?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Die Bestzeit von hier zur " COLOR(ADJUSTABLE) "Brücke\n"
"nach Kokiri " COLOR(DEFAULT) "war:\n"
COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) ".\n"
"Das ist mein Rekord!"
BOX_BREAK

"Willst Du versuchen, diesen\n"
"Rekord zu brechen?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein! " COLOR(DEFAULT)
)
,
MSG(
"Le meilleur temps d'ici jusqu'au \n"
COLOR(ADJUSTABLE) "pont des bois perdus" COLOR(DEFAULT) " est " COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) ".  \n"
"C'est mon record perso..."
BOX_BREAK

"Relèves-tu le défi?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x607F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(63) "よく言った！\n"
SHIFT(78) "では…"
BOX_BREAK

SHIFT(6) "キミから先に　スタートしたまえ。\n"
SHIFT(6) "私は後から　ゆ〜っくり行くから。"
BOX_BREAK

SHIFT(36) "どうぞ、" TEXT_SPEED(2) "　お　さ　き　に" TEXT_SPEED(0) "。"
)
,
MSG(
"Excellent!\n"
"Then..."
BOX_BREAK

"You go first.\n"
"I'll give you a headstart."
BOX_BREAK

"Now! " TEXT_SPEED(2) "Go ahead." TEXT_SPEED(0)
)
,
MSG(
"Ausgezeichnet!\n"
"Also..."
BOX_BREAK

"Du fängst an.\n"
"Ich gebe Dir sogar Vorsprung."
BOX_BREAK

TEXT_SPEED(2) "Los geht's." TEXT_SPEED(0)
)
,
MSG(
"Parfait!\n"
"Alors..."
BOX_BREAK

"Tu pars le premier.\n"
"Tu prendras la tête de la course.\n"
"Enfin...au début!"
BOX_BREAK

"Prêt? " TEXT_SPEED(2) "Partez!" TEXT_SPEED(0)
)
)

DEFINE_MESSAGE(0x6080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(78) "ふふ…\n"
SHIFT(36) "キミ、そんなことじゃ、\n"
SHIFT(36) "野生には　戻れないよ。"
)
,
MSG(
"Heh heh heh.\n"
"You'll never discover your\n"
"killer instinct with that\n"
"kind of attitude."
)
,
MSG(
"Mit dieser Einstellung kommst Du\n"
"aber nicht sehr weit, mein Junge!"
)
,
MSG(
"Pfffff.....\n"
"Tu ne découvriras jamais ton \n"
"instinct de furieux guerrier \n"
"sanguinaire de cette façon!!!"
)
)

DEFINE_MESSAGE(0x6081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(12) "まだまだだが、骨のある少年よ。\n"
SHIFT(15) "残念だが　私には　かなうまい。\n"
SHIFT(24) "キミの記録は　過去のもの。"
BOX_BREAK

SHIFT(12) "たしか　" COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) "だったな。\n"
SHIFT(12) "おしいな　１秒差で　私の勝ちだ。" EVENT
)
,
MSG(
"Well, not perfect, but you\n"
"have some guts! Unfortunately,\n"
"you never can beat me. Your\n"
"record is a thing of the past."
BOX_BREAK

"Your time was " COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) ", wasn't it?\n"
"That was close, but I beat you\n"
"by one second!" EVENT
)
,
MSG(
"Nun ja, nicht perfekt, aber Du\n"
"traust Dich was! Nur dumm,\n"
"daß Du mich nie schlagen wirst.\n"
"Dein Rekord ist schon vergessen!"
BOX_BREAK

"Deine Zeit betrug " COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) ", oder?\n"
"Denkbar knapp, aber ich war um\n"
"eine Sekunde schneller!" EVENT
)
,
MSG(
"Pas mal. Pas super-super, mais tu \n"
"t'es bien défendu! \n"
"Enfin...ne rêve pas trop!\n"
"Tu ne pourras JAMAIS me battre."
BOX_BREAK

"Ton temps est de " COLOR(RED) HIGHSCORE(HS_MARATHON) COLOR(DEFAULT) ", non?\n"
"Malheureusement pour ta pomme,\n"
"je suis arrivé une seconde avant \n"
"toi! C'est bête, hein?" EVENT
)
)

DEFINE_MESSAGE(0x6082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(78) "ふふ…\n"
SHIFT(36) "どうぞ、" TEXT_SPEED(2) "　お　さ　き　に" TEXT_SPEED(0) "。"
)
,
MSG(
"Heh heh heh.\n"
"Please. " TEXT_SPEED(2) "Go ahead." TEXT_SPEED(0)
)
,
MSG(
"Hihihi...\n"
"Bitte! " TEXT_SPEED(2) "Lauf weiter!" TEXT_SPEED(0)
)
,
MSG(
"Hé hé hé hé hé...\n"
"Ne sois pas timide! " TEXT_SPEED(2) "Passe devant!" TEXT_SPEED(0)
)
)

DEFINE_MESSAGE(0x6083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
"おや？　レースを　投げ出したんだね。\n"
SHIFT(36) "ふふ…　また　野生から\n"
SHIFT(27) "一歩遠ざかったね。　ふふ。" FADE(60)
)
,
MSG(
"Oh, looks like you quit the race.\n"
"Heh heh heh. I bet you had almost \n"
"rediscovered your killer instinct!" FADE(60)
)
,
MSG(
"Oh, sieht aus, als würdest Du\n"
"aufgeben wollen. Hihihi...\n"
"Fast hättest Du Deine alte Form \n"
"wiedererlangt!" FADE(60)
)
,
MSG(
"C'est mal! \n"
"Tu as abandonné la course! \n"
"Tu ne seras donc jamais un \n"
"furieux guerrier sanguinaire!!!" FADE(60)
)
)

DEFINE_MESSAGE(0x6084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(51) "ふふ…　まだまだ\n"
SHIFT(24) "ケモノの心が　足りないね。"
BOX_BREAK

SHIFT(63) "精進なさい。\n"
SHIFT(60) "では　" QUICKTEXT_ENABLE "さらば！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
"Heh heh.\n"
"You don't have enough killer\n"
"instinct yet."
BOX_BREAK

"Just train harder.\n"
QUICKTEXT_ENABLE "Good-bye, then!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
"Hihihi...\n"
"Du hast doch noch nicht den\n"
"rechten Biß, mein Lieber."
BOX_BREAK

"Du mußt härter trainieren.\n"
QUICKTEXT_ENABLE "Mach's mal gut!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
"Hé hé hé hé...\n"
"Ton instinct de furieux guerrier \n"
"sanguinaire est faible."
BOX_BREAK

"Entraîne-toi encore et encore!\n"
"A la prochaine... " QUICKTEXT_ENABLE "Limace!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x6085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(51) TEXT_SPEED(1) "ハア　ハア　ハア" TEXT_SPEED(0) "。"
BOX_BREAK

SHIFT(45) "ふっ　ふっ　ふ〜っ。\n"
SHIFT(33) "キミ、なかなか　やるな。"
BOX_BREAK

SHIFT(9) "だが　私の走りには　かなうまい。\n"
SHIFT(6) "キミのタイムは　" COLOR(RED) MARATHON_TIME COLOR(DEFAULT) "だ。\n"
SHIFT(30) "でも　１秒差で　私の勝ち。"
BOX_BREAK

SHIFT(51) "ふう　ふう　ふう。\n"
SHIFT(33) "ま、また　挑戦しなさい。"
BOX_BREAK

SHIFT(66) "ふう　ふう。\n"
SHIFT(60) "では　" QUICKTEXT_ENABLE "さらば！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
TEXT_SPEED(1) QUICKTEXT_ENABLE "Huff..." QUICKTEXT_DISABLE QUICKTEXT_ENABLE "puff..." QUICKTEXT_DISABLE QUICKTEXT_ENABLE "huff..." QUICKTEXT_DISABLE TEXT_SPEED(0)
BOX_BREAK

"Huff...huff...whew!\n"
"You did quite well!"
BOX_BREAK

"But you couldn't beat me!\n"
"Your time was " COLOR(RED) MARATHON_TIME COLOR(DEFAULT) ", but I\n"
"just beat you by one second!"
BOX_BREAK

"Huff...huff... \n"
"You'll have to challenge me\n"
"again sometime!"
BOX_BREAK

"Huff...huff...\n"
QUICKTEXT_ENABLE "Good-bye, then!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
TEXT_SPEED(1) QUICKTEXT_ENABLE "Keuch..." QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Pust..." QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Hust..." QUICKTEXT_DISABLE TEXT_SPEED(0)
BOX_BREAK

"Keuch... Pust... Wow!\n"
"Das war sehr gut!"
BOX_BREAK

"Doch Du hast mich noch nicht\n"
"geschlagen!\n"
"Deine Bestzeit war " COLOR(RED) MARATHON_TIME COLOR(DEFAULT) ", aber\n"
"ich war eine Sekunde schneller!"
BOX_BREAK

"Keuch... Hust... \n"
"Versuche es irgendwann noch\n"
"einmal!"
BOX_BREAK

"Keuch... Pust...\n"
QUICKTEXT_ENABLE "Mach's mal gut!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
TEXT_SPEED(1) QUICKTEXT_ENABLE "Heuff..." QUICKTEXT_DISABLE QUICKTEXT_ENABLE "peuff..." QUICKTEXT_DISABLE QUICKTEXT_ENABLE "heuff..." QUICKTEXT_DISABLE TEXT_SPEED(0)
BOX_BREAK

"Woah! Tu as fait très fort!"
BOX_BREAK

"Maaaaaiiiis...je suis le vainqueur! \n"
"Ton temps est de " COLOR(RED) MARATHON_TIME COLOR(DEFAULT) ".\n"
"Je t'ai battu d'une seconde!"
BOX_BREAK

"Heuff...heuff... \n"
"N'hésite pas à me défier une \n"
"nouvelle fois! Quand tu veux!"
BOX_BREAK

"Heuff...heuff...\n"
"A la prochaine, " QUICKTEXT_ENABLE "limace!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x6086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
SHIFT(24) "私は　さすらいの「走り屋」。\n"
SHIFT(45) "ケモノの心を求め、\n"
SHIFT(9) "陸地ある所　すべて　走ってきた。"
BOX_BREAK

SHIFT(21) "幻影の砂漠を　走破しようと\n"
SHIFT(3) "やってきたが　それどころではない\n"
SHIFT(54) "フンイキだな…"
BOX_BREAK

SHIFT(9) "ハイラル平原に　もどりたくても\n"
SHIFT(39) "橋は　あの　ありさま。\n"
SHIFT(18) "今は　ここの客人ってワケさ。"
BOX_BREAK

SHIFT(48) "…と　いうわけで。\n"
SHIFT(12) "キミの挑戦は　受けられないよ。\n"
SHIFT(78) "ふふ…"
)
,
MSG(
"I'm the wandering running man!\n"
"I've run all over this land in \n"
"search of competitors who have a\n"
"true killer instinct!"
BOX_BREAK

"I came here to run through the \n"
"Haunted Wasteland, but it doesn't\n"
"look like good timing for that."
BOX_BREAK

"Though I want to go back to \n"
"Hyrule Field, the bridge is...well,\n"
"you can see it from here. So I'm\n"
"stuck here, inside this tent."
BOX_BREAK

"I don't think I can accept your\n"
"challenge right now.\n"
"Heh heh!"
)
,
MSG(
"Ich bin reisender Rennläufer!\n"
"Ich habe das ganze Land berannt...\n"
"ähh, bereist, um jemanden mit\n"
"echtem Sportsgeist zu finden!"
BOX_BREAK

"Ich bin hierher gekommen, um durch\n"
"die Gespensterwüste zu laufen...\n"
"Aber das war, glaube ich, kein\n"
"guter Zeitpunkt."
BOX_BREAK

"Ich wollte zur hylianischen Steppe\n"
"zurück, aber die Brücke ist...\n"
"Naja, das siehst Du ja selbst.\n"
"Jetzt sitze ich hier fest."
BOX_BREAK

"Ich kann daher auch Deine\n"
"Herausforderung leider noch\n"
"nicht annehmen. Hihihi!"
)
,
MSG(
"Je suis le marathonien errant!\n"
"Je cherche un adversaire à\n"
"l'instinct du furieux guerrier\n"
"sanguinaire!"
BOX_BREAK

"J'aimerais rejoindre la plaine\n"
"d'Hyrule, mais le pont est...\n"
"Enfin ça se voit d'ici! \n"
"Alors je suis coincé ici."
BOX_BREAK

"Je suis désolé mais je ne peux\n"
"te défier aujourd'hui. Hé hé hé!"
)
)
