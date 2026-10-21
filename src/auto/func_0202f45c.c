/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202f0b4(void *, M2C_UNK);             /* extern */
M2C_UNK func_0202f210(void *, M2C_UNK);             /* extern */

s32 func_0202f45c(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (arg1 != 0xA) {
        return 0;
    }
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 0) {
        func_0202f210(arg0, arg2);
        M2C_FIELD(arg0, u8 *, 0x2C) = 1U;
    } else {
        func_0202f0b4(arg0, arg2);
        M2C_FIELD(arg0, u8 *, 0x2C) = 0U;
    }
    return 0;
}
