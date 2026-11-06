#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02110898();
// clang-format off
asm void func_02110474(void) {
    mov ip, sp
    sub sp, sp, #0x70
    str r4, [sp, #0x2c]
    str r5, [sp, #0x30]
    str r6, [sp, #0x34]
    str r7, [sp, #0x38]
    str r8, [sp, #0x3c]
    str r9, [sp, #0x40]
    str r10, [sp, #0x44]
    str r11, [sp, #0x48]
    str ip, [sp, #0x14]
    str ip, [sp, #0x5c]
    str lr, [sp, #0x10]
    mov ip, #0x0
    str ip, [sp, #0x0]
    str ip, [sp, #0x4]
    str ip, [sp, #0x8]
    mov r0, sp
    b func_02110898
}
// clang-format on
