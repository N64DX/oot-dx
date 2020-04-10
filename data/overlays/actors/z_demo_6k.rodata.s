.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_809693E0
    .asciz "no = %d\n"
    .balign 4

glabel D_809693EC
    .asciz "bank_ID = %d\n"
    .balign 4

glabel D_809693FC
 .word 0x30000000
glabel D_80969400
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969410
 .word 0x30000000
glabel D_80969414
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969424
    .asciz "[36m  NA_SE_EN_GANON_FIRE_DEMO\n[m"
    .balign 4

glabel D_80969448
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969458
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969468
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969478
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969488
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969498
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_809694A8
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_809694B8
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_809694C8
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_809694D8
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_809694E8
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_809694F8
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969508
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969518
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969528
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969538
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969548
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969558
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969568
    .asciz "../z_demo_6k.c"
    .balign 4

glabel D_80969578
    .asciz "../z_demo_6k.c"
    .balign 4

glabel jtbl_80969588
.word L80966A38
.word L80966AA4
.word L80966AD4
.word L80966B1C
.word L80966B1C
.word L80966B1C
.word L80966B1C
.word L80966B1C
.word L80966B1C
.word L80966B54
.word L80966B54
.word L80966B80
.word L80966BCC
.word L80966C14
.word L80966C48
.word L80966C48
.word L80966C48
.word L80966C48
.word L80966C48
.word L80966C48
glabel D_809695D8
 .word 0x3C449BA6
glabel D_809695DC
 .word 0x3C088889
glabel D_809695E0
    .float 0.1
    .balign 4

glabel D_809695E4
 .word 0x3ADED289
glabel D_809695E8
 .word 0x3DD4FDF3
glabel D_809695EC
    .float 0.1
    .balign 4

glabel D_809695F0
 .word 0x477FFF00
glabel D_809695F4
 .word 0x477FFF00
glabel D_809695F8
    .float 0.05
    .balign 4

glabel D_809695FC
    .float 0.005
    .balign 4

glabel D_80969600
 .word 0x3D54FDF3
glabel D_80969604
 .word 0xC4C96000
glabel D_80969608
 .word 0x44C9A000
glabel D_8096960C
    .float 0.1
    .balign 4

glabel D_80969610
    .float 0.2
    .balign 4

glabel D_80969614
    .float 0.12
    .balign 4

glabel D_80969618
    .float 0.2
    .balign 4

glabel D_8096961C
    .float 0.0015
    .balign 4

glabel D_80969620
 .word 0x3D072B02
glabel D_80969624
    .float 0.03
    .balign 4

glabel D_80969628
    .float 0.02
    .balign 4

glabel D_8096962C
    .float 0.01
    .balign 4

glabel D_80969630
    .float 0.03
    .balign 4

glabel D_80969634
 .word 0x3A449BA6
glabel D_80969638
    .float 0.05
    .balign 4

glabel D_8096963C
    .float -1.57079637051
    .balign 4

glabel D_80969640
 .word 0x3F860A92
glabel D_80969644
    .float -1.57079637051
    .balign 4

glabel D_80969648
 .word 0x3C8EFA35
glabel D_8096964C
 .word 0x3C8EFA35
glabel D_80969650
    .float 9.58738019108e-05
    .balign 4

glabel D_80969654
    .float 1.57079637051
    .balign 4

glabel D_80969658
 .word 0x3C23D70A, 0x00000000


