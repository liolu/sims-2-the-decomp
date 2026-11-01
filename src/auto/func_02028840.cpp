/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
s32 func_0200aac4(void *, s32);
M2C_UNK func_02011090(void *, s32, s32, s32, s32);
M2C_UNK func_020117d8(void *, s32, void *, void *);
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018acc(void *);
M2C_UNK func_02018ad0(void *);
M2C_UNK func_02019498(void *);
s32 func_0204ca70(s32);
extern M2C_UNK data_02130b48;
}
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_02028840(void *arg0, void *arg1) {
    volatile s32 sp4[6];
    s32 var_r1;
    void *temp_r4;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r4            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_02130b48;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 0x1D);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x1D;
    ((VC *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    if (func_0204ca70(1) != 0) {
        var_r1 = 2;
    } else {
        var_r1 = 3;
    }
    func_02011090(*(void **) ((u8 *) arg0 + 4), func_0200aac4(*(void **) ((u8 *) arg0 + 4), var_r1), 0, 1, 0);
    func_02019498((void *) sp4);
    func_020117d8(*(void **) ((u8 *) arg0 + 4), 1, (void *) sp4, arg0);
    func_02018acc((void *) sp4);
    return arg0;
}
