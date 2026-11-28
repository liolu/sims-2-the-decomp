/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0203a2e8 from battle-of-giants-dinosaurs/src/auto/func_0203a2e8.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
#pragma ipa file
asm int func_02110124(void) {
    str     lr, [sp, #-4]!
    mov     r1, #0
    mov     r0, #0x07
    swi     0x123456
    ldr     pc, [sp], #4
}
// clang-format on
