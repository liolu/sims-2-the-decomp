/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d855c(s32);                         /* extern */
M2C_UNK func_020d8ae4();                            /* extern */
extern M2C_UNK data_02142018;
extern M2C_UNK data_02142368;

void func_020d5ddc(void) {
    s32 temp_r0;

    if (M2C_FIELD(&data_02142018, volatile u8 *, 0) != 1) {
        return;
    }
    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 0x80);
    func_020d8ae4();
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
