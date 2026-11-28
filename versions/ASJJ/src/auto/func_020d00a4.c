#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020cc5a0();
// clang-format off
asm void func_020d00a4(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_020cc5a0
}
// clang-format on
