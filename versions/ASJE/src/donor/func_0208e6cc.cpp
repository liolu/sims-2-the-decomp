/* compiler: 1.2/sp2p3  */
/* func_0208e740 from sims-2-the/src/auto/func_0208e740.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
};
extern "C" {
extern void func_020586a4(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern void func_02075ab4(u8 *a);
extern s32 data_02139e64;
extern u8 *data_0213e2f4;
s32 func_0208e6cc(VA *arg0) {
    u8 *b;
    s32 *p;
    s32 cur;
    s32 hp;
    s32 d;
    s32 lim;
    u8 *q;

    b   = data_0213e2f4;
    hp  = *(u16 *) (b + 0x4100 + 0xEC);
    cur = *(s32 *) (b + 0x2000 + 0xF60);
    p   = (s32 *) (b + 0x2F60);
    if (cur >= hp) {
        d   = 0 - hp;
        *p  = cur + d;
        cur = *p;
        lim = 0xF423F;
        if (cur > lim) {
            *p = lim;
        } else if (cur < 0) {
            *p = 0;
        }
        if (d > 0) {
            *(u8 *) (p + 3) = 1;
            p[1]            = p[1] + d;
            cur             = p[1];
            if (cur > 0xF423F || cur < 0) {
                p[1] = 0xF423F;
            }
        } else {
            p[2] = p[2] - d;
            cur  = p[2];
            if (cur > 0xF423F || cur < 0) {
                p[2] = 0xF423F;
            }
        }
        func_02075ab4(data_0213e2f4 + 0x41E4);
        q                                             = *(u8 **) ((u8 *) arg0 + 4);
        *(s32 *) (q + 4)                              = *(s32 *) (q + 4) & ~1;
        *(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x130) = 0;
        if (arg0 != 0) {
            arg0->f1();
        }
    } else {
        func_020586a4(data_02139e64, 0x139, -1, 0, 0, 1);
        return 0;
    }
    return 4;
}
}
