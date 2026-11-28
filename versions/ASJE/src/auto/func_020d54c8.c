/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d7540(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020d8934(s32);                         /* extern */
extern M2C_UNK data_021423b8;
extern M2C_UNK data_02142708;

void func_020d54c8(M2C_UNK arg0) {
    s32 temp_r0;

    M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) = (u8) (M2C_FIELD(&data_021423b8, volatile u8 *, 0xB) | 0x80);
    func_020d7540(arg0, 0);
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
