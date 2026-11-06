#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void _ZSt9terminatev();
extern void func_02110850();
// clang-format off
asm void func_02111f7c(void) {
    bl _ZSt9terminatev
    add r0, r11, #0x0
    bl func_02110850
    ldr sp, [r11, #0x14]
    add sp, r11, #0x18
    ldmfd sp!, {r4, r5, r6, r7, r11, lr}
    bx lr
}
// clang-format on
