/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d47f4(s32);                         /* extern */
M2C_UNK func_020d855c(s32);                         /* extern */
extern M2C_UNK data_021282f0;
extern M2C_UNK data_02142018;
extern M2C_UNK data_02142368;

void func_020d5994(s32 arg0) {
    s32 temp_r0;

    M2C_FIELD(&data_02142018, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_02142018, volatile u8 *, 0xB) | 0x80);
    func_020d47f4(*((M2C_UNK *) ((s8 *) &data_021282f0 + (arg0 * 4))));
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
