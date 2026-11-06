#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02099e28();
// clang-format off
asm void func_0209a140(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_02099e28
}
// clang-format on
