.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_809C5720
    .asciz "[32m☆☆☆☆☆ 正常終了 ☆☆☆☆☆ \n[m"
    .balign 4

glabel D_809C574C
    .asciz "[32m☆☆☆☆☆ あぁ回復！ ☆☆☆☆☆ \n[m"
    .balign 4

glabel D_809C5778
    .float 0.1
    .balign 4

glabel D_809C577C
    .float 0.02
    .balign 4

glabel D_809C5780
 .word 0xC3F28000, 0x00000000, 0x00000000, 0x00000000


