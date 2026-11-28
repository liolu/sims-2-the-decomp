/* compiler: 1.2/sp2p3  */
/* func_0203fdec from sims-2-the/src/auto/func_0203fdec.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
};
extern "C" {
extern s32 func_02014c30(s32, u8);
extern s32 func_02046814(s32, s32, s32);
extern s32 func_02052364(s32, s32);
extern u8 *data_0213e440;
void func_0203fd74(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg1;
    u8 *e;
    VA *o;
    u8 *q;
    u8 t0 = p[0];
    u8 t1 = p[1];

    if (t0 == 0xFF) {
        e = *(u8 **) ((u8 *) data_0213e440 + 0xF8);
    } else {
        e = (u8 *) func_02052364(*(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + 0x28) + t0 * 8, t1);
    }
    if (e == 0) {
        return;
    }
    q = *(u8 **) (e + p[4] * 4 + 0x1C);
    if (q != 0) {
        *(s32 *) (q + 4) |= 0x82;
        o = *(VA **) (*(u8 **) (e + p[4] * 4 + 0x1C) + 0x130);
        if (o != 0) {
            if (o != 0) {
                o->f1();
            }
            *(s32 *) (*(u8 **) (e + p[4] * 4 + 0x1C) + 0x130) = 0;
        }
        *(s32 *) (e + p[4] * 4 + 0x1C) = 0;
    }
    if (p[2] != 0) {
        return;
    }
    {
        s32 r = func_02046814(0x214, 3, 4);
        if (r != 0) {
            r = func_02014c30(r, p[3]);
        }
        *(s32 *) (e + p[4] * 4 + 0x1C) = r;
    }
}
}
