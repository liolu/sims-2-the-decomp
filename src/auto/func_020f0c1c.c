/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f0b9c();                            /* extern */
extern s32 data_02145f14;

s32 func_020f0c1c(void) {
    s32 temp_r0;

    func_020f0b9c();
    temp_r0       = data_02145f14;
    data_02145f14 = 0;
    return temp_r0;
}
