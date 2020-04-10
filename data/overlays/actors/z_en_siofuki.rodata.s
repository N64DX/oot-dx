.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80AFC820
    .asciz "../z_en_siofuki.c"
    .balign 4

glabel D_80AFC834
    .asciz "../z_en_siofuki.c"
    .balign 4

glabel D_80AFC848
    .asciz "../z_en_siofuki.c"
    .balign 4

glabel D_80AFC85C
 .word 0xC5BD5000
glabel D_80AFC860
    .float 0.1
    .balign 4

glabel D_80AFC864
 .word 0x3F13FA15
glabel D_80AFC868
    .float 3.14159274101
    .balign 4

glabel D_80AFC86C
 .word 0xC5BD5000
glabel D_80AFC870
 .word 0x4622F983
glabel D_80AFC874
    .float 0.3
    .balign 4

glabel D_80AFC878
 .word 0x3C23D70A, 0x00000000


