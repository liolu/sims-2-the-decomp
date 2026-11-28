/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* _ll_ufrom_d from projets/heroes-of-mana/src/donor/_ll_ufrom_d.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm void func_0210d940(void)
{
    tst r1, #0x80000000
    bne L_0209C5B8
    ldr r2, [pc, #0x78]
    subs r2, r2, r1, lsr #20
    blt L_0209C5D0
    cmp r2, #0x40
    bge L_0209C5AC
    mov ip, r1, lsl #0xb
    orr ip, ip, #0x80000000
    orr ip, ip, r0, lsr #21
    cmp r2, #0x20
    ble L_0209C594
    sub r2, r2, #0x20
    mov r1, #0
    mov r0, ip, lsr r2
    bx lr
L_0209C594:
    mov r3, r0, lsl #0xb
    mov r1, ip, lsr r2
    mov r0, r3, lsr r2
    rsb r2, r2, #0x20
    orr r0, r0, ip, lsl r2
    bx lr
L_0209C5AC:
    mov r1, #0
    mov r0, #0
    bx lr
L_0209C5B8:
    cmn r1, #0x100000
    cmpeq r0, #0
    bhi L_0209C5D0
    mov r1, #0
    mov r0, #0
    bx lr
L_0209C5D0:
    mvn r1, #0
    mvn r0, #0
    bx lr
    dcd 0x0000043E
}// clang-format on
