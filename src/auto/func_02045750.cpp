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
    virtual M2C_UNK f10(void *);
};

extern "C" void func_02045750(void *arg0, s32 arg1) {
    void *var_r2;
    void *var_r3;

    var_r2 = M2C_FIELD(arg0, void **, 4);
    var_r3 = 0;
    if (var_r2 != NULL) {
    loop_1:
        if (M2C_FIELD(var_r2, s32 *, 0) == arg1) {
            var_r3 = var_r2;
        } else {
            var_r2 = M2C_FIELD(var_r2, void **, 4);
            if (var_r2 != NULL) {
                goto loop_1;
            }
        }
    }
    if (var_r3 == NULL) {
        return;
    }
    ((VC0 *) (arg0))->f10(var_r3);
    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) (M2C_FIELD(arg0, u16 *, 0x2A) - 1);
}
