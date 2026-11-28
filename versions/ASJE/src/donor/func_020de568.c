/* compiler: 1.2/sp2p3 -nointerworking */
/* func_020de6a4 from sims-2-the/src/auto/func_020de6a4.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02107fcc(u32, M2C_UNK, s32);
u32 func_020de568(void *arg0) {
    u8 *p = (u8 *) arg0;
    u32 a = *(u32 *) (p + 0x4c);
    u32 b = *(u32 *) (p + 0x40);
    u32 n;
    u32 r;
    u32 c;
    u32 d;
    if (b < a) {
        n                   = a - b;
        r                   = (n * 1000) / ((*(u32 *) (p + 0x78) * (*(u32 *) (p + 0x70) * *(u32 *) (p + 0x74))) >> 3);
        *(u32 *) (p + 0x38) = *(u32 *) (p + 0x38) - n;
        c                   = *(u32 *) (p + 0x2c);
        d                   = *(u32 *) (p + 0x38);
        if (d < c) {
            u32 k = c - d;
            *(u32 *) (p + 0x38) += *(u32 *) (p + 0x28);
            func_02107fcc(*(u32 *) (p + 0x2c), 0, n - k);
            func_02107fcc(*(u32 *) (p + 0x38), 0, k);
        } else {
            func_02107fcc(d, 0, n);
        }
        *(u32 *) (p + 0x40) = *(u32 *) (p + 0x40) + n;
        return r;
    }
    return 0;
}
