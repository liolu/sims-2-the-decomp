/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_020465f8(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_021424d4;
extern M2C_UNK data_021424d8;

void func_020d4d18(void) {
    func_02046384(&data_021424d8, 0, 0x20);
    M2C_FIELD(&data_021424d8, s32 *, 4)    = func_020465f8(0x7A120, 3, 4);
    M2C_FIELD(&data_021424d8, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021424d8, s32 *, 0x18) = 0x7A120;
    M2C_FIELD(&data_021424d8, s32 *, 0x1C) = 0;
    data_021424d4                          = 0;
}
