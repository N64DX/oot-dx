.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80B22B40
    .asciz "../z_en_tp.c"
    .balign 4

glabel D_80B22B50
    .asciz "../z_en_tp.c"
    .balign 4

glabel D_80B22B60
    .asciz "../z_en_tp.c"
    .balign 4

glabel D_80B22B70
    .asciz "../z_en_tp.c"
    .balign 4

glabel D_80B22B80
    .float 0.3
    .balign 4

glabel D_80B22B84
    .float 0.2
    .balign 4

glabel D_80B22B88
    .float 0.2
    .balign 4

glabel D_80B22B8C
    .float 0.3
    .balign 4

glabel D_80B22B90
 .word 0x3E99999A, 0x00000000, 0x00000000, 0x00000000


