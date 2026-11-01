/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* Matrix_Take33From44 from https://github.com/sturmds/advance-wars-dual-strike-decomp src/sdk/fx/mtx_copy44_to_33.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef signed int s32;
typedef s32 fx32;
typedef struct MtxFx44 {
    fx32 m[4][4];
} MtxFx44;
typedef struct MtxFx33 {
    fx32 m[3][3];
} MtxFx33;
extern void func_020f57e0(MtxFx44 *src, MtxFx33 *dest);
// clang-format off
asm void func_020f57e0(MtxFx44 *src, MtxFx33 *dest)
{
    ldmia r0!, {r2, r3, ip}
    add r0, r0, #4
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    add r0, r0, #4
    stmia r1!, {r2, r3, ip}
    ldmia r0!, {r2, r3, ip}
    add r0, r0, #4
    stmia r1!, {r2, r3, ip}
    bx lr
}
// clang-format on
