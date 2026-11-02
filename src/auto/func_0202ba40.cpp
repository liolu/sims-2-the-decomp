/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(void *a);
};

extern "C" void func_02018734(void *a, void *b, void *c);
extern "C" void func_02018aa0(void *a, s32 b);
extern "C" void func_02018ad0(void *a);
extern "C" s32 func_020d5680(s32 a, void *b);
extern "C" u8 data_02130dec;

extern "C" void *func_0202ba40(u8 *arg0, u8 *arg1) {
    u8 *temp_r5;
    u8 *temp_r1;

    func_02018734(arg0, arg1, arg0 + 0x18);
    temp_r5         = arg0 + 0x18;
    *(void **) arg0 = (void *) &data_02130dec;
    func_02018ad0(temp_r5);
    func_02018aa0(temp_r5, 0x3C);
    *(s16 *) (arg0 + 0x10) = 0x3C;
    *(s32 *) (arg0 + 0x28) = -1;
    ((VA *) arg0)->f3(*(void **) (arg1 + 4));
    temp_r1 = *(u8 **) (arg0 + 4);
    if (*(u16 *) (temp_r1 + 0xA) == 0x21) {
        *(s32 *) (arg0 + 0x28) = func_020d5680(0x13, temp_r1 + 0x78);
    }
    return arg0;
}
