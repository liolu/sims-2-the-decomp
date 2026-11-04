/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 b);
};

extern "C" void func_02018734(void *a, void *b, void *c);
extern "C" void func_02018ad0(void *a);
extern "C" void func_02018aa0(void *a, s32 b);
extern "C" u8 data_02130a20;

extern "C" void *func_02027c9c(void *arg0, void *arg1) {
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    u8 *temp_r4     = (u8 *) arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02130a20;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 0x17);
    *(s32 *) (temp_r4 + 0x10)     = 0;
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x17;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
