/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_020269b4(void *);
extern M2C_UNK data_021307c4;
}
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_020268a0(void *arg0, void *arg1, s32 arg2) {
    s16 var_r0;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_021307c4;
    func_020269b4((u8 *) arg0 + 0x18);
    if (arg2 != 0) {
        var_r0 = 9;
    } else {
        var_r0 = 8;
    }
    *(s16 *) ((u8 *) arg0 + 0x10) = var_r0;
    ((VE *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
