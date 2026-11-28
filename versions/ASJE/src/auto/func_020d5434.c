/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020d6ed0(s32);                             /* extern */
M2C_UNK func_020d7540(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d8934(s32);                         /* extern */
extern M2C_UNK data_021423b8;
extern M2C_UNK data_02142708;

void func_020d5434(void) {
    s32 temp_r0;
    s32 var_r5;

    var_r5                                        = 0xF;
    M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) | 0x80);
    do {
        func_020d7540(func_020d6ed0(var_r5), 0);
        var_r5 -= 1;
    } while (var_r5 >= 0);
    if (!(M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & 0x80)) {
        return;
    }
    if (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & 0x40) {
        temp_r0 = M2C_FIELD(&data_02142708, volatile s32 *, 0xC) & 0xC;
        if (temp_r0 == 0) {
            func_020d8934(temp_r0);
        }
    }
    M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) & ~0xC0);
}
