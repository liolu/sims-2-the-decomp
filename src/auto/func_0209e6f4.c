#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209d5a8();
// clang-format off
asm void func_0209e6f4(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_0209d5a8
}
// clang-format on
