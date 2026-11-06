#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020015f8(void) {
    cmp r2, #0x10
L_020015fc:
    blt L_020015fc
    mov ip, #0x10
    cmp ip, #0x10
L_02001608:
    bne L_02001608
}
// clang-format on
