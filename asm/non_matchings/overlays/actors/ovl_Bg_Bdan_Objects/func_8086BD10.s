.rdata
glabel D_8086CDF4

    .asciz "Bg_Bdan_Objects_Set_Contact_Ru1\nそんな送信モードは無い%d!!!!!!!!\n"
    .balign 4

.text
glabel func_8086BD10
/* 00070 8086BD10 27BDFFE8 */  addiu   $sp, $sp, 0xFFE8           ## $sp = FFFFFFE8
/* 00074 8086BD14 24010001 */  addiu   $at, $zero, 0x0001         ## $at = 00000001
/* 00078 8086BD18 10A10009 */  beq     $a1, $at, .L8086BD40       
/* 0007C 8086BD1C AFBF0014 */  sw      $ra, 0x0014($sp)           
/* 00080 8086BD20 24010002 */  addiu   $at, $zero, 0x0002         ## $at = 00000002
/* 00084 8086BD24 10A10009 */  beq     $a1, $at, .L8086BD4C       
/* 00088 8086BD28 240F0003 */  addiu   $t7, $zero, 0x0003         ## $t7 = 00000003
/* 0008C 8086BD2C 24010004 */  addiu   $at, $zero, 0x0004         ## $at = 00000004
/* 00090 8086BD30 10A10008 */  beq     $a1, $at, .L8086BD54       
/* 00094 8086BD34 3C028016 */  lui     $v0, 0x8016                ## $v0 = 80160000
/* 00098 8086BD38 1000000B */  beq     $zero, $zero, .L8086BD68   
/* 0009C 8086BD3C 00000000 */  nop
.L8086BD40:
/* 000A0 8086BD40 240E0002 */  addiu   $t6, $zero, 0x0002         ## $t6 = 00000002
/* 000A4 8086BD44 1000000B */  beq     $zero, $zero, .L8086BD74   
/* 000A8 8086BD48 AC8E01B8 */  sw      $t6, 0x01B8($a0)           ## 000001B8
.L8086BD4C:
/* 000AC 8086BD4C 10000009 */  beq     $zero, $zero, .L8086BD74   
/* 000B0 8086BD50 AC8F01B8 */  sw      $t7, 0x01B8($a0)           ## 000001B8
.L8086BD54:
/* 000B4 8086BD54 2442E660 */  addiu   $v0, $v0, 0xE660           ## $v0 = 8015E660
/* 000B8 8086BD58 94580F20 */  lhu     $t8, 0x0F20($v0)           ## 8015F580
/* 000BC 8086BD5C 37190040 */  ori     $t9, $t8, 0x0040           ## $t9 = 00000040
/* 000C0 8086BD60 10000004 */  beq     $zero, $zero, .L8086BD74   
/* 000C4 8086BD64 A4590F20 */  sh      $t9, 0x0F20($v0)           ## 8015F580
.L8086BD68:
/* 000C8 8086BD68 3C048087 */  lui     $a0, %hi(D_8086CDF4)       ## $a0 = 80870000
/* 000CC 8086BD6C 0C00084C */  jal     osSyncPrintf
              
/* 000D0 8086BD70 2484CDF4 */  addiu   $a0, $a0, %lo(D_8086CDF4)  ## $a0 = 8086CDF4
.L8086BD74:
/* 000D4 8086BD74 8FBF0014 */  lw      $ra, 0x0014($sp)           
/* 000D8 8086BD78 27BD0018 */  addiu   $sp, $sp, 0x0018           ## $sp = 00000000
/* 000DC 8086BD7C 03E00008 */  jr      $ra                        
/* 000E0 8086BD80 00000000 */  nop


