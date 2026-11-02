/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02051338(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32);
M2C_UNK *func_02082810(s32);
s32 func_02082ea0(s32, u16);
M2C_UNK func_0210823c(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_02132804;
extern M2C_UNK data_0213280c;
extern M2C_UNK data_02132820;
extern M2C_UNK data_0213282c;
extern s32 data_0213e434;
void func_020751f8(void *arg0) {
    M2C_UNK sp4[16];
    s32 temp_r4;
    s32 var_r4;
    void *temp_r1;
    void *temp_r1_2;
    temp_r1 = M2C_FIELD(arg0, void **, 0x24);
    if (M2C_FIELD(temp_r1, u16 *, 0xC) == 2) {
        var_r4 =
            func_02051338(1, 0x28, 0x28, func_02082810((M2C_FIELD(temp_r1, u16 *, 0xA) * 0x2C) + (data_0213e434 + 0x21DC)), 0);
    } else {
        func_0210823c(sp4, &data_02132804);
        var_r4 = func_02051338(1, 0x28, 0x28, sp4, 0);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0x24);
    if ((M2C_FIELD(temp_r1_2, u16 *, 0xC) == 2) &&
        (func_02082ea0(data_0213e434 + 0x2FA4, M2C_FIELD(temp_r1_2, u16 *, 0xA)) != 0xD8)) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 1;
        func_0210823c(sp4, &data_0213280c);
        var_r4 = func_02051338(var_r4, 0x28, 0x3C, sp4, 0);
    }
    func_0210823c(sp4, &data_02132820);
    temp_r4 = func_02051338(var_r4, 0x28, 0x50, sp4, 0);
    func_0210823c(sp4, &data_0213282c);
    func_02051338(temp_r4, 0x28, 0x64, sp4, 0);
}
