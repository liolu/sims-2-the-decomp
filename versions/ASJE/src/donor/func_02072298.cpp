/* compiler: 1.2/sp2p3  */
/* func_02072310 from sims-2-the/src/auto/func_02072310.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
struct VA {
    virtual void f0();
    virtual void f1();
};
typedef struct {
    u16 v;
} S16;
typedef struct {
    u16 a, b;
} A16;
typedef struct {
    u8 a, b, c, d;
} B8;
extern "C" {
extern void func_0203d190(s32, S16);
extern void func_0203cb90(s32, s32);
extern void func_0203c97c(s32, s32, s32);
extern void func_0203de24(S16, u16, u16, s32, s32, s32, s32, A16, B8, s32);
extern u16 data_0211f88c[];
void func_02072298(u8 *arg0) {
    S16 h;
    volatile s32 l1c;
    volatile s32 l20;
    volatile s32 l24;
    volatile s32 l28;
    A16 a;
    B8 b;
    volatile s32 l34;
    s32 v;
    u8 *pb;
    u16 *pa;
    s32 t;

    arg0[0x18]             = (u8) (arg0[0x18] + 0);
    v                      = ((arg0[0x18] * 2 + 2) * 8 - 8) << 12;
    l1c                    = v;
    l20                    = v;
    *(s32 *) (arg0 + 0x14) = v;
    t                      = *(s32 *) (arg0 + 0x14);
    l34                    = t;
    l24                    = t;
    if (*(s32 *) (arg0 + 0xc) > t) {
        l28                   = t;
        *(s32 *) (arg0 + 0xc) = t;
    }
    arg0[8] |= 1;

    h.v = data_0211f88c[0];
    func_0203d190(2, h);
    func_0203cb90(2, 0x30);
    func_0203c97c(2, 0x30, 0);
    pb    = (u8 *) &b;
    pb[0] = 0;
    pb[1] = 0;
    pb[2] = 0;
    pb[3] = 0;
    pa    = (u16 *) &a;
    pa[0] = 0;
    pa[1] = 0;
    func_0203de24(h, *(u16 *) (arg0 + 4), *(u16 *) (arg0 + 6), 0, 1, 1, 0x6f, a, b, 2);
    arg0[8] |= 1;
    ((VA *) arg0)->f0();
    arg0[0x1c] = 0;
}
}
