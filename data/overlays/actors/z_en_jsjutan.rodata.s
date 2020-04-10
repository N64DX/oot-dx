.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80A8E430
    .asciz "../z_en_jsjutan.c"
    .balign 4

glabel D_80A8E444
    .asciz "../z_en_jsjutan.c"
    .balign 4

glabel D_80A8E458
    .asciz "../z_en_jsjutan.c"
    .balign 4

glabel D_80A8E46C
    .asciz "../z_en_jsjutan.c"
    .balign 4

glabel D_80A8E480
    .float 0.02
    .balign 4

glabel D_80A8E484
 .word 0x45ABE000
glabel D_80A8E488
    .float 3000.0
    .balign 4

glabel D_80A8E48C
 .word 0x453B8000, 0x453B8000
glabel D_80A8E494
    .float 2500.0
    .balign 4

glabel D_80A8E498
    .float 1500.0
    .balign 4

glabel D_80A8E49C
    .float 0.01
    .balign 4

glabel D_80A8E4A0
    .float 3000.0
    .balign 4

glabel D_80A8E4A4
    .float 1500.0
    .balign 4

glabel D_80A8E4A8
    .float 0.01
    .balign 4

glabel D_80A8E4AC
 .word 0x3B343958

