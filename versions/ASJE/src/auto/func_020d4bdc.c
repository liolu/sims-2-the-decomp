/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_02046580(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_02142394;
extern M2C_UNK data_02142398;

void func_020d4bdc(void) {
    func_0204630c(&data_02142398, 0, 0x20);
    M2C_FIELD(&data_02142398, s32 *, 4)    = func_02046580(0x7A120, 3, 4);
    M2C_FIELD(&data_02142398, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02142398, s32 *, 0x18) = 0x7A120;
    M2C_FIELD(&data_02142398, s32 *, 0x1C) = 0;
    data_02142394                          = 0;
}
