    {
        ACTOR_EN_BB,
        {  -1459,   1263,  -1591 }, // pos
        {  0x0000, -0x238E,  0x0000 }, // rot
        -0x001 /* 0xFFFF */, // params
    }, // 0
    {
        ACTOR_EN_BB,
        {  -1578,    383,  -1532 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
        -0x001 /* 0xFFFF */, // params
    }, // 1
    {
        ACTOR_EN_BB,
        {  -1768,   1263,  -1354 }, // pos
        {  0x0000, -0x8000,  0x0000 }, // rot
        -0x001 /* 0xFFFF */, // params
    }, // 2
    {
        ACTOR_EN_BOX,
        {  -1645,   1156,  -1297 }, // pos
        {  0x0000, -0x0B6,  0x000F }, // rot
        -0x769C /* 0x8964 */, // params
    }, // 3
    {
        ACTOR_OBJ_OSHIHIKI,
        {  -1967,    623,  -1260 }, // pos
        {  0x0000,  0x4000,  0x0000 }, // rot
         0x0542, // params
    }, // 4
    {
        ACTOR_OBJ_OSHIHIKI,
        {  -2287,    603,  -1020 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
         0x0546, // params
    }, // 5
    {
        ACTOR_OBJ_BLOCKSTOP,
        {  -2287,    603,  -1020 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
         0x0005, // params
    }, // 6
    {
        ACTOR_OBJ_OSHIHIKI,
        {  -1787,    843,  -1140 }, // pos
        {  0x0000,  0x4000,  0x0000 }, // rot
         0x0702, // params
    }, // 7: Reposition upper push block
    {
        ACTOR_OBJ_OSHIHIKI,
        {  -1607,    823,  -1140 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
         0x0706, // params
    }, // 8
    {
        ACTOR_OBJ_BLOCKSTOP,
        {  -1607,    823,  -1140 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
         0x0007, // params
    }, // 9
    {
        ACTOR_ELF_MSG,
        {  -2175,    623,  -1258 }, // pos
        {  0x0014,  0x0029,  0x0000 }, // rot
         0x088F, // params
    }, // 10
    {
        ACTOR_OBJ_SWITCH,
        {  -1647,   1047,  -1251 }, // pos
        {  0x0000, -0x8000,  0x0000 }, // rot
         0x0F02, // params
    }, // 11
    {
        ACTOR_BG_MORI_HINERI,
        {  -1761,   1278,  -3015 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
         0x7F20, // params
    }, // 12
    {
        ACTOR_OBJ_SWITCH,
        {  -1760,   1401,  -1794 }, // pos
        {  0x0000,  0x0000,  0x0000 }, // rot
         0x2012, // params
    }, // 13
    
    { ACTOR_BG_GND_DARKMEIRO, {  -2027,    793,  -1140 }, {  0x0000,  0x0000,  0xC000 }, 0xFF01, }, // 14: Prevent jumping down from upper to lower push block (possible softlock)
    { ACTOR_BG_GND_DARKMEIRO, {  -1450,    850,  -1330 }, {  0x0000,  0x0000,  0x0000 }, 0x0701, }, // 15: Add clear blocks for climbing up top (0x05 and 0x07 push block switches)
    { ACTOR_BG_GND_DARKMEIRO, {  -1450,    925,  -1505 }, {  0x0000,  0x0000,  0x0000 }, 0x0501, }, // 16
    { ACTOR_BG_GND_DARKMEIRO, {  -1450,   1000,  -1330 }, {  0x0000,  0x0000,  0x0000 }, 0x0701, }, // 17
