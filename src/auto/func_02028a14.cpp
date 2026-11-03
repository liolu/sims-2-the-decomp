/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" void func_02018734(void *, void *, s32);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);
extern "C" u8 data_02130b94;

extern "C" void *func_02028a14(u8 *arg0, u8 *arg1) {
    u8 *r5;

    func_02018734(arg0, arg1, (s32) (arg0 + 0x18));
    r5              = arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02130b94;
    func_02018ad0(r5);
    func_02018aa0(r5, 0x30);
    r5[0x10]               = 0;
    r5[0x11]               = 0;
    *(u16 *) (arg0 + 0x10) = 0x30;
    ((VA *) arg0)->f3(*(s32 *) (arg1 + 4));
    arg0[0x2C]             = 0;
    arg0[0x2D]             = 0;
    *(s32 *) (arg0 + 0x30) = 0;
    return arg0;
}
