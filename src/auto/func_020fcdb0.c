/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020fcdb0(void) {
    mov r1, #0x0
    mov r2, #0x0
    stmia r0!, {r1, r2}
    mov r3, #0x0
    stmia r0!, {r1, r2}
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r2, r3}
    stmia r0!, {r1, r2, r3}
    bx lr
}
// clang-format on
