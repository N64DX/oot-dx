.rdata
glabel D_8013A768
    .asciz "../z_collision_check.c"
    .balign 4

glabel D_8013A780
    .asciz "\x1b[31m"
    .balign 4

glabel D_8013A788
    .asciz "ClObjTris_set3():zelda_malloc()出来ません\n"
    # EUC-JP: 出来ません。 | Can not.
    .balign 4

glabel D_8013A7B4
    .asciz "\x1b[m"
    .balign 4

.text
glabel func_8005C964
/* AD3B04 8005C964 27BDFFD0 */  addiu $sp, $sp, -0x30
/* AD3B08 8005C968 AFBF002C */  sw    $ra, 0x2c($sp)
/* AD3B0C 8005C96C AFB30024 */  sw    $s3, 0x24($sp)
/* AD3B10 8005C970 AFB20020 */  sw    $s2, 0x20($sp)
/* AD3B14 8005C974 00A09025 */  move  $s2, $a1
/* AD3B18 8005C978 00809825 */  move  $s3, $a0
/* AD3B1C 8005C97C AFB40028 */  sw    $s4, 0x28($sp)
/* AD3B20 8005C980 AFB1001C */  sw    $s1, 0x1c($sp)
/* AD3B24 8005C984 AFB00018 */  sw    $s0, 0x18($sp)
/* AD3B28 8005C988 0C016DBB */  jal   func_8005B6EC
/* AD3B2C 8005C98C AFA7003C */   sw    $a3, 0x3c($sp)
/* AD3B30 8005C990 8FAE003C */  lw    $t6, 0x3c($sp)
/* AD3B34 8005C994 3C058014 */  lui   $a1, %hi(D_8013A768) # $a1, 0x8014
/* AD3B38 8005C998 24A5A768 */  addiu $a1, %lo(D_8013A768) # addiu $a1, $a1, -0x5898
/* AD3B3C 8005C99C 8DCF0008 */  lw    $t7, 8($t6)
/* AD3B40 8005C9A0 2406086C */  li    $a2, 2156
/* AD3B44 8005C9A4 000F2080 */  sll   $a0, $t7, 2
/* AD3B48 8005C9A8 008F2023 */  subu  $a0, $a0, $t7
/* AD3B4C 8005C9AC 000420C0 */  sll   $a0, $a0, 3
/* AD3B50 8005C9B0 008F2023 */  subu  $a0, $a0, $t7
/* AD3B54 8005C9B4 00042080 */  sll   $a0, $a0, 2
/* AD3B58 8005C9B8 0C01EBB8 */  jal   ZeldaArena_MallocDebug
/* AD3B5C 8005C9BC AE4F0018 */   sw    $t7, 0x18($s2)
/* AD3B60 8005C9C0 1440000D */  bnez  $v0, .L8005C9F8
/* AD3B64 8005C9C4 AE42001C */   sw    $v0, 0x1c($s2)
/* AD3B68 8005C9C8 3C048014 */  lui   $a0, %hi(D_8013A780) # $a0, 0x8014
/* AD3B6C 8005C9CC AE400018 */  sw    $zero, 0x18($s2)
/* AD3B70 8005C9D0 0C00084C */  jal   osSyncPrintf
/* AD3B74 8005C9D4 2484A780 */   addiu $a0, %lo(D_8013A780) # addiu $a0, $a0, -0x5880
/* AD3B78 8005C9D8 3C048014 */  lui   $a0, %hi(D_8013A788) # $a0, 0x8014
/* AD3B7C 8005C9DC 0C00084C */  jal   osSyncPrintf
/* AD3B80 8005C9E0 2484A788 */   addiu $a0, %lo(D_8013A788) # addiu $a0, $a0, -0x5878
/* AD3B84 8005C9E4 3C048014 */  lui   $a0, %hi(D_8013A7B4) # $a0, 0x8014
/* AD3B88 8005C9E8 0C00084C */  jal   osSyncPrintf
/* AD3B8C 8005C9EC 2484A7B4 */   addiu $a0, %lo(D_8013A7B4) # addiu $a0, $a0, -0x584c
/* AD3B90 8005C9F0 1000001D */  b     .L8005CA68
/* AD3B94 8005C9F4 00001025 */   move  $v0, $zero
.L8005C9F8:
/* AD3B98 8005C9F8 8E590018 */  lw    $t9, 0x18($s2)
/* AD3B9C 8005C9FC 2414005C */  li    $s4, 92
/* AD3BA0 8005CA00 8E50001C */  lw    $s0, 0x1c($s2)
/* AD3BA4 8005CA04 03340019 */  multu $t9, $s4
/* AD3BA8 8005CA08 8FB8003C */  lw    $t8, 0x3c($sp)
/* AD3BAC 8005CA0C 8F11000C */  lw    $s1, 0xc($t8)
/* AD3BB0 8005CA10 00004012 */  mflo  $t0
/* AD3BB4 8005CA14 02084821 */  addu  $t1, $s0, $t0
/* AD3BB8 8005CA18 0209082B */  sltu  $at, $s0, $t1
/* AD3BBC 8005CA1C 10200011 */  beqz  $at, .L8005CA64
/* AD3BC0 8005CA20 02602025 */   move  $a0, $s3
.L8005CA24:
/* AD3BC4 8005CA24 0C0171B0 */  jal   func_8005C6C0
/* AD3BC8 8005CA28 02002825 */   move  $a1, $s0
/* AD3BCC 8005CA2C 02602025 */  move  $a0, $s3
/* AD3BD0 8005CA30 02002825 */  move  $a1, $s0
/* AD3BD4 8005CA34 0C0171CC */  jal   func_8005C730
/* AD3BD8 8005CA38 02203025 */   move  $a2, $s1
/* AD3BDC 8005CA3C 8E4B0018 */  lw    $t3, 0x18($s2)
/* AD3BE0 8005CA40 8E4A001C */  lw    $t2, 0x1c($s2)
/* AD3BE4 8005CA44 2610005C */  addiu $s0, $s0, 0x5c
/* AD3BE8 8005CA48 01740019 */  multu $t3, $s4
/* AD3BEC 8005CA4C 2631003C */  addiu $s1, $s1, 0x3c
/* AD3BF0 8005CA50 00006012 */  mflo  $t4
/* AD3BF4 8005CA54 014C6821 */  addu  $t5, $t2, $t4
/* AD3BF8 8005CA58 020D082B */  sltu  $at, $s0, $t5
/* AD3BFC 8005CA5C 5420FFF1 */  bnezl $at, .L8005CA24
/* AD3C00 8005CA60 02602025 */   move  $a0, $s3
.L8005CA64:
/* AD3C04 8005CA64 24020001 */  li    $v0, 1
.L8005CA68:
/* AD3C08 8005CA68 8FBF002C */  lw    $ra, 0x2c($sp)
/* AD3C0C 8005CA6C 8FB00018 */  lw    $s0, 0x18($sp)
/* AD3C10 8005CA70 8FB1001C */  lw    $s1, 0x1c($sp)
/* AD3C14 8005CA74 8FB20020 */  lw    $s2, 0x20($sp)
/* AD3C18 8005CA78 8FB30024 */  lw    $s3, 0x24($sp)
/* AD3C1C 8005CA7C 8FB40028 */  lw    $s4, 0x28($sp)
/* AD3C20 8005CA80 03E00008 */  jr    $ra
/* AD3C24 8005CA84 27BD0030 */   addiu $sp, $sp, 0x30
