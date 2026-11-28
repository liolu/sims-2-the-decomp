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
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual M2C_UNK f17(void *, s32, s32);
};
struct VC2 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual M2C_UNK f6();
};

extern "C" void *func_01ff9ad0(...);                              /* extern */
extern "C" M2C_UNK func_02018644(...);                      /* extern */

extern "C" void *func_02018804(void *arg0, s32 a1, s32 a2, s32 arg3) {
    s32 var_r2;
    void *temp_r4;

    temp_r4 = func_01ff9ad0();
    if (arg3 != 0) {
        var_r2 = ((VC0 *) (arg0))->f16(arg3);
        if (var_r2 == 0) {
            var_r2 = M2C_FIELD(arg0, s32 *, 8);
        }
    } else {
        var_r2 = M2C_FIELD(arg0, s32 *, 8);
    }
    ((VC1 *) (arg0))->f17(temp_r4, var_r2, 1);
    func_02018644(temp_r4);
    ((VC2 *) (temp_r4))->f6();
    M2C_FIELD(temp_r4, s8 *, 0x15) = 1;
    return temp_r4;
}
