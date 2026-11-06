#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020949d0();
// clang-format off
asm void func_02094c18(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_020949d0
}
// clang-format on
