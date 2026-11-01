/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0210e6f8 from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/os/func_0210e6f8.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern void func_020fb6bc(void);
extern void func_020fb74c(void);
// clang-format off
asm void func_020fb6a8(void)
{
    stmdb sp!, {lr}
    bl func_020fb6bc
    bl func_020fb74c
    ldmia sp!, {lr}
    bx lr
}
// clang-format on
