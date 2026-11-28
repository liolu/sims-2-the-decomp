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
    virtual void f9(s32);
};

extern "C" void func_02017aac(void *arg0) {
    s32 v;
    if (M2C_FIELD(arg0, u8 *, 0x9C) == 0) {
        return;
    }
    v                           = 1;
    M2C_FIELD(arg0, s8 *, 0x9D) = v;
    ((VC0 *) (arg0))->f9(v);
}
