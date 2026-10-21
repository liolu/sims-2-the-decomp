/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d72dc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020d8a70(s32);                         /* extern */
extern M2C_UNK data_021424f8;
extern M2C_UNK data_02142848;

void func_020d4edc(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 > 0x40) {
        var_r1 = 0x40;
    }
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) | 0x80);
    func_020d72dc(arg0, var_r1);
    if (!(M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & 0x80)) {
        return;
    }
    if (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & 0x40) {
        temp_r0 = M2C_FIELD(&data_02142848, volatile s32 *, 0xC) & 0xC;
        if (temp_r0 == 0) {
            func_020d8a70(temp_r0);
        }
    }
    M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) & ~0xC0);
}
