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
COLOR(DEFAULT) "Once equipped, you can defend\n"
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
UNSKIPPABLE ITEM_ICON(0x5F) QUICKTEXT_ENABLE "You got the Silver Sword\n"
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
UNSKIPPABLE ITEM_ICON(0x5A) QUICKTEXT_ENABLE "A powerful foe left behind a\n"
COLOR(RED) "Hero's Sword" COLOR(DEFAULT) "! It is yours now!" QUICKTEXT_DISABLE "\n"
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
UNSKIPPABLE ITEM_ICON(ITEM_STRENGTH_GOLD_GAUNTLETS) QUICKTEXT_ENABLE "You got another " COLOR(BLUE) "Power Bracelet" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
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
UNSKIPPABLE ITEM_ICON(ITEM_BROKEN_GORONS_SWORD) QUICKTEXT_ENABLE "You traded the Poacher's Saw\n"
"for some high quality " COLOR(RED) "Gold Dust" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"Bring it to a master smith to\n"
"reforge a sword with it!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x800B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE "Hero's Sword   200 Rupees" QUICKTEXT_DISABLE "\n"
"\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x800C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Hero's Sword   200 Rupees\n"
COLOR(DEFAULT) "A sword fit for young heroes!\n"
"This powered-up sword can shoot\n"
"beams when charged!" QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x800D, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
ITEM_ICON(ITEM_TUNIC_GORON) QUICKTEXT_ENABLE "You got a " COLOR(RED) "Goron Tunic" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"This is a heat-resistant tunic.\n"
"Going to a hot place? No worry!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x800E, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
ITEM_ICON(ITEM_TUNIC_ZORA) QUICKTEXT_ENABLE "You got a " COLOR(BLUE) "Zora Tunic" COLOR(DEFAULT) "!" QUICKTEXT_DISABLE "\n"
"This is diving suit. Wear it\n"
"and you won't drown underwater."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x800F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Goron Tunic   200 Rupees\n"
COLOR(DEFAULT) "A tunic made by Gorons.\n"
"Protects you from heat damage." QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8010, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
QUICKTEXT_ENABLE COLOR(RED) "Zora Tunic   300 Rupees\n"
COLOR(DEFAULT) "A tunic made by Zoras. Prevents\n"
"you from drowning underwater." QUICKTEXT_DISABLE PERSISTENT
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8100, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
"Hi, boy! You seem like you\n"
"know how to handle one of\n"
"our Deku Shields."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8101, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
UNSKIPPABLE "It would be awesome to be\n"
"strong like you, boy! I really want to\n"
"be strong like you!"
BOX_BREAK

UNSKIPPABLE "I want to be strong enough so\n"
"I can beat up the Deku Scrubs, but..." TEXTID(0x105E)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8102, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
"You're such a strong boy!\n"
"I really want to be like you \n"
"someday even though I'll always be\n"
"weak."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8103, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(
),
MSG(
QUICKTEXT_ENABLE "If you want to succeed, you\n"
"must possess the powers to\n"
COLOR(BLUE) "move" COLOR(DEFAULT) " and "  COLOR(RED) "reflect" COLOR(DEFAULT) "." QUICKTEXT_DISABLE
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8104, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
QUICKTEXT_ENABLE "If you want to proceed, you\n"
"must collect the treasures\n"
"of both past and future." QUICKTEXT_DISABLE
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8105, TEXTBOX_TYPE_BLUE, TEXTBOX_POS_MIDDLE,
MSG(),
MSG(
"One with " COLOR(RED) "powerful hands" COLOR(DEFAULT) " shall move\n"
"a giant block!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8106, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
"Oh. I am closed right now. All of\n"
"the gorons are missing. I would\n"
"love to re-open the shop if you\n"
"could bring everyone back safely."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8107, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
UNSKIPPABLE "Who's there?  Is that you,\n"
NAME "...?"
BOX_BREAK

UNSKIPPABLE "Oh, it really is " NAME "!"
BOX_BREAK

UNSKIPPABLE "You've grown stronger since I\n"
"last saw you!"
BOX_BREAK

UNSKIPPABLE "I want to have a man-to-man talk\n"
"with you, but now's not the time."
BOX_BREAK

UNSKIPPABLE "Ganondorf is causing trouble on\n"
"Death Mountain again!\n"
"He has revived the evil, ancient\n"
"dragon Volvagia!"
BOX_BREAK

UNSKIPPABLE "On top of that, he is going to\n"
"feed my people to that evil dragon\n"
"as a warning to other races that\n"
"might resist him..."
BOX_BREAK

UNSKIPPABLE "If that fire-breathing dragon\n"
"escapes from the mountain, all of\n"
"Hyrule will become a burning\n"
"wasteland!"
BOX_BREAK

UNSKIPPABLE "I will go on ahead to try to seal\n"
"up the evil dragon..."
BOX_BREAK

UNSKIPPABLE "I'm concerned, though, because I\n"
"don't have the legendary hammer...\n"
"But I have no choice."
BOX_BREAK

UNSKIPPABLE NAME "...I'm asking you to\n"
"do this as my Sworn Brother..."
BOX_BREAK

UNSKIPPABLE "While I'm trying to deal with the\n"
"dragon, please save my people!"
BOX_BREAK

UNSKIPPABLE "The prisoners' cells are in the\n"
"opposite direction.\n"
"I'm counting on you, \n"
NAME "!"
)
,
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8108, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
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

UNSKIPPABLE "Which is what I would like to say...\n"
"But it seems time didn't pass for you.\n"
"How come you are still a child?"
BOX_BREAK

UNSKIPPABLE "How can fate be this cruel to us.\n"
"Seven long years...\n"
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
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8109, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(

UNSKIPPABLE "Hey, have you seen your old\n"
"friends? None of them recognized\n"
"you, did they?"
BOX_BREAK

UNSKIPPABLE "That's because the " COLOR(ADJUSTABLE) "Kokiri" COLOR(DEFAULT) " never\n"
"grow up! Even after seven years,\n"
"they're still kids!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x810A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "You must be wondering why only\n"
"you left the forest!"
BOX_BREAK

UNSKIPPABLE "Well, as you might have already \n"
"guessed, you are not a Kokiri!\n"
"You are actually a " COLOR(LIGHTBLUE) "Hylian" COLOR(DEFAULT) "!"
BOX_BREAK

UNSKIPPABLE "I am happy to finally reveal this\n"
"secret to you!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x810B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
"My Brotherrrr...\n"
"Opened a new storrrre...\n"
"It's Medigoron's Blade\n"
"Storrrrrrrre..."
BOX_BREAK

"He has the talent, but he is\n"
"so stubborrrrrn...."
BOX_BREAK

"All the blades he makes, arrrre\n"
"flawed through lack of\n"
"materrrrial quality...."
BOX_BREAK

"If you everrrr get your hands on\n"
"both his sworrrrrd and some gold\n"
"dust, I can reforrrrge it into the\n"
"strrrrrrongest blade for you...."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x810C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "That " COLOR(RED) "Silverrrr Sword" COLOR(DEFAULT) " could use some\n"
"worrrrrrrrrrk...\n"
"I really want to reforrrrge it, but..."
BOX_BREAK

UNSKIPPABLE "But because of yesterrrrrday's\n"
"errrrruption, my eyes are \n"
"irrrrrrrritated..."
BOX_BREAK

UNSKIPPABLE "There are fine eyedrops in Zora's\n"
"Domain... You will find them if you\n"
"go to see " COLOR(RED) "Kinnnnnng Zorrrrrra" COLOR(DEFAULT) "..." TEXTID(0x3055)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x810D, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
"Good kid! Thanks!\n"
"I won't have to visit Goron City\n"
"anymore so feel free to have this.\n"
"Get yourself a new sword with it."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x810E, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
"My spare saw broke, so I was\n"
"going to Goron City to forge a\n"
"new one with some high quality\n"
COLOR(RED) "Gold Dust" COLOR(DEFAULT) " I have."
BOX_BREAK

"Your coming here is great timing.\n"
"Will you give me my saw?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x810F, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
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
"You haven't aged a bit...!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8110, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE SHIFT(15) COLOR(LIGHTBLUE) "Look " NAME "!\n"
COLOR(DEFAULT) SHIFT(30) COLOR(LIGHTBLUE) "You look older now!!\n"
COLOR(DEFAULT) SHIFT(29) COLOR(LIGHTBLUE) "Wait... You still look the same?" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8111, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE COLOR(LIGHTBLUE) NAME "...we're back in the\n"
COLOR(DEFAULT) "Temple of Time" COLOR(LIGHTBLUE) "...\n"
"But have " COLOR(DEFAULT) "seven years" COLOR(LIGHTBLUE) " really\n"
"passed?" COLOR(DEFAULT)
BOX_BREAK

UNSKIPPABLE COLOR(LIGHTBLUE) "It appears you can't use the\n"
"Master Sword, but got a different\n"
"weapon instead.."
BOX_BREAK

COLOR(DEFAULT) UNSKIPPABLE COLOR(LIGHTBLUE) "Let's get out of here!" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8112, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
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

UNSKIPPABLE "across sand..."
BOX_BREAK

UNSKIPPABLE "and even into the darkest\n"
"of dungeons..."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8113, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "As I see you standing there\n"
"holding the mythical " COLOR(RED) "Razor\n"
"Sword" COLOR(DEFAULT) ", you really do look like the \n"
"legendary Hero of Time..."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8114, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
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

UNSKIPPABLE "And now that Ganondorf's evil has\n"
"spread, the time has come for you\n"
"to awaken" COLOR(RED) " " COLOR(DEFAULT) "as the Hero of Time!"
BOX_BREAK

"Well, do you understand your \n"
"destiny?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Yes\n"
    "No" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8115, TEXTBOX_TYPE_NONE_NO_SHADOW, TEXTBOX_POS_MIDDLE,
MSG(
),
MSG(
UNSKIPPABLE "I should have kept the promise\n"
"I made back then..." FADE(90)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8116, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "Past, present, future..."
BOX_BREAK

UNSKIPPABLE "The Master Sword is a ship with\n"
"which you can sail upstream and\n"
"downstream through time's river..."
BOX_BREAK

UNSKIPPABLE "The port for that ship is in the\n"
"Temple of Time..."
BOX_BREAK

UNSKIPPABLE "Despite your age and inability\n"
"to travel back, you must not falter\n"
"and do what it takes to become\n"
"a true hero..."
BOX_BREAK

UNSKIPPABLE "Listen to this " COLOR(YELLOW) "Requiem of Spirit" COLOR(DEFAULT) "...\n"
"This melody will lead you back\n"
"to the desert."
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8117, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "Kid, let me thank you."
BOX_BREAK

UNSKIPPABLE "Heheheh...look what the little\n"
"kid has become--a competent\n"
"swordsman!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8118, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
UNSKIPPABLE "Hey, what's up, " NAME "?\n"
"Surprised to see me?"
BOX_BREAK

UNSKIPPABLE "A long time in this world is\n"
"almost nothing to you, is it?\n"
"How mysterious!"
BOX_BREAK

UNSKIPPABLE "Even I thought that the tales of a\n"
"boy who could defeat the evil\n"
"was merely a legend."
BOX_BREAK

UNSKIPPABLE NAME ", you have fully\n"
"matured as the Hero of Time." TEXTID(0x607A)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x8119, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_BOTTOM,
MSG(),
MSG(
COLOR(LIGHTBLUE) "Equip the " COLOR(DEFAULT) "Power Bracelet\n"
COLOR(LIGHTBLUE) "and try to move things you \n"
"couldn't budge before!" COLOR(DEFAULT)
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x811A, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
UNSKIPPABLE "I want to ask you a favor..."
BOX_BREAK

UNSKIPPABLE "Will you go through this tiny hole\n"
"and get a treasure that's inside?"
BOX_BREAK

UNSKIPPABLE "The treasure is the " COLOR(BLUE) "Power\n"
"Bracelet" COLOR(DEFAULT) ". If you equip it, you\n"
"can easily push and pull very\n"
"heavy things!"
BOX_BREAK

UNSKIPPABLE "No, no, no, kid! Don't even think\n"
"about taking this treasure for \n"
"yourself!"
BOX_BREAK

UNSKIPPABLE "The Power Bracelet won't fit a\n"
"little kid like you if you try to\n"
"equip it! I want you to be a\n"
"good boy and give it to me!"
BOX_BREAK

UNSKIPPABLE "Ganondorf and his minions are\n"
"using the Spirit Temple as a\n"
"hideout."
BOX_BREAK

UNSKIPPABLE "Only the Power Bracelet will\n"
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
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x811B, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
"If you can successfully get the\n"
COLOR(BLUE) "Power Bracelet" COLOR(DEFAULT) "..."
BOX_BREAK

"I'll do something great for you!"
),
MSG(),
MSG()
)

DEFINE_MESSAGE(0x811C, TEXTBOX_TYPE_BLACK, TEXTBOX_POS_VARIABLE,
MSG(),
MSG(
"How about buying this silver sword\n"
"for 200 Rupees?\n"
TWO_CHOICE
    COLOR(ADJUSTABLE) "Buy\n"
    "Don't buy" COLOR(DEFAULT)
),
MSG(),
MSG()
)
