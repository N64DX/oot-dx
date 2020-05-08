.rdata
glabel D_80144CBC
    # EUC-JP: オーディオマネージャスレッド実行開始 | Start running audio manager thread
    .asciz "オーディオマネージャスレッド実行開始\n"
    .balign 4

.text
glabel func_800C3E70
/* B3B010 800C3E70 27BDFFB8 */  addiu $sp, $sp, -0x48
/* B3B014 800C3E74 AFB50028 */  sw    $s5, 0x28($sp)
/* B3B018 800C3E78 AFB00014 */  sw    $s0, 0x14($sp)
/* B3B01C 800C3E7C 00808025 */  move  $s0, $a0
/* B3B020 800C3E80 0080A825 */  move  $s5, $a0
/* B3B024 800C3E84 AFBF002C */  sw    $ra, 0x2c($sp)
/* B3B028 800C3E88 3C048014 */  lui   $a0, %hi(D_80144CBC) # $a0, 0x8014
/* B3B02C 800C3E8C AFB40024 */  sw    $s4, 0x24($sp)
/* B3B030 800C3E90 AFB30020 */  sw    $s3, 0x20($sp)
/* B3B034 800C3E94 AFB2001C */  sw    $s2, 0x1c($sp)
/* B3B038 800C3E98 AFB10018 */  sw    $s1, 0x18($sp)
/* B3B03C 800C3E9C AFA00038 */  sw    $zero, 0x38($sp)
/* B3B040 800C3EA0 0C00084C */  jal   osSyncPrintf
/* B3B044 800C3EA4 24844CBC */   addiu $a0, %lo(D_80144CBC) # addiu $a0, $a0, 0x4cbc
/* B3B048 800C3EA8 0C03DC3E */  jal   func_800F70F8
/* B3B04C 800C3EAC 00000000 */   nop   
/* B3B050 800C3EB0 3C048000 */  lui   $a0, %hi(DmaMgr_DmaCallback0) # $a0, 0x8000
/* B3B054 800C3EB4 0C038C07 */  jal   func_800E301C
/* B3B058 800C3EB8 24840F68 */   addiu $a0, %lo(DmaMgr_DmaCallback0) # addiu $a0, $a0, 0xf68
/* B3B05C 800C3EBC 0C03DC47 */  jal   func_800F711C
/* B3B060 800C3EC0 00000000 */   nop   
/* B3B064 800C3EC4 260400C8 */  addiu $a0, $s0, 0xc8
/* B3B068 800C3EC8 00002825 */  move  $a1, $zero
/* B3B06C 800C3ECC 0C000C18 */  jal   osSendMesg
/* B3B070 800C3ED0 24060001 */   li    $a2, 1
/* B3B074 800C3ED4 26140074 */  addiu $s4, $s0, 0x74
/* B3B078 800C3ED8 02803025 */  move  $a2, $s4
/* B3B07C 800C3EDC 8E040000 */  lw    $a0, ($s0)
/* B3B080 800C3EE0 0C034C88 */  jal   IrqMgr_AddClient
/* B3B084 800C3EE4 27A5003C */   addiu $a1, $sp, 0x3c
/* B3B088 800C3EE8 24130004 */  li    $s3, 4
/* B3B08C 800C3EEC 24120001 */  li    $s2, 1
/* B3B090 800C3EF0 27B10038 */  addiu $s1, $sp, 0x38
/* B3B094 800C3EF4 02802025 */  move  $a0, $s4
.L800C3EF8:
/* B3B098 800C3EF8 02202825 */  move  $a1, $s1
/* B3B09C 800C3EFC 0C000CA0 */  jal   osRecvMesg
/* B3B0A0 800C3F00 02403025 */   move  $a2, $s2
/* B3B0A4 800C3F04 8FAE0038 */  lw    $t6, 0x38($sp)
/* B3B0A8 800C3F08 85C20000 */  lh    $v0, ($t6)
/* B3B0AC 800C3F0C 10520005 */  beq   $v0, $s2, .L800C3F24
/* B3B0B0 800C3F10 00000000 */   nop   
/* B3B0B4 800C3F14 10530019 */  beq   $v0, $s3, .L800C3F7C
/* B3B0B8 800C3F18 00000000 */   nop   
/* B3B0BC 800C3F1C 1000FFF6 */  b     .L800C3EF8
/* B3B0C0 800C3F20 02802025 */   move  $a0, $s4
.L800C3F24:
/* B3B0C4 800C3F24 0C030F2E */  jal   func_800C3CB8
/* B3B0C8 800C3F28 02002025 */   move  $a0, $s0
/* B3B0CC 800C3F2C 8E0F007C */  lw    $t7, 0x7c($s0)
/* B3B0D0 800C3F30 51E0FFF1 */  beql  $t7, $zero, .L800C3EF8
/* B3B0D4 800C3F34 02802025 */   move  $a0, $s4
/* B3B0D8 800C3F38 02802025 */  move  $a0, $s4
.L800C3F3C:
/* B3B0DC 800C3F3C 02202825 */  move  $a1, $s1
/* B3B0E0 800C3F40 0C000CA0 */  jal   osRecvMesg
/* B3B0E4 800C3F44 02403025 */   move  $a2, $s2
/* B3B0E8 800C3F48 8FB80038 */  lw    $t8, 0x38($sp)
/* B3B0EC 800C3F4C 87020000 */  lh    $v0, ($t8)
/* B3B0F0 800C3F50 50520006 */  beql  $v0, $s2, .L800C3F6C
/* B3B0F4 800C3F54 8EB9007C */   lw    $t9, 0x7c($s5)
/* B3B0F8 800C3F58 54530004 */  bnel  $v0, $s3, .L800C3F6C
/* B3B0FC 800C3F5C 8EB9007C */   lw    $t9, 0x7c($s5)
/* B3B100 800C3F60 0C030F90 */  jal   func_800C3E40
/* B3B104 800C3F64 02002025 */   move  $a0, $s0
/* B3B108 800C3F68 8EB9007C */  lw    $t9, 0x7c($s5)
.L800C3F6C:
/* B3B10C 800C3F6C 5720FFF3 */  bnezl $t9, .L800C3F3C
/* B3B110 800C3F70 02802025 */   move  $a0, $s4
/* B3B114 800C3F74 1000FFE0 */  b     .L800C3EF8
/* B3B118 800C3F78 02802025 */   move  $a0, $s4
.L800C3F7C:
/* B3B11C 800C3F7C 0C030F90 */  jal   func_800C3E40
/* B3B120 800C3F80 02002025 */   move  $a0, $s0
/* B3B124 800C3F84 1000FFDC */  b     .L800C3EF8
/* B3B128 800C3F88 02802025 */   move  $a0, $s4
/* B3B12C 800C3F8C 00000000 */  nop   
/* B3B130 800C3F90 00000000 */  nop   
/* B3B134 800C3F94 00000000 */  nop   
/* B3B138 800C3F98 00000000 */  nop   
/* B3B13C 800C3F9C 00000000 */  nop   
/* B3B140 800C3FA0 8FBF002C */  lw    $ra, 0x2c($sp)
/* B3B144 800C3FA4 8FB00014 */  lw    $s0, 0x14($sp)
/* B3B148 800C3FA8 8FB10018 */  lw    $s1, 0x18($sp)
/* B3B14C 800C3FAC 8FB2001C */  lw    $s2, 0x1c($sp)
/* B3B150 800C3FB0 8FB30020 */  lw    $s3, 0x20($sp)
/* B3B154 800C3FB4 8FB40024 */  lw    $s4, 0x24($sp)
/* B3B158 800C3FB8 8FB50028 */  lw    $s5, 0x28($sp)
/* B3B15C 800C3FBC 03E00008 */  jr    $ra
/* B3B160 800C3FC0 27BD0048 */   addiu $sp, $sp, 0x48

