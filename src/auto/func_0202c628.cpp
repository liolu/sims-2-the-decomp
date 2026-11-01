/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018ad0(void *);
M2C_UNK func_020d4edc(s32, s32);
s32 func_020d5680(s32, void *);
extern M2C_UNK data_02130f1c;
}
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_0202c628(void *arg0, void *arg1) {
    u16 temp_r0;
    void *temp_r1;
    void *temp_r5;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r5            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_02130f1c;
    func_02018ad0(temp_r5);
    func_02018aa0(temp_r5, 0x1A);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x1A;
    ((VC *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s32 *) ((u8 *) arg0 + 0x28) = -1;
    temp_r1                       = *(void **) ((u8 *) arg0 + 4);
    temp_r0                       = *(u16 *) ((u8 *) temp_r1 + 0xA);
    if (temp_r0 == 0x65) {
        *(s32 *) ((u8 *) arg0 + 0x28) = func_020d5680(0xD6, (u8 *) temp_r1 + 0x78);
    } else if (temp_r0 == 0x60) {
        *(s32 *) ((u8 *) arg0 + 0x28) = func_020d5680(0xF1, (u8 *) temp_r1 + 0x78);
        func_020d4edc(*(s32 *) ((u8 *) arg0 + 0x28), 0x20);
    }
    return arg0;
}
