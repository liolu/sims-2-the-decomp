#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210ee1c(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0210ee38
    cmn ip, r3, lsl #0x1
    bhs L_0210ee54
L_0210ee30:
    mov r0, #0x1
    bx lr
L_0210ee38:
    movne r0, #0x0
    bxne lr
    cmp r0, #0x0
    movhi r0, #0x0
    bxhi lr
    cmn ip, r3, lsl #0x1
    blo L_0210ee30
L_0210ee54:
    movne r0, #0x0
    bxne lr
    cmp r2, #0x0
    movhi r0, #0x0
    bxhi lr
    b L_0210ee30
}
// clang-format on
