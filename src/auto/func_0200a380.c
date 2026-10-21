/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02008ca0(void *, void *, void *, s32, s32); /* extern */

void func_0200a380(void *arg0) {
    s32 var_r4;
    s32 var_r4_2;
    u8 temp_r0;
    u8 var_r3;
    u8 var_r3_2;
    void *temp_r2;
    void *temp_r2_2;

    var_r4 = 1;
    if ((M2C_FIELD(arg0, u8 *, 0x2F4) == 2) || ((M2C_FIELD(arg0, u8 *, 0x2F2) == 1) && (M2C_FIELD(arg0, s8 *, 0x2EF) == 0))) {
        var_r4 = 0;
    }
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0xC0, var_r4, 1);
    if ((var_r4 == 0) || (temp_r0 = M2C_FIELD(arg0, u8 *, 0x2F4), (temp_r0 == 0)) ||
        ((temp_r0 == 1) && (M2C_FIELD(arg0, s8 *, 0x2EF) == 1)) || (M2C_FIELD(arg0, s8 *, 0x2EF) == 2)) {
        var_r3 = 0;
        do {
            temp_r2 = M2C_FIELD(((var_r3 * 0x14) + (s32) arg0), void **, 0xC4);
            if (temp_r2 != NULL) {
                M2C_FIELD(temp_r2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2, s32 *, 4) & ~1);
            }
            var_r3 += 1;
        } while ((u32) var_r3 < 0xAU);
    }
    var_r4_2 = 0;
    if ((M2C_FIELD(arg0, u8 *, 0x2F4) == 2) || ((M2C_FIELD(arg0, u8 *, 0x2F2) == 1) && (M2C_FIELD(arg0, s8 *, 0x2EF) == 0))) {
        var_r4_2 = 1;
    }
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    func_02008ca0(arg0, arg0 + 0x24, arg0 + 0x188, var_r4_2, 1);
    if ((var_r4_2 != 0) && (M2C_FIELD(arg0, s8 *, 0x2EF) != 0)) {
        return;
    }
    var_r3_2 = 0;
    do {
        temp_r2_2 = M2C_FIELD(((var_r3_2 * 0x14) + (s32) arg0), void **, 0x18C);
        if (temp_r2_2 != NULL) {
            M2C_FIELD(temp_r2_2, s32 *, 4) = (s32) (M2C_FIELD(temp_r2_2, s32 *, 4) & ~1);
        }
        var_r3_2 += 1;
    } while ((u32) var_r3_2 < 0xAU);
}
