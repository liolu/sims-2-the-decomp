/* compiler: 1.2/sp2p3  */
/* func_020c0df0 from sims-2-the/src/auto/func_020c0df0.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef struct {
    s32 v;
} W;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, W b, W c);
};
extern "C" {
extern void func_02016700(void *, void *);
extern void func_020befe0(s32);
extern void func_020d54a8(s32);
extern u8 data_021273c0;
void func_020c08fc(u8 *arg0) {
    VA *o;
    u8 *r4;

    if (arg0[0x94] == 0) {
        return;
    }
    *(s32 *) (arg0 + 0x14) = (*(s32 *) (arg0 + 0x14) & ~0xF000) | 0xD000;
    func_02016700(arg0, &data_021273c0);
    o = *(VA **) (arg0 + 0x74);
    if (o->f2(arg0, *(W *) (arg0 + 0x80), *(W *) (arg0 + 0x84)) == 0) {
        return;
    }
    r4 = *(u8 **) (arg0 + 0x90);
    func_020d54a8(0x173);
    func_020befe0(*(s32 *) (r4 + 0x11C));
}
}
