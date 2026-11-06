#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020acd24();
// clang-format off
asm void func_020ad948(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_020acd24
}
// clang-format on
