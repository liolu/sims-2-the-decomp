/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_0205134c(s32, M2C_UNK, M2C_UNK, M2C_UNK *, s32);
M2C_UNK *func_020826c8(s32);
s32 func_02082d58(s32, u16);
M2C_UNK func_02107d28(M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_021322f4;
extern M2C_UNK data_021322fc;
extern M2C_UNK data_02132310;
extern M2C_UNK data_0213231c;
extern s32 data_0213df5c;
void func_020751e0(void *arg0) {
    M2C_UNK sp4[16];
    s32 temp_r4;
    s32 var_r4;
    void *temp_r1;
    void *temp_r1_2;
    temp_r1 = M2C_FIELD(arg0, void **, 0x24);
    if (M2C_FIELD(temp_r1, u16 *, 0xC) == 2) {
        var_r4 =
            func_0205134c(1, 0x28, 0x28, func_020826c8((M2C_FIELD(temp_r1, u16 *, 0xA) * 0x2C) + (data_0213df5c + 0x21E4)), 0);
    } else {
        func_02107d28(sp4, &data_021322f4);
        var_r4 = func_0205134c(1, 0x28, 0x28, sp4, 0);
    }
    temp_r1_2 = M2C_FIELD(arg0, void **, 0x24);
    if ((M2C_FIELD(temp_r1_2, u16 *, 0xC) == 2) &&
        (func_02082d58(data_0213df5c + 0x2FAC, M2C_FIELD(temp_r1_2, u16 *, 0xA)) != 0xD8)) {
        M2C_FIELD(arg0, s8 *, 0x2C) = 1;
        func_02107d28(sp4, &data_021322fc);
        var_r4 = func_0205134c(var_r4, 0x28, 0x3C, sp4, 0);
    }
    func_02107d28(sp4, &data_02132310);
    temp_r4 = func_0205134c(var_r4, 0x28, 0x50, sp4, 0);
    func_02107d28(sp4, &data_0213231c);
    func_0205134c(temp_r4, 0x28, 0x64, sp4, 0);
}
