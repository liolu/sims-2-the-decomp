/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fd3a0(u16, u8, u8, M2C_UNK);        /* extern */
M2C_UNK func_020fd734(M2C_UNK);                     /* extern */
extern M2C_UNK data_02142848;
extern M2C_UNK data_02142e48;

s32 func_020d8ff8(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_02142848, s32 *, 0xC) & 4;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020fd734(1);
    func_020fd3a0(M2C_FIELD(&data_02142e48, u16 *, 0x58), M2C_FIELD(&data_02142848, u8 *, 0x65A),
                  M2C_FIELD(&data_02142848, u8 *, 0x65B), 0);
    *(s16 *) 0x0400010A                   = 0;
    *(s16 *) 0x0400010E                   = 0;
    M2C_FIELD(&data_02142848, s32 *, 0xC) = (s32) (M2C_FIELD(&data_02142848, s32 *, 0xC) | 4);
    return (s32) &data_02142848;
}
