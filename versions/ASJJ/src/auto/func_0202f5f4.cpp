/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern "C" {
void func_0201872c(void *a, void *b, void *c);
void func_02018ac8(void *a);
void func_02018a98(void *a, s32 b);
extern u8 data_02130cc4;
}

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void *func_0202f5f4(void *arg0, void *arg1) {
    u8 *p = (u8 *) arg0 + 0x18;
    func_0201872c(arg0, arg1, p);
    p               = (u8 *) arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02130cc4;
    func_02018ac8(p);
    func_02018a98(p, 0x35);
    *(u16 *) ((u8 *) arg0 + 0x10) = 0x35;
    ((VA *) arg0)->f3(*(void **) ((u8 *) arg1 + 4));
    *(u8 *) ((u8 *) arg0 + 0x2C) = 0;
    return arg0;
}
