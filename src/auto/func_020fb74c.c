#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020fb5fc();
extern void func_020fb60c();
extern void r2();
extern char data_02146264[];
extern char data_02146268[];
extern char data_02146270[];
// clang-format off
asm void func_020fb74c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x4
    ldr r0, =data_02146264
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {lr}
    bxeq lr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_020fb5fc
    ldr r1, =data_02146268
    ldr r0, =data_02146264
    ldr r1, [r1, #0x0]
    ldr r2, [r0, #0x0]
    ldr r0, =data_02146270
    blx r2
    bl func_020fb60c
    add sp, sp, #0x4
    ldmfd sp!, {lr}
    bx lr
}
// clang-format on
