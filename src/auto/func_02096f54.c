#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02096e7c();
// clang-format off
asm void func_02096f54(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_02096e7c
}
// clang-format on
