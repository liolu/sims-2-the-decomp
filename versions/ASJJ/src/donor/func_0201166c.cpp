/* compiler: 1.2/sp2p3  */
/* func_0201166c from sims-2-the/src/auto/func_0201166c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef int s32;
typedef unsigned int u32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2(s32 *);
};
extern "C" {
extern u8 data_027e1124;
extern void func_01ffb104(u8 *a, u8 *b, s32 *c, s32 d);
extern void *func_0200b8ac(u8 *p);
void func_0201166c(u8 *arg0) {
    s32 loc[11];
    u32 val;
    s32 v;
    s32 lim;
    u8 *src;
    void *obj;
    s32 *o;
    s32 *f;

    if (arg0[0x72] != 0) {
        src = *(u8 **) (arg0 + 0x1b8);
        if (src != 0) {
            val = *(u32 *) src;
        } else {
            val = *(u32 *) &data_027e1124;
        }
        v   = (s32) val >> 12;
        lim = arg0[0x71];
        if (v >= lim) {
            v = lim - 1;
        }
        func_01ffb104(arg0 + 0x68, arg0, (s32 *) (arg0 + 0x78), v);
    }
    if (arg0[0x28] == 0) {
        return;
    }
    obj = func_0200b8ac(arg0 + 0x24);
    ((VA *) obj)->f2(&loc[4]);
    o      = (s32 *) obj;
    f      = (s32 *) (arg0 + 0x78);
    loc[1] = *(s32 *) (arg0 + 0x78);
    o[1]   = loc[1];
    loc[2] = f[1];
    o[2]   = loc[2];
    loc[3] = f[2];
    o[3]   = loc[3];
    loc[0] = loc[7];
    o[2]   = o[2] + loc[7];
}
}
