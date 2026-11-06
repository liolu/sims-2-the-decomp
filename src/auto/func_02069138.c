#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0206675c();
// clang-format off
asm void func_02069138(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_0206675c
}
// clang-format on
