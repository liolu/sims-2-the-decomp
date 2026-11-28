/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020d6af8(s32);                             /* extern */
M2C_UNK func_020d7168(s32, M2C_UNK);                /* extern */
M2C_UNK func_020d855c(s32);                         /* extern */
extern M2C_UNK data_02142018;
extern M2C_UNK data_02142368;

void func_020d505c(void) {
    s32 temp_r0;
    s32 var_r5;

    var_r5                                        = 0xF;
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 0x80);
    do {
        func_020d7168(func_020d6af8(var_r5), 0);
        var_r5 -= 1;
    } while (var_r5 >= 0);
    if (!(M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 0x80)) {
        return;
    }
    if (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 0x40) {
        temp_r0 = M2C_FIELD(&data_02142368, volatile s32 *, 0xC) & 0xC;
        if (temp_r0 == 0) {
            func_020d855c(temp_r0);
        }
    }
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & ~0xC0);
}
