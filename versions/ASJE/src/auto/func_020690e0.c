#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206672c();
// clang-format off
asm void func_020690e0(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_0206672c
}
// clang-format on
