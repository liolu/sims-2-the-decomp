#include "m2c.h"

extern char data_02146388[];
extern char data_0214638c[];
extern char data_02146390[];
extern char data_02146394[];
extern char data_02146398[];
extern char data_0214639c[];
extern char data_021463a0[];
extern char data_021463a4[];
extern char data_021463a8[];
extern char data_021463e0[];
extern char data_02146660[];
extern char data_02147660[];
extern char data_02147e48[];
extern char data_02147ec0[];
extern void func_020fd564();
extern void func_020fd854();
extern void func_020fda14();
extern void func_020fda5c();
extern void func_020fde24();
// clang-format on

/* func_020fdc2c - initialises the 0x020c2140 arena and its 255-node free list.
 *
 * Best C reconstruction (build/agent_work/func_020fdc2c/ta.c): same 56
 * instructions, same mnemonics, same addressing modes, same offsets, same
 * length (0x118); a register-normalised diff against the target is 0.  The only
 * residual difference is the physical register assignment of 16 operands in the
 * block that follows the list-building loop (target r5,r4,lr,ip,r3,r1,... vs
 * candidate r6,r5,r4,lr,ip,r3,...).
 *
 * Probed with mwccarm -O4,p over every installed profile:
 *   1.2/base, 1.2/b56, 1.2/sp2, 1.2/sp2p3 -> 16/70 diff, 0x118 (registers only)
 *   1.2/sp3, 1.2/sp4                      -> 70/70, 0x110
 *   2.0/base, 2.0/sp1, 2.0/sp1p2, 2.0/sp1p5, 2.0/sp1p6, 2.0/sp1p7, 2.0/sp2,
 *   2.0/sp2p2, 2.0/sp2p3, 2.0/sp2p4       -> 70/70, 0x104
 *   dsi/1.1, 1.1p1, 1.2, 1.2p1, 1.2p2, 1.3, 1.3p1, 1.6sp1, 1.6sp2 -> 70/70, 0x100
 *   plus -proc arm7tdmi (38/70), -O3,p (16/70), -O4,s and -O4 (70/70).
 * Also probed in C, always with the target's exact instruction stream: the loop
 * value as i*0x18+base, base+i*0x18, i*sizeof(T), address of arr[i], arr+i,
 * (u8 *)base+i*sizeof(T), (u32) casts, s32/u8/struct pointers, do-while, while,
 * for (i=0;i<0xFF;i++), for (;;) break, byte/int base variables, named
 * temporaries, every local declaration order, throwaway locals, s32/u32/void
 * pointer/M2C_UNK pointer global types, extern declaration order and unused
 * parameters - all give the same 16 register differences.
 *
 * No C form and no compiler profile assigns those operands the way the original
 * build did, so this routine is written in assembly.
 */
// clang-format off
asm void func_020fdc2c(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #4
    bl func_020fd564
    ldr r3, =data_02146660
    ldr r0, =data_02146388
    mov r4, #0
    str r3, [r0]
    mov r1, r3
    mov r0, #0x18
L_020192a8:
    add r4, r4, #1
    mla r2, r4, r0, r1
    cmp r4, #0xff
    str r2, [r3], #0x18
    blt L_020192a8
    ldr r7, =data_02147660
    mov r10, #0
    ldr r5, =data_02146390
    ldr r4, =data_02146394
    ldr lr, =data_021463a4
    ldr r12, =data_0214639c
    ldr r3, =data_021463a0
    ldr r1, =data_0214638c
    ldr r9, =data_02147e48
    ldr r6, =data_02146398
    ldr r2, =data_021463a8
    mov r8, #1
    ldr r0, =data_021463e0
    ldr r11, =data_02147ec0
    str r9, [r6]
    str r10, [r7, #0x7e8]
    str r10, [r5]
    str r10, [r4]
    str r10, [lr]
    str r10, [r12]
    str r10, [r3]
    str r8, [r2]
    str r10, [r1]
    str r0, [r11]
    bl func_020fde24
    mov r0, r8
    bl func_020fda5c
    cmp r0, #0
    addeq sp, sp, #4
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bxeq lr
    mov r2, #0x1d
    mov r1, r11
    str r2, [r0, #4]
    ldr r1, [r1]
    str r1, [r0, #8]
    bl func_020fda14
    mov r0, r8
    bl func_020fd854
    add sp, sp, #4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
