.rdata
glabel D_8013A674
    .asciz "../z_collision_check.c"
    .balign 4

glabel D_8013A68C
    .asciz "\x1b[31m"
    .balign 4

glabel D_8013A694
    .asciz "ClObjJntSph_set3():zelda_malloc_出来ません。\n"
    # EUC-JP: 出来ません。 | Can not.
    .balign 4

glabel D_8013A6C4
    .asciz "\x1b[m"
    .balign 4

.text
glabel func_8005BE50
/* AD2FF0 8005BE50 27BDFFD8 */  addiu $sp, $sp, -0x28
/* AD2FF4 8005BE54 AFBF0024 */  sw    $ra, 0x24($sp)
/* AD2FF8 8005BE58 AFB30020 */  sw    $s3, 0x20($sp)
/* AD2FFC 8005BE5C AFB2001C */  sw    $s2, 0x1c($sp)
/* AD3000 8005BE60 00A09025 */  move  $s2, $a1
/* AD3004 8005BE64 00809825 */  move  $s3, $a0
/* AD3008 8005BE68 AFB10018 */  sw    $s1, 0x18($sp)
/* AD300C 8005BE6C AFB00014 */  sw    $s0, 0x14($sp)
/* AD3010 8005BE70 0C016DBB */  jal   func_8005B6EC
/* AD3014 8005BE74 AFA70034 */   sw    $a3, 0x34($sp)
/* AD3018 8005BE78 8FA30034 */  lw    $v1, 0x34($sp)
/* AD301C 8005BE7C 3C058014 */  lui   $a1, %hi(D_8013A674) # $a1, 0x8014
/* AD3020 8005BE80 24A5A674 */  addiu $a1, %lo(D_8013A674) # addiu $a1, $a1, -0x598c
/* AD3024 8005BE84 8C6E0008 */  lw    $t6, 8($v1)
/* AD3028 8005BE88 240605D2 */  li    $a2, 1490
/* AD302C 8005BE8C AE4E0018 */  sw    $t6, 0x18($s2)
/* AD3030 8005BE90 8C640008 */  lw    $a0, 8($v1)
/* AD3034 8005BE94 0C01EBB8 */  jal   ZeldaArena_MallocDebug
/* AD3038 8005BE98 00042180 */   sll   $a0, $a0, 6
/* AD303C 8005BE9C 1440000D */  bnez  $v0, .L8005BED4
/* AD3040 8005BEA0 AE42001C */   sw    $v0, 0x1c($s2)
/* AD3044 8005BEA4 3C048014 */  lui   $a0, %hi(D_8013A68C) # $a0, 0x8014
/* AD3048 8005BEA8 AE400018 */  sw    $zero, 0x18($s2)
/* AD304C 8005BEAC 0C00084C */  jal   osSyncPrintf
/* AD3050 8005BEB0 2484A68C */   addiu $a0, %lo(D_8013A68C) # addiu $a0, $a0, -0x5974
/* AD3054 8005BEB4 3C048014 */  lui   $a0, %hi(D_8013A694) # $a0, 0x8014
/* AD3058 8005BEB8 0C00084C */  jal   osSyncPrintf
/* AD305C 8005BEBC 2484A694 */   addiu $a0, %lo(D_8013A694) # addiu $a0, $a0, -0x596c
/* AD3060 8005BEC0 3C048014 */  lui   $a0, %hi(D_8013A6C4) # $a0, 0x8014
/* AD3064 8005BEC4 0C00084C */  jal   osSyncPrintf
/* AD3068 8005BEC8 2484A6C4 */   addiu $a0, %lo(D_8013A6C4) # addiu $a0, $a0, -0x593c
/* AD306C 8005BECC 10000019 */  b     .L8005BF34
/* AD3070 8005BED0 00001025 */   move  $v0, $zero
.L8005BED4:
/* AD3074 8005BED4 8E580018 */  lw    $t8, 0x18($s2)
/* AD3078 8005BED8 8E50001C */  lw    $s0, 0x1c($s2)
/* AD307C 8005BEDC 8FAF0034 */  lw    $t7, 0x34($sp)
/* AD3080 8005BEE0 0018C980 */  sll   $t9, $t8, 6
/* AD3084 8005BEE4 02194021 */  addu  $t0, $s0, $t9
/* AD3088 8005BEE8 0208082B */  sltu  $at, $s0, $t0
/* AD308C 8005BEEC 10200010 */  beqz  $at, .L8005BF30
/* AD3090 8005BEF0 8DF1000C */   lw    $s1, 0xc($t7)
.L8005BEF4:
/* AD3094 8005BEF4 02602025 */  move  $a0, $s3
/* AD3098 8005BEF8 0C016EB6 */  jal   func_8005BAD8
/* AD309C 8005BEFC 02002825 */   move  $a1, $s0
/* AD30A0 8005BF00 02602025 */  move  $a0, $s3
/* AD30A4 8005BF04 02002825 */  move  $a1, $s0
/* AD30A8 8005BF08 0C016ED2 */  jal   func_8005BB48
/* AD30AC 8005BF0C 02203025 */   move  $a2, $s1
/* AD30B0 8005BF10 8E4A0018 */  lw    $t2, 0x18($s2)
/* AD30B4 8005BF14 8E49001C */  lw    $t1, 0x1c($s2)
/* AD30B8 8005BF18 26100040 */  addiu $s0, $s0, 0x40
/* AD30BC 8005BF1C 000A5980 */  sll   $t3, $t2, 6
/* AD30C0 8005BF20 012B6021 */  addu  $t4, $t1, $t3
/* AD30C4 8005BF24 020C082B */  sltu  $at, $s0, $t4
/* AD30C8 8005BF28 1420FFF2 */  bnez  $at, .L8005BEF4
/* AD30CC 8005BF2C 26310024 */   addiu $s1, $s1, 0x24
.L8005BF30:
/* AD30D0 8005BF30 24020001 */  li    $v0, 1
.L8005BF34:
/* AD30D4 8005BF34 8FBF0024 */  lw    $ra, 0x24($sp)
/* AD30D8 8005BF38 8FB00014 */  lw    $s0, 0x14($sp)
/* AD30DC 8005BF3C 8FB10018 */  lw    $s1, 0x18($sp)
/* AD30E0 8005BF40 8FB2001C */  lw    $s2, 0x1c($sp)
/* AD30E4 8005BF44 8FB30020 */  lw    $s3, 0x20($sp)
/* AD30E8 8005BF48 03E00008 */  jr    $ra
/* AD30EC 8005BF4C 27BD0028 */   addiu $sp, $sp, 0x28
