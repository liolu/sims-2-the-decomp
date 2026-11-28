/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern "C" {
M2C_UNK func_0201872c(void *, void *, void *);
M2C_UNK func_02018a98(void *, s32);
M2C_UNK func_02018ac8(void *);
void *func_020468a0(s32, s32, s32);
void *func_02014c28(void *, s32);
M2C_UNK func_02011090(void *, s32, s32, s32, s32);
extern M2C_UNK data_02131238;
}
struct VC {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3(s32 a);
};
extern "C" void *func_0203a5f8(void *arg0, void *arg1) {
    void *temp_r5;
    void *var_r0;
    void *temp_lr;
    func_0201872c(arg0, arg1, (u8 *) arg0 + 0x18);
    temp_r5            = (u8 *) arg0 + 0x18;
    *(M2C_UNK **) arg0 = (M2C_UNK *) &data_02131238;
    func_02018ac8(temp_r5);
    func_02018a98(temp_r5, 0x13);
    *(s16 *) ((u8 *) arg0 + 0x10) = 0x13;
    ((VC *) arg0)->f3(*(s32 *) ((u8 *) arg1 + 4));
    *(s8 *) ((u8 *) arg0 + 0x2C)  = 0;
    *(s8 *) ((u8 *) arg0 + 0x2D)  = 1;
    *(s32 *) ((u8 *) arg0 + 0x28) = 0;
    *(s8 *) ((u8 *) arg0 + 0x2D)  = 1;
    *(s32 *) ((u8 *) arg0 + 0x30) = 0;
    var_r0                        = func_020468a0(0x214, 3, 4);
    if (var_r0 != 0) {
        var_r0 = func_02014c28(var_r0, 0xFF);
    }
    *(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C) = var_r0;
    temp_lr                                        = *(void **) (*(u8 **) ((u8 *) arg0 + 4) + 0x1C);
    *(s32 *) ((u8 *) temp_lr + 4)                  = (s32) (*(s32 *) ((u8 *) temp_lr + 4) & ~4);
    func_02011090(var_r0, 0x87, 0, 1, 0);
    func_02011090(*(void **) ((u8 *) arg0 + 4), 0x4B, 0, 1, 0);
    return arg0;
}
