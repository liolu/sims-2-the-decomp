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
    virtual void **f16(s32);
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
    virtual void **f16(s32);
};
struct VC2 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual M2C_UNK f5();
};
struct VC3 {
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
    virtual void **f16(s32);
};
struct VC4 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual M2C_UNK f5();
};
struct VC5 {
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
    virtual s32 *f16(s32);
};
struct VC6 {
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
    virtual M2C_UNK f17(void *, s32 *, s32);
};
struct VC7 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual M2C_UNK f6();
};

extern "C" void **func_01ff9620(...); /* extern */
extern "C" void *func_01ff9ad0(...);     /* extern */
extern "C" M2C_UNK func_02018644(...);                      /* extern */

extern "C" void *func_02018888(void *arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 sp0;
    s32 *temp_r1;
    s32 *var_r2;
    s32 temp_r8;
    void **var_r6;
    void **var_r7;
    void **temp_r0;
    void **temp_r0_2;
    void **nx;
    void *temp_r4;
    void *temp_r5;
    void *temp_r5_2;

    sp0     = arg2;
    temp_r1 = M2C_FIELD(arg0, s32 **, 8);
    if (arg3 != 0) {
        if (((VC0 *) (arg0))->f16(arg3) != NULL) {
            temp_r0 = ((VC1 *) (arg0))->f16(arg3);
            var_r6  = temp_r0;
            if (temp_r0 != NULL) {
                do {
                    nx      = func_01ff9620(arg0, temp_r0, var_r6, arg3);
                    temp_r4 = *var_r6;
                    var_r6  = nx;
                    ((VC2 *) (temp_r4))->f5();
                    M2C_FIELD(temp_r4, s8 *, 0x15) = 0;
                } while (var_r6 != NULL);
            }
        }
    } else if (temp_r1 != NULL) {
        temp_r8   = *temp_r1;
        temp_r0_2 = ((VC3 *) (arg0))->f16(temp_r8);
        var_r7    = temp_r0_2;
        if (temp_r0_2 != NULL) {
            do {
                nx        = func_01ff9620(arg0, temp_r0_2, var_r7, temp_r8);
                temp_r5_2 = *var_r7;
                var_r7    = nx;
                ((VC4 *) (temp_r5_2))->f5();
                M2C_FIELD(temp_r5_2, s8 *, 0x15) = 0;
            } while (var_r7 != NULL);
        }
    }
    temp_r5 = func_01ff9ad0(arg0, arg1, sp0, arg3);
    if (arg3 != 0) {
        var_r2 = ((VC5 *) (arg0))->f16(arg3);
        if (var_r2 == NULL) {
            var_r2 = M2C_FIELD(arg0, s32 **, 8);
        }
    } else {
        var_r2 = M2C_FIELD(arg0, s32 **, 8);
    }
    ((VC6 *) (arg0))->f17(temp_r5, var_r2, 0);
    func_02018644(temp_r5);
    ((VC7 *) (temp_r5))->f6();
    M2C_FIELD(temp_r5, s8 *, 0x15) = 1;
    return temp_r5;
}
