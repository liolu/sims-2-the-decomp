/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ee9fc(s32);                         /* extern */
extern M2C_UNK data_027e1e0c;
extern M2C_UNK data_027e1f3c;

M2C_UNK *func_020ee9b8(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) & 0x80;
    if (temp_r0 == 0) {
        func_020ee9fc(temp_r0);
        M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) = (s32) (M2C_FIELD(&data_027e1e0c, s32 *, 0xFC) | 0x80);
    }
    return &data_027e1f3c;
}
