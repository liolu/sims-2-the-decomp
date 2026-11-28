/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02039964 from battle-of-giants-dinosaurs/src/auto/func_02039964.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned long long u64;
// clang-format off
asm u64 func_0210f5a4(u64 left, u64 right)
{
    stmdb sp!, {r4, r5, lr}
    umull r5, r4, r0, r2
    mla r4, r0, r3, r4
    mla r4, r2, r1, r4
    mov r1, r4
    mov r0, r5
    ldmia sp!, {r4, r5, lr}
    bx lr
}
// clang-format on
