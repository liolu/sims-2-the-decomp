/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 b);
};

extern "C" void func_0201872c(void *a, void *b, void *c);
extern "C" void func_02018ac8(void *a);
extern "C" void func_02018a98(void *a, s32 b);
extern "C" u8 data_02130520;

extern "C" void *func_02027cdc(void *arg0, void *arg1) {
    func_0201872c(arg0, arg1, (u8 *) arg0 + 0x18);
    u8 *temp_r4     = (u8 *) arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02130520;
    func_02018ac8(temp_r4);
    func_02018a98(temp_r4, 0x17);
    *(s32 *) (temp_r4 + 0x10)     = 0;
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x17;
    ((VA *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
