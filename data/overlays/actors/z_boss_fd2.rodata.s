.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_808D62D0
    .asciz "UP INIT 1\n"
    .balign 4

glabel D_808D62DC
    .asciz "UP INIT 2\n"
    .balign 4

glabel D_808D62E8
    .asciz "UP 1    mode %d\n"
    .balign 4

glabel D_808D62FC
    .asciz "UP 1.5 \n"
    .balign 4

glabel D_808D6308
    .asciz "UP time %d \n"
    .balign 4

glabel D_808D6318
    .asciz "PL time %x \n"
    .balign 4

glabel D_808D6328
    .asciz "MT time %x \n"
    .balign 4

glabel D_808D6338
    .asciz "UP 1.6 \n"
    .balign 4

glabel D_808D6344
    .asciz "UP 1.7 \n"
    .balign 4

glabel D_808D6350
    .asciz "UP 2\n"
    .balign 4

glabel D_808D6358
    .asciz "UP INIT 1\n"
    .balign 4

glabel D_808D6364
    .asciz "SW1 = %d\n"
    .balign 4

glabel D_808D6370
    .asciz "SW2 = %d\n"
    .balign 4

glabel D_808D637C
    .asciz "[32m"
    .balign 4

glabel D_808D6384
    .asciz "damage   %d\n"
    .balign 4

glabel D_808D6394
 .word 0x1B5B6D00
glabel D_808D6398
    .asciz "hp %d\n"
    .balign 4

glabel D_808D63A0
    .asciz "FD2 move start \n"
    .balign 4

glabel D_808D63B4
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D63C4
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D63D4
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D63E4
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D63F4
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6404
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6414
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6424
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6434
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6444
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6454
    .asciz "FD2 draw start \n"
    .balign 4

glabel D_808D6468
    .asciz "../z_boss_fd2.c"
    .balign 4

glabel D_808D6478
 .word 0xC4548000
glabel D_808D647C
 .word 0x410E6666
glabel D_808D6480
 .word 0x410E6666
glabel D_808D6484
 .word 0x40490FDB
glabel D_808D6488
 .word 0x40C90FDB
glabel jtbl_808D648C
.word L808D4124
.word L808D41FC
.word L808D43D4
.word L808D4420
.word L808D4594
.word L808D4728
glabel D_808D64A4
 .word 0x3DCCCCCD
glabel D_808D64A8
 .word 0x3CA3D70A
glabel D_808D64AC
 .word 0x40490FDB
glabel D_808D64B0
 .word 0x3E4CCCCD
glabel D_808D64B4
 .word 0x3CA3D70A
glabel D_808D64B8
 .word 0x3CA3D70A
glabel D_808D64BC
 .word 0x3E99999A
glabel D_808D64C0
 .word 0x45BB8000
glabel D_808D64C4
 .word 0x44A28000
glabel D_808D64C8
 .word 0x3DCCCCCD
glabel D_808D64CC
 .word 0xC4638000
glabel D_808D64D0
 .word 0x3FC90FDB
glabel D_808D64D4
 .word 0x3A6BEDFA
glabel D_808D64D8
 .word 0x3C23D70A
glabel D_808D64DC
 .word 0x45ABC000
glabel D_808D64E0
 .word 0x45AEE000
glabel D_808D64E4
 .word 0x3E99999A, 0x00000000, 0x00000000


