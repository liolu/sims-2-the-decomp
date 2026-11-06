#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_01ff8c00(void) {
    add ip, r8, r9, asr #0x10
    ldrsh r11, [ip, ip]!
    ldrsh ip, [ip, #0x2]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x10
    adds r9, r9, r10
    ldrpl r10, [lr, #0x4]
    mov r11, r11, lsl #0x10
    sub ip, ip, r11, asr #0x10
    mla r11, ip, r8, r11
    ldr r8, [lr], #0x8
L_01ff8c2c:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff8c2c
    ldr ip, [lr, #-0x18]
    smlawb r0, r11, r8, r0
    smlawt r1, r11, r8, r1
    add ip, ip, r9, asr #0x10
    ldrsh r11, [ip, ip]!
    ldrsh ip, [ip, #0x2]
    ldr r10, [lr, #-0x10]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x10
    adds r9, r9, r10
    ldrpl r10, [lr, #-0x4]
    mov r11, r11, lsl #0x10
    sub ip, ip, r11, asr #0x10
    mla r11, ip, r8, r11
    ldr r8, [lr, #-0x8]
L_01ff8c70:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff8c70
    ldr ip, [lr, #-0x18]
    smlawb r2, r11, r8, r2
    smlawt r3, r11, r8, r3
    add ip, ip, r9, asr #0x10
    ldrsh r11, [ip, ip]!
    ldrsh ip, [ip, #0x2]
    ldr r10, [lr, #-0x10]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x10
    adds r9, r9, r10
    ldrpl r10, [lr, #-0x4]
    mov r11, r11, lsl #0x10
    sub ip, ip, r11, asr #0x10
    mla r11, ip, r8, r11
    ldr r8, [lr, #-0x8]
L_01ff8cb4:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff8cb4
    ldr ip, [lr, #-0x18]
    smlawb r4, r11, r8, r4
    smlawt r5, r11, r8, r5
    add ip, ip, r9, asr #0x10
    ldrsh r11, [ip, ip]!
    ldrsh ip, [ip, #0x2]
    ldr r10, [lr, #-0x10]
    mov r8, r9, lsl #0x10
    mov r8, r8, lsr #0x10
    adds r9, r9, r10
    ldrpl r10, [lr, #-0x4]
    mov r11, r11, lsl #0x10
    sub ip, ip, r11, asr #0x10
    mla r11, ip, r8, r11
    ldr r8, [lr, #-0x8]
L_01ff8cf8:
    subpls r9, r9, r10, lsl #0x10
    bpl L_01ff8cf8
    str r9, [lr, #-0x14]
    smlawb r6, r11, r8, r6
    smlawt r7, r11, r8, r7
    ldmia lr!, {r8, r9, r10, pc}
}
// clang-format on
