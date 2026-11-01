/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual M2C_UNK f3();
};
struct VCX {
    virtual void f0();
    virtual s32 f1(s32);
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual M2C_UNK f2();
};

extern "C" void *func_02042be4(...);                      /* extern */
extern "C" M2C_UNK func_02042c1c(...);           /* extern */
extern "C" M2C_UNK func_02046844(...);                      /* extern */
extern "C" void *func_0204688c(...);     /* extern */
extern "C" M2C_UNK data_02135050;
extern "C" M2C_UNK data_021350e0;
extern "C" s32 data_02139ca4;
extern "C" s32 data_027e0000;
extern "C" s32 data_027e0004;

extern "C" void func_020bbee0(void *arg0, s32 arg1) {
    M2C_UNK var_r1;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;

    if (M2C_FIELD(arg0, u16 *, 0xE) & 2) {
        temp_r0                         = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r0, s32 *, 0x14) = arg1;
        ((VC0 *) (temp_r0))->f3();
        return;
    }
    temp_r0_2 = func_02042be4(data_02139ca4, M2C_FIELD(arg0, u16 *, 0xC));
    if (temp_r0_2 != NULL) {
        M2C_FIELD(temp_r0_2, u8 *, 0x11) = (u8) (M2C_FIELD(temp_r0_2, u8 *, 0x11) - 1);
        if (M2C_FIELD(temp_r0_2, u8 *, 0x11) == 0) {
            ((VC1 *) (temp_r0_2))->f2();
            func_02046844(temp_r0_2);
            func_02042c1c(data_02139ca4, M2C_FIELD(arg0, u16 *, 0xC), 0);
        }
    }
    temp_r0_3 = func_0204688c(0x18, 3, 4);
    if (temp_r0_3 != NULL) {
        M2C_FIELD(temp_r0_3, M2C_UNK **, 0) = &data_02135050;
        M2C_FIELD(temp_r0_3, s32 *, 4)      = 0;
        M2C_FIELD(temp_r0_3, s32 *, 8)      = 0;
        M2C_FIELD(temp_r0_3, s32 *, 0xC)    = 0;
        M2C_FIELD(temp_r0_3, s8 *, 0x10)    = 0;
        M2C_FIELD(temp_r0_3, s8 *, 0x11)    = 1;
        M2C_FIELD(temp_r0_3, M2C_UNK **, 0) = &data_021350e0;
        M2C_FIELD(temp_r0_3, s32 *, 0x14)   = 0;
    }
    M2C_FIELD(temp_r0_3, s32 *, 0x14) = arg1;
    if (data_027e0004 & (0x20 << data_027e0000)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (((VCX *) (temp_r0_3))->f1(var_r1) == 0) {
        if (temp_r0_3 != NULL) {
            M2C_FIELD(temp_r0_3, M2C_UNK **, 0) = &data_021350e0;
            func_02046844(temp_r0_3);
        }
        M2C_FIELD(arg0, void **, 8) = 0;
        return;
    }
    M2C_FIELD(arg0, void **, 8) = temp_r0_3;
    M2C_FIELD(arg0, u16 *, 0xE) = 3U;
}
