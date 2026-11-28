/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void func_0201872c(void *a, void *b, void *c);
extern "C" void func_02018a98(void *a, s32 b);
extern "C" void func_02018ac8(void *a);
extern "C" u8 data_0212ffcc;

extern "C" void *func_0201d7a4(u8 *arg0, u8 *arg1) {
    u8 *temp_r6;

    func_0201872c(arg0, arg1, arg0 + 0x18);
    temp_r6         = arg0 + 0x18;
    *(void **) arg0 = (void *) &data_0212ffcc;
    func_02018ac8(temp_r6);
    func_02018a98(temp_r6, 0x23);
    *(s8 *) (temp_r6 + 0x10)  = 2;
    *(s16 *) (temp_r6 + 0x12) = 0;
    *(s8 *) (temp_r6 + 0x14)  = 0;
    *(s8 *) (temp_r6 + 0x15)  = 1;
    *(s8 *) (temp_r6 + 0x16)  = 0;
    *(s16 *) (arg0 + 0x10)    = 0x23;
    ((VA *) arg0)->f3(*(void **) (arg1 + 4));
    *(s8 *) (arg0 + 0x30) = 0;
    return arg0;
}
