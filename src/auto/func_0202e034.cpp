/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_02018734(void *a, void *b, void *c);
void func_02018ad0(void *a);
void func_02018aa0(void *a, s32 b);
extern u8 data_02131098;
}

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void *func_0202e034(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0 + 0x18;
    func_02018734(arg0, arg1, p);
    p               = (u8 *) arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02131098;
    func_02018ad0(p);
    func_02018aa0(p, 0x43);
    *(u16 *) ((u8 *) arg0 + 0x10) = 0x43;
    ((VA *) arg0)->f3(*(void **) ((u8 *) arg1 + 4));
    *(u8 *) ((u8 *) arg0 + 0x2D) = 0;
    return arg0;
}
