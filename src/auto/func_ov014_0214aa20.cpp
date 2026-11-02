/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_020165bc(void *, s32);
void func_ov014_0214aadc(void *, u16);
}

struct Fx {
    s32 v;
};

struct VA {
    virtual void f0();
    virtual void f1();
    virtual s32 f2(void *a, Fx b, Fx c);
};

extern "C" void func_ov014_0214aa20(void *arg0) {
    u8 *p = (u8 *) arg0;
    s32 r;
    VA *o;
    func_020165bc(arg0, 0);
    o = *(VA **) (p + 0x74);
    r = o->f2(arg0, *(Fx *) (p + 0x80), *(Fx *) (p + 0x84));
    if (r == 0) {
        return;
    }
    func_ov014_0214aadc(*(void **) (p + 0x90), *(u16 *) (p + 10));
}
