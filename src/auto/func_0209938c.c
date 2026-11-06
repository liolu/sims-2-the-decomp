#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020990a0();
// clang-format off
asm void func_0209938c(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_020990a0
}
// clang-format on
