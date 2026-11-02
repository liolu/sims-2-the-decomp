/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct Fx {
    s32 v;
};
struct VB {
    virtual void g0();
    virtual void g1();
    virtual s32 g2(void *a, Fx b, Fx c);
};
struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9(s32 x);
};

extern "C" void func_ov005_0214aa60(VA *arg0) {
    u8 *p = (u8 *) arg0;
    if (p[0x8e] != 0) {
        return;
    }
    VB *b = *(VB **) (p + 0x74);
    s32 r = b->g2(arg0, *(Fx *) (p + 0x80), *(Fx *) (p + 0x84));
    arg0->f9(r);
}
