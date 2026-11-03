/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02131260[];

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void func_02018734(void *, void *, void *);
extern "C" void func_02018ad0(void *);
extern "C" void func_02018aa0(void *, s32);

extern "C" void *func_02030058(u8 *arg0, u8 *arg1) {
    u8 *e;

    func_02018734(arg0, arg1, arg0 + 0x18);
    e             = arg0 + 0x18;
    *(u8 **) arg0 = data_02131260;
    func_02018ad0(e);
    func_02018aa0(e, 0x3b);
    *(s32 *) (e + 0x10)    = 0;
    *(u16 *) (arg0 + 0x10) = 0x3b;
    ((VA *) arg0)->f3(*(void **) (arg1 + 4));
    return arg0;
}
