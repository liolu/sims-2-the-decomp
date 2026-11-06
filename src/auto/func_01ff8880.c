#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8880(void) {
    add ip, r8, r9, asr #0x10
    ldrsb r11, [ip, #0x0]
    ldrsb ip, [ip, #0x1]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x11
    sub ip, ip, r11
    smulbb ip, r8, ip
    ldr r8, [lr], #0x8
    adds r9, r9, r10
    add ip, ip, r11, lsl #0xf
    ldrpl r10, [lr, #-0x4]
    smlawb r0, ip, r8, r0
    smlawt r1, ip, r8, r1
    ldr r8, [lr, #-0x18]
L_01ff88b8:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff88b8
    ldr r10, [lr, #-0x10]
    add ip, r8, r9, asr #0x10
    ldrsb r11, [ip, #0x0]
    ldrsb ip, [ip, #0x1]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x11
    sub ip, ip, r11
    smulbb ip, r8, ip
    ldr r8, [lr, #-0x8]
    adds r9, r9, r10
    add ip, ip, r11, lsl #0xf
    ldrpl r10, [lr, #-0x4]
    smlawb r2, ip, r8, r2
    smlawt r3, ip, r8, r3
    ldr r8, [lr, #-0x18]
L_01ff88fc:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff88fc
    ldr r10, [lr, #-0x10]
    add ip, r8, r9, asr #0x10
    ldrsb r11, [ip, #0x0]
    ldrsb ip, [ip, #0x1]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x11
    sub ip, ip, r11
    smulbb ip, r8, ip
    ldr r8, [lr, #-0x8]
    adds r9, r9, r10
    add ip, ip, r11, lsl #0xf
    ldrpl r10, [lr, #-0x4]
    smlawb r4, ip, r8, r4
    smlawt r5, ip, r8, r5
    ldr r8, [lr, #-0x18]
L_01ff8940:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff8940
    ldr r10, [lr, #-0x10]
    add ip, r8, r9, asr #0x10
    ldrsb r11, [ip, #0x0]
    ldrsb ip, [ip, #0x1]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x11
    sub ip, ip, r11
    smulbb ip, r8, ip
    ldr r8, [lr, #-0x8]
    adds r9, r9, r10
    add ip, ip, r11, lsl #0xf
    ldrpl r10, [lr, #-0x4]
    smlawb r6, ip, r8, r6
    smlawt r7, ip, r8, r7
L_01ff8980:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff8980
    str r9, [lr, #-0x14]
    ldmia lr!, {r8, r9, r10, pc}
}
// clang-format on
