/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d7168(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020d855c(s32);                         /* extern */
extern M2C_UNK data_02142018;
extern M2C_UNK data_02142368;

void func_020d50f0(M2C_UNK arg0) {
    s32 temp_r0;

    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 0x80);
    func_020d7168(arg0, 0);
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
