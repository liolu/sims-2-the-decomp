/* compiler: 1.2/sp2p3  */
/* func_0206a288 from sims-2-the/src/auto/func_0206a288.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4(s32 a);
};
extern "C" {
extern void func_02050ab8(s32, s32, s32);
extern s32 data_0213e328[];
void func_0206a210(void *arg0) {
    u8 *base;
    s32 i;
    s32 r8;
    s32 r7;
    s32 n;
    u8 *obj;
    u8 *t1;
    s32 *tbl;

    base = (u8 *) arg0;
    i    = 0;
    do {
        tbl = data_0213e328;
        r8  = (((tbl[i * 2] >> 12)) - 0x66) >> 3;
        r7  = ((tbl[i * 2 + 1] >> 12) + 0x10) >> 3;
        func_02050ab8(r8, r7, r8 + 0xA);
        func_02050ab8(r8, r7 + 1, r8 + 0xA);
        i += 1;
    } while (i < 4);

    obj = *(u8 **) (base + 0x300);
    if (obj == 0 || (t1 = *(u8 **) (*(u8 **) obj + 0x130)) == 0 || *(s32 *) (obj + 4) == 2) {
        i = 0;
        do {
            *(s32 *) (((u8 **) (base + 0x5C))[i] + 4) &= ~1;
            *(s32 *) (((u8 **) (base + 0x6C))[i] + 4) &= ~1;
            i += 1;
        } while (i < 4);
        *(s32 *) (base + 0x7C) = 0;
        *(s32 *) (base + 0x80) = 0;
        base[0x84]             = 0;
        return;
    }
    *(s32 *) (base + 0x7C) = *(s32 *) (t1 + 8);
    base[0x84]             = 0;
    n                      = *(s32 *) (base + 0x7C);
    i                      = 0;
    if (n > 0) {
        do {
            *(s32 *) (((u8 **) (base + 0x5C))[i] + 4) &= ~1;
            *(s32 *) (((u8 **) (base + 0x6C))[i] + 4) &= ~1;
            if (((VA *) *(u8 **) (*(u8 **) *(u8 **) (base + 0x300) + 0x130))->f4(i) != 0) {
                *(u8 *) (((u8 **) (base + 0x6C))[i] + 0x94) = 0;
                base[0x84]                                  = 1;
            } else {
                *(u8 *) (((u8 **) (base + 0x6C))[i] + 0x94) = 1;
            }
            i += 1;
        } while (i < *(s32 *) (base + 0x7C));
    }
    i = *(s32 *) (base + 0x7C);
    if (i < 4) {
        do {
            *(s32 *) (((u8 **) (base + 0x5C))[i] + 4) &= ~1;
            *(s32 *) (((u8 **) (base + 0x6C))[i] + 4) &= ~1;
            *(u8 *) (((u8 **) (base + 0x6C))[i] + 0x94) = 1;
            i += 1;
        } while (i < 4);
    }
    *(s32 *) (base + 0x80) = 6;
}
}
