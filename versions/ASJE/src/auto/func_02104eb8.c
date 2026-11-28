/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fdfdc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02104860();                            /* extern */
s32 func_02104c1c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02104d20();                                /* extern */
extern s16 data_02148948;
extern s32 data_0214894c;

s32 func_02104eb8(void) {
    s32 temp_r0;

    if (func_02104d20() != 0) {
        return 3;
    }
    temp_r0 = func_02104c1c(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02104860();
    func_020fdfdc(0xA, 0);
    data_0214894c = 0;
    data_02148948 = 0;
    return 0;
}
