/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fdc04(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02104488();                            /* extern */
s32 func_02104844(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02104948();                                /* extern */
extern s16 data_021485a8;
extern s32 data_021485ac;

s32 func_02104ae0(void) {
    s32 temp_r0;

    if (func_02104948() != 0) {
        return 3;
    }
    temp_r0 = func_02104844(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02104488();
    func_020fdc04(0xA, 0);
    data_021485ac = 0;
    data_021485a8 = 0;
    return 0;
}
