#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209898c();
// clang-format off
asm void func_02098db4(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_0209898c
}
// clang-format on
