/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_02018734(void *, void *, void *);
M2C_UNK func_02018aa0(void *, s32);
M2C_UNK func_02018ad0(void *);
void *func_0204688c(s32, s32, s32);
void *func_02014c30(void *, s32);
M2C_UNK func_02011090(void *, s32, s32, s32, s32);
extern M2C_UNK data_021316f0;
extern M2C_UNK data_02139fb4;
}
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_02039ca0(void *arg0, void *arg1) {
    void *temp_r5;
    void *var_r0;
    void *temp_lr;
    func_02018734(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r5            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_021316f0;
    func_02018ad0(temp_r5);
    func_02018aa0(temp_r5, 0x12);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x12;
    ((VC *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s8 *) ((u8 *) arg0 + 0x34)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x35)  = 1;
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    *(s8 *) ((u8 *) arg0 + 0x35)  = 1;
    *(s32 *) ((u8 *) arg0 + 0x2C) = 0;
    *(s32 *) ((u8 *) arg0 + 0x30) = *(s32 *) ((u8 *) &data_02139fb4 + 0x264);
    var_r0                        = func_0204688c(0x214, 3, 4);
    if (var_r0 != 0) {
        var_r0 = func_02014c30(var_r0, 0xFE);
    }
    *(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C) = var_r0;
    temp_lr                                        = *(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C);
    *(s32 *) ((u8 *) temp_lr + 4)                  = (s32) (*(s32 *) ((u8 *) temp_lr + 4) & ~4);
    func_02011090(var_r0, 0x87, 0, 1, 0);
    return arg0;
}
