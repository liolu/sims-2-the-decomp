/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018ad0(void *);
extern M2C_UNK data_02130938;
}
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_02027484(void *arg0, void *arg1) {
    u8 *temp_r4;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r4            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_02130938;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 0x37);
    *(s32 *) (temp_r4 + 0x10)     = 0xC;
    *(s32 *) (temp_r4 + 0x14)     = 1;
    *(s32 *) (temp_r4 + 0x18)     = 0;
    *(s32 *) (temp_r4 + 0x1C)     = 0;
    *(s32 *) (temp_r4 + 0x20)     = 0;
    *(s32 *) (temp_r4 + 0x24)     = 0x32;
    *(s32 *) (temp_r4 + 0x28)     = 0;
    *(s32 *) (temp_r4 + 0x2C)     = 0;
    *(s32 *) (temp_r4 + 0x30)     = 0;
    *(s32 *) (temp_r4 + 0x34)     = 0;
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x37;
    ((VE *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    return arg0;
}
