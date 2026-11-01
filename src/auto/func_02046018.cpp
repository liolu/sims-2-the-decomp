/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
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
    virtual s32 f16(s32);
};
struct VC1 {
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
    virtual M2C_UNK f10(s32);
};

extern "C" void func_02046018(void *arg0, s32 arg1) {
    s32 t;
    t = ((VC0 *) (arg0))->f16(arg1);
    if (t == 0) {
        return;
    }
    ((VC1 *) (arg0))->f10(t);
    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) (M2C_FIELD(arg0, u16 *, 0x2A) - 1);
}
