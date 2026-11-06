#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210edcc(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0210ede8
    cmn ip, r3, lsl #0x1
    bhs L_0210ee04
L_0210ede0:
    mov r0, #0x0
    bx lr
L_0210ede8:
    movne r0, #0x1
    bxne lr
    cmp r0, #0x0
    movhi r0, #0x1
    bxhi lr
    cmn ip, r3, lsl #0x1
    blo L_0210ede0
L_0210ee04:
    movne r0, #0x1
    bxne lr
    cmp r2, #0x0
    movhi r0, #0x1
    bxhi lr
    b L_0210ede0
}
// clang-format on
