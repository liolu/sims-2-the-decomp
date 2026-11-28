/* compiler: 1.2/sp2p3  */
/* func_02014e5c from sims-2-the/src/auto/func_02014e5c.cpp (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4(s32);
};
extern "C" {
extern void func_01ffb068(void *, s32, s32);
void func_02014e54(void *arg0, s32 arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    if (arg1 == 0) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    *(u32 *) (p + 4) |= 4;
    func_01ffb068(p + 0x68, arg1, arg2);
    ((VA *) arg0)->f4(0);
}
}
