.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80B96010
    .asciz "木箱(据置)(arg %04xH)(item %04xH %d)\n"
    .balign 4

glabel D_80B96038
    .float 0.2
    .balign 4

glabel D_80B9603C
    .float 0.2
    .balign 4

glabel D_80B96040
    .float 0.05
    .balign 4

glabel D_80B96044
 .word 0x3F333333, 0x00000000, 0x00000000


