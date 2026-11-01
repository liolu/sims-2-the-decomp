/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual M2C_UNK f2();
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual M2C_UNK f2();
};

extern "C" M2C_UNK func_02042c1c(s32, u16, M2C_UNK);           /* extern */
extern "C" M2C_UNK func_02043230(void **, s32, u16 *);         /* extern */
extern "C" M2C_UNK func_020444f8(u16);                         /* extern */
extern "C" M2C_UNK func_02046844(void *);                      /* extern */
extern "C" M2C_UNK func_020ede08(s32);                         /* extern */
extern "C" M2C_UNK func_020ede74(s32, void *);                 /* extern */
extern "C" void *func_020f0e9c(s32);                           /* extern */
extern "C" s32 data_02139ca4;

extern "C" void func_020bc06c(void *arg0) {
    void *sp4;
    u16 sp0;
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r1;
    void *temp_r2;

    if (M2C_FIELD(arg0, u16 *, 0xE) & 1) {
        temp_r0                         = func_020f0e9c(M2C_FIELD(arg0, s32 *, 0));
        temp_r2                         = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r0, s32 *, 8)    = (s32) M2C_FIELD(temp_r2, s32 *, 4);
        M2C_FIELD(temp_r0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r2, s32 *, 8);
        M2C_FIELD(temp_r0, s32 *, 0x2C) = (s32) M2C_FIELD(temp_r2, s32 *, 0xC);
        func_020ede08(M2C_FIELD(arg0, s32 *, 4));
        func_020ede74(M2C_FIELD(arg0, s32 *, 4), func_020f0e9c(M2C_FIELD(arg0, s32 *, 0)));
    }
    sp0 = M2C_FIELD(arg0, u16 *, 0xC);
    func_02043230(&sp4, data_02139ca4, &sp0);
    if (((u32) (M2C_FIELD(M2C_FIELD(sp4, void **, 0x10), s32 *, 8) << 9) >> 0x19) == 1) {
        temp_r0_2 = M2C_FIELD(arg0, void **, 8);
        if (temp_r0_2 != NULL) {
            ((VC0 *) (temp_r0_2))->f2();
            func_02046844(M2C_FIELD(arg0, void **, 8));
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
        func_02042c1c(data_02139ca4, M2C_FIELD(arg0, u16 *, 0xC), 0);
    } else {
        temp_r1                        = M2C_FIELD(arg0, void **, 8);
        M2C_FIELD(temp_r1, u8 *, 0x11) = (u8) (M2C_FIELD(temp_r1, u8 *, 0x11) - 1);
        temp_r0_3                      = M2C_FIELD(arg0, void **, 8);
        if (M2C_FIELD(temp_r0_3, u8 *, 0x11) == 0) {
            ((VC1 *) (temp_r0_3))->f2();
            func_02046844(M2C_FIELD(arg0, void **, 8));
            M2C_FIELD(arg0, void **, 8) = NULL;
        }
    }
    func_020444f8(M2C_FIELD(arg0, u16 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, u16 *, 0xC) = 0xFFFFU;
}
