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

extern "C" void func_02017a40(VA *arg0) {
    u8 *p = (u8 *) arg0;
    u8 old;
    s32 r;
    VB *b;

    if (p[0x9c] == 0) {
        return;
    }
    b   = *(VB **) (p + 0x74);
    r   = b->g2(arg0, *(Fx *) (p + 0x80), *(Fx *) (p + 0x84));
    old = p[0x9d];
    if (r == old) {
        return;
    }
    p[0x9d] = (u8) r;
    arg0->f9(r);
}
