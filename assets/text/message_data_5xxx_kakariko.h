DEFINE_MESSAGE(0x5000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) QUICKTEXT_ENABLE "ゲェーッ！！" QUICKTEXT_DISABLE "\n"
SHIFT(54) TEXT_SPEED(2) "ヤ　　ラ　　レ　　タ" TEXT_SPEED(0) "\n"
SHIFT(87) "ん？"
BOX_BREAK

SHIFT(48) "なんだ、オマエか。\n"
SHIFT(24) COLOR(YELLOW) "太陽の歌" COLOR(DEFAULT) "を　奏でてみたか？"
BOX_BREAK

SHIFT(6) "以前にも　話したかもしれないが、\n"
SHIFT(18) "その歌は　昼を夜に、夜を昼に\n"
SHIFT(18) "自由に　あやつれる歌である。"
BOX_BREAK

SHIFT(6) "暗やみでは　オマエに　太陽の光を\n"
SHIFT(6) "与えることも　できるはずである。\n"
SHIFT(39) "ためしてみることだ。"
),
MSG(
QUICKTEXT_ENABLE "GYAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "You" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "killed" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "me!!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Huh? Oh, it's you."
BOX_BREAK

"Did you try to play the \n"
COLOR(YELLOW) "Sun's Song" COLOR(DEFAULT) "?"
BOX_BREAK

"Like I told you before, with that \n"
"song, you can turn day to night \n"
"or night to day whenever you \n"
"want."
BOX_BREAK

"When you're in darkness, that \n"
"song should bring the sun's light\n"
"to you. You should try it."
),
MSG(
QUICKTEXT_ENABLE "AARGH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "Du" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "hast mich" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "bezwungen!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Wie? Ach, Du bist es."
BOX_BREAK

"Hast Du mal die " COLOR(YELLOW) "Hymne der Sonne" COLOR(DEFAULT) "\n"
"gespielt?"
BOX_BREAK

"Ich habe Dir ja schon \n"
"erzählt, daß Du damit die Nacht \n"
"zum Tag und den Tag zur Nacht\n"
"machst - wann immer Du willst."
BOX_BREAK

"Wenn alles um Dich herum dunkel\n"
"ist, kannst Du damit wieder Licht\n"
"in die Welt bringen. Probier's!"
),
MSG(
QUICKTEXT_ENABLE "GYAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "Tu" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "m'as" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "tué!!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Hein? Oh! C'est toi."
BOX_BREAK

"As-tu déjà utilisé le\n"
COLOR(YELLOW) "Chant du soleil" COLOR(DEFAULT) "?"
BOX_BREAK

"Comme je te l'ai déjà dit, ce chant\n"
"te permet de passer de la nuit au \n"
"jour et inversement. Et ceci à\n"
"n'importe quel moment."
BOX_BREAK

"Même plongé dans les ténèbres, ce \n"
"chant te viendra en aide.\n"
"N'hésite pas à souvent l'utiliser!"
)
)

DEFINE_MESSAGE(0x5001, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
MSG(
QUICKTEXT_ENABLE "アナほったら　ビヨ〜ンって\n"
"のびたり　ちぢんだりする宝　出た。\n"
"オモシロイから　ダレにも　やらん！" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "When I dug a hole, I found a \n"
"treasure that stretches--BOING!\n"
"and shrinks--BOING! It's so fun, \n"
"I'll never give it to anybody!" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Ich habe beim Graben einen Schatz\n"
"gefunden - der wird lang und kurz\n"
"und macht \"KLING\"!\n"
"Den behalt ich!" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "En creusant un trou, j'ai trouvé un\n"
"truc qui fait BOING! BOING!\n"
"On dirait un ressort...\n"
"Je ne le donnerai à personne!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x5002, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
MSG(
COLOR(RED) "墓守りの日記" COLOR(DEFAULT) "がある、読んでみる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
),
MSG(
"The " COLOR(RED) "gravekeeper's diary " COLOR(DEFAULT) "is here.\n"
"Do you want to read it?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(
"Des " COLOR(RED) "Totengräbers" COLOR(DEFAULT) " Tagebuch.\n"
"Willst Du es lesen?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
),
MSG(
"Vous trouvez le " COLOR(RED) "journal du \n"
"fossoyeur" COLOR(DEFAULT) "."
BOX_BREAK

"Désirez-vous le lire?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x5003, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
MSG(
QUICKTEXT_ENABLE SHIFT(12) "これ　読んだ人、\n"
SHIFT(12) "オラの墓の中に　おいで。\n"
SHIFT(12) "のびちぢみする" COLOR(RED) "形見" COLOR(DEFAULT) "　あげマス。" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(9) "あなたの　おこしを　まってます。\n"
SHIFT(90) "墓守り　ダンペイ" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Whoever reads this, please enter\n"
"my grave. I will let you have my\n"
"stretching, shrinking " COLOR(RED) "keepsake" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "I'm waiting for you.\n"
"--Dampé" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Wer immer dies liest, der möge\n"
"mein Grab betreten. Ihm gebe ich\n"
"meinen langen, kurzen " COLOR(RED) "Schatz" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Ich warte!\n"
"Boris" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Toi le petit curieux qui lit ce\n"
"journal, viens dans ma tombe.\n"
"Et peut-être auras-tu droit à mon\n"
"précieux " COLOR(RED) "trésor" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Je t'attends...\n"
"--Igor" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x5004, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(63) "やめました。" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "You decide not to read it..." QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Das ist auch besser so!" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Etre curieux, c'est pas bien..." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x5005, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ゴースト「ポウ」を　倒した！"
BOX_BREAK

"ビンで　つかまえますか？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
),
MSG(
"You defeated Poe the ghost!"
BOX_BREAK

"Do you want to catch it in \n"
"a bottle?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(
"Du hast einen Geist vernichtet!"
BOX_BREAK

"Willst Du ihn in einer\n"
"Flasche aufbewahren?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
),
MSG(
"Vous avez vaincu un Esprit!"
BOX_BREAK

"Voulez-vous le garder dans une\n"
"bouteille?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x5006, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "つかまえたいが　あきビンがない。"
),
MSG(
"You want to catch it but you \n"
"don't have an empty bottle."
),
MSG(
"Du willst ihn aufbewahren, besitzt\n"
"aber keine leere Flasche."
),
MSG(
"Vous n'avez malheureusement pas \n"
"de bouteille vide."
)
)

DEFINE_MESSAGE(0x5007, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "今日のところは\n"
SHIFT(33) "みのがしといてやろう。"
),
MSG(
"You let it go for now."
),
MSG(
"Für den Augenblick läßt Du\n"
"ihn gehen."
),
MSG(
"L'Esprit peut alors s'enfuir."
)
)

DEFINE_MESSAGE(0x5008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "ポウを　つかまえた！"
),
MSG(
"You caught a Poe!"
),
MSG(
"Du hast ein Irrlicht gefangen!"
),
MSG(
"Vous obtenez un Esprit!"
)
)

DEFINE_MESSAGE(0x5009, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(30) "のぼる太陽　やがて　沈み\n"
SHIFT(18) "生まれし命　いつか　消えゆく" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(57) "太陽は　月に…　\n"
SHIFT(57) "月は　太陽に…" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(48) "生ける　死者には、\n"
SHIFT(51) "安らかな　眠りを" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(27) "なかなか　いい詩だ…　ん？"
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(4) "The rising sun will eventually set,\n"
SHIFT(25) "A newborn's life will fade." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(5) "From sun to moon, moon to sun..." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(37) "Give peaceful rest to\n"
SHIFT(55) "the living dead." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "This is an interesting poem...\n"
"huh?"
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Das Sonnenlicht, es schwindet\n"
"bei Nacht...\n"
"Erst am Tag ist wieder sein Feuer\n"
"entfacht." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Von Sonne zu Mond und zu Sonne\n"
"erneut..." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE "Ewige Ruhe die lebenden Toten\n"
"erfreut." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Ziemlich schöne Lyrik, nicht wahr?"
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(20) "La course du soleil s'achève\n"
SHIFT(59) "le soir venu...\n"
SHIFT(24) "Les nouvelles vies un jour\n"
SHIFT(61) "se meurent..." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(45) "Un soleil, une lune.\n"
SHIFT(48) "Un jour, une nuit." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(5) "Respecte les morts jadis vivants." QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Purée... Que c'est beau!"
)
)

DEFINE_MESSAGE(0x500A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(45) "この世に　迷う魂を\n"
SHIFT(21) COLOR(YELLOW) "太陽の歌" COLOR(DEFAULT) "をもって　しずめよ" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE SHIFT(36) "Restless souls wander\n"
SHIFT(30) "where they don't belong,\n"
SHIFT(39) "bring them calm with\n"
SHIFT(54) "the " COLOR(YELLOW) "Sun's Song" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE "Ruhelose Seelen wandern ohne Wonne.\n"
"Gib Frieden mit der " COLOR(YELLOW) "Hymne der Sonne" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE SHIFT(12) "Entonne le " COLOR(YELLOW) "Chant du Soleil" COLOR(DEFAULT) " et \n"
SHIFT(17) "apaise le long tourment des \n"
SHIFT(58) "âmes damnées" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x500B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(6) "こんな所に　なにか　かいてある…\n"
"作曲家兄弟の　" COLOR(YELLOW) "ヒミツのメロディ" COLOR(DEFAULT) "だ！"
),
MSG(
UNSKIPPABLE "Something is inscribed on the \n"
"tombstone..."
BOX_BREAK

UNSKIPPABLE "It's the " COLOR(YELLOW) "secret melody" COLOR(DEFAULT) " of the \n"
"Composer Brothers!"
),
MSG(
UNSKIPPABLE "Da ist eine Inschrift auf diesem\n"
"Grabstein..."
BOX_BREAK

UNSKIPPABLE "Eine " COLOR(YELLOW) "geheime Weise" COLOR(DEFAULT) " der\n"
"Gebrüder Brahmstein!"
),
MSG(
UNSKIPPABLE "Il y a quelque chose d'écrit\n"
"sur cette pierre tombale..."
BOX_BREAK

UNSKIPPABLE "C'est la " COLOR(YELLOW) "mélodie secrète" COLOR(DEFAULT) " des \n"
"Frères Musiciens!"
)
)

DEFINE_MESSAGE(0x500C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"究極の薬　" COLOR(RED) "１００ルピー" COLOR(DEFAULT) "で　いかが？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
"Ultimate potion! How about\n"
COLOR(RED) "100 Rupees" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(
"Das weltbeste Elixier! Sagen wir\n"
COLOR(RED) "100 Rubine" COLOR(DEFAULT) "!\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
),
MSG(
"Potion ultime! Que dis-tu de\n"
COLOR(RED) "100 Rubis" COLOR(DEFAULT) "?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x500D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "気が　変わったら、また　おいで…\n"
SHIFT(60) "ひっひっひ…"
),
MSG(
"If you change your mind, come \n"
"back and visit me...\n"
"Hee hee hee!"
),
MSG(
"Wenn Du Deine Meinung änderst,\n"
"kannst Du ja wieder herkommen.\n"
"Hihihihi!"
),
MSG(
"Reviens me voir si tu changes\n"
"d'avis... Hé hé hé hé!"
)
)

DEFINE_MESSAGE(0x500E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "ルピーが　足りないねぇ…\n"
SHIFT(60) "ひっひっひ…"
),
MSG(
"You don't have enough Rupees!\n"
"Hee hee hee!"
),
MSG(
"Du hast nicht genügend Rubine!\n"
"Hihihihi!"
),
MSG(
"Tu n'as pas assez d'argent!\n"
"Hé hé hé hé!"
)
)

DEFINE_MESSAGE(0x500F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(66) QUICKTEXT_ENABLE "ぐぇ〜っ！！" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) "ヤ　　ラ　　レ　　タ　…" TEXT_SPEED(0) "　" QUICKTEXT_ENABLE "くやしぃ〜っ！！" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(75) "なんだ？\n"
SHIFT(15) "オマエ、ガノンドロフの一味…\n"
SHIFT(48) "では　ないのか…？"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "私も　オバケという　立場上、\n"
SHIFT(21) "ちょっと　取り乱してしまい\n"
SHIFT(9) "悪いことをした。　お恥ずかしい。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "では、あらためて　私から\n"
SHIFT(21) "自己紹介させていただこう。\n"
SHIFT(69) "うぉほん！" TEXTID(0x5010)
),
MSG(
UNSKIPPABLE "GYAAAAH!\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "YOU" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "KILLED" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "ME..." QUICKTEXT_DISABLE TEXT_SPEED(0) QUICKTEXT_ENABLE "Unbelievable!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Oh, what?\n"
"You're not one of Ganondorf's \n"
"men, are you?"
BOX_BREAK

UNSKIPPABLE "Because of my role as a ghost, I\n"
"had to act like that. I apologize."
BOX_BREAK

UNSKIPPABLE "Now then, let me introduce myself.\n"
"Ahem..." TEXTID(0x5010)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "AARGH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "DU" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "HAST MICH" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "BEZWUNGEN!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
QUICKTEXT_ENABLE "Unglaublich!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Wie?\n"
"Du bist doch nicht einer von\n"
"Ganondorfs Schergen, oder?"
BOX_BREAK

UNSKIPPABLE "Als Gespenst muß ich mich so\n"
"komisch benehmen. Tut mir leid."
BOX_BREAK

UNSKIPPABLE "Alsdann, ich glaube, ich stelle\n"
"mich mal vor!\n"
"Ähem..." TEXTID(0x5010)
),
MSG(
UNSKIPPABLE "GYAAAAH!\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "Tu" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "m'as" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "tué..." QUICKTEXT_DISABLE TEXT_SPEED(0) QUICKTEXT_ENABLE "INCROYABLE!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Oh! Hein?\n"
"Tu n'es pas un soldat de \n"
"Ganondorf! Qui es-tu?"
BOX_BREAK

UNSKIPPABLE "Désolé de m'être comporté de la \n"
"sorte, mais... Je ne suis qu'un\n"
"fantôme, après tout!"
BOX_BREAK

UNSKIPPABLE "Sais-tu qui je suis? Non?\n"
"Ah bon... Alors écoute-moi bien.\n"
"Hum hum..." TEXTID(0x5010)
)
)

DEFINE_MESSAGE(0x5010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "私は　カカリコ村に　すむ\n"
SHIFT(12) "音楽家兄弟のユーレイで　ある。"
BOX_BREAK

SHIFT(45) "この村の民は　全て\n"
SHIFT(6) "ハイラル王家に　お仕えする定め。"
BOX_BREAK

SHIFT(3) "我ら兄弟も　ハイラル王家に　仕え、\n"
"王家に伝わるフシギな力についての\n"
SHIFT(6) "研究を　まかされていたのである。"
BOX_BREAK

SHIFT(15) "トライフォースの力は　いまだ\n"
SHIFT(9) "解明できないまま…で　あったが"
BOX_BREAK

SHIFT(33) "オカリナの音を　使って\n"
SHIFT(9) COLOR(RED) "時をあやつる研究" COLOR(DEFAULT) "は　もう少しで\n"
SHIFT(27) "完成するはずで　あった…"
BOX_BREAK

SHIFT(81) "いや！"
BOX_BREAK

SHIFT(9) "実は　我らは　すでに　その研究を\n"
SHIFT(33) "完成していたのである！"
BOX_BREAK

SHIFT(6) "あの　憎むべき　ガノンドロフめが\n"
"研究を横取りしようとしなければ…\n"
SHIFT(9) "名声を　我らの手に　できたのだ。"
BOX_BREAK

SHIFT(30) "だが、その　研究の成果を\n"
SHIFT(9) "ヤツに　わたすわけには　いかん。"
BOX_BREAK

SHIFT(6) "それゆえ、我ら兄弟は　命をかけて\n"
SHIFT(12) "そのヒミツを　守りぬいたのだ。" TEXTID(0x5011)
),
MSG(
"I am one of the ghostly composer \n"
"brothers of Kakariko Village."
BOX_BREAK

"All the people in this village are\n"
"born to serve the Royal Family of\n"
"Hyrule."
BOX_BREAK

"We brothers also served the Royal \n"
"Family, and were assigned to \n"
"study the hereditary mystic \n"
"powers of the family."
BOX_BREAK

"Though we never could figure out \n"
"the power of the Triforce,"
BOX_BREAK

"we had almost completed our \n"
COLOR(RED) "study of controlling time" COLOR(DEFAULT) " with the \n"
"tones of ocarinas."
BOX_BREAK

"Uh, I mean..."
BOX_BREAK

"Actually, we did complete that \n"
"study!"
BOX_BREAK

"We would have been famous, if \n"
"that hateful Ganondorf had not\n"
"tried to steal our results."
BOX_BREAK

"We could never let him reap the \n"
"fruits of our research!"
BOX_BREAK

"That's why we gave our lives to \n"
"protect the secret." TEXTID(0x5011)
),
MSG(
"Ich bin einer der geisterhaften\n"
"Komponisten-Brüder von Kakariko."
BOX_BREAK

"Wie alle Hylianer, so dienten auch\n"
"wir dem König dieses Landes."
BOX_BREAK

"Wir, die Gebrüder Brahmstein,\n"
"waren beauftragt, die mystische\n"
"Macht der königlichen Familie zu\n"
"untersuchen."
BOX_BREAK

"Wir haben bis jetzt die Macht des\n"
"Triforce nicht erklären können."
BOX_BREAK

"Aber unsere \"" COLOR(RED) "Studien zur Macht\n"
"über die Zeit mittels Tönen\n"
"einer Okarina" COLOR(DEFAULT) "\" haben wir\n"
"fast abgeschlossen!"
BOX_BREAK

"Um ehrlich zu sein..."
BOX_BREAK

"Wir haben unsere Studien dazu\n"
"bereits beendet!"
BOX_BREAK

"Wir wären berühmt geworden, wenn\n"
"dieser widerliche Ganondorf nicht\n"
"versucht hätte, die Aufzeichnungen \n"
"zu stehlen."
BOX_BREAK

"Wir konnten es nicht zulassen, daß\n"
"er die Früchte unserer Arbeit an\n"
"sich reißt!"
BOX_BREAK

"Daher haben wir unser Leben\n"
"riskiert, um diese Geheimnisse zu\n"
"bewahren." TEXTID(0x5011)
),
MSG(
"Je suis un fantôme de l'un des \n"
"frères musiciens du Village \n"
"Cocorico."
BOX_BREAK

"Tous les habitants de ce village \n"
"sont les loyaux sujets de la Famille\n"
"Royale d'Hyrule."
BOX_BREAK

"Mon frère et moi-même avions\n"
"pour mission d'étudier les pouvoirs\n"
"mystiques héréditaires de la Famille\n"
"Royale."
BOX_BREAK

"Tout en ignorant à quoi pouvait \n"
"bien servir la célèbre Triforce,"
BOX_BREAK

"nous fûmes sur le point d'achever\n"
"nos expériences sur le " COLOR(RED) "contrôle du" COLOR(DEFAULT) "\n"
COLOR(RED) "temps" COLOR(DEFAULT) " grâce aux ocarinas."
BOX_BREAK

"Plus précisément..."
BOX_BREAK

"Nous avons percé le mystère du \n"
"temps!"
BOX_BREAK

"La gloire nous tendait les bras\n"
"mais cet odieux Ganondorf tenta \n"
"de dérober le résultat d'années \n"
"d'études!"
BOX_BREAK

"Et c'est donc au prix de nos vies\n"
"que nous pûmes protéger le secret." TEXTID(0x5011)
)
)

DEFINE_MESSAGE(0x5011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"もう一度　聞きたいか？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
),
MSG(
"Do you want to hear what I \n"
"said again?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(
"Möchtest Du unsere Geschichte\n"
"noch einmal hören?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
),
MSG(
"Veux-tu que je répète tout ça?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x5012, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(66) QUICKTEXT_ENABLE "グァーッ！！" QUICKTEXT_DISABLE "\n"
SHIFT(36) TEXT_SPEED(2) "ま　　た　　ヤ　　ラ　　レ　　タ　…" TEXT_SPEED(0) "\n"
SHIFT(78) "ン？？？？"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "オマエを　見ていると　なぜか\n"
SHIFT(27) "ゼルダ様を　思い出すな…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "オマエが　王家ゆかりの者ならば\n"
SHIFT(21) "もう少し　話をしてやろう。"
BOX_BREAK

UNSKIPPABLE SHIFT(75) "人々は、\n"
SHIFT(18) "数々の名曲を　作った　我らを\n"
SHIFT(33) "大音楽家と　たたえた…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "だが、我ら兄弟は　たんなる\n"
SHIFT(36) "音楽家などでは　ない！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "王家に　伝わる　フシギな力を、\n"
SHIFT(24) "論理的に　解明する　使命を\n"
SHIFT(33) "せおっていたのである。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "研究が　完成した　あかつきには\n"
SHIFT(3) "我ら兄弟の名は　ハイラルの歴史に\n"
SHIFT(18) "きざまれる…　ハズであった。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "その日まで　我らの仕事は\n"
SHIFT(33) "「ミンナニハ　ナイショ」\n"
SHIFT(45) "なのであったのだ。" TEXTID(0x5014)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "I'M" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "DEAD" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "A" QUICKTEXT_DISABLE QUICKTEXT_ENABLE "GAIN!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"What? You again?"
BOX_BREAK

UNSKIPPABLE "Somehow, you remind me of...\n"
"Princess Zelda..."
BOX_BREAK

UNSKIPPABLE "Hmm... Since you may have some\n"
"connection with the Royal Family, I\n"
"will tell you a little more of our\n"
"tale."
BOX_BREAK

UNSKIPPABLE "Back then, people called us great\n"
"composers because of the many \n"
"musical masterpieces we wrote."
BOX_BREAK

UNSKIPPABLE "But we brothers were not just \n"
"composers."
BOX_BREAK

UNSKIPPABLE "We had a mission to analyze the\n"
"mysterious powers of Hyrule's\n"
"Royal Family."
BOX_BREAK

UNSKIPPABLE "Our names would be a part of \n"
"Hyrule's history if we could \n"
"complete our research!"
BOX_BREAK

UNSKIPPABLE "We kept our study extremely \n"
"secret until we completed it." TEXTID(0x5014)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "AARGH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "ICH BIN" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "WIEDER" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "BESIEGT!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Was? Du schon wieder?"
BOX_BREAK

UNSKIPPABLE "Wenn ich Dich so ansehe, muß ich\n"
"an Prinzessin Zelda denken."
BOX_BREAK

UNSKIPPABLE "Da Du offenbar mit der\n"
"Königsfamilie in Kontakt stehst,\n"
"kann ich Dir ein wenig mehr über\n"
"uns erzählen."
BOX_BREAK

UNSKIPPABLE "Damals nannten uns die Leute\n"
"überall \"Die tadellosen Tonsetzer\",\n"
"da wir viele Meisterwerke\n"
"komponiert haben."
BOX_BREAK

UNSKIPPABLE "Aber wir waren nicht nur\n"
"Komponisten!"
BOX_BREAK

UNSKIPPABLE "Wir hatten auch einen Auftrag!\n"
"Wir sollten die geheimnisvollen\n"
"Kräfte der hylianischen \n"
"Königsfamilie untersuchen."
BOX_BREAK

UNSKIPPABLE "Unsere Namen wären in die\n"
"Geschichte Hyrules eingegangen,\n"
"wenn wir unsere Studien beendet\n"
"hätten."
BOX_BREAK

UNSKIPPABLE "Wir haben diese Studien natürlich\n"
"stets streng geheim gehalten!" TEXTID(0x5014)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "JE SUIS" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "MORT!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Heu..." QUICKTEXT_DISABLE QUICKTEXT_ENABLE "ENCORE?" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Gueuh?? C'est toi?"
BOX_BREAK

UNSKIPPABLE "Tu me fais vraiment penser à la\n"
"Princesse Zelda."
BOX_BREAK

UNSKIPPABLE "Tu es en si bons termes avec la\n"
"Famille Royale que je vais de ce \n"
"pas te conter la suite de notre\n"
"tragique histoire."
BOX_BREAK

UNSKIPPABLE "En raison de nos nombreuses\n"
"symphonies, les sujets d'Hyrule \n"
"nous élevèrent au rang de Grands\n"
"Compositeurs."
BOX_BREAK

UNSKIPPABLE "Mais notre rôle sur cette terre ne \n"
"se bornait pas à la composition."
BOX_BREAK

UNSKIPPABLE "Notre mission était d'analyser les\n"
"mystérieux pouvoirs de la Famille\n"
"Royale d'Hyrule."
BOX_BREAK

UNSKIPPABLE "Mais les évènements ont voulu\n"
"que le résultat de nos recherches \n"
"ne soit jamais révélé...\n"
"Pourtant la gloire nous souriait!"
BOX_BREAK

UNSKIPPABLE "Nos études furent gardées \n"
"secrètes jusqu'à terme...." TEXTID(0x5014)
)
)

DEFINE_MESSAGE(0x5013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(66) QUICKTEXT_ENABLE "グァーッ！！" QUICKTEXT_DISABLE "\n"
SHIFT(36) TEXT_SPEED(2) "ま　　た　　ヤ　　ラ　　レ　　タ　…" TEXT_SPEED(0) "\n"
SHIFT(27) "ン？？？？　なんだ、オマエか。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "オマエを　見ていると\n"
SHIFT(27) "ゼルダ様を　思い出すな…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "オマエが　王家ゆかりの者ならば\n"
SHIFT(21) "もう少し　話をしてやろう。" TEXTID(0x5014)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "I'M" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "DEAD" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "A" QUICKTEXT_DISABLE QUICKTEXT_ENABLE "GAIN!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"What? You again?"
BOX_BREAK

UNSKIPPABLE "Somehow, you remind me of\n"
"Princess Zelda."
BOX_BREAK

UNSKIPPABLE "Since you seem to have some\n"
"connection with the Royal Family, I\n"
"will tell you a little more of our\n"
"story." TEXTID(0x5014)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "AARGH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "ICH BIN" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "SCHON WIEDER" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "TOT!" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Was? Du schon wieder?"
BOX_BREAK

UNSKIPPABLE "Wenn ich Dich so anschaue, muß\n"
"ich an Prinzessin Zelda denken..."
BOX_BREAK

UNSKIPPABLE "Wenn Du mit der Königsfamilie\n"
"näher bekannt bist, kann ich Dir\n"
"ja etwas mehr über uns erzählen." TEXTID(0x5014)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "GYAAAAH!" QUICKTEXT_DISABLE "\n"
TEXT_SPEED(2) QUICKTEXT_ENABLE "JE SUIS" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "MORT!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Heu?" QUICKTEXT_DISABLE QUICKTEXT_ENABLE "ENCORE?" QUICKTEXT_DISABLE TEXT_SPEED(0) "\n"
"Quoi?? Encore toi?"
BOX_BREAK

UNSKIPPABLE "Tu me fais vraiment penser à la\n"
"Princesse Zelda."
BOX_BREAK

UNSKIPPABLE "Tu es en si bons termes avec la\n"
"Famille Royale que je vais de ce \n"
"pas te conter la suite de notre\n"
"tragique histoire." TEXTID(0x5014)
)
)

DEFINE_MESSAGE(0x5014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "実は、我ら兄弟は　それぞれに\n"
SHIFT(15) COLOR(RED) "太陽をよぶ歌" COLOR(DEFAULT) "と、" COLOR(RED) "月をよぶ歌" COLOR(DEFAULT) "を\n"
SHIFT(33) "研究していたのである。"
BOX_BREAK

SHIFT(9) "オマエが　真の王家の使いならば\n"
SHIFT(15) "我らの命をかけて　守りぬいた\n"
SHIFT(33) "その成果を　教えよう。"
BOX_BREAK

SHIFT(15) "我々は　" COLOR(RED) "王家の墓" COLOR(DEFAULT) "の　片すみに\n"
SHIFT(33) "かきしるしたのである。"
BOX_BREAK

SHIFT(57) "王家の使いよ、\n"
SHIFT(15) "トライフォースの紋章の上で\n"
SHIFT(18) "王家のあかしを　使うがよい。" TEXTID(0x5011)
),
MSG(
"To tell the truth, each of us\n"
"was studying a different song, one\n"
"to " COLOR(RED) "summon the sun" COLOR(DEFAULT) " and another to\n"
COLOR(RED) "summon the moon" COLOR(DEFAULT) "."
BOX_BREAK

"If you were really sent by a \n"
"member of the Royal Family, I will\n"
"tell you about the results of our\n"
"study."
BOX_BREAK

"We inscribed it on the " COLOR(RED) "royal\n"
"tombstone" COLOR(DEFAULT) "."
BOX_BREAK

"As a messenger of the Royal \n"
"Family, you should show your\n"
"Royal credentials on top of the \n"
"Triforce mark..." TEXTID(0x5011)
),
MSG(
"Mein Bruder und ich studierten\n"
"verschiedene Melodien: Eine, den\n"
COLOR(RED) "Mond zu beschwören" COLOR(DEFAULT) ", und eine\n"
"andere, die " COLOR(RED) "Sonne herbeizurufen" COLOR(DEFAULT) "!"
BOX_BREAK

"Da Du von einem Angehörigen des\n"
"Königshauses geschickt wurdest,\n"
"will ich Dir von den Ergebnissen\n"
"unserer Untersuchungen berichten."
BOX_BREAK

"Sie stehen geschrieben auf dem\n"
COLOR(RED) "königlichen Grabstein" COLOR(DEFAULT) "."
BOX_BREAK

"Zeige auf musikalische Weise, daß\n"
"Du in königlichem Auftrag\n"
"unterwegs bist, wenn Du auf dem\n"
"Triforce vor dem Grab stehst." TEXTID(0x5011)
),
MSG(
"Pour être franc, chaque frère \n"
"étudiait un chant différent.\n"
"L'un pour " COLOR(RED) "invoquer le soleil " COLOR(DEFAULT) "et \n"
"l'autre pour " COLOR(RED) "invoquer la lune" COLOR(DEFAULT) "."
BOX_BREAK

"Si un membre de la Famille Royale\n"
"t'a envoyé jusqu'ici, je pense \n"
"pouvoir te faire confiance et te\n"
"faire partager notre secret."
BOX_BREAK

"Va donc examiner les inscriptions\n"
"sur la " COLOR(RED) "pierre tombale royale" COLOR(DEFAULT) "."
BOX_BREAK

"Toi, jeune messager de la Famille\n"
"Royale, chante haut et fort ta\n"
"loyauté sur la Sainte Triforce." TEXTID(0x5011)
)
)

DEFINE_MESSAGE(0x5015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "ＺＺＺ…"
BOX_BREAK

SHIFT(12) "マロン…　元気だか…　ムニャ…\n"
SHIFT(12) "心配かけて…　すまん…　グー…"
),
MSG(
"Z Z Z..."
BOX_BREAK

"Malon...doing all right...\n"
"Mumble...mumble...\n"
"Sorry to make you worry..."
),
MSG(
"Zzzzzzzz..."
BOX_BREAK

"Malon... geht es gut...\n"
"Grummel... Murmel...\n"
"Tut mir leid, wenn Du Dir Sorgen\n"
"machst..."
),
MSG(
"Z Z Z..."
BOX_BREAK

"Malon...tout va bien...\n"
"Mmm...(ronfle)...Mmm...\n"
"Tout va bien..."
)
)

DEFINE_MESSAGE(0x5016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "ロンロン牧場は\n"
SHIFT(12) "インゴーに乗っ取られちまって\n"
SHIFT(15) "今じゃ　" COLOR(RED) "インゴー牧場" COLOR(DEFAULT) "だーよ…"
BOX_BREAK

SHIFT(21) "オラは　追い出されちまって\n"
SHIFT(12) "この　ありさま…　娘のマロンは\n"
SHIFT(15) "牧場で　働かされてるだーよ…"
BOX_BREAK

SHIFT(60) "心配だーよ…"
),
MSG(
"Ingo took over Lon Lon Ranch and\n"
"they call it " COLOR(RED) "Ingo Ranch " COLOR(DEFAULT) "nowadays."
BOX_BREAK

"I was kicked out of there, and\n"
"look at me now! My girl, Malon, \n"
"still works at the ranch..."
BOX_BREAK

"I'm worried about her..."
),
MSG(
"Die Lon Lon-Farm wurde von Basil\n"
"übernommen und heißt jetzt\n"
COLOR(RED) "Basil-Farm" COLOR(DEFAULT) "."
BOX_BREAK

"Mich hat man hinausgeworfen -\n"
"schau mich nur an! Meine Tochter\n"
"Malon arbeitet noch immer dort."
BOX_BREAK

"Ich mache mir Sorgen..."
),
MSG(
"Ingo s'occupe du Ranch Lon Lon à\n"
"présent. On l'appelle le " COLOR(RED) "Ranch Ingo" COLOR(DEFAULT) "."
BOX_BREAK

"On m'a fichu dehors et...\n"
"Regarde dans quel état j'suis!\n"
"Ma fille Malon y travaille toujours."
BOX_BREAK

"Je me fais tant de souci..."
)
)

DEFINE_MESSAGE(0x5017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "マロンを　たすけてくれただか？！\n"
SHIFT(51) "ありがとだーよ！\n"
SHIFT(6) "じゃ、牧場にもどってみるだーよ。"
),
MSG(
"Did you save Malon? Thanks!\n"
"I'm goin' back to the ranch, then!\n"
"Yeehah!"
),
MSG(
"Du hast Malon gerettet? Danke!\n"
"Dann kann ich ja wieder\n"
"auf die Farm zurück."
),
MSG(
"Malon est de nouveau heureuse?\n"
"Je vais retourner au Ranch!"
)
)

DEFINE_MESSAGE(0x5018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(60) QUICKTEXT_ENABLE "コラ、ぼーず！" QUICKTEXT_DISABLE "\n"
SHIFT(18) "墓に　イタズラすんでねぇど！"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "オラは、" COLOR(RED) "墓守りのダンペイ" COLOR(DEFAULT) "だ〜！\n"
SHIFT(12) "顔はコワイが　悪人じゃねぇゾ！"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "ぼーずにも、オラの\n"
SHIFT(12) "バイトのＣＭ　させてもらうだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(48) COLOR(RED) "墓守りダンペイ" COLOR(DEFAULT) "の\n"
SHIFT(30) "ドキドキ　" COLOR(LIGHTBLUE) "穴ほりツアー" COLOR(DEFAULT) "！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "なにがでるかな、なにがでるかな。\n"
SHIFT(18) "ほってみての　お楽しみ〜っ！" TEXTID(0x5019)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Hey kid!" QUICKTEXT_DISABLE "\n"
"Don't mess around with the \n"
"graves!"
BOX_BREAK

UNSKIPPABLE "I'm " COLOR(RED) "Dampé the Gravekeeper" COLOR(DEFAULT) "!\n"
"My face may be scary, but I'm not\n"
"a bad guy..."
BOX_BREAK

UNSKIPPABLE "Let me give you an advertisement\n"
"for my side business..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Dampé the Gravekeeper's" COLOR(DEFAULT) "\n"
"Heart-Pounding" COLOR(LIGHTBLUE) " Gravedigging Tour" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "What's gonna come out?!\n"
"What's gonna come out?!\n"
"When I start digging,\n"
"we'll find out!" TEXTID(0x5019)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Hey, Kleiner!" QUICKTEXT_DISABLE "\n"
"Was hast Du hier zu suchen?"
BOX_BREAK

UNSKIPPABLE "Ich bin " COLOR(RED) "Boris, der Totengräber" COLOR(DEFAULT) "!\n"
"Ich sehe vielleicht zum Fürchten\n"
"aus, aber ich bin ganz harmlos..."
BOX_BREAK

UNSKIPPABLE "Laß mich Dir ein bißchen von\n"
"meinem Nebenjob erzählen:"
BOX_BREAK

UNSKIPPABLE "Ich, der " COLOR(RED) "Totengräber Boris" COLOR(DEFAULT) ",\n"
"lade ein zur...\n"
COLOR(LIGHTBLUE) "Grausigen Grabgrusel-Tour" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Was kommt dabei raus?!\n"
"Was kommt dabei raus?!\n"
"Lasset uns graben und\n"
"wir finden's heraus!" TEXTID(0x5019)
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Hé! Petit!" QUICKTEXT_DISABLE "\n"
"Laisse les tombes à leur place!"
BOX_BREAK

UNSKIPPABLE "Moi c'est " COLOR(RED) "Igor le fossoyeur" COLOR(DEFAULT) "!\n"
"Ma face fait peur aux mouches \n"
"mais je suis un chic type..."
BOX_BREAK

UNSKIPPABLE "Connais-tu l'attraction du\n"
"cimetière?\n"
"Elle s'appelle..."
BOX_BREAK

UNSKIPPABLE SHIFT(26) COLOR(RED) "L'excursion du fossoyeur" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Je creuse, je creuse...\n"
"J'trouve un truc ou que dalle...\n"
"Fais-moi creuser et...\n"
"Garde tout pour ta pomme!" TEXTID(0x5019)
)
)

DEFINE_MESSAGE(0x5019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"ここ、ほる？　１回　" COLOR(RED) "１０ルピー" COLOR(DEFAULT) "。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
"Do you want me to dig here?\n"
COLOR(RED) "10 Rupees" COLOR(DEFAULT) " for one hole.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "Don't do it" COLOR(DEFAULT)
),
MSG(
"Willst Du, daß ich hier grabe?\n"
COLOR(RED) "10 Rubine" COLOR(DEFAULT) " für ein Loch.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Laß mal bleiben!" COLOR(DEFAULT)
),
MSG(
"Tu veux que j'creuse ici?\n"
"C'est " COLOR(RED) "10 Rubis" COLOR(DEFAULT) " le trou.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x501A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) COLOR(RED) "はずれ〜っ！！" COLOR(DEFAULT)
),
MSG(
COLOR(RED) "Nope, nothing here!" COLOR(DEFAULT)
),
MSG(
COLOR(RED) "Nein, hier ist nichts!" COLOR(DEFAULT)
),
MSG(
COLOR(RED) "Y'a rien ici!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x501B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(14) "さがってろ　" NAME "！"
),
MSG(
UNSKIPPABLE "Get back, " NAME "!"
),
MSG(
UNSKIPPABLE SHIFT(35) "Zurück, " NAME "!"
),
MSG(
UNSKIPPABLE "Arrière, " NAME "!"
)
)

DEFINE_MESSAGE(0x501C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) NAME "、\n"
SHIFT(24) "大変なことに　なった…\n"
SHIFT(24) COLOR(RED) "闇の魔物" COLOR(DEFAULT) "が　復活したんだ！"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "闇の魔物は、\n"
SHIFT(18) "カカリコ村の長" COLOR(RED) "インパ" COLOR(DEFAULT) "の力で\n"
SHIFT(3) "井戸の底に　封じ込められていた…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "だが、魔物の力が　強まったため、\n"
SHIFT(42) "井戸の封印が　破れ、\n"
SHIFT(39) "地上へ　現れたんだ！！"
),
MSG(
UNSKIPPABLE NAME "....\n"
"A terrible thing has happened!\n"
"The " COLOR(RED) "evil shadow spirit" COLOR(DEFAULT) " has\n"
"been released!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Impa" COLOR(DEFAULT) ", the leader of Kakariko\n"
"Village, had sealed the evil shadow\n"
"spirit in the bottom of the well...."
BOX_BREAK

UNSKIPPABLE "But the force of the evil spirit\n"
"got so strong, the seal of the\n"
"well broke, and it escaped into the\n"
"world!!"
),
MSG(
UNSKIPPABLE NAME "...\n"
"Etwas Schreckliches ist passiert!\n"
"Der " COLOR(RED) "Schattendämon" COLOR(DEFAULT) " ist\n"
"aus seinem Gefängnis entkommen!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Impa" COLOR(DEFAULT) ", die Gründerin Kakarikos,\n"
"hatte den Schattendämon einst auf\n"
"den Grund des Brunnens verbannt\n"
"und dort eingeschlossen..."
BOX_BREAK

UNSKIPPABLE "Doch die Kraft des Dämons wurde\n"
"in letzter Zeit immer stärker, so\n"
"daß das Siegel brach und er wieder\n"
"in die Oberwelt entkommen konnte!"
),
MSG(
UNSKIPPABLE NAME "....\n"
"Un grand malheur vient de se \n"
"produire! Le " COLOR(RED) "monstre de l'ombre" COLOR(DEFAULT) " \n"
"s'est échappé!"
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Impa" COLOR(DEFAULT) ", chef du Village Cocorico, \n"
"a jadis combattu puis enfermé le \n"
"Monstre de l'Ombre au fond du \n"
"puits...."
BOX_BREAK

UNSKIPPABLE "Mais depuis longtemps cette bête,\n"
"grâce à l'influence de Ganondorf, \n"
"rassemble ses forces pour enfin\n"
"recouvrer sa liberté!!!"
)
)

DEFINE_MESSAGE(0x501D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(6) "村のことは　ボクにまかせてくれ。\n"
SHIFT(6) "たのんだぞ、" NAME "！"
),
MSG(
UNSKIPPABLE "Let me take care of the village!\n"
"I'm counting on you,\n"
NAME "!"
),
MSG(
UNSKIPPABLE "Ich werde mich um das Dorf\n"
"kümmern!\n"
"Ich zähle auf Dich,\n"
NAME "!"
),
MSG(
UNSKIPPABLE "Je vais m'occuper du village!\n"
"Je compte sur toi " NAME "."
)
)

DEFINE_MESSAGE(0x501E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(24) "ハイラル王室の作曲家兄弟\n"
SHIFT(30) "兄　シャープ　ここに眠る" QUICKTEXT_DISABLE EVENT
),
MSG(
QUICKTEXT_ENABLE SHIFT(35) "Royal Composer Bros.\n"
SHIFT(55) "Sharp the Elder\n"
SHIFT(80) "R.I.P." QUICKTEXT_DISABLE EVENT
),
MSG(
QUICKTEXT_ENABLE SHIFT(37) "Gebrüder Brahmstein,\n"
SHIFT(46) "königliche Tonsetzer.\n"
SHIFT(51) "Johann, der Ältere\n"
SHIFT(80) "R.I.P." QUICKTEXT_DISABLE EVENT
),
MSG(
QUICKTEXT_ENABLE SHIFT(40) "Frère Musicien Royal\n"
SHIFT(60) "Bémol l'aîné\n"
SHIFT(55) "Repose En Paix" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x501F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(24) "ハイラル王室の作曲家兄弟\n"
SHIFT(30) "弟　フラット　ここに眠る" QUICKTEXT_DISABLE EVENT
),
MSG(
QUICKTEXT_ENABLE SHIFT(35) "Royal Composer Bros.\n"
SHIFT(51) "Flat the Younger\n"
SHIFT(80) "R.I.P." QUICKTEXT_DISABLE EVENT
),
MSG(
QUICKTEXT_ENABLE SHIFT(37) "Gebrüder Brahmstein,\n"
SHIFT(46) "königliche Tonsetzer.\n"
SHIFT(48) "Ludwig, der Jüngere\n"
SHIFT(80) "R.I.P." QUICKTEXT_DISABLE EVENT
),
MSG(
QUICKTEXT_ENABLE SHIFT(40) "Frère Musicien Royal\n"
SHIFT(56) "Dièse le cadet\n"
SHIFT(55) "Repose En Paix" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x5020, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(72) "王家の墓" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE SHIFT(40) "Royal Family's Tomb" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE SHIFT(74) "Königsgrab" QUICKTEXT_DISABLE
),
MSG(
QUICKTEXT_ENABLE SHIFT(55) "Tombe Royale" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x5021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(24) QUICKTEXT_ENABLE "この詩を　王の一族に　捧ぐ" QUICKTEXT_DISABLE EVENT
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(26) "This poem is dedicated to\n"
"the memory of the dearly departed\n"
SHIFT(16) "members of the Royal Family." QUICKTEXT_DISABLE EVENT
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Dieses Gedicht wurde im Gedenken\n"
SHIFT(10) "an die teuren Verstorbenen der\n"
SHIFT(20) "königlichen Familie verfasst." QUICKTEXT_DISABLE EVENT
),
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Cette ode est dédiée à la mémoire\n"
SHIFT(3) "des disparus de la Famille Royale." QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x5022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "ゼルダ様のオカリナを　持つ少年…\n"
SHIFT(33) "やはり、来てくれたか…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "私は　シーカー族の　" COLOR(RED) "インパ" COLOR(DEFAULT) "。\n"
SHIFT(30) "ゼルダ様の　乳母であり、\n"
SHIFT(9) "闇の神殿を守る　賢者でもある…"
),
MSG(
UNSKIPPABLE "The boy with the noble Zelda's \n"
"Ocarina...As I expected, \n"
"you have come."
BOX_BREAK

UNSKIPPABLE "I am " COLOR(RED) "Impa" COLOR(DEFAULT) ", one of the Sheikah.\n"
"I am Princess Zelda's caretaker,\n"
"and I am also the Sage who\n"
"guards the Shadow Temple."
),
MSG(
UNSKIPPABLE "Du hast die Kreatur des Bösen\n"
"bezwungen und den Fluch vom\n"
"Schattentempel genommen!\n"
"Hab Dank dafür, " NAME "!"
BOX_BREAK

UNSKIPPABLE "Denn ich bin nicht allein\n"
"Prinzessin Zeldas Vertraute,\n"
"sondern auch jene Weise, die\n"
"über den Tempel wacht!"
),
MSG(
UNSKIPPABLE "Jeune garçon à l'ocarina...\n"
"Enfin tu es venu."
BOX_BREAK

UNSKIPPABLE "Mon nom est " COLOR(RED) "Impa" COLOR(DEFAULT) " des Sheikahs.\n"
"Je suis la nourrice de la Princesse\n"
"et le Sage du Temple de l'Ombre."
)
)

DEFINE_MESSAGE(0x5023, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(39) "ゼルダ様を　たのむ！！" FADE(50)
),
MSG(
UNSKIPPABLE "Please look out for the Princess!" FADE(50)
),
MSG(
UNSKIPPABLE SHIFT(27) "Bitte suche die Prinzessin!" FADE(50)
),
MSG(
UNSKIPPABLE "Prends bien soin de la Princesse!" FADE(50)
)
)

DEFINE_MESSAGE(0x5024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(21) "勇者　" NAME "よ…"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "ついに　我ら　" COLOR(RED) "六賢者" COLOR(DEFAULT) "は　復活した！\n"
SHIFT(6) "魔王との対決の時が　きたのじゃ！"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "その前に…\n"
"お前を待っておる者に　会うがよい。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "その者は　" COLOR(LIGHTBLUE) "時の神殿" COLOR(DEFAULT) "で\n"
SHIFT(39) "お前を　待っておる…"
),
MSG(
UNSKIPPABLE NAME ", the hero!"
BOX_BREAK

UNSKIPPABLE "Finally, all of us, the " COLOR(RED) "six Sages" COLOR(DEFAULT) ", \n"
"have been awakened!\n"
"The time for the final showdown\n"
"with the King of Evil has come!"
BOX_BREAK

UNSKIPPABLE "Before that, though, you should\n"
"meet the one who is waiting for\n"
"you..."
BOX_BREAK

UNSKIPPABLE "The one who is waiting for you at\n"
"the " COLOR(LIGHTBLUE) "Temple of Time" COLOR(DEFAULT) "...."
),
MSG(
UNSKIPPABLE NAME ", der Auserwählte!\n"
"Endlich!"
BOX_BREAK

UNSKIPPABLE "Alle " COLOR(RED) "Sechs Weisen " COLOR(DEFAULT) "sind erweckt!\n"
"Es ist soweit: Der entscheidende\n"
"Kampf gegen den Großmeister des\n"
"Bösen soll nun beginnen!"
BOX_BREAK

UNSKIPPABLE "Zuvor jedoch sollst Du jene\n"
"treffen, die auf Dich wartet..."
BOX_BREAK

UNSKIPPABLE "Sie harrt Deiner in der\n"
COLOR(LIGHTBLUE) "Zitadelle der Zeit" COLOR(DEFAULT) "..."
),
MSG(
UNSKIPPABLE NAME ", le héros!"
BOX_BREAK

UNSKIPPABLE "Enfin les " COLOR(RED) "six Sages " COLOR(DEFAULT) "sont éveillés!\n"
"L'heure est venue pour toi de \n"
"défier le Seigneur du Malin!"
BOX_BREAK

UNSKIPPABLE "Mais avant de croiser le fer avec\n"
"le vil Ganondorf, il te reste une \n"
"personne à rencontrer..."
BOX_BREAK

UNSKIPPABLE "Cette personne t'attend au\n"
COLOR(LIGHTBLUE) "Temple du Temps" COLOR(DEFAULT) "...."
)
)

DEFINE_MESSAGE(0x5025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "我々　シーカー族は、\n"
SHIFT(6) "代々　ハイラル王家の　下僕として\n"
SHIFT(33) "仕えてきた…　しかし…"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "七年前の　あの日…\n"
SHIFT(9) "ガノンドロフの　突然の襲撃…\n"
SHIFT(6) "ハイラル城は　まもなく　陥落した。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "ガノンドロフの　目的は\n"
SHIFT(3) "聖地へのカギの一つ…　王家の秘宝\n"
SHIFT(27) "時のオカリナだったのだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "私の役目は、ゼルダ様を\n"
SHIFT(3) "ガノンドロフの　手の届かぬ場所へ\n"
SHIFT(30) "お連れすることだった…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "その逃亡の　途中だったな、\n"
SHIFT(18) "最後に　お前と　会ったのは…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "あれから　七年…\n"
SHIFT(9) "りっぱな勇者に　なったものだ…"
),
MSG(
UNSKIPPABLE "We Sheikah have served the \n"
"royalty of Hyrule from generation\n"
"to generation as attendants.\n"
"However..."
BOX_BREAK

UNSKIPPABLE "On that day seven years ago,\n"
"Ganondorf suddenly attacked...\n"
"and Hyrule Castle surrendered\n"
"after a short time."
BOX_BREAK

UNSKIPPABLE "Ganondorf's target was one of\n"
"the keys to the Sacred Realm...the\n"
"hidden treasure of the Royal\n"
"Family...The Ocarina of Time!"
BOX_BREAK

UNSKIPPABLE "My duty bound me to take Zelda \n"
"out of Ganondorf's reach."
BOX_BREAK

UNSKIPPABLE "When last I saw you, as we made\n"
"our escape from the castle, you\n"
"were just a lad..."
BOX_BREAK

UNSKIPPABLE "Now I see that you have become \n"
"a fine hero..."
),
MSG(
UNSKIPPABLE "Die Shiekahs waren seit\n"
"Generationen die getreuen Diener\n"
"des Königsgeschlechts von Hyrule.\n"
"Jedoch..."
BOX_BREAK

UNSKIPPABLE "...auf den Tag genau vor sieben\n"
"Jahren griff Ganondorf das Schloß\n"
"an... Nach kurzem Kampf\n"
"schon ergab sich Hyrules König."
BOX_BREAK

UNSKIPPABLE "Ganondorf wollte den Schlüssel\n"
"zum Heiligen Reich, den\n"
"bestgehüteten Schatz der\n"
"Königsfamilie: Die Okarina der Zeit!"
BOX_BREAK

UNSKIPPABLE "Meine Aufgabe war, Prinzessin \n"
"Zelda zu retten und sie vor dem\n"
"Zugriff Ganondorfs zu bewahren."
BOX_BREAK

UNSKIPPABLE "Als ich Dich damals bei unserer\n"
"Flucht aus dem Schloß sah, warst\n"
"Du nur ein kleiner Junge..."
BOX_BREAK

UNSKIPPABLE "Jetzt ist aus Dir ein stolzer\n"
"Held geworden!"
),
MSG(
UNSKIPPABLE "Depuis des siècles, les Sheikahs \n"
"furent les serviteurs secrets de \n"
"la Famille Royale d'Hyrule.\n"
"Toutefois..."
BOX_BREAK

UNSKIPPABLE "Il y a sept ans, Ganondorf lança\n"
"son attaque et le Château d'Hyrule \n"
"dut se rendre après une très \n"
"courte bataille."
BOX_BREAK

UNSKIPPABLE "Ganondorf était à la recherche\n"
"de l'une des clés du Saint \n"
"Royaume...le trésor secret de la \n"
"Famille Royale...l'Ocarina du Temps!"
BOX_BREAK

UNSKIPPABLE "Mon devoir était de mettre\n"
"la Princesse Zelda à l'abri."
BOX_BREAK

UNSKIPPABLE "Je me souviens t'avoir vu lors\n"
"de notre fuite..."
BOX_BREAK

UNSKIPPABLE "Tu es devenu un valeureux\n"
"guerrier..."
)
)

DEFINE_MESSAGE(0x5026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "私は、ここに　残らねばならぬ…\n"
SHIFT(9) "お前は　ゼルダ様の　お側へ行き、\n"
SHIFT(9) "私のかわりに　お守りしてくれ…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "今、そなたの　助けとなりし\n"
SHIFT(15) "我が力、" COLOR(BLUE) "このメダル" COLOR(DEFAULT) "に　込める！"
),
MSG(
UNSKIPPABLE "I have to stay here... You go to \n"
"Princess Zelda's side and protect \n"
"her on my behalf."
BOX_BREAK

UNSKIPPABLE "Now I put my power, which should \n"
"be helpful to you, into this\n"
COLOR(BLUE) "Medallion" COLOR(DEFAULT) "!"
),
MSG(
UNSKIPPABLE "Gehe nun! Stehe Prinzessin\n"
"Zelda an meiner Stelle zur Seite\n"
"und beschütze sie."
BOX_BREAK

UNSKIPPABLE "Meine Kraft soll Dich begleiten.\n"
"Ich lege sie in dieses " COLOR(BLUE) "Amulett" COLOR(DEFAULT) "!"
),
MSG(
UNSKIPPABLE "Mon devoir est de rester ici... \n"
"Trouve la Princesse Zelda et \n"
"protège-la à ma place."
BOX_BREAK

UNSKIPPABLE "Je vais maintenant te transmettre\n"
"mon pouvoir grâce à ce " COLOR(BLUE) "Médaillon" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x5027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(81) "どう？\n"
SHIFT(48) "コッコ　満足した？\n"
SHIFT(51) "見てあげようか？"
),
MSG(
"How is your Cucco? Is he happy?\n"
"Shall I check him out for you?"
),
MSG(
"Nun? Ist Kiki fröhlich und\n"
"zufrieden? Soll ich sie mir\n"
"einmal anschauen?"
),
MSG(
"Comment se porte ta Cocotte?\n"
"Veux-tu me la remettre?"
)
)

DEFINE_MESSAGE(0x5028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) SHIFT(27) "オレっちは　インパ様から\n"
SHIFT(3) "この村を　りっぱな村にするために\n"
SHIFT(24) "やとわれた　" COLOR(RED) "大工の親方" COLOR(DEFAULT) "だ！"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "最近のヤツは　根性が　ねえ！\n"
SHIFT(27) "そう　思わねえか　ぼうず！"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "ウチの　わけぇのは\n"
SHIFT(30) "ウロチョロするばっかで\n"
SHIFT(6) "ちぃっとも　仕事は　進まねぇし…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "オレっちの　「せがれ」　なんて、\n"
SHIFT(36) "毎日　仕事も　しねぇで\n"
SHIFT(27) "ブラ　ブラ…　ブラ　ブラ…" TEXTID(0x5029)
),
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "I am the " COLOR(RED) "boss of the carpenters\n"
COLOR(DEFAULT) "that Impa hired to improve this\n"
"village and make it into a true\n"
"city!"
BOX_BREAK

UNSKIPPABLE "But young men these days don't\n"
"have any ambition...\n"
"Do you know what I mean, kid?"
BOX_BREAK

UNSKIPPABLE "My workers are just running\n"
"aimlessly around the village, and\n"
"they're not making any progress\n"
"at all..."
BOX_BREAK

UNSKIPPABLE "Even my own son doesn't have a \n"
"job, and he just wanders around\n"
"all day!" TEXTID(0x5029)
),
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Ich bin der " COLOR(RED) "Chef der Zimmerleute" COLOR(DEFAULT) ".\n"
"Impa hat uns angestellt, diesen\n"
"Ort in eine eindrucksvolle Stadt \n"
"zu verwandeln!"
BOX_BREAK

UNSKIPPABLE "Aber die jungen Kerle von heute\n"
"haben keinen Ehrgeiz mehr!\n"
"Weißt Du, was ich meine, Junge?"
BOX_BREAK

UNSKIPPABLE "Meine Arbeiter rennen nur planlos\n"
"im Dorf herum und machen bei\n"
"ihrer Arbeit keinerlei Fortschritte!"
BOX_BREAK

UNSKIPPABLE "Sogar mein Sohn ist ein fauler\n"
"Sack und hängt den ganzen Tag\n"
"nur in der Gegend rum!" TEXTID(0x5029)
),
MSG(
UNSKIPPABLE SFX(NA_SE_VO_IN_LOST) "Je suis le " COLOR(RED) "chef des ouvriers \n"
COLOR(DEFAULT) "engagé par Impa pour transformer\n"
"le village en grande ville!"
BOX_BREAK

UNSKIPPABLE "Mais les jeunes gens d'aujourd'hui\n"
"n'ont aucune ambition..."
BOX_BREAK

UNSKIPPABLE "Mes ouvriers se baladent toute\n"
"la sainte journée! Alors le travail \n"
"prend du retard et ça me rend \n"
"dingue..."
BOX_BREAK

UNSKIPPABLE "Même mon propre fils ne travaille\n"
"pas. Il fiche sa vie en l'air!" TEXTID(0x5029)
)
)

DEFINE_MESSAGE(0x5029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(24) "てやんでぇ　べらぼうめぃ！"
),
MSG(
UNSKIPPABLE "They're all worthless, I tell you!!"
),
MSG(
UNSKIPPABLE "Ich sage Dir: Die jungen\n"
"Leute sind zu nichts mehr \n"
"zu gebrauchen!"
),
MSG(
UNSKIPPABLE "Inutiles et paresseux! TOUS!"
)
)

DEFINE_MESSAGE(0x502A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "あそこに　たってる　女のコ、\n"
SHIFT(6) "苦手なのに　トリの世話してるの。\n"
SHIFT(51) "ケナゲよネ〜ッ。"
BOX_BREAK

SHIFT(27) "あのコの　力になりたい…\n"
SHIFT(24) "そうおもう　今日このごろ。\n"
SHIFT(36) "わかる？　このキモチ…"
),
MSG(
"Look at that poor girl over there.\n"
"She works so hard taking care of \n"
"her chickens, even though touching\n"
"them gives her goose bumps..."
BOX_BREAK

"What a trooper! I would really \n"
"like to help her! I've just been\n"
"feeling so charitable these days!\n"
"Don't you feel that way, too?"
),
MSG(
"Schau Dir die Kleine da drüben an.\n"
"Sie kümmert sich aufopferungsvoll\n"
"um ihre Hühner, und das, obwohl sie \n"
"gegen Federn allergisch ist."
BOX_BREAK

"Was für ein Mädchen! Ich würde\n"
"ihr gern helfen, ich fühle mich zur\n"
"Zeit wie ein Wohltäter! Geht's Dir\n"
"nicht auch so?"
),
MSG(
"Regarde-moi cette pauvre fille.\n"
"Elle s'occupe des cocottes même \n"
"en étant allergique aux plumes!\n"
"Quel courage...je l'aime..."
BOX_BREAK

"J'aimerais bien l'aider mais...\n"
"Les cocottes, moi ça m'énerve!\n"
"Pas toi?"
)
)

DEFINE_MESSAGE(0x502B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(66) "安心せよ…\n"
SHIFT(21) "ゼルダ様は　今も　ご無事だ。"
),
MSG(
UNSKIPPABLE "There's nothing to worry about...\n"
"The Princess is safe now."
),
MSG(
UNSKIPPABLE "Wir müssen uns keine Sorgen\n"
"machen...\n"
"Die Prinzessin ist jetzt in\n"
"Sicherheit."
),
MSG(
UNSKIPPABLE "La Princesse est à l'abri \n"
"maintenant..."
)
)

DEFINE_MESSAGE(0x502C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "まもなく、ゼルダ様は\n"
SHIFT(33) "お前の　目の前に　現れ、\n"
SHIFT(21) "全てを　語られるであろう…"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "その時こそ、\n"
SHIFT(15) "我ら六賢者が　魔王を　封印し、\n"
SHIFT(3) "ハイラルに　平和が　戻る時なのだ！"
),
MSG(
UNSKIPPABLE "Soon, you'll meet Princess Zelda\n"
"face-to-face, and she will explain\n"
"everything..."
BOX_BREAK

UNSKIPPABLE "That is when we, the six Wise \n"
"Ones, will seal up the Evil King\n"
"and return peace to Hyrule."
),
MSG(
UNSKIPPABLE "Schon bald wirst Du Prinzessin\n"
"Zelda von Angesicht zu Angesicht\n"
"gegenübertreten. Sie wird Dir\n"
"alles erklären..."
BOX_BREAK

UNSKIPPABLE "Dann, wenn die Sechs Weisen den\n"
"Großmeister des Bösen verbannt\n"
"haben und wieder Frieden in \n"
"Hyrule eingekehrt ist!"
),
MSG(
UNSKIPPABLE "Très bientôt, Zelda viendra tout \n"
"t'expliquer..."
BOX_BREAK

UNSKIPPABLE "Une fois les six Sages réunis et\n"
"le Roi Sombre détruit, la vérité te \n"
"sera révélée."
)
)

DEFINE_MESSAGE(0x502D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "やるな　ニイチャン！\n"
SHIFT(15) "オラの足に　ついてこれるとは\n"
"イイ走りしてるじゃネェか、ヘヘヘ！"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "ごほうびに　ダンペイさん秘蔵の\n"
SHIFT(24) "お宝を　プレゼントするだ。\n"
SHIFT(18) COLOR(RED) "フックショット" COLOR(DEFAULT) "って　言うだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "先っぽが　ささりそうな所へ\n"
SHIFT(3) "バシュッ！　と撃つと、飛んでくだ。\n"
SHIFT(21) "いいだろ。　役に立つぞ〜っ！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "オラは　ズ〜ッと　ココに\n"
SHIFT(24) "住んでっから、また来いや。\n"
SHIFT(9) "そん時、また　イイモンやるから。"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "それからな…\n"
SHIFT(12) "帰り道にゃ　気〜つけて行きな。\n"
SHIFT(72) "ヘヘヘ…"
),
MSG(
UNSKIPPABLE "Hehehe, young " AGE_ONE "...\n"
"You were very quick to be able\n"
"to keep up with me! Hehehe!"
BOX_BREAK

UNSKIPPABLE "As a reward, I'm going to give\n"
"you my treasure. It's called the\n"
COLOR(RED) "Hookshot" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Its spring-loaded chain will pull\n"
"you to any spot where its hook\n"
"sticks. Doesn't that sound cool?\n"
"I'm sure it will help you!"
BOX_BREAK

UNSKIPPABLE "I live here now, so come back\n"
"again sometime. I'll give you\n"
"something cool!"
BOX_BREAK

UNSKIPPABLE "One more thing! Be careful on\n"
"your way back!\n"
"Heheheh...."
),
MSG(
UNSKIPPABLE "Hehehe, Junge...\n"
"Du bist gut zu Fuß, was?"
BOX_BREAK

UNSKIPPABLE "Zur Belohnung werde ich Dir\n"
"meinen " COLOR(RED) "Fanghaken" COLOR(DEFAULT) " anvertrauen."
BOX_BREAK

UNSKIPPABLE "Damit wirst Du nun an Orte\n"
"gelangen, die bisher außerhalb\n"
"Deiner Reichweite lagen."
BOX_BREAK

UNSKIPPABLE "Besuch mich doch mal wieder,\n"
"wenn Du in der Gegend bist. Dann\n"
"gebe ich Dir wieder etwas\n"
"Wertvolles!"
BOX_BREAK

UNSKIPPABLE "Noch etwas: Sei auf Deinem\n"
"Rückweg sehr vorsichtig..."
),
MSG(
UNSKIPPABLE "Héhéhé, mon p'tit bouchon...\n"
"Alors t'es un rapide, hein?"
BOX_BREAK

UNSKIPPABLE "En récompense je te donne mon\n"
"trésor... un " COLOR(RED) "Grappin" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Cette chaîne montée sur ressort\n"
"te hissera là où sa pointe s'est\n"
"plantée. Pratique, hein?"
BOX_BREAK

UNSKIPPABLE "Reviens me voir et tu gagneras \n"
"peut-être un autre p'tit cadeau. \n"
"Alors à bientôt!"
BOX_BREAK

UNSKIPPABLE "Au fait... Bonne chance pour sortir \n"
"d'ici! Yark yark yark!"
)
)

DEFINE_MESSAGE(0x502E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "また来たな、ニイチャン。\n"
SHIFT(18) "プレゼントは　使ってるだか？"
),
MSG(
"You're back, young " AGE_ONE "...\n"
"Was the present I gave to you\n"
"fun and useful?"
),
MSG(
"Du bist ja wieder da, Junge...\n"
"Hat Dir mein Geschenk\n"
"etwas genützt?"
),
MSG(
"Te revoilà, mon bouchon...\n"
"As-tu toujours sur toi mon\n"
"p'tit cadeau?"
)
)

DEFINE_MESSAGE(0x502F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "ただいまのタ〜イム！\n"
SHIFT(51) RACE_TIME "　！！" EVENT
),
MSG(
SHIFT(25) "The time of this race was\n"
SHIFT(75) RACE_TIME "!!" EVENT
),
MSG(
SHIFT(58) "Die Zeit beträgt\n"
SHIFT(75) RACE_TIME "!" EVENT
),
MSG(
SHIFT(5) "Le temps de cette course est de\n"
SHIFT(75) RACE_TIME "!!" EVENT
)
)

DEFINE_MESSAGE(0x5030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) "気がついたようだな…"
),
MSG(
UNSKIPPABLE "Looks like you're coming around..."
),
MSG(
UNSKIPPABLE "Sieht aus, als würdest\n"
"Du es überstehen..."
),
MSG(
UNSKIPPABLE "Bien... Tu reviens à toi..."
)
)

DEFINE_MESSAGE(0x5031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(6) "インパは　再び　封印をするために\n"
SHIFT(9) COLOR(PURPLE) "闇の神殿" COLOR(DEFAULT) "へ　向かったはずだが…\n"
SHIFT(3) "このままでは…　彼女が　キケンだ！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) NAME "！\n"
SHIFT(6) "インパは、六賢者の　一人なのだ。\n"
SHIFT(6) "魔物を倒し、インパを助けてくれ！"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "闇の神殿への　入口は\n"
SHIFT(12) "この村の裏…　墓地の下にある。"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "今のボクに出来ること…\n"
SHIFT(15) "それは　闇の神殿へ行くための\n"
SHIFT(21) "調べを　伝えることだけだ…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "時をも飲み込む　無限の闇に\n"
SHIFT(33) "奏でし者を誘う　調べ…\n"
SHIFT(27) "聞け、" COLOR(PURPLE) "闇のノクターン" COLOR(DEFAULT) "を！！"
),
MSG(
UNSKIPPABLE "I believe Impa has gone to the \n"
COLOR(PURPLE) "Shadow Temple " COLOR(DEFAULT) "to seal it again,\n"
"but...she will be in danger without \n"
"any help!"
BOX_BREAK

UNSKIPPABLE NAME "!\n"
"Impa is one of the six Sages.\n"
"Destroy the evil shadow spirit and\n"
"save Impa!"
BOX_BREAK

UNSKIPPABLE "There is an entrance to the \n"
"Shadow Temple beneath the \n"
"graveyard behind this village."
BOX_BREAK

UNSKIPPABLE "The only thing I can do for you is\n"
"teach you the melody that will\n"
"lead you to the Shadow Temple..."
BOX_BREAK

UNSKIPPABLE "This is the melody that will draw\n"
"you into the infinite darkness \n"
"that absorbs even time... Listen to \n"
"this, the " COLOR(PURPLE) "Nocturne of Shadow" COLOR(DEFAULT) "!!"
),
MSG(
UNSKIPPABLE "Ich glaube, Impa ging zum \n"
COLOR(PURPLE) "Schattentempel" COLOR(DEFAULT) ", um ihn wieder zu\n"
"versiegeln. Ohne Hilfe wird\n"
"sie dort in großer Gefahr sein!"
BOX_BREAK

UNSKIPPABLE NAME "!\n"
"Impa ist eine der Sechs Weisen.\n"
"Vernichte den Schattendämon und\n"
"rette Impa!"
BOX_BREAK

UNSKIPPABLE "Es gibt einen Zugang zum\n"
"Schattentempel hinter dem\n"
"Friedhof von Kakariko."
BOX_BREAK

UNSKIPPABLE "Alles, was ich für Dich tun kann,\n"
"ist, Dich die Melodie zu lehren, die\n"
"Dich zum Schattentempel bringt..."
BOX_BREAK

UNSKIPPABLE "Diese Melodie führt Dich in die\n"
"unendliche Dunkelheit, die sogar die\n"
"Zeit absorbiert... Höre nun\n"
"die " COLOR(PURPLE) "Nocturne des Schattens" COLOR(DEFAULT) "!"
),
MSG(
UNSKIPPABLE "Impa est partie sceller le\n"
COLOR(PURPLE) "Temple de l'Ombre" COLOR(DEFAULT) "," COLOR(BLUE) " " COLOR(DEFAULT) "mais...\n"
"Elle sera en danger si personne ne \n"
"vient lui prêter main-forte!"
BOX_BREAK

UNSKIPPABLE NAME "!\n"
"Impa est l'une des six Sages.\n"
"Va détruire le Monstre de l'Ombre\n"
"et sauve Impa!"
BOX_BREAK

UNSKIPPABLE "L'entrée du Temple se trouve sous \n"
"le cimetière de ce village."
BOX_BREAK

UNSKIPPABLE "La seule chose en mon pouvoir est\n"
"de t'apprendre la mélodie t'ouvrant \n"
"le passage vers le Temple de \n"
"l'Ombre..."
BOX_BREAK

UNSKIPPABLE "Cet air te plongera dans les \n"
"ténèbres abyssales... \n"
"Hors du temps et de l'espace...\n"
"Entends le " COLOR(PURPLE) "Nocturne de l'Ombre" COLOR(DEFAULT) "!!"
)
)

DEFINE_MESSAGE(0x5032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "まわる、まわる、グルグルまわる！\n"
SHIFT(63) "楽しいな〜！"
BOX_BREAK

SHIFT(15) "ボクは　グルグルまわるものが\n"
SHIFT(6) "だいすきな　音楽オジさんで〜す。\n"
SHIFT(57) "グルグル〜！！！"
BOX_BREAK

SHIFT(27) "この風車を　イメージした\n"
SHIFT(36) "音楽を　考えてま〜す！\n"
SHIFT(39) "グルグルグル〜ッ！！！"
),
MSG(
"Go around! Go around and around\n"
"and around! What fun! I'm so \n"
"happy!"
BOX_BREAK

"I'm a music man who loves\n"
"to go around and around!\n"
"Go around and around!!!"
BOX_BREAK

"I'm trying to come up with a\n"
"musical theme inspired by this \n"
"windmill...going around and\n"
"around and around!!!"
),
MSG(
"Ich mag es, im Rhythmus dieser\n"
"Mühle Musik zu machen!\n"
"Das macht Riesenspaß!"
BOX_BREAK

"Ich liebe Musik!\n"
"Ich liebe diese Mühle!"
BOX_BREAK

"Ich will selbst einmal etwas\n"
"komponieren. Vielleicht eine\n"
"Melodie, die von der Mühle\n"
"oder vom Wind erzählt!"
),
MSG(
"Tourne et tourne! \n"
"Encore et encore!\n"
"Quelle fête!!!"
BOX_BREAK

"Je suis un joyeux musicien\n"
"qui tourne et tourne et tourne!\n"
"Danse et tourne avec moi!!!"
BOX_BREAK

"J'aimerais que ma chanson du \n"
"moulin fasse le tour du monde!\n"
"Tourne et tourne et tourne!!!"
)
)

DEFINE_MESSAGE(0x5033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "まわる、まわる…\n"
SHIFT(42) "あれ？　まわりすぎ？"
),
MSG(
"Go around, go around, go around...\n"
"What? It's going way too fast!"
),
MSG(
"Das ist eine sehr schöne Melodie...\n"
"Huch! Jetzt geht es aber\n"
"doch zu schnell!"
),
MSG(
"Tourne et tourne et...hein?\n"
"Holà! Ca tourne trop vite!\n"
"Stooooooooooooooop!!!"
)
)

DEFINE_MESSAGE(0x5034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "ムカムカムカ〜ッ！！"
BOX_BREAK

SHIFT(27) "オレは　七年前の　あの日、\n"
SHIFT(3) "ここで　起きた事を　忘れないゾ〜！\n"
SHIFT(51) "ムカムカ〜ッ！！！"
BOX_BREAK

SHIFT(30) "あの　オカリナこぞうめ…\n"
SHIFT(12) "こんど　きたら　ボコボコだぜ！\n"
SHIFT(39) "ムカムカムカ〜ッ！！！"
),
MSG(
"Grrrrrrrrr!"
BOX_BREAK

"I'll never forget what happened on\n"
"that day, seven years ago!\n"
"Grrrrrrrrr!"
BOX_BREAK

"It's all that Ocarina kid's fault!\n"
"Next time he comes around here,\n"
"I'm gonna mess him up!"
),
MSG(
"Grrrrrrrrr!"
BOX_BREAK

"Ich werde nie vergessen, was vor\n"
"sieben Jahren geschehen ist!\n"
"Grrrrrrrrr!"
BOX_BREAK

"Daran ist nur dieser Typ\n"
"mit seiner Okarina schuld!\n"
"Wenn er sich nochmal sehen\n"
"läßt, kann er etwas erleben!"
),
MSG(
"Grrrrrrrrr!"
BOX_BREAK

"Si jamais je retrouve ce môme...\n"
"Je lui écrase la tête!\n"
"Grrrrrrrrr!"
BOX_BREAK

"Il y a sept ans, il a tout détraqué \n"
"mon beau moulin avec son ocarina!\n"
"Si jamais je le retrouve...\n"
"Ping! Vlan! Dans les dents!"
)
)

DEFINE_MESSAGE(0x5035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(9) "オマエ、オカリナ　持ってんのか？"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "キーッ！！"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "七年前を　思い出しちまうぜ〜！！"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "あの日、悪魔のような　こぞうが\n"
SHIFT(15) "ここで　" COLOR(PURPLE) "ヘンな歌" COLOR(DEFAULT) "を　演奏して、\n"
SHIFT(6) "風車に　イタズラしやがったんだ！"
),
MSG(
UNSKIPPABLE "What?! You've got an ocarina!!"
BOX_BREAK

UNSKIPPABLE "What the heck!"
BOX_BREAK

UNSKIPPABLE "That reminds me of that time,\n"
"seven years ago!"
BOX_BREAK

UNSKIPPABLE "Back then a mean kid came here \n"
"and played a " COLOR(PURPLE) "strange song" COLOR(DEFAULT) ". It \n"
"messed up this windmill!"
),
MSG(
UNSKIPPABLE "Was?! Du besitzt eine Okarina!"
BOX_BREAK

UNSKIPPABLE "Das darf doch nicht wahr sein!"
BOX_BREAK

UNSKIPPABLE "Das erinnert mich an diesen\n"
"Tag vor genau sieben Jahren!"
BOX_BREAK

UNSKIPPABLE "Damals kam so ein Rattengesicht\n"
"hier herein und hat ein " COLOR(PURPLE) "seltsames" COLOR(BLUE) "\n"
COLOR(PURPLE) "Lied" COLOR(DEFAULT) " gespielt. Das hat alles \n"
"durcheinander gebracht!"
),
MSG(
UNSKIPPABLE "Quoi?! Tu as un ocarina!!\n"
"Nom d'un chou-péteur!\n"
"Comme ce môme, il y a sept ans..."
BOX_BREAK

UNSKIPPABLE "Il est arrivé ici comme une fleur\n"
"et il a joué une " COLOR(PURPLE) "curieuse mélodie" COLOR(DEFAULT) ". \n"
"Mon moulin est ensuite devenu \n"
"complètement dingue!"
)
)

DEFINE_MESSAGE(0x5036, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "どうしましょ！\n"
SHIFT(45) COLOR(RED) "コッコ" COLOR(DEFAULT) "が　どっかへ\n"
SHIFT(12) "パタパタ　とんでいっちゃった！"
BOX_BREAK

SHIFT(39) "ねえ　ぼうや、お願い。\n"
SHIFT(27) "コッコたちを　つかまえて\n"
SHIFT(18) "このサクの中に　つれてきて。"
),
MSG(
"What should I do!?\n"
"My " COLOR(RED) "Cuccos" COLOR(DEFAULT) " have all flown away!"
BOX_BREAK

"You, little boy, please!\n"
"Please help me bring them back to \n"
"this pen!"
),
MSG(
"Was soll ich nur tun!?\n"
"Meine " COLOR(RED) "Hühner" COLOR(DEFAULT) " sind alle\n"
"davongeflogen!"
BOX_BREAK

"Bitte!\n"
"Hilf mir, die Hühner wieder\n"
"einzusammeln!"
),
MSG(
"Que dois-je faire!?\n"
"Mes " COLOR(RED) "Cocottes" COLOR(DEFAULT) " sont perdues!"
BOX_BREAK

"Aide-moi, mon petit!\n"
"Dépose toutes les cocottes dans\n"
"cet enclos!"
)
)

DEFINE_MESSAGE(0x5037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "コッコが　にげちゃったの！\n"
SHIFT(9) "あと４羽よ、お願い　つれてきて！"
),
MSG(
"My Cuccos have run away!\n"
"Please help me bring the other \n"
"four back to this pen! Please!"
),
MSG(
"Das machst Du sehr gut!\n"
"Bring doch bitte noch die\n"
"anderen vier zurück!"
),
MSG(
"Mes Cocottes sont perdues!\n"
"Dépose encore quatre cocottes \n"
"dans l'enclos!"
)
)

DEFINE_MESSAGE(0x5038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "コッコが　にげちゃったの！\n"
SHIFT(9) "あと３羽よ、お願い　つれてきて！"
),
MSG(
"My Cuccos have run away!\n"
"Please help me bring the other \n"
"three back to this pen! Please!"
),
MSG(
"Prima! Du bist ein echter\n"
"Hühnerfänger!\n"
"Bring doch auch die anderen\n"
"drei zurück!"
),
MSG(
"Mes Cocottes sont perdues!\n"
"Dépose encore trois cocottes \n"
"dans l'enclos!"
)
)

DEFINE_MESSAGE(0x5039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "コッコが　にげちゃったの！\n"
SHIFT(9) "あと２羽よ、お願い　つれてきて！"
),
MSG(
"My Cuccos have run away!\n"
"Please help me bring the other \n"
"two back to this pen! Please!"
),
MSG(
"Klasse! Du bist richtig lieb!\n"
"Bring doch noch die anderen\n"
"zwei zurück! Bitte!"
),
MSG(
"Mes Cocottes sont perdues!\n"
"Dépose encore deux cocottes \n"
"dans l'enclos!"
)
)

DEFINE_MESSAGE(0x503A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "コッコが　にげちゃったの！\n"
SHIFT(12) "あと１羽よ、お願い　つれてきて！"
),
MSG(
"My Cuccos have run away!\n"
"Please help me bring the last one\n"
"back to this pen! Please!"
),
MSG(
"Super! Jetzt hast Du fast alle!\n"
"Bring doch bitte noch das letzte\n"
"Huhn zurück!"
),
MSG(
"Mes Cocottes sont perdues!\n"
"Dépose encore une cocotte dans \n"
"l'enclos!"
)
)

DEFINE_MESSAGE(0x503B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "コッコ　つかまえてくれて\n"
SHIFT(63) "ありがとう！"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "ワタシ、コッコに　さわると\n"
SHIFT(33) "トリハダたっちゃうの。\n"
SHIFT(69) "ごめんネ。"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "おれいに　コレあげる！\n"
SHIFT(12) "キラキラしてて　キレイでしょ。\n"
SHIFT(42) "だいじに　使ってネ！" EVENT
),
MSG(
UNSKIPPABLE "Thank you for finding my Cuccos.\n"
"I have allergies, so I get \n"
"goose bumps when I touch them."
BOX_BREAK

UNSKIPPABLE "For helping me, I will give this\n"
"to you. It's fine glass, and should\n"
"be useful. Please take good\n"
"care of it!" EVENT
),
MSG(
UNSKIPPABLE "Danke, daß Du meine Hühner\n"
"eingesammelt hast. Ich bin nämlich\n"
"allergisch und bekomme einen\n"
"Ausschlag, wenn ich sie anfasse."
BOX_BREAK

UNSKIPPABLE "Dafür, daß Du mir geholfen\n"
"hast, gebe ich Dir etwas\n"
"sehr Wertvolles!" EVENT
),
MSG(
UNSKIPPABLE "Merci d'avoir retrouvé mes\n"
"cocottes. Mon allergie aux plumes\n"
"est vraiment pénible!"
BOX_BREAK

UNSKIPPABLE "Voici un petit quelque chose\n"
"pour te remercier..." EVENT
)
)

DEFINE_MESSAGE(0x503C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ちょっと　ナニすんのよ！\n"
SHIFT(12) "ちゃんと　セキニンとってよネ！" EVENT
),
MSG(
"Hey, what are you doing?!\n"
"Now go round them up or pay for \n"
"them!" EVENT
),
MSG(
"Hey, was machst Du denn da?!\n"
"Sammle sie ein oder zahle dafür!" EVENT
),
MSG(
"Mais que fais-tu?!\n"
"Rassemble-les dans l'enclos ou \n"
"paie le prix fort!" EVENT
)
)

DEFINE_MESSAGE(0x503D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "コッコを　イジメちゃ　ダメよ。"
),
MSG(
"Please don't tease my Cuccos!"
),
MSG(
"Ärgere die Hühner bitte nicht!"
),
MSG(
"Sois gentil avec les cocottes!"
)
)

DEFINE_MESSAGE(0x503E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(12) "あたらしいコッコが　できたの！\n"
SHIFT(18) COLOR(RED) "てのりコッコ" COLOR(DEFAULT) "って　いうのよ！\n"
SHIFT(6) "このコなら　トリハダたたないの。"
BOX_BREAK

UNSKIPPABLE SHIFT(63) COLOR(RED) "コッコ" COLOR(DEFAULT) "はね、\n"
SHIFT(9) "「ねぼすけ」を　たたき起こすのに\n"
SHIFT(21) "よく効くのよ！　有名でしょ？"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "コッコの方も　" QUICKTEXT_ENABLE COLOR(RED) "コケーッ" COLOR(DEFAULT) QUICKTEXT_DISABLE "とやって、\n"
SHIFT(6) "「ねぼすけ」起こすと　満足するの。"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "でも　アタシのコッコ、\n"
SHIFT(3) "今　ちょっぴり　欲求不満ぎみなの。"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "アンタって…\n"
SHIFT(9) "コッコの　あつかい　うまそうね。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "じゃ、このタマゴ　あげる。\n"
SHIFT(9) "生まれたら　コッコのゴキゲンは\n"
SHIFT(12) "見てあげるから　もってきてネ。" TEXTID(0x503F)
),
MSG(
UNSKIPPABLE "I bred a new type of miniature \n"
"Cucco! I call it the " COLOR(RED) "Pocket \n"
"Cucco" COLOR(DEFAULT) "! I don't get goose bumps\n"
"from this baby."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Cuccos " COLOR(DEFAULT) "are very good at \n"
"getting lazy, late-risers out of bed.\n"
"Haven't you heard of them \n"
"before?"
BOX_BREAK

UNSKIPPABLE "It makes them very happy to crow:\n"
QUICKTEXT_ENABLE SHIFT(56) COLOR(RED) "CUCCKOOOO" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"especially when it wakes up a \n"
"very heavy sleeper!"
BOX_BREAK

UNSKIPPABLE "However, my Cucco is not entirely\n"
"happy right now..."
BOX_BREAK

UNSKIPPABLE "You..., \n"
"You look like you're good at \n"
"handling Cuccos."
BOX_BREAK

UNSKIPPABLE "Here, take this egg.\n"
"After the Cucco hatches, bring it \n"
"back to me after a while, and I'll \n"
"check out its mood." TEXTID(0x503F)
),
MSG(
UNSKIPPABLE "Ich habe ein neues Huhn\n"
"gezüchtet! Ich nenne es " COLOR(RED) "Kiki" COLOR(DEFAULT) ", und \n"
"ich bekomme keine Allergie, wenn\n"
"ich es anfasse."
BOX_BREAK

UNSKIPPABLE "Es paßt auch in die Hosentasche\n"
"und ist praktisch, um faule\n"
"Langschläfer aufzuwecken! Schon\n"
"mal was davon gehört?"
BOX_BREAK

UNSKIPPABLE "Es hat Spaß dabei, richtig laut zu\n"
"gackern. Ganz besonders, wenn es\n"
"eine Schlafmütze aufwecken darf!"
BOX_BREAK

UNSKIPPABLE "Aber... so ganz zufrieden ist\n"
"Kiki im Augenblick noch nicht..."
BOX_BREAK

UNSKIPPABLE "Du... Du siehst aus, als\n"
"hättest Du ein glückliches\n"
"Händchen für Hühner!"
BOX_BREAK

UNSKIPPABLE "Hier, nimm dieses Ei mit.\n"
"Ist Kiki ausgeschlüpft, dann bring\n"
"es irgendwann zu mir zurück und\n"
"ich schaue, wie es sich fühlt." TEXTID(0x503F)
),
MSG(
UNSKIPPABLE "J'élève une nouvelle espèce de\n"
"Cocotte: les " COLOR(RED) "Cocottes de Poche" COLOR(DEFAULT) "! \n"
"Je n'y suis plus allergique!"
BOX_BREAK

UNSKIPPABLE "Les " COLOR(RED) "Cocottes " COLOR(DEFAULT) "font d'excellents \n"
"réveils! Fais donc l'essai avec\n"
"quelqu'un de paresseux!"
BOX_BREAK

UNSKIPPABLE "Leur chant est si mélodieux...\n"
QUICKTEXT_ENABLE SHIFT(45) COLOR(RED) "COCOOOOOOTTE" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Surtout lorsqu'un gros dormeur\n"
"se trouve à proximité! Hi hi hi!"
BOX_BREAK

UNSKIPPABLE "Toutefois... Mes cocottes ne sont\n"
"pas toutes heureuses..."
BOX_BREAK

UNSKIPPABLE "Dis-moi... \n"
"Tu m'as l'air d'aimer les cocottes!\n"
"Je me trompe?"
BOX_BREAK

UNSKIPPABLE "Tiens, prends cet oeuf.\n"
"Après l'apparition d'une cocotte,\n"
"reviens me voir et nous \n"
"examinerons son humeur." TEXTID(0x503F)
)
)

DEFINE_MESSAGE(0x503F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"どう？　やってみる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
),
MSG(
"What do you think? \n"
"Will you try?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(
"Was hältst Du davon? \n"
"Willst Du es ausprobieren?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
),
MSG(
"Qu'en penses-tu? \n"
"L'idée t'intéresse?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Mouais\n"
    "Bof" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x5040, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "あら　ざんねん…\n"
SHIFT(9) "コッコで　イタい目に　あったの？" EVENT
),
MSG(
"Oh, too bad...were you pecked by\n"
"a Cucco when you were little?" EVENT
),
MSG(
"Oh, wie schade... Haben die Hühner\n"
"immer nach Dir gehackt, als Du\n"
"noch kleiner warst?" EVENT
),
MSG(
"Dommage... \n"
"Les cocottes te font-elles peur?" EVENT
)
)

DEFINE_MESSAGE(0x5041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "ヘヘヘ、ニイチャン…\n"
SHIFT(42) "足に　自信あるだか？"
BOX_BREAK

SHIFT(9) "こう見えても　オラは　自信あり！\n"
SHIFT(21) "ココで　オラと　競争するだ。\n"
"ついてこれるもんなら　ついてきな！"
),
MSG(
"Heh heh heh, young " AGE_ONE "!\n"
"Are you fast on your feet?"
BOX_BREAK

"I may not look like it, but I'm \n"
"confident in my speed!\n"
"Let's have a race! \n"
"Follow me if you dare!"
),
MSG(
"Hehehe, Junge!\n"
"Bist Du gut zu Fuß?"
BOX_BREAK

"Ich seh vielleicht nicht so aus,\n"
"aber ich bin ganz schön schnell!\n"
"Laß uns um die Wette laufen! \n"
"Wenn Du es Dir zutraust..."
),
MSG(
"Hé hé hé! Mon p'tit bouchon...\n"
"Tu t'crois rapide?"
BOX_BREAK

"J'ai peut-être la trogne de\n"
"travers mais... Je fonce comme \n"
"une flèche! On fait la course?"
)
)

DEFINE_MESSAGE(0x5042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "わたしのコッコ、\n"
SHIFT(39) "満足させてやってネ。"
),
MSG(
"Please make my Cucco happy!\n"
"OK?"
),
MSG(
"Bitte sorge gut für Kiki!\n"
"Okay?"
),
MSG(
"Sois gentil avec ma cocotte!\n"
"D'accord?"
)
)

DEFINE_MESSAGE(0x5043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "あら、コッコも　満足そう！\n"
"かなりのねぼすけ　起こしたでしょ。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "アンタ、いい飼い主に　なれるわ。\n"
SHIFT(39) "アンタさえよければ、\n"
SHIFT(18) "めずらしいコッコ　あげるヨ。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) COLOR(RED) "コジロー" COLOR(DEFAULT) "っていう、アタシの兄キの\n"
SHIFT(3) "飼いコッコでね、ブルーのボディが\n"
SHIFT(6) "チャームポイントで、カワイイの！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "兄キが　いなくなってから\n"
SHIFT(39) "コジローも　めっきり\n"
SHIFT(33) "鳴かなくなっちゃった。" TEXTID(0x5044)
),
MSG(
UNSKIPPABLE "Oh, your Cucco looks pretty \n"
"happy! He must have awakened an\n"
"extremely lazy guy!"
BOX_BREAK

UNSKIPPABLE "You're a good Cucco Keeper!\n"
"I'll give you a rare, valuable\n"
"Cucco, if you're interested..."
BOX_BREAK

UNSKIPPABLE "Its name is " COLOR(RED) "Cojiro" COLOR(DEFAULT) "," COLOR(RED) " " COLOR(DEFAULT) "and it used to\n"
"be my brother's Cucco. Its\n"
"blue body is quite charming.\n"
"It's so cute!"
BOX_BREAK

UNSKIPPABLE "Since my brother has gone, \n"
"it's strange, but Cojiro has \n"
"stopped crowing." TEXTID(0x5044)
),
MSG(
UNSKIPPABLE "Oh, Kiki sieht ja sehr gesund und\n"
"fröhlich aus. Es muß eine arge\n"
"Schlafmütze geweckt haben!"
BOX_BREAK

UNSKIPPABLE "Das hast Du gut gemacht!\n"
"Ich werde Dir ein sehr seltenes\n"
"Hühnchen mitgeben, wenn Du willst."
BOX_BREAK

UNSKIPPABLE "Ich nenne es " COLOR(RED) "Henni" COLOR(DEFAULT) ", es hat einmal\n"
"meinem Bruder gehört. Die blauen \n"
"Federn sehen sehr schön aus,\n"
"nicht wahr? Es ist sooooo süß!"
BOX_BREAK

UNSKIPPABLE "Seit mein Bruder verschwunden ist,\n"
"gackert Henni gar nicht mehr!" TEXTID(0x5044)
),
MSG(
UNSKIPPABLE "Oh! Ta cocotte est en pleine \n"
"forme! Tu as sûrement réveillé\n"
"quelqu'un de très paresseux!"
BOX_BREAK

UNSKIPPABLE "Tu aimes les cocottes à la folie!\n"
"Je vais te donner une cocotte \n"
"très rare..."
BOX_BREAK

UNSKIPPABLE "Son nom est " COLOR(RED) "P'tit Poulet" COLOR(DEFAULT) "!\n"
"Mon frère s'en occupait...\n"
"Ses plumes bleues sont si douces!"
BOX_BREAK

UNSKIPPABLE "Depuis le départ de mon frère,\n"
"P'tit Poulet n'a pas chanté une \n"
"seule fois...." TEXTID(0x5044)
)
)

DEFINE_MESSAGE(0x5044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
COLOR(RED) "コジロー" COLOR(DEFAULT) "もらってくれる？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
),
MSG(
"Do you want to keep " COLOR(RED) "Cojiro" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(
"Möchtest Du " COLOR(RED) "Henni" COLOR(DEFAULT) " behalten?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
),
MSG(
"Veux-tu garder " COLOR(RED) "P'tit Poulet" COLOR(DEFAULT) "?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x5045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "よっぽど　そのコッコが\n"
SHIFT(45) "気に入ったんだね。\n"
SHIFT(15) "いいよ、しばらく　持ってても。" EVENT
),
MSG(
"It looks as if you really like that\n"
"other Cucco. OK, you can keep it\n"
"for a while." EVENT
),
MSG(
"Also magst Du Kiki doch lieber.\n"
"Okay, dann behalte sie noch für\n"
"eine Weile!" EVENT
),
MSG(
"Tu es amoureux de ta cocotte!\n"
"C'est génial! Garde-la encore un \n"
"peu et reviens me voir quand le\n"
"P'tit Poulet t'intéresse..." EVENT
)
)

DEFINE_MESSAGE(0x5046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(27) "魔法使いの　バアちゃんも\n"
SHIFT(9) "ウラで　クスリ屋　やってるんだ。\n"
SHIFT(3) "カウンターの　左手から　行けるよ。" EVENT
),
MSG(
"An old witch runs the Potion Shop\n"
"behind this one. You can get to \n"
"that shop through the door to the\n"
"left of the counter." EVENT
),
MSG(
"Eine alte Vettel betreibt den\n"
"Hexenladen hinter diesem Shop.\n"
"Nimm die Tür links neben der\n"
"Theke, wenn Du hinein willst!" EVENT
),
MSG(
"Une vieille bique a ouvert une\n"
"boutique derrière celle-ci.\n"
"Va à gauche du comptoir pour y\n"
"accéder." EVENT
)
)

DEFINE_MESSAGE(0x5047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "兄キも　きっと…\n"
SHIFT(27) "さびしかったんだよ…ね。"
),
MSG(
"My brother must have been very \n"
"lonely..."
),
MSG(
"Mein Bruder muß sehr einsam\n"
"gewesen sein..."
),
MSG(
"Mon frère devait se sentir bien\n"
"seul..."
)
)

DEFINE_MESSAGE(0x5048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "妖精のすむ　" COLOR(ADJUSTABLE) "迷いの森" COLOR(DEFAULT) "は、\n"
SHIFT(21) "あやしげなニオイが　かおる\n"
SHIFT(45) "神秘の地と　きく…"
BOX_BREAK

SHIFT(27) "そんな　あやしげなモノで\n"
SHIFT(9) "クスリを　こさえてみたいのぉ…"
BOX_BREAK

SHIFT(15) "アタシゃ　もう　目はキかんが、\n"
SHIFT(9) "鼻はキクでなぁ…　ヒッヒッヒ…"
),
MSG(
"I heard that the " COLOR(ADJUSTABLE) "Lost Woods" COLOR(DEFAULT) ", \n"
"where fairies live, is a strange\n"
"place with many mysterious smells."
BOX_BREAK

"I wish I could just once make \n"
"medicine with some of the strange\n"
"things I might find there..."
BOX_BREAK

"I may not be able to see very \n"
"well anymore, but my nose still \n"
"works fine!  Hehehe!"
),
MSG(
"Ich habe gehört, daß die\n"
COLOR(ADJUSTABLE) "Verlorenen Wälder" COLOR(DEFAULT) " ein mysteriöser\n"
"Ort mit vielen, noch seltsameren\n"
"Gewächsen sind."
BOX_BREAK

"Ich würde gern mal eine Medizin\n"
"mit einem der seltsamen Gewächse\n"
"zusammenbrauen, die es dort gibt."
BOX_BREAK

"Ich sehe vielleicht nicht mehr so\n"
"gut, aber meine Nase ist noch\n"
"sehr fein! Hihihi!"
),
MSG(
"L'on dit souvent que de par les\n"
COLOR(ADJUSTABLE) "Bois Perdus" COLOR(DEFAULT) ", d'étranges senteurs \n"
"vous titillent les naseaux...\n"
"Gniii gniii gniii..."
BOX_BREAK

"Il me plairait tant de cueillir \n"
"maintes et diverses choses en un \n"
"tel lieu... Gniii gniii gniiii!"
BOX_BREAK

"Mes yeux ne sont plus que l'ombre\n"
"d'eux-mêmes mais mes saintes \n"
"narines sont si fines...C'est fou! \n"
"Gniii gniii gniii!"
)
)

DEFINE_MESSAGE(0x5049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "クン…　クン…　クン…"
BOX_BREAK

SHIFT(21) "この　あやしげなニオイは…\n"
SHIFT(15) "アンタ…　なんか　もってるね？"
),
MSG(
"Sniff sniff sniff..."
BOX_BREAK

"What a mysterious smell..."
BOX_BREAK

"You must have something!"
),
MSG(
"Schnüffel..."
BOX_BREAK

"Welch ein seltsamer Duft..."
BOX_BREAK

"Du mußt etwas gefunden haben!"
),
MSG(
"Sniff sniff sniff..."
BOX_BREAK

"Dieu! Quelle étrange senteur..."
BOX_BREAK

"Qu'as-tu dans ta besace?"
)
)

DEFINE_MESSAGE(0x504A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "あのバカ…　森に入ったのかい…\n"
SHIFT(51) TEXT_SPEED(1) "・・・・・" TEXT_SPEED(0) "　そうかい。" TEXTID(0x504B)
),
MSG(
"That bum! He had to go into the \n"
"forest...\n"
TEXT_SPEED(1) "....." TEXT_SPEED(0) "I see." TEXTID(0x504B)
),
MSG(
"Dieser Taugenichts! \n"
"Er mußte unbedingt in den Wald\n"
"gehen...\n"
TEXT_SPEED(1) "Hmmm..." TEXT_SPEED(0) " Ich verstehe." TEXTID(0x504B)
),
MSG(
"Jeune fou! Perdu dans la forêt...\n"
TEXT_SPEED(1) "....." TEXT_SPEED(0) "Je vois." TEXTID(0x504B)
)
)

DEFINE_MESSAGE(0x504B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"さあ、そいつを　よこしな。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
),
MSG(
"Hey, give it to me now!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(
"Hey, gib das sofort her!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
),
MSG(
"Remets-le moi prestement!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x504C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "…かなしいねえ。\n"
SHIFT(24) "ちょっとだけなのにねえ…"
),
MSG(
"How sad... I just need a little..."
),
MSG(
"Wie schade... Ich brauche nur\n"
"ein bißchen..."
),
MSG(
"Dommage...Gniiii..."
)
)

DEFINE_MESSAGE(0x504D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(3) "あのバカに　会ったら、渡しとくれ。\n"
SHIFT(39) "やくそくの万能薬だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "もっとも…\n"
SHIFT(45) "コレが　効くのは…\n"
SHIFT(42) "人間だけ…だがね…" EVENT
),
MSG(
UNSKIPPABLE "If you see that fool, give this to \n"
"him. It is the strongest medicine\n"
"I have ever produced."
BOX_BREAK

UNSKIPPABLE "However, this potion will not\n"
"work on a monster..." EVENT
),
MSG(
UNSKIPPABLE "Wenn Du den Dummkopf siehst,\n"
"dann gib ihm dies. Es ist die\n"
"stärkste Medizin, die ich je \n"
"gebraut habe."
BOX_BREAK

UNSKIPPABLE "Aber sie wirkt nicht bei jedem!" EVENT
),
MSG(
UNSKIPPABLE "Va donc tendre à ce jeune insensé\n"
"cette mixture. Gniii niiii!\n"
"Elle est puissante! C'est dingue!"
BOX_BREAK

UNSKIPPABLE "Allez...dehors maintenant! Gnii!" EVENT
)
)

DEFINE_MESSAGE(0x504E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(75) "ぼうや、\n"
SHIFT(39) "クスリが　ほしいなら\n"
SHIFT(48) "入れ物が　いるよ。" EVENT
),
MSG(
"Hey, kid! If you want to carry \n"
"medicine, you need a container to\n"
"put it in!" EVENT
),
MSG(
"Hey, Kleiner! Wenn Du die Medizin\n"
"mitnehmen möchtest, brauchst Du\n"
"etwas zum Aufbewahren!" EVENT
),
MSG(
"Jeune homme! Il te faut un \n"
"récipient pour transporter une\n"
"potion!" EVENT
)
)

DEFINE_MESSAGE(0x504F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "バカにつける　クスリは　ない…\n"
SHIFT(33) "っていうけど…　ねえ…"
),
MSG(
"They say that there is no \n"
"medicine that can cure a fool...\n"
"I guess that's true..."
),
MSG(
"Es heißt, gegen Dummheit ist kein\n"
"Kraut gewachsen...\n"
"Ich glaube, das ist wahr..."
),
MSG(
"L'on dit de par les villes qu'un\n"
"jeune sot dans les bois se perd,\n"
"sa vie n'est plus que poussière.\n"
"C'est complètement fou!"
)
)

DEFINE_MESSAGE(0x5050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "もう　おりられませ〜ん！\n"
SHIFT(51) "だから　こ〜して\n"
SHIFT(18) COLOR(RED) "デスマウンテン" COLOR(DEFAULT) "、見てま〜す！"
),
MSG(
"I can't get down, so all I can do\n"
"is look at " COLOR(RED) "Death Mountain" COLOR(DEFAULT) "."
),
MSG(
"Ich komme nicht mehr vom Dach\n"
"herunter. Aber dafür kann ich\n"
"Tag und Nacht den " COLOR(RED) "Todesberg\n"
COLOR(DEFAULT) "anschauen!"
),
MSG(
"J'suis coincé ici...ça craint.\n"
"Alors je regarde le " COLOR(RED) "Mont du Péril" COLOR(DEFAULT) ".\n"
"Et alors ça...ça craint à mort."
)
)

DEFINE_MESSAGE(0x5051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "もう　おりられませ〜ん！\n"
SHIFT(6) "だから　こ〜して　星、見てま〜す！"
),
MSG(
"I can't get down, so all I can do \n"
"is look at the stars."
),
MSG(
"Ich komm hier nicht mehr runter.\n"
"Ich kann nur noch dauernd die\n"
"Sterne anschauen."
),
MSG(
"J'suis coincé ici...ça craint.\n"
"Alors je regarde les étoiles.\n"
"Et alors ça...ça craint à mort."
)
)

DEFINE_MESSAGE(0x5052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "そこから　見えますか〜？！\n"
SHIFT(12) COLOR(RED) "デスマウンテン" COLOR(DEFAULT) "が　大変で〜す！"
),
MSG(
"Can you see it from there? \n"
"Something is happening on " COLOR(RED) "Death \n"
"Mountain" COLOR(DEFAULT) "!"
),
MSG(
"Siehst Du das von hier aus? \n"
"Irgendetwas passiert auf dem\n"
COLOR(RED) "Todesberg" COLOR(DEFAULT) "!"
),
MSG(
"T'as vu? Là-haut! \n"
"Il se passe quelque chose sur le\n"
COLOR(RED) "Mont du Péril" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x5053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "そこから　見えますか〜？！\n"
SHIFT(12) COLOR(RED) "デスマウンテン" COLOR(DEFAULT) "が　もとど〜り！"
),
MSG(
"Can you see it from there?\n"
COLOR(RED) "Death Mountain " COLOR(DEFAULT) "is back to normal!"
),
MSG(
"Siehst Du das von hier aus?\n"
"Auf dem " COLOR(RED) "Todesberg " COLOR(DEFAULT) "ist alles\n"
"wieder wie früher!"
),
MSG(
"Tu as remarqué?\n"
"Le " COLOR(RED) "Mont du Péril " COLOR(DEFAULT) "est devenu normal!"
)
)

DEFINE_MESSAGE(0x5054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "もう　おりたくありませ〜ん！\n"
SHIFT(6) "なにが　あっても　デスマウンテン\n"
SHIFT(24) "ここから　見つづけま〜す！"
),
MSG(
"I don't feel like getting down,\n"
"ever! Whatever happens, I'll keep\n"
"watching Death Mountain from \n"
"up here."
),
MSG(
"Eigentlich will ich gar nicht mehr \n"
"von diesem Dach herunter!\n"
"Egal was passiert, ich schaue mir\n"
"lieber den Todesberg an."
),
MSG(
"Je n'ai plus envie de descendre!\n"
"Je ne me lasserai jamais d'admirer\n"
"le Mont du Péril."
)
)

DEFINE_MESSAGE(0x5055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(48) "やあ　よくきたね。\n"
SHIFT(33) "記念に　コレ　あげるよ。"
),
MSG(
UNSKIPPABLE "Hey! Good to see you again! I'll\n"
"give you this as a memento."
),
MSG(
UNSKIPPABLE "Hey! Schön, Dich wiederzusehen!\n"
"Ich gebe Dir dieses\n"
"Erinnerungsstück."
),
MSG(
UNSKIPPABLE "Hé! Comment vas-tu?\n"
"C'est mon jour de bonté...\n"
"Prends donc ceci!"
)
)

DEFINE_MESSAGE(0x5056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "いい景色を　見るコツは\n"
SHIFT(51) COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) "で　切り替えて\n"
SHIFT(33) COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "で　見回す、コレだね。"
),
MSG(
"To get a good view, use " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " and \n"
"look around with " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "."
),
MSG(
"Für einen guten Überblick drückst\n"
"Du einfach " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " und schaust mit\n"
COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " umher."
),
MSG(
"Admire les environs avec " COLOR(YELLOW) "[C-Up]" COLOR(DEFAULT) " et \n"
"utilise ensuite le " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x5057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "おい　ボーズ！\n"
SHIFT(3) "他人サマんちに　勝手に入るなんて\n"
SHIFT(30) "しつけが　なってねーな。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ま、いいや。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "この家の　ウラにいる\n"
SHIFT(30) "ねーちゃんに　会ったか？\n"
SHIFT(15) "あのコも　苦労してんだよな…"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ま、いいや。" TEXTID(0x5058)
),
MSG(
UNSKIPPABLE "Hey! Kid, do you always enter\n"
"other people's houses without \n"
"permission? Didn't your parents \n"
"teach you any manners?"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "Oh well."
BOX_BREAK

UNSKIPPABLE "Did you see a lady behind this \n"
"house? She's going through hard \n"
"times."
BOX_BREAK

UNSKIPPABLE SHIFT(66) "Oh well." TEXTID(0x5058)
),
MSG(
UNSKIPPABLE "Hey! Betrittst Du fremde Häuser\n"
"immer unaufgefordert? Haben Dir \n"
"Deine Eltern keine Manieren\n"
"beigebracht?"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "Na, egal..."
BOX_BREAK

UNSKIPPABLE "Hast Du die Frau hinter dem\n"
"Haus gesehen? Sie hat's zur Zeit\n"
"nicht leicht."
BOX_BREAK

UNSKIPPABLE SHIFT(78) "Na, egal..." TEXTID(0x5058)
),
MSG(
UNSKIPPABLE "Dis donc petit! Cela t'arrive \n"
"souvent d'entrer chez les gens \n"
"comme ça? Tu te crois où?\n"
"Chez ta p'tite soeur?"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "Enfin...je passe l'éponge."
BOX_BREAK

UNSKIPPABLE "As-tu rencontré une gentille\n"
"fille derrière cette maison?\n"
"Elle a de gros ennuis."
BOX_BREAK

UNSKIPPABLE SHIFT(45) "Tu m'écoutes, oui?" TEXTID(0x5058)
)
)

DEFINE_MESSAGE(0x5058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) "もし、ニワトリのコトで　なんか\n"
SHIFT(21) "ねーちゃんに　たのまれたら\n"
SHIFT(57) "きいてやれよ。"
),
MSG(
"If that lady asks you about \n"
"chickens, you should listen to her."
),
MSG(
"Sollte die Frau mal etwas über\n"
"Hühner erzählen, hör ihr gut zu."
),
MSG(
"Si cette fille te parle de ses\n"
"cocottes, écoute-la attentivement."
)
)

DEFINE_MESSAGE(0x5059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "こんな夜に　他人サマんちに\n"
SHIFT(21) "遊びにくるなんて　まったく\n"
SHIFT(30) "しつけが　なってねーな。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ま、いいや。" TEXTID(0x505A)
),
MSG(
UNSKIPPABLE "Is visiting other people's houses \n"
"at this late hour your idea of \n"
"fun? You must not have had a \n"
"good upbringing."
BOX_BREAK

UNSKIPPABLE SHIFT(66) "Oh well." TEXTID(0x505A)
),
MSG(
UNSKIPPABLE "Macht es Dir Spaß, fremde Leute\n"
"zu so später Stunde noch zu\n"
"belästigen? Du hast wohl gar\n"
"keine Erziehung genossen."
BOX_BREAK

UNSKIPPABLE SHIFT(78) "Na, egal..." TEXTID(0x505A)
),
MSG(
UNSKIPPABLE "Non mais tu rentres chez les gens\n"
"comme ça, toi? Et en pleine nuit?\n"
"Tu serais pas un p'tit peu malade?\n"
"Tu t'crois où? Au zoo?"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "Enfin...je passe l'éponge." TEXTID(0x505A)
)
)

DEFINE_MESSAGE(0x505A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(3) "このコ、ニワトリの世話してるけど\n"
SHIFT(6) "本当は　トリアレルギーなんだぜ。"
BOX_BREAK

SHIFT(66) "ま、いいか。"
),
MSG(
"That lady takes care of chickens,\n"
"but she is, in fact, allergic to \n"
"them."
BOX_BREAK

SHIFT(66) "Oh well."
),
MSG(
"Die Frau kümmert sich um die\n"
"Hühner, reagiert aber allergisch\n"
"auf Federn."
BOX_BREAK

SHIFT(78) "Na, egal..."
),
MSG(
"La fille derrière chez moi s'occupe\n"
"de cocottes mais elle est allergique\n"
"aux plumes...\n"
"Pfff... J'te jure..."
BOX_BREAK

SHIFT(13) "Enfin...après tout...j'm'en fiche."
)
)

DEFINE_MESSAGE(0x505B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "ニイちゃん、大きなナリして\n"
SHIFT(3) "他人サマんちに　勝手に入るなんて\n"
SHIFT(42) "親の顔が　見てーよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ま、いいや。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "ここ　オレんちじゃ　ないしな…\n"
SHIFT(12) "この家は　" COLOR(RED) "インパ様" COLOR(DEFAULT) "の家なんだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "インパ様は　化け物封じに\n"
SHIFT(36) COLOR(RED) "墓地" COLOR(DEFAULT) "へ　行かれたんだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "ガノンドロフが　あらわれて以来、\n"
SHIFT(12) "化け物が　のさばってるからな。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "この村だけが　平和なのは\n"
SHIFT(6) "インパ様が　いらっしゃるからだ。\n"
SHIFT(24) "ニイちゃん、おぼえとけよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ま、いいか。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "そーいえば、インパ様…\n"
SHIFT(18) "帰っていらっしゃらないな…\n"
SHIFT(33) "なにか　あったのかな…" TEXTID(0x505C)
),
MSG(
UNSKIPPABLE "Hey! Young " AGE_LAD "! A grown boy\n"
"like you entering a person's house\n"
"without permission?! I want to\n"
"talk to your parents!"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "Oh well."
BOX_BREAK

UNSKIPPABLE "This isn't my house anyway.\n"
"This is the " COLOR(RED) "great Impa's" COLOR(DEFAULT) " house!"
BOX_BREAK

UNSKIPPABLE "The great Impa has gone to the\n"
COLOR(RED) "graveyard " COLOR(DEFAULT) "to seal up the \n"
"humongous creature there."
BOX_BREAK

UNSKIPPABLE "Since Ganondorf appeared, many \n"
"monsters have been sighted \n"
"around here."
BOX_BREAK

UNSKIPPABLE "Only the great Impa has kept \n"
"peace in our village. You have to\n"
"remember that, young " AGE_LAD "!"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "Oh well."
BOX_BREAK

UNSKIPPABLE "Speaking of the great Impa, she\n"
"hasn't come back yet. I wonder \n"
"what happened to her?" TEXTID(0x505C)
),
MSG(
UNSKIPPABLE "Hey! Junge! Du bist fast\n"
"erwachsen und betrittst ein\n"
"fremdes Haus ohne Erlaubnis?!\n"
"Ich will mit Deinen Eltern reden!"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "Na, egal..."
BOX_BREAK

UNSKIPPABLE "Das hier ist sowieso nicht mein\n"
"Haus. Es ist das Haus\n"
"der " COLOR(RED) "mächtigen Impa" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Die mächtige Impa ging zum\n"
COLOR(RED) "Friedhof" COLOR(DEFAULT) ", um eine widerliche\n"
"Kreatur zu bezwingen."
BOX_BREAK

UNSKIPPABLE "Seit Ganondorf aufgetaucht ist,\n"
"wimmelt es nämlich von\n"
"ekligen Kreaturen!"
BOX_BREAK

UNSKIPPABLE "Nur die mächtige Impa hat für\n"
"Frieden in unserem Dorf sorgen\n"
"können. Merk Dir das gut, mein \n"
"Junge!"
BOX_BREAK

UNSKIPPABLE SHIFT(80) "Nun gut."
BOX_BREAK

UNSKIPPABLE "Apropos Impa: Sie ist noch immer \n"
"nicht zurück. Ich frage mich, was\n"
"da passiert ist!" TEXTID(0x505C)
),
MSG(
UNSKIPPABLE "Dites donc jeune homme! \n"
"Cela vous prend souvent d'entrer\n"
"chez les autres comme ça?\n"
"Vous vous croyez dans une gare?"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "Enfin...je passe l'éponge."
BOX_BREAK

UNSKIPPABLE "Ce n'est même pas chez moi ici.\n"
"C'est la maison de la " COLOR(RED) "noble Impa" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Impa est allée au " COLOR(RED) "cimetière" COLOR(DEFAULT) " pour y\n"
"enfermer une sale bête."
BOX_BREAK

UNSKIPPABLE "Depuis la venue de Ganondorf, de\n"
"nombreux monstres sont apparus \n"
"dans les environs."
BOX_BREAK

UNSKIPPABLE "Seule la grande Impa a su \n"
"préserver la paix dans notre \n"
"village. Ne l'oubliez jamais!"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "Enfin...après tout..."
BOX_BREAK

UNSKIPPABLE "Au fait! Impa n'est toujours pas\n"
"revenue du cimetière! Lui est-il\n"
"arrivé malheur?" TEXTID(0x505C)
)
)

DEFINE_MESSAGE(0x505C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) "この村の　うらにある　墓地にゃ\n"
SHIFT(3) COLOR(RED) "墓守りの幽霊" COLOR(DEFAULT) "が　出るって話だし…"
BOX_BREAK

SHIFT(60) "ま、いいけど。"
),
MSG(
"I heard that the " COLOR(RED) "ghost of the\n"
"gravekeeper " COLOR(DEFAULT) "often appears in the \n"
"graveyard behind this village..."
BOX_BREAK

SHIFT(52) "But, no big deal."
),
MSG(
"Ich habe gehört, daß der " COLOR(RED) "Geist\n"
"des Totengräbers" COLOR(DEFAULT) " öfters noch\n"
"auf dem Friedhof hinter dem Dorf\n"
"herumspukt..."
BOX_BREAK

SHIFT(20) "Aber das ist nicht so wichtig."
),
MSG(
"Il paraît que le " COLOR(RED) "spectre du \n"
"fossoyeur " COLOR(DEFAULT) "se balade souvent dans\n"
"le cimetière, la nuit tombée..."
BOX_BREAK

SHIFT(31) "Enfin...moi j'y crois pas."
)
)

DEFINE_MESSAGE(0x505D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(9) "ぼーや、この村は　はじめてかい？"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "この村はね、" COLOR(RED) "インパ様" COLOR(DEFAULT) "って方が\n"
SHIFT(15) "私たち　貧しい者たちのために\n"
SHIFT(9) "開放してくださった村なんだよ。" TEXTID(0x505E)
),
MSG(
UNSKIPPABLE "Hi, boy! Is this the first time\n"
"you've visited this village?"
BOX_BREAK

UNSKIPPABLE "A great woman, " COLOR(RED) "Impa" COLOR(DEFAULT) ", opened up\n"
"this village to us poor folk." TEXTID(0x505E)
),
MSG(
UNSKIPPABLE "Hey, Kleiner! Bist Du zum ersten\n"
"Mal in Kakariko?"
BOX_BREAK

UNSKIPPABLE "Die mächtige " COLOR(RED) "Impa" COLOR(DEFAULT) ", eine großartige\n"
"Frau, hat das Dorf für einfache\n"
"Leute wie uns erbauen lassen." TEXTID(0x505E)
),
MSG(
UNSKIPPABLE "Hé! Petit! C'est la première fois\n"
"que tu visites ce village?"
BOX_BREAK

UNSKIPPABLE "Une noble dame, " COLOR(RED) "Impa" COLOR(DEFAULT) ", a créé ce\n"
"village pour nous, pauvres paysans." TEXTID(0x505E)
)
)

DEFINE_MESSAGE(0x505E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "まあ　ゆっくりしていきな。\n"
SHIFT(36) "料理は　まだだけどね。"
),
MSG(
"Well, make yourself at home.\n"
"The food isn't ready yet, though."
),
MSG(
"Fühle Dich ganz wie zu Hause.\n"
"Das Essen ist allerdings\n"
"noch nicht fertig!"
),
MSG(
"Fais comme chez toi..."
)
)

DEFINE_MESSAGE(0x505F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(6) "インパ様は　いらっしゃらないよ。\n"
SHIFT(3) "なんだい、なにか　あったのかい？"
),
MSG(
"The great Impa is not here. Did\n"
"something happen to her?"
),
MSG(
"Die mächtige Impa ist nicht hier.\n"
"Ob etwas passiert ist?"
),
MSG(
"La noble Impa n'est pas ici. \n"
"Lui est-il arrivé quelque chose?"
)
)

DEFINE_MESSAGE(0x5060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "人間、だれにだって\n"
SHIFT(12) "つらい過去の　ひとつや　ふたつ\n"
SHIFT(63) "あるもんさ。" TEXTID(0x5061)
),
MSG(
UNSKIPPABLE "All people have hardships in \n"
"their past that they would\n"
"rather no one found out about." TEXTID(0x5061)
),
MSG(
UNSKIPPABLE "Wir alle haben Schweres\n"
"durchgemacht. Aber wir möchten\n"
"das lieber für uns behalten." TEXTID(0x5061)
),
MSG(
UNSKIPPABLE "Les habitants ont tous de \n"
"douloureux souvenirs...\n"
"Enfouis dans leur mémoire." TEXTID(0x5061)
)
)

DEFINE_MESSAGE(0x5061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(51) "あそこで　寝てる\n"
SHIFT(36) "ヒゲのオヤジさんにも\n"
SHIFT(15) "いろいろ　あるんだよ、きっと。"
),
MSG(
"Look at the bearded man sleeping\n"
"over there. I bet even someone\n"
"like him has had his share of\n"
"troubles in the past..."
),
MSG(
"Schau Dir den Bärtigen auf dem\n"
"Bett an. Ich wette, sogar einer\n"
"wie er hat seine Probleme..."
),
MSG(
"Regarde ce gros moustachu...\n"
"Même lui a souffert par le passé..."
)
)

DEFINE_MESSAGE(0x5062, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) "あの　オヤジさんなら、\n"
SHIFT(42) "牧場に　かえったよ。\n"
SHIFT(45) "よろこんでたねぇ。"
),
MSG(
"That bearded guy went back to \n"
"the ranch. He looked so happy!"
),
MSG(
"Der Bärtige ist wieder zur Farm\n"
"zurück.\n"
"Er sah richtig glücklich aus!"
),
MSG(
"Le gros moustachu est parti au \n"
"Ranch. Il était si joyeux!"
)
)

DEFINE_MESSAGE(0x5063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(36) "ピン　ポン　パン　ポン！\n"
SHIFT(30) "わたしは　村の時計兵士。\n"
SHIFT(15) "ただいま　" TIME "　です。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "やあ、少年。\n"
"この村はな、ゼルダ姫の　乳母である\n"
SHIFT(12) COLOR(RED) "インパ" COLOR(DEFAULT) "どのが　開放されたのだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "まだまだ　住人は　少ないが、\n"
SHIFT(3) "やがては　ハイラル城下町のように\n"
SHIFT(30) "にぎやかに　なるぞ。　うん。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "村の　" COLOR(RED) "北側の階段" COLOR(DEFAULT) "を　登れば、\n"
SHIFT(6) "デスマウンテンヘ　行く道がある。\n"
SHIFT(21) "ま、王の許可が　いるけどな。"
),
MSG(
UNSKIPPABLE "Ding dong, ding dong!\n"
"I'm a clock soldier of Kakariko!\n"
"The current time is: " TIME "."
BOX_BREAK

UNSKIPPABLE "Hello there, son.\n"
"Zelda's attendant, the great " COLOR(RED) "Impa" COLOR(DEFAULT) ",\n"
"opened this village to the common\n"
"people."
BOX_BREAK

UNSKIPPABLE "We have only a small population \n"
"now, but someday this place will \n"
"be as lively as Hyrule Castle \n"
"Town! Oh, yes! It will!"
BOX_BREAK

UNSKIPPABLE "Climb up the " COLOR(RED) "stairs at the north\n"
COLOR(DEFAULT) "end of the village to find the trail\n"
"that leads up Death Mountain."
BOX_BREAK

UNSKIPPABLE "But you need the King's permission\n"
"to actually go up the mountain."
),
MSG(
UNSKIPPABLE "Es ist jetzt " TIME " Uhr!\n"
"Die richtige Zeit, um Dir etwas\n"
"über das Dorf zu erzählen!"
BOX_BREAK

UNSKIPPABLE "Zeldas Dienerin, die mächtige\n"
COLOR(RED) "Impa" COLOR(DEFAULT) ", erbaute dieses Dorf für\n"
"einfache Leute wie uns."
BOX_BREAK

UNSKIPPABLE "Noch wohnen hier wenige,\n"
"aber eines Tages wird es genau\n"
"so lebhaft sein wie in Hyrule!\n"
"Oh ja, das wird es!"
BOX_BREAK

UNSKIPPABLE "Steige die " COLOR(RED) "Stufen im Norden \n"
"des Dorfes" COLOR(DEFAULT) " hinauf.\n"
"Dort gelangst Du zu dem Paß,\n"
"der zum Todesberg führt."
BOX_BREAK

UNSKIPPABLE "Aber Du brauchst des Königs\n"
"Erlaubnis, um diesen Weg nehmen\n"
"zu können."
),
MSG(
UNSKIPPABLE "Ding dong, ding dong!\n"
"Je suis le soldat-pendule!\n"
"Au quatrième top il sera: " TIME "."
BOX_BREAK

UNSKIPPABLE "Bonjour mon ami!\n"
"La nourrice de Zelda, " COLOR(RED) "Impa" COLOR(DEFAULT) ", a  \n"
"fondé ce village."
BOX_BREAK

UNSKIPPABLE "Nous ne sommes que très peu\n"
"d'habitants pour l'instant mais\n"
"un jour ce village sera aussi\n"
"important que le bourg d'Hyrule!"
BOX_BREAK

UNSKIPPABLE "Les " COLOR(RED) "escaliers au nord" COLOR(DEFAULT) " du village\n"
"mènent au Mont du Péril."
BOX_BREAK

UNSKIPPABLE "Mais ce chemin n'est ouvert que \n"
"sur présentation d'un écrit royal."
)
)

DEFINE_MESSAGE(0x5064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ピン　ポン　パン　ポン！\n"
SHIFT(15) "ただいま　" TIME "　です。"
),
MSG(
"Ding dong, ding dong!\n"
"The current time is: " TIME "."
),
MSG(
"Es ist jetzt genau " TIME " Uhr."
),
MSG(
"Ding dong, ding dong!\n"
"Au quatrième top il sera: " TIME "."
)
)

DEFINE_MESSAGE(0x5065, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ピン　ポン　パン　ポン！\n"
SHIFT(15) "ただいま　" TIME "　です。\n"
SHIFT(21) "城で　なにか　あったのかい？"
),
MSG(
"Ding dong, ding dong!\n"
"The current time is: " TIME ".\n"
"By the way, do you know what \n"
"happened in the castle?"
),
MSG(
"Es ist jetzt " TIME " Uhr.\n"
"Ach, übrigens: Weißt Du, was im\n"
"Schloß passiert ist?"
),
MSG(
"Ding dong, ding dong!\n"
"Au quatrième top il sera: " TIME ".\n"
"Au fait... \n"
"Que s'est-il passé au château?"
)
)

DEFINE_MESSAGE(0x5066, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(30) "少年よ、こんな　夜ふけに\n"
SHIFT(30) "なにを　しているのかな？"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "そうか　キモだめしだね？\n"
SHIFT(15) "お墓へ行きたい…　そうだろ？"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "あ、そうだ！　仕事　仕事！" TEXTID(0x5067)
),
MSG(
UNSKIPPABLE "Hey, son, what are you doing \n"
"wandering around this late at \n"
"night?"
BOX_BREAK

UNSKIPPABLE "Oh, I get it. You're testing your\n"
"courage, aren't you? You must \n"
"want to go to...a graveyard!"
BOX_BREAK

UNSKIPPABLE "Wait a minute! What am I doing\n"
"talking to a kid? I've got work to\n"
"do! Work! Work!" TEXTID(0x5067)
),
MSG(
UNSKIPPABLE "Hey, Junge, was treibst Du Dich\n"
"hier mitten in der Nacht herum?"
BOX_BREAK

UNSKIPPABLE "Ah, ich verstehe. Du willst Deinen\n"
"Mut testen! Du willst bestimmt...\n"
"auf den Friedhof!"
BOX_BREAK

UNSKIPPABLE "Moment mal! Was rede ich\n"
"eigentlich mit so einem\n"
"Milchbubi? Ich muß Wache\n"
"stehen und meinen Mund halten!" TEXTID(0x5067)
),
MSG(
UNSKIPPABLE "Hé! L'ami... Que fais-tu dehors\n"
"à une heure pareille?"
BOX_BREAK

UNSKIPPABLE "Oh! Je vois! Tu mets ton courage\n"
"à l'épreuve, hein? Alors pourquoi \n"
"ne pas aller au...cimetière?"
BOX_BREAK

UNSKIPPABLE "Allez, circule!\n"
"J'ai du travail!" TEXTID(0x5067)
)
)

DEFINE_MESSAGE(0x5067, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ピン　ポン　パン　ポン！\n"
SHIFT(15) "ただいま　" TIME "　です。"
BOX_BREAK

SHIFT(24) "東へ　行くと　そこが　" COLOR(RED) "墓地" COLOR(DEFAULT) "。\n"
SHIFT(15) COLOR(BLUE) "王家に伝わる歌" COLOR(DEFAULT) "で　死者の魂を\n"
SHIFT(3) "しずめたという　伝説が　あるんだ。"
),
MSG(
"Ding dong, ding dong!\n"
"The current time is: " TIME "."
BOX_BREAK

"Head east and you'll find a\n"
COLOR(RED) "graveyard" COLOR(DEFAULT) ". Legends say you can \n"
"calm the souls of the dead with\n"
"an " COLOR(BLUE) "old song of the Royal Family" COLOR(DEFAULT) "."
),
MSG(
"Es ist jetzt " TIME " Uhr.\n"
"Genau die richtige Zeit, um\n"
"Gräber zu besuchen!"
BOX_BREAK

"Geh nach Osten zum " COLOR(RED) "Friedhof" COLOR(DEFAULT) ".\n"
"Legenden besagen, man könne die\n"
"ruhelosen Seelen mit einem\n"
COLOR(BLUE) "königlichen Schlaflied" COLOR(DEFAULT) " besänftigen..."
),
MSG(
"Ding dong, ding dong!\n"
"Au quatrième top il sera: " TIME "."
BOX_BREAK

"A l'Est du village tu trouveras le\n"
COLOR(RED) "cimetière" COLOR(DEFAULT) ". On dit souvent qu'une\n"
COLOR(BLUE) "mélodie de la Famille Royale " COLOR(DEFAULT) "a le\n"
"pouvoir d'apaiser les âmes..."
)
)

DEFINE_MESSAGE(0x5068, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "風車小屋に　ヘンなヤツが\n"
SHIFT(39) "住みついたみたいだ。\n"
SHIFT(18) "勇者クンは　もう会ったかい？"
),
MSG(
"There's a strange guy living in the \n"
"Windmill. Have you already met\n"
"him, Mr. Hero?"
),
MSG(
"Ein komischer Typ lebt in der \n"
"Windmühle. Warst Du schon bei\n"
"ihm, großer Held?"
),
MSG(
"Un type louche vit dans le moulin.\n"
"Il chante toute la sainte journée \n"
"et sa voix me tape sur les nerfs..."
)
)

DEFINE_MESSAGE(0x5069, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "オヤジも　オフクロも　ヤなやつだ！\n"
SHIFT(15) "オメエも　きっと　ヤなやつだ！"
),
MSG(
"People are disgusting. \n"
"My own father and mother are\n"
"disgusting.\n"
"You must be disgusting, too!"
),
MSG(
"Menschen sind widerlich. \n"
"Meine Eltern sind widerlich.\n"
"Du bist bestimmt auch widerlich!"
),
MSG(
"Les gens me dégoûtent.\n"
"Mes parents me dégoûtent.\n"
"Ta p'tite tête me dégoûte."
)
)

DEFINE_MESSAGE(0x506A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "あたしたち　一日中\n"
SHIFT(27) "この村で　家　建ててんの。\n"
SHIFT(30) "完成までは　まだ　まだ…"
BOX_BREAK

SHIFT(48) "うちの親方ってば\n"
SHIFT(21) "ひと使い　あらいんだから…"
),
MSG(
"All day long, we are working on \n"
"many construction projects in the\n"
"village. It's going to take awhile\n"
"before everything is done."
BOX_BREAK

"Our boss works us very hard!"
),
MSG(
"Wir arbeiten den ganzen Tag lang\n"
"auf verschiedenen Baustellen hier\n"
"im Dorf. Es dauert wohl noch eine\n"
"Weile, bis alles fertig ist."
BOX_BREAK

"Unser Chef ist ein ziemlicher\n"
"Sklaventreiber!"
),
MSG(
"Toute la journée, nous travaillons\n"
"sur les chantiers... Cela va \n"
"prendre du temps avant que tout \n"
"soit terminé."
BOX_BREAK

"Notre chef nous fait travailler \n"
"dur!"
)
)

DEFINE_MESSAGE(0x506B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "ハラ　へった〜っ！！\n"
SHIFT(6) "はやく　ゴハン　たべましょ〜っ！！"
),
MSG(
"I'm starving!\n"
"Let's eat dinner, right now!"
),
MSG(
"Ich komme um vor Hunger!\n"
"Laß uns sofort etwas essen!"
),
MSG(
"J'ai faim! On passe à table tout \n"
"de suite? Et après ça une bonne \n"
"sieste et...hop! Au lit!"
)
)

DEFINE_MESSAGE(0x506C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "仕事は　半人前のくせに\n"
SHIFT(18) "メシだけは　一人前以上かい！"
BOX_BREAK

SHIFT(27) "この　すっとこ　どっこい！"
),
MSG(
"Those guys each do the work of \n"
"half a man, but they still want a\n"
"full man's portion!\n"
"They're lazy slackers, I tell you!"
),
MSG(
"Jeder von ihnen arbeitet nur halb\n"
"so viel, wie er sollte. Aber sie\n"
"wollen immer eine\n"
"doppelte Portion essen!"
),
MSG(
"Vous n'êtes tous que de gros\n"
"flemmards! Le travail n'avance pas\n"
"et vous ne pensez qu'à bouffer!\n"
"JE VOUS HAIS!"
)
)

DEFINE_MESSAGE(0x506D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ポウ　　　　３０ルピー\n"
COLOR(DEFAULT) "ビンにつめこんだ　オバケの魂。\n"
"ものずきな人に　売りつけよう。" QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Poe   30 Rupees\n"
COLOR(DEFAULT) "This is a bottled ghost spirit. \n"
"Sell it to someone who is crazy \n"
"about weird things like this." QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Irrlicht   30 Rubine\n"
COLOR(DEFAULT) "Dies ist ein Geist in einer Flasche. \n"
"Verkaufe ihn an jemanden, der\n"
"solch verrückte Dinge mag." QUICKTEXT_DISABLE PERSISTENT
),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Esprit   30 Rubis\n"
COLOR(DEFAULT) "Spectre en bouteille. \n"
"A vendre à un passionné." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x506E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE "ポウ　　　　３０ルピー" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "かう\n"
    "やめとく" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Poe  30 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Irrlicht  30 Rubine" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Kaufen!\n"
    "Nicht kaufen!" COLOR(DEFAULT)
),
MSG(
QUICKTEXT_ENABLE "Esprit  30 Rubis" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Acheter\n"
    "Ne pas acheter" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x5070, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "コッコが　にげちゃったの！\n"
SHIFT(9) "あと６羽よ、お願い　つれてきて！"
),
MSG(
"My Cuccos have run away!\n"
"Please catch six more!"
),
MSG(
"Meine Hühner sind davongerannt!\n"
"Bitte fange noch sechs weitere!"
),
MSG(
"Mes cocottes sont perdues!\n"
"Dépose six cocottes dans l'enclos!"
)
)

DEFINE_MESSAGE(0x5071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(24) COLOR(LIGHTBLUE) NAME "！\n"
COLOR(DEFAULT) SHIFT(24) COLOR(LIGHTBLUE) "この船　落ちちゃうよ！！\n"
COLOR(DEFAULT) SHIFT(24) COLOR(LIGHTBLUE) "はやく　どっかに　おりて！！" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
),
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) NAME "!\n"
"This ship is sinking!\n"
"Abandon ship!\n"
"Get onto a safe platform!" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
),
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) NAME "!\n"
"Das Schiff sinkt!\n"
"Spring ab!\n"
"Rette Dich auf festen Boden!" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
),
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) NAME "!\n"
"Ce navire sombre!\n"
"Vite! Mets-toi à l'abri!!!" COLOR(DEFAULT) QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x5072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "コッコが　にげちゃったの！\n"
SHIFT(9) "あと５羽よ、お願い　つれてきて！"
),
MSG(
"I'm still missing some Cuccos!\n"
"Please round up five more!"
),
MSG(
"Ich habe noch nicht alle Hühner!\n"
"Bitte fange noch fünf ein!"
),
MSG(
"Il me manque encore des cocottes!\n"
"Dépose encore 5 cocottes!"
)
)

DEFINE_MESSAGE(0x5073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(18) "イタズラしちゃ　ダメでしゅ！\n"
SHIFT(48) "ダンペイしゃんに\n"
SHIFT(27) "いいつけちゃうでしゅよ！" QUICKTEXT_DISABLE FADE(60)
),
MSG(
QUICKTEXT_ENABLE "Don't cause trouble!\n"
"I'll tell Dampé!" QUICKTEXT_DISABLE FADE(60)
),
MSG(
QUICKTEXT_ENABLE "Mach bloß keinen Ärger!\n"
"Ich sag's Boris!" QUICKTEXT_DISABLE FADE(60)
),
MSG(
QUICKTEXT_ENABLE "Sois sage ou j'le dirai à Igor!" QUICKTEXT_DISABLE FADE(60)
)
)

DEFINE_MESSAGE(0x5074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) "見てよ　ぼうや！\n"
SHIFT(12) "アタイの　白魚のような　ユビが\n"
SHIFT(24) "もう　ボロ　ボロ…　グスッ！"
),
MSG(
"Look at this, kid! My beautiful,\n"
"smooth hands are all worn out \n"
"from working. Sob sob..."
),
MSG(
"Schau Dir das an, Kleiner!\n"
"Meine schönen, zarten Hände sind\n"
"von der Arbeit ganz rissig!\n"
"Schnief..."
),
MSG(
"Regarde-moi ça! Je me suis cassé\n"
"un ongle en travaillant.\n"
"C'est super moche!\n"
"Pffff...."
)
)

DEFINE_MESSAGE(0x5075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "ラクして　もうかる仕事って…\n"
SHIFT(15) "盗賊くらいしか…ないかしら？\n"
SHIFT(81) "ダメ？"
),
MSG(
"A job where you can make a lot\n"
"of money without much effort...\n"
"The only thing I can think of is\n"
"thievery... Is that a bad idea?"
),
MSG(
"Ein Job, bei dem Du viel Geld für\n"
"wenig Arbeit bekommst... Da fällt\n"
"mir nur Diebstahl ein... Du findest,\n"
"das wäre keine gute Idee?"
),
MSG(
"Travailler...moi j'aime pas.\n"
"Je veux devenir un voleur. \n"
"Un grand voleur! Avec des bottes\n"
"rouges et une cape! Cool, non?"
)
)

DEFINE_MESSAGE(0x5076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "ウチの親方の家って\n"
SHIFT(12) "この家のうらに　あるらしいの。\n"
SHIFT(24) "親方は　ダマってるけどね。"
),
MSG(
"I heard that our boss's house is\n"
"just behind this house. He doesn't\n"
"want any of us to know, though."
),
MSG(
"Ich habe gehört, das Haus\n"
"unseres Chefs liegt direkt hinter\n"
"diesem. Aber er will nicht, daß wir\n"
"es wissen."
),
MSG(
"Il paraît que la maison du chef \n"
"est derrière celle-ci...\n"
"Et si on la brûlait? Hein?"
)
)

DEFINE_MESSAGE(0x5077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "この先の　墓場に　すんでる\n"
SHIFT(30) COLOR(RED) "ダンペイさん" COLOR(DEFAULT) "に　会った？"
BOX_BREAK

SHIFT(24) "今は　" TIME "　だから\n"
SHIFT(9) "小屋の中で　寝てるわね、きっと。"
BOX_BREAK

SHIFT(51) "平原でも　行って\n"
SHIFT(24) "時間つぶしてきたら　どう？"
),
MSG(
"Have you seen " COLOR(RED) "Mr. Dampé" COLOR(DEFAULT) ", who\n"
"lives in the graveyard up ahead?"
BOX_BREAK

"It's " TIME " right now, so he's\n"
"probably asleep in his hut."
BOX_BREAK

"Why don't you go out onto the \n"
"field and kill some time?"
),
MSG(
"Hast Du " COLOR(RED) "Boris" COLOR(DEFAULT) " gesehen, der auf\n"
"dem Friedhof lebt?"
BOX_BREAK

"Es ist jetzt " TIME " Uhr. Er schläft\n"
"wahrscheinlich in seiner Hütte."
BOX_BREAK

"Warum schlägst Du nicht ein\n"
"bißchen die Zeit tot, bis es\n"
"Abend wird?"
),
MSG(
"As-tu déjà rencontré " COLOR(RED) "Igor" COLOR(DEFAULT) "?\n"
"Il vit dans le cimetière du village."
BOX_BREAK

"Il est " TIME "... Il doit dormir dans \n"
"sa cabane à cette heure-ci."
BOX_BREAK

"Pourquoi ne pas te balader sur\n"
"la Plaine d'Hyrule en attendant?"
)
)

DEFINE_MESSAGE(0x5078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) "おナカ　ペコ　ペコ〜ッ！！\n"
SHIFT(48) "ゴハン　まだ〜っ？\n"
SHIFT(21) "もう　" TIME "　よ〜っ！"
),
MSG(
"I'm starving!\n"
"Isn't dinner ready yet?\n"
"It's " TIME " already!"
),
MSG(
"Ich komme um vor Hunger!\n"
"Ist das Essen schon fertig?\n"
"Es ist schon " TIME " Uhr!"
),
MSG(
"J'ai faiiiim !!  !\n"
"On va manger?\n"
"Il est déjà " TIME "!"
)
)

DEFINE_MESSAGE(0x5079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(6) COLOR(RED) "インパ様のおやしき" COLOR(DEFAULT) "は　ここだが、\n"
SHIFT(30) "今は　おいでにはならん。"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "だが　このおやしきは　村人に\n"
SHIFT(18) "開放するよう　いわれている。\n"
SHIFT(27) "だから　出入りは　自由だ。" TEXTID(0x507A)
),
MSG(
UNSKIPPABLE "This used to be the " COLOR(RED) "great \n"
"Impa's house" COLOR(DEFAULT) ", but she doesn't\n"
"live here any longer."
BOX_BREAK

UNSKIPPABLE "It is now open to all \n"
"villagers. You are free to\n"
"go on in." TEXTID(0x507A)
),
MSG(
UNSKIPPABLE "In diesem Haus lebte einst\n"
"die " COLOR(RED) "mächtige Impa" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Es ist nun für alle Dorfbewohner\n"
"geöffnet. Du kannst auch hinein!" TEXTID(0x507A)
),
MSG(
UNSKIPPABLE "Ici vivait autrefois la " COLOR(RED) "noble Impa" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Cette maison est ouverte à tous \n"
"les villageois. \n"
"L'entrée est gratuite." TEXTID(0x507A)
)
)

DEFINE_MESSAGE(0x507A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "この村は　もともと\n"
SHIFT(24) COLOR(BLUE) "シーカー族" COLOR(DEFAULT) "の村だったのを\n"
"インパ様が　我らにくださったのだ。"
),
MSG(
"This village used to be a \n"
COLOR(BLUE) "Shiekah " COLOR(DEFAULT) "village, but the \n"
"great Impa opened it to \n"
"everyone."
),
MSG(
"Dieses Dorf gehörte einst den\n"
COLOR(BLUE) "Shiekah" COLOR(DEFAULT) ", aber jetzt kann jeder\n"
"hier leben."
),
MSG(
"Ce village fut jadis un repaire\n"
COLOR(BLUE) "Sheikah " COLOR(DEFAULT) "mais la noble Impa en fit\n"
"une terre d'accueil."
)
)

DEFINE_MESSAGE(0x507B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "オレ、ほんとに　見たんだよ！"
BOX_BREAK

SHIFT(33) "とっくに　死んだはずの\n"
SHIFT(9) "墓守りダンペイが　" COLOR(RED) "お宝" COLOR(DEFAULT) "を持って\n"
SHIFT(3) "自分の墓の中に　消えてくのをサ…"
),
MSG(
"I tell you, I saw him!"
BOX_BREAK

"I saw the ghostly figure of Dampé\n"
"the gravekeeper sinking into\n"
"his grave. It looked like he was\n"
"holding some kind of " COLOR(RED) "treasure" COLOR(DEFAULT) "!"
),
MSG(
"Ich schwöre,\n"
"ich habe ihn gesehen!"
BOX_BREAK

"Ich habe den Geist von Boris, dem\n"
"Totengräber, im Grab\n"
"verschwinden sehen! Man sagt, er\n"
"lagere viel " COLOR(RED) "Wertvolles" COLOR(DEFAULT) " dort!"
),
MSG(
"Mais j'en suis sûr! J'l'ai vu!"
BOX_BREAK

"J'ai vu le fantôme d'Igor entrer \n"
"dans sa tombe! Il portait même un\n"
COLOR(RED) "trésor" COLOR(DEFAULT) "... J'te l'jure!"
)
)

DEFINE_MESSAGE(0x507C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "コイツだよ！　コイツ！\n"
SHIFT(21) "コイツが　墓場のほこらから\n"
SHIFT(12) "光につつまれて　現われたんだ！"
BOX_BREAK

SHIFT(51) "ホントだってば！"
),
MSG(
"There he is! It's him!\n"
"He's the one who dropped from\n"
"the sky surrounded by a blue\n"
"light!"
BOX_BREAK

"Now do you believe me?"
),
MSG(
"Da ist er! Er ist es!\n"
"Er fiel vom Himmel, umgeben\n"
"von blauem Feuer!"
BOX_BREAK

"Glaubst Du mir?"
),
MSG(
"C'est lui! C'est lui!\n"
"Il est tombé du ciel entouré d'une\n"
"lumière bleue! J'ai tout vu!"
BOX_BREAK

"Tu me crois, hein?"
)
)

DEFINE_MESSAGE(0x507D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "オレの　いうことなんて\n"
"だれも　信用してくれないんだ〜っ！\n"
SHIFT(36) "それも　七年間も〜っ！"
),
MSG(
"Nobody believes what I've been\n"
"telling them all these past \n"
"seven years!"
),
MSG(
"Kein Mensch glaubt mir, was ich in\n"
"den letzten sieben Jahren erzählt\n"
"habe!"
),
MSG(
"Depuis bientôt sept ans, personne \n"
"ne veut croire à mes histoires.\n"
"C'est agaçant à la fin!"
)
)

DEFINE_MESSAGE(0x507E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"もうちょっとで　マル焼けだったよ！\n"
SHIFT(30) "みんなで　消したんだぜ！\n"
SHIFT(30) "うまく　消しただろ〜っ？"
),
MSG(
"The fire almost consumed us all!\n"
"But together, we all were able to\n"
"put out the fire! Pretty good\n"
"work, don't you think?"
),
MSG(
"Das Feuer hätte uns fast\n"
"vernichtet! Aber gemeinsam haben\n"
"wir es gelöscht! Gute Arbeit,\n"
"denkst Du nicht auch?"
),
MSG(
"Le village fut ravagé mais nous \n"
"avons pu maîtriser le feu!\n"
"Beau boulot, hein?"
)
)

DEFINE_MESSAGE(0x507F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "ハッハッハッハッハ〜ッ！"
BOX_BREAK

SHIFT(15) "コイツ、ハイラルの城下町から\n"
SHIFT(15) "逃げてきてから　よりいっそう\n"
SHIFT(18) "オクビョウに　なってやがる！"
),
MSG(
"Wah hah hah hah hah hah!"
BOX_BREAK

"Look at this guy! Ever since\n"
"he escaped from Hyrule Castle\n"
"Town, he's become even more\n"
"timid!"
),
MSG(
"Hahaha!"
BOX_BREAK

"Schau Dir den an! Seit er aus\n"
"dem Schloß entkommen konnte,\n"
"ist er noch ängstlicher!"
),
MSG(
"Wah hah hah hah hah hah!"
BOX_BREAK

"Mate-moi ce type! Depuis son \n"
"évasion du Bourg d'Hyrule, il est\n"
"devenu un méga-froussard!"
)
)

DEFINE_MESSAGE(0x5080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "ハッハッハッハッハ〜ッ！"
BOX_BREAK

SHIFT(15) "コイツ　夢でも　みてたんだぜ！\n"
SHIFT(27) "ハッハッハッハッハ〜ッ！"
),
MSG(
"Wah hah hah hah hah hah!"
BOX_BREAK

"He must have been seeing things!\n"
"Wah hah hah hah hah hah!"
),
MSG(
"Hahaha!"
BOX_BREAK

"Er muß schlimme Sachen gesehen\n"
"haben!\n"
"Hahaha!"
),
MSG(
"Wah hah hah hah hah hah!"
BOX_BREAK

"Ce type a des visions!\n"
"Wah hah hah hah hah hah!"
)
)

DEFINE_MESSAGE(0x5081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(27) "ハッハッハッハッハ〜ッ！\n"
SHIFT(9) "オマエ　ヘンなカッコ　だな〜っ！"
),
MSG(
"Wah hah hah hah hah hah!\n"
"Those are some funny-looking\n"
"clothes, man!"
),
MSG(
"Hahaha!\n"
"Das sind vielleicht komische\n"
"Klamotten, Mann!"
),
MSG(
"Wah hah hah hah hah hah!\n"
"Elles sont chouettes tes fringues!"
)
)

DEFINE_MESSAGE(0x5082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(27) "ハッハッハッハッハ〜ッ！\n"
SHIFT(12) "くるしい時こそ　ハラから笑え！\n"
SHIFT(6) "ウチのオヤジの　モットーなんだ。"
),
MSG(
"Wah hah hah hah hah hah!\n"
"When times are tough, laughter is\n"
"the best medicine!\n"
"That's what my dad always said!"
),
MSG(
"Hahaha!\n"
"Wenn die Zeiten hart sind, ist\n"
"Lachen die beste Medizin!\n"
"Das hat mein Alter immer gesagt!"
),
MSG(
"Wah hah hah hah hah hah!\n"
"Mon truc à moi c'est rigoler!\n"
"Wah hah hah hah hah hah!"
)
)

DEFINE_MESSAGE(0x5083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "どーだーっ！　高いだろーっ！\n"
SHIFT(3) "オレは　人より　高い所に　いないと\n"
SHIFT(27) "気がすまないタチなんだ。"
),
MSG(
"Look at me! I'm on top of the \n"
"world! It really bothers me to see\n"
"anyone at a higher level than I\n"
"am! I have to be on top!"
),
MSG(
"Schau her! Ich bin ganz oben!\n"
"Ich mag es gar nicht, wenn jemand\n"
"höher hinaus will! Ich muß immer\n"
"ganz oben sein!"
),
MSG(
"Ya-ha-ha! Je suis le roi du monde!\n"
"J'adore regarder les gens d'ici!\n"
"Ils sont si petits!"
)
)

DEFINE_MESSAGE(0x5084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "うっかり　寝ると\n"
SHIFT(21) "落っこちちゃうな…　ココ…"
),
MSG(
"If I fall asleep up here, I'll\n"
"surely fall down..."
),
MSG(
"Wenn ich hier oben einschlafe,\n"
"falle ich bestimmt runter..."
),
MSG(
"J'ai peur de m'endormir...\n"
"Je risquerais de tomber!"
)
)

DEFINE_MESSAGE(0x5085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "この村の　井戸の水は\n"
"風車の回転で　くみあげてたらしい。\n"
SHIFT(9) "今は枯れてるがな。　ウォッホン！"
),
MSG(
"The windmill draws water up from \n"
"the depth of the well."
BOX_BREAK

"Now the well is dried up, though.\n"
"Hrrrrm..."
),
MSG(
"Die Windmühle pumpt das Wasser\n"
"aus dem Brunnen nach oben."
BOX_BREAK

"Doch jetzt ist er ausgetrocknet.\n"
"Hmmm..."
),
MSG(
"Le moulin draine l'eau du puits..."
BOX_BREAK

"Mais le puits est à sec depuis un \n"
"bon moment..."
)
)

DEFINE_MESSAGE(0x5086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(48) "ここのオバさんは\n"
SHIFT(30) "本当に　世話好きなんだ。\n"
"昔は　大工の世話もしてたそうだよ。"
),
MSG(
"The lady here is really\n"
"generous. She even took care of\n"
"the carpenters when they were\n"
"here!"
),
MSG(
"Die Frau hier ist wirklich\n"
"großzügig. Sie hat sich sogar um\n"
"die Zimmerleute gekümmert, als \n"
"sie noch hier waren!"
),
MSG(
"La fille du coin est vraiment\n"
"gentille... Elle s'est même occupée\n"
"des ouvriers."
)
)

DEFINE_MESSAGE(0x5087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "むかし…\n"
SHIFT(21) "この村には　真実を見る目を\n"
SHIFT(27) "持つ者が　住んでおった。"
BOX_BREAK

SHIFT(33) "真実を　見きわめるには\n"
SHIFT(15) "心の目を　きたえる他はない…"
BOX_BREAK

SHIFT(57) "だが、その者は\n"
SHIFT(33) "どうやら　特別な方法を\n"
SHIFT(39) "使っておったらしい。"
BOX_BREAK

SHIFT(24) "その者の住んでおった家は\n"
SHIFT(6) "今では　井戸に　なっておるがの…"
),
MSG(
"A long time ago...\n"
"There was a man in this very\n"
"village who had an eye they said\n"
"could see the truth!"
BOX_BREAK

"Now usually, you have to train\n"
"your mind's eye most strenuously\n"
"to actually see the truth..."
BOX_BREAK

"But this fella, no, they say he\n"
"had a different way of doing\n"
"things..."
BOX_BREAK

"His house stood where the well is\n"
"now..."
),
MSG(
"Es ist lange her...\n"
"Da gab es hier einen Mann, von\n"
"dem man sagte, er besäße das \n"
COLOR(PURPLE) "Auge der Wahrheit" COLOR(DEFAULT) "!"
BOX_BREAK

"Heutzutage muß man schon selbst\n"
"ein ganz besonderes Gespür\n"
"entwickeln, um die Wahrheit zu\n"
"erkennen..."
BOX_BREAK

"Aber der Typ hat das irgendwie\n"
"anders gemacht..."
BOX_BREAK

"Sein Haus stand da, wo jetzt der\n"
"Brunnen ist..."
),
MSG(
"Il y a bien longtemps...\n"
"Le regard perçant d'un habitant de \n"
"ce village permettait à celui-ci de \n"
"voir la vérité!"
BOX_BREAK

"La vérité est une notion plus \n"
"philosophique que visuelle.\n"
"La percevoir est le fruit d'un long\n"
"travail intellectuel..."
BOX_BREAK

"Mais cet homme avait une autre \n"
"façon de procéder..."
BOX_BREAK

"Le puits fut construit là où\n"
"se trouvait sa maison..."
)
)

DEFINE_MESSAGE(0x5088, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "この村には　むかし\n"
SHIFT(24) COLOR(RED) "大金持ちの家" COLOR(DEFAULT) "が　あったが、\n"
SHIFT(12) "一家全員　のろわれたそうじゃ。"
BOX_BREAK

SHIFT(45) "欲に　目がくらむと\n"
SHIFT(36) "人生　なにが　おこるか\n"
SHIFT(45) "わからぬものじゃ。"
),
MSG(
"Folks around here tell of a\n"
COLOR(RED) "fabulously rich family " COLOR(DEFAULT) "that once\n"
"lived in one of the houses in this\n"
"village..."
BOX_BREAK

"But they say that the entire\n"
"family was cursed due to their\n"
"greed!"
BOX_BREAK

"Who knows what might happen to\n"
"those who are consumed by\n"
"greed..."
),
MSG(
"Die Leute in der Gegend\n"
"erzählen von einer\n"
COLOR(RED) "sagenhaft reichen Familie" COLOR(DEFAULT) ",\n"
"die einst hier lebte."
BOX_BREAK

"Aber die ganze Familie war\n"
"verflucht, sagt man...\n"
"Wegen ihrer unermeßlichen\n"
"Habsucht!"
BOX_BREAK

"Wer weiß schon, was mit jenen\n"
"passiert, die von unstillbarer\n"
"Gier besessen sind!"
),
MSG(
"On raconte dans le coin qu'une\n"
COLOR(RED) "riche famille" COLOR(DEFAULT) " possédait une maison\n"
"dans ce village..."
BOX_BREAK

"Mais les membres de cette famille\n"
"étaient avares... Ainsi ils furent \n"
"maudits."
BOX_BREAK

"Bien heureux le pauvre... \n"
"Crois-moi!"
)
)

DEFINE_MESSAGE(0x5089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(78) "フッ…"
BOX_BREAK

SHIFT(9) "ここまで　のぞきにくるなんて…\n"
SHIFT(42) "こまったね　ハニー。"
),
MSG(
"Heh...."
BOX_BREAK

"What an annoying person,\n"
"interrupting us like this...\n"
"Don't you agree, my love?"
),
MSG(
"Hey..."
BOX_BREAK

"Welch eine Nervensäge, die uns da \n"
"stört... Denkst Du das nicht\n"
"auch, meine Liebe?"
),
MSG(
"Oh...."
BOX_BREAK

"Quel malotru...\n"
"Nous déranger en plein câlin!\n"
"Où en étions-nous, amour?"
)
)

DEFINE_MESSAGE(0x508A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(78) "ウフ…"
BOX_BREAK

SHIFT(15) "こんなとこまで　くるなんて…\n"
SHIFT(6) "他にやること　あるんじゃないの？\n"
SHIFT(60) "ね　ダーリン！"
),
MSG(
"Hee hee..."
BOX_BREAK

"Violating our personal space!\n"
"He must have something better\n"
"to do...\n"
"Don't you agree, darling?"
),
MSG(
"Hey..."
BOX_BREAK

"Er verletzt unsere Privatsphäre...\n"
"Findest Du nicht auch, Liebling?"
),
MSG(
"Hi hi..."
BOX_BREAK

"Nous déranger en plein câlinou!\n"
"Le crois-tu jaloux, mon gnougnou?"
)
)

DEFINE_MESSAGE(0x508B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "見るザマス…　あのヒゲオヤジ。\n"
SHIFT(33) "どうやら　牧場の仕事を\n"
SHIFT(6) "クビになったらしいザマス…" TEXTID(0x508C)
),
MSG(
UNSKIPPABLE "Look at him...the man with the\n"
"beard. I think he was fired from\n"
"his job at the ranch..." TEXTID(0x508C)
),
MSG(
UNSKIPPABLE "Schau ihn an, den Bärtigen.\n"
"Ich glaube, sie haben ihn von der\n"
"Farm gejagt..." TEXTID(0x508C)
),
MSG(
UNSKIPPABLE "Regarde celui-là...\n"
"Le gros moustachu...\n"
"On l'a mis à la porte du Ranch." TEXTID(0x508C)
)
)

DEFINE_MESSAGE(0x508C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) "朝から　晩まで、\n"
SHIFT(30) "ゴロゴロ　寝てばっかり。\n"
"このご時世に　のんきなもんザマス。"
),
MSG(
"He's always just lazing around, \n"
"morning, noon and night. \n"
"He's an awfully carefree guy \n"
"during such hard times."
),
MSG(
"Er hängt immer nur faul herum,\n"
"den ganzen Tag lang.\n"
"Das ist ziemlich gedankenlos in\n"
"derart schlimmen Zeiten!"
),
MSG(
"Il ne fait rien de la journée. \n"
"Et la crise actuelle...\n"
"Il s'en contre-fiche!"
)
)

DEFINE_MESSAGE(0x508D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) "あの　グータラおやじ、\n"
SHIFT(9) "ちょっぴり　リチャードちゃんに\n"
SHIFT(54) "似てたザマス…"
BOX_BREAK

SHIFT(12) "リチャードちゃんを　知らない？"
BOX_BREAK

SHIFT(15) "有名な　おイヌちゃん　ザマス！\n"
SHIFT(18) "ほんとに　知らないザマスか？"
),
MSG(
"That lazy man, he kind of \n"
"reminded me of my little Richard..."
BOX_BREAK

"What's that? You say you've\n"
"never heard of my little Richard?\n"
"He was such a famous puppy! You \n"
"seriously haven't heard of him?"
),
MSG(
"Der Bärtige erinnert\n"
"mich irgendwie an meinen\n"
"kleinen Richard..."
BOX_BREAK

"Wie bitte? Du hast nie etwas von\n"
"meinem kleinen Richard gehört?\n"
"Er war so ein liebes Hundchen! Du\n"
"kennst ihn wirklich nicht?"
),
MSG(
"Ce gros flemmard me rappelle kiki."
BOX_BREAK

"Comment? Tu n'as jamais entendu \n"
"parler de mon cher petit kiki\n"
"d'amour et d'amitié trop mignon?\n"
"C'est mon chien!"
)
)

DEFINE_MESSAGE(0x508E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "あ〜っ！　また　嵐だ！！\n"
SHIFT(12) "オカリナ　ふきやがったな〜っ！\n"
SHIFT(54) "ムカムカ〜ッ！！"
),
MSG(
"Oh, no! A storm again!!\n"
"You played the Ocarina again,\n"
"didn't you!!\n"
"Grrrrrrrrrrrrrrr!!"
),
MSG(
"Oh nein! Deine verflixte Okarina\n"
"ist ein Instrument des Teufels!\n"
"Grrrrr!"
),
MSG(
"Oh NoOoOoOoOoOoN!!!!\n"
"Encore un orage? \n"
QUICKTEXT_ENABLE "C'est de ta faute ! ! !" QUICKTEXT_DISABLE "\n"
"Grrrrrrrrrrrrrrr!!"
)
)

DEFINE_MESSAGE(0x508F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ビッグポウを　つかまえた！\n"
SHIFT(3) COLOR(RED) "ゴーストショップ" COLOR(DEFAULT) "に　高く　売ろう！"
),
MSG(
"You caught a Big Poe!\n"
"Sell it at the " COLOR(RED) "Ghost Shop " COLOR(DEFAULT) "for a\n"
"lot of money!"
),
MSG(
"Du hast einen Nachtschwärmer\n"
"gefangen! Verkaufe ihn im\n"
COLOR(RED) "Gespenstermarkt " COLOR(DEFAULT) "zu einem\n"
"ordentlichen Preis!"
),
MSG(
"Vous attrapez une Ame!\n"
"Allez la vendre chez le\n"
COLOR(RED) "Marchand d'Ames " COLOR(DEFAULT) "au prix fort!"
)
)
