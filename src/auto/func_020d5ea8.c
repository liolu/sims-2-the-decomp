/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d4d08(s32);                         /* extern */
M2C_UNK func_020d8a70(s32);                         /* extern */
extern M2C_UNK data_021287c4;
extern M2C_UNK data_021424f8;
extern M2C_UNK data_02142848;

void func_020d5ea8(s32 arg0) {
    s32 temp_r0;

    M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021424f8, volatile u8 *, 0xB) | 0x80);
    func_020d4d08(*((M2C_UNK *) ((s8 *) &data_021287c4 + (arg0 * 4))));
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
