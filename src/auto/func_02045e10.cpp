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
    virtual M2C_UNK f11();
};

extern "C" s32 func_0204536c(void *, void *);                  /* extern */
extern "C" M2C_UNK func_020453a4(void *, void *, void *);      /* extern */

extern "C" void func_02045e10(void *arg0, s32 arg1, void *arg2, s32 arg3) {
    void *temp_r4;
    void *var_r6;

    var_r6 = arg2;
    if ((u32) M2C_FIELD(arg0, u16 *, 0x2A) >= (u32) M2C_FIELD(arg0, u16 *, 0x28)) {
        ((VC0 *) (arg0))->f11();
    }
    temp_r4                        = M2C_FIELD(arg0, void **, 0x20);
    M2C_FIELD(arg0, void **, 0x20) = (void *) M2C_FIELD(temp_r4, void **, 4);
    if (M2C_FIELD(arg0, void **, 0x20) == NULL) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0;
    }
    M2C_FIELD(temp_r4, s32 *, 0) = arg1;
    switch (arg3) {                                 /* irregular */
        case 0:
            func_020453a4(arg0, temp_r4, var_r6);
            break;
        case 1:
            if (var_r6 == NULL) {
                var_r6 = M2C_FIELD(arg0, void **, 8);
            }
            if (func_0204536c(arg0, temp_r4) == 0) {
                if (M2C_FIELD(var_r6, s32 *, 0xC) != 0) {
                    do {
                        var_r6 = M2C_FIELD(var_r6, void **, 0xC);
                    } while (M2C_FIELD(var_r6, s32 *, 0xC) != 0);
                }
                M2C_FIELD(var_r6, void **, 0xC)   = temp_r4;
                M2C_FIELD(temp_r4, void **, 0x10) = var_r6;
                M2C_FIELD(temp_r4, void **, 4)    = NULL;
                M2C_FIELD(temp_r4, s32 *, 8)      = 0;
            }
            break;
    }
    M2C_FIELD(arg0, u16 *, 0x2A) = (u16) (M2C_FIELD(arg0, u16 *, 0x2A) + 1);
}
