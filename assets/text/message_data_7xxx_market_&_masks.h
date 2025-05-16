DEFINE_MESSAGE(0x7000, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "この　コッコ、\n"
SHIFT(33) "つかまえられないの〜！"
)
,
MSG(
"I can't catch that Cucco!"
)
,
MSG(
"Ich kann dieses Huhn\n"
"nicht einfangen!"
)
,
MSG(
"Je n'arrive pas à attraper cette \n"
"cocotte!"
)
)

DEFINE_MESSAGE(0x7001, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "あ、いそがし…　あ、いそがし…"
)
,
MSG(
"Huff huff! \n"
"I'm late! I'm late!\n"
"For a very important date!"
)
,
MSG(
"Keuch! \n"
"Ich bin schwer\n"
"am Trainieren!"
)
,
MSG(
"Huff huff! \n"
"Je suis en retard!\n"
"J'ai un rencard!"
)
)

DEFINE_MESSAGE(0x7002, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ここは　ハイラル城下。\n"
SHIFT(42) "平和で　豊かな町だ。"
)
,
MSG(
"Welcome to Hyrule Castle Town.\n"
"It's a peaceful, prosperous town."
)
,
MSG(
"Lang lebe Prinzessin Zelda!"
)
,
MSG(
"Gloire et longue vie à la noble\n"
"Famille Royale d'Hyrule!"
)
)

DEFINE_MESSAGE(0x7003, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "こどもが　夜の町を\n"
SHIFT(27) "ウロウロするんじゃない！"
)
,
MSG(
"Kids shouldn't be wandering around\n"
"town at nighttime! Stay indoors\n"
"until morning!"
)
,
MSG(
"In Deinem Alter solltest Du um\n"
"diese Zeit im Bett liegen! Bleib\n"
"lieber im Haus bis morgen früh!"
)
,
MSG(
"Les gamins ne se promènent pas \n"
"près du château la nuit! \n"
"Reste dans la ville en attendant \n"
"le lever du soleil!"
)
)

DEFINE_MESSAGE(0x7004, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "たいくつだ…\n"
SHIFT(18) "もっと　世の中に　モメごとが\n"
SHIFT(12) "あるほうが　楽しいぜ、きっと…"
BOX_BREAK

SHIFT(15) "おっと、コレは　ナイショだぜ。"
BOX_BREAK

SHIFT(3) "ツボでも　割って　ストレス解消！\n"
SHIFT(9) "ツボのそばで　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "で　持ち上げる。\n"
SHIFT(21) "も一度　" COLOR(BLUE) "[A]" COLOR(DEFAULT) "で　放り投げるんだ。"
)
,
MSG(
"Man, I am SO bored...\n"
"Things would sure be more\n"
"interesting if there were more...\n"
"troubles in the world..."
BOX_BREAK

"Hey, that's just between you and\n"
"me, OK?"
BOX_BREAK

"Anyway, maybe we can let off \n"
"some steam by breaking these \n"
"jars."
BOX_BREAK

"Stand near a jar and press " COLOR(BLUE) "[A]" COLOR(DEFAULT) " to\n"
"lift it. Press " COLOR(BLUE) "[A]" COLOR(DEFAULT) " again to toss it!"
)
,
MSG(
"Mann, ist mir langweilig...\n"
"Es wäre bestimmt spannender,\n"
"wenn hier mehr los wäre..."
BOX_BREAK

"Hey, das bleibt aber unter uns,\n"
"klar?"
BOX_BREAK

"Egal, vielleicht können wir ja\n"
"etwas Dampf ablassen, indem wir\n"
"ein paar Krüge zerschlagen."
BOX_BREAK

"Stelle Dich vor einen Krug und\n"
"drücke " COLOR(BLUE) "[A]" COLOR(DEFAULT) ", um ihn anzuheben.\n"
"Drückst Du nochmal " COLOR(BLUE) "[A]" COLOR(DEFAULT) ", wirfst\n"
"Du ihn!"
)
,
MSG(
"Bwooarff! Je m'ennuie...\n"
"Ha! S'il y avait un peu plus \n"
"d'action, je pourrais m'amuser..."
BOX_BREAK

"Mais tu gardes ça pour toi, OK?"
BOX_BREAK

"Enfin...on peut toujours faire un \n"
"peu de bruit en brisant ces jarres."
BOX_BREAK

"Appuie sur " COLOR(BLUE) "[A]" COLOR(DEFAULT) " pour en soulever\n"
"une. Utilise ensuite " COLOR(BLUE) "[A]" COLOR(DEFAULT) " pour\n"
"la lancer!"
)
)

DEFINE_MESSAGE(0x7005, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(69) "よかった！"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "あ、そう！\n"
SHIFT(51) "忘れていました！" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "That's great!"
BOX_BREAK

UNSKIPPABLE "I forgot to tell you..." EVENT
)
,
MSG(
UNSKIPPABLE "Großartig!"
BOX_BREAK

UNSKIPPABLE "Das habe ich ganz vergessen..." EVENT
)
,
MSG(
UNSKIPPABLE "C'est fantastique!"
BOX_BREAK

UNSKIPPABLE "Ha! J'ai oublié de te dire..." EVENT
)
)

DEFINE_MESSAGE(0x7006, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) QUICKTEXT_ENABLE "今、城内は　取り込み中だ！\n"
SHIFT(33) "たとえ　犬一匹といえど\n"
SHIFT(15) "城へ　入れるわけには　いかん！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "There's a lot going on in the \n"
"castle right now. I can't allow\n"
"even a dog to get into the \n"
"castle!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Im Schloß ist es zur Zeit ziemlich\n"
"unruhig. Daher darf es\n"
"niemand betreten!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Le château est en alerte! Je ne \n"
"laisserai même pas une souris\n"
"entrer!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x7007, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(57) "おお…　少年…\n"
SHIFT(18) "お前は　森から来た少年か…？"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "あ…　会えてよかった…\n"
SHIFT(57) "お…　お前に…\n"
SHIFT(12) "つ…　伝えたいことが…　ある…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "ゲルドの盗賊王　" COLOR(RED) "ガノンドロフ" COLOR(DEFAULT) "が\n"
SHIFT(24) "我が王を　裏切った…のだ！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "危険を察知した　乳母の" COLOR(RED) "インパ" COLOR(DEFAULT) "は、\n"
SHIFT(45) "ゼルダ姫を　連れ…\n"
SHIFT(45) "城から　脱出した…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "私は　ガノンドロフの追っ手を\n"
SHIFT(30) "食い止めていたのだが…\n"
SHIFT(66) "むねんだ…"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "姫は…　森の少年…\n"
SHIFT(12) "そう、お前を　待っておられた…\n"
SHIFT(3) COLOR(RED) "なにか" COLOR(DEFAULT) "を　渡そうとしておられた…"
BOX_BREAK

UNSKIPPABLE "姫から…　それを　受け取ったなら…\n"
SHIFT(6) "と…　" COLOR(LIGHTBLUE) "時の神殿" COLOR(DEFAULT) "へ…　い…" TEXT_SPEED(3) "いそげ" TEXT_SPEED(0) "…" EVENT
)
,
MSG(
UNSKIPPABLE "Unnngh...are you the boy from \n"
"the forest...?"
BOX_BREAK

UNSKIPPABLE "I-I-I've finally met you...\n"
"I-I-I have something to t-t-tell\n"
"you..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", the Gerudo King of\n"
"Thieves, betrayed our King..."
BOX_BREAK

UNSKIPPABLE "Zelda's nanny, " COLOR(RED) "Impa" COLOR(DEFAULT) ", sensed danger\n"
"and escaped from the castle with\n"
"our Princess..."
BOX_BREAK

UNSKIPPABLE "I tried to stop Ganondorf's men\n"
"from chasing them...but..."
BOX_BREAK

UNSKIPPABLE "The Princess was...waiting for a\n"
"boy from the forest...that's you...\n"
"She wanted to give " COLOR(RED) "something " COLOR(DEFAULT) "to\n"
"the boy..."
BOX_BREAK

UNSKIPPABLE "If you received it from the \n"
"Princess, " TEXT_SPEED(3) QUICKTEXT_ENABLE "hurry" QUICKTEXT_DISABLE "..." QUICKTEXT_ENABLE "to the" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Tem" QUICKTEXT_DISABLE QUICKTEXT_ENABLE "ple" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "of" QUICKTEXT_DISABLE "\n"
"Time" COLOR(DEFAULT) "...." TEXT_SPEED(0) EVENT
)
,
MSG(
UNSKIPPABLE "Arrgh... Bist Du der Junge aus\n"
"dem Wald...?"
BOX_BREAK

UNSKIPPABLE "Endlich treffe ich Dich...\n"
"Ich... Ich muß Dir etwas... mitteilen..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", der Herr der Gerudo,\n"
"hat unseren König verraten..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Impa" COLOR(DEFAULT) " hat die Gefahr erkannt und\n"
"ist mit Prinzessin Zelda aus dem\n"
"Schloß geflüchtet..."
BOX_BREAK

UNSKIPPABLE "Ich habe versucht, Ganondorfs\n"
"Leute daran zu hindern, ihnen zu\n"
"folgen... aber... ohne Erfolg..."
BOX_BREAK

UNSKIPPABLE "Die Prinzessin hat... auf einen\n"
"Jungen aus dem Wald gewartet...\n"
"auf Dich... Sie wollte Dir " COLOR(RED) "etwas\n"
"geben" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Wenn Du es hast, dann " TEXT_SPEED(3) QUICKTEXT_ENABLE "eile" QUICKTEXT_DISABLE "... " QUICKTEXT_ENABLE "zur" QUICKTEXT_DISABLE "\n"
COLOR(LIGHTBLUE) QUICKTEXT_ENABLE "Zita" QUICKTEXT_DISABLE QUICKTEXT_ENABLE "delle" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "der" QUICKTEXT_DISABLE " Zeit" COLOR(DEFAULT) "..." TEXT_SPEED(0) EVENT
)
,
MSG(
UNSKIPPABLE "Arrrrgh...es-tu le garçon de la\n"
"forêt...?"
BOX_BREAK

UNSKIPPABLE "Enfin te voici...\n"
"E-éc-écoute..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", le prince des voleurs,\n"
"a trahi notre Roi..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Impa" COLOR(DEFAULT) " la nourrice a senti le danger\n"
"et s'est enfuie du château avec la\n"
"Princesse Zelda..."
BOX_BREAK

UNSKIPPABLE "J'ai essayé d'arrêter les hommes \n"
"de Ganondorf...mais..."
BOX_BREAK

UNSKIPPABLE "La Princesse attendait...un garçon\n"
"de la forêt...toi... Elle voulait\n"
"te donner " COLOR(RED) "quelque chose" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Si la Princesse te l'a remis, \n"
TEXT_SPEED(3) QUICKTEXT_ENABLE "Vite" QUICKTEXT_DISABLE "..." QUICKTEXT_ENABLE "va au" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Tem" QUICKTEXT_DISABLE QUICKTEXT_ENABLE "ple" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "du" QUICKTEXT_DISABLE " Temps" COLOR(DEFAULT) "...." TEXT_SPEED(0) EVENT
)
)

DEFINE_MESSAGE(0x7008, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "もう、動かない…"
)
,
MSG(
"He's not moving anymore...."
)
,
MSG(
"Er rührt sich nicht mehr..."
)
,
MSG(
"Il ne bouge plus...."
)
)

DEFINE_MESSAGE(0x7009, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(33) "するどい目つきの　男が\n"
SHIFT(51) "見えるでしょう？"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "あれが　西の果ての　砂漠から来た\n"
SHIFT(9) "ゲルド族の首領、" COLOR(RED) "ガノンドロフ" COLOR(DEFAULT) "…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "今は　お父さまに\n"
SHIFT(27) "忠誠を　誓っているけれど\n"
SHIFT(6) "きっと　ウソに　決まっています…"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "夢に　見た、\n"
SHIFT(18) "ハイラルを　おおう　黒い雲…\n"
SHIFT(18) "あの男に　ちがいありません！"
)
,
MSG(
UNSKIPPABLE "Can you see the man with the \n"
"evil eyes?"
BOX_BREAK

UNSKIPPABLE "That is " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", the leader of \n"
"the Gerudos. They hail from the \n"
"desert far to the west."
BOX_BREAK

UNSKIPPABLE "Though he swears allegiance to my \n"
"father, I am sure he is not \n"
"sincere."
BOX_BREAK

UNSKIPPABLE "The dark clouds that covered \n"
"Hyrule in my dream...\n"
"They must symbolize that man!"
)
,
MSG(
UNSKIPPABLE "Siehst Du den Mann dort?\n"
"Den mit dem bösen Blick?"
BOX_BREAK

UNSKIPPABLE "Das ist " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", Anführer der \n"
"Gerudos, die in der Wüste fern im\n"
"Westen unseres Landes leben."
BOX_BREAK

UNSKIPPABLE "Er hat meinem Vater die Treue\n"
"geschworen, doch ich glaube nicht,\n"
"daß er aufrichtig ist."
BOX_BREAK

UNSKIPPABLE "Die dunklen Wolken, die Hyrule in\n"
"meinen Träumen einhüllten...\n"
"Sie müssen diesen Mann\n"
"symbolisiert haben!"
)
,
MSG(
UNSKIPPABLE "Tu vois cet homme aux yeux \n"
"noirs de haine?"
BOX_BREAK

UNSKIPPABLE "C'est " COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", il est le chef \n"
"des Gerudos, une tribu du désert."
BOX_BREAK

UNSKIPPABLE "Même s'il jure fidélité à Père, \n"
"je suis sûre qu'il est un traître."
BOX_BREAK

UNSKIPPABLE "Mes rêves me font voir de \n"
"sombres nuages sur Hyrule...\n"
"Ils doivent représenter cet homme!"
)
)

DEFINE_MESSAGE(0x700A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) "クックック…\n"
SHIFT(30) "ごくろうだったな、小僧！"
BOX_BREAK_DELAYED(60)

SHIFT(39) "オレの　思った通り…\n"
SHIFT(48) "「時の扉」のカギは\n"
SHIFT(15) "お前が　にぎっていたのだな…"
BOX_BREAK_DELAYED(90)

SHIFT(45) "お前が　このオレを\n"
SHIFT(9) "聖地へ　みちびいてくれるとは…"
BOX_BREAK_DELAYED(80)

SHIFT(48) "感謝するぞ　小僧。" FADE(50)
)
,
MSG(
SHIFT(14) "Geh heh heh! Excellent work!"
BOX_BREAK_DELAYED(60)

SHIFT(8) "As I thought, you held the keys\n"
SHIFT(38) "to the Door of Time!"
BOX_BREAK_DELAYED(90)

SHIFT(5) "You have led me to the gates of\n"
SHIFT(45) "the Sacred Realm..."
BOX_BREAK_DELAYED(80)

SHIFT(16) "Yes, I owe it all to you, kid!" FADE(50)
)
,
MSG(
SHIFT(8) "Hahaha! Ausgezeichnet, Kleiner!"
BOX_BREAK_DELAYED(60)

"Wie ich mir dachte, besitzt Du den\n"
SHIFT(26) "Schlüssel zum Zeitportal!"
BOX_BREAK_DELAYED(90)

SHIFT(52) "Du hast mich zum\n"
SHIFT(32) "Heiligen Reich geführt..."
BOX_BREAK_DELAYED(80)

SHIFT(18) "Ich muß Dir danken, Kleiner!" FADE(50)
)
,
MSG(
SHIFT(5) "Ha hah hah! Félicitations, gamin!"
BOX_BREAK_DELAYED(60)

SHIFT(2) "Comme je le pensais, tu avais en \n"
SHIFT(6) "ta possession la clé des portes \n"
SHIFT(68) "du temps!"
BOX_BREAK_DELAYED(90)

SHIFT(11) "Tu m'as ouvert la voie jusqu'au\n"
SHIFT(52) "Saint Royaume..."
BOX_BREAK_DELAYED(80)

SHIFT(15) "Je te dois ma victoire, petit!" FADE(50)
)
)

DEFINE_MESSAGE(0x700B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(75) "お願い！\n"
SHIFT(9) "はやくしないと　行ってしまう…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Please! If you don't hurry,\n"
"he'll be gone!" EVENT
)
,
MSG(
UNSKIPPABLE "Bitte! Wenn Du Dich nicht beeilst,\n"
"wird er fort sein!" EVENT
)
,
MSG(
UNSKIPPABLE "Vite! Il va s'en aller!" EVENT
)
)

DEFINE_MESSAGE(0x700C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) COLOR(YELLOW) "[C]" COLOR(DEFAULT) "で　おねがいします！\n"
SHIFT(6) COLOR(RED) "ビンのなかみ" COLOR(DEFAULT) "を　売ってください！\n"
SHIFT(36) COLOR(YELLOW) "[C]" COLOR(DEFAULT) "で　おねがいします！"
)
,
MSG(
"Please...with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Please sell me the " COLOR(RED) "contents" COLOR(DEFAULT) " of a\n"
"bottle...\n"
"Please...with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)
,
MSG(
"Bitte... Verkaufe mir etwas mit " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Verkaufe mir den " COLOR(RED) "Inhalt" COLOR(DEFAULT) " einer\n"
"Flasche...\n"
"Bitte... Drücke " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)
,
MSG(
"Pitié...avec " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Pitié vends-moi le " COLOR(RED) "contenu" COLOR(DEFAULT) " d'une\n"
"bouteille...\n"
"Pitié...avec " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)
)

DEFINE_MESSAGE(0x700D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "この店、いつ　オープンするのかな？\n"
SHIFT(18) "そこのカンバン　読んだけど、\n"
SHIFT(27) "やっぱり　ヘンな店だな…"
)
,
MSG(
"What a strange shop! \n"
"I wonder when it'll be open for\n"
"business. I read the sign there, \n"
"but it still seems weird!"
)
,
MSG(
"Welch merkwürdiger Laden! \n"
"Ich frage mich, wann er öffnet.\n"
"Ich habe zwar das Schild gelesen,\n"
"aber es ist doch sehr seltsam!"
)
,
MSG(
"Quelle étrange boutique!\n"
"Quand va-t-elle ouvrir?\n"
"J'ai lu le panneau mais... \n"
"J'y comprends rien!"
)
)

DEFINE_MESSAGE(0x700E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "なかなか、夜が　明けないな…"
BOX_BREAK

SHIFT(21) "朝日にはえる　ハイラル城は\n"
SHIFT(27) "サイコーなんだけどなぁ。"
)
,
MSG(
"It seems like it's taking forever\n"
"for dawn to come..."
BOX_BREAK

"The view of Hyrule Castle in \n"
"the morning sun is so fantastic!"
)
,
MSG(
"Es scheint ewig zu dauern,\n"
"bis die Sonne aufgeht..."
BOX_BREAK

"Der Blick auf Schloß Hyrule im\n"
"Licht der aufgehenden Sonne ist\n"
"einfach fantastisch!"
)
,
MSG(
"L'aube se fait attendre..."
BOX_BREAK

"La vue du château sous le soleil \n"
"du matin est superbe!"
)
)

DEFINE_MESSAGE(0x700F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "森の少女を　救うには\n"
SHIFT(42) COLOR(RED) "新たな力" COLOR(DEFAULT) "が　必要だ。\n"
SHIFT(30) "カカリコ村へ　行くんだ！"
)
,
MSG(
"To save the forest girl, you need\n"
COLOR(RED) "another skill" COLOR(DEFAULT) "... \n"
"Head to Kakariko Village!"
)
,
MSG(
"Um das Mädchen aus dem Wald zu\n"
"retten, brauchst Du einen\n"
COLOR(RED) "weiteren Ausrüstungsgegenstand" COLOR(DEFAULT) "... \n"
"Geh zurück nach Kakariko!"
)
,
MSG(
"Pour sauver la fille de la forêt il\n"
"te faudra un " COLOR(RED) "nouveau pouvoir" COLOR(DEFAULT) "... \n"
"Va au village Cocorico!"
)
)

DEFINE_MESSAGE(0x7010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "新たな力を　手に入れたね…\n"
SHIFT(60) "キミの救けを\n"
SHIFT(21) COLOR(ADJUSTABLE) "森の少女" COLOR(DEFAULT) "は　待っているよ…"
)
,
MSG(
"It looks like you have the\n"
"skills you need... \n"
"The " COLOR(ADJUSTABLE) "forest girl" COLOR(DEFAULT) " is waiting for your\n"
"help...."
)
,
MSG(
"Es scheint, als hättest Du, was \n"
"Du benötigst... \n"
"Das" COLOR(ADJUSTABLE) " Mädchen aus dem Wald\n"
COLOR(DEFAULT) "wartet auf Deine Hilfe..."
)
,
MSG(
"Tu as le pouvoir qu'il te faut...\n"
"La " COLOR(ADJUSTABLE) "fille de la forêt " COLOR(DEFAULT) "t'attend..."
)
)

DEFINE_MESSAGE(0x7011, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) "クスリが　ほしけりゃ、\n"
SHIFT(18) "「あきビン」を　持っておいで。\n"
SHIFT(36) "わかったかい、ぼーや。" PERSISTENT
)
,
MSG(
"If you want potions, you'd better \n"
"bring an empty bottle. Understand,\n"
"young man?" PERSISTENT
)
,
MSG(
"Wenn Du Elixiere kaufen willst,\n"
"dann bringe eine leere Flasche mit.\n"
"Hast Du verstanden, Junge?" PERSISTENT
)
,
MSG(
"Il te faut une bouteille vide\n"
"pour transporter une potion!" PERSISTENT
)
)

DEFINE_MESSAGE(0x7012, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(6) "残念ですが、これは　ニセモノです\n"
SHIFT(3) "ゴロンの町で　異常事態発生により\n"
SHIFT(18) "仕入れできず、現在　品切れ中" PERSISTENT
)
,
MSG(
"I'm sorry, but this is just a model. \n"
"Because of the crisis in Goron \n"
"City, we haven't received any \n"
"shipments lately and we're out." PERSISTENT
)
,
MSG(
"Tut mir leid, das ist nur eine\n"
"Attrappe. Wegen der Probleme in\n"
"Goronia haben wir in der letzten\n"
"Zeit kein Material mehr bekommen." PERSISTENT
)
,
MSG(
"Désolé...ce n'est qu'une maquette. \n"
"La crise du village Goron nous\n"
"a mis en rupture de stock." PERSISTENT
)
)

DEFINE_MESSAGE(0x7013, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(18) "デスマウンテンへ　登るなら、\n"
SHIFT(18) COLOR(LIGHTBLUE) "ハイリアの盾" COLOR(DEFAULT) "を　買っときな。\n"
"降ってくる火山弾を　よけられるぜ。"
BOX_BREAK

SHIFT(51) "でも、ぼーずにゃ\n"
SHIFT(18) "ちょっと　大きすぎるけどな。" PERSISTENT
)
,
MSG(
"If you plan on scaling Death\n"
"Mountain, buy a " COLOR(LIGHTBLUE) "Hylian Shield" COLOR(DEFAULT) ".\n"
"You can defend yourself against\n"
"falling rocks with that shield."
BOX_BREAK

"But it might be a little bit \n"
"big for a kid...." PERSISTENT
)
,
MSG(
"Wenn Du auf den Todesberg willst,\n"
"kaufe besser einen " COLOR(LIGHTBLUE) "Hylia-Schild" COLOR(DEFAULT) ".\n"
"Damit schützt Du Dich vor\n"
"herabfallenden Lavabrocken."
BOX_BREAK

"Aber für ein Kind ist der Schild\n"
"vielleicht eine Nummer zu groß..." PERSISTENT
)
,
MSG(
"Avant d'aller sur le Mont du Péril, \n"
"procure-toi un " COLOR(LIGHTBLUE) "bouclier Hylien" COLOR(DEFAULT) ". \n"
"Les chutes de pierres sont \n"
"terribles, tu verras!"
BOX_BREAK

"Mais il risque d'être un peu grand \n"
"pour toi..." PERSISTENT
)
)

DEFINE_MESSAGE(0x7014, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "おどってんじゃないのよ、ぼうや。\n"
SHIFT(9) "せなかが　かゆいのよ…　イヤン！"
)
,
MSG(
"I'm not dancing, you know...\n"
"My back itches! \n"
"Ooh! Aaah! Ooh!"
)
,
MSG(
"Ich tanze nicht, weißt Du...\n"
"Mir tut der Rücken weh!\n"
"Auu! Aaah!"
)
,
MSG(
"T'es fou! Je ne danse pas...\n"
"J'ai le dos qui me gratte...\n"
"Haaaa! Hooooo! Rhaaaaa!"
)
)

DEFINE_MESSAGE(0x7015, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "我々　" COLOR(LIGHTBLUE) "ハイリア人" COLOR(DEFAULT) "の耳は、神の声を\n"
SHIFT(12) "聞くために　大きいんだってよ。"
BOX_BREAK

SHIFT(18) "オレにゃ　聞こえないけどサ。"
)
,
MSG(
"They say we " COLOR(LIGHTBLUE) "Hylians " COLOR(DEFAULT) "have big ears\n"
"in order to hear the voices of the \n"
"gods...but I've never heard them!"
)
,
MSG(
"Es heißt, wir " COLOR(LIGHTBLUE) "Hylianer " COLOR(DEFAULT) "hätten so\n"
"große Ohren, um die Stimmen der\n"
"Götter hören zu können.\n"
"Aber ich habe sie nie gehört!"
)
,
MSG(
"On dit que les grandes oreilles \n"
"des " COLOR(LIGHTBLUE) "Hyliens" COLOR(DEFAULT) " servent à entendre la \n"
"voix des dieux...faut croire que les \n"
"miennes sont en panne."
)
)

DEFINE_MESSAGE(0x7016, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(75) "ぼーや、\n"
SHIFT(6) COLOR(YELLOW) "ロンロン牧場" COLOR(DEFAULT) "に　行ってみたかい？"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "あすこの牛乳は　絶品だよねぇ。\n"
SHIFT(24) "娘さんは　カワイイしねぇ。" TEXTID(0x7017)
)
,
MSG(
UNSKIPPABLE "Kid, have you been to \n"
COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT) "?"
BOX_BREAK

UNSKIPPABLE "Their milk is delicious!\n"
"There are many horses there, and\n"
"the young daughter of the ranch\n"
"owner is cute!" TEXTID(0x7017)
)
,
MSG(
UNSKIPPABLE "Warst Du schon einmal auf der\n"
COLOR(YELLOW) "Lon Lon-Farm" COLOR(DEFAULT) ", Kleiner?"
BOX_BREAK

UNSKIPPABLE "Die Milch dort ist köstlich!\n"
"Außerdem gibt es da viele Pferde,\n"
"und die junge Tochter des Farmers\n"
"ist richtig süß!" TEXTID(0x7017)
)
,
MSG(
UNSKIPPABLE "Es-tu déjà allé au " COLOR(YELLOW) "Ranch Lon Lon" COLOR(DEFAULT) ",\n"
"Gamin?"
BOX_BREAK

UNSKIPPABLE "Leur lait est délicieux!\n"
"Ils ont beaucoup de chevaux et la\n"
"fille du patron est très mignonne!" TEXTID(0x7017)
)
)

DEFINE_MESSAGE(0x7017, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) COLOR(YELLOW) "ロンロン牧場" COLOR(DEFAULT) "へ　行くなら、\n"
SHIFT(15) "町を出て、平原を　まっすぐ南。\n"
SHIFT(18) "一度は　見に行かなきゃねぇ。"
)
,
MSG(
"To get to " COLOR(YELLOW) "Lon Lon Ranch" COLOR(DEFAULT) ", after\n"
"you leave town, head due south\n"
"across the field. You should visit\n"
"the ranch at least once!"
)
,
MSG(
"Zur " COLOR(YELLOW) "Farm " COLOR(DEFAULT) "kommst Du, wenn Du\n"
"nach dem Ortsausgang durch die\n"
"Steppe nach Süden gehst.\n"
"Besuche sie unbedingt einmal!"
)
,
MSG(
"Pour te rendre au " COLOR(YELLOW) "Ranch" COLOR(DEFAULT) ", c'est \n"
"simple: traverse la plaine vers \n"
"le Sud en sortant du château!\n"
"Tu m'en diras des nouvelles!"
)
)

DEFINE_MESSAGE(0x7018, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(12) COLOR(RED) "ゼルダ姫" COLOR(DEFAULT) "に　会ってみたいよ〜！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "兵士の目を　かいくぐり…"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "お堀に　身を　沈め…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "もう　ちょっと…ってとこで\n"
SHIFT(15) "つかまっちまったんだよ〜っ！" TEXTID(0x7019)
)
,
MSG(
UNSKIPPABLE "I wanted to see " COLOR(RED) "Princess Zelda" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "I avoided the guards..."
BOX_BREAK

UNSKIPPABLE "Swam through the moat..."
BOX_BREAK

UNSKIPPABLE "I was almost there when they\n"
"caught me!" TEXTID(0x7019)
)
,
MSG(
UNSKIPPABLE "Ich wollte zu " COLOR(RED) "Prinzessin Zelda" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Habe die Wachen umgangen..."
BOX_BREAK

UNSKIPPABLE "Bin durch den Burggraben\n"
"geschwommen..."
BOX_BREAK

UNSKIPPABLE "Ich war fast bei ihr, als sie\n"
"mich doch noch geschnappt haben!" TEXTID(0x7019)
)
,
MSG(
UNSKIPPABLE "Je voulais voir la " COLOR(RED) "Princesse Zelda" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "J'ai évité tous les gardes..."
BOX_BREAK

UNSKIPPABLE "J'ai nagé dans les douves..."
BOX_BREAK

UNSKIPPABLE "J'y étais presque mais...ils m'ont\n"
"attrapé!" TEXTID(0x7019)
)
)

DEFINE_MESSAGE(0x7019, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "城の右奥に　忍び込めそうな\n"
SHIFT(9) COLOR(RED) "小さな水路" COLOR(DEFAULT) "を　見つけたんだけど\n"
SHIFT(3) "抜けらんなくなっちゃったんだ〜！"
)
,
MSG(
"I found a " COLOR(RED) "small drain hole " COLOR(DEFAULT) "on the\n"
"right side of the castle that I\n"
"thought I could sneak into, but I\n"
"got stuck there."
)
,
MSG(
"Ich habe ein enges " COLOR(RED) "Abflußloch " COLOR(DEFAULT) "auf\n"
"der Ostseite des Schlosses\n"
"gefunden und dachte, ich käme\n"
"durch. Aber ich blieb hängen!"
)
,
MSG(
"J'ai trouvé un petit " COLOR(RED) "trou\n"
"d'évacuation" COLOR(DEFAULT) " sur la droite du \n"
"château. J'ai voulu m'y glisser \n"
"mais je suis resté coincé!"
)
)

DEFINE_MESSAGE(0x701A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ウォッホン！\n"
SHIFT(69) "エッホン！"
BOX_BREAK

SHIFT(15) "このヒゲが　私の　ジマンです。\n"
SHIFT(51) "カッコよかろ〜！"
BOX_BREAK

SHIFT(66) "ん、ぼーず！"
)
,
MSG(
SHIFT(55) "Ahem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(5) "This beard is my pride and joy!\n"
SHIFT(7) "Doesn't it look luxuriant, kid?!"
)
,
MSG(
SHIFT(83) QUICKTEXT_ENABLE "Ähem!" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(6) "Dieser Bart ist mein ganzer Stolz!\n"
SHIFT(1) "Ist er nicht eindrucksvoll, Kleiner?"
)
,
MSG(
SHIFT(55) "Ahem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(21) "Cette barbe est ma fierté!\n"
SHIFT(23) "Elle est belle, hein? Hein?"
)
)

DEFINE_MESSAGE(0x701B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ウォッホン！\n"
SHIFT(69) "エッホン！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "このヒゲが　私の　ジマンです。\n"
SHIFT(51) "カッコよかろ〜！"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "ん、なに？\n"
SHIFT(33) "ロンロン牧場のオヤジ？"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "お、そ〜いえば…" TEXTID(0x701C)
)
,
MSG(
UNSKIPPABLE SHIFT(55) "Ahem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(5) "This beard is my pride and joy!\n"
SHIFT(7) "Doesn't it look luxuriant, kid?!"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(81) "What?!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "You're looking for the guy from\n"
"Lon Lon Ranch?"
BOX_BREAK

UNSKIPPABLE "Hmm, maybe..." TEXTID(0x701C)
)
,
MSG(
UNSKIPPABLE SHIFT(55) "Ähem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(6) "Dieser Bart ist mein ganzer Stolz!\n"
"Ist er nicht eindrucksvoll, Kleiner?"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(86) "Was?!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Du suchst den Typen von der\n"
"Lon Lon-Farm?"
BOX_BREAK

UNSKIPPABLE "Hmmm, wart mal..." TEXTID(0x701C)
)
,
MSG(
UNSKIPPABLE SHIFT(55) "Ahem! " QUICKTEXT_ENABLE "Hrrrm!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(22) "Cette barbe est ma fierté.\n"
SHIFT(14) "Elle est belle et bien fournie!"
BOX_BREAK

UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(77) "Quoi?!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Tu cherches le gars du Ranch \n"
"Lon Lon?"
BOX_BREAK

UNSKIPPABLE "Hmm, Peut-être..." TEXTID(0x701C)
)
)

DEFINE_MESSAGE(0x701C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "カッコわる〜い　" COLOR(RED) "ヒゲのオヤジ" COLOR(DEFAULT) "が\n"
SHIFT(45) "お城の中へ　荷物を\n"
SHIFT(36) "運んでるのを　見たぞ。"
)
,
MSG(
"I saw a " COLOR(RED) "guy with a shabby-looking\n"
"beard " COLOR(DEFAULT) "delivering some boxes to \n"
"the castle."
)
,
MSG(
"Ich habe gesehen, wie ein " COLOR(RED) "Typ mit\n"
"einem zerrupften Bart" COLOR(DEFAULT) " Kisten zum \n"
"Schloß gebracht hat."
)
,
MSG(
"J'ai vu un " COLOR(RED) "type avec une horrible\n"
"moustache noire " COLOR(DEFAULT) "apporter du lait\n"
"au château."
)
)

DEFINE_MESSAGE(0x701D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(51) "町の北東に　ある\n"
SHIFT(30) COLOR(LIGHTBLUE) "時の神殿" COLOR(DEFAULT) "って　知ってる？" TEXTID(0x701E)
)
,
MSG(
UNSKIPPABLE "Do you know about the " COLOR(LIGHTBLUE) "Temple \n"
"of Time " COLOR(DEFAULT) "that we have in the \n"
"northeast part of town?" TEXTID(0x701E)
)
,
MSG(
UNSKIPPABLE "Kennst Du die " COLOR(LIGHTBLUE) "Zitadelle \n"
"der Zeit" COLOR(DEFAULT) ", die sich im Nordosten\n"
"der Stadt befindet?" TEXTID(0x701E)
)
,
MSG(
UNSKIPPABLE "Sais-tu que le " COLOR(LIGHTBLUE) "Temple du Temps" COLOR(DEFAULT) "\n"
"se trouve au Nord Est du Bourg?" TEXTID(0x701E)
)
)

DEFINE_MESSAGE(0x701E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"時の神殿は　聖地への入口だ、という\n"
SHIFT(36) "言い伝えが　あるのよ。"
BOX_BREAK

SHIFT(69) "知ってた？"
)
,
MSG(
"Legends say that the Temple of\n"
"Time is the entrance to the \n"
"Sacred Realm..."
BOX_BREAK

"Did you know that?"
)
,
MSG(
"Die Legenden besagen, daß sich in\n"
"der Zitadelle der Zeit der Zugang\n"
"zum Heiligen Reich befindet..."
BOX_BREAK

"Hast Du das schon gewußt?"
)
,
MSG(
"Les légendes racontent que le \n"
"Temple du Temps est l'entrée du\n"
"Saint Royaume..."
BOX_BREAK

"C'est trop terrible ça!"
)
)

DEFINE_MESSAGE(0x701F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "ハ〜ッ　ハッ　ハッ　ハッ！！\n"
SHIFT(39) "バッカで〜　コイツ！！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) COLOR(RED) "ゼルダ姫" COLOR(DEFAULT) "に　会いたいからって\n"
SHIFT(30) "城に　忍び込むなんてよ！" TEXTID(0x7020)
)
,
MSG(
UNSKIPPABLE "Wha-ha-ha! What a crazy guy!"
BOX_BREAK

UNSKIPPABLE "Can you believe this guy was \n"
"crazy enough to try to sneak into\n"
"the castle to see " COLOR(RED) "Princess Zelda" COLOR(DEFAULT) "?" TEXTID(0x7020)
)
,
MSG(
UNSKIPPABLE "Hahaha! Welch dämlicher\n"
"Kerl!"
BOX_BREAK

UNSKIPPABLE "Kannst Du Dir vorstellen, daß er\n"
"sich tatsächlich ins Schloß \n"
"hineinschleichen wollte,\n"
"um " COLOR(RED) "Prinzessin Zelda" COLOR(DEFAULT) " zu sehen?" TEXTID(0x7020)
)
,
MSG(
UNSKIPPABLE "Wha-ha-ha! Il est dingue ce type!"
BOX_BREAK

UNSKIPPABLE "Il a essayé d'entrer dans le \n"
"château pour voir la " COLOR(RED) "Princesse \n"
"Zelda" COLOR(DEFAULT) "! Il est dingue, lui!" TEXTID(0x7020)
)
)

DEFINE_MESSAGE(0x7020, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "このバカのせいで　お城の警備が\n"
SHIFT(30) "キビしく　なったんだぜ！\n"
SHIFT(39) "ハッハッハッハッハ！"
)
,
MSG(
"All because of this idiot, they've \n"
"tightened security at the castle.\n"
"Wha-ha-hah!"
)
,
MSG(
"Wegen diesem Idioten haben sie\n"
"die Bewachung vor dem Schloß\n"
"noch verstärkt!\n"
"Hahaha!"
)
,
MSG(
"A cause de ce crétin ils ont \n"
"doublé la garde! C'est malin!\n"
"Wha-ha-hah!"
)
)

DEFINE_MESSAGE(0x7021, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "もーかった　もーかった…"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "また　なにか　売れそうなモノを\n"
SHIFT(36) "探しに　行こうかねぇ。" TEXTID(0x7022)
)
,
MSG(
UNSKIPPABLE "I made a lot of money!"
BOX_BREAK

UNSKIPPABLE "Maybe I should go look for\n"
"more things to sell!" TEXTID(0x7022)
)
,
MSG(
UNSKIPPABLE "Ich habe tierisch viel verdient!"
BOX_BREAK

UNSKIPPABLE "Vielleicht sollte ich noch\n"
"mehr Sachen suchen, die ich\n"
"verkaufen kann!" TEXTID(0x7022)
)
,
MSG(
UNSKIPPABLE "J'ai gagné beaucoup d'argent!"
BOX_BREAK

UNSKIPPABLE "Moi j'aime vendre des trucs \n"
"et des machins!" TEXTID(0x7022)
)
)

DEFINE_MESSAGE(0x7022, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
COLOR(BLUE) "ハイリア湖" COLOR(DEFAULT) "に　行ってみようかねぇ。\n"
SHIFT(21) "あそこには　いろんなモノが\n"
SHIFT(18) "流れつくからねぇ。　ヒヒヒ…"
)
,
MSG(
"I know! I should go to " COLOR(BLUE) "Lake Hylia" COLOR(DEFAULT) "!\n"
"Many things float down the river\n"
"and end up there!\n"
"Hah hah!"
)
,
MSG(
"Ich weiß schon! Ich sollte zum\n"
COLOR(BLUE) "Hylia-See" COLOR(DEFAULT) " gehen!\n"
"Da wird immer eine Menge\n"
"interessantes Zeug angeschwemmt!"
)
,
MSG(
"Je vais me faire des sous près du\n"
COLOR(BLUE) "Lac Hylia" COLOR(DEFAULT) "! On trouve plein d'objets\n"
"au fond de l'eau! Hah hah!"
)
)

DEFINE_MESSAGE(0x7023, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(27) "やあ、いなかっぽい　少年。\n"
SHIFT(30) "これが　" COLOR(LIGHTBLUE) "ハイラルの町" COLOR(DEFAULT) "だ。\n"
SHIFT(18) "ゆっくり　楽しんでいきなよ。" TEXTID(0x7024)
)
,
MSG(
UNSKIPPABLE "Hey, forest boy! This is the " COLOR(LIGHTBLUE) "city\n"
"of Hyrule" COLOR(DEFAULT) "! Take your time and\n"
"enjoy the sights!" TEXTID(0x7024)
)
,
MSG(
UNSKIPPABLE "Hey, Waldschrat! Das ist " COLOR(LIGHTBLUE) "Hyrule" COLOR(DEFAULT) "!\n"
"Nimm Dir Zeit und schau Dich in\n"
"aller Ruhe um!" TEXTID(0x7024)
)
,
MSG(
UNSKIPPABLE "Hé! P'tit gars de la forêt! \n"
"Voici le " COLOR(LIGHTBLUE) "Bourg d'Hyrule" COLOR(DEFAULT) "! \n"
"Prends ton temps et admire!" TEXTID(0x7024)
)
)

DEFINE_MESSAGE(0x7024, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
COLOR(LIGHTBLUE) "ハイラル城" COLOR(DEFAULT) "の見学は　正面の大通り、\n"
SHIFT(9) COLOR(BLUE) "町の裏" COLOR(DEFAULT) "なら　左の路地へ　行きな。"
)
,
MSG(
"If you came here to see " COLOR(LIGHTBLUE) "Hyrule\n"
"Castle" COLOR(DEFAULT) ", take the street on your\n"
"right."
BOX_BREAK

"If you want to see the " COLOR(BLUE) "back \n"
"alleys" COLOR(DEFAULT) " of the town, take the\n"
"street to the left."
)
,
MSG(
"Wenn Du zum " COLOR(LIGHTBLUE) "Schloß von Hyrule" COLOR(DEFAULT) "\n"
"möchtest, nimm die Straße zu\n"
"Deiner Rechten."
BOX_BREAK

"Wenn Du die " COLOR(BLUE) "Seitenstraßen" COLOR(DEFAULT) "\n"
"erforschen willst, geh\n"
"nach links."
)
,
MSG(
"Pour aller au " COLOR(LIGHTBLUE) "Château d'Hyrule" COLOR(DEFAULT) ",\n"
"prends la rue à droite."
BOX_BREAK

"Pour examiner la " COLOR(BLUE) "ruelle" COLOR(DEFAULT) ", emprunte\n"
"la rue de gauche."
)
)

DEFINE_MESSAGE(0x7025, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(78) "ウフ…"
BOX_BREAK

SHIFT(60) "アナタって…"
BOX_BREAK

SHIFT(36) "ハイラル王みたいに…"
BOX_BREAK

SHIFT(66) "ス・テ・キ…"
BOX_BREAK

SHIFT(78) "ウフ…"
)
,
MSG(
"Ohh..."
BOX_BREAK

"You are...so handsome..."
BOX_BREAK

"Just like the King of Hyrule..."
BOX_BREAK

"Hee hee..."
)
,
MSG(
"Hey!"
BOX_BREAK

"Du... siehst gut aus..."
BOX_BREAK

"Fast wie der König von Hyrule..."
BOX_BREAK

"Hihihi..."
)
,
MSG(
"Amour..."
BOX_BREAK

"Tu es si...beau..."
BOX_BREAK

"Comme le Roi d'Hyrule..."
BOX_BREAK

"Amour..."
)
)

DEFINE_MESSAGE(0x7026, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(78) "フッ…"
BOX_BREAK

SHIFT(72) "キミは…"
BOX_BREAK

SHIFT(54) "ゼルダ姫より…"
BOX_BREAK

SHIFT(72) "美しい…"
BOX_BREAK

SHIFT(78) "フッ…"
)
,
MSG(
"Ohh..."
BOX_BREAK

"You are..."
BOX_BREAK

"more beautiful..."
BOX_BREAK

"than Princess Zelda..."
BOX_BREAK

"Ohh..."
)
,
MSG(
"Ohh..."
BOX_BREAK

"Du bist ja..."
BOX_BREAK

"noch schöner..."
BOX_BREAK

"als Prinzessin Zelda..."
BOX_BREAK

"Ohh..."
)
,
MSG(
"Comme tu es belle..."
BOX_BREAK

"Tu es..."
BOX_BREAK

"Encore plus belle que..."
BOX_BREAK

"La Princesse Zelda..."
BOX_BREAK

"Mon p'tit chat... Je t'aime tant!"
)
)

DEFINE_MESSAGE(0x7027, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(33) "ぼうや、闇の民族の話を\n"
SHIFT(30) "聞いたことが　あるかな？"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "我々　ハイリア人の「影」…\n"
SHIFT(12) COLOR(BLUE) "シーカー族" COLOR(DEFAULT) "という　者たちじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "代々　ハイラル王家に　忠誠を誓い\n"
SHIFT(3) "王族の身辺を　守っていたそうな…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "しかし、平和な時代に　なって\n"
SHIFT(9) "シーカー族を　見た者はおらん…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "じゃが、うわさでは…" TEXTID(0x7028)
)
,
MSG(
UNSKIPPABLE "Have you heard the legend of the\n"
"\"Shadow Folk\"?"
BOX_BREAK

UNSKIPPABLE "They are the " COLOR(BLUE) "Sheikah" COLOR(DEFAULT) "...the shadows\n"
"of the Hylians."
BOX_BREAK

UNSKIPPABLE "They say they swore allegiance to\n"
"the King of Hyrule and guarded\n"
"the Royal Family."
BOX_BREAK

UNSKIPPABLE "But with the long peace, no one\n"
"has seen a Sheikah around here \n"
"for a long time."
BOX_BREAK

UNSKIPPABLE "However..." TEXTID(0x7028)
)
,
MSG(
UNSKIPPABLE "Hast Du von der Legende des\n"
"\"Schattenvolks\" gehört?"
BOX_BREAK

UNSKIPPABLE "Es sind die " COLOR(BLUE) "Shiekah" COLOR(DEFAULT) "... Die Schatten\n"
"der Hylianer."
BOX_BREAK

UNSKIPPABLE "Es heißt, sie hätten dem König von\n"
"Hyrule ewige Treue geschworen,\n"
"um ihn und seine Familie\n"
"stets zu beschützen."
BOX_BREAK

UNSKIPPABLE "Aber nach solch einer langen Zeit\n"
"voller Frieden, haben wir schon\n"
"lange keinen der Shiekah mehr\n"
"gesehen."
BOX_BREAK

UNSKIPPABLE "Dennoch..." TEXTID(0x7028)
)
,
MSG(
UNSKIPPABLE "Connais-tu le \"peuple de l'ombre\"?"
BOX_BREAK

UNSKIPPABLE "Les " COLOR(BLUE) "Sheikahs " COLOR(DEFAULT) "sont l'ombre des \n"
"Hyliens."
BOX_BREAK

UNSKIPPABLE "On dit qu'ils ont juré fidélité au\n"
"Roi d'Hyrule! Leur tâche est de \n"
"protéger la Famille Royale."
BOX_BREAK

UNSKIPPABLE "Mais ils se font très rares par \n"
"ces temps de paix ..."
BOX_BREAK

UNSKIPPABLE "Enfin..." TEXTID(0x7028)
)
)

DEFINE_MESSAGE(0x7028, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "お城に　一人だけ\n"
SHIFT(48) COLOR(BLUE) "シーカー族" COLOR(DEFAULT) "の女が\n"
SHIFT(42) "いるらしいんじゃ…"
)
,
MSG(
"I heard there is one " COLOR(BLUE) "Sheikah \n"
COLOR(DEFAULT) "woman living in the castle..."
)
,
MSG(
"Ich habe gehört, daß es noch eine\n"
"Vertreterin der " COLOR(BLUE) "Shiekah" COLOR(DEFAULT) " geben soll.\n"
"Sie lebt im Schloß..."
)
,
MSG(
"J'ai entendu dire qu'un " COLOR(BLUE) "Sheikah \n"
COLOR(DEFAULT) "vivait au château..."
)
)

DEFINE_MESSAGE(0x7029, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) COLOR(RED) "ゼルダ姫" COLOR(DEFAULT) "に　お会いしたいだと？"
BOX_BREAK

SHIFT(45) "お前も　町の評判を\n"
SHIFT(36) "きいて　やってきたな？"
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(51) "かえれ！　かえれ！" QUICKTEXT_DISABLE "\n"
SHIFT(33) "姫が　お前のような者に\n"
SHIFT(18) "お会いになるわけが　ないわ！"
)
,
MSG(
"So you say you want to see\n"
COLOR(RED) "Princess Zelda" COLOR(DEFAULT) ", eh?"
BOX_BREAK

"You probably heard about her in\n"
"town and decided you had to meet\n"
"her... Well..."
BOX_BREAK

QUICKTEXT_ENABLE "Go home!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Get out of here!" QUICKTEXT_DISABLE "\n"
"The Princess would never grant an\n"
"audience to the likes of you!"
)
,
MSG(
"Also Du sagst, Du willst \n"
COLOR(RED) "Prinzessin Zelda" COLOR(DEFAULT) " sehen, wie?"
BOX_BREAK

"Du hast bestimmt im Ort von ihr\n"
"gehört und willst sie jetzt\n"
"unbedingt kennenlernen... Nun..."
BOX_BREAK

QUICKTEXT_ENABLE "Geh heim!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Verschwinde!" QUICKTEXT_DISABLE "\n"
"Einem wie Dir würde die Prinzessin\n"
"niemals Audienz gewähren!"
)
,
MSG(
"Quoi? Tu veux voir la " COLOR(RED) "Princesse\n"
"Zelda" COLOR(DEFAULT) "?\n"
"Haaaa... Encore un!"
BOX_BREAK

"Bon! Ce que tu veux, on s'en \n"
"contre-fiche!\n"
"Alors..."
BOX_BREAK

QUICKTEXT_ENABLE "Du balai!" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Ouste!!" QUICKTEXT_DISABLE "\n"
"Jamais la Princesse n'accordera\n"
"une audience à un bouseux comme \n"
"toi! Hah ah ah ha ha!"
)
)

DEFINE_MESSAGE(0x702A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ＺＺＺＺＺ…"
BOX_BREAK

SHIFT(51) "ムニャ、ムニャ…"
BOX_BREAK

SHIFT(21) "いらっしゃ〜い…　ムニャ…\n"
SHIFT(9) "ウチの牧場は…　楽しいだ〜よ…\n"
SHIFT(72) "ＺＺＺ…"
)
,
MSG(
"Z Z Z Z Z...."
BOX_BREAK

"Mumble mumble..."
BOX_BREAK

"Welcome...our ranch is so fun..."
BOX_BREAK

"C'mon and look around..."
)
,
MSG(
"Zzzzzzzz..."
BOX_BREAK

"Murmel... Grummel..."
BOX_BREAK

"Milch... frisch abliefern..."
BOX_BREAK

"Muß... mich beeilen..."
)
,
MSG(
"Z Z Z Z Z...."
BOX_BREAK

"Ronnnff...Zzzzzz...Hmmmpfff! "
BOX_BREAK

"Bienvenue...au Ranch..."
BOX_BREAK

"Il est beau mon Ranch...\n"
"Roooooonnnfle...."
)
)

DEFINE_MESSAGE(0x702B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(60) "なんだーよ？" QUICKTEXT_DISABLE "\n"
"せっかく　キモチよく　寝てたのに…"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(45) "What in tarnation?" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Can't a person get a little shut-\n"
"eye around here?"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(53) "Was zum Teufel...?" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "Kann man denn nicht mal für eine\n"
"Sekunde die Augen zumachen?"
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE SHIFT(50) "Nom d'un pétard!" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE "On peut pas piquer un p'tit\n"
"roupillon en paix ici?"
)
)

DEFINE_MESSAGE(0x702C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(42) "オマエ　だれだーよ？"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "そうだーよ、オラが\n"
SHIFT(6) "ロンロン牧場の　牧場主" COLOR(RED) "タロン" COLOR(DEFAULT) "だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "お城に　牛乳とどけに　きただが、\n"
SHIFT(6) "ねむくなって　つい　ウトウトと…"
BOX_BREAK

UNSKIPPABLE SHIFT(87) SFX(NA_SE_VO_TA_CRY_0) "え？\n"
SHIFT(21) "マロンが　オラを　探してた？"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "し、しまっただ〜よ！！\n"
SHIFT(6) "マロンを　ほっといたままだ〜よ！"
BOX_BREAK

SHIFT(27) "また　怒られるだぁ〜っ！！" EVENT
)
,
MSG(
UNSKIPPABLE "Hello, and who might you be?"
BOX_BREAK

UNSKIPPABLE "Yep, I'm " COLOR(RED) "Talon" COLOR(DEFAULT) ", the owner of Lon \n"
"Lon Ranch."
BOX_BREAK

UNSKIPPABLE "I went to the castle to deliver\n"
"some milk, but I sat down here to\n"
"rest, and I guess I fell asleep..."
BOX_BREAK

UNSKIPPABLE SHIFT(76) SFX(NA_SE_VO_TA_CRY_0) "What?!\n"
"Malon was looking for me?\n"
"I'm gonna catch it from her now!"
BOX_BREAK

UNSKIPPABLE "I messed up bad, leaving Malon\n"
"behind to wait for me!"
BOX_BREAK

UNSKIPPABLE "She's really gonna let me have it!" EVENT
)
,
MSG(
UNSKIPPABLE "Hallo! Wer bist Du?"
BOX_BREAK

UNSKIPPABLE "Also ich bin " COLOR(RED) "Talon" COLOR(DEFAULT) ", Besitzer der\n"
"Lon Lon-Farm."
BOX_BREAK

UNSKIPPABLE "Ich war auf dem Weg zum Schloß,\n"
"um frische Milch zu liefern. Als\n"
"ich mich kurz ausruhen wollte, muß\n"
"ich wohl eingeschlafen sein..."
BOX_BREAK

UNSKIPPABLE SHIFT(76) SFX(NA_SE_VO_TA_CRY_0) "Was?!\n"
"Malon sucht nach mir?\n"
"Da bekomme ich wieder gehörigen\n"
"Ärger!"
BOX_BREAK

UNSKIPPABLE "Ich hatte ihr doch versprochen..."
BOX_BREAK

UNSKIPPABLE "Au weia, das läuft nicht gut!" EVENT
)
,
MSG(
UNSKIPPABLE "Bonjour mon ami! Qui es-tu?"
BOX_BREAK

UNSKIPPABLE "Ouaip! Moi c'est " COLOR(RED) "Talon" COLOR(DEFAULT) ", patron du\n"
"Ranch Lon Lon."
BOX_BREAK

UNSKIPPABLE "Je suis venu au château livrer du\n"
"lait et...j'ai dû m'endormir..."
BOX_BREAK

UNSKIPPABLE SHIFT(76) SFX(NA_SE_VO_TA_CRY_0) "Quoi?!\n"
SHIFT(45) "Malon me cherche?\n"
"Houlà je vais m'faire crier dessus!"
BOX_BREAK

UNSKIPPABLE "Malon n'aime pas mes p'tites\n"
"pauses!"
BOX_BREAK

UNSKIPPABLE "Je ne vais pas y couper!" EVENT
)
)

DEFINE_MESSAGE(0x702D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(60) "オイ、止まれ！\n"
SHIFT(60) "そこの　小僧！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(55) "Hey you! Stop!\n"
SHIFT(40) "You, kid, over there!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(53) "Hey, Kleiner! Halt!\n"
"Stehenbleiben! Im Namen des Königs!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(15) "Hé! Le mioche! Viens par là!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x702E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(93) "！"
BOX_BREAK_DELAYED(10)

UNSKIPPABLE SHIFT(72) "だ、だれ？" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(95) "!"
BOX_BREAK_DELAYED(10)

UNSKIPPABLE SHIFT(78) QUICKTEXT_ENABLE "Who?!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(83) QUICKTEXT_ENABLE "Nanu?" QUICKTEXT_DISABLE EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(95) "!"
BOX_BREAK_DELAYED(10)

UNSKIPPABLE SHIFT(78) QUICKTEXT_ENABLE "Qui?!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x702F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(33) "あ、あなた　だれなの…？"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "どうやって　こんなところまで…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(58) "Who are you?"
BOX_BREAK

UNSKIPPABLE "How did you get past the guards?" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(58) "Wer bist Du?"
BOX_BREAK

UNSKIPPABLE "Wie hast Du es geschafft,\n"
"an den Wachen vorbeizukommen?" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(66) "Qui es-tu?"
BOX_BREAK

UNSKIPPABLE "Comment as-tu évité les gardes?" EVENT
)
)

DEFINE_MESSAGE(0x7030, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"持っているのでしょう？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Do you have it? \n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Nun, hast Du ihn dabei? \n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Alors...tu as la Pierre?\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x7031, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) "おかしいわね…\n"
SHIFT(27) "あなたが　お告げの人だと\n"
SHIFT(48) "思ったのですが…"
BOX_BREAK

SHIFT(6) "ほんとに　持っていないのですか？\n"
SHIFT(66) "ほんとは…" EVENT
)
,
MSG(
"Well, that's odd...\n"
"I thought you might be the one\n"
"from my dream...\n"
"You really don't have it?"
BOX_BREAK

"Tell me the truth..." EVENT
)
,
MSG(
"Das ist seltsam...\n"
"Ich glaubte eben, Du wärst der\n"
"Junge aus meinem Traum...\n"
"Du hast ihn wirklich nicht?"
BOX_BREAK

"Sag mir bitte die Wahrheit..." EVENT
)
,
MSG(
"Etrange...\n"
"Tu ressembles pourtant au garçon \n"
"de mon rêve...\n"
"Vraiment? Tu ne l'as pas?"
BOX_BREAK

"Allez... Dis-moi la vérité..." EVENT
)
)

DEFINE_MESSAGE(0x7032, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(69) "やっぱり！" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(45) "Just as I thought!" EVENT
)
,
MSG(
UNSKIPPABLE "Wie ich mir dachte!" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(52) "J'en étais sûre!" EVENT
)
)

DEFINE_MESSAGE(0x7033, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"だれにも　言ってはいけませんよ！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Please keep this a secret from\n"
"everyone...\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Du wirst das doch\n"
"nicht weitererzählen?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Okay!\n"
    "Doch!" COLOR(DEFAULT)
)
,
MSG(
"Bon...ne répète ça à personne...\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x7034, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(33) "おしゃべりな　男の方は\n"
SHIFT(42) "よく　ありませんよ。" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
"C'mon...don't be a blabber-mouth!" EVENT
)
,
MSG(
"Also das hätte ich von Dir\n"
"nicht gedacht!" EVENT
)
,
MSG(
"Tu vas cafarder? \n"
"Sois gentil..." EVENT
)
)

DEFINE_MESSAGE(0x7035, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(63) "それは　こう\n"
SHIFT(30) "伝えられているのです…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "The legend goes like this..." EVENT
)
,
MSG(
UNSKIPPABLE "Dies ist die Legende..." EVENT
)
,
MSG(
UNSKIPPABLE "Voici ce que dit la légende..." EVENT
)
)

DEFINE_MESSAGE(0x7036, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "三人の　女神さまは　\n"
"ハイラルの　どこかに　神の力を持つ　\n"
SHIFT(6) COLOR(RED) "トライフォース" COLOR(DEFAULT) "を　隠されました。"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(66) "その力とは\n"
SHIFT(9) "トライフォースを　手にした者の\n"
SHIFT(18) "願いを　かなえるものでした。"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(33) "心　正しき者が　願えば、\n"
SHIFT(6) "ハイラルは　善き世界に　変わり…"
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(33) "心　悪しき者が　願えば、\n"
SHIFT(15) "世界は　悪に　支配される…\n"
SHIFT(24) "そう　伝えられていました。"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(21) "そこで、いにしえの賢者達は\n"
"心　悪しき者から　トライフォースを\n"
"守るため　" COLOR(LIGHTBLUE) "時の神殿" COLOR(DEFAULT) "を造られました。" FADE(90)
)
,
MSG(
UNSKIPPABLE SHIFT(18) "The three goddesses hid the\n"
SHIFT(7) COLOR(RED) "Triforce " COLOR(DEFAULT) "containing the power of\n"
SHIFT(13) "the gods somewhere in Hyrule."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(69) "The power\n"
SHIFT(3) "to grant the wish of the one who\n"
SHIFT(10) "holds the Triforce in his hands."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(3) "If someone with a righteous heart\n"
SHIFT(7) "makes a wish, it will lead Hyrule\n"
SHIFT(9) "to a golden age of prosperity...."
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(6) "If someone with an evil mind has\n"
SHIFT(10) "his wish granted, the world will\n"
SHIFT(2) "be consumed by evil...That is what\n"
SHIFT(53) "has been told...."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(22) "So, the ancient Sages built\n"
SHIFT(2) "the " COLOR(LIGHTBLUE) "Temple of Time" COLOR(DEFAULT) " to protect the\n"
SHIFT(32) "Triforce from evil ones." FADE(90)
)
,
MSG(
UNSKIPPABLE SHIFT(17) "Das " COLOR(RED) "Triforce" COLOR(DEFAULT) " vereinte die Kraft\n"
SHIFT(10) "der drei Göttinnen. Sie verbargen\n"
SHIFT(28) "es an einem Ort in Hyrule."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(11) "Denn das Triforce hat die Macht,\n"
SHIFT(9) "die Wünsche dessen wahr werden\n"
SHIFT(9) "zu lassen, der es in Händen hält!"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(13) "Ein rechtschaffenes Herz würde\n"
SHIFT(19) "Hyrule in goldene Zeiten voller\n"
SHIFT(20) "Reichtum und Frieden führen..."
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(13) "Würden Wünsche eines Menschen\n"
SHIFT(18) "mit niederer Gesinnung erfüllt,\n"
SHIFT(7) "so verschlänge das Böse die Welt!"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(15) "Daher errichteten die Weisen die\n"
SHIFT(6) COLOR(LIGHTBLUE) "Zitadelle der Zeit" COLOR(DEFAULT) ", um das Triforce\n"
SHIFT(12) "vor bösen Mächten zu bewahren." FADE(90)
)
,
MSG(
UNSKIPPABLE SHIFT(10) "Les trois déesses dissimulèrent\n"
"la " COLOR(RED) "Triforce" COLOR(DEFAULT) " renfermant la puissance\n"
SHIFT(4) "des dieux quelque part en Hyrule."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(31) "Cette puissance permet\n"
SHIFT(10) "d'exaucer un voeu au détenteur\n"
SHIFT(57) "de la Triforce."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(17) "Si ce voeu est prononcé par\n"
SHIFT(8) "un homme au coeur pur, Hyrule \n"
SHIFT(38) "connaîtra l'âge d'or...."
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(8) "Mais si le voeu est formulé par\n"
SHIFT(4) "un homme mauvais, le monde sera\n"
SHIFT(21) "englouti dans les flammes..."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(8) "Les Sages anciens ont construit\n"
SHIFT(5) "le " COLOR(LIGHTBLUE) "Temple du Temps " COLOR(DEFAULT) "pour tenir la\n"
SHIFT(34) "Triforce à l'écart des \n"
SHIFT(51) "forces obscures." FADE(90)
)
)

DEFINE_MESSAGE(0x7037, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(36) "そう…　時の神殿とは、\n"
SHIFT(9) "この地上から　聖地へ入るための\n"
SHIFT(57) "入口なのです。"
BOX_BREAK

SHIFT(48) "でも、その　入口は\n"
SHIFT(15) "「" COLOR(LIGHTBLUE) "時の扉（とびら）" COLOR(DEFAULT) "」と　呼ばれる\n"
SHIFT(12) "石のカベで　閉ざされています。"
BOX_BREAK

SHIFT(75) "そして、\n"
SHIFT(21) "その「扉」を　開くためには…"
BOX_BREAK

SHIFT(30) "三つの" COLOR(RED) "精霊石" COLOR(DEFAULT) "を　あつめ、\n"
SHIFT(36) "神殿に　おさめよ…　と\n"
SHIFT(33) "伝えられているのです。"
BOX_BREAK

SHIFT(6) "さらに　もうひとつ　必要なもの…\n"
SHIFT(45) "言い伝えと　ともに\n"
SHIFT(27) "王家が　守っている宝物…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
"That's right... The Temple of Time\n"
"is the entrance through which you\n"
"can enter the Sacred Realm from\n"
"our world."
BOX_BREAK

"But the entrance is sealed with\n"
"a stone wall called the \n"
COLOR(LIGHTBLUE) "Door of Time" COLOR(DEFAULT) "."
BOX_BREAK

"And, in order to open the door,\n"
"it is said that you need to collect\n"
"three " COLOR(RED) "Spiritual Stones" COLOR(DEFAULT) "."
BOX_BREAK

"And another thing you need...is\n"
"the treasure that the Royal Family\n"
"keeps along with this legend..." EVENT
)
,
MSG(
"Die Zitadelle der Zeit ist\n"
"in unserer Welt der Zugang zum\n"
"Heiligen Reich."
BOX_BREAK

"Doch dieser Zugang ist versiegelt\n"
"durch eine steinerne Mauer, die\n"
"man " COLOR(LIGHTBLUE) "Zeitportal" COLOR(DEFAULT) " nennt."
BOX_BREAK

"Es heißt, man brauche die drei\n"
COLOR(RED) "Heiligen Steine" COLOR(DEFAULT) ", um den Zugang\n"
"zu öffnen."
BOX_BREAK

"Und noch etwas... Nämlich ein\n"
"uraltes Relikt, das im Besitz der\n"
"Königsfamilie von Hyrule ist..." EVENT
)
,
MSG(
"En effet... Le Temple du Temps est\n"
"la porte vers le Saint Royaume \n"
"légendaire."
BOX_BREAK

"Mais la " COLOR(LIGHTBLUE) "Porte du Temps" COLOR(DEFAULT) " en interdit\n"
"l'accès..."
BOX_BREAK

"Pour ouvrir cette porte les trois\n"
COLOR(RED) "Pierres Ancestrales" COLOR(DEFAULT) " sont\n"
"indispensables."
BOX_BREAK

"Ainsi que le trésor de la Famille\n"
"Royale......" EVENT
)
)

DEFINE_MESSAGE(0x7038, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(57) "ごめんなさい。\n"
SHIFT(21) "うまく　お話しできなくて…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
"Oh, I'm sorry. \n"
"I'm not very good at storytelling..." EVENT
)
,
MSG(
"Oh, tut mir leid...\n"
"Ich konnte noch nie gut\n"
"Geschichten erzählen..." EVENT
)
,
MSG(
"Excuse-moi...\n"
"Je ne suis pas douée pour conter \n"
"les légendes..." EVENT
)
)

DEFINE_MESSAGE(0x7039, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(51) QUICKTEXT_ENABLE "どうしたのです？" QUICKTEXT_DISABLE "\n"
SHIFT(39) "気づかれたのですか？"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "かまうことは　ありません！"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "今は　わたしたちが\n"
SHIFT(33) "なにを　考えているか…\n"
SHIFT(21) "わかりはしないのですから！" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "What happened?" QUICKTEXT_DISABLE " Did he see you?"
BOX_BREAK

UNSKIPPABLE "Don't worry."
BOX_BREAK

UNSKIPPABLE "He doesn't have any idea what\n"
"we're planning...yet!" EVENT
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Was ist passiert?" QUICKTEXT_DISABLE " Hat er Dich\n"
"gesehen?"
BOX_BREAK

UNSKIPPABLE "Hab keine Angst."
BOX_BREAK

UNSKIPPABLE "Er hat keine Ahnung von unseren\n"
"Plänen... Noch nicht!" EVENT
)
,
MSG(
UNSKIPPABLE QUICKTEXT_ENABLE "Que s'est-il passé?" QUICKTEXT_DISABLE " Il t'a vu?"
BOX_BREAK

UNSKIPPABLE "Ce n'est pas grave..."
BOX_BREAK

UNSKIPPABLE "Il ignore nos plans... \n"
"Enfin pour l'instant!" EVENT
)
)

DEFINE_MESSAGE(0x703A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
"信じてください　お願いです！\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Please!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "I don't believe you." COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Bitte!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Ich glaube kein Wort!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Je t'en prie!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "OK\n"
    "Je ne te crois pas" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x703B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(63) "ありがとう！" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(66) "Thank you!" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(56) "Ich danke Dir!" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(78) "Merci!" EVENT
)
)

DEFINE_MESSAGE(0x703C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "わたしの　乳母が\n"
SHIFT(12) "城の外まで　案内してくれます。\n"
SHIFT(24) "こわがらず　お話しなさい。"
)
,
MSG(
"My attendant will guide you out of\n"
"the castle. Don't be afraid to talk\n"
"to her."
)
,
MSG(
"Meine Vertraute wird Dich aus\n"
"dem Schloß geleiten. Unterhalte\n"
"Dich ruhig mit ihr."
)
,
MSG(
"Ma nourrice te guidera hors du\n"
"château. N'aie pas peur et va lui \n"
"parler."
)
)

DEFINE_MESSAGE(0x703D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "精霊石…\n"
SHIFT(24) "ついに　見つけたのですね！"
BOX_BREAK

SHIFT(27) "精霊石を守る　種族の長は\n"
SHIFT(15) COLOR(BLUE) "王家に伝わる歌" COLOR(DEFAULT) "を　知る者だけに\n"
SHIFT(30) "心をひらくと　言います。"
BOX_BREAK

SHIFT(15) "それは　もう　知っていますね？"
)
,
MSG(
"The Spiritual Stone...\n"
"You finally found it!"
BOX_BREAK

"It is said that the races that hold\n"
"the Spiritual Stones open their\n"
"minds only to one who knows the\n"
COLOR(BLUE) "melody of the Royal Family" COLOR(DEFAULT) "."
BOX_BREAK

"But you already know that, don't\n"
"you?"
)
,
MSG(
"Der Heilige Stein...\n"
"Du hast ihn gefunden!"
BOX_BREAK

"Wesen, deren Volk einen Heiligen\n"
"Stein besitzt, vertrauen sich nur\n"
"dem an, der eine" COLOR(BLUE) " Melodie aus dem\n"
"Erbe unserer Familie" COLOR(DEFAULT) " kennt."
BOX_BREAK

"Doch das wußtest Du bereits,\n"
"nicht wahr?"
)
,
MSG(
"La Pierre Ancestrale...\n"
"Tu l'as enfin trouvée!"
BOX_BREAK

"Il est dit que les races possédant \n"
"une Pierre Ancestrale ouvrent leur \n"
"esprit au son de la " COLOR(BLUE) "Mélodie de la \n"
"Famille Royale" COLOR(DEFAULT) "."
BOX_BREAK

"Mais tu connais déjà cette \n"
"mélodie, n'est-ce pas?"
)
)

DEFINE_MESSAGE(0x703E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "おくさま、ごぞんじ〜？\n"
SHIFT(21) "ゼルダ姫って　神のお告げを\n"
SHIFT(24) "夢で　きくんですってよ〜！"
)
,
MSG(
"Hey, have you heard that\n"
"Princess Zelda sees prophetic \n"
"visions in her dreams?"
)
,
MSG(
"Hey, hast Du schon gehört, daß\n"
"Prinzessin Zelda in ihren Träumen\n"
"die Zukunft voraussieht?"
)
,
MSG(
"Hé! Sais-tu que la Princesse \n"
"Zelda fait souvent des rêves \n"
"prémonitoires?"
)
)

DEFINE_MESSAGE(0x703F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "なによ！　じゃま　じゃま！"
)
,
MSG(
"Huh? What? Shoo, kid! Shoo!"
)
,
MSG(
"Häh? Was? Still, Kleiner! Still!"
)
,
MSG(
"Gné? Quoué? Comment? \n"
"Va-t'en, petit..."
)
)

DEFINE_MESSAGE(0x7040, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "三つの　くぼみが　あり、\n"
SHIFT(33) "文字が　刻まれている…"
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(30) "三つの精霊石を　持つ者、\n"
COLOR(LIGHTBLUE) COLOR(DEFAULT) SHIFT(3) "ここに立ち、" COLOR(LIGHTBLUE) "時のオカリナ" COLOR(DEFAULT) "をもって\n"
SHIFT(48) COLOR(LIGHTBLUE) "時の歌" COLOR(DEFAULT) "を　奏でよ。" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(48) "と、刻まれている。" EVENT
)
,
MSG(
"There are three hollows and \n"
"an inscription here...."
BOX_BREAK

QUICKTEXT_ENABLE "Ye who owns 3 Spiritual Stones " COLOR(BLUE) "\n"
COLOR(DEFAULT) "Stand with the " COLOR(LIGHTBLUE) "Ocarina of Time" COLOR(BLUE) "\n"
COLOR(DEFAULT) "And play the " COLOR(LIGHTBLUE) "Song of Time" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

"That is how the inscription reads." EVENT
)
,
MSG(
"Hier sind drei Vertiefungen\n"
"und eine Inschrift..."
BOX_BREAK

QUICKTEXT_ENABLE "Jener mit den drei Heiligen Steinen" COLOR(BLUE) "\n"
COLOR(DEFAULT) "nehme seine " COLOR(LIGHTBLUE) "Okarina " COLOR(DEFAULT) "zur Hand" COLOR(BLUE) "\n"
COLOR(DEFAULT) "und spiele hier die " COLOR(LIGHTBLUE) "Hymne der Zeit" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

"Seltsam, aber so steht\n"
"es geschrieben..." EVENT
)
,
MSG(
"Il y a trois socles et une \n"
"inscription...."
BOX_BREAK

QUICKTEXT_ENABLE "Toi qui portes les trois Pierres\n"
"Ancestrales, entonne le " COLOR(LIGHTBLUE) "chant du \n"
"temps " COLOR(DEFAULT) "avec l'" COLOR(LIGHTBLUE) "Ocarina du Temps" COLOR(DEFAULT) "." QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x7041, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "もっと　安くしなさいよ〜っ！"
)
,
MSG(
"C'mon, can't you make it any\n"
"cheaper?"
)
,
MSG(
"Hey, geht das nicht auch ein\n"
"bißchen billiger?"
)
,
MSG(
"Allez, fais-moi un prix! \n"
"Une réduc' quoi! \n"
"C'est trop cher!"
)
)

DEFINE_MESSAGE(0x7042, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "コレは　アタシが　買ったのヨ！"
)
,
MSG(
"Hey, let go! It's mine!\n"
"I found it first!"
)
,
MSG(
"Hey, nimm Deine Finger weg!\n"
"Ich hab es zuerst gesehen!"
)
,
MSG(
"Hé! Va-t'en! C'est à môa!\n"
"Je l'ai vu la première!"
)
)

DEFINE_MESSAGE(0x7043, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(81) "だれ？\n"
SHIFT(27) "アタシのオシリさわったの！"
)
,
MSG(
"Hey, who bumped me?!"
)
,
MSG(
"Hey, wer drängelt sich da vor?!"
)
,
MSG(
"Hé! Qui c'est qui m'a poussée? \n"
"QUI?!"
)
)

DEFINE_MESSAGE(0x7044, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ゲルド族の　連中が\n"
SHIFT(15) "この町に　やってくるなんて…\n"
SHIFT(39) "なんか　怪しいよな…"
)
,
MSG(
"We don't see a lot of Gerudos in\n"
"these parts...\n"
"Something fishy is going on!"
)
,
MSG(
"Es ist komisch, daß Gerudos hier\n"
"eingedrungen sind... Das kommt mir\n"
"seltsam vor...!"
)
,
MSG(
"Etrange...Un groupe de Gerudos \n"
"dans la ville...Il se passe quelque\n"
"chose de pas très correct dans \n"
"le coin! Ouais, ça c'est sûr!"
)
)

DEFINE_MESSAGE(0x7045, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "あの白馬に　乗ってたのは\n"
SHIFT(57) "ゼルダ姫さま？"
)
,
MSG(
"Wasn't that Princess Zelda riding\n"
"on the white horse?!"
)
,
MSG(
"War das nicht Prinzessin Zelda\n"
"auf diesem Schimmel?"
)
,
MSG(
"C'était pas la Princesse Zelda sur\n"
"ce cheval blanc?!"
)
)

DEFINE_MESSAGE(0x7046, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "もうちょっとで　黒い馬に\n"
SHIFT(3) "けり飛ばされるとこだったんだぜ！"
)
,
MSG(
"I almost got kicked by that\n"
"black horse!"
)
,
MSG(
"Der schwarze Hengst dieses\n"
"Reiters hätte mich um ein Haar\n"
"zertrampelt!"
)
,
MSG(
"j'ai failli me faire écraser par \n"
"cet énorme cheval noir!\n"
"L'est fou l'aut' grand type!"
)
)

DEFINE_MESSAGE(0x7047, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "あの黒い馬に　乗っていたのは\n"
SHIFT(3) "ゲルドの盗賊王と　恐れられている\n"
SHIFT(21) "ガノンドロフに　違いない！！"
)
,
MSG(
"That guy riding on the black horse\n"
"must have been Ganondorf, who is\n"
"renowned as the Gerudo King of \n"
"Thieves."
)
,
MSG(
"Der Typ auf dem schwarzen Pferd\n"
"war bestimmt Ganondorf, der Herr\n"
"der Gerudo-Kriegerinnen!"
)
,
MSG(
"L'homme sur le cheval noir \n"
"s'appelle Ganondorf. Il est connu \n"
"comme étant le Roi des Voleurs \n"
"Gerudo."
)
)

DEFINE_MESSAGE(0x7048, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "なにか　あったの？"
)
,
MSG(
"What happened?!"
)
,
MSG(
"Was ist denn hier passiert?"
)
,
MSG(
"Hein?! Que s'est-il passé?!"
)
)

DEFINE_MESSAGE(0x7049, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "コイツ、なんか　怖がってるぜ！\n"
SHIFT(21) "なさけねぇ〜！　ハッハッハ！"
)
,
MSG(
"Look at that guy--he's so scared!\n"
"What a wimp!\n"
"Ha ha hah!"
)
,
MSG(
"Schau Dir den Weichling an!\n"
"Er hat sich vor Angst fast in die \n"
"Hosen gemacht!\n"
"Hahaha!"
)
,
MSG(
"Regarde ce type! Il est mort de\n"
"trouille! Quelle mauviette!\n"
"Ha ha hah!"
)
)

DEFINE_MESSAGE(0x704A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "なにか　恐ろしいことが\n"
SHIFT(27) "起きる予感が　するぞい…\n"
SHIFT(3) "この町を　出たほうが　いいかのう？"
)
,
MSG(
"I have a feeling something\n"
"terrible is going to happen...\n"
"Maybe I should leave town soon."
)
,
MSG(
"Ich habe das Gefühl, daß noch viel\n"
"Schrecklicheres passieren wird...\n"
"Vielleicht sollte ich abhauen!"
)
,
MSG(
"Hmmmm...ça craint dans l'coin...\n"
"Je vais prendre des vacances!"
)
)

DEFINE_MESSAGE(0x704B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "お城が　みょうに　さわがしいな…\n"
SHIFT(18) "ぼうずも　気をつけるんだぜ。"
)
,
MSG(
"Something happened in the castle!\n"
"Kid, you'd better be careful!"
)
,
MSG(
"Im Schloß ist etwas Schlimmes\n"
"passiert! Sei lieber vorsichtig,\n"
"Kleiner!"
)
,
MSG(
"Un drame est arrivé au château!\n"
"Sois prudent, gamin!"
)
)

DEFINE_MESSAGE(0x704C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "さあ　その" COLOR(RED) "カギ" COLOR(DEFAULT) "で　奥の部屋へ\n"
SHIFT(54) "進んで　進んで！"
)
,
MSG(
"With that " COLOR(RED) "key" COLOR(DEFAULT) ", proceed to the \n"
"room ahead. Go, go!"
)
,
MSG(
"Mit diesem " COLOR(RED) "Schlüssel" COLOR(DEFAULT) " kannst Du\n"
"den nächsten Raum betreten.\n"
"Los doch! Worauf wartest Du?"
)
,
MSG(
"Cette " COLOR(RED) "clé" COLOR(DEFAULT) " te permet d'ouvrir la\n"
"salle suivante!"
)
)

DEFINE_MESSAGE(0x704D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(6) "あの白馬に　少女を　抱きかかえて\n"
SHIFT(30) "いたのは…　シーカー族？"
)
,
MSG(
"The one riding on the white horse\n"
"holding the little girl...\n"
"Wasn't that a legendary Sheikah?"
)
,
MSG(
"Die Person auf dem Schimmel, die\n"
"das Mädchen festhielt... War das\n"
"nicht eine der legendären Shiekah?"
)
,
MSG(
"Sur le cheval blanc...\n"
"C'était pas cette...Sheikah?"
)
)

DEFINE_MESSAGE(0x704E, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(42) NAME "…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "目覚めよ…　選ばれし者…\n"
SHIFT(21) NAME "よ…"
)
,
MSG(
UNSKIPPABLE SHIFT(45) NAME "..."
BOX_BREAK

UNSKIPPABLE SHIFT(69) "Wake up...\n"
SHIFT(5) NAME ", the chosen one..."
)
,
MSG(
UNSKIPPABLE SHIFT(45) NAME "..."
BOX_BREAK

UNSKIPPABLE SHIFT(75) "Wach auf!\n"
SHIFT(33) "Du bist der Auserwählte!"
)
,
MSG(
UNSKIPPABLE SHIFT(45) NAME "..."
BOX_BREAK

UNSKIPPABLE SHIFT(55) "Reviens à toi...\n"
SHIFT(75) "...L'élu..."
)
)

DEFINE_MESSAGE(0x704F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "ワシの名は　" COLOR(RED) "ラウル" COLOR(DEFAULT) "。\n"
SHIFT(18) "その昔　時の神殿を　つくり…\n"
SHIFT(9) "聖地との　道をつなぎし者じゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "ここは　" COLOR(RED) "賢者の間" COLOR(DEFAULT) "。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "聖地の要である　光の神殿に\n"
SHIFT(39) "残された　最後の砦…"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "お前が　時の台座から　抜きとった\n"
"退魔の剣　" COLOR(RED) "マスターソード" COLOR(DEFAULT) "…　それが\n"
"聖地への　最後のカギだったのじゃ。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) NAME "よ…　落ち着いて\n"
SHIFT(6) "おのれの姿…　見るがよい！"
)
,
MSG(
UNSKIPPABLE "I am " COLOR(RED) "Rauru" COLOR(DEFAULT) ", one of the ancient\n"
"Sages..."
BOX_BREAK

UNSKIPPABLE "Ages ago, we ancient Sages\n"
"built the Temple of Time to \n"
"protect the entrance to the\n"
"Sacred Realm..."
BOX_BREAK

UNSKIPPABLE "This is the " COLOR(RED) "Chamber of Sages" COLOR(DEFAULT) "," COLOR(RED) " \n"
COLOR(DEFAULT) "inside the Temple of Light..."
BOX_BREAK

UNSKIPPABLE "The Temple of Light, situated in\n"
"the very center of the Sacred \n"
"Realm, is the last stronghold \n"
"against Ganondorf's evil forces."
BOX_BREAK

UNSKIPPABLE "The " COLOR(RED) "Master Sword" COLOR(DEFAULT) "--the evil-\n"
"destroying sword that you pulled\n"
"out of the Pedestal of Time--was \n"
"the final key to the Sacred Realm."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"Don't be alarmed...\n"
"Look at yourself...!"
)
,
MSG(
UNSKIPPABLE "Ich bin " COLOR(RED) "Rauru" COLOR(DEFAULT) ", einer der Weisen..."
BOX_BREAK

UNSKIPPABLE "Ich habe die Zitadelle der Zeit\n"
"erbaut, um den Zugang zum\n"
"Heiligen Reich zu schützen..."
BOX_BREAK

UNSKIPPABLE "Dies ist die " COLOR(RED) "Halle der Weisen \n"
COLOR(DEFAULT) "im Tempel des Lichts..."
BOX_BREAK

UNSKIPPABLE "Der Tempel des Lichts befindet\n"
"sich im Zentrum des Heiligen\n"
"Reiches. Er ist die letzte Festung\n"
"gegen die Macht Ganondorfs."
BOX_BREAK

UNSKIPPABLE "Das " COLOR(RED) "Master-Schwert" COLOR(DEFAULT) ", das alles\n"
"Böse vernichtet und das Du aus\n"
"dem Zeitenfels zogst, öffnete\n"
"das Tor zum Heiligen Reich!"
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"Erschrick nicht...\n"
"Schau Dich an..."
)
,
MSG(
UNSKIPPABLE "Je suis " COLOR(RED) "Rauru" COLOR(DEFAULT) "...\n"
"L'un des anciens Sages."
BOX_BREAK

UNSKIPPABLE "Jadis, les Sages bâtirent le Temple \n"
"du Temps pour protéger l'entrée \n"
"du Saint Royaume Légendaire..."
BOX_BREAK

UNSKIPPABLE "Voici le " COLOR(RED) "Sanctuaire des Sages" COLOR(DEFAULT) " au\n"
"sein même du Temple de la \n"
"Lumière!"
BOX_BREAK

UNSKIPPABLE "Le Temple de la Lumière se trouve\n"
"au centre du Saint Royaume. Il est\n"
"le dernier rempart contre \n"
"l'influence maléfique de Ganondorf."
BOX_BREAK

UNSKIPPABLE "L'" COLOR(RED) "Epée de Légende" COLOR(DEFAULT) ", la lame \n"
"purificatrice jadis prisonnière \n"
"du piédestal du Temps, est la\n"
"clé ultime du Saint Royaume."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"N'aie pas peur...\n"
"Regarde-toi...!"
)
)

DEFINE_MESSAGE(0x7050, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(30) COLOR(LIGHTBLUE) "見て、" NAME "！\n"
COLOR(DEFAULT) SHIFT(30) COLOR(LIGHTBLUE) "大きくなってる！？\n"
COLOR(DEFAULT) SHIFT(30) COLOR(LIGHTBLUE) "成長してるヨ！！" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(35) COLOR(LIGHTBLUE) "Look " NAME "!\n"
COLOR(DEFAULT) SHIFT(50) COLOR(LIGHTBLUE) "You're big now!!\n"
COLOR(DEFAULT) SHIFT(49) COLOR(LIGHTBLUE) "You've grown up!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(29) COLOR(LIGHTBLUE) "Sieh nur, " NAME "!\n"
COLOR(DEFAULT) SHIFT(49) COLOR(LIGHTBLUE) "Du bist gewachsen!\n"
COLOR(DEFAULT) SHIFT(37) COLOR(LIGHTBLUE) "Du bist älter geworden!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(27) COLOR(LIGHTBLUE) "Regarde " NAME "!" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE SHIFT(56) COLOR(LIGHTBLUE) "Tu as grandi!!\n"
COLOR(DEFAULT) SHIFT(50) COLOR(LIGHTBLUE) "Tu es un adulte!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x7051, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "マスターソードは、\n"
SHIFT(36) "心　悪しき者は　決して\n"
SHIFT(24) "触れることのできぬ　聖剣。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "そして　" COLOR(RED) "時の勇者" COLOR(DEFAULT) "としての　\n"
SHIFT(21) "資格ある者だけが　台座から\n"
SHIFT(24) "抜き放つことの　できる剣。"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "しかし…\n"
SHIFT(33) "お前は　時の勇者として\n"
SHIFT(39) "まだ　おさなすぎた…"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "それゆえ　お前の魂は\n"
SHIFT(21) "七年の間　ねむりつづけた…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "そして今、時の勇者としての\n"
SHIFT(6) "目覚めの時が　おとずれたのじゃ。"
BOX_BREAK

"どうじゃ…　己が運命、理解したか？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "The Master Sword is a sacred\n"
"blade which evil ones may never\n"
"touch...."
BOX_BREAK

UNSKIPPABLE "Only one worthy of the title of\n"
"\"" COLOR(RED) "Hero of Time" COLOR(DEFAULT) "\"" COLOR(RED) " " COLOR(DEFAULT) "can pull it from \n"
"the Pedestal of Time...."
BOX_BREAK

UNSKIPPABLE "However, you were too young to \n"
"be the Hero of Time...."
BOX_BREAK

UNSKIPPABLE "Therefore, your spirit was \n"
"sealed here for seven years."
BOX_BREAK

UNSKIPPABLE "And now that you are old enough,\n"
"the time has come for you to\n"
"awaken" COLOR(RED) " " COLOR(DEFAULT) "as the Hero of Time!"
BOX_BREAK

"Well, do you understand your \n"
"destiny?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Das Master-Schwert hat eine\n"
"heilige Klinge, die nie in die \n"
"Hände des Bösen fallen darf..."
BOX_BREAK

UNSKIPPABLE "Nur jener, der zu Recht den\n"
"Namen " COLOR(RED) "Herr der Zeiten" COLOR(DEFAULT) " trägt, ist\n"
"in der Lage, es aus dem Zeitenfels\n"
"zu ziehen..."
BOX_BREAK

UNSKIPPABLE "Doch Du warst noch zu jung für\n"
"diese Aufgabe..."
BOX_BREAK

UNSKIPPABLE "Daher haben wir Deine Seele für\n"
"sieben Jahre hier gebannt."
BOX_BREAK

UNSKIPPABLE "Nun ist es Zeit, daß Du wieder in\n"
"die Welt zurückkehrst und Deine\n"
"Mission vollendest!"
BOX_BREAK

"Nun, hast Du verstanden, was\n"
"Deine Bestimmung ist?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "L'Epée de Légende est une lame \n"
"sacrée interdite aux forces \n"
"obscures...."
BOX_BREAK

UNSKIPPABLE "Seul le \"" COLOR(RED) "Héros du Temps" COLOR(DEFAULT) "\" peut la \n"
"retirer de son socle de granit...."
BOX_BREAK

UNSKIPPABLE "Mais tu étais trop jeune pour être\n"
"ce Héros du Temps...."
BOX_BREAK

UNSKIPPABLE "Ton esprit fut scellé en ce lieu\n"
"pendant sept ans."
BOX_BREAK

UNSKIPPABLE "Mais il est enfin temps de \n"
"t'éveiller et de laisser la \n"
"destinée du Héros du Temps \n"
"s'accomplir par tes actes!"
BOX_BREAK

"As-tu conscience de la tâche à \n"
"accomplir?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x7052, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(27) "うむ、とまどっておるな…\n"
SHIFT(48) "最初から　話そう。" TEXTID(0x7051)
)
,
MSG(
"Right, it looks like you are \n"
"confused... Let me tell you \n"
"again, from the beginning." TEXTID(0x7051)
)
,
MSG(
"Nun, es sieht aus, als wärest Du\n"
"etwas verwirrt... Laß mich noch\n"
"einmal von vorn beginnen." TEXTID(0x7051)
)
,
MSG(
"Oui, je comprends, ton esprit est \n"
"encore embrumé par les voiles d'un\n"
"repos de sept ans...Je vais tout\n"
"te répéter." TEXTID(0x7051)
)
)

DEFINE_MESSAGE(0x7053, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "いま一度、思い出すがよい。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ハイラルの平和を　願って\n"
SHIFT(18) "お前が　開いた　「時の扉」から\n"
"この　禁断の聖地へ　あろうことか…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "ゲルドの盗賊王　" COLOR(RED) "ガノンドロフ" COLOR(DEFAULT) "が\n"
SHIFT(39) "侵入してきたのじゃ！"
BOX_BREAK

UNSKIPPABLE "奴は　聖地の中心…　この光の神殿で\n"
SHIFT(18) "トライフォースを　手に入れ、\n"
SHIFT(12) "その力で　" COLOR(RED) "魔王" COLOR(DEFAULT) "となったのじゃ。"
BOX_BREAK

UNSKIPPABLE "奴の魔力は　神殿を通して流れ出し、\n"
SHIFT(12) "わずか　七年で　ハイラル全土を\n"
SHIFT(15) "魔物の国と　変えてしもうた…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "もはや　この聖地でさえ\n"
SHIFT(24) "ワシの力が　およぶ場所は、\n"
SHIFT(39) "ごく　わずかな場所…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "この　賢者の間だけに　すぎぬ。"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "しかし、希望は　ある…"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "我らには\n"
SHIFT(30) "賢者の力が　残っておる！"
BOX_BREAK

UNSKIPPABLE SHIFT(48) COLOR(RED) "七人の賢者" COLOR(DEFAULT) "の力が\n"
SHIFT(60) "目覚めし時…"
BOX_BREAK

UNSKIPPABLE SHIFT(60) COLOR(RED) "賢者の封印" COLOR(DEFAULT) "は\n"
SHIFT(39) "すべての　悪しき力を\n"
SHIFT(27) "その彼方に　閉じこめる…"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "この　ワシ、\n"
SHIFT(24) "ラウルも　その賢者の一人。\n"
SHIFT(72) "そして…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "賢者たちと共に　戦う力…\n"
SHIFT(21) "それが　" COLOR(RED) "時の勇者" COLOR(DEFAULT) "なのじゃ！！"
BOX_BREAK

UNSKIPPABLE SHIFT(75) "されば、\n"
"マスターソードに　選ばれし勇者よ！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "我が光を　その身に宿し、\n"
SHIFT(15) "賢者の力を　おのが力と　せよ！"
)
,
MSG(
UNSKIPPABLE "But, remember..."
BOX_BREAK

UNSKIPPABLE "Though you opened the Door of \n"
"Time in the name of peace..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", the Gerudo King of\n"
"Thieves, used it to enter this \n"
"forbidden Sacred Realm!"
BOX_BREAK

UNSKIPPABLE "He obtained the Triforce from\n"
"the Temple of Light, and with its \n"
"power, he became the " COLOR(RED) "King of Evil" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "His evil power radiated from the\n"
"temples of Hyrule, and in seven\n"
"short years, it transformed Hyrule\n"
"into a world of monsters."
BOX_BREAK

UNSKIPPABLE "My power now has only little \n"
"influence, even in this Sacred\n"
"Realm..."
BOX_BREAK

UNSKIPPABLE "Namely, this Chamber of Sages."
BOX_BREAK

UNSKIPPABLE "But there is still hope..."
BOX_BREAK

UNSKIPPABLE "The power of the Sages remains."
BOX_BREAK

UNSKIPPABLE "When the power of all the " COLOR(RED) "Sages\n"
COLOR(DEFAULT) "is awakened..."
BOX_BREAK

UNSKIPPABLE "The " COLOR(RED) "Sages' Seals" COLOR(DEFAULT) " will contain\n"
"all the evil power in the void of \n"
"the Realm..."
BOX_BREAK

UNSKIPPABLE "I, Rauru, am one of the Sages...\n"
"And..."
BOX_BREAK

UNSKIPPABLE "Your power to fight together with\n"
"the Sages makes you the \n"
COLOR(RED) "Hero of Time" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "The Hero of Time, chosen by the\n"
"Master Sword!"
BOX_BREAK

UNSKIPPABLE "Keep my spirit with you...\n"
"And, find the power of the other\n"
"Sages and add their might to your\n"
"own!"
)
,
MSG(
UNSKIPPABLE "Doch vergiß niemals..."
BOX_BREAK

UNSKIPPABLE "Obwohl Du nur mit edelstem\n"
"Ansinnen das Zeitportal geöffnet\n"
"hast..."
BOX_BREAK

UNSKIPPABLE "...hat der niederträchtige\n"
COLOR(RED) "Ganondorf" COLOR(DEFAULT) " dadurch das Heilige\n"
"Reich betreten können!"
BOX_BREAK

UNSKIPPABLE "Er riß das Triforce-Fragment im\n"
"Tempel des Lichts an sich. Durch\n"
"dessen Kraft wurde er zum\n"
COLOR(RED) "Großmeister des Bösen" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Seine schwarze Macht überzog\n"
"ganz Hyrule, entweihte die Tempel\n"
"und verwandelte das einst blühende\n"
"Land in ein Refugium des Unheils!"
BOX_BREAK

UNSKIPPABLE "Meine Kraft ist nur noch\n"
"verschwindend gering, selbst in\n"
"diesem Heiligen Reich..."
BOX_BREAK

UNSKIPPABLE "Sie kann lediglich diese Halle\n"
"der Weisen noch schützen."
BOX_BREAK

UNSKIPPABLE "Doch noch ist Hoffnung..."
BOX_BREAK

UNSKIPPABLE "Die Kraft der Weisen blieb\n"
"erhalten."
BOX_BREAK

UNSKIPPABLE "Wenn die Kraft jedes der " COLOR(RED) "Sieben\n"
"Weisen " COLOR(DEFAULT) "wieder geweckt wird..."
BOX_BREAK

UNSKIPPABLE "...kann mit den " COLOR(RED) "Amuletten" COLOR(DEFAULT) " die\n"
"Macht des Bösen ins Höllenreich\n"
"verbannt werden!"
BOX_BREAK

UNSKIPPABLE "Ich, Rauru, bin einer dieser\n"
"Weisen..."
BOX_BREAK

UNSKIPPABLE "Der Auserwählte, die Kraft der\n"
"Weisen zu wecken, bist Du - der\n"
COLOR(RED) "Herr der Zeiten" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Du bist als Träger des \n"
"Master-Schwerts dazu auserwählt!"
BOX_BREAK

UNSKIPPABLE "Ich übertrage Dir meine Macht...\n"
"Geh nun, erwecke die Kraft der\n"
"anderen Weisen und vereine deren\n"
"Macht mit Deiner Stärke!"
)
,
MSG(
UNSKIPPABLE "Mais souviens-toi..."
BOX_BREAK

UNSKIPPABLE "Même si tu as ouvert les Portes \n"
"du Temps au nom de la paix et \n"
"de la justice..."
BOX_BREAK

UNSKIPPABLE COLOR(RED) "Ganondorf" COLOR(DEFAULT) ", le Roi des voleurs\n"
"Gerudo, en a profité pour violer\n"
"le Saint Royaume interdit!"
BOX_BREAK

UNSKIPPABLE "Il a dérobé la Triforce dans le \n"
"Temple de la Lumière, et grâce à\n"
"ses nouveaux pouvoirs il s'est \n"
"sacré " COLOR(RED) "Seigneur du Malin" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Son pouvoir maléfique a perverti\n"
"les Temples d'Hyrule et a transfor-\n"
"mé en sept ans notre monde en \n"
"un chaos innommable."
BOX_BREAK

UNSKIPPABLE "Mon pouvoir est bien faible, mon\n"
"influence mineure, dans le \n"
"Saint Royaume...et..."
BOX_BREAK

UNSKIPPABLE "...dans ce Sanctuaire des Sages."
BOX_BREAK

UNSKIPPABLE "Mais il reste un espoir."
BOX_BREAK

UNSKIPPABLE "La puissance des Sages."
BOX_BREAK

UNSKIPPABLE "Quand la puissance des " COLOR(RED) "sept\n"
"Sages " COLOR(DEFAULT) "se manifestera......"
BOX_BREAK

UNSKIPPABLE "...les influences maléfiques seront \n"
"endiguées par le " COLOR(RED) "Sceau des Sages" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Moi, Rauru, je suis l'un des Sages.\n"
"Et..."
BOX_BREAK

UNSKIPPABLE "...ta puissance combinée à celle\n"
"des Sages te proclame...\n"
COLOR(RED) "Héros du Temps" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Elu par l'Epée de Légende,\n"
"ta destinée sera de guider Hyrule\n"
"vers la lumière."
BOX_BREAK

UNSKIPPABLE "Garde mon esprit avec toi...\n"
"Trouve les autres Sages et reviens\n"
"ici consacré de leurs pouvoirs!"
)
)

DEFINE_MESSAGE(0x7054, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(6) COLOR(LIGHTBLUE) NAME "…\n"
COLOR(DEFAULT) SHIFT(12) "時の神殿" COLOR(LIGHTBLUE) "に　もどったみたいね。\n"
COLOR(DEFAULT) SHIFT(9) COLOR(LIGHTBLUE) "ほんとに　" COLOR(DEFAULT) "七年" COLOR(LIGHTBLUE) "も　たったのかな？" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE SHIFT(81) COLOR(LIGHTBLUE) "あれ？\n"
COLOR(DEFAULT) SHIFT(33) COLOR(LIGHTBLUE) "こどもの時　使えたのに\n"
COLOR(DEFAULT) COLOR(LIGHTBLUE) "使えなくなった" COLOR(DEFAULT) "武器" COLOR(LIGHTBLUE) "があるみたい…" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE SHIFT(45) COLOR(LIGHTBLUE) "とにかく　ここから\n"
COLOR(DEFAULT) SHIFT(39) COLOR(LIGHTBLUE) "出るしかなさそうね。" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) NAME "...we're back in the\n"
COLOR(DEFAULT) "Temple of Time" COLOR(LIGHTBLUE) "...\n"
"But have " COLOR(DEFAULT) "seven years" COLOR(LIGHTBLUE) " really\n"
"passed?" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "It looks like you won't be\n"
"able to use some of the " COLOR(DEFAULT) "weapons" COLOR(LIGHTBLUE) "\n"
"you found as a kid anymore..."
BOX_BREAK

COLOR(DEFAULT) UNSKIPPABLE COLOR(LIGHTBLUE) "Let's get out of here!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) NAME "... Wir sind zurück\n"
"in der " COLOR(DEFAULT) "Zitadelle der Zeit" COLOR(LIGHTBLUE) "...\n"
"Aber sind wirklich " COLOR(DEFAULT) "sieben Jahre\n"
COLOR(LIGHTBLUE) "vergangen?" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Es sieht so aus, als könntest\n"
"Du einige " COLOR(DEFAULT) "Waffen" COLOR(LIGHTBLUE) ", die Du damals\n"
"gefunden hast, nicht mehr\n"
"benutzen..."
BOX_BREAK

COLOR(DEFAULT) UNSKIPPABLE COLOR(LIGHTBLUE) "Los, laß uns gehen!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) "Nous sommes de retour dans le \n"
COLOR(DEFAULT) "Temple du Temps" COLOR(LIGHTBLUE) "...\n"
COLOR(DEFAULT) "Sept ans" COLOR(LIGHTBLUE) " se sont-ils vraiment\n"
"écoulés?" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "Je pense que tu ne pourras plus\n"
"utiliser ton équipement d'enfant \n"
"ainsi que certaines " COLOR(DEFAULT) "armes" COLOR(LIGHTBLUE) "..."
BOX_BREAK

COLOR(DEFAULT) UNSKIPPABLE COLOR(LIGHTBLUE) "Bon...partons d'ici!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x7055, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "なんだよ　ヒック！"
BOX_BREAK

SHIFT(27) "昼間っから　サケ飲んじゃ\n"
SHIFT(18) "悪いってのかよ！　え、ぼーず！"
BOX_BREAK

SHIFT(75) "ヒック！"
)
,
MSG(
"Heyyy, what...? \n"
"What's wrong with loitering\n"
"around all day?"
BOX_BREAK

"Huh, kid?"
)
,
MSG(
"Hey, was ist...? \n"
"Was ist schlimm daran, den Tag\n"
"über rumzuhängen, Kleiner?"
BOX_BREAK

"Was willst Du?"
)
,
MSG(
"Hééé! Quoi...? \n"
"Qu'y a-t-il de mal à ne rien\n"
"faire de la journée?"
BOX_BREAK

"Hein? hein? hein?"
)
)

DEFINE_MESSAGE(0x7056, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "待っていたよ、時の勇者…"
)
,
MSG(
UNSKIPPABLE "I've been waiting for you, \n"
"Hero of Time..."
)
,
MSG(
UNSKIPPABLE "Ich habe auf Dich gewartet,\n"
"junger Held..."
)
,
MSG(
UNSKIPPABLE "Je t'attendais,\n"
"Héros du Temps..."
)
)

DEFINE_MESSAGE(0x7057, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "世界が　魔に支配されし時、\n"
SHIFT(9) "聖地からの声に　目覚めし者たち\n"
SHIFT(42) COLOR(RED) "五つの神殿" COLOR(DEFAULT) "にあり…"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "一つは　" COLOR(ADJUSTABLE) "深き森" COLOR(DEFAULT) "　に…"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "一つは　" COLOR(RED) "高き山" COLOR(DEFAULT) "　に…"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "一つは　" COLOR(BLUE) "広き湖" COLOR(DEFAULT) "　に…"
BOX_BREAK

UNSKIPPABLE SHIFT(42) "一つは　" COLOR(PURPLE) "屍の館" COLOR(DEFAULT) "　に…"
BOX_BREAK

UNSKIPPABLE SHIFT(36) "一つは　" COLOR(YELLOW) "砂の女神" COLOR(DEFAULT) "　に…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "目覚めし者たち、\n"
SHIFT(9) "時の勇者を得て、魔を封じ込め…\n"
SHIFT(15) "やがて　平和の光を　取り戻す。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "我ら、" COLOR(BLUE) "シーカー族" COLOR(DEFAULT) "に残る\n"
SHIFT(18) "神殿についての　言い伝えだ。"
)
,
MSG(
UNSKIPPABLE "When evil rules all, an awakening\n"
"voice from the Sacred Realm will\n"
"call those destined to be Sages,\n"
"who dwell in the " COLOR(RED) "five temples" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "One in a " COLOR(ADJUSTABLE) "deep forest" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "One on a " COLOR(RED) "high mountain" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "One under a " COLOR(BLUE) "vast lake" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "One within the " COLOR(PURPLE) "house of the dead" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "One inside a " COLOR(YELLOW) "goddess of the sand" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Together with the Hero of Time, \n"
"the awakened ones will bind the\n"
"evil and return the light of peace\n"
"to the world..."
BOX_BREAK

UNSKIPPABLE "This is the legend of the temples\n"
"passed down by my people, the\n"
COLOR(BLUE) "Sheikah" COLOR(DEFAULT) "."
)
,
MSG(
UNSKIPPABLE "Beherrscht das Böse die Welt,\n"
"weilen jene Weisen, die von der\n"
"Stimme des Heiligen Reiches erweckt\n"
"werden, noch in den " COLOR(RED) "fünf Tempeln" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Einer in " COLOR(ADJUSTABLE) "dunklen Wäldern" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Einer auf " COLOR(RED) "hohem Berge" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Einer im " COLOR(BLUE) "tiefen See" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Einer an der " COLOR(PURPLE) "Stätte des Todes" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Einer innerhalb der\n"
COLOR(YELLOW) "Göttin des Sandes" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Zusammen mit dem Auserwählten\n"
"werden diese ihre Kräfte einsetzen,\n"
"um der Welt den Frieden\n"
"wiederzugeben..."
BOX_BREAK

UNSKIPPABLE "Dies ist die Legende der Tempel,\n"
"wie sie von meinem Volk, den\n"
COLOR(BLUE) "Shiekah" COLOR(DEFAULT) ", überliefert wurde."
)
,
MSG(
UNSKIPPABLE "Quand le mal est sur le monde, \n"
"ceux sensibles à l'appel du Saint\n"
"Royaume Légendaire se réfugient \n"
"dans les " COLOR(RED) "cinq Temples" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Dans une " COLOR(ADJUSTABLE) "profonde forêt" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Sur une " COLOR(RED) "haute montagne" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Dans un " COLOR(BLUE) "vaste lac" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Dans la " COLOR(PURPLE) "maison des morts" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Dans la " COLOR(YELLOW) "déesse de sable" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Grâce au Héros du Temps les \n"
"éveillés chasseront les forces \n"
"maléfiques du monde et apporteront \n"
"paix et justice en Hyrule!"
BOX_BREAK

UNSKIPPABLE "Telle est la légende des temples,\n"
"transmise de génération en \n"
"génération par mon peuple, les\n"
COLOR(BLUE) "Sheikahs" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x7058, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "アラ、ゴメンナサイ！\n"
SHIFT(48) "まだ　準備中なの。\n"
SHIFT(27) "もう　ちょっと　まってね。" EVENT
)
,
MSG(
"Oh, I'm sorry.\n"
"We're not open for business yet.\n"
"Please come back soon!" EVENT
)
,
MSG(
"Oh, tut mir leid.\n"
"Wir haben noch nicht geöffnet.\n"
"Komm bitte später wieder!" EVENT
)
,
MSG(
"Oh! Je suis désolée.\n"
"Nous ne sommes pas ouverts pour \n"
"l'instant. Revenez plus tard!" EVENT
)
)

DEFINE_MESSAGE(0x7059, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(45) COLOR(RED) "マスターソード" COLOR(DEFAULT) "を！\n"
SHIFT(3) "聖なる剣で　ガノンを　倒すのです！"
)
,
MSG(
UNSKIPPABLE "Use the " COLOR(RED) "Master Sword" COLOR(DEFAULT) "!\n"
"Destroy Ganon with the sacred\n"
"sword!"
)
,
MSG(
UNSKIPPABLE "Nimm das " COLOR(RED) "Master-Schwert" COLOR(DEFAULT) "!\n"
"Vernichte Ganon mit Deiner\n"
"heiligen Waffe!"
)
,
MSG(
UNSKIPPABLE "Frappe-le avec " COLOR(RED) "l'Epée de Légende" COLOR(DEFAULT) "!\n"
"Seule la sainte lame peut terrasser\n"
"Ganon!"
)
)

DEFINE_MESSAGE(0x705A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(45) "待っていたよ、\n"
SHIFT(45) NAME "。"
)
,
MSG(
UNSKIPPABLE "I have been waiting for you,\n"
NAME "."
)
,
MSG(
UNSKIPPABLE "Ich habe auf Dich gewartet,\n"
NAME "."
)
,
MSG(
UNSKIPPABLE "Je t'attendais,\n"
NAME "."
)
)

DEFINE_MESSAGE(0x705B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "時の勇者　" NAME "…\n"
SHIFT(15) "キミは　数々の苦難を　乗り越え、\n"
SHIFT(9) "六賢者を　目覚めさせてくれた…"
BOX_BREAK

UNSKIPPABLE SHIFT(75) "そして、\n"
SHIFT(12) "今　また　魔王ガノンドロフとの\n"
SHIFT(3) "対決の時を　迎えようとしている…"
)
,
MSG(
UNSKIPPABLE NAME ", the Hero of Time..."
BOX_BREAK

UNSKIPPABLE "You have overcome many \n"
"hardships and awakened six Sages."
BOX_BREAK

UNSKIPPABLE "And now you have a final\n"
"challenge, a showdown with \n"
"Ganondorf, the King of Evil...."
)
,
MSG(
UNSKIPPABLE NAME ", der Auserwählte..."
BOX_BREAK

UNSKIPPABLE "Du hast unzählige Gefahren \n"
"überwunden und die sechs\n"
"Weisen erweckt."
BOX_BREAK

UNSKIPPABLE "Nun wartet Deine größte Aufgabe:\n"
"Ein letztes Zusammentreffen mit\n"
"Ganondorf, dem Großmeister\n"
"des Bösen..."
)
,
MSG(
UNSKIPPABLE NAME ", Héros du Temps..."
BOX_BREAK

UNSKIPPABLE "Tu as traversé bien des épreuves\n"
"pour éveiller les six Sages."
BOX_BREAK

UNSKIPPABLE "Il ne te reste plus que la dernière\n"
"épreuve, la plus terrible! La \n"
"confrontation finale avec \n"
"Ganondorf, le Seigneur du Malin..."
)
)

DEFINE_MESSAGE(0x705C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "聖なる三角を　求めるならば、\n"
SHIFT(60) "心して　聞け。"
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(21) "聖なる三角の　在るところ…\n"
SHIFT(18) "聖地は　己の心を映す鏡なり。"
BOX_BREAK_DELAYED(70)

UNSKIPPABLE SHIFT(18) "そこに　足踏み入れし者の心、\n"
SHIFT(30) "邪悪なれば　魔界と化し、\n"
SHIFT(24) "清らかなれば　楽園となる。"
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(9) "トライフォース…　聖なる三角…\n"
SHIFT(15) "それは　力、知恵、そして勇気…\n"
SHIFT(18) "三つの心をはかる　天秤なり。"
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(42) "聖三角に触れし者…\n"
SHIFT(15) "三つの力を　あわせ持つならば\n"
SHIFT(18) "万物を統べる　真の力を得ん。"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(15) "しかし…　その力なき者ならば\n"
SHIFT(27) "聖三角は　力、知恵、勇気の\n"
SHIFT(24) "三つに　砕け散るであろう。"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(39) "あとに　残りしものは\n"
SHIFT(33) "三つの内の　一つのみ…\n"
SHIFT(9) "それが、その者の　信ずる心なり。"
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(18) "もし、真の力を　欲するならば\n"
SHIFT(6) "失った二つの力を　取り戻すべし。"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(51) "その　二つの力…\n"
SHIFT(15) "神により　新たに選ばれし者の\n"
SHIFT(30) "手の甲に　宿るものなり。" FADE(90)
)
,
MSG(
UNSKIPPABLE SHIFT(16) "If you would seek the sacred\n"
SHIFT(40) "triangle, listen well..."
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(9) "The resting place of the sacred\n"
SHIFT(9) "triangle, the Sacred Realm, is a\n"
SHIFT(20) "mirror that reflects what is\n"
SHIFT(59) "in the heart..."
BOX_BREAK_DELAYED(70)

UNSKIPPABLE SHIFT(5) "the heart of one who enters it...\n"
SHIFT(12) "If an evil heart, the Realm will\n"
SHIFT(20) "become full of evil; if pure,\n"
SHIFT(4) "the Realm will become a paradise."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(2) "The Triforce...the sacred triangle...\n"
SHIFT(10) "it is a balance that weighs the\n"
SHIFT(60) "three forces:\n"
SHIFT(19) "Power, Wisdom and Courage."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(2) "If the heart of the one who holds\n"
SHIFT(6) "the sacred triangle has all three\n"
SHIFT(10) "forces in balance, that one will\n"
SHIFT(3) "gain the True Force to govern all."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(6) "But, if that one's heart is not in\n"
SHIFT(2) "balance, the Triforce will separate\n"
SHIFT(50) "into three parts:\n"
SHIFT(19) "Power, Wisdom and Courage."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(4) "Only one part will remain for the\n"
SHIFT(2) "one who touched the Triforce...the\n"
SHIFT(7) "part representing the force that\n"
SHIFT(39) "one most believes in."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(4) "If that one seeks the True Force,\n"
SHIFT(12) "that one must acquire the two\n"
SHIFT(68) "lost parts."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(18) "Those two parts will be held\n"
SHIFT(7) "within others chosen by destiny,\n"
SHIFT(10) "who will bear the Triforce mark\n"
SHIFT(17) "on the backs of their hands." FADE(90)
)
,
MSG(
UNSKIPPABLE SHIFT(36) "Suchst Du das Triforce,\n"
SHIFT(56) "so höre gut zu..."
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(8) "Es befindet sich im Heiligen Reich.\n"
SHIFT(22) "Dies ist ein Ort, der auf die\n"
SHIFT(8) "Wünsche Deines Herzens reagiert..."
BOX_BREAK_DELAYED(70)

UNSKIPPABLE SHIFT(7) "Ein schwarzes Herz macht es zum\n"
SHIFT(16) "Hort des Übels. Ein reines Herz\n"
SHIFT(4) "aber verwandelt es in ein Paradies!"
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(8) "Das Triforce... Symbol der Macht...\n"
SHIFT(18) "birgt das Gleichgewicht dreier\n"
SHIFT(11) "Kräfte: Weisheit, Mut und Kraft!"
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(17) "Sind diese Kräfte ausgeglichen\n"
SHIFT(4) "im Herzen des Triforce-Trägers, hat\n"
SHIFT(2) "er die Macht, gerecht zu herrschen."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(28) "Doch ist das Herz nicht im\n"
SHIFT(8) "Gleichgewicht, so spaltet sich das\n"
SHIFT(10) "Triforce in seine drei Fragmente!"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(7) "Nur ein Fragment bleibt ihm: Jenes\n"
SHIFT(1) "nämlich, das zu der Kraft gehört, an\n"
SHIFT(12) "die er selbst am meisten glaubt."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(41) "Will er nun alle Macht\n"
SHIFT(23) "erhalten, muß er die anderen\n"
SHIFT(16) "Fragmente des Triforce finden!"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(9) "Noch zwei vom Schicksal Erwählte\n"
SHIFT(9) "tragen je ein Triforce-Element als\n"
SHIFT(20) "Symbol auf ihrem Handrücken!" FADE(90)
)
,
MSG(
UNSKIPPABLE SHIFT(33) "Toi, quêteur des saints\n"
SHIFT(33) "triangles, écoute bien..."
BOX_BREAK_DELAYED(60)

UNSKIPPABLE SHIFT(14) "Les triangles sacrés reposent\n"
SHIFT(41) "en un lieu mystique,\n"
SHIFT(17) "un miroir reflétant l'intérieur\n"
SHIFT(70) "de l'âme..."
BOX_BREAK_DELAYED(70)

UNSKIPPABLE SHIFT(20) "Si une âme noire y pénètre,\n"
SHIFT(12) "le royaume deviendra chaos et\n"
SHIFT(11) "flammes. Si elle est pure, il se\n"
SHIFT(35) "changera en paradis...."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(6) "La Triforce, les triangles sacrés,\n"
SHIFT(17) "est une balance qui équilibre\n"
SHIFT(40) "les trois puissances:\n"
SHIFT(21) "Force, Sagesse et Courage."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(32) "Si l'âme du porteur des\n"
SHIFT(27) "Saints Triangles préserve\n"
SHIFT(15) "cet équilibre, alors le porteur\n"
SHIFT(32) "aura l'ultime puissance!"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(7) "Mais si son âme est tourmentée\n"
SHIFT(37) "la Triforce se brisera\n"
SHIFT(24) "en trois parties: la Force,\n"
SHIFT(25) "la Sagesse et le Courage."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(17) "A celui qui a brisé l'équilibre\n"
SHIFT(21) "il ne restera qu'une pièce...\n"
SHIFT(19) "Celle qui correspond le plus\n"
SHIFT(52) "à ses ambitions."
BOX_BREAK_DELAYED(90)

UNSKIPPABLE SHIFT(12) "Et s'il cherche l'Ultime Pouvoir,\n"
SHIFT(25) "il devra acquérir les deux\n"
SHIFT(58) "autres pièces."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE "Ces deux pièces seront transmises\n"
SHIFT(43) "aux élus du Destin.\n"
SHIFT(16) "Ils porteront la marque de la\n"
SHIFT(16) "Triforce au dos de leur main." FADE(90)
)
)

DEFINE_MESSAGE(0x705D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "ガノンドロフ…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "奴は　七年前、キミが　開いた\n"
SHIFT(30) "時の神殿の　扉をくぐり、\n"
SHIFT(48) "聖地へ　到達した。"
BOX_BREAK

UNSKIPPABLE SHIFT(57) "しかし…　奴が\n"
SHIFT(12) "トライフォースを　手にした時、\n"
SHIFT(33) "伝説は　現実となった…"
)
,
MSG(
UNSKIPPABLE "Seven years ago, Ganondorf, the \n"
"King of Thieves, used the door \n"
"you opened in the Temple of Time\n"
"and entered the Sacred Realm."
BOX_BREAK

UNSKIPPABLE "But when he laid his hands on the\n"
"Triforce, the legend came true."
)
,
MSG(
UNSKIPPABLE "Sieben Jahre zuvor drang\n"
"Ganondorf in das Heilige Reich\n"
"ein, dessen Zugang Du in der\n"
"Zitadelle der Zeit geöffnet hast."
BOX_BREAK

UNSKIPPABLE "Als seine Hände das Triforce\n"
"berührten, wurde die Legende wahr!"
)
,
MSG(
UNSKIPPABLE "Il y a sept ans, Ganondorf, \n"
"utilisa la porte que tu as ouverte \n"
"dans le temple du temps pour \n"
"violer le Saint Royaume."
BOX_BREAK

UNSKIPPABLE "Mais en posant la main sur la \n"
"Triforce la légende devint réalité."
)
)

DEFINE_MESSAGE(0x705E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "その一人は、\n"
SHIFT(12) COLOR(RED) "勇気のトライフォース" COLOR(DEFAULT) "　宿りし者…\n"
SHIFT(12) "時の勇者…　" NAME "。"
)
,
MSG(
UNSKIPPABLE "The one who holds the " COLOR(RED) "Triforce \n"
"of Courage " COLOR(DEFAULT) "is...\n"
"You, " NAME "!"
)
,
MSG(
UNSKIPPABLE "Der Auserwählte mit dem " COLOR(RED) "Symbol \n"
"des Mutes " COLOR(DEFAULT) "bist...\n"
"Du, " NAME "!"
)
,
MSG(
UNSKIPPABLE "Le porteur de la " COLOR(RED) "Triforce du \n"
"courage" COLOR(DEFAULT) ", c'est...\n"
"Toi, " NAME "!"
)
)

DEFINE_MESSAGE(0x705F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "そして、もう一人…\n"
SHIFT(3) COLOR(RED) "知恵のトライフォース" COLOR(DEFAULT) "　宿りし者…\n"
SHIFT(9) "賢者の長となる　七人目の賢者…"
)
,
MSG(
UNSKIPPABLE "And the other, who holds the \n"
COLOR(RED) "Triforce of Wisdom" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "is the seventh Sage, who is\n"
"destined to be the leader of\n"
"them all..."
)
,
MSG(
UNSKIPPABLE "Das " COLOR(RED) "Symbol der Weisheit" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "...trägt der siebte Weise,\n"
"dessen Bestimmung es ist, zum\n"
"Meister aller zu werden..."
)
,
MSG(
UNSKIPPABLE "Le détenteur de la " COLOR(RED) "Triforce\n"
"de la sagesse" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "...est le septième Sage, dont\n"
"le destin est de conduire les \n"
"autres éveillés..."
)
)

DEFINE_MESSAGE(0x7060, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(72) "この私…\n"
SHIFT(24) "ハイラル王女　" COLOR(RED) "ゼルダ" COLOR(DEFAULT) "です。"
)
,
MSG(
UNSKIPPABLE "It is I, the Princess of Hyrule,\n"
COLOR(RED) "Zelda" COLOR(DEFAULT) "."
)
,
MSG(
UNSKIPPABLE "Ich bin es - " COLOR(RED) "Zelda" COLOR(DEFAULT) ",\n"
"Prinzessin von Hyrule."
)
,
MSG(
UNSKIPPABLE "C'est moi," COLOR(RED) " Zelda" COLOR(DEFAULT) ", Princesse\n"
"d'Hyrule."
)
)

DEFINE_MESSAGE(0x7061, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "魔王の追及を　逃れるためとはいえ\n"
SHIFT(9) "シーカー族と偽り、接してきた事\n"
SHIFT(27) "どうか、許してください…"
)
,
MSG(
UNSKIPPABLE "I apologize for meeting you in \n"
"disguise, but it was necessary to\n"
"hide from the King of Evil. \n"
"Please forgive me..."
)
,
MSG(
UNSKIPPABLE "Verzeih, daß ich Dich stets in\n"
"dieser Verkleidung aufgesucht habe.\n"
"Doch es war nötig, da ich mich\n"
"vor Ganondorf verstecken mußte."
)
,
MSG(
UNSKIPPABLE "Pardonne-moi de t'avoir caché ma\n"
"véritable identité, mais je devais \n"
"me dérober aux yeux de Ganondorf."
)
)

DEFINE_MESSAGE(0x7062, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(24) "私は、乳母のインパと　共に\n"
SHIFT(36) "城から　脱出する途中、\n"
SHIFT(18) "見たのです…　あなたの姿を！" FADE(80)
)
,
MSG(
"I saw you as I was escaping \n"
"from the castle with my \n"
"attendant, Impa." FADE(80)
)
,
MSG(
"Ich habe Dich gesehen, als ich mit\n"
"Impa zusammen aus dem \n"
"Schloß floh." FADE(80)
)
,
MSG(
"Je t'ai vu en m'enfuyant du \n"
"château d'Hyrule." FADE(80)
)
)

DEFINE_MESSAGE(0x7063, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "オカリナが、あなたの手にある限り\n"
SHIFT(3) "ガノンドロフは　聖地へは入れない\n"
SHIFT(39) "と　思ったのですが…"
BOX_BREAK

"私の予期せぬ事態が起きたのです…"
)
,
MSG(
UNSKIPPABLE "As long as you had the Ocarina \n"
"in your possession, I thought \n"
"Ganondorf could never enter the\n"
"Sacred Realm, but..."
BOX_BREAK

UNSKIPPABLE "something I could never expect\n"
"happened..."
)
,
MSG(
UNSKIPPABLE "Solange Du die Okarina in Deinen\n"
"Händen hältst, so dachte ich, wäre\n"
"es Ganondorf nicht möglich, das\n"
"Heilige Reich zu betreten. Aber..."
BOX_BREAK

UNSKIPPABLE "...etwas, das ich nie erwartet\n"
"hätte, ist geschehen..."
)
,
MSG(
UNSKIPPABLE "En te confiant l'ocarina, je pensais\n"
"pouvoir empêcher Ganondorf de \n"
"violer le Saint Royaume, mais..."
BOX_BREAK

UNSKIPPABLE "Quelque chose d'inattendu\n"
"est arrivé..."
)
)

DEFINE_MESSAGE(0x7064, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(33) "この地鳴り…　まさか！？"
)
,
MSG(
UNSKIPPABLE SHIFT(36) "That rumbling...It can't be!?"
)
,
MSG(
UNSKIPPABLE SHIFT(61) "Dieses Beben...\n"
SHIFT(48) "Was geschieht hier?\n"
SHIFT(46) "Das darf nicht sein!"
)
,
MSG(
UNSKIPPABLE SHIFT(25) "Cette secousse...c'est...!?"
)
)

DEFINE_MESSAGE(0x7065, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "愚かなる　反逆者…\n"
SHIFT(63) "ゼルダ姫よ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "七年もの長き　年月…\n"
SHIFT(9) "よくぞ　オレから　逃げおおせた。"
)
,
MSG(
UNSKIPPABLE "Princess Zelda...you foolish \n"
"traitor!"
BOX_BREAK

UNSKIPPABLE "I commend you for avoiding my \n"
"pursuit for seven long years."
)
,
MSG(
UNSKIPPABLE "Prinzessin Zelda... Endlich\n"
"habe ich Dich!"
BOX_BREAK

UNSKIPPABLE "Ich bin beeindruckt, daß es Dir\n"
"gelungen ist, mir sieben Jahre lang\n"
"zu entkommen!"
)
,
MSG(
UNSKIPPABLE "Princesse Zelda...\n"
"Petite cachottière!"
BOX_BREAK

UNSKIPPABLE "Je te félicite d'avoir échappé à\n"
"mes recherches pendant sept ans."
)
)

DEFINE_MESSAGE(0x7066, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "ゼルダを　助けたくば\n"
SHIFT(45) "わが城まで　こい！！"
)
,
MSG(
UNSKIPPABLE "If you want to rescue Zelda,\n"
"come to my castle!"
)
,
MSG(
UNSKIPPABLE "Nie wirst Du Zelda retten!\n"
"Wagst Du es, mein Schloß zu\n"
"betreten, vernichte ich auch Dich!"
)
,
MSG(
UNSKIPPABLE "Si tu veux sauver la Princesse,\n"
"viens la chercher au château!"
)
)

DEFINE_MESSAGE(0x7067, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(15) "勇者　" NAME "よ…\n"
SHIFT(15) "聞こえるか、賢者ラウルじゃ…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "我ら、六人の力を　結集し\n"
SHIFT(6) "ガノンドロフの城へ　橋をかける。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "その中心…\n"
SHIFT(39) "ガノンの塔は　邪悪な\n"
COLOR(RED) "６つの結界" COLOR(DEFAULT) "によって　守られておる！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "６つの結界を　すべて　解除し、\n"
SHIFT(27) "ゼルダ姫を　救うのじゃ！！"
)
,
MSG(
UNSKIPPABLE NAME "...can you hear me?\n"
"It's Rauru, the Sage."
BOX_BREAK

UNSKIPPABLE "We six will gather our power to\n"
"create a bridge to the castle\n"
"where Ganondorf dwells..."
BOX_BREAK

UNSKIPPABLE "The castle's keep, which is \n"
"known as Ganon's Tower, is \n"
"protected by " COLOR(RED) "six evil barriers" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Bring down the six barriers and\n"
"save Princess Zelda!!"
)
,
MSG(
UNSKIPPABLE NAME "... Hörst Du mich?\n"
"Hier spricht Rauru."
BOX_BREAK

UNSKIPPABLE "Die sechs Weisen sammeln ihre\n"
"Kraft, um eine Brücke zum Portal\n"
"von Ganondorfs Schloß zu legen..."
BOX_BREAK

UNSKIPPABLE "Der Wachturm des Schlosses, auch\n"
"der " COLOR(RED) "Teufelsturm" COLOR(DEFAULT) " genannt, wird von\n"
"sechs " COLOR(RED) "Siegeln des Bösen" COLOR(DEFAULT) "\n"
"blockiert!"
BOX_BREAK

UNSKIPPABLE "Brich die Siegel,\n"
"dringe in den Turm ein und\n"
"rette Prinzessin Zelda!"
)
,
MSG(
UNSKIPPABLE NAME "... C'est moi, Rauru!\n"
"Peux-tu m'entendre?"
BOX_BREAK

UNSKIPPABLE "Nous, les six Sages, allons \n"
"concentrer nos pouvoirs pour \n"
"créer une passerelle vers le \n"
"château de Ganondorf..."
BOX_BREAK

UNSKIPPABLE "Le donjon, la Tour de Ganon, \n"
"est protégé par " COLOR(RED) "six barrières \n"
"maléfiques" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Abats ces barrières et sauve la\n"
"Princesse Zelda!!"
)
)

DEFINE_MESSAGE(0x706C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(27) "ハイラルを　創りたまいし\n"
SHIFT(54) "古代の　神々よ！"
BOX_BREAK_DELAYED(60)

SHIFT(30) "今こそ　封印の扉　開きて\n"
SHIFT(39) "邪悪なる　闇の化身を\n"
SHIFT(21) "冥府の彼方へ　葬りたまえ！！" FADE(90)
)
,
MSG(
"Ancient Creators of Hyrule!"
BOX_BREAK_DELAYED(60)

"Now, open the sealed door\n"
"and send the Evil Incarnation of\n"
"Darkness into the void of the\n"
"Evil Realm!!" FADE(90)
)
,
MSG(
"Ihr Erschaffer Hyrules!"
BOX_BREAK_DELAYED(60)

"Öffnet das versiegelte Portal und\n"
"schickt diese Kreatur des Bösen\n"
"in den Abgrund der Hölle!" FADE(90)
)
,
MSG(
"Anciens créateurs d'Hyrule!"
BOX_BREAK_DELAYED(60)

"Ouvrez le sceau dimensionnel et\n"
"renvoyez l'incarnation du Malin\n"
"dans le vide infernal!!" FADE(90)
)
)

DEFINE_MESSAGE(0x706D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(15) NAME "！\n"
SHIFT(15) "時の剣…\n"
SHIFT(15) "マスターソードで　とどめを！！"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Finish him off with the sword of\n"
"time, the Master Sword!"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Zerstöre ihn mit Deiner heiligen\n"
"Waffe - mit dem Master-Schwert!"
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Achève-le avec la lame sacrée, \n"
"l'Epée de Légende!"
)
)

DEFINE_MESSAGE(0x706E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE "六賢者により開かれし封印の扉よ…\n"
SHIFT(12) "闇の化身と共に　永遠に閉じよ！"
)
,
MSG(
UNSKIPPABLE "Oh sealed door opened by the \n"
"Sages... Close forever with \n"
"the Evil Incarnation of Darkness\n"
"within!!"
)
,
MSG(
UNSKIPPABLE "Oh, heiliges Portal, entriegelt von\n"
"den Weisen... Schließe Dich für\n"
"immer und schütze unsere Welt vor\n"
"dieser üblen Kreatur des Bösen!"
)
,
MSG(
UNSKIPPABLE "Ô, sceau dimensionnel ouvert par \n"
"les Sages... Referme-toi sur \n"
"l'Incarnation du Malin!!"
)
)

DEFINE_MESSAGE(0x706F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(9) "ありがとう　" NAME "…"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "あなたの力で　ガノンドロフは\n"
SHIFT(18) "闇の世界に　封印されました。"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "これで　この世界も　ふたたび\n"
SHIFT(6) "平和な時を　刻み始めるでしょう。"
)
,
MSG(
UNSKIPPABLE "Thank you, " NAME "..."
BOX_BREAK

UNSKIPPABLE "Thanks to you, Ganondorf has\n"
"been sealed inside the Evil Realm!"
BOX_BREAK

UNSKIPPABLE "Thus, peace will once again\n"
"reign in this world...for a time."
)
,
MSG(
UNSKIPPABLE "Danke, " NAME "..."
BOX_BREAK

UNSKIPPABLE "Dank Deiner Hilfe ist es gelungen,\n"
"den Großmeister des Bösen in das\n"
"Reich der Hölle zu verbannen!"
BOX_BREAK

UNSKIPPABLE "Nun wird wieder Frieden herrschen\n"
"in unserer Welt... Hoffentlich für \n"
"alle Zeit."
)
,
MSG(
UNSKIPPABLE "Merci, " NAME "..."
BOX_BREAK

UNSKIPPABLE "Grâce à toi, Ganondorf est \n"
"prisonnier du royaume infernal!"
BOX_BREAK

UNSKIPPABLE "La paix et la justice vont à \n"
"nouveau régner sur ce monde...\n"
"Et pour longtemps."
)
)

DEFINE_MESSAGE(0x7070, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(60) "ありがとう…\n"
SHIFT(60) NAME "…"
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(60) "さようなら…" FADE(60)
)
,
MSG(
UNSKIPPABLE SHIFT(60) "Thank you...\n"
SHIFT(50) NAME "..."
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(50) "Good-bye...." FADE(60)
)
,
MSG(
UNSKIPPABLE SHIFT(84) "Danke!\n"
SHIFT(93) NAME "..."
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(71) "Lebe wohl..." FADE(60)
)
,
MSG(
UNSKIPPABLE SHIFT(30) "Merci, " NAME "..."
BOX_BREAK_DELAYED(40)

UNSKIPPABLE SHIFT(75) "Adieu...." FADE(60)
)
)

DEFINE_MESSAGE(0x7071, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "どうしても　この門を　通りたいか？\n"
SHIFT(6) "なら、通してやらないコトもない。\n"
SHIFT(60) "そのかわり…" TEXTID(0x7072)
)
,
MSG(
"Do you really want to go through\n"
"this gate that much? Let me think\n"
"about it... OK, but in return..." TEXTID(0x7072)
)
,
MSG(
"Möchtest Du unbedingt durch\n"
"dieses Tor gehen? Nun, dann\n"
"verlange ich eine Gegenleistung...\n"
"Sagen wir..." TEXTID(0x7072)
)
,
MSG(
"Tu veux vraiment passer? \n"
"Bon...laisse-moi réfléchir...\n"
"C'est d'accord, mais en échange..." TEXTID(0x7072)
)
)

DEFINE_MESSAGE(0x7072, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"１０ルピー　はらいな。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Give me 10 Rupees...\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Gib mir 10 Rubine!\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Donne-moi 10 Rubis...\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x7073, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(48) "信じてください…\n"
SHIFT(9) "お告げは　いつも　正しいのです。" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
"Please believe me....\n"
"My prophecies have never been\n"
"wrong!" EVENT
)
,
MSG(
"Bitte glaube mir...\n"
"Meine Prophezeiungen waren\n"
"niemals falsch!" EVENT
)
,
MSG(
"Crois-moi....\n"
"Mes visions prophétiques sont\n"
"toujours exactes!" EVENT
)
)

DEFINE_MESSAGE(0x7074, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "神殿に　とりついた悪霊を　倒し\n"
SHIFT(15) "賢者を　目覚めさせたんだね…"
BOX_BREAK

UNSKIPPABLE SHIFT(78) "だが…\n"
SHIFT(18) "キミを必要としている賢者は\n"
SHIFT(48) "まだ　いるはずだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "すべての賢者を　目覚めさせるには\n"
SHIFT(57) "キミは　もっと\n"
SHIFT(21) "強くならなければならない。"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "山を　こえ…"
BOX_BREAK

UNSKIPPABLE SHIFT(57) "水を　わたり…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "そして、時さえもこえて…"
)
,
MSG(
UNSKIPPABLE "You destroyed the wicked\n"
"creatures that haunted the temple\n"
"and awakened the Sage..."
BOX_BREAK

UNSKIPPABLE "But there are still other Sages\n"
"who need your help."
BOX_BREAK

UNSKIPPABLE "In order to awaken all the other\n"
"Sages, you must become even\n"
"more powerful."
BOX_BREAK

UNSKIPPABLE "You must travel over\n"
"mountains..."
BOX_BREAK

UNSKIPPABLE "under water..."
BOX_BREAK

UNSKIPPABLE "and even through time..."
)
,
MSG(
UNSKIPPABLE "Du hast jene bösen Geister\n"
"vernichtet, die im Tempel hausten.\n"
"Und Du hast " COLOR(ADJUSTABLE) "Salia" COLOR(DEFAULT) " erweckt..."
BOX_BREAK

UNSKIPPABLE "Doch sie ist nicht die einzige, die\n"
"Deiner Hilfe bedarf."
BOX_BREAK

UNSKIPPABLE "Um alle Weisen zu erwecken, mußt\n"
"Du noch weit stärker werden!"
BOX_BREAK

UNSKIPPABLE "Reise zu den Bergen..."
BOX_BREAK

UNSKIPPABLE "...in die Tiefen des Wassers..."
BOX_BREAK

UNSKIPPABLE "...und sogar durch die Zeit..."
)
,
MSG(
UNSKIPPABLE "Tu as détruit l'odieux fantôme\n"
"de ce temple et éveillé le Sage..."
BOX_BREAK

UNSKIPPABLE "Mais d'autres Sages ont besoin de\n"
"ton aide."
BOX_BREAK

UNSKIPPABLE "Pour éveiller les autres Sages, tu \n"
"devras devenir encore plus \n"
"puissant..."
BOX_BREAK

UNSKIPPABLE "Va par les montagnes..."
BOX_BREAK

UNSKIPPABLE "Sous les flots..."
BOX_BREAK

UNSKIPPABLE "Et deviens voyageur du Temps..."
)
)

DEFINE_MESSAGE(0x7075, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) COLOR(LIGHTBLUE) "時のオカリナ" COLOR(DEFAULT) "と\n"
SHIFT(21) COLOR(LIGHTBLUE) "マスターソード" COLOR(DEFAULT) "　ある限り…"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "時は　キミの手の中にある。"
BOX_BREAK

UNSKIPPABLE SHIFT(9) NAME "　また　会おう！"
)
,
MSG(
UNSKIPPABLE "As long as you hold the " COLOR(LIGHTBLUE) "Ocarina\n"
"of Time" COLOR(DEFAULT) " and the " COLOR(LIGHTBLUE) "Master Sword" COLOR(DEFAULT) ","
BOX_BREAK

UNSKIPPABLE "you hold time itself in your\n"
"hands..."
BOX_BREAK

UNSKIPPABLE NAME ", we shall meet \n"
"again!"
)
,
MSG(
UNSKIPPABLE "Solange Du die " COLOR(LIGHTBLUE) "Okarina\n"
"der Zeit" COLOR(DEFAULT) " und das " COLOR(LIGHTBLUE) "Master-Schwert" COLOR(DEFAULT) "\n"
"in Deinen Händen hältst..."
BOX_BREAK

UNSKIPPABLE "...hast Du auch Macht\n"
"über die Zeit!"
BOX_BREAK

UNSKIPPABLE NAME ", wir sehen\n"
"uns wieder!"
)
,
MSG(
UNSKIPPABLE "Aussi longtemps que tu garderas\n"
COLOR(LIGHTBLUE) "l'ocarina " COLOR(DEFAULT) "et " COLOR(LIGHTBLUE) "l'Epée de Légende" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "...le temps sera avec toi..."
BOX_BREAK

UNSKIPPABLE NAME "... A bientôt!"
)
)

DEFINE_MESSAGE(0x7076, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "数量限定　新型バクダン、\n"
SHIFT(24) "売り切れたら　それまでだ。" EVENT
)
,
MSG(
"This is a new type of bomb!\n"
"It's available only in limited\n"
"quantities, and when I'm sold \n"
"out, that's it!" EVENT
)
,
MSG(
"Eine neuartige Bombe! Ich kann Dir\n"
"nur eine begrenzte Stückzahl\n"
"anbieten. Ist das Lager leer,\n"
"gibt es keinen Nachschub mehr." EVENT
)
,
MSG(
"C'est un nouveau type de bombes!\n"
"Disponible uniquement en quantité\n"
"limitée! Quand y'en a pus, ben... \n"
"Y'en a pus!" EVENT
)
)

DEFINE_MESSAGE(0x7077, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "ボクは　" COLOR(RED) "シーク" COLOR(DEFAULT) "。\n"
SHIFT(30) "シーカー族の生き残り…"
)
,
MSG(
UNSKIPPABLE "I am " COLOR(RED) "Sheik" COLOR(DEFAULT) ".\n"
"Survivor of the Sheikahs..."
)
,
MSG(
UNSKIPPABLE "Ich bin " COLOR(RED) "Shiek" COLOR(DEFAULT) ". Ich gehöre\n"
"den letzten Überlebenden\n"
"der Shiekah an..."
)
,
MSG(
UNSKIPPABLE "Mon nom est " COLOR(RED) "Sheik" COLOR(DEFAULT) ".\n"
"L'un des derniers Sheikahs..."
)
)

DEFINE_MESSAGE(0x7078, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "伝説の聖剣…\n"
SHIFT(24) COLOR(RED) "マスターソード" COLOR(DEFAULT) "を持つ者…\n"
SHIFT(45) "それが　時の勇者…"
)
,
MSG(
UNSKIPPABLE "As I see you standing there\n"
"holding the mythical " COLOR(RED) "Master \n"
"Sword" COLOR(DEFAULT) ", you really do look like the \n"
"legendary Hero of Time..."
)
,
MSG(
UNSKIPPABLE "Wahrlich, Du siehst aus wie der,\n"
"der uns prophezeit wurde. Tapfer " COLOR(RED) "\n"
COLOR(DEFAULT) "hältst Du das " COLOR(RED) "Master-Schwert " COLOR(DEFAULT) "in \n"
"der Hand..."
)
,
MSG(
UNSKIPPABLE "Armé de L'" COLOR(RED) "Epée de Légende" COLOR(DEFAULT) ", \n"
"le titre de Héros du Temps te\n"
"revient de droit..."
)
)

DEFINE_MESSAGE(0x7079, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "キミが、言い伝えを信じるなら\n"
SHIFT(9) "五つの神殿を探し、" COLOR(RED) "五人の賢者" COLOR(DEFAULT) "を\n"
SHIFT(24) "目覚めさせるほかはない…"
)
,
MSG(
UNSKIPPABLE "If you believe the legend, you\n"
"have no choice. You must look for\n"
"the five temples and awaken the\n"
COLOR(RED) "five Sages" COLOR(DEFAULT) "...."
)
,
MSG(
UNSKIPPABLE "Willst Du die Prophezeiung \n"
"erfüllen, so suche nach den fünf \n"
"Tempeln und befreie die dort \n"
"eingesperrten " COLOR(RED) "fünf Weisen" COLOR(DEFAULT) "..."
)
,
MSG(
UNSKIPPABLE "Si j'en crois les légendes, ta quête\n"
"est claire... Tu dois éveiller " COLOR(RED) "les \n"
"cinq Sages " COLOR(DEFAULT) "dans les cinq temples..."
)
)

DEFINE_MESSAGE(0x707A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "今、" COLOR(ADJUSTABLE) "森の神殿" COLOR(DEFAULT) "で　一人の賢者が\n"
SHIFT(24) "目覚めの時を　待っている。\n"
SHIFT(6) "キミが　よく　知っている少女だ…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "しかし　神殿に巣くう魔物の力で\n"
SHIFT(21) "聖地からの声を　その少女に\n"
SHIFT(27) "伝えることは　不可能だ…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "そして　今のキミには\n"
SHIFT(6) "神殿に入ることさえ　できぬはず。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "ボクの言葉を　信じるなら、\n"
SHIFT(6) "まず　" COLOR(RED) "カカリコ村" COLOR(DEFAULT) "へ　行くがいい…\n"
SHIFT(24) "いいね　" NAME "…"
)
,
MSG(
UNSKIPPABLE "One Sage is waiting for the time\n"
"of awakening in the " COLOR(ADJUSTABLE) "Forest Temple" COLOR(DEFAULT) ".\n"
"The Sage is a girl I am sure you\n"
"know..."
BOX_BREAK

UNSKIPPABLE "Because of the evil power in the\n"
"temple, she cannot hear the\n"
"awakening call from the Sacred\n"
"Realm..."
BOX_BREAK

UNSKIPPABLE "Unfortunately, equipped as you \n"
"currently are, you cannot even\n"
"enter the temple..."
BOX_BREAK

UNSKIPPABLE "But, if you believe what I'm saying,\n"
"you should head to " COLOR(RED) "Kakariko \n"
"Village" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Do you understand, \n"
NAME "?"
)
,
MSG(
UNSKIPPABLE "Einer von ihnen wartet im \n"
COLOR(ADJUSTABLE) "Waldtempel" COLOR(DEFAULT) " darauf, sich Deiner zu \n"
"offenbaren. Es ist ein Mädchen, an  \n"
"das Du Dich sicher erinnern wirst..."
BOX_BREAK

UNSKIPPABLE "Aufgrund der bösen Aura, die den \n"
"Tempel umgibt, kann sie den \n"
"Ruf des Heiligen Reiches nicht \n"
"hören..."
BOX_BREAK

UNSKIPPABLE "Mit Deiner jetzigen Ausrüstung\n"
"kannst Du den Tempel nicht \n"
"betreten..."
BOX_BREAK

UNSKIPPABLE "So höre meine Worte und begib \n"
"Dich nach " COLOR(RED) "Kakariko" COLOR(DEFAULT) ", um dort das \n"
"zu suchen, das Dein Schlüssel zum \n"
"Tempel sein soll..."
BOX_BREAK

UNSKIPPABLE "Hast Du mich verstanden, \n"
NAME "?"
)
,
MSG(
UNSKIPPABLE "L'un des Sages attend dans le \n"
COLOR(ADJUSTABLE) "Temple de la forêt " COLOR(DEFAULT) "l'heure de son \n"
"éveil. C'est une jeune fille que tu \n"
"connais..."
BOX_BREAK

UNSKIPPABLE "L'influence maléfique qui pervertit \n"
"les temples l'empêche de répondre \n"
"aux appels du Saint Royaume..."
BOX_BREAK

UNSKIPPABLE "Equipé comme tu l'es, tu ne\n"
"pourras entrer dans le Temple..."
BOX_BREAK

UNSKIPPABLE "Alors crois-moi, rends-toi au\n"
COLOR(RED) "Village Cocorico" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "M'as-tu compris, \n"
NAME "?"
)
)

DEFINE_MESSAGE(0x707B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(48) "私は　思いました。\n"
"あなたに　オカリナを　たくそうと…\n"
SHIFT(24) "そのチャンスは　今だ…と。" FADE(80)
)
,
MSG(
"I thought I should entrust the\n"
"Ocarina to you... I thought that \n"
"would be our best chance..." FADE(80)
)
,
MSG(
"Ich fühlte, daß Du derjenige bist,\n"
"der die Okarina haben soll...\n"
"Ich wußte, daß es unsere beste\n"
"und einzige Chance war..." FADE(80)
)
,
MSG(
"Je pensais que te confier l'ocarina\n"
"était notre seule chance..." FADE(80)
)
)

DEFINE_MESSAGE(0x707C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(33) "その前に…　キミだけに\n"
SHIFT(21) "話しておきたいことがある。\n"
SHIFT(57) "聞いてほしい。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "闇の民…　シーカー族に伝わる\n"
SHIFT(15) "トライフォースの　知られざる\n"
SHIFT(42) "もう一つの伝説を…"
)
,
MSG(
UNSKIPPABLE "Before that...I have things I want \n"
"to tell only to you. Please listen."
BOX_BREAK

UNSKIPPABLE "Another unknown legend of the \n"
"Triforce passed down by the \n"
"shadow folk, the Sheikahs...."
)
,
MSG(
UNSKIPPABLE "Bevor Du aufbrichst, solltest\n"
"Du meinen Worten lauschen..."
BOX_BREAK

UNSKIPPABLE "So höre denn die Legende, \n"
"die sich die Shiekah über das \n"
"Triforce erzählten..."
)
,
MSG(
UNSKIPPABLE "J'ai certaines choses à te dire... \n"
"Ecoute-moi bien."
BOX_BREAK

UNSKIPPABLE "Voici une autre légende sur la\n"
"Triforce connue des Sheikahs, \n"
"le peuple de l'ombre...."
)
)

DEFINE_MESSAGE(0x707D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(12) "トライフォースは　３つに砕け、\n"
SHIFT(9) "ガノンドロフの手に　残ったのは\n"
SHIFT(9) COLOR(RED) "力のトライフォース" COLOR(DEFAULT) "のみだった。"
)
,
MSG(
UNSKIPPABLE "The Triforce separated into three \n"
"parts. Only the " COLOR(RED) "Triforce of Power" COLOR(DEFAULT) "\n"
"remained in Ganondorf's hand."
)
,
MSG(
UNSKIPPABLE "Als das Triforce in drei Teile\n"
"zerbrach, gelang es Ganondorf \n"
"lediglich, das " COLOR(RED) "Triforce-Fragment\n"
"der Kraft " COLOR(DEFAULT) "zu erringen..."
)
,
MSG(
UNSKIPPABLE "La Triforce s'est brisée en \n"
"trois parties. Ganondorf possède \n"
"la " COLOR(RED) "Triforce de la Force" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x707E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "奴は　トライフォースの力によって\n"
SHIFT(51) "魔王となったが、\n"
"その野望は　果てることはなかった。"
)
,
MSG(
UNSKIPPABLE "The strength of the Triforce of\n"
"Power enabled him to become a\n"
"mighty, evil king, but his dark\n"
"ambitions were not satisfied."
)
,
MSG(
UNSKIPPABLE "Durch die Macht des Triforce-Teils\n"
"wurden seine teuflischen Kräfte \n"
"verstärkt. Doch sein Drang, Böses \n"
"zu tun, ist noch nicht befriedigt..."
)
,
MSG(
UNSKIPPABLE "Grâce à sa Triforce il put devenir\n"
"le Seigneur du Malin. Mais ses \n"
"ambitions maléfiques n'ont pas de\n"
"limites."
)
)

DEFINE_MESSAGE(0x707F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "完全な支配のため、ガノンドロフは\n"
SHIFT(3) "残る２つの　トライフォースを持つ\n"
SHIFT(9) COLOR(RED) "神に選ばれし者" COLOR(DEFAULT) "を　探し始めた…"
)
,
MSG(
UNSKIPPABLE "To gain complete mastery of the \n"
"world, Ganondorf started looking\n"
"for " COLOR(RED) "those chosen by destiny" COLOR(DEFAULT) " to \n"
"hold the two other Triforce parts."
)
,
MSG(
UNSKIPPABLE "Daher sucht er nun " COLOR(RED) "die, die \n"
"auserwählt wurden" COLOR(DEFAULT) ", Träger der \n"
"anderen Triforce-Elemente zu \n"
"sein..."
)
,
MSG(
UNSKIPPABLE "Pour devenir le maître du monde\n"
"Ganondorf cherche les " COLOR(RED) "élus du \n"
"destin" COLOR(DEFAULT) " pour s'approprier les deux \n"
"pièces restantes de la Triforce."
)
)

DEFINE_MESSAGE(0x7080, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "七年前の　あの日…　\n"
SHIFT(15) "ハイラル城は、ガノンドロフの\n"
SHIFT(39) "襲撃を　受けました…"
)
,
MSG(
UNSKIPPABLE "On that day, seven years ago,\n"
"Ganondorf attacked Hyrule Castle."
)
,
MSG(
UNSKIPPABLE "Heute vor genau sieben Jahren\n"
"suchte Ganondorf mit seiner Horde \n"
"wilder Kriegerinnen Hyrule heim..."
)
,
MSG(
UNSKIPPABLE "En ce jour maudit, il y a sept ans,\n"
"Ganondorf prit d'assaut le Château \n"
"d'Hyrule..."
)
)

DEFINE_MESSAGE(0x7081, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(15) "時の扉を開いた　あなたの魂を\n"
SHIFT(48) "マスターソードが\n"
SHIFT(12) "聖地に封印してしまうなんて…"
)
,
MSG(
UNSKIPPABLE "After you opened the door of \n"
"time, the Master Sword sealed you\n"
"away in the Sacred Realm..."
)
,
MSG(
UNSKIPPABLE "Als Du das Tor zur Zeit betreten \n"
"hast, bannte Dich das Schwert \n"
"sieben Jahre im Heiligen Reich..."
)
,
MSG(
UNSKIPPABLE "Après avoir ouvert les portes du\n"
"Temps, l'Epée de Légende t'a \n"
"envoyé dans le Saint Royaume..."
)
)

DEFINE_MESSAGE(0x7082, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(9) "あなたの魂は　聖地に封印され…\n"
SHIFT(45) "トライフォースは、\n"
SHIFT(9) "まんまと　ガノンドロフの手に…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "ガノンドロフは　魔王となり、\n"
SHIFT(36) "聖地は　魔界と化した。\n"
SHIFT(12) "それらは　すべて　不幸な偶然…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "私は、シーカー族に　なりすまし、\n"
SHIFT(3) "あなたが　戻ってくることを　信じ、\n"
SHIFT(48) "七年　待ちました。"
)
,
MSG(
UNSKIPPABLE "Your spirit remained in the Sacred\n"
"Realm...and then the Triforce fell \n"
"into Ganondorf's hands. He went\n"
"on to invade the Sacred Realm..."
BOX_BREAK

UNSKIPPABLE "Ganondorf had become the Evil\n"
"King, and the Sacred Realm\n"
"became a world of evil. All of\n"
"this is an unfortunate coincidence."
BOX_BREAK

UNSKIPPABLE "I passed myself off as a Sheikah\n"
"and hoped that you would return.\n"
"I waited for seven years..."
)
,
MSG(
UNSKIPPABLE "Dein Geist ruhte im Vakuum der\n"
"Zeit... Das Triforce fiel in Ganondorfs\n"
"blutige Hände, die Unheil über \n"
"das Heilige Reich brachten..."
BOX_BREAK

UNSKIPPABLE "Ganondorf verlor mehr und mehr\n"
"sein menschliches Antlitz. Er\n"
"wurde zum Großmeister des Bösen,\n"
"dem Boten des Todes..."
BOX_BREAK

UNSKIPPABLE "In all den Jahren gelang es mir, \n"
"mich als Shiekah zu tarnen und \n"
"so meinem Schicksal zu entgehen...\n"
"Ich wartete sieben Jahre..."
)
,
MSG(
UNSKIPPABLE "Ton esprit s'est endormi dans le \n"
"Saint Royaume et Ganondorf viola\n"
"ce lieu sacré pour se saisir de la\n"
"Triforce..."
BOX_BREAK

UNSKIPPABLE "Ganondorf est devenu le Roi du \n"
"Mal, et sous son règne de haine, \n"
"Hyrule s'est transformée en une \n"
"terre hostile."
BOX_BREAK

UNSKIPPABLE "Je pris l'apparence d'un Sheikah en \n"
"attendant l'éveil de ton esprit. \n"
"Pendant sept longues années..."
)
)

DEFINE_MESSAGE(0x7083, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE "そして…　あなたが　帰ってきた　今、\n"
SHIFT(15) "魔王ガノンドロフの　支配する\n"
SHIFT(18) "暗黒の時代は　終わるのです！"
)
,
MSG(
UNSKIPPABLE "And...now you are back. The \n"
"dark age ruled by Ganondorf the\n"
"Evil King will end!"
)
,
MSG(
UNSKIPPABLE "Doch nun endlich bist Du \n"
"zurückgekehrt! Die Herrschaft des \n"
"Terrors soll jetzt ihr Ende finden!\n"
"Die Tage des Bösen sind gezählt!"
)
,
MSG(
UNSKIPPABLE "Désormais...et grâce à toi....\n"
"Le règne maléfique de Ganondorf \n"
"va prendre fin!"
)
)

DEFINE_MESSAGE(0x7084, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "六賢者たちが開いた　封印に\n"
SHIFT(24) "ガノンドロフを　引き込み、\n"
SHIFT(9) "私が　こちらの世界から閉じる…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "それで　魔王ガノンドロフは\n"
SHIFT(18) "この世から　消えるでしょう。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) NAME "…　それには\n"
SHIFT(15) "あなたの勇気が　必要です。\n"
SHIFT(12) "もう一度　力を貸してください。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "魔王の守りを　破るもの…\n"
SHIFT(3) "選ばれし者に　神が与えたもう力…\n"
SHIFT(42) "聖なる　" COLOR(LIGHTBLUE) "光の矢" COLOR(DEFAULT) "を！！"
)
,
MSG(
UNSKIPPABLE "The six Sages will open the sealed\n"
"door and lure Ganondorf back into\n"
"the Sacred Realm."
BOX_BREAK

UNSKIPPABLE "I will then seal the door to the \n"
"Sacred Realm from this world."
BOX_BREAK

UNSKIPPABLE "Thus, Ganondorf the Evil King will\n"
"vanish from Hyrule."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"In order to do this, I need your \n"
"courage again. Please protect me\n"
"while I do my part."
BOX_BREAK

UNSKIPPABLE "And here is a weapon that can \n"
"penetrate the Evil King's defenses...\n"
"The power given to the chosen \n"
"ones..."
BOX_BREAK

UNSKIPPABLE SHIFT(15) "The sacred " COLOR(LIGHTBLUE) "Arrow of Light" COLOR(DEFAULT) "!!!"
)
,
MSG(
UNSKIPPABLE "Die sechs Weisen werden neue \n"
"Siegel schaffen und Ganondorf \n"
"für immer in die Tiefen der Hölle\n"
"verbannen..."
BOX_BREAK

UNSKIPPABLE "Ist dies vollbracht, werde ich das \n"
"Tor zum Heiligen Reich auf ewig \n"
"schließen!"
BOX_BREAK

UNSKIPPABLE "Auf diese Weise wird Ganondorf \n"
"und mit ihm alles Böse für alle \n"
"Zeit aus Hyrule verschwinden."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"Um dieses Vorhaben mit Erfolg zu \n"
"krönen, mußt Du mich schützen, \n"
"bis der Plan vollbracht ist."
BOX_BREAK

UNSKIPPABLE "Nimm nun die Waffe an Dich, die\n"
"die Kraft des Bösen mitten ins\n"
"schwarze Herz trifft..."
BOX_BREAK

UNSKIPPABLE SHIFT(13) "Die heiligen " COLOR(LIGHTBLUE) "Pfeile des Lichts" COLOR(DEFAULT) "!"
)
,
MSG(
UNSKIPPABLE "Les six Sages ouvriront le sceau\n"
"pour attirer Ganondorf dans le \n"
"Saint Royaume."
BOX_BREAK

UNSKIPPABLE "Je fermerai ensuite la porte.\n"
"Pour toujours..."
BOX_BREAK

UNSKIPPABLE "Ainsi Ganondorf, le Seigneur du \n"
"Malin, disparaîtra d'Hyrule."
BOX_BREAK

UNSKIPPABLE NAME "...\n"
"Ton devoir est de me protéger\n"
"pendant l'exécution de ce plan."
BOX_BREAK

UNSKIPPABLE "Voici une arme qui pourra \n"
"pénétrer les défenses du Seigneur\n"
"du Malin...\n"
"L'arme sacrée de l'élu..."
BOX_BREAK

UNSKIPPABLE SHIFT(15) "La sainte " COLOR(LIGHTBLUE) "flèche de lumière" COLOR(DEFAULT) "!!!"
)
)

DEFINE_MESSAGE(0x7085, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "だが…　油断したな。\n"
SHIFT(18) "この小僧を　泳がしておけば、\n"
SHIFT(9) "必ず　現れると　思うておったわ！"
)
,
MSG(
UNSKIPPABLE "But you let your guard down...\n"
"I knew you would appear if I let\n"
"this kid wander around!"
)
,
MSG(
UNSKIPPABLE "Endlich gibst Du Dich zu erkennen...\n"
"Ich wußte, daß ich nur dem Jungen\n"
"zu folgen brauchte, um Dich zu\n"
"finden..."
)
,
MSG(
UNSKIPPABLE "Mais tu as baissé ta garde...\n"
"Et grâce à ce gamin, encore une \n"
"fois, j'ai pu te retrouver!"
)
)

DEFINE_MESSAGE(0x7086, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) "唯一の　オレの誤算は、\n"
SHIFT(51) "その　小僧の力を\n"
SHIFT(18) "少々　あまくみていたことだ。"
)
,
MSG(
UNSKIPPABLE "My only mistake was to slightly\n"
"underestimate the power of this\n"
"kid..."
)
,
MSG(
UNSKIPPABLE "Mein einziger Fehler war, die\n"
"Kräfte des Jungen zu \n"
"unterschätzen..."
)
,
MSG(
UNSKIPPABLE "Ma seule erreur fut de sous-\n"
"estimer sa puissance..."
)
)

DEFINE_MESSAGE(0x7087, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(78) "いや…\n"
SHIFT(39) "小僧の力では　ない…\n"
SHIFT(15) "勇気のトライフォースの力だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "そして　ゼルダの持つ\n"
SHIFT(30) "知恵のトライフォース…\n"
SHIFT(12) "この２つを　得た　その時こそ…"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "オレは　この世界の\n"
SHIFT(27) "真の支配者と　なるのだ！！"
)
,
MSG(
UNSKIPPABLE "No...\n"
"It was not the kid's power I\n"
"misjudged, it was the power of\n"
"the Triforce of Courage!"
BOX_BREAK

UNSKIPPABLE "But, with the Triforce of Wisdom\n"
"that Zelda has...\n"
"When I obtain these two Triforces..."
BOX_BREAK

UNSKIPPABLE "Then, I will become the true\n"
"ruler of the world!!"
)
,
MSG(
UNSKIPPABLE "Nein... Es war nicht seine\n"
"Kraft, die ich unterschätzte.\n"
"Es waren die Kräfte des Triforce-\n"
"Symbols für Mut!"
BOX_BREAK

UNSKIPPABLE "Doch mit dem Element, das er \n"
"besitzt, und dem Triforce der \n"
"Weisheit, das in Deinen Händen \n"
"ruht, schließt sich der Kreis..."
BOX_BREAK

UNSKIPPABLE "Mit allen drei Elementen werde \n"
"ich zum Herrscher dieser Welt!"
)
,
MSG(
UNSKIPPABLE "Mais sa puissance n'est que\n"
"misère...\n"
"Sa seule force est la Triforce du\n"
"Courage!"
BOX_BREAK

UNSKIPPABLE "Grâce à la Triforce de la Sagesse, \n"
"celle de Zelda...\n"
"Deux parties seront en ma \n"
"possession!"
BOX_BREAK

UNSKIPPABLE "Et bientôt tu me remettras ton\n"
"fragment... \n"
"Je serai alors le maître du monde!"
)
)

DEFINE_MESSAGE(0x7088, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(33) "時のオカリナ、扉を開き\n"
"マスターソードを手にした時の勇者\n"
SHIFT(60) "ここに降臨す" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "The Ocarina of Time opened the\n"
"door. The Hero of Time, with the\n"
"Master Sword, descended here." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Als der Auserwählte die Okarina \n"
"spielte, öffnete sich das Portal \n"
"der Zeit. Das Master-Schwert \n"
"machte ihn zum Helden der Legende." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Ouverte par l'Ocarina du Temps, \n"
"la porte laissa apparaître l'élu, \n"
"porteur de l'Epée de Légende." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x7089, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "なぜか　夜になると\n"
SHIFT(33) "町に　犬が　ふえるんだ。\n"
SHIFT(36) "ふしぎだよな　ぼうず。"
)
,
MSG(
"It seems strange that packs of\n"
"dogs roam our streets at night...\n"
"Doesn't that seem weird to you?"
)
,
MSG(
"Ich weiß nicht, warum, aber \n"
"irgendwie scheinen die Hunde die\n"
"Nacht zu mögen...\n"
"Komisch, oder?"
)
,
MSG(
"Je ne sais pas pourquoi, mais les \n"
"chiens aiment sortir le soir.\n"
"C'est curieux, hein?"
)
)

DEFINE_MESSAGE(0x708A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "ぼうや、\n"
SHIFT(18) "いいことを　おしえてやろう。"
BOX_BREAK

SHIFT(15) "お城の近くには　" COLOR(RED) "ふしぎな泉" COLOR(DEFAULT) "が\n"
SHIFT(48) "あるらしいぞい…"
)
,
MSG(
"Hey, sonny, I'll tell you something\n"
"helpful..."
BOX_BREAK

"I heard there is a " COLOR(RED) "mysterious \n"
"fountain" COLOR(DEFAULT) " somewhere near the \n"
"castle..."
)
,
MSG(
"Hey, Kleiner! Ich verrate Dir\n"
"etwas..."
BOX_BREAK

"Ich hörte, daß sich in der Nähe des \n"
"Schlosses eine " COLOR(RED) "geheimnisvolle \n"
"Quelle " COLOR(DEFAULT) "befinden soll..."
)
,
MSG(
"Hé! Mon petit, écoute ceci..."
BOX_BREAK

"On dit qu'il y a une " COLOR(RED) "étrange \n"
"fontaine" COLOR(DEFAULT) " près du château..."
)
)

DEFINE_MESSAGE(0x708B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "元の時代へ　帰るなら\n"
SHIFT(51) "その　" COLOR(RED) "時の台座" COLOR(DEFAULT) "に\n"
SHIFT(12) "マスターソードを　刺すがいい。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "そうすれば　七年の時を\n"
SHIFT(3) "さかのぼることが　できるだろう…"
)
,
MSG(
UNSKIPPABLE "If you want to return to your\n"
"original time, return the Master \n"
"Sword to the " COLOR(RED) "Pedestal of Time" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "By doing this, you will travel back\n"
"in time seven years...."
)
,
MSG(
UNSKIPPABLE "Willst Du in die Zeit, aus der Du\n"
"kamst, zurückkehren, so plaziere \n"
"das Master-Schwert wieder im \n"
COLOR(RED) "Zeitenfels" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Tust Du dies, so reist Du\n"
"sieben Jahre in der Zeit \n"
"zurück..."
)
,
MSG(
UNSKIPPABLE "Pour voyager vers le passé, \n"
"pose l'Epée de Légende dans le \n"
COLOR(RED) "piédestal" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "A nouveau tu seras un jeune\n"
"garçon...."
)
)

DEFINE_MESSAGE(0x708C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(36) "キミは　いずれ　ここへ\n"
SHIFT(9) "戻らなければならない時がくる。"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "その時のために　キミに伝えよう。\n"
SHIFT(9) "時の神殿への　帰還のメロディ…"
BOX_BREAK

UNSKIPPABLE SHIFT(36) COLOR(LIGHTBLUE) "光のプレリュード" COLOR(DEFAULT) "を…"
)
,
MSG(
UNSKIPPABLE "The time will come when you will\n"
"have to return here quickly...\n"
"I will teach this to you for when \n"
"that time comes..."
BOX_BREAK

UNSKIPPABLE "The song to return you to the \n"
"Temple of Time...\n"
COLOR(LIGHTBLUE) "The Prelude of Light" COLOR(DEFAULT) "..."
)
,
MSG(
UNSKIPPABLE "Es wird die Zeit kommen, da\n"
"Du in Windeseile an diesen Ort \n"
"zurückkehren mußt... \n"
"Lausche daher meinen Worten..."
BOX_BREAK

UNSKIPPABLE "Das Lied, das Du spielen mußt, \n"
"um zur Zitadelle der Zeit \n"
"zurückzukehren ist...\n"
COLOR(LIGHTBLUE) "die Kantate des Lichts" COLOR(DEFAULT) "..."
)
,
MSG(
UNSKIPPABLE "Un jour viendra où tu voudras\n"
"revenir ici au plus vite...\n"
"Ecoute-moi et ton esprit volera,\n"
"défiant le temps et l'espace..."
BOX_BREAK

UNSKIPPABLE "Entends et apprends car voici...\n"
COLOR(LIGHTBLUE) "Le Prélude de la lumière" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x708D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(21) "私は　シーカー族の　" COLOR(RED) "インパ" COLOR(DEFAULT) "。\n"
SHIFT(24) "ゼルダ様を　お守りする者。\n"
SHIFT(9) "すべては　今、姫が話された通り。"
)
,
MSG(
UNSKIPPABLE "I am " COLOR(RED) "Impa " COLOR(DEFAULT) "of the Sheikahs.\n"
"I am responsible for protecting\n"
"Princess Zelda. Everything is \n"
"exactly as the Princess foretold."
)
,
MSG(
UNSKIPPABLE "Ich bin " COLOR(RED) "Impa" COLOR(DEFAULT) ", Überlebende der \n"
"Shiekah. Meine Aufgabe ist, Zelda \n"
"zu schützen. Alles ist so geschehen, \n"
"wie es die Prinzessin prophezeite."
)
,
MSG(
UNSKIPPABLE "Mon nom est " COLOR(RED) "Impa " COLOR(DEFAULT) "des Sheikahs.\n"
"Je suis chargée de la protection\n"
"de la Princesse Zelda."
)
)

DEFINE_MESSAGE(0x708E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "城の兵士たちに　見つかると\n"
SHIFT(36) "なにかと　やっかいだ。\n"
SHIFT(24) "城の外まで　お送りしよう。"
)
,
MSG(
"If the castle soldiers find you,\n"
"there will be trouble. Let me \n"
"lead you out of the castle."
)
,
MSG(
"Wenn Dich die Soldaten hier \n"
"finden, bekommst Du Ärger. Laß \n"
"mich Dich aus dem Schloß führen!"
)
,
MSG(
"Les gardes du Roi ne doivent \n"
"pas te trouver en ces lieux. \n"
"Laisse-moi te guider hors du \n"
"château."
)
)

DEFINE_MESSAGE(0x708F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE SHIFT(72) "コラッ！！\n"
SHIFT(51) "イタズラすんな！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Hey you! Don't cause any trouble!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Hey, Du! Mach keinen Ärger!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Hé! Toi! Ne fais pas l'imbécile!" QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x7090, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "勇気ある　少年よ…\n"
SHIFT(24) "新たな旅へ　向かうのだな。"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "私の役目は、森の使者に\n"
SHIFT(6) "一つのメロディを　授けることだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "そのメロディは、\n"
SHIFT(21) "古代より　" COLOR(BLUE) "王家に伝わる歌" COLOR(DEFAULT) "…"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "私が　ゼルダ様に\n"
SHIFT(27) "幼き頃より、子守歌として\n"
SHIFT(15) "お聞かせ　申し上げていたが…"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "私は　このメロディに\n"
SHIFT(24) "ふしぎな力を　感じるのだ。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "さあ、心して　聞くがいい…"
)
,
MSG(
UNSKIPPABLE "You are a courageous boy...\n"
"You are heading out on a big, new \n"
"adventure, aren't you?"
BOX_BREAK

UNSKIPPABLE "My role in the Princess's dream\n"
"was to teach a melody" COLOR(RED) " " COLOR(DEFAULT) "to the one\n"
"from the forest."
BOX_BREAK

UNSKIPPABLE "This is an ancient " COLOR(BLUE) "melody passed \n"
"down by the Royal Family" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "I have played this song for \n"
"Princess Zelda as a lullaby ever\n"
"since she was a baby..."
BOX_BREAK

UNSKIPPABLE "There is mysterious power in \n"
"these notes."
BOX_BREAK

UNSKIPPABLE "Now listen carefully..."
)
,
MSG(
UNSKIPPABLE "Du bist ein tapferer Junge!\n"
"Die Vorsehung hat Dich an diesen \n"
"Ort geführt..."
BOX_BREAK

UNSKIPPABLE "Mir wird nun die Aufgabe zuteil, \n"
"Dich eine Melodie zu lehren, die\n"
"Du nie vergessen darfst!"
BOX_BREAK

UNSKIPPABLE "Es ist ein Lied, " COLOR(BLUE) "das die \n"
"Königsfamilie von Generation zu \n"
"Generation weitergibt" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Ich habe dieses Lied für\n"
"Prinzessin Zelda gespielt, als sie\n"
"noch ein kleines Kind war."
BOX_BREAK

UNSKIPPABLE "In den Noten verbergen\n"
"sich mysteriöse Kräfte!"
BOX_BREAK

UNSKIPPABLE "Lausche nun der Melodie..."
)
,
MSG(
UNSKIPPABLE "Tu es un garçon courageux...\n"
"Une grande et périlleuse aventure\n"
"t'attend!"
BOX_BREAK

UNSKIPPABLE "D'après les prédictions de la \n"
"Princesse, mon rôle est d'enseigner\n"
"une mélodie au garçon de la forêt."
BOX_BREAK

UNSKIPPABLE "Cette mélodie est transmise de" COLOR(BLUE) "\n"
COLOR(DEFAULT) "génération en génération" COLOR(BLUE) " au sein\n"
"de la Famille Royale" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Elle fut pendant longtemps la \n"
"berceuse de la Princesse Zelda..."
BOX_BREAK

UNSKIPPABLE "Ces notes renferment un pouvoir\n"
"mystérieux."
BOX_BREAK

UNSKIPPABLE "Ecoute bien..."
)
)

DEFINE_MESSAGE(0x7091, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "これまでの　悲劇は\n"
SHIFT(18) "すべて　私の　あやまちです…"
BOX_BREAK

UNSKIPPABLE SHIFT(9) "おのれの　未熟さを　かえりみず、\n"
SHIFT(27) "聖地を　制御しようとし…"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "さらに　あなたまで\n"
SHIFT(6) "この争いに　巻き込んでしまった。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "今こそ　私は　その　あやまちを\n"
SHIFT(39) "正さねばなりません。"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "マスターソードを　眠りにつかせ…\n"
SHIFT(24) "「時の扉」を　閉ざすのです。"
)
,
MSG(
UNSKIPPABLE "All the tragedy that has befallen\n"
"Hyrule was my doing..."
BOX_BREAK

UNSKIPPABLE "I was so young...I could not\n"
"comprehend the consequences of \n"
"trying to control the Sacred Realm."
BOX_BREAK

UNSKIPPABLE "I dragged you into it, too."
BOX_BREAK

UNSKIPPABLE "Now it is time for me to make up \n"
"for my mistakes..."
BOX_BREAK

UNSKIPPABLE "You must lay the Master Sword to \n"
"rest and close the Door of Time..."
)
,
MSG(
UNSKIPPABLE "Ich bin schuld an all dem Unheil, \n"
"das über Hyrule kam..."
BOX_BREAK

UNSKIPPABLE "Ich war zu jung... Ich konnte noch\n"
"nicht wissen, welche Fährnisse\n"
"sich mir auftun würden..."
BOX_BREAK

UNSKIPPABLE "Ich habe Dich in all das \n"
"hineingezogen..."
BOX_BREAK

UNSKIPPABLE "Nun ist es an der Zeit, meinen\n"
"Fehler wiedergutzumachen..."
BOX_BREAK

UNSKIPPABLE "Leg nun das Master-Schwert aus \n"
"Deinen Händen und schließe so\n"
"das Zeitportal..."
)
,
MSG(
UNSKIPPABLE "Je suis responsable de tous les \n"
"maux d'Hyrule..."
BOX_BREAK

UNSKIPPABLE "J'étais si jeune... \n"
"J'ignorais que le contrôle du Saint \n"
"Royaume pouvait entraîner tant de \n"
"troubles..."
BOX_BREAK

UNSKIPPABLE "Je t'ai fait prendre beaucoup de\n"
"risques."
BOX_BREAK

UNSKIPPABLE "Il est temps pour moi de réparer\n"
"mes erreurs..."
BOX_BREAK

UNSKIPPABLE "Laisse derrière toi l'Epée de \n"
"Légende et scelle les portes du \n"
"Temps..."
)
)

DEFINE_MESSAGE(0x7092, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(72) "けれど…\n"
SHIFT(33) "その時、時を旅する道も\n"
SHIFT(30) "閉ざされてしまいます…"
)
,
MSG(
UNSKIPPABLE "However, by doing this, the road\n"
"between times will be closed..."
)
,
MSG(
UNSKIPPABLE "Die Verbindung zwischen den\n"
"Zeiten sei für immer gelöst..."
)
,
MSG(
UNSKIPPABLE "Mais en faisant cela les chemins\n"
"du temps seront à jamais fermés..."
)
)

DEFINE_MESSAGE(0x7093, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) NAME "、\n"
SHIFT(45) "オカリナを　私に…"
BOX_BREAK

UNSKIPPABLE SHIFT(33) "今の私なら、賢者として\n"
SHIFT(12) "この　時のオカリナで　あなたを\n"
SHIFT(6) "元の時代に　帰してあげられます。"
)
,
MSG(
UNSKIPPABLE NAME ",\n"
"give the Ocarina to me..."
BOX_BREAK

UNSKIPPABLE "As a Sage, I can return you\n"
"to your original time with it."
)
,
MSG(
UNSKIPPABLE NAME ",\n"
"gib mir die Okarina..."
BOX_BREAK

UNSKIPPABLE "Als eine der Weisen habe ich die \n"
"Gabe, Dich in Deine Zeit \n"
"zurückbringen zu können."
)
,
MSG(
UNSKIPPABLE NAME ",\n"
"rends-moi l'Ocarina..."
BOX_BREAK

UNSKIPPABLE "En tant que Sage, je peux te\n"
"renvoyer dans ton temps."
)
)

DEFINE_MESSAGE(0x7094, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_TOP,
MSG(
UNSKIPPABLE SHIFT(21) "ハイラルに　平和が戻る時…"
BOX_BREAK

UNSKIPPABLE SHIFT(72) "それが…\n"
SHIFT(6) "私たちの　別れの時なのです…ね。"
)
,
MSG(
UNSKIPPABLE "When peace returns to Hyrule..."
BOX_BREAK

UNSKIPPABLE "It will be time for us to say \n"
"good-bye..."
)
,
MSG(
UNSKIPPABLE "Nun herrscht wieder Friede\n"
"in Hyrule..."
BOX_BREAK

UNSKIPPABLE "Und nun ist es für uns an der\n"
"Zeit, Abschied zu nehmen..."
)
,
MSG(
UNSKIPPABLE "Quand la paix reviendra en Hyrule...\n"
UNSKIPPABLE "Il sera temps de nous dire adieu..."
)
)

DEFINE_MESSAGE(0x7095, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE "さあ　帰りなさい　" NAME "\n"
"失われた時を　取り戻すために！"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "あなたが　いるべきところへ…\n"
SHIFT(27) "あなたが　あるべき姿で…"
)
,
MSG(
UNSKIPPABLE "Now, go home, " NAME ".\n"
"Regain your lost time!"
BOX_BREAK

UNSKIPPABLE "Home... \n"
"where you are supposed to be...\n"
"the way you are supposed to be..."
)
,
MSG(
UNSKIPPABLE "Gehe nun, " NAME ".\n"
"Hole die verlorenen sieben Jahre\n"
"nach!"
BOX_BREAK

UNSKIPPABLE "Gehe nach Hause... \n"
"Dorthin, wo Dein Platz ist...\n"
"Als der, als der Du aufwuchst..."
)
,
MSG(
UNSKIPPABLE "Rentre chez toi, " NAME ".\n"
"Retourne à ton époque!"
BOX_BREAK

UNSKIPPABLE "Ta maison... \n"
"Là est ta place...\n"
"Là est ton temps..."
)
)

DEFINE_MESSAGE(0x7096, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) QUICKTEXT_ENABLE "チェッ…！" QUICKTEXT_DISABLE EVENT
)
,
MSG(
SHIFT(70) QUICKTEXT_ENABLE "Tsk" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Tsk." QUICKTEXT_DISABLE EVENT
)
,
MSG(
SHIFT(70) QUICKTEXT_ENABLE "Tss..." QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "tss..." QUICKTEXT_DISABLE EVENT
)
,
MSG(
SHIFT(66) QUICKTEXT_ENABLE "Tss..." QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "Tss..." QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x7097, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "ま、子供にゃ　ムリな金額かもな。" EVENT
)
,
MSG(
"Well, maybe that's too much\n"
"for a kid to pay." EVENT
)
,
MSG(
"Das scheint für ein Kind\n"
"ein zu hoher Preis zu sein." EVENT
)
,
MSG(
"Hmmm...Tu as perdu ton argent de\n"
"poche?" EVENT
)
)

DEFINE_MESSAGE(0x7098, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "よっしゃ、こっそり通してやる。\n"
SHIFT(54) "こっそりとな…" EVENT
)
,
MSG(
"OK, I'll let you pass,\n"
"quickly!" EVENT
)
,
MSG(
"Nun gut, ich lasse Dich passieren!\n"
"Schnell!" EVENT
)
,
MSG(
"Bon...j'te laisse passer!" EVENT
)
)

DEFINE_MESSAGE(0x7099, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ミンナニハ　ナイショダヨ。"
)
,
MSG(
"KEEP IT A SECRET \n"
"FROM EVERYONE."
)
,
MSG(
"ERZÄHL DAS BLOSS \n"
"NIEMANDEM!"
)
,
MSG(
"GARDE CA POUR TOI!\n"
"NE LE REPETE A PERSONNE!"
)
)

DEFINE_MESSAGE(0x709A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "ねむたいぞ〜っ！"
BOX_BREAK

SHIFT(12) "夜の見張りなんて　たいくつだ。\n"
SHIFT(24) "オバケでも　でないかな〜。"
BOX_BREAK

SHIFT(27) "オイラは　オバケについて\n"
SHIFT(18) "研究してるんだ、個人的にね。\n"
SHIFT(15) "なにか　将来　役に立つかもな。"
)
,
MSG(
"Man, I am SO tired!"
BOX_BREAK

"The night watch is so boring!\n"
"I wish some ghosts would come \n"
"out or something..."
BOX_BREAK

"Hey, I'm really interested in \n"
"ghosts!"
BOX_BREAK

"Studying them is a hobby of mine,\n"
"but you never know...the time\n"
"might come when that kind of\n"
"knowledge might be useful!"
)
,
MSG(
"Mann, ich bin soooo müde!"
BOX_BREAK

"Nachtwache ist total langweilig!\n"
"Wenn wenigstens ein paar Geister\n"
"rumspuken würden..."
BOX_BREAK

"Ich finde so etwas nämlich\n"
"wirklich interessant!"
BOX_BREAK

"Ich studiere Geister-Wissenschaften\n"
"schon seit Jahren. Man weiß\n"
"ja nie, ob das nicht einmal\n"
"nützlich sein kann!"
)
,
MSG(
"Haaa! Je suis siiiii fatigué!"
BOX_BREAK

"Les tours de garde nocturnes sont\n"
"super-méga-lourds!\n"
"Y'a même pas de fantômes..."
BOX_BREAK

"Hein? J'adore les fantômes!"
BOX_BREAK

"C'est ma passion! En savoir \n"
"beaucoup sur les Esprits et les\n"
"Ames peut être utile, non?"
)
)

DEFINE_MESSAGE(0x709B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "ウチの　ワンちゃんは\n"
SHIFT(15) "そこらの犬コロとは　毛なみが\n"
SHIFT(30) "ちがうザマス、毛なみが！"
)
,
MSG(
"My precious little puppy's fur coat\n"
"is very special compared to the \n"
"other mutts around here!"
)
,
MSG(
"Verglichen mit den streunenden\n"
"Promenadenmischungen ist das Fell\n"
"meines Hundes prächtig und \n"
"glänzend!"
)
,
MSG(
"Mon petit Kiki est le plus beau!\n"
"Il est le plus beau du moooonde!\n"
"C'est un gentil Kiki d'amour et\n"
"d'amitié qui me fait des bisous!"
)
)

DEFINE_MESSAGE(0x709C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "ウチの　ワンちゃんは\n"
SHIFT(3) "そこらの犬コロとは　ダッシュ力が\n"
SHIFT(18) "ちがうザマス、ダッシュ力が！"
)
,
MSG(
"My precious puppy can run faster\n"
"than any of the other mutts\n"
"around here!"
)
,
MSG(
"Mein Hund ist gut erzogen...\n"
"Aber manchmal läuft auch er \n"
"nachts in Hyrule herum - so wie\n"
"diese streunenden Stinkeköter!"
)
,
MSG(
"Mon p'tit Kiki, il est le Kiki le \n"
"plus rapide du moooonde!\n"
"Il court et saute et fait des \n"
"bisous à sa mémère."
)
)

DEFINE_MESSAGE(0x709D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "ウチの　ワンちゃん、\n"
SHIFT(21) "どっか　いったザマス〜ッ！！\n"
SHIFT(24) "探してほし〜ザマス〜ッ！！"
)
,
MSG(
"I can't find my puppy anywhere!\n"
"I need you to look for it! Please!"
)
,
MSG(
"Hast Du meinen Richard gesehen?\n"
"Er ist sonst so ein braver Hund,\n"
"aber heute abend ist er\n"
"davongelaufen. Bitte suche ihn!"
)
,
MSG(
"Je ne trouve plus mon petit KIKI!\n"
"Il est où le Kiki? Il est où?\n"
"Kiki! Kiki! Mon p'tit Kiki!"
)
)

DEFINE_MESSAGE(0x709E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) QUICKTEXT_ENABLE "キイィィィィィィィ〜ッ！！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(42) QUICKTEXT_ENABLE "ちがうザマス〜ッ！！" QUICKTEXT_DISABLE "\n"
"ウチの　ワンちゃんを　こんな駄犬と\n"
"いっしょにしないで　ほし〜ザマス！"
)
,
MSG(
SHIFT(76) QUICKTEXT_ENABLE "Arrrgh!" QUICKTEXT_DISABLE "\n"
"That is not my dog! \n"
"How could you mix up my puppy\n"
"with a mutt like that?!"
)
,
MSG(
QUICKTEXT_ENABLE "Arrrgh!" QUICKTEXT_DISABLE " Das ist nicht mein Hundi!\n"
"Wie kannst Du meinen Liebling mit\n"
"so einer Zeckenmatte\n"
"verwechseln?!"
)
,
MSG(
SHIFT(76) QUICKTEXT_ENABLE "Arrrgh!" QUICKTEXT_DISABLE "\n"
"C'est pas mon chien ça!\n"
"Celui-là il bave et il est moche!"
)
)

DEFINE_MESSAGE(0x709F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) QUICKTEXT_ENABLE "リチャード！！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(3) "ウチの　リチャードちゃん　ザマス！"
BOX_BREAK

SHIFT(48) "感謝　感激ザマス！\n"
SHIFT(9) "お礼に　コレ　さしあげるザマス。"
)
,
MSG(
SHIFT(70) QUICKTEXT_ENABLE "Richard!" QUICKTEXT_DISABLE
BOX_BREAK

"This is my little Richard!\n"
"Thank you! Thank you!\n"
"I'll give this to you as a\n"
"reward!"
)
,
MSG(
SHIFT(70) QUICKTEXT_ENABLE "Richard!" QUICKTEXT_DISABLE
BOX_BREAK

"Da ist ja mein kleiner Richie\n"
"wieder! Vielen Dank!\n"
"Bitte, nimm dies als Belohnung an\n"
"Dich!"
)
,
MSG(
SHIFT(83) QUICKTEXT_ENABLE "KIKI!" QUICKTEXT_DISABLE
BOX_BREAK

"Mon p'tit Kiki! C'est bien lui!\n"
"Merci! Merci!\n"
"Tiens! Voilà pour toi!"
)
)

DEFINE_MESSAGE(0x70A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "夜は　野犬がいて　危ないザマス。\n"
SHIFT(18) "アンタに　言ってないザマス。\n"
SHIFT(6) "ウチのワンちゃんの　心配ザマス。"
)
,
MSG(
"At night it's dangerous to go out\n"
"with all the wild dogs around...\n"
"No, I wasn't warning you! \n"
"I'm worried about my puppy!"
)
,
MSG(
"Nachts, wenn die Köter draußen \n"
"herumstreunen, ist es gefährlich!\n"
"Nein, nicht für Dich, sondern für\n"
"meinen Liebling!"
)
,
MSG(
"La nuit des chiens errants sèment \n"
"la terreur, j'ai peur!\n"
"Pas pour toi...pour mon chien.\n"
"Mon Kiki à moi....mon p'tit Kiki!"
)
)

DEFINE_MESSAGE(0x70A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) "ここは、" COLOR(RED) "しあわせのお面屋" COLOR(DEFAULT) "。\n"
SHIFT(24) "人々に、幸せを呼ぶ　お面を\n"
SHIFT(36) "あつかって　おります。"
BOX_BREAK

SHIFT(12) "あなたは　幸せのセールスマン。\n"
SHIFT(9) "お面を　１つ　レンタルできます。"
BOX_BREAK

SHIFT(27) "お面を　だれかに　売って、\n"
SHIFT(21) COLOR(RED) "代金" COLOR(DEFAULT) "を　店に　納めて下さい。"
BOX_BREAK

SHIFT(33) "くわしく　知りたい方は\n"
"そこの" COLOR(RED) "カンバン" COLOR(DEFAULT) "を　お読みください。"
BOX_BREAK

SHIFT(24) "すべてのお面が　売れた時、\n"
SHIFT(6) "あなた自身が　幸せになるのです。"
BOX_BREAK

SHIFT(21) "信じなさい…　信じなさい…" EVENT
)
,
MSG(
"Hiyeee!\n"
"Welcome to the " COLOR(RED) "Happy Mask Shop" COLOR(DEFAULT) "!\n"
"We deal in masks that bring \n"
"happiness to everyone!"
BOX_BREAK

"How would you like to be a \n"
"happiness salesman? I'll lend you\n"
"a mask. You sell the mask and \n"
"bring the " COLOR(RED) "money " COLOR(DEFAULT) "back here."
BOX_BREAK

"If you want to read the fine \n"
"print, take a look at the " COLOR(RED) "sign \n"
COLOR(DEFAULT) "right over there."
BOX_BREAK

"After you've sold all the masks,\n"
"you will become happy" COLOR(RED) " " COLOR(DEFAULT) "yourself!"
BOX_BREAK

SHIFT(64) "Have faith..." EVENT
)
,
MSG(
"Hallo und willkommen\n"
"beim lustigen " COLOR(RED) "Maskenhändler" COLOR(DEFAULT) "!\n"
"Wir handeln mit Masken, die\n"
"allen Leuten Freude bringen..."
BOX_BREAK

"Wärst nicht auch Du gern ein Bote\n"
"der Freude? Paß auf, ich leihe\n"
"Dir eine Maske, Du verkaufst sie\n"
"und gibst mir dann das " COLOR(RED) "Geld" COLOR(DEFAULT) "!"
BOX_BREAK

"Willst Du wissen, wie es \n"
"funktioniert, lies das " COLOR(RED) "Schild" COLOR(DEFAULT) "\n"
"zu Deiner Linken."
BOX_BREAK

"Übrigens: Wenn Du alle Masken \n"
"verkauft hast, wirst auch Du \n"
"glücklicher sein!"
BOX_BREAK

SHIFT(60) "Vertrau mir..." EVENT
)
,
MSG(
"B'jour!\n"
"Bienvenue à la " COLOR(RED) "Foire aux Masques" COLOR(DEFAULT) "!\n"
"Notre devise:\n"
"Un masque, un sourire,...la joie!"
BOX_BREAK

"Veux-tu devenir un coursier \n"
"officiel distributeur de bonheur? \n"
"Je te prête un masque, tu le \n"
"vends et tu me rapportes " COLOR(RED) "l'argent" COLOR(DEFAULT) "."
BOX_BREAK

"Pour jeter un oeil aux clauses du\n"
"contrat, va lire la " COLOR(RED) "pancarte" COLOR(DEFAULT) "."
BOX_BREAK

"Après avoir vendu tous les \n"
"masques, ta joie sera aussi grande\n"
"que le Mont du Péril!"
BOX_BREAK

SHIFT(50) "Aie la foi, petit..." EVENT
)
)

DEFINE_MESSAGE(0x70A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "左右で　お面選んでね。\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "店主と話す\n"
    "借りるのやめる" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Select a mask with left or right\n"
"on " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Talk to the shop owner.\n"
    "Don't borrow" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Wähle eine Maske, indem Du den\n"
COLOR(LIGHTBLUE) "[Control-Pad] " COLOR(DEFAULT) "nach links oder rechts bewegst.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Mit dem Ladenbesitzer sprechen!\n"
    "Nichts ausleihen!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Choisis un masque avec le " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Parler au vendeur\n"
    "Quitter" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x70A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) COLOR(RED) "お面" COLOR(DEFAULT) "は　" COLOR(YELLOW) "Ｃアイテム" COLOR(DEFAULT) "です。\n"
SHIFT(33) "そうびした後、" COLOR(YELLOW) "[C]" COLOR(DEFAULT) "を押すと\n"
SHIFT(42) "お面を　かぶります。"
BOX_BREAK

SHIFT(21) "お面を　かぶっている状態で\n"
SHIFT(6) "だれかと　会話すると、なんらかの\n"
SHIFT(24) "反応がある時が　あります。"
BOX_BREAK

SHIFT(21) "そのお面に　興味のある人は\n"
SHIFT(18) "お面のことを　聞いてきます。\n"
SHIFT(15) "中には　欲しがる人も　います。"
BOX_BREAK

SHIFT(45) "この世の　どこかに\n"
SHIFT(30) "きっと　あなたの　お面を\n"
SHIFT(18) "待っている人が　いるのです。"
BOX_BREAK

SHIFT(21) "信じなさい…　信じなさい…" EVENT
)
,
MSG(
"A " COLOR(RED) "mask " COLOR(DEFAULT) "is a " COLOR(YELLOW) "[C] Button " COLOR(DEFAULT) "item. Set\n"
"it to " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " and press " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " to wear it."
BOX_BREAK

"If you talk to someone with a \n"
"mask on, you might get a reaction."
BOX_BREAK

"If anyone is interested in the\n"
"mask, he or she will ask you \n"
"about it. Someone may want the \n"
"mask."
BOX_BREAK

"Somewhere in the world, somebody\n"
"is waiting for these masks."
BOX_BREAK

SHIFT(50) "Just have faith..." EVENT
)
,
MSG(
"Eine " COLOR(RED) "Maske " COLOR(DEFAULT) "ist ein " COLOR(YELLOW) "[C]-Knopf-\n"
"Gegenstand" COLOR(DEFAULT) ". Plaziere sie auf " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " \n"
"und drücke " COLOR(YELLOW) "[C]" COLOR(DEFAULT) ", um sie zu tragen."
BOX_BREAK

"Sprichst Du jemanden an, während\n"
"Du die Maske trägst, erhältst Du\n"
"eine entsprechende Reaktion."
BOX_BREAK

"Wenn jemand an der Maske \n"
"interessiert ist, wird Dich \n"
"derjenige danach fragen."
BOX_BREAK

"Irgendwo in diesem Land findet\n"
"sich für jede Maske ein Käufer."
BOX_BREAK

SHIFT(38) "Vertrau mir einfach..." EVENT
)
,
MSG(
"Un " COLOR(RED) "masque" COLOR(DEFAULT) " est un objet \n"
"d'" COLOR(YELLOW) "inventaire [C]" COLOR(DEFAULT) ".\n"
"Assigne-le à " COLOR(YELLOW) "[C]" COLOR(DEFAULT) " et active-le avec\n"
COLOR(YELLOW) "[C]" COLOR(DEFAULT) " pour le porter."
BOX_BREAK

"Tes interlocuteurs réagiront\n"
"différemment en fonction de ton\n"
"masque."
BOX_BREAK

"Si quelqu'un s'intéresse à ton \n"
"masque, n'hésite pas à lui vendre."
BOX_BREAK

"Quelque part, perdu dans ce \n"
"monde de haine, une voix s'élève \n"
"par-delà les montagnes:\n"
QUICKTEXT_ENABLE "\"J'VEUX UN MASQUE\"!" QUICKTEXT_DISABLE
BOX_BREAK

"C'est une image, bien sûr..." EVENT
)
)

DEFINE_MESSAGE(0x70A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "さっき　このへんに\n"
SHIFT(12) "かわいい　女のコが　いたけど…\n"
SHIFT(3) "お城へ　行ったみたいよ…　イヤン！"
)
,
MSG(
"I might have seen a cute little\n"
"girl around here...\n"
"Maybe she went to the castle?\n"
"Who knows?"
)
,
MSG(
"Vor kurzem sah ich noch ein\n"
"goldiges, kleines Mädchen hier...\n"
"Vielleicht ist sie zum Schloß \n"
"gegangen... Wer weiß..."
)
,
MSG(
"J'ai vu une jolie fille passer...\n"
"Elle allait vers le château?\n"
"J'en sais rien moi!"
)
)

DEFINE_MESSAGE(0x70A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "おお、売れましたか。\n"
SHIFT(12) "キータンのお面代　" COLOR(RED) "１０ルピー" COLOR(DEFAULT) "、\n"
SHIFT(18) "さっそく　納金お願いします。" EVENT
)
,
MSG(
"Oh, great! You sold it!\n"
"Please pay back " COLOR(RED) "10 Rupees " COLOR(DEFAULT) "for\n"
"the Keaton Mask now." EVENT
)
,
MSG(
"Du hast sie verkauft?! Fantastisch!\n"
"Dann zahl mir nun meine " COLOR(RED) "10 Rubine \n"
COLOR(DEFAULT) "für die Fuchs-Maske." EVENT
)
,
MSG(
"Haaaa, bien! Tu l'as vendu!\n"
"Donne-moi " COLOR(RED) "10 Rubis " COLOR(DEFAULT) "pour le Masque\n"
"du Renard." EVENT
)
)

DEFINE_MESSAGE(0x70A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "おお、まだ　売れてないのですか？\n"
SHIFT(33) "信じなさい…　もっと…" EVENT
)
,
MSG(
"Oh! You haven't sold the newest\n"
"mask yet. Just have faith... Keep\n"
"trying a little longer." EVENT
)
,
MSG(
"Oh! Du hast die Maske noch nicht\n"
"verkauft. Vertrau mir... Es  wird\n"
"sich schon ein Käufer finden." EVENT
)
,
MSG(
"Ho! Tu n'as pas vendu le masque?\n"
"Pas grave...ça viendra...\n"
"Cherche encore! Encore! Encore!" EVENT
)
)

DEFINE_MESSAGE(0x70A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(39) "はい　はい　たしかに。" EVENT
)
,
MSG(
"Payment received!" EVENT
)
,
MSG(
"Bezahlung erhalten!" EVENT
)
,
MSG(
"Merci mon joli!" EVENT
)
)

DEFINE_MESSAGE(0x70A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(66) "何？　ない？！"
BOX_BREAK

SHIFT(66) QUICKTEXT_ENABLE "ゆるさん！！" QUICKTEXT_DISABLE "\n"
SHIFT(21) "どうにかして　持ってこい！！" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "What?!" QUICKTEXT_DISABLE "\n"
"You don't have my money?!"
BOX_BREAK

QUICKTEXT_ENABLE "How dare you!" QUICKTEXT_DISABLE
BOX_BREAK

"You'd better bring me my money...\n"
"or else!" EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Was?!" QUICKTEXT_DISABLE "\n"
"Du hast mein Geld verbraten?!"
BOX_BREAK

QUICKTEXT_ENABLE "Wie kannst Du es wagen!" QUICKTEXT_DISABLE
BOX_BREAK

"Du besorgst besser ganz schnell \n"
"mein Geld, oder..." EVENT
)
,
MSG(
QUICKTEXT_ENABLE "Quoi?!" QUICKTEXT_DISABLE "\n"
"Tu n'as pas mon argent?!"
BOX_BREAK

QUICKTEXT_ENABLE "C'EST MAL!" QUICKTEXT_DISABLE
BOX_BREAK

"Donne-moi mon pognon...sinon...\n"
"Plus de masques!" EVENT
)
)

DEFINE_MESSAGE(0x70A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(39) "おぉぉぉぉぉぉっ！！！"
BOX_BREAK

SHIFT(39) "ごくろうさまでした。\n"
SHIFT(48) "お面は　完売です！\n"
SHIFT(18) "あなたを　信じて　よかった…" EVENT
)
,
MSG(
"Oh yeah!"
BOX_BREAK

"Very well done!\n"
"All the masks are sold out."
BOX_BREAK

"I knew I could trust you!" EVENT
)
,
MSG(
"Hey!"
BOX_BREAK

"Gut gemacht!\n"
"Alle Masken sind verkauft."
BOX_BREAK

"Ich wußte, daß Du der richtige\n"
"Mann, ähh, Junge dafür bist!" EVENT
)
,
MSG(
"Fantastique!"
BOX_BREAK

"Tous les masques ont été vendus."
BOX_BREAK

"Tu es un excellent vendeur.\n"
"Je l'ai toujours su!" EVENT
)
)

DEFINE_MESSAGE(0x70AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) "ごほうびとして…\n"
SHIFT(33) "あなたに　とっておきの\n"
SHIFT(24) "お面を　お貸ししましょう。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "これは　" COLOR(RED) "まことの仮面" COLOR(DEFAULT) "といって\n"
SHIFT(39) "シーカー族に　伝わる\n"
SHIFT(42) "ふしぎな　お面です。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "なんでも　人の心を　見通せる…\n"
SHIFT(33) "という、べんりなようで\n"
SHIFT(54) "恐ろしい道具…"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "なんで　恐ろしいかって？"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "それは　あなたが\n"
SHIFT(24) "もっと　人生経験を　つめば\n"
SHIFT(27) "やがて　わかることです…"
BOX_BREAK

UNSKIPPABLE SHIFT(12) "フォッ　フォッ　フオッ　フォッ！" EVENT
)
,
MSG(
UNSKIPPABLE "As a reward...\n"
"I will lend you this special mask."
BOX_BREAK

UNSKIPPABLE "This is the " COLOR(RED) "Mask of Truth" COLOR(DEFAULT) ". It is a\n"
"mysterious mask passed down by \n"
"the Sheikah."
BOX_BREAK

UNSKIPPABLE "With this mask you can see into \n"
"other people's minds...\n"
"It's useful, but scary!"
BOX_BREAK

UNSKIPPABLE "Why is it scary?"
BOX_BREAK

UNSKIPPABLE "You may find out as you grow\n"
"older and discover the true \n"
"meaning of life..."
BOX_BREAK

UNSKIPPABLE "Ho ho ho!" EVENT
)
,
MSG(
UNSKIPPABLE "Als Belohnung für Deine Mühe \n"
"sollst Du eine ganz besondere \n"
"Maske erhalten!"
BOX_BREAK

UNSKIPPABLE "Dies ist die " COLOR(RED) "Maske des Wissens." COLOR(DEFAULT) "\n"
"Es ist eine mysteriöse Maske aus\n"
"dem Erbe der Shiekah."
BOX_BREAK

UNSKIPPABLE "Suche, und Du wirst die \n"
"verborgenen Kräfte der Maske \n"
"entdecken... Sie ist nützlich und\n"
"unheimlich zugleich..."
BOX_BREAK

UNSKIPPABLE "Warum sie unheimlich ist?"
BOX_BREAK

UNSKIPPABLE "Das wirst Du herausfinden, wenn\n"
"Du älter wirst und irgendwann den\n"
"Sinn des Lebens erkennst..."
BOX_BREAK

UNSKIPPABLE "Vertrau mir, hahaha..." EVENT
)
,
MSG(
UNSKIPPABLE "En récompense...\n"
"Je te laisse ce masque spécial."
BOX_BREAK

UNSKIPPABLE "C'est le " COLOR(RED) "Masque de Vérité" COLOR(DEFAULT) ". \n"
"ses pouvoirs sont mystérieux...\n"
"Il me vient des Sheikahs."
BOX_BREAK

UNSKIPPABLE "Ce masque te permet de lire dans\n"
"l'esprit des gens...\n"
"Pratique mais effrayant!"
BOX_BREAK

UNSKIPPABLE "Pourquoi effrayant?"
BOX_BREAK

UNSKIPPABLE "Ha! Tu as encore bien des choses\n"
"à apprendre! Ho ho ho!" EVENT
)
)

DEFINE_MESSAGE(0x70AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "これからは　自由に\n"
SHIFT(30) "お面が　借りられますよ。\n"
SHIFT(60) "信じなさい…" EVENT
)
,
MSG(
"From now on you can borrow any\n"
"mask you want.\n"
"Just have faith..." EVENT
)
,
MSG(
"Ich habe Nachschub bekommen! \n"
"Von nun an kannst Du jede \n"
"beliebige Maske ausleihen...\n"
"Vertrau mir..." EVENT
)
,
MSG(
"Tu peux désormais emprunter \n"
"n'importe quel masque.\n"
"Amuse-toi bien..." EVENT
)
)

DEFINE_MESSAGE(0x70AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) "いらっしゃいませ。\n"
SHIFT(12) "なにを　お貸しいたしましょう。" EVENT
)
,
MSG(
"Welcome!\n"
"Which mask can I lend to you?" EVENT
)
,
MSG(
"Willkommen!\n"
"Welche Maske möchtest Du \n"
"leihen?" EVENT
)
,
MSG(
"Bienvenue!\n"
"Quel masque te ferait plaisir?" EVENT
)
)

DEFINE_MESSAGE(0x70AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) "左右で　お面を選んでね。" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "まことの仮面の説明\n"
    "借りるのやめる" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Choose a mask with left or right \n"
"on " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ask about Mask of Truth\n"
    "Don't borrow a mask" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Bewege den " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) " nach rechts oder\n"
"links, um eine Maske zu wählen.\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Frage nach der Maske des Wissens! \n"
    "Nichts ausleihen!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Choisis un masque avec le " COLOR(LIGHTBLUE) "[Control-Pad]" COLOR(DEFAULT) ".\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Le Masque de Vérité?\n"
    "Quitter" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x70AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(51) COLOR(RED) "まことの仮面" COLOR(DEFAULT) "は、\n"
SHIFT(12) "シーカー族に　古くから　伝わる\n"
SHIFT(42) "ふしぎな　お面です。"
BOX_BREAK

SHIFT(12) "なんでも　人の心を　見通せる…\n"
SHIFT(33) "という、べんりなようで\n"
SHIFT(54) "恐ろしい道具…"
BOX_BREAK

SHIFT(30) "なんで　恐ろしいかって？"
BOX_BREAK

SHIFT(51) "それは　あなたが\n"
SHIFT(24) "もっと　人生経験を　つめば\n"
SHIFT(27) "やがて　わかることです…"
BOX_BREAK

SHIFT(12) "フォッ　フォッ　フォッ　フォッ！" EVENT
)
,
MSG(
"This is the " COLOR(RED) "Mask of Truth" COLOR(DEFAULT) ". It is a\n"
"mysterious mask passed down by \n"
"the Sheikah."
BOX_BREAK

"With this mask you can see into \n"
"other people's minds. It's useful,\n"
"but scary!"
BOX_BREAK

"Why is it scary?"
BOX_BREAK

"You'll find out as you grow older!"
BOX_BREAK

"Ho ho ho!" EVENT
)
,
MSG(
"Dies ist die " COLOR(RED) "Maske des Wissens" COLOR(DEFAULT) ".\n"
"Es ist eine mysteriöse Maske aus\n"
"dem Erbe der Shiekah."
BOX_BREAK

"Suche, und Du wirst die \n"
"verborgenen Kräfte der Maske \n"
"entdecken... Sie ist nützlich und\n"
"unheimlich zugleich..."
BOX_BREAK

"Warum sie unheimlich ist?"
BOX_BREAK

"Das wirst Du herausfinden, wenn\n"
"Du älter bist und irgendwann den\n"
"Sinn des Lebens erkennst..."
BOX_BREAK

"Vertrau mir, hahaha..." EVENT
)
,
MSG(
"Voici le " COLOR(RED) "Masque de Vérité" COLOR(DEFAULT) ". \n"
"Cet objet Sheikah est très \n"
"mystérieux."
BOX_BREAK

"Il permet de lire dans les esprits.\n"
"Pratique mais effrayant!"
BOX_BREAK

"Pourquoi effrayant?"
BOX_BREAK

"Tu comprendras quand tu seras \n"
"grand!"
BOX_BREAK

"Ho ho ho!" EVENT
)
)

DEFINE_MESSAGE(0x70AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "まことの仮面　　非売品\n"
COLOR(DEFAULT) "特殊能力あり" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Mask of Truth -- Not for Sale" COLOR(DEFAULT) "\n"
"This mask has special powers." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Maske des Wissens -- Unverkäuflich" COLOR(DEFAULT) "\n"
"Eine Maske mit mysteriösen Kräften." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque de Vérité -- En exposition\n"
COLOR(DEFAULT) "Ce masque détient d'étranges \n"
"pouvoirs." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ドクロのお面　　定価　２０ルピー\n"
COLOR(DEFAULT) "角のはえた　ドクロのお面" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Skull Mask -- Price 20 Rupees" COLOR(DEFAULT) "\n"
"A horned skull mask." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Schädel-Maske -- Preis 20 Rubine" COLOR(DEFAULT) "\n"
"Eine gehörnte Totenschädelmaske." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque de Mort -- 20 Rubis" COLOR(DEFAULT) "\n"
"Une tête de mort avec des cornes." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "こわそなお面　　定価　３０ルピー\n"
COLOR(DEFAULT) "木でできた　悲しそうな顔の　お面" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Spooky Mask -- Price 30 Rupees\n"
COLOR(DEFAULT) "A sad, wooden mask." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Geister-Maske -- Preis 30 Rubine\n"
COLOR(DEFAULT) "Eine traurig blickende Holzmaske." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque d'Effroi -- 30 Rubis\n"
COLOR(DEFAULT) "Un masque de bois bien triste." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "キータンのお面　　定価　１０ルピー\n"
COLOR(DEFAULT) "最近はやりの　キータングッズ" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Keaton Mask -- Price 10 Rupees\n"
COLOR(DEFAULT) "Keaton stuff is hot, hot, hot!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Fuchs-Maske -- Preis 10 Rubine\n"
COLOR(DEFAULT) "Der letzte Schrei! Sehr angesagt!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque du Renard -- 10 Rubis\n"
COLOR(DEFAULT) "Le Renard est à la mode!" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ウサギずきん　　定価　５０ルピー\n"
COLOR(DEFAULT) "プラプラゆれる　ウサギのお耳" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bunny Hood -- Price 50 Rupees\n"
COLOR(DEFAULT) "With swinging rabbit ears!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Hasenohren -- Preis 50 Rubine\n"
COLOR(DEFAULT) "Wippende Hasenohren! Supersüß!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque du Lapin -- 50 Rubis\n"
COLOR(DEFAULT) "Ses oreilles sont à croquer!" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ドクロのお面　　貸し出し自由\n"
COLOR(DEFAULT) "角のはえた　ドクロのお面" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Skull Mask -- Free to Borrow" COLOR(DEFAULT) "\n"
"A horned skull mask." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Schädel-Maske -- Gebührenfrei!" COLOR(DEFAULT) "\n"
"Eine gehörnte Totenschädelmaske." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque  de Mort -- Gratuit" COLOR(DEFAULT) "\n"
"Une tête d'os avec des cornes." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "こわそなお面　　貸し出し自由\n"
COLOR(DEFAULT) "木でできた　悲しそうな顔の　お面" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Spooky Mask -- Free to Borrow\n"
COLOR(DEFAULT) "A sad, wooden mask." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Geister-Maske -- Gebührenfrei!\n"
COLOR(DEFAULT) "Eine traurig blickende Holzmaske." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque d'Effroi -- Gratuit\n"
COLOR(DEFAULT) "Un  masque en bois bien triste." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "キータンのお面　　貸し出し自由\n"
COLOR(DEFAULT) "最近はやりの　キータングッズ" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Keaton Mask -- Free to Borrow\n"
COLOR(DEFAULT) "Keaton stuff is hot, hot, hot!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Fuchs-Maske -- Gebührenfrei!\n"
COLOR(DEFAULT) "Der letzte Schrei! Sehr angesagt!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque du Renard -- Gratuit\n"
COLOR(DEFAULT) "Le Renard est à la mode!" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ウサギずきん　　貸し出し自由\n"
COLOR(DEFAULT) "プラプラゆれる　ウサギのお耳" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bunny Hood -- Free to Borrow\n"
COLOR(DEFAULT) "With swinging rabbit ears!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Hasenohren -- Gebührenfrei!\n"
COLOR(DEFAULT) "Wippende Hasenohren! Supersüß!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque du Lapin -- Gratuit\n"
COLOR(DEFAULT) "Ses oreilles sont à croquer!" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ゴロンのお面　　貸し出し自由\n"
COLOR(DEFAULT) "まんまる顔で　ちょっとしあわせ" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Goron Mask -- Free to Borrow\n"
COLOR(DEFAULT) "This round face makes you \n"
"a little happier!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Goronen-Maske -- Gebührenfrei! \n"
COLOR(DEFAULT) "Trägst Du diese Maske,\n"
"lächelst Du immerzu!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque de Goron -- Gratuit\n"
COLOR(DEFAULT) "Une grosse tête, c'est rigolo!" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70B9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ゾーラのお面　　貸し出し自由\n"
COLOR(DEFAULT) "クールなまなざし　水泳にいかが" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Zora Mask -- Free to Borrow" COLOR(DEFAULT) "\n"
"You'll look cool while you're\n"
"swimming if you wear this mask!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Zora-Maske -- Gebührenfrei!" COLOR(DEFAULT) "\n"
"Sieht besonders cool beim\n"
"Schwimmen aus!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque de Zora -- Gratuit" COLOR(DEFAULT) "\n"
"A la mode pour une baignade!" QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70BA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ゲルドのお面　　貸し出し自由\n"
COLOR(DEFAULT) "おメメぱっちり　女装に最適" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Gerudo Mask -- Free to Borrow\n"
COLOR(DEFAULT) "With its charming eyes, it makes\n"
"a great lady's disguise." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Gerudo-Maske -- Gebührenfrei!\n"
COLOR(DEFAULT) "Mit ihren verführerischen Augen \n"
"macht sie aus Dir ein \n"
"zauberhaftes Mädchen!" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque de Gerudo -- Gratuit\n"
COLOR(DEFAULT) "Un parfait déguisement de femme." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70BB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "まことの仮面　　貸し出し自由\n"
COLOR(DEFAULT) "心を見通す　ふしぎな仮面" QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Mask of Truth -- Free to Borrow" COLOR(DEFAULT) "\n"
"Mysterious mask to see into other\n"
"people's minds." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Maske des Wissens -- Gebührenfrei!" COLOR(DEFAULT) "\n"
"Eine Maske aus dem Erbe der \n"
"Shiekah! Man erzählt sich, sie\n"
"besäße mysteriöse Kräfte." QUICKTEXT_DISABLE PERSISTENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Masque de Vérité -- Gratuit" COLOR(DEFAULT) "\n"
"Un mystérieux masque permettant \n"
"de lire dans l'esprit des hommes." QUICKTEXT_DISABLE PERSISTENT
)
)

DEFINE_MESSAGE(0x70BC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ドクロのお面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the " COLOR(RED) "Skull \n"
"Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Schädel-Maske \n"
COLOR(DEFAULT) "leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque de Mort" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70BD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "こわそなお面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Spooky Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Geister-Maske " COLOR(DEFAULT) "\n"
"leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque d'Effroi" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70BE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "キータンのお面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Keaton Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Fuchs-Maske " COLOR(DEFAULT) "\n"
"leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux- tu le " COLOR(RED) "Masque du Renard" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70BF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ウサギずきん" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Bunny Hood" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Hasenohren" COLOR(DEFAULT) " \n"
"leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque du Lapin" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70C0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ゴロンのお面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Goron Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Goronen-Maske" COLOR(DEFAULT) " \n"
"leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque de Goron" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70C1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ゾーラのお面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Zora Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Zora-Maske" COLOR(DEFAULT) "\n"
"leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque de Zora" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70C2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "ゲルドのお面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Gerudo Mask" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Gerudo-Maske" COLOR(DEFAULT) "\n"
"leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque de Gerudo" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70C3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "まことの仮面" COLOR(DEFAULT) "　借りる？" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Do you want to borrow the \n"
COLOR(RED) "Mask of Truth" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Möchtest Du die " COLOR(RED) "Maske des\n"
"Wissens" COLOR(DEFAULT) " leihen?" QUICKTEXT_DISABLE "\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE "Veux-tu le " COLOR(RED) "Masque de Vérité" COLOR(DEFAULT) "?" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70C4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "おお、売れましたか。\n"
SHIFT(18) "ドクロのお面代　" COLOR(RED) "２０ルピー" COLOR(DEFAULT) "、\n"
SHIFT(18) "さっそく　納金お願いします。" EVENT
)
,
MSG(
"Oh, great! You sold it!\n"
"Please pay me back " COLOR(RED) "20 Rupees \n"
COLOR(DEFAULT) "for the Skull Mask now." EVENT
)
,
MSG(
"Oh, großartig! Du hast sie\n"
"verkauft! Bitte zahle mir \n"
"für die Schädel-Maske die\n"
COLOR(RED) "20 Rubine" COLOR(DEFAULT) "." EVENT
)
,
MSG(
"Bravo! Tu as vendu ton masque!\n"
"Donne-moi " COLOR(RED) "20 Rubis " COLOR(DEFAULT) "pour le\n"
"Masque de Mort." EVENT
)
)

DEFINE_MESSAGE(0x70C5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "おお、売れましたか。\n"
SHIFT(18) "こわそなお面代　" COLOR(RED) "３０ルピー" COLOR(DEFAULT) "、\n"
SHIFT(18) "さっそく　納金お願いします。" EVENT
)
,
MSG(
"Oh, great! You sold it!\n"
"Please pay me back " COLOR(RED) "30 Rupees \n"
COLOR(DEFAULT) "for the Spooky Mask now." EVENT
)
,
MSG(
"Oh, großartig! Du hast sie\n"
"verkauft! Bitte zahle mir\n"
"für die Geister-Maske die\n"
COLOR(RED) "30 Rubine" COLOR(DEFAULT) "." EVENT
)
,
MSG(
"Bravo! Tu as vendu ton masque!\n"
"Donne-moi " COLOR(RED) "30 Rubis " COLOR(DEFAULT) "pour le \n"
"Masque d'Effroi." EVENT
)
)

DEFINE_MESSAGE(0x70C6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(42) "おお、売れましたか。\n"
SHIFT(18) "ウサギずきん代　" COLOR(RED) "５０ルピー" COLOR(DEFAULT) "、\n"
SHIFT(18) "さっそく　納金お願いします。" EVENT
)
,
MSG(
"Oh, great! You sold it!\n"
"Please pay me back " COLOR(RED) "50 Rupees \n"
COLOR(DEFAULT) "for the Bunny Hood now." EVENT
)
,
MSG(
"Oh, großartig! Du hast sie\n"
"verkauft! Bitte zahle mir\n"
"für die Hasenohren die\n"
COLOR(RED) "50 Rubine" COLOR(DEFAULT) "." EVENT
)
,
MSG(
"Bravo! Tu as vendu ton masque!\n"
"Donne-moi " COLOR(RED) "50 Rubis " COLOR(DEFAULT) "pour le \n"
"Masque du Lapin." EVENT
)
)

DEFINE_MESSAGE(0x70C7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) "おお、まだ　売れてないのですか？\n"
SHIFT(39) "信じなさい…　もっと…"
BOX_BREAK

"それとも、お面を　変えますか？\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "はい\n"
    "いいえ" COLOR(DEFAULT)
)
,
MSG(
"Oh! You haven't sold the mask\n"
"yet. Just have faith for a \n"
"little while longer."
BOX_BREAK

"Or, do you want to trade it\n"
"for another mask?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
)
,
MSG(
"Oh! Du hast die Maske noch\n"
"nicht verkauft? Dann biete sie\n"
"einfach weiterhin an."
BOX_BREAK

"Oder möchtest Du sie gegen eine\n"
"andere Maske tauschen?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Ja!\n"
    "Nein!" COLOR(DEFAULT)
)
,
MSG(
"Oh! Tu n'as pas encore vendu le\n"
"masque. Continue et garde espoir."
BOX_BREAK

"Tu veux peut-être essayer avec\n"
"un autre masque?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Oui\n"
    "Non" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70C8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "共鳴している…\n"
SHIFT(33) "トライフォースが、再び\n"
SHIFT(21) "一つに　戻ろうとしている…"
)
,
MSG(
UNSKIPPABLE "The Triforce parts are resonating...\n"
"They are combining into one again..."
)
,
MSG(
UNSKIPPABLE "Die Fragmente des Triforce...\n"
"Ich spüre... Ihre Macht scheint\n"
"sich wieder zu vereinigen... "
)
,
MSG(
UNSKIPPABLE "Les fragments de la Triforce \n"
"se réveillent...\n"
"Ils fusionnent une fois de plus..."
)
)

DEFINE_MESSAGE(0x70C9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "七年前の　あの日…\n"
SHIFT(33) "我が手に　できなかった\n"
SHIFT(27) "２つの　トライフォース…"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "まさか　キサマたち　ふたりに\n"
SHIFT(36) "宿っていようとはな…"
)
,
MSG(
UNSKIPPABLE "The two Triforce parts that I \n"
"could not capture on that day\n"
"seven years ago..."
BOX_BREAK

UNSKIPPABLE "I didn't expect they would be \n"
"hidden within you two!"
)
,
MSG(
UNSKIPPABLE "Die fehlenden zwei Fragmente!\n"
"Ich warte seit\n"
"sieben Jahren darauf!"
BOX_BREAK

UNSKIPPABLE "Ich bin wirklich überrascht! Ich\n"
"hätte nicht erwartet, daß gerade\n"
"ihr zwei sie tragen würdet!"
)
,
MSG(
UNSKIPPABLE "Il y a sept ans...\n"
"Deux fragments ont échappé à \n"
"mon contrôle..."
BOX_BREAK

UNSKIPPABLE "Comment ont-ils pu arriver entre\n"
"vos mains?"
)
)

DEFINE_MESSAGE(0x70CA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(45) "そして今、ついに…\n"
SHIFT(27) "全ての　トライフォースが\n"
SHIFT(48) "ここに　そろった！"
)
,
MSG(
UNSKIPPABLE "And now, finally, all the Triforce\n"
"parts have gathered here!"
)
,
MSG(
UNSKIPPABLE "Endlich! Endlich! Die drei\n"
"Fragmente sind wieder\n"
"vereint!"
)
,
MSG(
UNSKIPPABLE "Quoi qu'il en soit, les fragments \n"
"vont enfin s'unir en ce lieu!"
)
)

DEFINE_MESSAGE(0x70CB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(3) "キサマらには　過ぎたオモチャだ…"
)
,
MSG(
UNSKIPPABLE "These toys are too much for you!"
)
,
MSG(
UNSKIPPABLE "Diese Symbole der Macht sind\n"
"nichts für euch zwei! Ihr seid\n"
"dafür nicht geschaffen!"
)
,
MSG(
UNSKIPPABLE "Pauvres insectes....\n"
"Cette puissance n'est pas \n"
"pour vous!"
)
)

DEFINE_MESSAGE(0x70CC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) "返してもらうぞ！！"
)
,
MSG(
UNSKIPPABLE "I command you to return them \n"
"to me!"
)
,
MSG(
UNSKIPPABLE "Ich allein bin der rechtmäßige\n"
"Träger des Triforce! Übergebt mir\n"
"die Fragmente!\n"
"Ich befehle es!"
)
,
MSG(
UNSKIPPABLE "Je vous ordonne de me les rendre!"
)
)

DEFINE_MESSAGE(0x70CD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) SHIFT(9) COLOR(LIGHTBLUE) NAME "！　\n"
COLOR(DEFAULT) SHIFT(9) COLOR(LIGHTBLUE) "ダメだヨ…\n"
COLOR(DEFAULT) SHIFT(9) COLOR(LIGHTBLUE) "闇の波動で　ナビィ、近づけない！" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE SHIFT(15) COLOR(LIGHTBLUE) "ゴメンね、" NAME "…" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) NAME "!\n"
"I can't help you!\n"
"Because of the waves of\n"
"darkness, I can't get close!"
BOX_BREAK

COLOR(DEFAULT) UNSKIPPABLE COLOR(LIGHTBLUE) "I'm sorry, " NAME "!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) NAME "!\n"
"Ich kann Dir nicht helfen!\n"
"Die Aura des Bösen ist\n"
"zu mächtig!"
BOX_BREAK

COLOR(LIGHTBLUE) UNSKIPPABLE "Tut mir leid, " NAME "!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) NAME "!\n"
"Je ne peux pas t'aider!\n"
"L'énergie noire m'empêche \n"
"d'approcher!"
BOX_BREAK

COLOR(DEFAULT) UNSKIPPABLE COLOR(LIGHTBLUE) "Pardonne-moi, " NAME "!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70CE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(51) "この　オレ様が…　\n"
"魔王ガノンドロフが　敗れるの…か？\n"
SHIFT(51) "こんな　小僧に…"
)
,
MSG(
UNSKIPPABLE "The Great Evil King Ganondorf...\n"
"beaten by this kid?!"
)
,
MSG(
UNSKIPPABLE "Ich, der Großmeister des Bösen... \n"
"Geschlagen von einem Kind?!\n"
"Das... darf... nicht... sein..."
)
,
MSG(
UNSKIPPABLE "Quoi? Le Grand Ganondorf vaincu \n"
"par ce gamin?!"
)
)

DEFINE_MESSAGE(0x70CF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) TEXT_SPEED(2) NAME "…！"
)
,
MSG(
UNSKIPPABLE NAME "....!"
)
,
MSG(
UNSKIPPABLE NAME "...!"
)
,
MSG(
UNSKIPPABLE NAME "....!"
)
)

DEFINE_MESSAGE(0x70D0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "ガノンドロフ…"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "哀れな男…\n"
SHIFT(15) "強く正しい心を　持たぬゆえに\n"
SHIFT(27) "神の力を　制御できずに…"
)
,
MSG(
UNSKIPPABLE "Ganondorf...pitiful man..."
BOX_BREAK

UNSKIPPABLE "Without a strong, righteous mind,\n"
"he could not control the power of\n"
"the gods...and..."
)
,
MSG(
UNSKIPPABLE "Ganondorf... bemitleidenswerte\n"
"Kreatur..."
BOX_BREAK

UNSKIPPABLE "Da ihm der Sinn für\n"
"Gerechtigkeit fehlte, konnte er die\n"
"Macht der Götter nicht nutzen..."
)
,
MSG(
UNSKIPPABLE "Misérable Ganondorf......"
BOX_BREAK

UNSKIPPABLE "Sans un esprit sain et fort il ne\n"
"put maîtriser la puissance \n"
"des dieux...et..."
)
)

DEFINE_MESSAGE(0x70D1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(9) NAME "、聞いて！\n"
SHIFT(9) "この塔は　まもなく　崩壊します！"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "ガノンドロフは　最後の力で、\n"
"私たちを　道づれにするつもりです！\n"
SHIFT(36) "急いで　脱出しないと！"
)
,
MSG(
UNSKIPPABLE NAME ", listen to me!\n"
"This tower will collapse soon!"
BOX_BREAK

UNSKIPPABLE "With his last breath, Ganondorf is\n"
"trying to crush us in the ruins of\n"
"the tower! We need to hurry and\n"
"escape!"
)
,
MSG(
UNSKIPPABLE NAME ", hör zu!\n"
"Der Turm stürzt in sich zusammen!"
BOX_BREAK

UNSKIPPABLE "Das ist Ganondorfs letzte, böse\n"
"Tat! Die Trümmer sollen uns\n"
"zerschmettern! Schnell! Wir\n"
"müssen fliehen!"
)
,
MSG(
UNSKIPPABLE NAME ", Ecoute-moi!\n"
"La tour va s'effondrer!"
BOX_BREAK

UNSKIPPABLE "De son dernier souffle de haine, \n"
"Ganon tente de nous écraser sous \n"
"les ruines de cette tour!\n"
"Dépêchons-nous!"
)
)

DEFINE_MESSAGE(0x70D2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(63) "私の　あとに\n"
SHIFT(39) "ついてきてください！"
)
,
MSG(
UNSKIPPABLE "Please follow me!"
)
,
MSG(
UNSKIPPABLE "Schnell! Folge mir!"
)
,
MSG(
UNSKIPPABLE "Suis-moi vite!"
)
)

DEFINE_MESSAGE(0x70D3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "終わったのですね…\n"
SHIFT(66) "何もかも…"
)
,
MSG(
UNSKIPPABLE "It's over...it's finally over..."
)
,
MSG(
UNSKIPPABLE "Es ist vorüber... Alles..."
)
,
MSG(
UNSKIPPABLE "C'est terminé...enfin..."
)
)

DEFINE_MESSAGE(0x70D4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) COLOR(LIGHTBLUE) NAME "…\n"
COLOR(DEFAULT) SHIFT(39) COLOR(LIGHTBLUE) "さっきは　ゴメンね…\n"
COLOR(DEFAULT) SHIFT(27) COLOR(LIGHTBLUE) "いっしょに　戦えなくて…" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) NAME "... \n"
"I'm sorry I couldn't help you in the\n"
"battle before!" COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) NAME "... \n"
"Tut mir leid, daß ich Dir im Kampf\n"
"nicht helfen konnte." COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) NAME "... \n"
"Pardonne-moi...je n'ai pas pu t'aider." COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70D5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "何でしょう…\n"
SHIFT(69) "今の音…？"
)
,
MSG(
UNSKIPPABLE "What is that sound?"
)
,
MSG(
UNSKIPPABLE "Was ist das für ein Geräusch?"
)
,
MSG(
UNSKIPPABLE "Quel est ce bruit?"
)
)

DEFINE_MESSAGE(0x70D6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) SHIFT(30) COLOR(LIGHTBLUE) "ナビィ　もう　逃げない！！\n"
COLOR(DEFAULT) SHIFT(45) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "いっしょに　戦う！！" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) "There's no way he's going to hold\n"
"me back again!\n"
COLOR(DEFAULT) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "This time, we fight together!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) "Diesmal hat er keine Macht mehr\n"
"über mich!" COLOR(DEFAULT) "\n"
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Wir kämpfen gemeinsam!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_NA_HELLO_2) COLOR(LIGHTBLUE) "Cette fois-ci je ne fuirai pas!\n"
COLOR(DEFAULT) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Nous combattrons ensemble!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x70D7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) NAME "！\n"
SHIFT(24) "マスターソードは　ここに！\n"
SHIFT(24) QUICKTEXT_ENABLE "急いで！！" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE NAME "! The Master \n"
"Sword is here! \n"
QUICKTEXT_ENABLE "Hurry up!!" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE NAME "!\n"
"Das Master-Schwert!\n"
"Es ist hier! \n"
QUICKTEXT_ENABLE "Schnell!" QUICKTEXT_DISABLE
)
,
MSG(
UNSKIPPABLE NAME "! \n"
"L'Epée de Légende est ici! \n"
QUICKTEXT_ENABLE "Vite!!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x70D8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(18) "私の力で　魔王を押さえます。\n"
SHIFT(39) "あとは　あなたの剣で\n"
SHIFT(48) "魔王に　とどめを！"
)
,
MSG(
UNSKIPPABLE "I'm using my power to hold the\n"
"Evil King! You use your sword and\n"
"deliver the final blow!"
)
,
MSG(
UNSKIPPABLE "Ich versuche, Ganon mit meiner\n"
"Kraft zu bannen!\n"
"Nimm Du das Schwert und\n"
"versetze ihm den Todesstoß!"
)
,
MSG(
UNSKIPPABLE "Mes pouvoirs paralysent Ganon!\n"
"Utilise l'Epée et porte-lui le coup\n"
"de grâce!"
)
)

DEFINE_MESSAGE(0x70D9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(54) "六賢者たちよ…\n"
SHIFT(72) QUICKTEXT_ENABLE "今です！！" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
UNSKIPPABLE SHIFT(65) "Six Sages...\n"
QUICKTEXT_ENABLE SHIFT(80) "Now!!" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
UNSKIPPABLE SHIFT(40) "Oh, ihr Sechs Weisen...\n"
QUICKTEXT_ENABLE SHIFT(63) "Es ist soweit!\n"
SHIFT(50) "Sendet Eure Kraft!" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
UNSKIPPABLE SHIFT(65) "Six Sages...\n"
QUICKTEXT_ENABLE SHIFT(61) "Maintenant!!" QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x70DA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(69) TEXT_SPEED(3) "おのれ・・・" TEXT_SPEED(0) FADE(30)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(3) "YOU..." TEXT_SPEED(0) FADE(30)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(3) "DUUUU... widerlicher..." TEXT_SPEED(0) FADE(30)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(3) "TOI..." TEXT_SPEED(0) FADE(30)
)
)

DEFINE_MESSAGE(0x70DB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) TEXT_SPEED(3) "おのれ・・・ゼルダ！\n"
SHIFT(48) TEXT_SPEED(2) "おのれ・・・賢者共！" TEXT_SPEED(0) FADE(50)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(3) "CURSE YOU...ZELDA!\n"
TEXT_SPEED(2) "CURSE YOU...SAGES!!" TEXT_SPEED(0) FADE(50)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(3) "ICH VERFLUCHE DICH... ZELDA!\n"
TEXT_SPEED(2) "ICH VERFLUCHE EUCH... IHR WEISEN!" TEXT_SPEED(0) FADE(50)
)
,
MSG(
UNSKIPPABLE TEXT_SPEED(3) "SOIS MAUDITE...ZELDA!\n"
TEXT_SPEED(2) "PESTE SOIT DES...SAGES!!" TEXT_SPEED(0) FADE(50)
)
)

DEFINE_MESSAGE(0x70DC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "おのれ…　" QUICKTEXT_ENABLE NAME "！" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
UNSKIPPABLE "CURSE YOU..." QUICKTEXT_ENABLE NAME "!" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
UNSKIPPABLE "ICH...\n"
"VERFLUCHE...\n"
"DICH... " QUICKTEXT_ENABLE NAME "!" QUICKTEXT_DISABLE FADE(30)
)
,
MSG(
UNSKIPPABLE "JE TE MAUDIS..." QUICKTEXT_ENABLE NAME "!" QUICKTEXT_DISABLE FADE(30)
)
)

DEFINE_MESSAGE(0x70DD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(60) "いつの日か…\n"
SHIFT(15) "この封印が　解き放たれし時…"
BOX_BREAK_DELAYED(80)

UNSKIPPABLE SHIFT(15) "その時こそ　キサマたちの一族\n"
SHIFT(27) "根絶やしに　してくれる！！" FADE(80)
)
,
MSG(
UNSKIPPABLE "Someday...\n"
"When this seal is broken...."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE "That is when I will exterminate\n"
"your descendants!!" FADE(80)
)
,
MSG(
UNSKIPPABLE "Arrgh! Eines Tages werde ich\n"
"dieses Siegel brechen..."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE "Dann werde ich eure\n"
"Nachfahren auslöschen!" FADE(80)
)
,
MSG(
UNSKIPPABLE "Un jour...\n"
"Ce sceau se brisera et...."
BOX_BREAK_DELAYED(80)

UNSKIPPABLE "Je tuerai de mes mains tes \n"
"descendants!!" FADE(80)
)
)

DEFINE_MESSAGE(0x70DE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(57) "我が　手の内に\n"
SHIFT(9) "力のトライフォース　ある限り…" FADE(80)
)
,
MSG(
UNSKIPPABLE "As long as the Triforce of Power\n"
"is in my hand...." FADE(80)
)
,
MSG(
UNSKIPPABLE "Solange das Fragment der Kraft\n"
"in meiner Hand ist..." FADE(80)
)
,
MSG(
UNSKIPPABLE "N'oublie pas...\n"
"Le fragment de la Force est \n"
"toujours en ma possession!...." FADE(80)
)
)

DEFINE_MESSAGE(0x70DF, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) TEXT_SPEED(2) "アナタ・・・　" TEXT_SPEED(0) "だれ？" FADE(80)
)
,
MSG(
TEXT_SPEED(2) "You..." TEXT_SPEED(0) "who are you?" FADE(80)
)
,
MSG(
TEXT_SPEED(2) "Du... " TEXT_SPEED(0) "wer bist Du?" FADE(80)
)
,
MSG(
TEXT_SPEED(2) "Toi..." TEXT_SPEED(0) "Qui es-tu?" FADE(80)
)
)

DEFINE_MESSAGE(0x70E0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) COLOR(ADJUSTABLE) "森の結界" COLOR(DEFAULT) "は　解除されたワ！\n"
SHIFT(24) "急いで　" NAME "！！" FADE(40)
)
,
MSG(
SHIFT(10) "The " COLOR(ADJUSTABLE) "Forest Barrier " COLOR(DEFAULT) "is dispelled!\n"
SHIFT(20) "Hurry up, " NAME "!" FADE(40)
)
,
MSG(
SHIFT(17) "Das " COLOR(ADJUSTABLE) "Wald-Siegel " COLOR(DEFAULT) "ist gebrochen!\n"
SHIFT(26) "Beeil Dich, " NAME "!" FADE(40)
)
,
MSG(
SHIFT(21) "La " COLOR(ADJUSTABLE) "Barrière de la Forêt " COLOR(DEFAULT) "est\n"
SHIFT(72) "dissipée!\n"
SHIFT(35) "Vite, " NAME "!" FADE(40)
)
)

DEFINE_MESSAGE(0x70E1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) COLOR(RED) "炎の結界" COLOR(DEFAULT) "は　解除された！\n"
SHIFT(45) "急げ　キョーダイ！！" FADE(40)
)
,
MSG(
SHIFT(15) "The " COLOR(RED) "Fire Barrier" COLOR(DEFAULT) " is dispelled!\n"
SHIFT(20) "Hurry up, Brother!" FADE(40)
)
,
MSG(
SHIFT(15) "Das " COLOR(RED) "Feuer-Siegel " COLOR(DEFAULT) "ist gebrochen!\n"
SHIFT(51) "Beeil Dich, Bruder!" FADE(40)
)
,
MSG(
SHIFT(33) "La " COLOR(RED) "Barrière du Feu " COLOR(DEFAULT) "est\n"
SHIFT(72) "dissipée!\n"
SHIFT(63) "Vite, Frère!" FADE(40)
)
)

DEFINE_MESSAGE(0x70E2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) COLOR(BLUE) "水の結界" COLOR(DEFAULT) "は　解除された！\n"
SHIFT(60) "急ぐのじゃ！！" FADE(40)
)
,
MSG(
SHIFT(15) "The " COLOR(BLUE) "Water Barrier " COLOR(DEFAULT) "is dispelled!\n"
SHIFT(70) "Hurry up!" FADE(40)
)
,
MSG(
SHIFT(10) "Das " COLOR(BLUE) "Wasser-Siegel " COLOR(DEFAULT) "ist gebrochen!\n"
SHIFT(46) "Beeil Dich, Liebster!" FADE(40)
)
,
MSG(
SHIFT(31) "La " COLOR(BLUE) "Barrière de l'Eau " COLOR(DEFAULT) "est\n"
SHIFT(72) "dissipée!\n"
SHIFT(62) "Depèche-toi!" FADE(40)
)
)

DEFINE_MESSAGE(0x70E3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) COLOR(PURPLE) "闇の結界" COLOR(DEFAULT) "は　解除された！\n"
SHIFT(39) "ゼルダ様を　たのむ！！" FADE(40)
)
,
MSG(
SHIFT(15) "The " COLOR(PURPLE) "Shadow Barrier " COLOR(DEFAULT) "is dispelled!\n"
SHIFT(30) "Please save the Princess!" FADE(40)
)
,
MSG(
SHIFT(6) "Das " COLOR(PURPLE) "Schatten-Siegel " COLOR(DEFAULT) "ist gebrochen!\n"
SHIFT(28) "Bitte rette die Prinzessin!" FADE(40)
)
,
MSG(
SHIFT(23) "La " COLOR(PURPLE) "Barrière de l'Ombre " COLOR(DEFAULT) "est\n"
SHIFT(72) "dissipée!\n"
SHIFT(24) "Va et sauve la Princesse!" FADE(40)
)
)

DEFINE_MESSAGE(0x70E4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(24) COLOR(YELLOW) "魂の結界" COLOR(DEFAULT) "は　解除されたヨ！\n"
SHIFT(51) "急ぎナ　ボーヤ！！" FADE(40)
)
,
MSG(
SHIFT(15) "The " COLOR(YELLOW) "Spirit Barrier " COLOR(DEFAULT) "is dispelled!\n"
SHIFT(55) "Hurry up, kid!" FADE(40)
)
,
MSG(
SHIFT(10) "Das " COLOR(YELLOW) "Geister-Siegel" COLOR(DEFAULT) " ist gebrochen!\n"
SHIFT(54) "Streng Dich an, Kleiner!" FADE(40)
)
,
MSG(
SHIFT(24) "La " COLOR(YELLOW) "Barrière de l'Esprit " COLOR(DEFAULT) "est\n"
SHIFT(72) "dissipée!\n"
SHIFT(64) "Vite, gamin!" FADE(40)
)
)

DEFINE_MESSAGE(0x70E5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(30) COLOR(LIGHTBLUE) "光の結界" COLOR(DEFAULT) "は　解除された！\n"
SHIFT(60) "急ぐのじゃ！！" FADE(40)
)
,
MSG(
SHIFT(15) "The " COLOR(LIGHTBLUE) "Light Barrier " COLOR(DEFAULT) "is dispelled!\n"
SHIFT(75) "Hurry!" FADE(40)
)
,
MSG(
SHIFT(17) "Das " COLOR(LIGHTBLUE) "Licht-Siegel" COLOR(DEFAULT) " ist gebrochen!\n"
SHIFT(65) "Schnell jetzt!" FADE(40)
)
,
MSG(
SHIFT(15) "La " COLOR(LIGHTBLUE) "Barrière de la Lumière" COLOR(DEFAULT) " est\n"
SHIFT(72) "dissipée!\n"
SHIFT(82) "Vite!" FADE(40)
)
)

DEFINE_MESSAGE(0x70E6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(15) COLOR(LIGHTBLUE) NAME "、あれは…？！" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) NAME ", isn't that...?!" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) NAME ", ist das nicht...?!"
)
,
MSG(
COLOR(LIGHTBLUE) NAME ", mais c'est...?!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x70E7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) COLOR(LIGHTBLUE) "これは、伝説の剣…" COLOR(DEFAULT) FADE(30)
)
,
MSG(
COLOR(LIGHTBLUE) "It's that legendary blade..." COLOR(DEFAULT) FADE(30)
)
,
MSG(
COLOR(LIGHTBLUE) "Diese legendäre Klinge..." COLOR(DEFAULT) FADE(30)
)
,
MSG(
COLOR(LIGHTBLUE) "C'est la Lame purificatrice..." COLOR(DEFAULT) FADE(30)
)
)

DEFINE_MESSAGE(0x70E8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(48) QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "マスターソード！！" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(41) COLOR(LIGHTBLUE) "The Master Sword!!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(45) COLOR(LIGHTBLUE) "Das Master-Schwert!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(41) COLOR(LIGHTBLUE) "L'Epée de Légende!!" COLOR(DEFAULT) QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x70E9, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
UNSKIPPABLE SHIFT(42) "六人の賢者に　会い、\n"
SHIFT(30) "ハイラルを　救うのじゃ。" FADE(80)
)
,
MSG(
UNSKIPPABLE "Find the other Sages" COLOR(RED) "\n"
COLOR(DEFAULT) "and save Hyrule!" FADE(80)
)
,
MSG(
UNSKIPPABLE "Finde die anderen\n"
"Weisen und rette Hyrule!" FADE(80)
)
,
MSG(
UNSKIPPABLE "Trouve les Sages et sauve Hyrule!" FADE(80)
)
)

DEFINE_MESSAGE(0x70EA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "こわいカオした　オジチャンが\n"
SHIFT(39) "すっごい　いきおいで\n"
SHIFT(24) "お城の外へ　走ってったよ。"
)
,
MSG(
"That scary-looking man took\n"
"off out of here really fast!"
)
,
MSG(
"Dieser schreckliche Typ ist wie\n"
"wild davongaloppiert!"
)
,
MSG(
"Cet homme effrayant a semé une\n"
"sacrée pagaille ici!"
)
)

DEFINE_MESSAGE(0x70EB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "あ、オソロシ…　あ、オソロシ…"
)
,
MSG(
"Oh so scary...\n"
"Oh so scary..."
)
,
MSG(
"Oh, wie furchtbar...\n"
"Oh, wie schrecklich..."
)
,
MSG(
"Oh! J'ai si peur...\n"
"Je suis terrifié..."
)
)

DEFINE_MESSAGE(0x70EC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "なによ？\n"
SHIFT(18) "今、それどころじゃないのよ！"
)
,
MSG(
"Hey, what do you want?\n"
"I don't have time to talk\n"
"to you!"
)
,
MSG(
"Hey, was willst Du?\n"
"Ich habe keine Zeit, mit\n"
"Dir zu tratschen!"
)
,
MSG(
"Hé! Que veux-tu?\n"
"Je n'ai pas le temps de parler!"
)
)

DEFINE_MESSAGE(0x70ED, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) COLOR(YELLOW) "[C]" COLOR(DEFAULT) "で　おねがいします！\n"
SHIFT(24) "なにかを　売ってください！\n"
SHIFT(36) COLOR(YELLOW) "[C]" COLOR(DEFAULT) "で　おねがいします！"
)
,
MSG(
"Please...with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Please sell me something...\n"
"Please...with " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)
,
MSG(
"Bitte... Verkaufe mir etwas mit " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Bitte verkaufe mir etwas...\n"
"Bitte... In einer Flasche..."
)
,
MSG(
"Pitié avec " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "...\n"
"Pitié vends-moi un truc...\n"
"Pitié avec " COLOR(YELLOW) "[C]" COLOR(DEFAULT) "..."
)
)

DEFINE_MESSAGE(0x70EE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "ちがうんです！\n"
SHIFT(12) COLOR(RED) "ビンのなかみ" COLOR(DEFAULT) "が　ほしいんです！\n"
SHIFT(39) "そうじゃないんです！"
)
,
MSG(
"No...\n"
"That's not what I want...\n"
"I want " COLOR(RED) "something inside a bottle" COLOR(DEFAULT) "...\n"
"I didn't mean that thing..."
)
,
MSG(
"Nein...\n"
"Das ist nicht das, was ich will...\n"
"Ich möchte " COLOR(RED) "etwas in einer Flasche" COLOR(DEFAULT) "...\n"
"Nicht so etwas..."
)
,
MSG(
"Non...\n"
"C'est pas ça que je veux...\n"
"Je veux un truc " COLOR(RED) "dans une bouteille" COLOR(DEFAULT) ".\n"
"Pas ce drôle de truc..."
)
)

DEFINE_MESSAGE(0x70EF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "ダメなんです！\n"
SHIFT(18) "それだけは　買えないんです！\n"
SHIFT(36) "それは　まずいんです！"
)
,
MSG(
"No...\n"
"I can't take that...\n"
"That's not what I want to buy..."
)
,
MSG(
"Nein...\n"
"Das kann ich nicht nehmen...\n"
"Es ist nicht das, was ich\n"
"haben will..."
)
,
MSG(
"Non...\n"
"Je peux pas prendre ça...\n"
"J'veux pas acheter ça..."
)
)

DEFINE_MESSAGE(0x70F0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "あ〜　" COLOR(LIGHTBLUE) "青い炎" COLOR(BLUE) "　" COLOR(DEFAULT) "だ〜っ！\n"
SHIFT(27) COLOR(RED) "１５０ルピー" COLOR(DEFAULT) "で　買います！\n"
SHIFT(21) "もう　かえしませんよ〜っ！！"
)
,
MSG(
"Oh, that's " COLOR(LIGHTBLUE) "Blue Fire" COLOR(DEFAULT) "!\n"
"I'll buy it for " COLOR(RED) "150 Rupees" COLOR(DEFAULT) "!\n"
"All sales final, OK?"
)
,
MSG(
"Oh," COLOR(BLUE) " " COLOR(LIGHTBLUE) "Blaues Feuer" COLOR(DEFAULT) "!\n"
"Ich kaufe es für " COLOR(RED) "150 Rubine" COLOR(DEFAULT) "!\n"
"Und nicht feilschen, okay?"
)
,
MSG(
"Oh! C'est une " COLOR(LIGHTBLUE) "Flamme Bleue" COLOR(DEFAULT) "!\n"
"Je t'en donne " COLOR(RED) "150 Rubis" COLOR(DEFAULT) "!\n"
"Vends-la moi! Vends-la moi!"
)
)

DEFINE_MESSAGE(0x70F1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "あ〜　" COLOR(PURPLE) "サカナ" COLOR(BLUE) "　" COLOR(DEFAULT) "だ〜っ！\n"
SHIFT(27) COLOR(RED) "１００ルピー" COLOR(DEFAULT) "で　買います！\n"
SHIFT(21) "もう　かえしませんよ〜っ！！"
)
,
MSG(
"Oh, a " COLOR(PURPLE) "Fish" COLOR(DEFAULT) "!\n"
"I'll buy it for " COLOR(RED) "100 Rupees" COLOR(DEFAULT) "!\n"
"All sales final, OK?"
)
,
MSG(
"Oh, ein " COLOR(PURPLE) "Fisch" COLOR(DEFAULT) "!\n"
"Ich kaufe ihn für " COLOR(RED) "100 Rubine" COLOR(DEFAULT) "!\n"
"Und nicht feilschen, okay?"
)
,
MSG(
"Oh! Un p'tit " COLOR(PURPLE) "poisson" COLOR(DEFAULT) "!\n"
"Je t'en donne " COLOR(RED) "100 Rubis" COLOR(DEFAULT) "!\n"
"Dis-moi oui...chéri."
)
)

DEFINE_MESSAGE(0x70F2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "あ〜　" COLOR(ADJUSTABLE) "むいむい" COLOR(BLUE) "　" COLOR(DEFAULT) "だ〜っ！\n"
SHIFT(30) COLOR(RED) "５０ルピー" COLOR(DEFAULT) "で　買います！\n"
SHIFT(21) "もう　かえしませんよ〜っ！！"
)
,
MSG(
"Oh, it's a cute little " COLOR(ADJUSTABLE) "Bug" COLOR(DEFAULT) "!\n"
"I'll buy it for " COLOR(RED) "50 Rupees" COLOR(DEFAULT) "!\n"
"All sales final, OK?"
)
,
MSG(
"Oh, ein niedlicher " COLOR(ADJUSTABLE) "Käfer" COLOR(DEFAULT) "!\n"
"Ich kaufe ihn für " COLOR(RED) "50 Rubine" COLOR(DEFAULT) "!\n"
"Und nicht feilschen, okay?"
)
,
MSG(
"Mais...c'est un superbe..." COLOR(ADJUSTABLE) "insecte" COLOR(DEFAULT) "!\n"
"Je t'en donne " COLOR(RED) "50 Rubis" COLOR(DEFAULT) "!\n"
"Donne! Donne!"
)
)

DEFINE_MESSAGE(0x70F3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "あ〜　" COLOR(LIGHTBLUE) "妖精さん" COLOR(BLUE) "　" COLOR(DEFAULT) "だ〜っ！\n"
SHIFT(30) COLOR(RED) "２５ルピー" COLOR(DEFAULT) "で　買います！\n"
SHIFT(21) "もう　かえしませんよ〜っ！！"
)
,
MSG(
"Oh, a darling little " COLOR(LIGHTBLUE) "Fairy" COLOR(DEFAULT) "!\n"
"I'll buy it for " COLOR(RED) "25 Rupees" COLOR(DEFAULT) "!\n"
"All sales final, OK?"
)
,
MSG(
"Oh, eine hübsche, kleine " COLOR(LIGHTBLUE) "Fee" COLOR(DEFAULT) "!\n"
"Ich kaufe sie für " COLOR(RED) "25 Rubine" COLOR(DEFAULT) "!\n"
"Und nicht feilschen, okay?"
)
,
MSG(
"Quelle jolie " COLOR(LIGHTBLUE) "fée" COLOR(DEFAULT) "!\n"
"Je t'en offre " COLOR(RED) "25 Rubis" COLOR(DEFAULT) ", OK?"
)
)

DEFINE_MESSAGE(0x70F4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(78) "オオ…\n"
SHIFT(3) "なかなか　威勢のいい　ニイさんだ。\n"
"勇ましくて　おまけに　イイオトコ…"
BOX_BREAK

UNSKIPPABLE SHIFT(3) "ヘヘヘ…\n"
SHIFT(3) NAME "って言うんだろ？"
BOX_BREAK

UNSKIPPABLE SHIFT(18) "ヘッヘッ…　おどろくなって。\n"
SHIFT(3) "オイラは　人の心が　読めるんでね。"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "オイラも　ニイさんみたいに\n"
"カッコよかったら、ちっとは　ちがう\n"
SHIFT(6) "商売できたのにね…　ヒッヒッヒ。"
BOX_BREAK

UNSKIPPABLE SHIFT(15) "オイラの店は　ハイラル唯一の\n"
SHIFT(39) COLOR(RED) "ゴーストショップ" COLOR(DEFAULT) "だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) "こんな　ビジネスが　できる\n"
SHIFT(30) "いい時代に　なったのも、\n"
"ガノンドロフ様のおかげ…　ヒヒッ！"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "あ〜　もっと\n"
SHIFT(6) "悪くならねえかな〜、この世の中。"
BOX_BREAK

UNSKIPPABLE SHIFT(12) COLOR(RED) "ポウ" COLOR(DEFAULT) "は、墓場や　草原に出没する\n"
SHIFT(6) "この世を　ウラんで　ウラみ抜いた\n"
SHIFT(18) "そんな奴らの　魂のかたまり。"
BOX_BREAK

UNSKIPPABLE SHIFT(66) "ニイさんも\n"
SHIFT(27) "ポウを　つかまえてきたら\n"
"高く　買ってやるよ。　イーッヒッヒ！"
)
,
MSG(
UNSKIPPABLE "Oh...you are quite an energetic\n"
"young man. You're brave and\n"
"handsome, too."
BOX_BREAK

UNSKIPPABLE "Heh heh heh...your name is\n"
NAME ", isn't it."
BOX_BREAK

UNSKIPPABLE "Heh heh he...don't be surprised.\n"
"I can read people's minds."
BOX_BREAK

UNSKIPPABLE "If I looked as good as you, I\n"
"could run a different kind of \n"
"business...heh he heh..."
BOX_BREAK

UNSKIPPABLE "My shop is the only " COLOR(RED) "Ghost Shop" COLOR(DEFAULT) "\n"
"in Hyrule."
BOX_BREAK

UNSKIPPABLE "Because of the great Ganondorf, \n"
"it is a fine time for a business \n"
"like this...heh heh heh..."
BOX_BREAK

UNSKIPPABLE "Oh...I can only hope the world \n"
"gets even worse!"
BOX_BREAK

UNSKIPPABLE "The ghosts, called " COLOR(RED) "Poes" COLOR(DEFAULT) ", are \n"
"spirits of concentrated hatred \n"
"that appear in the fields and \n"
"graveyard. They hate the world!"
BOX_BREAK

UNSKIPPABLE "Young man, if you catch a Poe, I\n"
"will pay a lot of money for it...\n"
"Heh heh hee!"
)
,
MSG(
UNSKIPPABLE "Oh... Du bist ja ein agiler,\n"
"junger Mann. Und Du bist auch\n"
"ganz ansehnlich. Und mutig!"
BOX_BREAK

UNSKIPPABLE "Hehehe... Du heißt\n"
NAME ", nicht wahr?"
BOX_BREAK

UNSKIPPABLE "Hehehe... Schau nicht so.\n"
"Ich kann Gedanken lesen."
BOX_BREAK

UNSKIPPABLE "Wenn ich so gut aussähe wie Du,\n"
"dann könnte ich mein Geld auf\n"
"andere Weise verdienen...\n"
"Hehehe..."
BOX_BREAK

UNSKIPPABLE "Aber immerhin betreibe ich den\n"
"einzigen " COLOR(RED) "Gespenstermarkt" COLOR(DEFAULT) " von\n"
"Hyrule!"
BOX_BREAK

UNSKIPPABLE "Dank Ganondorf - gepriesen sei\n"
"sein Name - gehen die Geschäfte \n"
"zur Zeit blendend... Hehehe..."
BOX_BREAK

UNSKIPPABLE "Ich kann nur hoffen, daß das\n"
"auch so bleibt!"
BOX_BREAK

UNSKIPPABLE "Die Geister nennt man \n"
COLOR(RED) "Irrlichter " COLOR(DEFAULT) "oder" COLOR(RED) " Nachtschwärmer" COLOR(DEFAULT) "...\n"
"Sie tragen allen Haß der Welt...\n"
"Und sie hassen alle Welt..."
BOX_BREAK

UNSKIPPABLE "Wenn Du einen Geist fängst, dann\n"
"werde ich Dich reich belohnen,\n"
"mein Junge! Hehehe..."
)
,
MSG(
UNSKIPPABLE "Quel garçon plein d'entrain et \n"
"de vie...j'adore ça..."
BOX_BREAK

UNSKIPPABLE "Hé hé hé...ton nom est bien\n"
NAME "?"
BOX_BREAK

UNSKIPPABLE "Hé hé hé...ne sois pas surpris!\n"
"Je lis dans les esprits comme \n"
"dans un livre ouvert."
BOX_BREAK

UNSKIPPABLE "Si j'avais autant d'énergie que toi, \n"
"je pourrais changer de métier!\n"
"Hé hé hé..."
BOX_BREAK

UNSKIPPABLE "Je suis l'unique " COLOR(RED) "marchand d'âmes \n"
COLOR(DEFAULT) "de tout le Royaume d'Hyrule."
BOX_BREAK

UNSKIPPABLE "Depuis la venue de Ganondorf, les\n"
"affaires marchent plutôt bien...\n"
"Hé hé hé..."
BOX_BREAK

UNSKIPPABLE "Oh...Je ne peux qu'espérer une\n"
"nouvelle guerre!"
BOX_BREAK

UNSKIPPABLE "Les fantômes du nom d'" COLOR(RED) "Esprits" COLOR(DEFAULT) "\n"
"sont l'essence même de la haine. \n"
"Ils apparaissent dans les \n"
"cimetières ou dans les plaines."
BOX_BREAK

UNSKIPPABLE "Jeune homme plein de vie, si par \n"
"chance tu en captures un, viens \n"
"donc me le vendre...\n"
"Tu gagneras beaucoup d'argent!"
)
)

DEFINE_MESSAGE(0x70F5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "…ああ　ニイさん。\n"
SHIFT(45) "今日は　なんだい？？\n"
SHIFT(9) COLOR(RED) "ポウ" COLOR(DEFAULT) "が　あるなら　買ってやるよ。"
BOX_BREAK

SHIFT(24) "ニイさんの　クーポンは　今\n"
SHIFT(18) COLOR(PURPLE) HIGHSCORE(HS_POE_POINTS) COLOR(DEFAULT) "に　なってるからね。\n"
SHIFT(12) "また　よろしく。　イーッヒッヒ！"
)
,
MSG(
"Hey, young man. What's happening \n"
"today? If you have a " COLOR(RED) "Poe" COLOR(DEFAULT) ", I will \n"
"buy it."
BOX_BREAK

"Your card now has " COLOR(PURPLE) HIGHSCORE(HS_POE_POINTS) " " COLOR(DEFAULT) "points.\n"
"Come back again!\n"
"Heh heh heh!"
)
,
MSG(
"Na, mein Junge! Hast Du ein Irrlicht\n"
"oder einen Nachtschwärmer dabei?\n"
"Ich gebe Dir 10 Rubine \n"
"für ein Irrlicht."
BOX_BREAK

"Für einen Nachtschwärmer erhältst\n"
"Du 50 Rubine sowie 100 Punkte!\n"
"Du hast bis jetzt " COLOR(PURPLE) HIGHSCORE(HS_POE_POINTS) " Punkte" COLOR(DEFAULT) " auf\n"
"dem Nachtschwärmer-Konto gut!"
)
,
MSG(
"Hé! Jeune homme plein de vie!\n"
"Quoi de neuf? \n"
"As-tu un Esprit ou une Ame à me \n"
"vendre?"
BOX_BREAK

"Ta carte a " COLOR(PURPLE) HIGHSCORE(HS_POE_POINTS) " " COLOR(DEFAULT) "points.\n"
"Reviens vite me voir!\n"
"Hé hé hé!"
)
)

DEFINE_MESSAGE(0x70F6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(75) "おおっ？\n"
SHIFT(27) "ニイさん　今日は　ポウを\n"
SHIFT(33) "つかまえてきたんだね？"
BOX_BREAK

UNSKIPPABLE SHIFT(72) TEXT_SPEED(2) "・・・・・・・・" TEXT_SPEED(0) "\n"
SHIFT(72) "フ〜ン…"
BOX_BREAK

UNSKIPPABLE SHIFT(21) "こいつは　" COLOR(RED) "フツーのポウ" COLOR(DEFAULT) "だ…\n"
SHIFT(12) "ほら、" COLOR(RED) "１０ルピー　" COLOR(DEFAULT) "持っていきな。"
BOX_BREAK

UNSKIPPABLE SHIFT(57) "イ〜ッヒッヒ！"
)
,
MSG(
UNSKIPPABLE "Oh, you brought a Poe today!"
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) "........" TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE "Hmmm..."
BOX_BREAK

UNSKIPPABLE "This is a " COLOR(RED) "normal" COLOR(DEFAULT) " " COLOR(RED) "Poe" COLOR(DEFAULT) ".\n"
"Here are your " COLOR(RED) "10 Rupees" COLOR(DEFAULT) ".\n"
"Take them."
BOX_BREAK

UNSKIPPABLE "Heh heh."
)
,
MSG(
UNSKIPPABLE "Oh, Du bringst mir etwas!"
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) "Nun..." TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE "Laß sehen..."
BOX_BREAK

UNSKIPPABLE "Es ist ein " COLOR(RED) "Irrlicht" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "Hier sind " COLOR(RED) "10 Rubine" COLOR(DEFAULT) ".\n"
"Vielen Dank!"
BOX_BREAK

UNSKIPPABLE "Hehehe..."
)
,
MSG(
UNSKIPPABLE "Oh! Tu as apporté un fantôme!"
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) "........" TEXT_SPEED(0)
BOX_BREAK

UNSKIPPABLE "Hmmm..."
BOX_BREAK

UNSKIPPABLE "Ce n'est qu'un " COLOR(RED) "Esprit" COLOR(DEFAULT) ".\n"
"Je t'en donne " COLOR(RED) "10 Rubis" COLOR(DEFAULT) ". \n"
"C'est tout!"
BOX_BREAK

UNSKIPPABLE "Hé hé hé."
)
)

DEFINE_MESSAGE(0x70F7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(75) "おおっ？\n"
SHIFT(27) "ニイさん　今日は　ポウを\n"
SHIFT(33) "つかまえてきたんだね？"
BOX_BREAK

UNSKIPPABLE SHIFT(69) "オオ〜ッ！"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "ちょっと　目が　さめたぞ。\n"
SHIFT(6) "こいつは　" COLOR(RED) "ビッグポウ" COLOR(DEFAULT) "じゃないか！"
BOX_BREAK

UNSKIPPABLE SHIFT(24) COLOR(RED) "５０ルピー" COLOR(DEFAULT) "で　買い取ろう。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "オマケに　お店のクーポン\n"
SHIFT(12) COLOR(RED) "１００ポイント" COLOR(DEFAULT) "も　つけとくよ。"
BOX_BREAK

UNSKIPPABLE SHIFT(24) COLOR(RED) "１０００ポイント" COLOR(DEFAULT) "たまると\n"
SHIFT(9) "しあわせに　なれる　クーポンだ！\n"
SHIFT(63) "ヒッヒッヒ！"
)
,
MSG(
UNSKIPPABLE "Oh, you brought a Poe today!"
BOX_BREAK

UNSKIPPABLE "Hmmmm!"
BOX_BREAK

UNSKIPPABLE "Very interesting!\n"
"This is a " COLOR(RED) "Big Poe" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "I'll buy it for " COLOR(RED) "50 Rupees" COLOR(DEFAULT) "."
BOX_BREAK

UNSKIPPABLE "On top of that, I'll put " COLOR(RED) "100\n"
"points " COLOR(DEFAULT) "on your card."
BOX_BREAK

UNSKIPPABLE "If you earn " COLOR(RED) "1,000 points" COLOR(DEFAULT) ", you'll\n"
"be a happy man! Heh heh."
)
,
MSG(
UNSKIPPABLE "Oh, Du bringst mir etwas!"
BOX_BREAK

UNSKIPPABLE "Nun..."
BOX_BREAK

UNSKIPPABLE "Erstaunlich!\n"
"Das ist ja ein " COLOR(RED) "Nachtschwärmer" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Dafür bekommst Du " COLOR(RED) "50 Rubine" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Obendrein hast Du nun " COLOR(RED) "100 Punkte\n"
COLOR(DEFAULT) "auf dem Nachtschwärmer-Konto gut."
BOX_BREAK

UNSKIPPABLE "Hast Du " COLOR(RED) "1.000 Punkte" COLOR(DEFAULT) " gesammelt,\n"
"dann wartet eine geniale \n"
"Belohnung! Hehehe..."
)
,
MSG(
UNSKIPPABLE "Oh! Tu as apporté un fantôme!"
BOX_BREAK

UNSKIPPABLE "Hmmmm!"
BOX_BREAK

UNSKIPPABLE "Magnifique!\n"
"C'est une " COLOR(RED) "Ame" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Je t'en donne " COLOR(RED) "50 Rubis" COLOR(DEFAULT) "."
BOX_BREAK

"Et en plus, j'inscris " COLOR(RED) "100 points\n"
COLOR(DEFAULT) "sur ta carte."
BOX_BREAK

UNSKIPPABLE "Obtiens " COLOR(RED) "1,000 points" COLOR(DEFAULT) " et tu ne\n"
"seras pas déçu...\n"
"Hé hé hé."
)
)

DEFINE_MESSAGE(0x70F8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SHIFT(30) "オオオオオオオオ〜ッ！！"
BOX_BREAK

UNSKIPPABLE SHIFT(30) "ついに　" COLOR(RED) "１０００ポイント\n"
COLOR(DEFAULT) SHIFT(60) "あつめたか！！"
BOX_BREAK

UNSKIPPABLE SHIFT(60) "ニイさんこそ\n"
SHIFT(27) "本物の　" COLOR(RED) "ゴーストハンター" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE SHIFT(27) "とでも　言うと　思ったか？\n"
SHIFT(45) "イーッヒッヒッヒ。"
BOX_BREAK

UNSKIPPABLE SHIFT(39) "ニイさんの　おかげで\n"
SHIFT(9) COLOR(RED) "ビッグポウ" COLOR(DEFAULT) "が　余っちゃったよ…\n"
SHIFT(15) "買い取るのも　これで　最後だ。"
BOX_BREAK

UNSKIPPABLE SHIFT(45) "１０００ポイントの\n"
SHIFT(18) "約束のこと　考えてるんだろ？\n"
SHIFT(63) "ヘッヘッヘ。"
BOX_BREAK

UNSKIPPABLE SHIFT(63) "心配すんな、\n"
SHIFT(30) "コレでも　持っていきな。"
)
,
MSG(
UNSKIPPABLE "Wait a minute! WOW!"
BOX_BREAK

UNSKIPPABLE "You have earned " COLOR(RED) "1,000 points" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Young man, you are a genuine\n"
COLOR(RED) "Ghost Hunter" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Is that what you expected me to\n"
"say? Heh heh heh!"
BOX_BREAK

UNSKIPPABLE "Because of you, I have extra\n"
"inventory of " COLOR(RED) "Big Poes" COLOR(DEFAULT) ", so this will\n"
"be the last time I can buy a \n"
"ghost."
BOX_BREAK

UNSKIPPABLE "You're thinking about what I \n"
"promised would happen when you\n"
"earned 1,000 points. Heh heh."
BOX_BREAK

UNSKIPPABLE "Don't worry, I didn't forget.\n"
"Just take this."
)
,
MSG(
UNSKIPPABLE "Oh! WOW!"
BOX_BREAK

UNSKIPPABLE "Du hast jetzt " COLOR(RED) "1.000 Punkte" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Du bist ja der geborene\n"
COLOR(RED) "Geisterjäger" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Du erwartest noch etwas von\n"
"mir? Was denn? Hehehe..."
BOX_BREAK

UNSKIPPABLE "Dank Dir ist mein Bestand an\n"
COLOR(RED) "Nachtschwärmern" COLOR(DEFAULT) " enorm gestiegen...\n"
"Dies ist der letzte Geist, den ich \n"
"Dir abnehme."
BOX_BREAK

UNSKIPPABLE "Ach, Du wartest auf das, was ich\n"
"Dir für ein 1.000 Punkte-Konto\n"
"versprochen habe? Hehehe..."
BOX_BREAK

UNSKIPPABLE "Na, da will ich mal nicht so sein...\n"
"Nimm das hier!"
)
,
MSG(
UNSKIPPABLE "Ooooh! WHOA!"
BOX_BREAK

UNSKIPPABLE "Tu as obtenu " COLOR(RED) "1,000 points" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Tu es un véritable " COLOR(RED) "chasseur de\n"
"fantômes" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "Il est content? Hein? \n"
"Il est content le monsieur?\n"
"Hé hé hé!"
BOX_BREAK

UNSKIPPABLE "Grâce à toi, mon stock d'" COLOR(RED) "Ames" COLOR(DEFAULT) " est\n"
"plein! C'est donc la dernière fois \n"
"que nous faisons affaire."
BOX_BREAK

UNSKIPPABLE "Je sais, je sais...\n"
"Nous avions passé un pacte...\n"
"Tu as eu tes 1000 points et je \n"
"t'en félicite... Hé hé hé!"
BOX_BREAK

UNSKIPPABLE "Alors prends donc ceci, \n"
"mon bon ami!"
)
)

DEFINE_MESSAGE(0x70F9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(69) "あら…？"
BOX_BREAK

UNSKIPPABLE SHIFT(72) TEXT_SPEED(2) "それは…" TEXT_SPEED(0) COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Oh? What's that?"
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) QUICKTEXT_ENABLE "Is" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "that" QUICKTEXT_DISABLE "..." TEXT_SPEED(0) EVENT
)
,
MSG(
UNSKIPPABLE "Oh? Was ist das?"
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) QUICKTEXT_ENABLE "Das" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "ist" QUICKTEXT_DISABLE "..." TEXT_SPEED(0) EVENT
)
,
MSG(
UNSKIPPABLE "Oh? C'est quoi ça?"
BOX_BREAK

UNSKIPPABLE TEXT_SPEED(2) QUICKTEXT_ENABLE "Est-ce" QUICKTEXT_DISABLE " " QUICKTEXT_ENABLE "une" QUICKTEXT_DISABLE "..." TEXT_SPEED(0) EVENT
)
)

DEFINE_MESSAGE(0x70FA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(78) QUICKTEXT_ENABLE "妖精！？" QUICKTEXT_DISABLE
BOX_BREAK

UNSKIPPABLE SHIFT(45) "それじゃ、あなた…\n"
SHIFT(45) "森から来た人なの？" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "a fairy" COLOR(DEFAULT) QUICKTEXT_DISABLE "?!"
BOX_BREAK

UNSKIPPABLE "Then, are you...\n"
"Are you from the forest?" EVENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Eine Fee" COLOR(DEFAULT) QUICKTEXT_DISABLE "?!"
BOX_BREAK

UNSKIPPABLE "Dann... Dann kommst Du...\n"
"Kommst Du aus dem Wald?" EVENT
)
,
MSG(
SHIFT(75) "..." QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Fée" COLOR(DEFAULT) QUICKTEXT_DISABLE "?!"
BOX_BREAK

UNSKIPPABLE "Alors tu es un garçon...\n"
"de la forêt?" EVENT
)
)

DEFINE_MESSAGE(0x70FB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(66) "それなら…\n"
SHIFT(6) COLOR(ADJUSTABLE) "森の精霊石" COLOR(DEFAULT) "を　持っていませんか？\n"
SHIFT(15) "みどり色の　キラキラした石…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "Then...then...you wouldn't happen to\n"
"have...the " COLOR(ADJUSTABLE) "Spiritual Stone of the \n"
"Forest" COLOR(DEFAULT) ", would you?! That green \n"
"and shining stone..." EVENT
)
,
MSG(
UNSKIPPABLE "Du... Du hast nicht auch\n"
"zufällig... den " COLOR(ADJUSTABLE) "Heiligen Stein des \n"
"Waldes" COLOR(DEFAULT) ", oder? Ich meine diesen\n"
"funkelnden, grünen Stein..." EVENT
)
,
MSG(
UNSKIPPABLE "Alors...mais alors...tu dois avoir\n"
"la...la " COLOR(ADJUSTABLE) "Pierre Ancestrale de la \n"
"forêt" COLOR(DEFAULT) "?! Hein? Cette belle pierre \n"
"verte et brillante..." EVENT
)
)

DEFINE_MESSAGE(0x70FC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(27) "わたし、夢を　見たのです。"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "この　ハイラルが\n"
SHIFT(24) "まっ黒な　雲に　おおわれて\n"
SHIFT(3) "どんどん　暗くなっていくのです…"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "そのとき、ひとすじの光が\n"
SHIFT(27) "森から　あらわれました…"
BOX_BREAK

UNSKIPPABLE SHIFT(48) "そして　その光は、\n"
SHIFT(54) "雲を　切りさき、\n"
SHIFT(45) "大地を　てらすと…"
BOX_BREAK

UNSKIPPABLE SHIFT(54) COLOR(LIGHTBLUE) "妖精" COLOR(DEFAULT) "を　つれて、\n"
SHIFT(21) COLOR(ADJUSTABLE) "みどりに光る石" COLOR(DEFAULT) "を　かかげた\n"
SHIFT(24) "人の姿に　変わったのです。" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "I had a dream...In the dream,\n"
"dark storm clouds were billowing\n"
"over the land of Hyrule..."
BOX_BREAK

UNSKIPPABLE "But suddenly, a ray of light shot\n"
"out of the forest, parted the\n"
"clouds and lit up the ground..."
BOX_BREAK

UNSKIPPABLE "The light turned into a figure\n"
"holding a " COLOR(ADJUSTABLE) "green and shining stone" COLOR(DEFAULT) ",\n"
"followed by a " COLOR(LIGHTBLUE) "fairy" COLOR(DEFAULT) "..." EVENT
)
,
MSG(
UNSKIPPABLE "Ich hatte einen Traum...\n"
"Darin überzogen dunkle Wolken\n"
"unser Land Hyrule..."
BOX_BREAK

UNSKIPPABLE "Doch plötzlich... durchschnitt ein\n"
"Strahl hellen Lichts diese Wolken...\n"
"Er kam aus dem Wald, und ganz\n"
"Hyrule erstrahlte in seinem Glanz!"
BOX_BREAK

UNSKIPPABLE "Das Licht verwandelte sich in\n"
"einen Jungen, der einen " COLOR(ADJUSTABLE) "glitzernden,\n"
"grünen Stein" COLOR(DEFAULT) " in den Händen hielt.\n"
"Ihn begleitete eine " COLOR(LIGHTBLUE) "Fee" COLOR(DEFAULT) "..." EVENT
)
,
MSG(
UNSKIPPABLE "J'ai fait un rêve...Dans ce rêve,\n"
"des nuages noirs et épais \n"
"recouvraient la terre d'Hyrule..."
BOX_BREAK

UNSKIPPABLE "Quand soudain, un rayon de \n"
"lumière surgit de la forêt, \n"
"dispersant les ténèbres et \n"
"illuminant la terre..."
BOX_BREAK

UNSKIPPABLE "Cette lumière se matérialisa sous \n"
"la forme d'un garçon tenant une \n"
COLOR(ADJUSTABLE) "pierre verte " COLOR(DEFAULT) "dans la main. \n"
"Une " COLOR(LIGHTBLUE) "fée " COLOR(DEFAULT) "volait à ses côtés..." EVENT
)
)

DEFINE_MESSAGE(0x70FD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(39) "それが　夢の　お告げ。"
BOX_BREAK

UNSKIPPABLE SHIFT(51) "そう…　あなたが\n"
SHIFT(39) "その夢に　あらわれた\n"
SHIFT(39) COLOR(ADJUSTABLE) "森からの使者" COLOR(DEFAULT) "だ…と。" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "I know this is a prophecy that\n"
"someone would come from the\n"
COLOR(ADJUSTABLE) "forest" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Yes, I thought you might\n"
"be the one..." EVENT
)
,
MSG(
UNSKIPPABLE "Ich weiß, es war eine\n"
"Prophezeiung, daß jemand aus den\n"
COLOR(ADJUSTABLE) "Tiefen des Waldes" COLOR(DEFAULT) " kommen würde..."
BOX_BREAK

UNSKIPPABLE "Ich dachte, Du wärst es..." EVENT
)
,
MSG(
UNSKIPPABLE "Je sais qu'une prophétie annonce\n"
"la venue d'un enfant de la " COLOR(ADJUSTABLE) "forêt" COLOR(DEFAULT) "..."
BOX_BREAK

UNSKIPPABLE "Cet enfant...ne peut être que toi." EVENT
)
)

DEFINE_MESSAGE(0x70FE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(42) "あ…　ごめんなさい！"
BOX_BREAK

UNSKIPPABLE SHIFT(6) "わたし　夢中に　なってしまって…\n"
SHIFT(57) "まだ、なまえも\n"
SHIFT(15) "お教えしていませんでしたね。" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(58) "Oh, I'm sorry!"
BOX_BREAK

UNSKIPPABLE "I got carried away with my story \n"
"and didn't even properly introduce \n"
"myself!" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(55) "Oh! Tut mir leid!"
BOX_BREAK

UNSKIPPABLE "Ich habe mich ein bißchen\n"
"mitreißen lassen von meiner\n"
"Geschichte und mich gar nicht\n"
"standesgemäß vorgestellt!" EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(45) "Oh! Pardonne-moi!"
BOX_BREAK

UNSKIPPABLE "Je parle, je parle et je ne me\n"
"suis toujours pas présentée..." EVENT
)
)

DEFINE_MESSAGE(0x70FF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(48) "わたしは　" COLOR(LIGHTBLUE) "ゼルダ" COLOR(DEFAULT) "。\n"
SHIFT(33) "このハイラルの　王女…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE SHIFT(12) "I am " COLOR(LIGHTBLUE) "Zelda" COLOR(DEFAULT) ", Princess of Hyrule." EVENT
)
,
MSG(
UNSKIPPABLE "Ich bin " COLOR(LIGHTBLUE) "Zelda" COLOR(DEFAULT) ", Prinzessin von Hyrule." EVENT
)
,
MSG(
UNSKIPPABLE SHIFT(42) "Mon nom est " COLOR(LIGHTBLUE) "Zelda" COLOR(DEFAULT) ",\n"
SHIFT(46) "Princesse d'Hyrule." EVENT
)
)

DEFINE_MESSAGE(0x7100, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "はて…？\n"
SHIFT(12) "どこかで　お会いしましたかな？"
)
,
MSG(
"What? Have we met before?"
)
,
MSG(
"Was? Kennen wir uns?"
)
,
MSG(
"Quoi? On se connaît?"
)
)

DEFINE_MESSAGE(0x7101, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "おお、かわいいのぉ。\n"
SHIFT(18) "どこで　見つけてきたのかの？"
)
,
MSG(
"Awww... That's so cute!\n"
"Could you tell me where you\n"
"found it?"
)
,
MSG(
"Oh... Das ist aber süß!\n"
"Sagst Du mir, woher Du sie\n"
"hast?"
)
,
MSG(
"Oooh... C'est trop mignon!\n"
"Où l'as-tu trouvé?"
)
)

DEFINE_MESSAGE(0x7102, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "ひいいっ！！　おたすけ〜っ！！"
)
,
MSG(
"Yeeeah!\n"
"Help me!"
)
,
MSG(
"Oh mein Gott!\n"
"Hilfe!"
)
,
MSG(
"Wouaaaaaah!\n"
"Au secours!"
)
)

DEFINE_MESSAGE(0x7103, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "…それが　どうしたんじゃ？"
)
,
MSG(
"Uh...yeah? So what?"
)
,
MSG(
"Ja? Was ist denn?"
)
,
MSG(
"Hein?...ouais? Et alors?"
)
)

DEFINE_MESSAGE(0x7104, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "キツネは　きらいザマス！"
)
,
MSG(
"I hate foxes!"
)
,
MSG(
"Ich hasse Füchse!"
)
,
MSG(
"JE HAIS LES RENARDS!"
)
)

DEFINE_MESSAGE(0x7105, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "め、めざわりザマス！"
)
,
MSG(
"How irritating!"
)
,
MSG(
"Du siehst bescheuert aus!"
)
,
MSG(
"C'est agaçant ton truc!"
)
)

DEFINE_MESSAGE(0x7106, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "アラ、なかなか　ハンサム…"
)
,
MSG(
"Hey, you look good!"
)
,
MSG(
"Hey, das steht Dir wirklich gut!"
)
,
MSG(
"Whoa! La classe!"
)
)

DEFINE_MESSAGE(0x7107, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) QUICKTEXT_ENABLE "んまーっ！" QUICKTEXT_DISABLE "\n"
SHIFT(18) "なんザマス！？　そのたいど！！"
)
,
MSG(
QUICKTEXT_ENABLE "YEEEAH! What's your problem?!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Bist Du so häßlich, daß Du das \n"
"Ding tragen mußt?!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Beuark! C'est quoi ton problème?" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x7108, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "アラ…　それ、ゾーラ族？\n"
SHIFT(12) "クールな　まなざしが　ステキ…"
)
,
MSG(
"Oooh...is that a Zora?\n"
"Those cool eyes are really\n"
"fascinating..."
)
,
MSG(
"Oooh... Bist Du ein Zora?\n"
"Diese Augen... Wirklich\n"
"faszinierend..."
)
,
MSG(
"Oooh...c'est un Zora?\n"
"Ses yeux sont fascinants..."
)
)

DEFINE_MESSAGE(0x7109, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "なによっ！\n"
SHIFT(21) "コワいから　近よらないで！！"
)
,
MSG(
"Oh no! You're scary!\n"
"Don't come any closer!"
)
,
MSG(
"Das ist ja schrecklich!\n"
"Komm bloß nicht näher!"
)
,
MSG(
"Yaaah! J'ai peur!!\n"
"Ne me mange pas! \n"
"Ne me mange pas!"
)
)

DEFINE_MESSAGE(0x710A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "あ、なつかしい。\n"
SHIFT(21) "子供のころを　思い出すわ…"
)
,
MSG(
"Wow...how nostalgic! That\n"
"reminds me of when I was a\n"
"little kid."
)
,
MSG(
"Wow... Eine Maske! Das erinnert\n"
"mich an die Zeit, als ich noch\n"
"ein kleines Kind war."
)
,
MSG(
"C'est-y pas mignon...\n"
"La jeunesse, les masques...\n"
"Tout ça est si loin à présent."
)
)

DEFINE_MESSAGE(0x710B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ちょっと　わらえるわね。\n"
SHIFT(72) "ウフフ…"
)
,
MSG(
"That's kind of funny...it\n"
"makes me laugh!\n"
"Hee hee!"
)
,
MSG(
"Hey, das ist lustig... Es\n"
"bringt mich zum Lachen!\n"
"Hihihihi!"
)
,
MSG(
"C'est rigolo ton truc!\n"
"Hi hi hi!"
)
)

DEFINE_MESSAGE(0x710C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) QUICKTEXT_ENABLE "うわっ！！" QUICKTEXT_DISABLE "\n"
SHIFT(39) "カアちゃん　ゴメン！！"
BOX_BREAK

SHIFT(21) "・・・・・なんだ、おどかすなよ。"
)
,
MSG(
QUICKTEXT_ENABLE "Uh-oh!" QUICKTEXT_DISABLE " I'm sorry, mom!\n"
"Oh...hey, it's you!\n"
"Don't scare me like\n"
"that!"
)
,
MSG(
QUICKTEXT_ENABLE "Oh-oh!" QUICKTEXT_DISABLE " Sorry, Mutter!\n"
"Oh... Ach, Du bist es!\n"
"Erschreck mich doch nicht \n"
"so!"
)
,
MSG(
QUICKTEXT_ENABLE "Oh-oh!" QUICKTEXT_DISABLE " Bonjour maman!\n"
"...Hein? C'est toi!\n"
"T'es malade ou quoi?"
)
)

DEFINE_MESSAGE(0x710D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "おまえ、でっかいカオだな…"
)
,
MSG(
"What a big head you have!"
)
,
MSG(
"Du hast einen Riesenkürbis!"
)
,
MSG(
"Woah! T'as une de ces têtes!"
)
)

DEFINE_MESSAGE(0x710E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "…よせよ、テレるぜ…"
)
,
MSG(
"Oh, don't do that!\n"
"I'm shy..."
)
,
MSG(
"Mach das nie wieder!\n"
"Ich bin so schreckhaft..."
)
,
MSG(
"Enlève-le tout d'suite!\n"
"J'ai peur..."
)
)

DEFINE_MESSAGE(0x710F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "ハハハ！\n"
SHIFT(39) "お面コンテストかい？"
BOX_BREAK

SHIFT(39) "じゃ、" QUICKTEXT_ENABLE "そいつに　一票！" QUICKTEXT_DISABLE
)
,
MSG(
"Is there a mask competition\n"
"going on? \n"
QUICKTEXT_ENABLE "I'm going to vote for you!" QUICKTEXT_DISABLE
)
,
MSG(
"Findet hier ein Maskenwettbewerb \n"
"statt? \n"
QUICKTEXT_ENABLE "Wenn ja, dann wähle ich Dich!" QUICKTEXT_DISABLE
)
,
MSG(
"Y a-t-il un concours de masques \n"
"en ce moment?\n"
QUICKTEXT_ENABLE "Je vais voter pour toi!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x7110, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "あ、ウサギ！"
BOX_BREAK

SHIFT(6) "そういえば　ウサギ　おっかけてた\n"
SHIFT(42) "ヘンな男が　いたよ。"
)
,
MSG(
"Oh! A rabbit!\n"
"Speaking of rabbits, I saw a \n"
"strange man chasing rabbits \n"
"around..."
)
,
MSG(
"Oh! Ein Hase!\n"
"Erst kürzlich sah ich einen \n"
"Mann, der auf dem Feld den \n"
"Hasen nachjagte."
)
,
MSG(
"Oh! Un lapin! Un petit lapinou!\n"
"Tout mimi. Tout gentil.\n"
"Il est à qui le lapin? Hein?\n"
"Il est à qui? C'est mignoooon."
)
)

DEFINE_MESSAGE(0x7111, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "オッ！　オッ！　オォ〜ッ！！\n"
SHIFT(45) "いい　オンナ〜っ！！"
BOX_BREAK

SHIFT(21) "でも…　アンタ、ちっこいな。"
)
,
MSG(
"Oooh, what a pretty lady!\n"
"But you're kind of short,\n"
"aren't you?"
)
,
MSG(
"Oh, welch gutaussehende Frau!\n"
"Aber Du bist ein wenig klein,\n"
"oder?"
)
,
MSG(
"Oooh! Quelle belle fille!\n"
"Un peu petite mais...jolie."
)
)

DEFINE_MESSAGE(0x7112, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "え〜っと…"
BOX_BREAK

SHIFT(54) QUICKTEXT_ENABLE "スマン　ぼうず！" QUICKTEXT_DISABLE "\n"
SHIFT(9) "いいオチが　思いつかなかった…\n"
SHIFT(54) "またな、ぼうず。"
)
,
MSG(
"Well...I can't think of anything\n"
"funny to say...sorry, kid!"
)
,
MSG(
"Wow, mit der Maske siehst Du \n"
"hübscher aus als vorher!"
)
,
MSG(
"Mmm? Oui? C'est pour quoi?\n"
"Tu veux ma photo?"
)
)

DEFINE_MESSAGE(0x7113, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "お面か…\n"
SHIFT(27) "オレも　こどものころは…\n"
SHIFT(27) "なぬ？　想像できないって？"
)
,
MSG(
"A mask... When I was a little \n"
"kid, I also wore masks around...\n"
"What? You say you can't imagine\n"
"me doing that?"
)
,
MSG(
"Eine Maske... Das erinnert mich an\n"
"meine Jugendzeit. Damals hab ich\n"
"auch welche getragen. Heute würde \n"
"man mich als Spinner beschimpfen!"
)
,
MSG(
"Oh! Un masque... Cela me rappelle\n"
"mon enfance. Je gambadais dans\n"
"la forêt avec un masque...\n"
"Et puis un jour...? Tu m'écoutes?"
)
)

DEFINE_MESSAGE(0x7114, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) QUICKTEXT_ENABLE "ヒック！" QUICKTEXT_DISABLE "　おお、いけねぇ。\n"
SHIFT(33) "マボロシが　見えらぁ…"
BOX_BREAK

SHIFT(75) QUICKTEXT_ENABLE "ヒック！" QUICKTEXT_DISABLE
)
,
MSG(
"Ohhhh...I see...\n"
"It's an illusion..."
)
,
MSG(
"Oh, hübsch... Ein wandelnder Fisch...\n"
"Ich könnte Dich zum Abendessen \n"
"einladen... Als Hauptgericht!"
)
,
MSG(
"Ohhhh...Je vois...\n"
"C'est une illusion d'optique..."
)
)

DEFINE_MESSAGE(0x7115, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "…ぼうず。\n"
SHIFT(27) "オレみたいに　なっちゃあ\n"
SHIFT(51) "いけねえよ。"
BOX_BREAK

SHIFT(75) QUICKTEXT_ENABLE "ヒック！" QUICKTEXT_DISABLE
)
,
MSG(
"Hey, kid, don't grow up to be\n"
"like me..."
)
,
MSG(
"Nicht schlecht. So einen \n"
"großen Hasen kriegt man selten in \n"
"die Pfanne!"
)
,
MSG(
"Hé petit! Ne deviens pas comme\n"
"moi...ça craint."
)
)

DEFINE_MESSAGE(0x7116, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) QUICKTEXT_ENABLE "ヒーッ！　ゲルド族！？" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(48) "…なんだ、お面か。\n"
SHIFT(12) "なぜ、そんな　お面が　あるんだ？"
)
,
MSG(
QUICKTEXT_ENABLE "AAAAAAAAAAAH!\n"
"A GERUDO!!!!" QUICKTEXT_DISABLE
BOX_BREAK

"Wha-? A mask?\n"
"Why do you have a mask \n"
"like that?!"
)
,
MSG(
QUICKTEXT_ENABLE "AAAAAAAAAAAH!\n"
"EINE GERUDO-KRIEGERIN!!!!" QUICKTEXT_DISABLE
BOX_BREAK

"Was? Nur eine Maske?!\n"
"Wie konntest Du mich so \n"
"erschrecken?!"
)
,
MSG(
QUICKTEXT_ENABLE "YAAAAAAAAAAAH!\n"
"UNE GERUDO!!!!" QUICKTEXT_DISABLE
BOX_BREAK

"Quoi? Un masque?\n"
"Mais pourquoi tu portes un truc\n"
"comme ça? T'es tapé ou quoi?!"
)
)

DEFINE_MESSAGE(0x7117, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "ゴメンな、いま　いそがしいんだ。"
)
,
MSG(
"Sorry, I'm busy right now."
)
,
MSG(
"Sorry, aber ich habe zu tun. Ich \n"
"muß etwas zum Essen einkaufen."
)
,
MSG(
"Laisse-moi tranquille...ouste!"
)
)

DEFINE_MESSAGE(0x7118, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "あ〜　キータンだ！\n"
SHIFT(42) "こんちは　キータン！"
)
,
MSG(
"Oh wow! It's Keaton!\n"
"Hi, Keaton!"
)
,
MSG(
"Oh! Ein Fuchs! Hast Du auch\n"
"eine Gans gestohlen?!"
)
,
MSG(
"Cool! C'est le Renard!\n"
"Bonjour monsieur le Renard!"
)
)

DEFINE_MESSAGE(0x7119, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "コワ〜イ！\n"
SHIFT(33) "カカリコ村の　男の子が\n"
SHIFT(24) "そんなの　ほしがってたよ。"
)
,
MSG(
"How spooky!\n"
"There's a boy in Kakariko\n"
"Village who was looking for a\n"
"mask like that!"
)
,
MSG(
"Das ist gespenstisch!\n"
"Ein Junge in Kakariko hat\n"
"nach einer Maske wie dieser\n"
"gesucht!"
)
,
MSG(
"Quelle horreur!\n"
"Un petit garçon à Cocorico \n"
"cherchait un masque comme\n"
"celui-ci..."
)
)

DEFINE_MESSAGE(0x711A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "ふ〜ん。\n"
SHIFT(27) "ほかに　もう　お面ないの？"
)
,
MSG(
"Hmm...well...don't you have any\n"
"other masks?"
)
,
MSG(
"Gähn... Hast Du keine andere\n"
"Maske?"
)
,
MSG(
"Mmm...super...tu n'as pas un autre\n"
"masque?"
)
)

DEFINE_MESSAGE(0x711B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "ヘンな　お面。\n"
SHIFT(69) "キャハハ！"
)
,
MSG(
"What a strange mask!\n"
"Hee hah haa!"
)
,
MSG(
"Welch eine seltsame Maske!\n"
"Die ist klasse!"
)
,
MSG(
"Woah! Il est louche ton masque!"
)
)

DEFINE_MESSAGE(0x711C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "フッ…　無粋な子だな。\n"
SHIFT(54) "じゃま、じゃま。"
)
,
MSG(
"Hey kid! Can't you see we're\n"
"busy?! Leave us alone!"
)
,
MSG(
"Stör uns jetzt nicht! Wir haben \n"
"hier Wichtiges zu, äh, \n"
"besprechen!"
)
,
MSG(
"Tu vois pas qu'on discute?\n"
"Laisse-nous tranquilles!"
)
)

DEFINE_MESSAGE(0x711D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "フッ…　ゴメンよ、\n"
SHIFT(12) "ほかの女性は　眼中にないのサ。"
)
,
MSG(
"I'm sorry. I don't even want to\n"
"look at any other woman!"
)
,
MSG(
"Ich denke gar nicht daran,\n"
"irgendeine andere Frau \n"
"anzuschauen!"
)
,
MSG(
"Désolé. Je ne pourrai plus jamais\n"
"regarder une autre femme!"
)
)

DEFINE_MESSAGE(0x711E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ウフッ…　気にしちゃダメ。\n"
SHIFT(12) "そう…　ここは　ふたりの世界…"
)
,
MSG(
"Hee hee.\n"
"Don't pay any attention to that\n"
"kid, my dear... Just pretend we're\n"
"in our own, private little world..."
)
,
MSG(
"Beachte ihn nicht, Darling...\n"
"Wir haben Besseres zu tun...\n"
"Küß mich..."
)
,
MSG(
"Hi hi hi...\n"
"Ne prête pas attention à ce petit.\n"
"Embrasse-moi plutôt, amour."
)
)

DEFINE_MESSAGE(0x711F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "おねがい…\n"
SHIFT(48) "どっかに　消えて。"
)
,
MSG(
"Oh, please!\n"
"Go bother someone \n"
"else!"
)
,
MSG(
"Ein Hase! Sorry, aber ich hab \n"
"schon ein Häschen hier... und es \n"
"ist hübscher als Du!"
)
,
MSG(
"Heu....\n"
"Tu veux pas aller aut'part?"
)
)

DEFINE_MESSAGE(0x7120, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "この世には　究極のクスリを\n"
SHIFT(9) "つくることのできる　クスリ屋が\n"
SHIFT(15) "いるっていう　ウワサだけど…"
)
,
MSG(
"There's a rumor going around that\n"
"there is a Potion Shop that can\n"
"make the ultimate medicine!"
)
,
MSG(
"Ein Gerücht besagt, daß es einen \n"
"Laden gibt, der das ultimative\n"
"Elixier verkauft!"
)
,
MSG(
"On dit qu'un apothicaire fabrique\n"
"un médicament surpuissant!"
)
)

DEFINE_MESSAGE(0x7121, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "この世には　" COLOR(LIGHTBLUE) "ハイリアの盾" COLOR(DEFAULT) "を\n"
SHIFT(9) "たべちゃう怪物が　いるっていう\n"
SHIFT(36) "ウワサが　あるんだよ。"
BOX_BREAK

SHIFT(54) "見たこと　ある？"
)
,
MSG(
"I heard a rumor that there is a \n"
"monster that eats " COLOR(LIGHTBLUE) "Hylian Shields" COLOR(DEFAULT) "\n"
"somewhere out there in the world.\n"
"Have you ever seen it?"
)
,
MSG(
"Ich hörte, daß es irgendwo eine \n"
"Kreatur geben soll, die " COLOR(LIGHTBLUE) "hylianische \n"
"Schilde" COLOR(DEFAULT) " frißt..."
)
,
MSG(
"On raconte qu'un monstre avale\n"
"les " COLOR(LIGHTBLUE) "boucliers" COLOR(DEFAULT) ". \n"
"En as-tu déjà vu un?"
)
)

DEFINE_MESSAGE(0x7122, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "バクダンの行商に　きたゴロ。\n"
SHIFT(30) "買ってゴロ、買ってゴロ！"
)
,
MSG(
"I came here to sell bombs...\n"
"Please buy some!"
)
,
MSG(
"Ich kam her, um Bomben zu \n"
"verkaufen."
)
,
MSG(
"Je suis venu vendre des bombes...\n"
"En veux-tu?"
)
)

DEFINE_MESSAGE(0x7123, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
UNSKIPPABLE SHIFT(24) "わたしは…　こわいのです。\n"
SHIFT(6) "あの男が　ハイラルを　ほろぼす…\n"
SHIFT(30) "そんな気が　するのです。"
BOX_BREAK

UNSKIPPABLE SHIFT(27) "それだけの　恐ろしい力を\n"
SHIFT(45) "持った男なのです。"
BOX_BREAK

UNSKIPPABLE SHIFT(54) "でも　よかった。\n"
SHIFT(33) "あなたが　来てくれて…" COLOR(BLUE) EVENT COLOR(DEFAULT)
)
,
MSG(
UNSKIPPABLE "I...I am afraid...\n"
"I have a feeling that man is going\n"
"to destroy Hyrule."
BOX_BREAK

UNSKIPPABLE "He has such terrifying power!"
BOX_BREAK

UNSKIPPABLE "But it's fortunate that you have \n"
"come..." EVENT
)
,
MSG(
UNSKIPPABLE "Ich... Ich habe Angst...\n"
"Große Angst, daß dieser Mann \n"
"Hyrule den Untergang bringt."
BOX_BREAK

UNSKIPPABLE "Er besitzt übermenschliche Kräfte!"
BOX_BREAK

UNSKIPPABLE "Doch nun, da Du hier bist, wird \n"
"alles gut..." EVENT
)
,
MSG(
UNSKIPPABLE "J'ai...J'ai peur...\n"
"J'ai le sentiment que cet homme\n"
"va anéantir Hyrule."
BOX_BREAK

UNSKIPPABLE "Ses pouvoirs sont terrifiants!"
BOX_BREAK

UNSKIPPABLE "Mais ta venue est providentielle." EVENT
)
)

DEFINE_MESSAGE(0x7124, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "なんでぇっ！\n"
SHIFT(27) "言いてえコトが　あんなら\n"
SHIFT(48) "ハッキリ　いいな！"
)
,
MSG(
"What? If you want something,\n"
"just make it clear!"
)
,
MSG(
"Das ist ja albern!"
)
,
MSG(
"Hein? Mais tu veux quoi?\n"
"Tu vas me lâcher, ouais?"
)
)

DEFINE_MESSAGE(0x7125, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "こちとら　いそがしいんでぃ！\n"
SHIFT(54) "べらぼうめぃ！！"
)
,
MSG(
"I'm busy! Get out of my way,\n"
"you bum!"
)
,
MSG(
"Würdest Du arbeiten,\n"
"kämst Du nicht auf solch\n"
"dämliche Ideen!"
)
,
MSG(
"J'suis occupé! Dégage!\n"
"JE TE HAIS!"
)
)

DEFINE_MESSAGE(0x7126, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "お、いい木　使ってんじゃねえか。\n"
SHIFT(75) "ぼうず。"
)
,
MSG(
"Hey, you have some good,\n"
"quality wood there, kid!"
)
,
MSG(
"Hey, Du trägst eine Holzmaske!\n"
"Die brennt sicher gut!"
)
,
MSG(
"Mmm... Du bois de qualité!"
)
)

DEFINE_MESSAGE(0x7127, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "カーッ　ペッ！\n"
SHIFT(21) "うせなっ！　トンチキ野郎め。"
)
,
MSG(
"Hrrrrm!\n"
"Get out of my face!\n"
"You good for nothin'..."
)
,
MSG(
"Bist Du wirklich so häßlich,\n"
"daß Du dieses Ding tragen mußt?"
)
,
MSG(
"Grrrr!\n"
"Tu m'oublies, oui?\n"
"Mauviette..."
)
)

DEFINE_MESSAGE(0x7128, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "キャーッ！　イヤ〜ッ！"
BOX_BREAK

SHIFT(42) "はっ、いっけな〜い。\n"
SHIFT(45) "こんな声　出したら\n"
SHIFT(24) "親方に　おこられちゃ〜う。"
)
,
MSG(
"EEEEEEAAAAH!\n"
"Whoops, I shouldn't scream like\n"
"that or the boss will yell at me!"
)
,
MSG(
"Ogottogottogott... Das darfst Du \n"
"aber nicht, mich so erschrecken!"
)
,
MSG(
"YAAAAAAAAAAAAH!\n"
"Oups. Désolé.\n"
"Je ne devrais pas crier comme ça."
)
)

DEFINE_MESSAGE(0x7129, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "ヒィッ、親方〜！？\n"
SHIFT(27) "さぼってゴメンなさ〜い！"
BOX_BREAK

SHIFT(57) "あれ？　ちがう？"
)
,
MSG(
"Oh, sorry boss! \n"
"I didn't mean to slack off!\n"
"I'll get busy!"
BOX_BREAK

"Oh, that's not you, boss?"
)
,
MSG(
"Du Böser! \n"
"Mich so auf den Arm zu \n"
"nehmen..."
BOX_BREAK

"Welch ein Schelm!"
)
,
MSG(
"Désolé, chef!\n"
"Ma pause est terminée!\n"
"Je vais travailler...promis!"
BOX_BREAK

"Heu...chef? C'est vous?"
)
)

DEFINE_MESSAGE(0x712A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "ゲルド族って…\n"
SHIFT(21) "美しくって　勇ましくって…\n"
SHIFT(69) TEXT_SPEED(2) "ス・テ・キ" TEXT_SPEED(0) "！"
)
,
MSG(
"Gerudos are beautiful and brave...\n"
"They are just so fascinating!"
)
,
MSG(
"Huch, eine Frau...\n"
"Was will die denn hier...?"
)
,
MSG(
"Les Gerudos sont si belles...\n"
"Je les aime! Toutes!"
)
)

DEFINE_MESSAGE(0x712B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "いつか　ウデを　みがいて\n"
SHIFT(12) "そんなお面、ほってみたいわね。"
)
,
MSG(
"Someday, when I have more skill,\n"
"I'll carve a mask like that one!"
)
,
MSG(
"Ich werde auch versuchen, eine \n"
"Maske zu schnitzen... Vielleicht \n"
"eine Pinocchio-Maske. Wegen der \n"
"langen Nase... Hehe..."
)
,
MSG(
"Un jour j'aurai du talent.\n"
"Et alors je pourrai sculpter un \n"
"masque comme le tien!"
)
)

DEFINE_MESSAGE(0x712C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(81) "おお！\n"
SHIFT(27) "それが　ウワサの　お面か。\n"
SHIFT(42) "みょうな　モンだな。"
)
,
MSG(
"Oh, that's the mask\n"
"everyone is talking about!\n"
"Looks kind of strange..."
)
,
MSG(
"Whoa! Kommst Du gerade aus dem \n"
"Fratzenwald?"
)
,
MSG(
"C'est ça le masque à la mode?\n"
"Il est méga-moche!"
)
)

DEFINE_MESSAGE(0x712D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "ハッハッハッハ！\n"
SHIFT(18) "ショーバイはんじょう　かな？\n"
SHIFT(69) "勇者クン。"
)
,
MSG(
"Wa-ha-hah!\n"
"How's business,\n"
"Mr. Hero?\n"
"Hah hah hah!"
)
,
MSG(
"Ah, der Nachwuchsheld!\n"
"Wie läuft's denn so?\n"
"Alles klar?"
)
,
MSG(
"Wa-ha-hah!\n"
"Tout se passe comme vous le \n"
"voulez, M. Le Preux Chevalier?\n"
"Hah hah hah!"
)
)

DEFINE_MESSAGE(0x712E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "オジさんはね、お仕事中なんだ。\n"
SHIFT(75) "わかる？"
)
,
MSG(
"I'm on duty.\n"
"Understand?\n"
"ON DUTY!"
)
,
MSG(
"Ich bin im Dienst!\n"
"Ich darf nicht lachen!\n"
"VERSCHWINDE!"
)
,
MSG(
"Je suis de service.\n"
"T'as compris?\n"
"DE SERVICE!"
)
)

DEFINE_MESSAGE(0x712F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "なんとも…　いえませんな…"
)
,
MSG(
"Hmm, well, I don't really know\n"
"what to say about that one..."
)
,
MSG(
"Oh, eine Maske... Schützt sie\n"
"Dich auch vor Faustschlägen?"
)
,
MSG(
"Mmmm... Pas mal...enfin...\n"
"J'm'en fiche, quoi!"
)
)

DEFINE_MESSAGE(0x7130, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "あら、カワイイ。\n"
"でも　コッコは　もっと　キュートよ。"
)
,
MSG(
"Oh wow! Cute!\n"
"But Cuccos are much cuter!"
)
,
MSG(
"Oh, wie süß!\n"
"Aber nicht so süß wie meine \n"
"Hühner!"
)
,
MSG(
"Oooh! C'est trop mimi!\n"
"Mais mes cocottes sont encore \n"
"plus mignonnes!"
)
)

DEFINE_MESSAGE(0x7131, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "え？　なに？\n"
SHIFT(45) "悲しいの？　ちがう？\n"
"うれしいの？　…う〜ん　わかんない。"
)
,
MSG(
"Eh, what?\n"
"Are you sad?\n"
"Happy?\n"
"I really can't tell..."
)
,
MSG(
"Hmmm, eine Maske...\n"
"Trägst Du sie, ist es ziemlich \n"
"schwer, festzustellen, ob Du \n"
"traurig oder fröhlich bist!"
)
,
MSG(
"Hein? Quoi?\n"
"Tu es joyeux ou triste?\n"
"Difficile à dire..."
)
)

DEFINE_MESSAGE(0x7132, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "ごめんなさい。\n"
SHIFT(21) "それには　きょうみ　ないの。"
)
,
MSG(
"I'm sorry, I'm not really\n"
"interested in that."
)
,
MSG(
"So häßlich bist Du nun auch \n"
"wieder nicht, daß Du eine Maske\n"
"tragen müßtest."
)
,
MSG(
"Mmm... Ce n'est pas vraiment mon \n"
"style..."
)
)

DEFINE_MESSAGE(0x7133, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"お墓で　あそんでる　オチビちゃんが\n"
SHIFT(9) "かおが　どうとか　いってたわね。"
)
,
MSG(
"The little kid playing in the\n"
"graveyard was saying something\n"
"about his face..."
)
,
MSG(
"Auf dem Friedhof ist auch ein\n"
"Junge, dem so etwas gefallen \n"
"würde..."
)
,
MSG(
"Le petit garçon du cimetière nous\n"
"parle toute la journée de son \n"
"visage..."
)
)

DEFINE_MESSAGE(0x7134, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "オレはよー\n"
SHIFT(42) "イイヤツなんだよー\n"
SHIFT(42) "わかってくれよー！！"
)
,
MSG(
"I really am a good man.\n"
"Don't you believe me?"
)
,
MSG(
"Na, hübsche Frau?! Heute abend\n"
"schon etwas vor?"
)
,
MSG(
"Je suis un type bien.\n"
"Tu ne me crois pas?"
)
)

DEFINE_MESSAGE(0x7135, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "ゲゲッ！"
BOX_BREAK

SHIFT(69) "なんだよ！\n"
SHIFT(18) "ウチのババアかと　思ったぜ！\n"
SHIFT(57) "おどかすない！"
)
,
MSG(
"WHAAAA--!\n"
"I thought you were that old hag!\n"
"Don't scare me like that!"
)
,
MSG(
"WÜRG!\n"
"Ich dachte gerade, Du wärst meine\n"
"Ex-Freundin! Erschreck mich bitte\n"
"nie wieder so..."
)
,
MSG(
"YAAAA--! Hein?\n"
"J'ai cru que c'était encore l'autre\n"
"vieille bique! J'ai eu une de ces\n"
"frousses!"
)
)

DEFINE_MESSAGE(0x7136, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "そういやぁ、オヤジは\n"
SHIFT(3) "でっけえゴロンの　作った刀のこと\n"
"話してたな…　どーでもいいけどよ。"
)
,
MSG(
"I remember my father talking\n"
"about a swordsmith...but that\n"
"doesn't really matter to me\n"
"anyway."
)
,
MSG(
"Mein Vater sprach mal von einem\n"
"Meisterschmied...\n"
"Wie dem auch sei, ich verkaufe\n"
"Hühner..."
)
,
MSG(
"Mon père me parlait souvent\n"
"d'un forgeron...mais tout ça ne\n"
"m'intéresse plus...."
)
)

DEFINE_MESSAGE(0x7137, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"コワかねえよ、森のバケモンなんか！\n"
SHIFT(57) "なめんなよ！"
)
,
MSG(
"I'm not afraid of any forest \n"
"monsters! Are you trying to\n"
"make fun of me?"
)
,
MSG(
"Ah, ein Monster! Ich werde es\n"
"einen Kopf kürzer machen und\n"
"seine Gebeine durch den\n"
"Fleischwolf drehen..."
)
,
MSG(
"Les monstres de la forêt ne me\n"
"font pas peur! Tu me prends pour\n"
"qui, toi?"
)
)

DEFINE_MESSAGE(0x7138, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "あーれー？\n"
SHIFT(69) "なーにー？\n"
SHIFT(18) "ここからじゃ　見えませーん！"
)
,
MSG(
"What is that? I can't see it\n"
"very well from here..."
)
,
MSG(
"Wer bist Du? Ich kann das von \n"
"hier aus schlecht erkennen..."
)
,
MSG(
"Mmm? C'est quoi ça?\n"
"Je ne vois rien d'ici..."
)
)

DEFINE_MESSAGE(0x7139, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "やー　ごくろーさーん！"
)
,
MSG(
"Hi again! How are you today?"
)
,
MSG(
"Ah, Du bist es! Trägst Du Deine \n"
"Haare heute anders?"
)
,
MSG(
"Bonjour! Quelles nouvelles?"
)
)

DEFINE_MESSAGE(0x713A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "ほんじつも　いじょーなーし！"
)
,
MSG(
"Everything's fine today!"
)
,
MSG(
"Hey, hast Du eine Beule am Kopf?"
)
,
MSG(
"Belle journée, n'est-ce pas?"
)
)

DEFINE_MESSAGE(0x713B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ねむい…　ねむい…"
)
,
MSG(
"Tired...I'm so tired..."
)
,
MSG(
"Huch, ein Außerirdischer!"
)
,
MSG(
"Fatigué...dormir..."
)
)

DEFINE_MESSAGE(0x713C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "キツネは　けっこうザマス！"
)
,
MSG(
"I don't care about any\n"
"foxes!"
)
,
MSG(
"Füchse finde ich nicht\n"
"besonders attraktiv!"
)
,
MSG(
"Les renards m'agacent!"
)
)

DEFINE_MESSAGE(0x713D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "め、めざわりザマス！"
)
,
MSG(
"That's irritating!\n"
"It bothers my eyes!"
)
,
MSG(
"Mit dieser Maske wirst Du bei\n"
"Frauen nicht viel Erfolg haben..."
)
,
MSG(
"Tu es assez agaçant toi, non?\n"
"Allez! Du balai!"
)
)

DEFINE_MESSAGE(0x713E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "あら、なかなか　ハンサムザマスね。"
)
,
MSG(
"That looks quite handsome!"
)
,
MSG(
"Ich war schon immer gegen \n"
"Genversuche..."
)
,
MSG(
"Mmmm...joli!"
)
)

DEFINE_MESSAGE(0x713F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "んまーっ！\n"
SHIFT(27) "なんザマス、そのたいど！！"
)
,
MSG(
"Waaaaaaah!\n"
"What is wrong with you?\n"
"Do you have a bad attitude?"
)
,
MSG(
"Wow, die Möglichkeiten der\n"
"plastischen Chirurgie sind\n"
"erstaunlich!"
)
,
MSG(
"Waaaaaaah!\n"
"C'est quoi ton problème, petit?"
)
)

DEFINE_MESSAGE(0x7140, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ヒトと　話すときは\n"
SHIFT(36) "目を見て　話さんかい！\n"
SHIFT(60) "この　ドアホ！"
)
,
MSG(
"You idiot! \n"
"When you talk to someone, you\n"
"should make eye contact!"
)
,
MSG(
"Ungezogener Bengel!\n"
"Wenn Du jemanden ansprichst,\n"
"solltest Du stets den \n"
"Augenkontakt suchen!"
)
,
MSG(
"Crétin! Enlève ton masque avant \n"
"de parler à quelqu'un!"
)
)

DEFINE_MESSAGE(0x7141, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ヒトと　話すときは\n"
SHIFT(6) "そんな目で　ニラむもんじゃない！\n"
SHIFT(60) "この　ドアホ！"
)
,
MSG(
"You idiot!\n"
"When you talk to someone, you\n"
"shouldn't stare!"
)
,
MSG(
"Die Jugend von heute!\n"
"Nun tragen sie schon Masken, um \n"
"wie Frauen auszusehen! Zu meiner\n"
"Zeit hätte es das nicht gegeben!"
)
,
MSG(
"Crétin! Ne parle pas aux gens en\n"
"les fixant!"
)
)

DEFINE_MESSAGE(0x7142, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ヒトと　話すときは\n"
SHIFT(30) "お面なんか　はずしとけ！\n"
SHIFT(60) "この　ドアホ！"
)
,
MSG(
"You idiot!\n"
"When you talk to someone, you\n"
"should take off your mask!"
)
,
MSG(
"Unverschämtes Balg! Wie läufst Du \n"
"überhaupt herum?! Dein Hemd ist \n"
"nicht gebügelt, Deine Schuhe sind\n"
"schmutzig und Du bist vorlaut!"
)
,
MSG(
"Crétinus!\n"
"Regarde-moi quand j'te parle!"
)
)

DEFINE_MESSAGE(0x7143, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "よくわかんないけど　とにかく\n"
SHIFT(60) "この　ドアホ！"
)
,
MSG(
"You idiot!\n"
"I don't know why I'm calling\n"
"you that, but...you are one!"
)
,
MSG(
"Äußerst interessant! Diese Maske\n"
"scheint eine Todesmaske des Zulu-\n"
"Kultes zu sein! Die Tiki-Priester\n"
"verwenden sie bei Ritualen..."
)
,
MSG(
"Bouffon!\n"
"Je ne sais pas pourquoi mais...\n"
"Bouffon!"
)
)

DEFINE_MESSAGE(0x7144, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "どこで　見つけたの？\n"
SHIFT(48) "その　ナベのフタ。\n"
SHIFT(57) "え？　お面なの？"
)
,
MSG(
"Where did you get that?\n"
"What?\n"
"It's a mask?"
)
,
MSG(
"Eine Maske! Aber keine \n"
"besonders hübsche..."
)
,
MSG(
"Mon dieu! Ton visage!\n"
"Il est tout...\n"
"Quoi? C'est un masque?\n"
QUICKTEXT_ENABLE "Sors de chez moi!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x7145, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ひとりに　しといてよ。\n"
SHIFT(21) "いま　ノッてるとこ　なんだ。"
)
,
MSG(
"Uh, leave me alone...\n"
"Can't you see I'm in a groove\n"
"right now?"
)
,
MSG(
"Nette Maske, leider habe ich keine\n"
"Zeit, sie mir näher anzuschauen."
)
,
MSG(
"Laisse-moi tranquille...\n"
"J'suis occupé."
)
)

DEFINE_MESSAGE(0x7146, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "楽器も　お面も\n"
SHIFT(12) "持つ者の個性が　でるんだよね。\n"
SHIFT(6) "ユニークなのは　いいことだよね？"
)
,
MSG(
"A mask is just like a musical \n"
"instrument--it reflects the\n"
"character of its owner. I like\n"
"your originality, kid!"
)
,
MSG(
"Eine Maske gleicht einem\n"
"Musikinstrument. Sie spiegelt den\n"
"Charakter ihres Besitzers wieder. \n"
"Ich mag das..."
)
,
MSG(
"Un masque est un instrument: \n"
"il reflète la personnalité... \n"
"J'aime ton style, petit!"
)
)

DEFINE_MESSAGE(0x7147, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "おおきいかおだね。\n"
SHIFT(33) "よく　ドア　くぐれたね。"
)
,
MSG(
"What a big head!\n"
"How'd you fit through that door?!"
)
,
MSG(
"Meine Güte, was für eine \n"
"Superrübe! Bleibst Du damit\n"
"nicht überall hängen?"
)
,
MSG(
"Quelle tête ENORME!\n"
"Comment as-tu pu entrer ici?!"
)
)

DEFINE_MESSAGE(0x7148, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "キツネは　キライじゃよ！"
)
,
MSG(
"I HATE foxes, sonny!"
)
,
MSG(
"Ist das eine Rattenmaske?!"
)
,
MSG(
"JE HAIS LES RENARDS!\n"
"Je les..... " QUICKTEXT_ENABLE "HAIS" QUICKTEXT_DISABLE "!"
)
)

DEFINE_MESSAGE(0x7149, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "うっとうしいカオしとるのお。"
)
,
MSG(
"Now if that isn't the most\n"
"irritating face I've seen in\n"
"all my days, I don't know what\n"
"is!"
)
,
MSG(
"Welch bezaubernde Schönheit!\n"
"Niemals blickte ich in ein\n"
"Antlitz, das anmutiger war..."
)
,
MSG(
"Alors ça...c'est bien la tête la\n"
"plus énervante de tous les temps!\n"
"Félicitations, petit!"
)
)

DEFINE_MESSAGE(0x714A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "なかなか　よいカオを　しとる。"
)
,
MSG(
"Hey, that's a fine face\n"
"you got there, sonny!"
)
,
MSG(
"Ich will Dir ja nicht zu nahe\n"
"treten... Aber Du siehst aus wie\n"
"ein Vollidiot!"
)
,
MSG(
"Whoa! Joli visage, petit!"
)
)

DEFINE_MESSAGE(0x714B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "なにか　フマンでも　あるのかい？"
)
,
MSG(
"Have you got any complaints?\n"
"Speak up, then!"
)
,
MSG(
"Cooles Outfit! Sind Deine Eltern \n"
"Zoras?"
)
,
MSG(
"Tu veux me parler?\n"
"Alors enlève ce truc!"
)
)

DEFINE_MESSAGE(0x714C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "おねがいです。\n"
SHIFT(21) "そんなことより　のろいを…"
)
,
MSG(
"Please quit playing around\n"
"and dispel our curse!"
)
,
MSG(
"Hör auf mit den Spielchen\n"
"und erlöse uns von dem Fluch!"
)
,
MSG(
"Heu...comment dire...\n"
"On n'a pas vraiment le temps de \n"
"jouer avec toi, petit!\n"
"SAUVE-NOUS!"
)
)

DEFINE_MESSAGE(0x714D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "わたしが　それを　かぶったら\n"
SHIFT(9) "本当に　スタルチュラ…　ヒイッ！"
)
,
MSG(
"If I wore something like that...\n"
"I'd be a real Skulltula...\n"
"AAAAAAAAAAH!"
)
,
MSG(
"Ein Schädel! Er erinnert mich an\n"
"den Fluch... Den Fluch der \n"
"Skulltulas!"
)
,
MSG(
"J'ai beau être un demi-monstre \n"
"mais... ton masque...comment dire...\n"
"YAAAAAAAAAAH!"
)
)

DEFINE_MESSAGE(0x714E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "わらえません…\n"
SHIFT(48) "のろわれてては…"
)
,
MSG(
"Please understand if I don't\n"
"laugh... It's hard to be happy\n"
"in this condition... \n"
"Being cursed and all..."
)
,
MSG(
"Verzeih mir, daß ich nicht lache,\n"
"aber ich wurde verflucht, und das\n"
"ist nicht sehr lustig..."
)
,
MSG(
"Excuse-moi si je n'explose pas de\n"
"rire mais...comment dire...\n"
"SAUVE-NOUS ! ! ! !"
)
)

DEFINE_MESSAGE(0x714F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_ST_DAMAGE) SHIFT(51) "ヒイイイイーッ！\n"
SHIFT(45) "コワいいいいいっ！\n"
SHIFT(9) "人のこと　いえないけど　コワい！"
)
,
MSG(
SFX(NA_SE_VO_ST_DAMAGE) "Hyaaaaah!\n"
"That's scary!\n"
"I know I'm scary, but...man!\n"
"That's really scary!"
)
,
MSG(
SFX(NA_SE_VO_ST_DAMAGE) "Whoa!\n"
"Das macht mir Angst!\n"
"Ich weiß, daß ich schon \n"
"furchteinflößend bin... Aber das..."
)
,
MSG(
SFX(NA_SE_VO_ST_DAMAGE) "WOUAAAAAAA!\n"
"Il est monstrueux ton masque!\n"
"Hein? Oui, je sais...merci...\n"
"Moi aussi j'suis un monstre!"
)
)

DEFINE_MESSAGE(0x7150, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "うわっ！"
BOX_BREAK

SHIFT(3) "なんだ、こどもか…　おどかすなよ！\n"
SHIFT(3) "こう　見えても　ナイーブなんだど。"
)
,
MSG(
"Huh?! Wha--!"
BOX_BREAK

"Oh, it's just a kid.\n"
"Don't scare me like that!\n"
"I may not look like it, but I'm a\n"
"very sensitive guy!"
)
,
MSG(
"Huch! Aaargh!"
BOX_BREAK

"Oh, es ist nur ein Kind! Du \n"
"darfst einen alten Mann doch \n"
"nicht so erschrecken!"
)
,
MSG(
"Gheu?! Quoi?!?"
BOX_BREAK

"Oh...c'est juste un gamin...\n"
"J'ai eu une de ces trouilles!\n"
"Ma face fait peur aux cafards\n"
"mais je suis super sensible!"
)
)

DEFINE_MESSAGE(0x7151, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "おまえ　でっかいカオだな〜。\n"
SHIFT(36) "オラも　でっかいけど。"
)
,
MSG(
"Well, will you lookit the noggin on \n"
"this kid! It's HUGE!\n"
"Mine is huge too, though..."
)
,
MSG(
"Wow, ein riesiger Schwellkopf! \n"
"Ich habe auch einen! Sind wir \n"
"verwandt?"
)
,
MSG(
"Nom d'un ver pourri...\n"
"Regardez-moi cette tête!\n"
"Hein? Quoi ma tête?"
)
)

DEFINE_MESSAGE(0x7152, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "おまえ　そのお面…\n"
SHIFT(18) "なんのお面か　知ってんのか？\n"
SHIFT(30) "知ってて　かぶってんの？"
BOX_BREAK

SHIFT(6) "これが　ほんとの「しったかぶり」。"
)
,
MSG(
"Do you know what kind of\n"
"mask you're wearing...?\n"
"And you're still wearing it?"
)
,
MSG(
"Weißt Du, was für eine Maske Du\n"
"trägst? Damit sollte man keine\n"
"Scherze treiben..."
)
,
MSG(
"Hé! Tu sais c'que tu portes, là?\n"
"Vraiment? Mais t'es tapé!"
)
)

DEFINE_MESSAGE(0x7153, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "お墓の　見回りで　いそがしいんだ。\n"
SHIFT(9) "穴ほらないなら　どいた　どいた。"
)
,
MSG(
"I'm on duty now... \n"
"If you want me to dig, don't\n"
"bother me."
)
,
MSG(
"Sorry, ich habe jetzt keine Zeit\n"
"für Dich, ich muß ein neues Grab\n"
"ausheben..."
)
,
MSG(
"Je bosse, là... \n"
"Si tu veux qu'je creuse,\n"
"laisse-moi tranquille."
)
)

DEFINE_MESSAGE(0x7154, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "なんでしゅか？　それ　ウサ…\n"
SHIFT(24) "なんとか　ゆーのでしゅね。\n"
SHIFT(15) "原っぱ　走る人が　スキなやつ。"
)
,
MSG(
"What is that? It's something\n"
"that hops around in a field...\n"
"I forgot what those things are\n"
"called..."
)
,
MSG(
"Was ist das denn? Das sieht\n"
"nicht besonders unheimlich aus...\n"
"Na ja, vielleicht unheimlich\n"
"bescheuert..."
)
,
MSG(
"C'est quoi ça? C'est pas un p'tit\n"
"truc tout mignon qui saute un peu\n"
"partout? Comment ça s'appelle?"
)
)

DEFINE_MESSAGE(0x7155, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "あ、キータンのお面でしゅ！\n"
"ぼくも　パパにおねがいしたでしゅ。"
)
,
MSG(
"Hey! It's a Keaton Mask!!\n"
"I asked my daddy to get me one,\n"
"too!"
)
,
MSG(
"Hey! Eine Fuchs-Maske! \n"
"Abgefahren! Mein Daddy wollte \n"
"mir so eine besorgen!"
)
,
MSG(
"Hé! C'est un masque du Renard!!\n"
"J'ai demandé à mon papa de m'en\n"
"acheter un!"
)
)

DEFINE_MESSAGE(0x7156, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "ちょっと　ダンペイしゃんと\n"
SHIFT(54) "ちがうでしゅ…"
)
,
MSG(
"That's not very different from\n"
"Mr. Dampé, is it?"
)
,
MSG(
"Du siehst aus wie\n"
"der Totengräber...\n"
"Das macht mir keine Angst!"
)
,
MSG(
"C'est Igor tout craché, hein?"
)
)

DEFINE_MESSAGE(0x7157, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "すごく　ダンペイしゃんと\n"
SHIFT(54) "ちがうでしゅ…"
)
,
MSG(
"That doesn't look anything like\n"
"Mr. Dampé, huh?"
)
,
MSG(
"Wow, cool! Richtig unheimlich!\n"
"Unheimlicher als Boris..."
)
,
MSG(
"Rien à voir avec Igor, hein?"
)
)

DEFINE_MESSAGE(0x7158, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(48) "あら、どうしたの？\n"
"いいお面だけど　ちょっとこわいネ。\n"
SHIFT(75) "ウフフ！"
)
,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) "Hey, cool mask...but a little\n"
"scary, don't you think?"
)
,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) "Eine nette Maske... Aber wir \n"
"Kokiri sind hübscher, oder?"
)
,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) "Cool comme masque mais...\n"
"Il est un p'tit peu trop effrayant!"
)
)

DEFINE_MESSAGE(0x7159, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"あ、それ…　どこかで　見たことある。\n"
SHIFT(45) "迷いの森？　ちがう？"
)
,
MSG(
"Hey! That looks familiar...\n"
"I think I saw something like it\n"
"in the Lost Woods, no?"
)
,
MSG(
"Hey! Das kenne ich...\n"
"So etwas habe ich kürzlich in\n"
"den Verlorenen Wäldern gesehen..."
)
,
MSG(
"Ce masque me dit quelque chose...\n"
"Je l'ai déjà vu dans la forêt, non?"
)
)

DEFINE_MESSAGE(0x715A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) SHIFT(6) "なんか　楽しい気分になるジャラ！"
BOX_BREAK

SHIFT(6) "あ、コキリなまりが　出ちゃった…"
)
,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) "That makes me feel...happy..."
)
,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) "Oh, wie goldig..."
)
,
MSG(
SFX(NA_SE_VO_RT_LAUGH_0) "Ce masque me rend...heureuse..."
)
)

DEFINE_MESSAGE(0x715B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "あ、なんだろ…　この感じ。\n"
SHIFT(6) "いま　かなしい…って感じがした。"
)
,
MSG(
"Oh...uh...sniff...\n"
"That mask...\n"
"It makes me feel...sad..."
)
,
MSG(
"Oh... Schnief... Heul...\n"
"Diese Maske...\n"
"Sie macht mir Angst..."
)
,
MSG(
"Oooh.....sniff...\n"
"Ce masque...me rend...\n"
"Si triiiiste! Bouhouuuuuu!"
)
)

DEFINE_MESSAGE(0x715C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "そんなもんで　へんそうしたって\n"
SHIFT(18) "オイラには　お見とーしだゼ！\n"
SHIFT(12) "このミドさまが　こわいんダロ！"
)
,
MSG(
"Hah! That mask won't do you any\n"
"good! You're just afraid of me,\n"
"the great Mido...aren't you?!"
)
,
MSG(
"Pah! Das beeindruckt mich nicht!\n"
"Sicher trägst Du sie nur, weil Du\n"
"vor mir, dem mächtigen Mido, \n"
"Angst hast..."
)
,
MSG(
"Ha! Tu portes un masque, hein?\n"
"Tu as donc peur de moi!Ha ha!"
)
)

DEFINE_MESSAGE(0x715D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "わ！　なんだよ！？\n"
SHIFT(24) "コワかねぇよ、ホントだゾ！\n"
SHIFT(51) "あっち　行けヨ！！"
)
,
MSG(
"Waaaaah! What?\n"
"Hey, I'm not scared of you!\n"
"Just don't come any closer,\n"
"understand?!"
)
,
MSG(
"Aaaargh! Was? Ach so...\n"
"Nein, ich habe keine Angst!\n"
"Aber komm bloß nicht näher,\n"
"hörst Du?!"
)
,
MSG(
"Yaaaaaaaaah! C'est quoi ça?\n"
"J'ai pas peur! J'ai pas peur!\n"
"Mais...ne t'approche pas de moi!\n"
"Compris?"
)
)

DEFINE_MESSAGE(0x715E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "…いいな　ソレ。"
BOX_BREAK

SHIFT(21) "ウ、ウソに　決まってるダロ！"
)
,
MSG(
"Hey, that's a cool mask.\n"
"I want it!\n"
"JUST KIDDING! Hah!\n"
"I don't want that stupid mask!"
)
,
MSG(
"Hey, coole Maske!\n"
"Ha! War nur Spaß!\n"
"Damit siehst Du noch dämlicher \n"
"aus als vorher!"
)
,
MSG(
"Whoa! Il est génial ton masque!\n"
"Tu veux bien être mon copain?\n"
"....Ha ha! Tu m'as cru, hein?\n"
"Pauv'nul, va! Ha ha ha ha ha!"
)
)

DEFINE_MESSAGE(0x715F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "ギャハハハハッ！\n"
SHIFT(30) "オマエに　おにあいだゼ！"
)
,
MSG(
"Wah hah ha hah!\n"
"That really suits you!"
)
,
MSG(
"Ach, unser Süßer! Das steht\n"
"Dir, Du solltest sie aufbehalten!"
)
,
MSG(
"Wah hah ha hah!\n"
"C'est ton portrait tout craché!"
)
)

DEFINE_MESSAGE(0x7160, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "なによーっ！\n"
SHIFT(18) "ミドに　言いつけてやるから！"
)
,
MSG(
"Waaaah!\n"
"I-I'm gonna tell Mido about \n"
"this!"
)
,
MSG(
"Hilfeeeeeeeeee!\n"
"Das... Das erzähle ich Mido!"
)
,
MSG(
"Yaaaaaah Waaaah! \n"
"J-Je vais le dire à Mido!"
)
)

DEFINE_MESSAGE(0x7161, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "なによーっ！\n"
"ミドに　やっつけてもらうんだから！"
)
,
MSG(
"Yeeeeah!\n"
"I-I'm gonna tell Mido to beat\n"
"you up!"
)
,
MSG(
"Iiiiihhhhhhhhh!\n"
"Wenn ich das Mido erzähle, \n"
"bekommst Du Ärger!"
)
,
MSG(
"Bwaaaaaaaahh!\n"
"J-Je vais dire à Mido de te \n"
"casser la figure!"
)
)

DEFINE_MESSAGE(0x7162, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "ヒッ！　森のオバケ！？"
)
,
MSG(
"Whooooah!\n"
"Are you some kind of forest\n"
"ghost?"
)
,
MSG(
"Aaaaaaaarggghhh!\n"
"Mir ist ein Waldgeist erschienen!"
)
,
MSG(
"Whooooah!\n"
"Es-tu un fantôme de la forêt?"
)
)

DEFINE_MESSAGE(0x7163, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "…カッコいいじゃん。"
BOX_BREAK

SHIFT(21) "ミドには　ないしょだけど…"
)
,
MSG(
"That's so cool!\n"
"Uh...don't tell Mido I said that!"
)
,
MSG(
"Wow! Ist die süß!\n"
"Äh... Sag Mido nicht, daß mir die \n"
"Maske gefällt!"
)
,
MSG(
"Gé-nial! Super ton masque!\n"
"Heu...ne répète pas à Mido que j'ai \n"
"dit ça, OK?"
)
)

DEFINE_MESSAGE(0x7164, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "あれ、かえってきたの？\n"
SHIFT(18) "お面かぶったって　わかるヨ。"
)
,
MSG(
"What?!\n"
"You came back!\n"
"I can tell who you are, even\n"
"with that mask on!"
)
,
MSG(
"Was?!\n"
"Du bist zurück!\n"
"Ich erkenne Dich, selbst wenn Du\n"
"diese Maske trägst!"
)
,
MSG(
"Hein?!\n"
"Tu es revenu!\n"
"Pas la peine de se cacher derrière\n"
"ce masque! Je t'ai reconnu!"
)
)

DEFINE_MESSAGE(0x7165, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "ミドが見たら　なんていうかナ？\n"
SHIFT(69) "見物だネ。"
)
,
MSG(
"I wonder what Mido would say if\n"
"he saw that?\n"
"I really would like to see his\n"
"reaction!"
)
,
MSG(
"Ich frage mich, wie Mido auf diese \n"
"Maske reagieren würde.\n"
"Das würde ich wirklich gerne \n"
"sehen!"
)
,
MSG(
"Je me demande quelle serait la \n"
"réaction de Mido en voyant ça..."
)
)

DEFINE_MESSAGE(0x7166, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ははぁ、さては　それで\n"
SHIFT(18) "ミドを　おどかすつもりだナ。"
)
,
MSG(
"I see...\n"
"You're going to scare Mido with\n"
"that mask, aren't you?!"
)
,
MSG(
"Ah, verstehe...\n"
"Du trägst diese Maske, um Mido\n"
"zu erschrecken, stimmt's?!"
)
,
MSG(
"Je vois...\n"
"Tu veux faire peur à Mido avec ce\n"
"masque, hein?"
)
)

DEFINE_MESSAGE(0x7167, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "ははは…　ヘンなかお！\n"
SHIFT(30) "サリアに　わらわれるぞ。"
)
,
MSG(
"Hah hah hah!\n"
"What a funny face!\n"
"I bet Saria would think it's\n"
"pretty funny, too!"
)
,
MSG(
"Hihi! Welch lustige Maske!\n"
"Obwohl, einem Mädchen würde sie\n"
"sicher besser stehen... Hehehe..."
)
,
MSG(
"Hah hah hah!\n"
"C'est trop drôle!\n"
"Saria va adorer ce masque!"
)
)

DEFINE_MESSAGE(0x7168, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "フフ…　木のお面なの？\n"
SHIFT(6) "なんか　「盾」かぶってるみたいネ。"
)
,
MSG(
"Tee hee hee!\n"
"A mask made of wood?\n"
"It looks like you're wearing\n"
"a shield on your face!"
)
,
MSG(
"Hihi!\n"
"Eine Holzmaske? Sieht aus, als\n"
"ob Du ein Brett vorm Kopf \n"
"hättest! Hihihi..."
)
,
MSG(
"Hi hi hi hi!!!\n"
"Un masque de bois?\n"
"C'est comme si tu portais un\n"
"bouclier sur la tête!"
)
)

DEFINE_MESSAGE(0x7169, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ヘンなかお！"
BOX_BREAK

SHIFT(24) "あ　そういえば、森のなかの\n"
SHIFT(21) "ヘンなオバケが　かおのこと\n"
SHIFT(51) "気にしてたわネ。"
)
,
MSG(
"What a weird face!"
BOX_BREAK

"Speaking of weird faces, one of\n"
"the forest kids was complaining\n"
"about his face..."
)
,
MSG(
"Welch häßliche Fratze!"
BOX_BREAK

"Und da beschweren sich manche \n"
"Kinder, daß sie nicht hübsch genug \n"
"seien..."
)
,
MSG(
"Quelle drôle de tête!"
BOX_BREAK

"Au fait... Un enfant de la forêt\n"
"se plaint de son visage toute la\n"
"journée..."
)
)

DEFINE_MESSAGE(0x716A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "おおきな　かおネ！"
)
,
MSG(
"What an enormous head you have!"
)
,
MSG(
"Hallo Kartoffelkopf! Hihihi..."
)
,
MSG(
"Quelle ENORME tête!"
)
)

DEFINE_MESSAGE(0x716B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "フフッ！\n"
SHIFT(42) "どこで　見つけたの？\n"
SHIFT(45) "森の外？　うそだぁ！"
)
,
MSG(
"Tee hee!\n"
"Where did you get that?\n"
"Outside the forest?\n"
"No way! I don't believe it!"
)
,
MSG(
"Hey! Wo hast Du das denn her?\n"
"Von außerhalb des Waldes!\n"
"Wow! Das ist unglaublich!"
)
,
MSG(
"Hi hi!\n"
"Où l'as-tu trouvé?\n"
"En dehors de la forêt?\n"
"Impossible! Je ne te crois pas!"
)
)

DEFINE_MESSAGE(0x716C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "ヒヒ…　ちょっと\n"
SHIFT(18) "フィーリングが　あわないね。"
)
,
MSG(
"Hee hee!\n"
"Kind of funny, but it's not\n"
"really my style..."
)
,
MSG(
"Witzig, aber nicht ganz mein \n"
"Fall..."
)
,
MSG(
"Ha ha!\n"
"C'est rigolo mais...ce n'est pas\n"
"vraiment mon style..."
)
)

DEFINE_MESSAGE(0x716D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "なんか　ツヨくなった気が　する。\n"
SHIFT(75) "ヒヒッ！"
)
,
MSG(
"Right on! \n"
"Wearing this mask makes me feel\n"
"really tough and scary!\n"
"Hee hee!"
)
,
MSG(
"Cool! Diese Maske sieht so \n"
"richtig unheimlich und diabolisch \n"
"aus! Groovy!"
)
,
MSG(
"Cool! \n"
"Porter ce masque me donne\n"
"l'impression d'être un vrai dur!\n"
"Hé hé!"
)
)

DEFINE_MESSAGE(0x716E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "ヒヒッ！\n"
SHIFT(6) "世の中には　いろんな人がいるね。\n"
SHIFT(75) "ヒヒッ！"
)
,
MSG(
"Hee hee!\n"
"There sure are a lot of different\n"
"people in the world!"
)
,
MSG(
"Oh Mann! Hier laufen manchmal\n"
"Spinner herum..."
)
,
MSG(
"Hé hé! \n"
"Cool ton masque mais...bon."
)
)

DEFINE_MESSAGE(0x716F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(75) "ヒヒッ！\n"
SHIFT(48) "もう　いらないよ。\n"
SHIFT(18) "このかお　気に入ってるんだ。"
)
,
MSG(
"Hee hee!\n"
"I don't need a new one...\n"
"I like the one I have, thanks!"
)
,
MSG(
"Danke, aber ich brauche nicht\n"
"noch eine... Meine gefällt mir ganz\n"
"gut..."
)
,
MSG(
"Hé hé!\n"
"J'ai mon masque maintenant...\n"
"Les autres ne m'intéressent pas..."
)
)

DEFINE_MESSAGE(0x7170, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_Z0_SMILE_0) SHIFT(33) "あら、おおきな　お顔ね。\n"
SHIFT(75) "ウフフ。"
)
,
MSG(
SFX(NA_SE_VO_Z0_SMILE_0) "Wow, that makes your head\n"
"look huge!\n"
"Hee hee!"
)
,
MSG(
SFX(NA_SE_VO_Z0_SMILE_0) "Du machst mir Angst! Willst \n"
"Du das?"
)
,
MSG(
SFX(NA_SE_VO_Z0_SMILE_0) "Woah! Tu as une ENORME tête!"
)
)

DEFINE_MESSAGE(0x7171, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_Z0_QUESTION) SHIFT(48) "あら、ネズミさん？\n"
SHIFT(45) "え？　ちがいますの？"
)
,
MSG(
SFX(NA_SE_VO_Z0_QUESTION) "What a cute little mouse!\n"
"What?\n"
"Oh, it's not a mouse?"
)
,
MSG(
SFX(NA_SE_VO_Z0_QUESTION) "Was bist Du denn? Ach, Du bist \n"
"eines dieser goldigen kleinen \n"
"Taschenmonster, oder?"
)
,
MSG(
SFX(NA_SE_VO_Z0_QUESTION) "Oh! Le mignon petit rat!\n"
"Quoi?\n"
"C'est pas un rat? Tu rigoles?"
)
)

DEFINE_MESSAGE(0x7172, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_Z0_SIGH_0) SHIFT(21) "その　ふるふるしているのは\n"
SHIFT(51) "なんですか？　耳？\n"
SHIFT(33) "あなた　４つも　あるの？"
)
,
MSG(
SFX(NA_SE_VO_Z0_SIGH_0) "What are those floppy things\n"
"on your head?\n"
"Ears? That mask makes you look\n"
"like you have four ears!"
)
,
MSG(
SFX(NA_SE_VO_Z0_SIGH_0) "Wie goldig, ein Häschen!\n"
"Hast Du denn auch ein \n"
"Stummelschwänzchen?"
)
,
MSG(
SFX(NA_SE_VO_Z0_SIGH_0) "C'est quoi ces trucs mous\n"
"au-dessus de ta p'tite tête?\n"
"Des oreilles? T'en as quatre?"
)
)

DEFINE_MESSAGE(0x7173, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SFX(NA_SE_VO_Z0_HURRY) SHIFT(36) "こわい…　でしょうね、\n"
SHIFT(42) "その　お面を　つけて\n"
SHIFT(27) "兵士の前を　あるくのは…"
)
,
MSG(
SFX(NA_SE_VO_Z0_HURRY) "It must be exciting to sneak\n"
"past the guards while wearing\n"
"that mask!"
)
,
MSG(
SFX(NA_SE_VO_Z0_HURRY) "Irgendwie erinnerst Du mich \n"
"an meine Großmutter..."
)
,
MSG(
SFX(NA_SE_VO_Z0_HURRY) "Tu as réussi à éviter les gardes\n"
"avec ça sur la tête?"
)
)

DEFINE_MESSAGE(0x7174, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "あ、妖精クン。\n"
SHIFT(33) "え？　へんそうしてたの？\n"
SHIFT(39) "バレバレよ。　フフフ！"
)
,
MSG(
"Hi, fairy boy!\n"
"What?\n"
"You think you're in disguise?\n"
"But it's so obvious who you are!"
)
,
MSG(
"Hi Feen-Junge! Ach so, Du bist \n"
"verkleidet, ich darf Dich nicht \n"
"erkennen! Na gut... Huch, wer bist\n"
"Du denn?!"
)
,
MSG(
"Bonjour gentil garçon à la fée!\n"
"...Pardon?\n"
"Mais bien sûr que je t'ai reconnu!"
)
)

DEFINE_MESSAGE(0x7175, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "へーっ　おっきな　おめめ！\n"
SHIFT(24) "ゴロンって　カワイイのね。"
)
,
MSG(
"Wow!\n"
"What big eyes you have!\n"
"Gorons are so cute, aren't they!"
)
,
MSG(
"Wow! Du hast aber große Augen! \n"
"Aber... wo sind Deine Ohren?"
)
,
MSG(
"Whoa!\n"
"Quels énormes yeux!\n"
"Les Gorons sont siiiii mignons!"
)
)

DEFINE_MESSAGE(0x7176, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "あ、それ　知ってるよ！\n"
SHIFT(51) "キータンでしょ？\n"
"ハイラルで　だいにんき…なのよね？"
)
,
MSG(
"Oh, I know that character!\n"
"It's Keaton!\n"
"He's very hot in Hyrule Castle\n"
"Town right now!"
)
,
MSG(
"Oh, dieses Gesicht kenne ich\n"
"doch! Bist Du Fox McCloud?\n"
"Ich habe schon viel von Dir\n"
"gehört!"
)
,
MSG(
"Oh! Je te reconnais! tu es le\n"
"Renard! Bonjour le Renard!\n"
"Tu es très à la mode, tu sais!"
)
)

DEFINE_MESSAGE(0x7177, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "ふ〜ん　オトコのコって\n"
SHIFT(30) "そーゆーの　スキだよね。"
)
,
MSG(
"Oh, brother!\n"
"Boys will be boys!"
)
,
MSG(
"Hallo Bruder!\n"
"Schönes Wetter heute, oder?!"
)
,
MSG(
"Les garçons...tous les mêmes!"
)
)

DEFINE_MESSAGE(0x7178, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "オラ　知ってるだーよ。\n"
SHIFT(30) "キントンの　お面だーよ。\n"
SHIFT(78) "な、な！"
)
,
MSG(
"Wait...wait...\n"
"I know who ya are...\n"
"Yer... Kin-ton!\n"
"Ain't that right?!"
)
,
MSG(
"Moment... Ich kenne Dich...\n"
"Du bist... Kaputchi... Nein...\n"
"Aber so ähnlich klang doch\n"
"Dein Name, oder..."
)
,
MSG(
"Attends...attends...\n"
"Je sais qui tu es...\n"
"Tu es...le Renard, non?\n"
"Woah! J'suis trop fort!"
)
)

DEFINE_MESSAGE(0x7179, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(36) "なんか　コワいだーよ。\n"
SHIFT(18) "インゴーと　いい勝負だーよ。"
)
,
MSG(
"That's a scary one, ain't it?\n"
"Almost as scary as...Ingo!"
)
,
MSG(
"Uh... Wie häßlich! Genauso häßlich\n"
"wie Basil!"
)
,
MSG(
"Whoa!... Il est moche ton masque!\n"
"Presque aussi moche que...Ingo!"
)
)

DEFINE_MESSAGE(0x717A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "あ、ちょっと\n"
SHIFT(33) "かーちゃんに　にてる…\n"
SHIFT(6) "こともない…　こともないだーよ。"
)
,
MSG(
"Hey, that reminds me of my wife...\n"
"On second thought, it doesn't...\n"
"It doesn't look like her at all!"
)
,
MSG(
"Hey, sieht aus wie meine Frau...\n"
"Ähem, ich meine, nein, eigentlich...\n"
"Nein, niemals..."
)
,
MSG(
"Tu me rappelles ma femme...\n"
"Attends...finalement non.\n"
"Tu ne lui ressembles pas du tout!"
)
)

DEFINE_MESSAGE(0x717B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "オラ、ねむいだーよ。\n"
SHIFT(3) "また　こんど　見せてもらうだーよ。"
)
,
MSG(
"YAAAWWN...\n"
"I'm kinda tired right now...\n"
"Show it to me later..."
)
,
MSG(
"Gähn...\n"
"Ich bin ziemlich müde...\n"
"Zeig mir das Ding später..."
)
,
MSG(
"(Baille)...\n"
"J'suis un peu naze...\n"
"Tu me le montreras plus tard..."
)
)

DEFINE_MESSAGE(0x717C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "あ〜　この　クソいそがしいのに\n"
SHIFT(18) "オレを　呼びとめんじゃねぇ！"
)
,
MSG(
"Scram, kid!\n"
"Can't you see I'm busy?!"
)
,
MSG(
"Verschwinde!\n"
"Ich bin beschäftigt!"
)
,
MSG(
"Hors de ma vue!\n"
"Tu vois pas que j'travaille?!"
)
)

DEFINE_MESSAGE(0x717D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(81) "ふん！\n"
SHIFT(9) "ガキは　そーやって　アソんでな！\n"
SHIFT(12) "アソんでられるのは　今の内だ。"
)
,
MSG(
"Humph!\n"
"It's fine to play like that when \n"
"you're a kid, but just wait until\n"
"you grow up! Work, work, work!"
)
,
MSG(
"Tja! Das macht Spaß! Genieße \n"
"Deine Jugend... Später, wenn Du \n"
"erwachsen bist, zählt nur noch die \n"
"Arbeit!"
)
,
MSG(
"Très drôle... Tu verras plus tard!\n"
"La vie active n'est pas aussi \n"
"marrante que ça!"
)
)

DEFINE_MESSAGE(0x717E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(81) "ゲ…！"
BOX_BREAK

SHIFT(30) "なんだ　お面じゃねぇか！\n"
SHIFT(63) "行っちまえ！"
)
,
MSG(
"YEOW!\n"
"Humph. It's just a mask...\n"
"Scram, kid! Get out of here!"
)
,
MSG(
"HUCH!\n"
"Puh, nur eine Maske...\n"
"Verschwinde hier, Kleiner!"
)
,
MSG(
"YAAAAAAAH!\n"
"Heu? C'est juste un masque...\n"
"OK. Bonne blague. Super. Dégage."
)
)

DEFINE_MESSAGE(0x717F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) "ヘヘヘ…\n"
SHIFT(9) "なんか　すこし　ゆかいな気分だ。\n"
SHIFT(63) "ありがとよ。"
)
,
MSG(
"Heh heh heh...\n"
"Well, that cheered me up a little,\n"
"kid.\n"
"Thanks!"
)
,
MSG(
"Hey, wie lustig!\n"
"Das hat mich ein wenig \n"
"aufgeheitert! Danke, Kleiner!"
)
,
MSG(
"Hé hé hé...\n"
"Un petit rayon de soleil dans ma\n"
"journée... Merci mon garçon!"
)
)

DEFINE_MESSAGE(0x7180, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "フム、これは　カンオケの板で\n"
SHIFT(45) "つくられておるな。"
)
,
MSG(
"Hmmm... Let's see...\n"
"Yes, I'm quite sure of it...\n"
"That was manufactured from a \n"
"plank from a coffin. Yes, it was!"
)
,
MSG(
"Hmmm, laß mal schauen...\n"
"In der Tat... Die Maske wurde aus\n"
"einem alten Sargdeckel gefertigt...\n"
"Ein Relikt aus dem Totenreich!"
)
,
MSG(
"Mmmm... Voyons un peu ceci...\n"
"Du bel ouvrage! Du bois de\n"
"premier choix! Gni gni...."
)
)

DEFINE_MESSAGE(0x7181, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "お、なかなかの造形。\n"
SHIFT(27) "じゃが、材質が　イマイチ。\n"
SHIFT(30) "残念ながら　使えんのぉ。"
)
,
MSG(
"Ahhh...yes. Let's see...\n"
"Very fine craftsmanship.\n"
"But I don't think it would make\n"
"a good ingredient for my medicine."
)
,
MSG(
"Ah, eine Schädelmaske...\n"
"Sehr interessant... Es ist ein\n"
"echter Schädel, es kleben noch\n"
"ein paar Würmer und Maden daran!"
)
,
MSG(
"Ahhh...oui! En effet...\n"
"Un travail impeccable...\n"
"L'auteur de ce masque est un \n"
"véritable chef."
)
)

DEFINE_MESSAGE(0x7182, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "ゴロンか…\n"
SHIFT(3) "そういえば　デスマウンテンにすむ\n"
"ダイゴロンは　どうしておるかのぉ。"
)
,
MSG(
"Very interesting! A Goron!\n"
"Speaking of Gorons, I wonder\n"
"how my old friend, Biggoron of\n"
"Death Mountain, is doing?"
)
,
MSG(
"Zeig mal her... Ja, sehr gute\n"
"Handarbeit... Dies ändert jedoch\n"
"nichts an der Tatsache, daß Du \n"
"damit ziemlich dämlich aussiehst!"
)
,
MSG(
"Oh! Un joli Goron!\n"
"A propos...Je me demande comment \n"
"se porte mon vieil ami Biggoron du\n"
"Mont du Péril."
)
)

DEFINE_MESSAGE(0x7183, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "この材質は　水に　溶けん。\n"
SHIFT(12) "クスリの材料には　ならんのお。"
)
,
MSG(
"Very unusual construction...\n"
"I don't think it's water soluble,\n"
"so it wouldn't make a good \n"
"ingredient for my medicines..."
)
,
MSG(
"Laß mal sehen... Aha... Sehr \n"
"interessant. So was hab ich schon \n"
"einmal gesehen... Ich glaube, es \n"
"war in einem Nachtclub..."
)
,
MSG(
"Etrange...\n"
"Il ne doit pas être soluble."
)
)

DEFINE_MESSAGE(0x7184, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ポリ　ポリ…\n"
SHIFT(45) "で、買うの？　マメ…"
)
,
MSG(
"Chomp chomp chomp...\n"
"OK, OK, a mask.\n"
"Do you want to buy some beans?"
)
,
MSG(
"Mampf... Mampf...\n"
"Oh, eine Maske, cool...\n"
"Willst Du nicht ein paar Bohnen \n"
"kaufen?"
)
,
MSG(
"Miam miam miam...\n"
"Cool. Un masque. Youpi.\n"
"Tu veux m'acheter des haricots?"
)
)

DEFINE_MESSAGE(0x7185, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ポリ　ポリ…\n"
SHIFT(69) "買わない。"
)
,
MSG(
"Chomp chomp chomp...\n"
"Nope, I don't want to buy it."
)
,
MSG(
"Mampf... Rülps...\n"
"Schön, aber ich habe keine\n"
"Verwendung dafür..."
)
,
MSG(
"Miam miam miam...\n"
"J'en veux pas de ton masque."
)
)

DEFINE_MESSAGE(0x7186, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ポリ　ポリ…\n"
SHIFT(51) "シュミじゃない。"
)
,
MSG(
"Chomp chomp chomp...\n"
"Nope, it's not my style."
)
,
MSG(
"Mampf... Börps...\n"
"Danke, aber die paßt nicht\n"
"zu meinem Wohnzimmerschrank."
)
,
MSG(
"Miam miam miam...\n"
"Ce n'est pas vraiment mon style..."
)
)

DEFINE_MESSAGE(0x7187, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ポリ　ポリ…\n"
SHIFT(42) "やっぱり　いらない。"
)
,
MSG(
"Chomp chomp chomp...\n"
"Well...no, I don't think I \n"
"want it."
)
,
MSG(
"Mampf... Börps...\n"
"Danke, aber Masken mag ich nicht\n"
"besonders..."
)
,
MSG(
"Miam miam miam...\n"
"Heu...non. J'en veux pas."
)
)

DEFINE_MESSAGE(0x7188, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "で、なにか用？"
)
,
MSG(
"What do you want?"
)
,
MSG(
"Was ist Euer Begehr?"
)
,
MSG(
"Que veux-tu?"
)
)

DEFINE_MESSAGE(0x7189, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "およげそうもない顔だな。"
)
,
MSG(
"You don't look like you can\n"
"swim very well..."
)
,
MSG(
"Ihr scheint kein Wasserwesen zu \n"
"sein..."
)
,
MSG(
"Tu n'as pas l'air d'être un bon\n"
"nageur..."
)
)

DEFINE_MESSAGE(0x718A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "赤毛のかみに　かっ色のはだ…\n"
"あの時の奴らも　そんな顔をしてた。"
)
,
MSG(
"Red hair...tan skin...\n"
"I've seen people like that before..."
)
,
MSG(
"Ihr wirkt sehr exotisch, woher\n"
"kommt Ihr?"
)
,
MSG(
"Cheveux rouges...peau mate...\n"
"Cela me rappelle quelque chose..."
)
)

DEFINE_MESSAGE(0x718B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "おお、同志。\n"
SHIFT(36) "ずいぶん　ちいさいな。"
)
,
MSG(
"Yeah, right.\n"
"You look a little small for a\n"
"Zora..."
)
,
MSG(
"Ihr mögt das Antlitz der Zoras\n"
"besitzen, doch Eure Statur gleicht \n"
"der eines Gartenzwerges..."
)
,
MSG(
"Hé hé hé!\n"
"Tu es trop petit pour être un\n"
"Zora..."
)
)

DEFINE_MESSAGE(0x718C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(39) "フォッ　フォッ　フォ！\n"
SHIFT(18) "人間は　面白いことするゾラ。"
)
,
MSG(
"Ho ho ho!\n"
"You Hylians...you are such silly\n"
"creatures!"
)
,
MSG(
"Was?! Ersucht da ein niederes \n"
"Getier bei mir Audienz?"
)
,
MSG(
"Ho ho ho!\n"
"Tu Nous fais bien rire!"
)
)

DEFINE_MESSAGE(0x718D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "なにか　寒気がする顔ゾラ。"
)
,
MSG(
"That face...it gives me the chills..."
)
,
MSG(
"Diese Fratze... Gar schrecklich!\n"
"Zu Hilfe!"
)
,
MSG(
"Ce visage...il Nous fait peur!"
)
)

DEFINE_MESSAGE(0x718E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "フム、なつかしい。\n"
SHIFT(15) "おさななじみの　ダイゴロンを\n"
SHIFT(57) "思い出すゾラ。"
)
,
MSG(
"Talk about a nostalgia trip!\n"
"That reminds me of my childhood\n"
"friend, Biggoron!"
)
,
MSG(
"Diese Maske... Sie erinnert mich\n"
"an einen alten Freund.\n"
"Sein werter Name ist Biggoron!"
)
,
MSG(
"Cela Nous rappelle notre vieil ami\n"
"d'enfance: le joyeux Biggoron!"
)
)

DEFINE_MESSAGE(0x718F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "ちょっと　わらえないゾラ。\n"
SHIFT(30) "余を　バカにするゾラか？"
)
,
MSG(
"I don't think that's funny at all.\n"
"Are you mocking me?"
)
,
MSG(
"Wer wagt es, das edle hylianische \n"
"Zora-Geschlecht der Lächerlichkeit \n"
"preiszugeben?"
)
,
MSG(
"Te paies-tu Notre tête?"
)
)

DEFINE_MESSAGE(0x7190, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "そなた、ユーモアが　あるな…"
)
,
MSG(
"You're a funny guy!"
)
,
MSG(
"Hihi! Du bist süß... Zum Anbeißen!"
)
,
MSG(
"T'es rigolo, toi!"
)
)

DEFINE_MESSAGE(0x7191, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "そなた、でっかいかおじゃな…"
)
,
MSG(
"Your head--it's gigantic!"
)
,
MSG(
"Das sieht lustig aus!"
)
,
MSG(
"Ta tête... Elle est ENORME!"
)
)

DEFINE_MESSAGE(0x7192, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(69) "よさぬか！\n"
SHIFT(60) "テレるゾラ…"
)
,
MSG(
"Don't do that...\n"
"It's embarrassing me!"
)
,
MSG(
"Laß das, so etwas trägt kein \n"
"Mann!"
)
,
MSG(
"Arrête ça tout de suite...\n"
"Tu me perturbes..."
)
)

DEFINE_MESSAGE(0x7193, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "おお！　わらわとの　けっこんを\n"
SHIFT(6) "ホンキで　かんがえてくれるのか？\n"
"ゾーラになると　けっしんしたのか？"
)
,
MSG(
"All right! You actually decided\n"
"to become a Zora!\n"
"Are you actually ready to marry\n"
"me now?"
)
,
MSG(
"Wie ich sehe, hast Du Dich \n"
"entschloßen, ein Zora zu werden!\n"
"Nun steht unserer Heirat nichts\n"
"mehr im Wege!"
)
,
MSG(
"Génial! Tu as enfin décidé de\n"
"devenir un Zora et de m'épouser?"
)
)

DEFINE_MESSAGE(0x7194, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(3) "お…　ちょっと　ドキドキしたゴロ。"
)
,
MSG(
"WHOA!\n"
"My heart...started to beat \n"
"so fast!"
)
,
MSG(
"WHOA!\n"
"Mein Herz! Welch ein Schock!"
)
,
MSG(
"WHOA!\n"
"Mon coeur s'est mis à battre \n"
"très vite!"
)
)

DEFINE_MESSAGE(0x7195, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "イヤな感じゴロ。　さよならゴロ。"
)
,
MSG(
"That's an unpleasant mask...\n"
"Good-bye."
)
,
MSG(
"Das sieht nicht nett aus...\n"
"Tschüß..."
)
,
MSG(
"Ce masque me dérange...\n"
"Au revoir."
)
)

DEFINE_MESSAGE(0x7196, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "う〜んゴロ。\n"
SHIFT(36) "なんていっていいか…\n"
SHIFT(51) "わかんないゴロ。"
)
,
MSG(
"Hrrrrm...\n"
"I don't know what to say."
)
,
MSG(
"Hm...\n"
"Bist Du ein Travestie-Künstler?"
)
,
MSG(
"Mmmmmmm...\n"
"Je ne sais pas quoi te dire."
)
)

DEFINE_MESSAGE(0x7197, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(21) "オマエ　すききらいしないで\n"
SHIFT(24) "カタい岩も　たべてるゴロ？\n"
"たべないと　大きくなれないゴロよ。"
)
,
MSG(
"You shouldn't be so picky about\n"
"what you eat! Do you eat all your\n"
"green rocks? If you don't, you \n"
"won't grow up big and strong!"
)
,
MSG(
"Du solltest mehr Steine fressen!\n"
"Wenn nicht, wirst Du immer so \n"
"mickrig bleiben!"
)
,
MSG(
"Mange bien tous tes cailloux et\n"
"tu deviendras gros et fort \n"
"comme moi!"
)
)

DEFINE_MESSAGE(0x7198, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "あっちいけゴロ！"
)
,
MSG(
"Leave me alone!"
)
,
MSG(
"Laß mich allein!"
)
,
MSG(
"Tu vas m'lâcher les bottes, ouais?"
)
)

DEFINE_MESSAGE(0x7199, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(12) "笑わそうったって　ダメゴロよ。"
)
,
MSG(
"Are you trying to make me laugh?\n"
"Well, that's not that funny..."
)
,
MSG(
"Willst Du mich zum Lachen bringen?\n"
"Vergiß es! Das ist nicht lustig."
)
,
MSG(
"Tu cherches à me faire rire?\n"
"Bah c'est raté!"
)
)

DEFINE_MESSAGE(0x719A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "オレ、怒るゴロよ！"
)
,
MSG(
"You're making me mad!"
)
,
MSG(
"Ich habe schon mehr gelacht..."
)
,
MSG(
"Tu m'énerves. \n"
"File avant que j'te brise!"
)
)

DEFINE_MESSAGE(0x719B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(18) "ゲルドなんて　きらいだゴロ！"
)
,
MSG(
"I hate Gerudos!!"
)
,
MSG(
"Ich mag keine Gerudos!"
)
,
MSG(
"JE HAIS LES GERUDOS!!"
)
)

DEFINE_MESSAGE(0x719C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(57) "うるさいねぇ。\n"
SHIFT(54) "あっち　行きナ！"
)
,
MSG(
"Quit pestering me!\n"
"Go away!"
)
,
MSG(
"Stör mich nicht!\n"
"Verschwinde!"
)
,
MSG(
"Ouste. Du balai!"
)
)

DEFINE_MESSAGE(0x719D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ハッハッハ！\n"
SHIFT(18) "それでも　変装のつもりかい？\n"
SHIFT(63) "お笑いだね！"
)
,
MSG(
"Wah hah hah!\n"
"Do you think you're in disguise?\n"
"How funny!"
)
,
MSG(
"Glaubst Du wirklich, daß Du\n"
"verkleidet bist?"
)
,
MSG(
"Wah hah hah!\n"
"Alors comme ça on s'déguise?\n"
"T'es un marrant, toi!"
)
)

DEFINE_MESSAGE(0x719E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "じゃま、じゃま！\n"
SHIFT(6) "イタイ目に　あわされたいのかい？"
)
,
MSG(
"Out of my way!\n"
"Get out of here!\n"
"You're asking for it, aren't you?"
)
,
MSG(
"Aus dem Weg!\n"
"Verschwinde! Dies ist kein\n"
"Kinderspielplatz!"
)
,
MSG(
"Tu vas m'laisser tranquille, oui?\n"
"Tu m'cherches?"
)
)

DEFINE_MESSAGE(0x719F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "ぼうや、いい度胸じゃないか…\n"
SHIFT(12) "あたいらを　バカにするなんて！"
)
,
MSG(
"Hey, kid, you've got guts coming\n"
"around here wearing that!\n"
"Still, you can't fool us that\n"
"easily!"
)
,
MSG(
"Du scheinst Mut zu haben, Dich\n"
"in diese Gegend zu wagen!\n"
"Glaub bloß nicht, daß Du uns \n"
"täuschen kannst!"
)
,
MSG(
"Tu as du courage de porter ça...\n"
"Mais ton p'tit jeu ne prend pas!"
)
)

DEFINE_MESSAGE(0x71A0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) "なんだい、それ？\n"
SHIFT(24) "アタイに　関係あるのかい？"
)
,
MSG(
"What is that?\n"
"What does it have to do with\n"
"us?"
)
,
MSG(
"Was soll das?\n"
"Willst Du mich zum Narren\n"
"halten?"
)
,
MSG(
"C'est quoi ça?\n"
"Quel rapport avec notre histoire?"
)
)

DEFINE_MESSAGE(0x71A1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "ハッハッハ！\n"
SHIFT(15) "あんた　余裕だね、気に入った！"
)
,
MSG(
"Ha ha hah!\n"
"You've got guts to spare, don't\n"
"you kid? \n"
"I like you!"
)
,
MSG(
"Du bist sehr mutig, Dich mit \n"
"dieser Maske in unsere Gegend\n"
"zu wagen! Du gefällst mir!"
)
,
MSG(
"Ha ha hah!\n"
"Tu as du courage, toi!\n"
"J't'aime bien, petit!"
)
)

DEFINE_MESSAGE(0x71A2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(15) "そろそろ、マジメに　いこうぜ。\n"
SHIFT(66) "な、ぼうや。"
)
,
MSG(
"C'mon! It's time to get serious!"
)
,
MSG(
"Das sind Spiele aus dem \n"
"Kindergarten! Werde erwachsen!"
)
,
MSG(
"On arrête de jouer une seconde?"
)
)

DEFINE_MESSAGE(0x71A3, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "ヘンなお面だね。\n"
SHIFT(9) "アタイに　似てなくもないけど…\n"
SHIFT(36) "やっぱり　似てないね。"
)
,
MSG(
"That's odd...it kind of looks like\n"
"me...\n"
"No...not really.  Not at all,\n"
"if you look at it closely."
)
,
MSG(
"Nanu? Du... Du siehst aus wie ich!\n"
"Nein, ich bin hübscher. Und vor \n"
"allem nicht so klein..."
)
,
MSG(
"Etrange...ça me ressemble...\n"
"En fait...pas du tout!\n"
"Je suis plus belle que ça!"
)
)

DEFINE_MESSAGE(0x71A4, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(27) "ちょっと　ちがうんだが…\n"
SHIFT(6) "そんなので、こう…　耳が…　こう。"
)
,
MSG(
"Hmm. No, no, no!\n"
"The ears aren't right at all!\n"
"They should be, you know, longer!"
)
,
MSG(
"Nein, nein!\n"
"Die Ohren sind etwas zu klein!\n"
"Sie sollten eher so aussehen!"
)
,
MSG(
"Non! Ces oreilles sont nulles!\n"
"Je veux des oreilles un peu plus...\n"
"Enfin un peu moins...\n"
"Tu vois, quoi!"
)
)

DEFINE_MESSAGE(0x71A5, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "こわくないのか？\n"
SHIFT(9) "こんな　夜中に　そんなカッコで。"
)
,
MSG(
"Aren't you kind of scared, \n"
"walking around in the middle of\n"
"the night looking like that?"
)
,
MSG(
"Hast Du denn keine Angst, des \n"
"Nachts hier herumzulaufen? Noch \n"
"dazu mit einer Maske wie dieser?"
)
,
MSG(
"Tu te balades avec ça sur la\n"
"tête en pleine nuit? \n"
"T'as peur de rien, toi!"
)
)

DEFINE_MESSAGE(0x71A6, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ハハ。　キミも　スキだね。"
)
,
MSG(
"Ha ha hah!\n"
"You really like those things,\n"
"don't you?!"
)
,
MSG(
"Du scheinst ja ein richtiger \n"
"Maskensammler zu sein!"
)
,
MSG(
"Ha ha hah!\n"
"Tu t'amuses bien?!"
)
)

DEFINE_MESSAGE(0x71A7, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
"そんな顔した石を　見たことあるな。\n"
SHIFT(60) "どこだっけ…"
)
,
MSG(
"I think I've seen a stone that\n"
"looks like that somewhere...\n"
"Now where was that?\n"
"Hmmmm...."
)
,
MSG(
"Ich erinnere mich, irgendwo einen\n"
"Stein gesehen zu haben, der \n"
"ähnlich aussah..."
)
,
MSG(
"Un rocher ressemble à ça quelque\n"
"part...mais où?"
)
)

DEFINE_MESSAGE(0x71A8, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "急いで　" NAME "！\n"
SHIFT(24) "もうすぐ　塔が崩れるわ！"
)
,
MSG(
"Hurry up, " NAME "!\n"
"Any second now, the tower is \n"
"going to collapse!!"
)
,
MSG(
"Beeil Dich, " NAME "!\n"
"Der Teufelsturm kann jede \n"
"Sekunde einstürzen!"
)
,
MSG(
"Vite, " NAME "!\n"
"La tour va s'effondrer!!"
)
)

DEFINE_MESSAGE(0x71A9, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(30) "ガレキが　ふってくるわ！\n"
SHIFT(63) "気をつけて！"
)
,
MSG(
"Watch out for falling rubble!"
)
,
MSG(
"Achtung! Von überall her stürzen \n"
"Trümmer herab!"
)
,
MSG(
"Attention aux chutes de pierres!"
)
)

DEFINE_MESSAGE(0x71AA, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(45) NAME "！\n"
SHIFT(45) "たすけてぇ〜っ！"
)
,
MSG(
NAME "!\n"
"Help me!"
)
,
MSG(
NAME "!\n"
"Hilf mir!"
)
,
MSG(
NAME "!\n"
"Au secours!"
)
)

DEFINE_MESSAGE(0x71AB, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) NAME "！\n"
SHIFT(42) "出口は　もうすぐよ！"
)
,
MSG(
NAME "!\n"
"The exit is just over there!"
)
,
MSG(
NAME "!\n"
"Der Ausgang ist hier drüben!"
)
,
MSG(
NAME "!\n"
"La sortie est par là!"
)
)

DEFINE_MESSAGE(0x71AC, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) "ありがとう　" NAME "！\n"
SHIFT(12) "さあ、急ぎましょう！"
)
,
MSG(
"Thank you, " NAME ".\n"
"Now, let's hurry!"
)
,
MSG(
"Hab Dank, " NAME ".\n"
"Schnell! Laß uns fliehen!"
)
,
MSG(
"Merci, " NAME ".\n"
"Ne perdons pas de temps!"
)
)

DEFINE_MESSAGE(0x71AD, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "ざんねんでした〜。\n"
SHIFT(30) "もっと　練習しておいで。" EVENT
)
,
MSG(
"Too bad!"
BOX_BREAK

"Practice hard and come back!" EVENT
)
,
MSG(
"Du brauchst offenbar\n"
"noch etwas Training!"
BOX_BREAK

"Übe fleißig und komme wieder!" EVENT
)
,
MSG(
"Dommage!"
BOX_BREAK

"Entraîne-toi et reviens vite!" EVENT
)
)

DEFINE_MESSAGE(0x71AE, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) "おっし〜い！"
BOX_BREAK

SHIFT(48) "しょーがねぇな…\n"
SHIFT(12) "もう一回分　オマケしてやろう。\n"
SHIFT(36) "今度こそ　がんばりナ！" EVENT
)
,
MSG(
"Almost!!"
BOX_BREAK

"Well...all right!\n"
"I'll let you try one more time for\n"
"free...\n"
"This time, you gotta do it!" EVENT
)
,
MSG(
"Fast!"
BOX_BREAK

"Nun gut...\n"
"Du darfst es noch einmal \n"
"versuchen! Umsonst! \n"
"Diesmal mußt Du es schaffen!" EVENT
)
,
MSG(
"Presque!!"
BOX_BREAK

"Bon...je suis sympa!\n"
"La prochaine partie est gratuite. \n"
"Donne-toi à fond!" EVENT
)
)

DEFINE_MESSAGE(0x71AF, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "ワンダホ〜ッ！！！\n"
SHIFT(57) "ブラボ〜ッ！！！\n"
SHIFT(39) "パーフェクト〜ッ！！！"
BOX_BREAK

SHIFT(51) "そんな　アナタに\n"
SHIFT(36) "ステキな　プレゼント！" EVENT
)
,
MSG(
"Wonderful!!!\n"
"Bravo!!!\n"
"Perfect!!!"
BOX_BREAK

"Here's a fantastic present!" EVENT
)
,
MSG(
"Ich bin begeistert!\n"
"Klasse!\n"
"Göttlich!"
BOX_BREAK

"Hier, nimm dieses einzigartige\n"
"Präsent an Dich!" EVENT
)
,
MSG(
"Fantastique!!!\n"
"Bravo!!!\n"
"Génial!!!"
BOX_BREAK

"Voici ton magnifique prix!" EVENT
)
)

DEFINE_MESSAGE(0x71B0, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(45) COLOR(LIGHTBLUE) "あ〜あ、" COLOR(RED) "時間切れ" COLOR(LIGHTBLUE) "…\n"
COLOR(DEFAULT) SHIFT(33) COLOR(LIGHTBLUE) "お届け物が　だいなし…\n"
COLOR(DEFAULT) SHIFT(51) COLOR(LIGHTBLUE) "やりなお〜しっ！" COLOR(DEFAULT) EVENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Oh, no! " COLOR(RED) "Time's up!\n"
COLOR(LIGHTBLUE) "The thing you were going to \n"
"deliver has spoiled!\n"
"Let's try again!" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Oh-oh, " COLOR(RED) "die Zeit" COLOR(LIGHTBLUE) " ist abgelaufen!" COLOR(RED) "\n"
COLOR(LIGHTBLUE) "Das Ding, das Du ausliefern \n"
"solltest, ist verdorben! \n"
"Versuch es erneut!" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Oh, non! " COLOR(RED) "Le" COLOR(LIGHTBLUE) " " COLOR(RED) "temps est écoulé!\n"
COLOR(LIGHTBLUE) "L'objet à apporter est perdu!\n"
"Essayez à nouveau!" COLOR(DEFAULT) QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x71B1, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "ボヨヨヨ〜ン！！\n"
SHIFT(15) "ただいま　" TIME "　です！" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE "BOINNG! BOINNG!\n"
"The current time is: " TIME "!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE "Man erzählt sich, es sei\n"
TIME " Uhr!" QUICKTEXT_DISABLE FADE(40)
)
,
MSG(
QUICKTEXT_ENABLE "DING! DONG!\n"
"Au quatrième top il sera: " TIME "!" QUICKTEXT_DISABLE FADE(40)
)
)

DEFINE_MESSAGE(0x71B2, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(9) "登山口の門兵さんからの紹介か？\n"
SHIFT(18) "じゃ、オマケしといてやるよ。"
)
,
MSG(
"You heard about us from the\n"
"guard at Death Mountain gate?\n"
"Well, I have to give\n"
"you a good deal then!"
)
,
MSG(
"Die Wache in Kakariko schickt \n"
"Dich?! Nun, dann werde ich Dir \n"
"einen guten Preis machen!"
)
,
MSG(
"Tu connais le garde de Cocorico?\n"
"On va te faire un bon prix!"
)
)
