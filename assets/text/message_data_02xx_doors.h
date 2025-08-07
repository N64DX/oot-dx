DEFINE_MESSAGE(0x0200, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(45) "しゃべる扉で〜す！"
)
,
MSG(
SHIFT(15) "Hi! I'm a talking door!"
)
,
MSG(
SHIFT(15) "Hi! Ich bin die sprechende Tür!"
)
,
MSG(
SHIFT(14) "Bonjour! Je suis une porte \n"
SHIFT(70) "qui parle!"
)
)

DEFINE_MESSAGE(0x0201, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) COLOR(LIGHTBLUE) "開かないヨ…？\n"
COLOR(DEFAULT) SHIFT(66) COLOR(LIGHTBLUE) "ヘンだね…" COLOR(DEFAULT)
)
,
MSG(
SHIFT(6) COLOR(LIGHTBLUE) "Strange...this door doesn't open..." COLOR(DEFAULT)
)
,
MSG(
SHIFT(25) COLOR(LIGHTBLUE) "Komisch... Diese Tür läßt sich\n"
COLOR(DEFAULT) SHIFT(65) COLOR(LIGHTBLUE) "nicht öffnen!" COLOR(DEFAULT)
)
,
MSG(
SHIFT(25) COLOR(LIGHTBLUE) "Etrange... Cette porte ne \n"
COLOR(DEFAULT) SHIFT(65) COLOR(LIGHTBLUE) "s'ouvre pas" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x0202, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) COLOR(LIGHTBLUE) "がんじょうな\n"
COLOR(DEFAULT) SHIFT(21) "てつごうし" COLOR(LIGHTBLUE) "で　守られてる…\n"
COLOR(DEFAULT) SHIFT(30) COLOR(LIGHTBLUE) "手では　開けられないよ！" COLOR(DEFAULT)
)
,
MSG(
SHIFT(4) COLOR(LIGHTBLUE) "Strong " COLOR(DEFAULT) "iron bars " COLOR(LIGHTBLUE) "are blocking the\n"
COLOR(DEFAULT) SHIFT(11) COLOR(LIGHTBLUE) "door. You can't open them with\n"
COLOR(DEFAULT) SHIFT(64) COLOR(LIGHTBLUE) "your hands!" COLOR(DEFAULT)
)
,
MSG(
SHIFT(4) COLOR(LIGHTBLUE) "Dicke " COLOR(DEFAULT) "Eisenstangen " COLOR(LIGHTBLUE) "blockieren die\n"
COLOR(DEFAULT) SHIFT(33) COLOR(LIGHTBLUE) "Tür. Finde einen Weg, sie\n"
COLOR(DEFAULT) SHIFT(49) COLOR(LIGHTBLUE) "dennoch zu öffnen!" COLOR(DEFAULT)
)
,
MSG(
SHIFT(25) COLOR(LIGHTBLUE) "De lourdes " COLOR(DEFAULT) "barres d'acier \n"
SHIFT(12) COLOR(LIGHTBLUE) "verrouillent cette porte. Tu ne\n"
COLOR(DEFAULT) SHIFT(22) COLOR(LIGHTBLUE) "peux l'ouvrir de tes mains!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x0203, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(48) COLOR(LIGHTBLUE) "カギのついた扉は\n"
COLOR(DEFAULT) SHIFT(24) "カギ" COLOR(LIGHTBLUE) "がないと　開かないヨ！" COLOR(DEFAULT)
)
,
MSG(
SHIFT(9) COLOR(LIGHTBLUE) "You need a " COLOR(DEFAULT) "Key" COLOR(LIGHTBLUE) " to open a door\n"
COLOR(DEFAULT) SHIFT(20) COLOR(LIGHTBLUE) "that is locked and chained." COLOR(DEFAULT)
)
,
MSG(
SHIFT(3) COLOR(LIGHTBLUE) "Du benötigst einen " COLOR(DEFAULT) "Schlüssel," COLOR(LIGHTBLUE) " um \n"
COLOR(DEFAULT) SHIFT(1) COLOR(LIGHTBLUE) "eine solche Tür öffnen zu können!" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Tu as besoin d'une " COLOR(DEFAULT) "Clé" COLOR(LIGHTBLUE) " pour ouvrir\n"
COLOR(DEFAULT) SHIFT(11) COLOR(LIGHTBLUE) "cette porte. Elle est fortement\n"
COLOR(DEFAULT) SHIFT(67) COLOR(LIGHTBLUE) "verrouillée." COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x0204, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(12) COLOR(LIGHTBLUE) "この扉は　" COLOR(DEFAULT) "特別なカギ" COLOR(LIGHTBLUE) "が　ないと\n"
COLOR(DEFAULT) SHIFT(63) COLOR(LIGHTBLUE) "開かないヨ！" COLOR(DEFAULT)
)
,
MSG(
SHIFT(33) COLOR(LIGHTBLUE) "You need a " COLOR(DEFAULT) "special key\n"
SHIFT(40) COLOR(LIGHTBLUE) "to open this door." COLOR(DEFAULT)
)
,
MSG(
SHIFT(39) COLOR(LIGHTBLUE) "Hier fehlt Dir wohl ein" COLOR(DEFAULT) "\n"
SHIFT(46) COLOR(LIGHTBLUE) "spezieller" COLOR(DEFAULT) " Schlüssel!"
)
,
MSG(
SHIFT(10) COLOR(LIGHTBLUE) "Tu as besoin d'une " COLOR(DEFAULT) "Clé spéciale\n"
SHIFT(30) COLOR(LIGHTBLUE) "pour ouvrir cette porte." COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x0205, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(60) QUICKTEXT_ENABLE "うるさいな！！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(27) "まだ　" TIME "　だぞ！\n"
SHIFT(30) "墓守りの" COLOR(RED) "ダンペイ" COLOR(DEFAULT) "さんは\n"
SHIFT(48) "おネムの　時間だ！"
BOX_BREAK

SHIFT(21) "お昼のオバケでも　さがして\n"
SHIFT(63) "あそんでな！"
)
,
MSG(
QUICKTEXT_ENABLE "Be quiet!" QUICKTEXT_DISABLE
BOX_BREAK

"It's only " TIME "!\n"
"I, " COLOR(RED) "Dampé " COLOR(DEFAULT) "the gravekeeper, am\n"
"in bed now!"
BOX_BREAK

"Go away and play! Maybe you can\n"
"find a ghost in the daytime?"
)
,
MSG(
QUICKTEXT_ENABLE "RUHE!" QUICKTEXT_DISABLE
BOX_BREAK

"Es ist erst " TIME " Uhr!\n"
COLOR(RED) "Boris" COLOR(DEFAULT) ", der Totengräber,\n"
"schläft noch!"
BOX_BREAK

"Genieße einen Spaziergang auf \n"
"dem Friedhof und komm \n"
"später wieder!"
)
,
MSG(
QUICKTEXT_ENABLE "Silence!" QUICKTEXT_DISABLE
BOX_BREAK

"Il n'est que " TIME "!\n"
"Moi, " COLOR(RED) "Igor " COLOR(DEFAULT) "le fossoyeur, \n"
"j'suis au pieu!"
BOX_BREAK

"Dégage et va jouer avec les \n"
"spectres du jour!"
)
)

DEFINE_MESSAGE(0x0206, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(21) "もう今は　" TIME "　だ！\n"
SHIFT(18) COLOR(RED) "穴ほりツアー" COLOR(DEFAULT) "は　終わったよ！"
BOX_BREAK

SHIFT(30) "墓守りの" COLOR(RED) "ダンペイ" COLOR(DEFAULT) "さんは\n"
SHIFT(42) "おネムの　時間だよ！"
BOX_BREAK

SHIFT(39) "オバケでも　さがして\n"
SHIFT(63) "あそんでな！"
)
,
MSG(
"It's " TIME " now.\n"
"The " COLOR(RED) "Gravedigging Tour" COLOR(DEFAULT) " is over \n"
"now!"
BOX_BREAK

"I, " COLOR(RED) "Dampé" COLOR(DEFAULT) " the gravekeeper, am\n"
"in bed!"
BOX_BREAK

"Go away and play! Maybe you'll\n"
"find a ghost!"
)
,
MSG(
"Es ist jetzt " TIME " Uhr!\n"
"Die " COLOR(RED) "Grabgrusel-Tour" COLOR(DEFAULT) "\n"
"ist vorüber!"
BOX_BREAK

COLOR(RED) "Boris" COLOR(DEFAULT) ", der Totengräber,\n"
"schläft jetzt!"
BOX_BREAK

"Unterhalte Dich mit den Geistern \n"
"der Toten und komm \n"
"später wieder!"
)
,
MSG(
"Il est " TIME ".\n"
"L'" COLOR(RED) "Excursion du fossoyeur" COLOR(DEFAULT) " est finie!"
BOX_BREAK

"Moi, " COLOR(RED) "Igor" COLOR(DEFAULT) ", j'suis au pieu!"
BOX_BREAK

"Dégage et va jouer avec les \n"
"spectres!"
)
)

DEFINE_MESSAGE(0x0207, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(48) COLOR(LIGHTBLUE) "しあわせのお面屋\n"
COLOR(DEFAULT) SHIFT(6) "ご利用前に　ぜひ　お読みください\n"
SHIFT(42) COLOR(RED) "当店のシステム説明" COLOR(DEFAULT) QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "当店は、商品である　お面を\n"
"お売りするのでは　ありません。\n"
"あくまで　" COLOR(RED) "お貸しする" COLOR(DEFAULT) "のです。" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "貸し出した　お面は　お客様ご自身に\n"
"売ってきていただく　システムです。" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "売っていただいた　" COLOR(RED) "代金" COLOR(DEFAULT) "を\n"
"当店に　納めていただけば、さらに\n"
"ニューモデルを　お貸しします。" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "見事　お売りいただいた　お面は\n"
"その後も　お貸し　いたしますが、\n"
"売ることは　できなくなります。" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "ぜひ　ご利用下さい。" SHIFT(48) "店主" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Happy Mask Shop\n"
COLOR(DEFAULT) "Please read this sign before you\n"
"use this shop." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE COLOR(RED) "How This Shop Works\n"
COLOR(DEFAULT) "We do not sell masks at this shop.\n"
"We just " COLOR(RED) "lend" COLOR(DEFAULT) " them to you." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "You sell the loaned masks on your\n"
"own." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "You pay back the " COLOR(RED) "money" COLOR(DEFAULT) " for the\n"
"mask, and we will lend you a \n"
"newer model." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "You can borrow masks you have\n"
"already sold again; however, you \n"
"can sell each model of mask only\n"
"once." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Please try our shop!\n"
SHIFT(20) "--Happy Mask Shop Owner" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Maskenhändler\n"
COLOR(DEFAULT) "Bitte das Schild lesen!" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE COLOR(RED) "So funktioniert dieser Handel:\n"
COLOR(DEFAULT) "Die Masken werden nicht verkauft.\n"
"Wir " COLOR(RED) "leihen" COLOR(DEFAULT) " sie Dir nur." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Du verkaufst die Masken." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Das so verdiente " COLOR(RED) "Geld " COLOR(DEFAULT) "gibst Du uns\n"
"und wir leihen Dir ein aktuelleres\n"
"Modell." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Du kannst auch eine bereits\n"
"verkaufte Maske nochmals leihen,\n"
"aber Du kannst sie nur einmal\n"
"verkaufen." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Probiere es einfach mal aus!\n"
SHIFT(99) "Der Maskenhändler"
)
,
MSG(
QUICKTEXT_ENABLE COLOR(LIGHTBLUE) "Foire aux Masques\n"
COLOR(DEFAULT) "Veuillez lire cette affiche avant \n"
"de faire appel à nos services." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE COLOR(RED) "Fonctionnement de la Foire\n"
COLOR(DEFAULT) "Ici les masques ne sont pas à \n"
"vendre mais sont " COLOR(RED) "confiés" COLOR(DEFAULT) " à un \n"
"coursier gratuitement." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Vous vendez le masque emprunté\n"
"à votre convenance." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Vous apportez l'" COLOR(RED) "argent" COLOR(DEFAULT) " et l'on vous\n"
"confiera un nouveau masque." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Vous pouvez emprunter un masque \n"
"déjà vendu sans pouvoir le vendre \n"
"de nouveau." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Pourquoi ne pas essayer?\n"
SHIFT(52) "--Le propriétaire" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0208, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(45) "闇の神殿…　それは\n"
SHIFT(6) "ハイラルの血塗られた闇の歴史…\n"
SHIFT(12) "欲望と怨念の集まりしところ…" EVENT
)
,
MSG(
"Shadow Temple...\n"
"Here is gathered Hyrule's bloody \n"
"history of greed and hatred..." EVENT
)
,
MSG(
"Der Schattentempel...\n"
"Hier ruhen Hyrules blutige Zeugnisse\n"
"von großer Gier und\n"
"blindem Hass..." EVENT
)
,
MSG(
"Temple de l'Ombre...\n"
"Ici sommeillent les légendes\n"
"sanglantes d'Hyrule, faites de haine\n"
"et de cupidité..." EVENT
)
)

DEFINE_MESSAGE(0x0209, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(42) "闇に隠されしもの…\n"
SHIFT(42) "悪意に満ちたワナ…\n"
SHIFT(12) "そして進むべき道も見えない…" EVENT
)
,
MSG(
"What is hidden in the darkness...\n"
"Tricks full of ill will...\n"
"You can't see the way forward..." EVENT
)
,
MSG(
"In der Dunkelheit verborgen...\n"
"Das bloße Auge listig täuschend...\n"
"Bleibt der rechte Weg verhüllt..." EVENT
)
,
MSG(
"Reposent au fond des ténèbres \n"
"pièges vicieux, trappes sournoises,\n"
"et l'ombre qui masque le chemin..." EVENT
)
)

DEFINE_MESSAGE(0x020A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(36) COLOR(RED) "真実の目" COLOR(DEFAULT) "を得た者のみ\n"
SHIFT(6) "闇に隠されしものを見るであろう" EVENT
)
,
MSG(
"One who gains the " COLOR(RED) "eye of truth\n"
COLOR(DEFAULT) "will be able to see what is hidden\n"
"in the darkness." EVENT
)
,
MSG(
"Jenem mit dem " COLOR(RED) "Auge der Wahrheit\n"
COLOR(DEFAULT) "wird sich manches offenbaren, was\n"
"noch von Dunkelheit umgeben..." EVENT
)
,
MSG(
"Seul le gardien de l'" COLOR(RED) "oeil de vérité \n"
COLOR(DEFAULT) "pourra scruter le tréfonds obscur." EVENT
)
)

DEFINE_MESSAGE(0x020B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(9) COLOR(LIGHTBLUE) "ヘンなモノが　からまってるネ…\n"
COLOR(DEFAULT) SHIFT(9) COLOR(LIGHTBLUE) "この" COLOR(DEFAULT) "部屋のしかけ" COLOR(LIGHTBLUE) "を　解かないと\n"
COLOR(DEFAULT) SHIFT(51) COLOR(LIGHTBLUE) "開かないみたい！" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Something strange is covering the\n"
"entrance. You must solve the\n"
COLOR(DEFAULT) "puzzle" COLOR(LIGHTBLUE) " in this room to make the\n"
"entrance open." COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Eine seltsame Magie versperrt Dir\n"
"den Zugang. Löse das " COLOR(DEFAULT) "Rätsel" COLOR(LIGHTBLUE) "\n"
"dieses Raumes und Du erhältst\n"
"Zutritt!" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Une étrange substance nous bloque\n"
"l'entrée. Tu dois résoudre l'" COLOR(DEFAULT) "énigme" COLOR(LIGHTBLUE) " \n"
"de cette pièce pour passer." COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x020C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(33) "巨大なる　ドドンゴの屍\n"
SHIFT(9) "その　両目に　赤き灯が　ともる時\n"
SHIFT(51) "新たなる道　開く" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Giant dead Dodongo...\n"
"when it sees red,\n"
"a new way to go \n"
"will be open." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Der riesige Schädel...\n"
"Leuchten seine Augen rot,\n"
"öffnet sich ein neuer Weg!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Crâne géant de Dodongo...\n"
"Quand il voit rouge, un nouveau\n"
"chemin se découvre." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x020D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(54) COLOR(LIGHTBLUE) "たからばこクジ\n"
COLOR(DEFAULT) SHIFT(78) "準備中\n"
SHIFT(66) "夜だけ営業"
)
,
MSG(
SHIFT(30) COLOR(LIGHTBLUE) "Treasure Chest Contest\n"
COLOR(DEFAULT) SHIFT(45) "Temporarily Closed\n"
SHIFT(56) "Open Tonight!"
)
,
MSG(
SHIFT(52) COLOR(LIGHTBLUE) "Schatzkisten-Poker\n"
COLOR(DEFAULT) SHIFT(23) "Vorübergehend geschlossen! \n"
SHIFT(41) "Erst abends geöffnet!"
)
,
MSG(
SHIFT(42) COLOR(LIGHTBLUE) "Chasse aux trésors\n"
COLOR(DEFAULT) SHIFT(33) "Fermée pour le moment\n"
SHIFT(42) "Ouverture: ce soir!"
)
)

DEFINE_MESSAGE(0x020E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) COLOR(LIGHTBLUE) "クスリや\n"
COLOR(DEFAULT) SHIFT(60) "朝まで準備中"
)
,
MSG(
COLOR(LIGHTBLUE) "Medicine Shop\n"
COLOR(DEFAULT) "Closed until morning"
)
,
MSG(
SHIFT(71) COLOR(LIGHTBLUE) "Magie-Laden\n"
COLOR(DEFAULT) SHIFT(15) "Bis morgen früh geschlossen!"
)
,
MSG(
SHIFT(65) COLOR(LIGHTBLUE) "Apothicaire\n"
COLOR(DEFAULT) SHIFT(40) "Fermé jusqu'au matin"
)
)

DEFINE_MESSAGE(0x020F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(72) COLOR(LIGHTBLUE) "的当て屋\n"
COLOR(DEFAULT) SHIFT(42) "お昼だけ営業します"
)
,
MSG(
COLOR(LIGHTBLUE) "Shooting Gallery\n"
COLOR(DEFAULT) "Open only during the day"
)
,
MSG(
SHIFT(67) COLOR(LIGHTBLUE) "Schießbude\n"
COLOR(DEFAULT) SHIFT(35) "Nur tagsüber geöffnet!"
)
,
MSG(
SHIFT(60) COLOR(LIGHTBLUE) "Jeu d'adresse\n"
COLOR(DEFAULT) SHIFT(27) "Ouvert seulement le jour"
)
)

DEFINE_MESSAGE(0x0210, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) COLOR(LIGHTBLUE) "しあわせのお面屋\n"
COLOR(DEFAULT) SHIFT(66) "バイト募集\n"
SHIFT(42) "お昼に受け付けます"
)
,
MSG(
COLOR(LIGHTBLUE) "Happy Mask Shop\n"
COLOR(DEFAULT) "Now hiring part-time\n"
"Apply during the day"
)
,
MSG(
SHIFT(62) COLOR(LIGHTBLUE) "Maskenhändler\n"
COLOR(DEFAULT) SHIFT(21) "Reisender Händler gesucht!\n"
SHIFT(18) "Bewerbungen bitte tagsüber!"
)
,
MSG(
SHIFT(45) COLOR(LIGHTBLUE) "Foire aux Masques\n"
COLOR(DEFAULT) SHIFT(55) "Nous recrutons\n"
SHIFT(30) "Se renseigner la journée"
)
)

DEFINE_MESSAGE(0x0211, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) COLOR(LIGHTBLUE) "なンでも屋\n"
COLOR(DEFAULT) SHIFT(42) "営業時間はお昼だけ"
)
,
MSG(
COLOR(LIGHTBLUE) "Bazaar\n"
COLOR(DEFAULT) "Open only during the day"
)
,
MSG(
SHIFT(81) COLOR(LIGHTBLUE) "Basar\n"
COLOR(DEFAULT) SHIFT(32) "Nur tagsüber geöffnet!"
)
,
MSG(
SHIFT(81) COLOR(LIGHTBLUE) "Bazar\n"
COLOR(DEFAULT) SHIFT(27) "Ouvert seulement le jour"
)
)

DEFINE_MESSAGE(0x0212, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(66) "我に　光を！"
)
,
MSG(
"Show me the light!"
)
,
MSG(
"Hast Du Feuer?"
)
,
MSG(
"Apporte-moi la lumière!"
)
)

DEFINE_MESSAGE(0x0213, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(9) COLOR(RED) "真実の目" COLOR(DEFAULT) "をもつ者は　魂の神殿へ\n"
SHIFT(15) "誘いの霊に　導かれるであろう" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "One with the " COLOR(RED) "eye of truth " COLOR(DEFAULT) "shall\n"
"be guided to the Spirit Temple by\n"
"an inviting ghost." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Jenen mit dem " COLOR(RED) "Auge der Wahrheit" COLOR(DEFAULT) "\n"
"wird ein hilfsbereites Phantom\n"
"zum Geistertempel führen." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Seul un " COLOR(RED) "regard juste " COLOR(DEFAULT) "discernera\n"
"le guide fantomatique jusqu'au\n"
"Temple de l'Esprit." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0214, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "深き水底にねむる道を\n"
SHIFT(48) "開かんとする者は\n"
SHIFT(24) COLOR(RED) "王家に伝わる歌" COLOR(DEFAULT) "をとなえよ" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Those who wish to open the path\n"
"sleeping at the bottom of the lake\n"
"must play the " COLOR(RED) "song passed down\n"
"by the Royal Family" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Jener, der den Zugang auf dem\n"
"Grund des Sees öffnen will, möge\n"
"ein " COLOR(RED) "Schlaflied aus königlicher\n"
"Überlieferung " COLOR(DEFAULT) "spielen." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Toi qui désires ouvrir le sentier\n"
"enfoui au fond du lac, entonne le\n"
COLOR(RED) "Chant de la Famille Royale" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0215, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(3) "はるか高き門を　開かんとする者は\n"
SHIFT(24) COLOR(RED) "王家に伝わる歌" COLOR(DEFAULT) "をとなえよ" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Those who wish to open the gate\n"
"on the far heights, play the " COLOR(RED) "song\n"
"passed down by the Royal Family" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Jener, der das Tor in großer\n"
"Höhe öffnen will, möge\n"
"ein " COLOR(RED) "Schlaflied aus königlicher\n"
"Überlieferung " COLOR(DEFAULT) "spielen." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Toi qui désires ouvrir la porte\n"
"des hauteurs célestes, entonne le\n"
COLOR(RED) "Chant de la Famille Royale" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0216, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(9) COLOR(RED) "ちいさなカギ" COLOR(DEFAULT) "が　当てた人だけが\n"
SHIFT(21) "この先に　チャレンジできる\n"
SHIFT(21) "はずれた人は　帰りましょう" QUICKTEXT_DISABLE
)
,
MSG(
"Those who find a " COLOR(RED) "Small Key" COLOR(DEFAULT) " can\n"
"advance to the next room. Those\n"
"who don't can go home!"
)
,
MSG(
"Wer den " COLOR(RED) "Schlüssel" COLOR(DEFAULT) " findet, der\n"
"darf den nächsten Raum betreten.\n"
"Wer versagt, kann gehen!"
)
,
MSG(
"Qui a la " COLOR(RED) "petite clé" COLOR(DEFAULT) " passera.\n"
"Qui ne l'a pas, s'en va!"
)
)

DEFINE_MESSAGE(0x0217, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(33) "余に　話しかけるならば\n"
SHIFT(42) "壇上から　話すゾラ。" EVENT
)
,
MSG(
"If you wish to speak to me,\n"
"do so from the platform." EVENT
)
,
MSG(
"Wer Audienz wünscht, der möge\n"
"von der Plattform aus\n"
"zu mir sprechen." EVENT
)
,
MSG(
"Si tu veux Nous demander \n"
"audience, fais-le de la plate-forme." EVENT
)
)

DEFINE_MESSAGE(0x0218, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_Z0_SMILE_0) SHIFT(24) QUICKTEXT_ENABLE "ハ〜イ、" NAME "！" QUICKTEXT_DISABLE "\n"
SHIFT(69) "こっちよ！"
BOX_BREAK

SHIFT(45) COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) "で　こっちを見て\n"
SHIFT(48) COLOR(BLUE) "[A]" COLOR(DEFAULT) "で　話しかけて！"
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_Z0_SMILE_0) QUICKTEXT_ENABLE "Hi, " NAME "!" QUICKTEXT_DISABLE "\n"
"Look this way!"
BOX_BREAK

"Look over here with " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) ", and talk \n"
"to me with " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_Z0_SMILE_0) QUICKTEXT_ENABLE "Hi " NAME "!" QUICKTEXT_DISABLE "\n"
"Schau zu mir herauf!"
BOX_BREAK

"Mit " COLOR(LIGHTBLUE) "[Z] " COLOR(DEFAULT) "schaust Du mich an, und\n"
"mit " COLOR(BLUE) "[A] " COLOR(DEFAULT) "kannst Du mit mir reden."
)
,
MSG(
UNSKIPPABLE SFX(NA_SE_VO_Z0_SMILE_0) QUICKTEXT_ENABLE "Salut, " NAME "!" QUICKTEXT_DISABLE "\n"
"Regarde par là!"
BOX_BREAK

"Regarde-moi avec " COLOR(LIGHTBLUE) "[Z]" COLOR(DEFAULT) ", et parle-moi\n"
"avec " COLOR(BLUE) "[A]" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x0219, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(60) "ただいまから\n"
SHIFT(51) COLOR(RED) TIME COLOR(DEFAULT) "　を\n"
SHIFT(51) "お知らせします。"
)
,
MSG(
"The current time is: " COLOR(RED) TIME COLOR(DEFAULT) "."
)
,
MSG(
"Schau mir in die Augen und wisse, \n"
"es ist " COLOR(RED) TIME " " COLOR(DEFAULT) "Uhr."
)
,
MSG(
"Au quatrième top; il sera:\n"
COLOR(RED) TIME COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x021A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(48) "生ける屍に光を…"
)
,
MSG(
"Shine light on the living dead..."
)
,
MSG(
"Erleuchte die lebenden Toten..."
)
,
MSG(
"Inonde de lumière les morts."
)
)

DEFINE_MESSAGE(0x021B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(42) "王家の墓をあらす者\n"
SHIFT(18) COLOR(RED) "闇にひそむ者" COLOR(DEFAULT) "が行く手をはばむ…"
)
,
MSG(
"Those who break into the Royal \n"
"Tomb will be obstructed by the\n"
COLOR(RED) "lurkers in the dark" COLOR(DEFAULT) "."
)
,
MSG(
COLOR(RED) "Flatternde Schatten " COLOR(DEFAULT) "lauern im\n"
"Dunkel! Solange sie existieren,\n"
"versperren sie den Weg."
)
,
MSG(
"Celui qui viole la Tombe Royale\n"
"réveillera les " COLOR(RED) "bêtes de l'ombre" COLOR(DEFAULT) "."
)
)

DEFINE_MESSAGE(0x021C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(18) "ちょっと　そこの　お兄さん…\n"
SHIFT(42) "こっち…　牢屋の中！" EVENT
)
,
MSG(
"Hey, you! Young " AGE_LAD ", over there!\n"
"Look over here, inside the cell!" EVENT
)
,
MSG(
"Hey, Kleiner! Dich meine ich!\n"
"Schau hierher, in die Zelle!" EVENT
)
,
MSG(
"Hé, toi! P'tit gars!\n"
"Regarde par là! Dans la cellule!" EVENT
)
)

DEFINE_MESSAGE(0x021D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) "ウチのボーヤは\n"
SHIFT(21) "外へ　あそびに　いったわよ。\n"
SHIFT(18) "墓地に　いってるんじゃない？"
)
,
MSG(
"My little boy isn't here right \n"
"now...\n"
"I think he went to play in the \n"
"graveyard..."
)
,
MSG(
"Mein Sohn ist gerade nicht\n"
"zuhause...\n"
"Vielleicht spielt er ja auf dem\n"
"Friedhof..."
)
,
MSG(
"Mon gamin n'est pas là pour\n"
"l'instant...\n"
"Je crois qu'il traîne du côté du\n"
"cimetière..."
)
)

DEFINE_MESSAGE(0x021E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(54) "ウチのボーヤは\n"
SHIFT(36) "もう　ねちゃったわよ。\n"
SHIFT(30) "また　あそんでやってね。"
)
,
MSG(
"Oh, my boy is asleep right now.\n"
"Please come back some other time\n"
"to play with him!"
)
,
MSG(
"Oh, mein Sohn schläft gerade.\n"
"Bitte komm doch später wieder,\n"
"wenn Du mit ihm spielen willst!"
)
,
MSG(
"Mon gamin dort pour le moment.\n"
"Reviens demain matin pour jouer\n"
"avec lui!"
)
)

DEFINE_MESSAGE(0x021F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(48) "湖に　水　満ちる時\n"
SHIFT(42) "朝日に向かって撃て" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "When water fills the lake, \n"
"shoot for the morning light." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Wenn das Wasser den See ausfüllt,\n"
"ziele auf die Morgensonne." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Quand les premières lueurs de \n"
"l'aube se reflèteront sur le lac, \n"
"décoche vers l'astre du matin." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0220, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(42) "未来へ　進みたくば、\n"
SHIFT(24) "過去より　" COLOR(BLUE) "銀の力" COLOR(DEFAULT) "を　持って\n"
SHIFT(36) "再び　ここへ　来るべし" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "If you want to travel to the \n"
"future, you should return here \n"
"with the " COLOR(BLUE) "power of silver " COLOR(DEFAULT) "from the \n"
"past." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Wer in die Zukunft reist, der\n"
"möge aus der Vergangenheit\n"
"kommen und die " COLOR(BLUE) "Kraft des Silbers" COLOR(DEFAULT) "\n"
"tragen." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Pour t'aventurer dans le futur,\n"
"rapporte le " COLOR(BLUE) "pouvoir de l'argent " COLOR(DEFAULT) "du \n"
"passé." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0221, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(42) "過去へ　進みたくば、\n"
SHIFT(21) "けがれない　幼き心のままで\n"
SHIFT(36) "再び　ここへ　来るべし" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "If you want to proceed to the \n"
"past, you should return here\n"
"with the pure heart of a child." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Komme in der Vergangenheit hierher\n"
"mit dem reinen Herzen eines Kindes." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Pour errer dans le passé, présente\n"
"ici un coeur pur d'enfant." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0222, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "ただいま改装中" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "This door is currently being\n"
"refurbished." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Diese Tür wird zur Zeit\n"
"verschönert." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Cette porte est en réparation." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0223, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(45) "この台に　なにかが\n"
SHIFT(30) "はめられていたようだ…" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "It looks like something used to\n"
"be set in this stand..." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Sieht aus, als hätte hier jemand\n"
"etwas weggenommen..." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Quelque chose devait être fixé \n"
"sur ce socle..." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0224, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(51) "我が　クチバシを\n"
SHIFT(21) COLOR(RED) "真実のドクロ" COLOR(DEFAULT) "と　対面させよ" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(33) "さもなくば　闇の彼方へ\n"
SHIFT(48) "消え去るであろう" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(32) "Make my beak face the\n"
SHIFT(58) COLOR(RED) "skull of truth" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(12) "The alternative is descent into\n"
SHIFT(45) "the deep darkness." QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(27) "Drehe meinen Schnabel zum\n"
SHIFT(44) COLOR(RED) "Schädel der Wahrheit" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(36) "Andernfalls stürzt Du in\n"
SHIFT(41) "unendliche Dunkelheit!" QUICKTEXT_DISABLE EVENT
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(33) "Pointe mon bec vers le\n"
SHIFT(52) COLOR(RED) "crâne de vérité" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(20) "Une erreur te plongera dans\n"
SHIFT(37) "les abîmes infernales." QUICKTEXT_DISABLE EVENT
)
)

DEFINE_MESSAGE(0x0225, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
COLOR(LIGHTBLUE) COLOR(DEFAULT) SHIFT(33) "カギ" COLOR(LIGHTBLUE) "が　ちがうみたい…\n"
COLOR(DEFAULT) SHIFT(63) COLOR(LIGHTBLUE) "開かないヨ！" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "This is not the correct " COLOR(DEFAULT) "key" COLOR(LIGHTBLUE) "...\n"
"The door won't open!" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Das ist nicht der rechte " COLOR(DEFAULT) "Schlüssel!" COLOR(LIGHTBLUE) "\n"
"Die Tür bleibt Dir verschlossen..." COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Ce n'est pas la bonne " COLOR(DEFAULT) "clé" COLOR(LIGHTBLUE) "...\n"
"Cette porte ne s'ouvre pas!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x0226, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(36) COLOR(LIGHTBLUE) "オババのクスリ屋さん\n"
COLOR(DEFAULT) SHIFT(78) "休業中" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(6) "ただいま研究の旅に出ております\n"
SHIFT(30) "しばらくお待ちください\n"
SHIFT(63) "店主　オババ" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(39) COLOR(LIGHTBLUE) "Granny's Potion Shop\n"
COLOR(DEFAULT) SHIFT(79) "Closed" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(40) "Gone for Field Study\n"
SHIFT(40) "Please come again!\n"
SHIFT(74) "--Granny" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(58) COLOR(LIGHTBLUE) "Asas Hexenladen\n"
COLOR(DEFAULT) SHIFT(70) "Geschlossen" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(40) "Bin auf Kräutersuche!\n"
SHIFT(43) "Komm später wieder...\n"
SHIFT(38) "...wenn Du es wagst!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(66) COLOR(LIGHTBLUE) "Apothicaire\n"
COLOR(DEFAULT) SHIFT(80) "Fermé" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(27) "Je suis partie faire des \n"
SHIFT(60) "expériences...\n"
SHIFT(44) "Revenez plus tard!\n"
SHIFT(75) "--Granny" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x0227, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(78) "だれ！？\n"
SHIFT(15) "ウラぐちから　入ろうとしてる\n"
SHIFT(63) "ワルい子は！" QUICKTEXT_DISABLE
BOX_BREAK

SHIFT(33) TEXT_SPEED(2) "そんな　ワルい子には…" TEXT_SPEED(0) "\n"
SHIFT(30) "イイこと　おしえちゃう！"
BOX_BREAK

SHIFT(15) "大工の親方の　ドラ息子さんは\n"
SHIFT(27) "夜になったら　木の根元で\n"
SHIFT(30) "しゃがんでる　アノ人よ！"
BOX_BREAK

SHIFT(21) "これ　親方には　ヒミツよん！"
)
,
MSG(
QUICKTEXT_ENABLE "Who's there? What a bad kid,\n"
"trying to enter from the rear\n"
"door!" QUICKTEXT_DISABLE
BOX_BREAK

TEXT_SPEED(2) "Such a bad kid..." TEXT_SPEED(0) "\n"
"I have to tell you some juicy\n"
"gossip!"
BOX_BREAK

"The boss carpenter has a son...\n"
"He's the guy who sits under the\n"
"tree every night..."
BOX_BREAK

"Don't tell the boss I told you \n"
"that!"
)
,
MSG(
QUICKTEXT_ENABLE "Wer ist da? Schon wieder so ein\n"
"Rattengesicht, das durch die\n"
"Hintertür kommen will!" QUICKTEXT_DISABLE
BOX_BREAK

TEXT_SPEED(2) "Rattengesicht..." TEXT_SPEED(0) "\n"
"Ich muß Dir ein paar interessante\n"
"Neuigkeiten erzählen!"
BOX_BREAK

"Der Chef der Zimmerleute hat\n"
"einen Sohn...\n"
"Es ist der Typ, der jeden Abend\n"
"beim Baum herumlungert..."
BOX_BREAK

"Erzähl dem Chef bloß nicht, daß\n"
"ich Dir das gesagt habe!"
)
,
MSG(
QUICKTEXT_ENABLE "Qui va là? Quel sale môme!\n"
"Essayer de passer par derrière!" QUICKTEXT_DISABLE
BOX_BREAK

TEXT_SPEED(2) "Vilain petit..." TEXT_SPEED(0) "\n"
"Je m'en vais te raconter une \n"
"petite histoire!"
BOX_BREAK

"Le chef des ouvriers a un fils...\n"
"Il passe ses nuits assis sous \n"
"l'arbre..."
BOX_BREAK

"Ne va pas dire au chef que je \n"
"t'en ai parlé!"
)
)

DEFINE_MESSAGE(0x0228, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(63) COLOR(LIGHTBLUE) "見て！　見て！" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Look at this!" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Schau Dir das an!" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Regarde ça!" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x0229, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(21) "マロンは　もう　寝ただーよ。\n"
SHIFT(27) "オラも　もう　寝るだーよ。\n"
SHIFT(12) "お昼になってから　来るだーよ。"
)
,
MSG(
"Malon's gone to sleep!\n"
"I'm goin' to sleep now, too.\n"
"Come back again when it's\n"
"light out!"
)
,
MSG(
"Malon ist zu Bett gegangen!\n"
"Ich geh jetzt auch schlafen.\n"
"Komm wieder, wenn es hell ist!"
)
,
MSG(
"Malon est au lit!\n"
"Je vais me coucher, moi aussi.\n"
"Reviens demain lorsqu'il fera jour!"
)
)

DEFINE_MESSAGE(0x022A, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(30) COLOR(RED) NAME "の記録\n"
COLOR(DEFAULT) SHIFT(51) "クモ退治　" TOKENS "匹\n"
SHIFT(33) "つりあそび　" HIGHSCORE(HS_FISHING) "センチ" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(33) "マラソン　" HIGHSCORE(HS_MARATHON) "\n"
SHIFT(33) "馬レース　" HIGHSCORE(HS_HORSE_RACE) "\n"
SHIFT(39) "やぶさめ　" HIGHSCORE(HS_HBA) "点" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) NAME "'s Records!\n"
COLOR(DEFAULT) "Spiders squished: " TOKENS "\n"
"Largest fish caught: " HIGHSCORE(HS_FISHING) " pounds" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Marathon time: " HIGHSCORE(HS_MARATHON) "\n"
"Horse race time: " HIGHSCORE(HS_HORSE_RACE) "\n"
"Horseback archery: " HIGHSCORE(HS_HBA) " points" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Bestleistungen von " NAME "!\n"
COLOR(DEFAULT) "Skulltula-Symbole: " TOKENS "\n"
"Größter Fang: " HIGHSCORE(HS_FISHING) " Pfund" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Bestzeit beim Marathon: " HIGHSCORE(HS_MARATHON) "\n"
"Bestzeit beim Pferderennen: " HIGHSCORE(HS_HORSE_RACE) "\n"
"Bogenschießen: " HIGHSCORE(HS_HBA) " Punkte" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Records de " NAME "!\n"
COLOR(DEFAULT) "Araignées écrabouillées: " TOKENS "\n"
"Plus gros poisson: " HIGHSCORE(HS_FISHING) " livres" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE "Marathon: " HIGHSCORE(HS_MARATHON) "\n"
"Course à cheval: " HIGHSCORE(HS_HORSE_RACE) "\n"
"Archerie montée: " HIGHSCORE(HS_HBA) " points" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x022B, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(36) "ハイラル王家の紋章が\n"
SHIFT(57) "刻まれている。" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(6) "The crest of the Royal Family of\n"
SHIFT(30) "Hyrule is inscribed here." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(37) "Hier steht die Inschrift\n"
SHIFT(57) "aus dem Wappen\n"
SHIFT(23) "der Königsfamilie von Hyrule." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(15) "Le blason de la Famille Royale\n"
SHIFT(36) "d'Hyrule est gravé ici." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x022C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(54) "この地に眠る魂\n"
SHIFT(54) "ハイラル王家に\n"
SHIFT(30) "忠誠を誓いし者の魂なり" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(27) "王家に仕える民　シーカー\n"
SHIFT(24) "ここ　カカリコに　村を築き\n"
SHIFT(27) "眠れる魂を　守るものなり" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(84) "R.I.P.\n"
SHIFT(8) "Here lie the souls of those who\n"
SHIFT(42) "swore fealty to the\n"
SHIFT(35) "Royal Family of Hyrule" QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(15) "The Sheikah, guardians of the\n"
SHIFT(17) "Royal Family and founders of\n"
SHIFT(2) "Kakariko, watch over these spirits\n"
SHIFT(30) "in their eternal slumber." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(83) "R.I.P.\n"
SHIFT(13) "Hier ruhen die Seelen derer, die\n"
SHIFT(25) "der Königsfamilie von Hyrule\n"
SHIFT(18) "ewige Treue geschworen haben." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(35) "Über ihre Seelen wachen\n"
SHIFT(36) "in Ewigkeit die Shiekah,\n"
SHIFT(24) "Beschützer der Königsfamilie\n"
SHIFT(40) "und Erbauer Kakarikos." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(50) "Paix à leur âme\n"
SHIFT(12) "Ici reposent éternellement les \n"
SHIFT(9) "fidèles serviteurs de la Famille \n"
SHIFT(54) "Royale d'Hyrule." QUICKTEXT_DISABLE
BOX_BREAK

QUICKTEXT_ENABLE SHIFT(9) "Les Sheikahs, protecteurs de la\n"
SHIFT(10) "Famille Royale et fondateurs de\n"
SHIFT(7) "Cocorico, veillent sur le sommeil\n"
SHIFT(50) "éternel des âmes." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x022D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
QUICKTEXT_ENABLE SHIFT(60) COLOR(BLUE) "ねむらずの滝\n"
COLOR(DEFAULT) SHIFT(9) "滝の流れは　ハイラル王のしもべ\n"
SHIFT(27) "王がねむる時　滝もねむる" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(40) COLOR(BLUE) "Sleepless Waterfall\n"
COLOR(DEFAULT) SHIFT(5) "The flow of this waterfall serves\n"
SHIFT(2) "the King of Hyrule. When the King\n"
SHIFT(9) "slumbers, so too do these falls." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(46) COLOR(BLUE) "Rastloser Wasserfall\n"
COLOR(DEFAULT) SHIFT(4) "Diese rastlosen Wasser dienen dem\n"
SHIFT(29) "König von Hyrule. Schläft er, so\n"
SHIFT(54) "rasten auch sie..." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(40) COLOR(BLUE) "Cascade Insomniaque\n"
COLOR(DEFAULT) SHIFT(2) "Le flux de cette cascade obéit au\n"
SHIFT(5) "Roi d'Hyrule. Lorsque le Roi dort,\n"
SHIFT(40) "la cascade se meure." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x022E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(51) "カエルが　じっと\n"
SHIFT(27) "こっちを　見つめている…"
)
,
MSG(
"Some frogs are looking at you\n"
"from underwater..."
)
,
MSG(
"Unter Wasser gibt es Frösche, die\n"
"Dich neugierig beobachten..."
)
,
MSG(
"Des crapauds vous toisent depuis\n"
"le fond des eaux..."
)
)

DEFINE_MESSAGE(0x022F, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
SHIFT(24) "お客サマ用　じゅうたんだ。\n"
SHIFT(48) "フカフカしてる…"
)
,
MSG(
"You're standing on a soft carpet\n"
"for guests...\n"
"It feels so plush under your feet!"
)
,
MSG(
"Du stehst auf einem weichen\n"
"Teppich, den nur Darunias\n"
"Gäste betreten dürfen..."
)
,
MSG(
"Vous foulez du pied un tapis \n"
"d'apparat...\n"
"C'est tout doux entre les orteils!"
)
)

DEFINE_MESSAGE(0x0230, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(21) "各部屋で　待ち受ける" COLOR(RED) "試練" COLOR(DEFAULT) "を\n"
SHIFT(42) "乗り越えた者だけが\n"
SHIFT(6) "我らの宝を　手にする事ができる！"
)
,
MSG(
"If you can overcome the " COLOR(RED) "trials " COLOR(DEFAULT) "in\n"
"the chambers ahead, then and only\n"
"then will you be qualified to hold\n"
"our secret treasure!"
)
,
MSG(
"Nur wenn Du die " COLOR(RED) "Prüfungen" COLOR(DEFAULT) " in den\n"
"verschiedenen Räumen bestehst,\n"
"wirst Du unseren streng gehüteten\n"
"Schatz erhalten!"
)
,
MSG(
"Passe maître des " COLOR(RED) "épreuves \n"
COLOR(DEFAULT) "suivantes et notre trésor secret \n"
"récompensera ta valeur!"
)
)

DEFINE_MESSAGE(0x0231, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(27) "我らの宝　手にしたければ\n"
"各部屋にかくされた　" COLOR(RED) "カギ" COLOR(DEFAULT) "を集めよ！"
)
,
MSG(
"If you desire to acquire our\n"
"hidden treasure, you must strive\n"
"to obtain the " COLOR(RED) "keys " COLOR(DEFAULT) "hidden in each\n"
"chamber!"
)
,
MSG(
"Bemühe Dich mit ganzer Kraft, \n"
"alle " COLOR(RED) "Schlüssel" COLOR(DEFAULT) " zu erhalten, \n"
"damit Du Dir unseren streng\n"
"gehüteten Schatz verdienst!"
)
,
MSG(
"Ouvre la voie jusqu'au trésor\n"
"secret en méritant les " COLOR(RED) "clés \n"
COLOR(DEFAULT) "dissimulées dans chaque salle!"
)
)

DEFINE_MESSAGE(0x0232, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(3) COLOR(RED) "時間内" COLOR(DEFAULT) "に　すべての敵を　葬るべし！"
)
,
MSG(
"Defeat all the enemies in a " COLOR(RED) "limited\n"
"time" COLOR(DEFAULT) "!"
)
,
MSG(
"Du hast nur " COLOR(RED) "begrenzt Zeit" COLOR(DEFAULT) ", um\n"
"alle Gegner zu beseitigen!"
)
,
MSG(
"Ecrase tes ennemis en un \n"
COLOR(RED) "temps record" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x0233, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(9) "水にひそむ　" COLOR(RED) "白き宝石" COLOR(DEFAULT) "を　集めよ！"
)
,
MSG(
"Collect the " COLOR(RED) "underwater gems" COLOR(DEFAULT) "!"
)
,
MSG(
"Sammle " COLOR(RED) "alle silbernen Steine" COLOR(DEFAULT) " ein,\n"
"die Du im Wasser finden kannst!"
)
,
MSG(
"Amasse les " COLOR(RED) "gemmes sous-marines" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x0234, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(36) "炎の海を　乗り越えよ！"
)
,
MSG(
"Cross the sea of fire!"
)
,
MSG(
"Überquere den " COLOR(RED) "feurigen" COLOR(DEFAULT) " " COLOR(RED) "See" COLOR(DEFAULT) "!"
)
,
MSG(
"Traverse les flots en feu!"
)
)

DEFINE_MESSAGE(0x0235, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(12) "かくされた通路の　ナゾを解け！"
)
,
MSG(
"Find a secret passage in this\n"
"room!"
)
,
MSG(
"Finde den " COLOR(RED) "geheimen Durchgang" COLOR(DEFAULT) "\n"
"in diesem Raum!"
)
,
MSG(
"Révèle le secret de cette pièce!"
)
)

DEFINE_MESSAGE(0x0236, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(21) COLOR(RED) "石像の目" COLOR(DEFAULT) "を　すべて　射抜け！"
)
,
MSG(
"Blind the " COLOR(RED) "eyes of the statue" COLOR(DEFAULT) "!"
)
,
MSG(
"Blende die " COLOR(RED) "Augen der Statue" COLOR(DEFAULT) "!"
)
,
MSG(
"Aveugle " COLOR(RED) "cette statue" COLOR(DEFAULT) "!"
)
)

DEFINE_MESSAGE(0x0237, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(48) COLOR(RED) "銀の腕" COLOR(DEFAULT) "を持つ者は\n"
SHIFT(12) "巨大なる石を　動かすであろう。"
)
,
MSG(
"One with " COLOR(RED) "silver hands" COLOR(DEFAULT) " shall move\n"
"a giant block!"
)
,
MSG(
"Der mit den " COLOR(RED) "Händen aus Silber" COLOR(DEFAULT) "\n"
"wird den großen Block verschieben\n"
"können!"
)
,
MSG(
"Celui aux " COLOR(RED) "doigts d'argent " COLOR(DEFAULT) "pourra\n"
"déplacer un bloc de géant!"
)
)

DEFINE_MESSAGE(0x0238, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(60) "持たざる者は\n"
SHIFT(24) "永遠のナゾに　苦しむべし。"
)
,
MSG(
"Without the necessary items, one\n"
"will be confounded by impossible\n"
"mysteries."
)
,
MSG(
"Ohne die rechten Hilfsmittel\n"
"wirst Du vor unlösbaren Aufgaben\n"
"stehen!"
)
,
MSG(
"Sans les bons objets, \n"
"la compréhension sera obscurcie \n"
"par d'innombrables mystères."
)
)

DEFINE_MESSAGE(0x0239, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(
SHIFT(24) "しかけられたワナを　越え、\n"
SHIFT(15) "すべての　" COLOR(RED) "白き宝石" COLOR(DEFAULT) "を　集めよ！"
)
,
MSG(
"Gather the " COLOR(RED) "jewels of white" COLOR(DEFAULT) ", while\n"
"avoiding traps and danger!"
)
,
MSG(
"Sammle die " COLOR(RED) "weißen Juwelen, " COLOR(DEFAULT) "jedoch\n"
"umgehe alle Fallen und Gefahren!"
)
,
MSG(
"Amasse les " COLOR(RED) "joyaux de platine" COLOR(DEFAULT) " et \n"
"évite pièges et dangers!"
)
)

DEFINE_MESSAGE(0x023A, TEXTBOX_TYPE_WOODEN, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(72) COLOR(LIGHTBLUE) "つりぼり\n"
COLOR(DEFAULT) SHIFT(45) "くいつきバツグン！" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(63) COLOR(LIGHTBLUE) "Fishing Pond" COLOR(DEFAULT) "\n"
SHIFT(7) "The fish are really biting today!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(70) COLOR(LIGHTBLUE) "Fischweiher" COLOR(DEFAULT) "\n"
SHIFT(38) "Heute beißen die Fische\n"
SHIFT(58) "wirklich gut!" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(81) COLOR(LIGHTBLUE) "Etang" COLOR(DEFAULT) "\n"
SHIFT(3) "Les poissons mordent aujourd'hui!" QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x023B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(72) COLOR(LIGHTBLUE) "・・・・・？？？" COLOR(DEFAULT)
)
,
MSG(
SHIFT(78) COLOR(LIGHTBLUE) "....???" COLOR(DEFAULT)
)
,
MSG(
SHIFT(77) COLOR(LIGHTBLUE) "???" COLOR(DEFAULT)
)
,
MSG(
SHIFT(78) COLOR(LIGHTBLUE) "....???" COLOR(DEFAULT)
)
)

DEFINE_MESSAGE(0x023C, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
QUICKTEXT_ENABLE SHIFT(42) "カカリコ村に伝わる\n"
SHIFT(36) COLOR(RED) "真実の目" COLOR(DEFAULT) "を持つ者のみ\n"
SHIFT(30) "闇は道をひらくであろう" QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(5) "The Shadow will yield only to one\n"
SHIFT(14) "with the " COLOR(RED) "eye of truth" COLOR(DEFAULT) ", handed\n"
SHIFT(28) "down in Kakariko Village." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE "Die Schatten werden sich nur dem\n"
"offenbaren, der die " COLOR(RED) "Augen der\n"
"Wahrheit" COLOR(DEFAULT) " besitzt. Es heißt, man\n"
"könne sie in Kakariko finden..." QUICKTEXT_DISABLE
)
,
MSG(
QUICKTEXT_ENABLE SHIFT(16) "Seul le détenteur de l'" COLOR(RED) "oeil de" COLOR(DEFAULT) "\n"
SHIFT(10) COLOR(RED) "vérité" COLOR(DEFAULT) " du Village Cocorico sera\n"
SHIFT(35) "porté par les Ombres." QUICKTEXT_DISABLE
)
)

DEFINE_MESSAGE(0x023D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(
SHIFT(60) COLOR(LIGHTBLUE) "開かないヨ…？\n"
COLOR(DEFAULT) SHIFT(66) COLOR(LIGHTBLUE) "ヘンだね…" COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Closed for the foreseeable future.\n"
"Awaiting the return of evil spirits." COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Auf absehbare Zeit geschlossen.\n"
"Wir warten auf die Rückkehr böser Geister." COLOR(DEFAULT)
)
,
MSG(
COLOR(LIGHTBLUE) "Fermé pour une durée indéterminée.\n"
"En attendant le retour des mauvais esprits." COLOR(DEFAULT)
)
)
