#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02099678();
// clang-format off
asm void func_02099afc(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_02099678
}
// clang-format on
