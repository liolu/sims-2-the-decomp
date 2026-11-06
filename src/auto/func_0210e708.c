#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210e708(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    cmphs r3, r1, lsl #0x1
    movlo r0, #0x0
    bxlo lr
    cmp r0, #0x0
    bicmi r0, r0, #0x80000000
    rsbmi r0, r0, #0x0
    cmp r1, #0x0
    bicmi r1, r1, #0x80000000
    rsbmi r1, r1, #0x0
    cmp r0, r1
    movge r0, #0x1
    movlt r0, #0x0
    bx lr
}
// clang-format on
