#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066bb8();
// clang-format off
asm void func_020690d0(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_02066bb8
}
// clang-format on
