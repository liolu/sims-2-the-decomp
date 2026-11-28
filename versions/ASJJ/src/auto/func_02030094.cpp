/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02130d60[];

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void func_0201872c(void *, void *, void *);
extern "C" void func_02018ac8(void *);
extern "C" void func_02018a98(void *, s32);

extern "C" void *func_02030094(u8 *arg0, u8 *arg1) {
    u8 *e;

    func_0201872c(arg0, arg1, arg0 + 0x18);
    e             = arg0 + 0x18;
    *(u8 **) arg0 = data_02130d60;
    func_02018ac8(e);
    func_02018a98(e, 0x3b);
    *(s32 *) (e + 0x10)    = 0;
    *(u16 *) (arg0 + 0x10) = 0x3b;
    ((VA *) arg0)->f3(*(void **) (arg1 + 4));
    return arg0;
}
