/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_020512c0(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32);
M2C_UNK *func_02082798(s32);
s32 func_02082e28(s32, u16);
M2C_UNK func_02108100(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_021326c4;
extern M2C_UNK data_021326cc;
extern M2C_UNK data_021326e0;
extern M2C_UNK data_021326ec;
extern s32 data_0213e2f4;
void func_02075180(void *arg0) {
    M2C_UNK sp4[16];
    s32 temp_r4;
    s32 var_r4;
    void *temp_r1;
    void *temp_r1_2;
    temp_r1 = M2C_FIELD(arg0, void **, 0x24);
    if (M2C_FIELD(temp_r1, u16 *, 0xC) == 2) {
        var_r4 =
            func_020512c0(1, 0x28, 0x28, func_02082798((M2C_FIELD(temp_r1, u16 *, 0xA) * 0x2C) + (data_0213e2f4 + 0x21DC)), 0);
    } else {
        func_02108100(sp4, &data_021326c4);
        var_r4 = func_020512c0(1, 0x28, 0x28, sp4, 0);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0x24);
    if ((M2C_FIELD(temp_r1_2, u16 *, 0xC) == 2) &&
        (func_02082e28(data_0213e2f4 + 0x2FA4, M2C_FIELD(temp_r1_2, u16 *, 0xA)) != 0xD8)) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 1;
        func_02108100(sp4, &data_021326cc);
        var_r4 = func_020512c0(var_r4, 0x28, 0x3C, sp4, 0);
    }
    func_02108100(sp4, &data_021326e0);
    temp_r4 = func_020512c0(var_r4, 0x28, 0x50, sp4, 0);
    func_02108100(sp4, &data_021326ec);
    func_020512c0(temp_r4, 0x28, 0x64, sp4, 0);
}
