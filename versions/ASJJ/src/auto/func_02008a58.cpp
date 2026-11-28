/* compiler: 1.2/sp2p3 */
#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual M2C_UNK f1();
};

extern "C" M2C_UNK func_02016700(...);              /* extern */
extern "C" M2C_UNK func_0201689c(...);             /* extern */
extern "C" void *func_020170bc(...);               /* extern */
extern "C" u16 **func_02045628(...);                        /* extern */
extern "C" void *func_020468a0(...);     /* extern */
extern "C" M2C_UNK func_02049b14(...);             /* extern */
extern "C" u8 data_021172b0[];

extern "C" void func_02008a58(void *arg0) {
    u16 *temp_r5;
    volatile s32 fr[4];
    u16 temp_r0_2;
    void *temp_r0;
    void *var_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x3A4);
    if (temp_r0 != NULL) {
        if (temp_r0 != NULL) {
            ((VC0 *) (temp_r0))->f1();
        }
        M2C_FIELD(arg0, void **, 0x3A4) = 0;
    }
    if (func_02045628((u8 *) arg0 + 0x58) != NULL) {
        var_r0 = func_020468a0(0x74, 0, 4);
        if (var_r0 != NULL) {
            var_r0 = func_020170bc(var_r0, 0);
        }
        M2C_FIELD(arg0, void **, 0x3A4) = var_r0;
        temp_r5                         = *func_02045628((u8 *) arg0 + 0x58);
        if (temp_r5 != NULL) {
            temp_r0_2 = *temp_r5;
            if (((u32) temp_r0_2 >= 9U) && ((u32) temp_r0_2 <= 0x10U)) {
                func_02049b14(M2C_FIELD(arg0, void **, 0x3A4), 2);
            } else {
                func_02049b14(M2C_FIELD(arg0, void **, 0x3A4), 1);
            }
            func_02016700(M2C_FIELD(arg0, void **, 0x3A4), data_021172b0 + (*temp_r5 * 8));
            func_0201689c(M2C_FIELD(arg0, void **, 0x3A4), 1);
            fr[0]                                                   = 0xD0000;
            fr[2]                                                   = 0xD0000;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x3A4), s32 *, 0x50) = 0xD0000;
            fr[1]                                                   = 0x5000;
            fr[3]                                                   = 0x5000;
            M2C_FIELD(M2C_FIELD(arg0, void **, 0x3A4), s32 *, 0x54) = 0x5000;
        }
    }
    M2C_FIELD(arg0, s8 *, 0x2F0) = 1;
}
