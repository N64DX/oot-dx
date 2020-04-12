.late_rodata
glabel D_8086CE58
    .float 965.0

glabel D_8086CE5C
    .float 0.2
    .balign 4

glabel D_8086CE60
    .float 0.01
    .balign 4

.text
glabel func_8086C7D0
/* 00B30 8086C7D0 27BDFFD8 */  addiu   $sp, $sp, 0xFFD8           ## $sp = FFFFFFD8
/* 00B34 8086C7D4 AFB00020 */  sw      $s0, 0x0020($sp)           
/* 00B38 8086C7D8 00808025 */  or      $s0, $a0, $zero            ## $s0 = 00000000
/* 00B3C 8086C7DC AFBF0024 */  sw      $ra, 0x0024($sp)           
/* 00B40 8086C7E0 AFA5002C */  sw      $a1, 0x002C($sp)           
/* 00B44 8086C7E4 3C018087 */  lui     $at, %hi(D_8086CE58)       ## $at = 80870000
/* 00B48 8086C7E8 C426CE58 */  lwc1    $f6, %lo(D_8086CE58)($at)  
/* 00B4C 8086C7EC C604000C */  lwc1    $f4, 0x000C($s0)           ## 0000000C
/* 00B50 8086C7F0 3C018087 */  lui     $at, %hi(D_8086CE5C)       ## $at = 80870000
/* 00B54 8086C7F4 C42ACE5C */  lwc1    $f10, %lo(D_8086CE5C)($at) 
/* 00B58 8086C7F8 46062200 */  add.s   $f8, $f4, $f6              
/* 00B5C 8086C7FC 24840028 */  addiu   $a0, $a0, 0x0028           ## $a0 = 00000028
/* 00B60 8086C800 3C063F00 */  lui     $a2, 0x3F00                ## $a2 = 3F000000
/* 00B64 8086C804 3C074170 */  lui     $a3, 0x4170                ## $a3 = 41700000
/* 00B68 8086C808 44054000 */  mfc1    $a1, $f8                   
/* 00B6C 8086C80C 0C01E0C4 */  jal     Math_SmoothScaleMaxMinF
              
/* 00B70 8086C810 E7AA0010 */  swc1    $f10, 0x0010($sp)          
/* 00B74 8086C814 3C018087 */  lui     $at, %hi(D_8086CE60)       ## $at = 80870000
/* 00B78 8086C818 C430CE60 */  lwc1    $f16, %lo(D_8086CE60)($at) 
/* 00B7C 8086C81C 2405289E */  addiu   $a1, $zero, 0x289E         ## $a1 = 0000289E
/* 00B80 8086C820 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00B84 8086C824 4610003C */  c.lt.s  $f0, $f16                  
/* 00B88 8086C828 00000000 */  nop
/* 00B8C 8086C82C 45000007 */  bc1f    .L8086C84C                 
/* 00B90 8086C830 00000000 */  nop
/* 00B94 8086C834 0C00BE0A */  jal     Audio_PlayActorSound2
              
/* 00B98 8086C838 02002025 */  or      $a0, $s0, $zero            ## $a0 = 00000000
/* 00B9C 8086C83C 3C0E8087 */  lui     $t6, %hi(func_8086C868)    ## $t6 = 80870000
/* 00BA0 8086C840 25CEC868 */  addiu   $t6, $t6, %lo(func_8086C868) ## $t6 = 8086C868
/* 00BA4 8086C844 10000003 */  beq     $zero, $zero, .L8086C854   
/* 00BA8 8086C848 AE0E0164 */  sw      $t6, 0x0164($s0)           ## 00000164
.L8086C84C:
/* 00BAC 8086C84C 0C00BE5D */  jal     func_8002F974              
/* 00BB0 8086C850 2405208F */  addiu   $a1, $zero, 0x208F         ## $a1 = 0000208F
.L8086C854:
/* 00BB4 8086C854 8FBF0024 */  lw      $ra, 0x0024($sp)           
/* 00BB8 8086C858 8FB00020 */  lw      $s0, 0x0020($sp)           
/* 00BBC 8086C85C 27BD0028 */  addiu   $sp, $sp, 0x0028           ## $sp = 00000000
/* 00BC0 8086C860 03E00008 */  jr      $ra                        
/* 00BC4 8086C864 00000000 */  nop


