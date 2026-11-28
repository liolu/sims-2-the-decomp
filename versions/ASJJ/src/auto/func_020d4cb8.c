/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d4370(M2C_UNK);                     /* extern */
M2C_UNK func_020d855c(s32);                         /* extern */
extern M2C_UNK data_02142018;
extern M2C_UNK data_02142368;

s32 func_020d4cb8(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0 = M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 0x20;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 0x80);
    func_020d4370(0);
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 1);
    if (!(M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 0x80)) {
        return (s32) &data_02142018;
    }
    if (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & 0x40) {
        temp_r0_2 = M2C_FIELD(&data_02142368, volatile s32 *, 0xC) & 0xC;
        if (temp_r0_2 == 0) {
            func_020d855c(temp_r0_2);
        }
    }
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) & ~0xC0);
    return (s32) &data_02142018;
}
