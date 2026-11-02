/* compiler: 1.2/sp2p3 */
#include "m2c.h"

struct VA {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
};

extern "C" s32 _s32_div_f(s32 a, s32 b);
extern "C" void func_0204681c(void *arg0);

extern "C" void func_0204605c(VA *arg0) {
    u32 i;
    u32 cnt;

    cnt = (u8) _s32_div_f(*(u16 *) ((u8 *) arg0 + 0x28), ((u8 *) arg0)[0x32]);
    i   = 0;
    if (cnt != 0) {
        do {
            if (((void **) ((u8 *) arg0 + 0x34))[i] != NULL) {
                func_0204681c(((void **) ((u8 *) arg0 + 0x34))[i]);
                ((void **) ((u8 *) arg0 + 0x34))[i] = NULL;
            }
            i = (u8) (i + 1);
        } while (i < cnt);
    }
    ((u8 *) arg0)[0x33] = 0;
    arg0->f15();
}
