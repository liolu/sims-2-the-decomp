#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020941cc();
// clang-format off
asm void func_020945f4(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_020941cc
}
// clang-format on
