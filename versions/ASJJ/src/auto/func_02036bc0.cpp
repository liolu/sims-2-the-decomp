/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_0201872c(void *, void *, void *);
M2C_UNK func_02018a98(void *, s32);
M2C_UNK func_02018ac8(void *);
extern M2C_UNK data_02131070;
}
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};

extern "C" void *func_02036bc0(void *arg0, void *arg1) {
    void *temp_r4;
    func_0201872c(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r4            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_02131070;
    func_02018ac8(temp_r4);
    func_02018a98(temp_r4, 0x3f);
    *(s32 *) ((u8 *) temp_r4 + 0x10) = 0;
    *(s16 *) ((u8 *) arg0 + 0x10)    = 0x3f;
    ((VC *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s8 *) ((u8 *) arg0 + 0x2c) = 0;
    return arg0;
}
