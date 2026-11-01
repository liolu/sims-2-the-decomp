/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018ad0(void *);
extern M2C_UNK data_0213072c;
}
struct VE {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_02026174(void *arg0, void *arg1) {
    u8 *temp_r4;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r4            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_0213072c;
    func_02018ad0(temp_r4);
    func_02018aa0(temp_r4, 0x4B);
    *(s8 *) (temp_r4 + 0x10)      = 1;
    *(s32 *) (temp_r4 + 0x18)     = 9;
    *(s32 *) (temp_r4 + 0x14)     = *(s32 *) (temp_r4 + 0x18);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x4B;
    ((VE *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s8 *) ((u8 *) arg0 + 0x38)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x39)  = 0;
    *(s32 *) ((u8 *) arg0 + 0x3C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x44) = 0;
    *(s16 *) ((u8 *) arg0 + 0x48) = 0;
    *(s32 *) ((u8 *) arg0 + 0x34) = 0;
    return arg0;
}
