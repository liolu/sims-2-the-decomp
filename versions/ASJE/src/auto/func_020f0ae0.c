/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f0a60();                            /* extern */
extern s32 data_02145dd4;

s32 func_020f0ae0(void) {
    s32 temp_r0;

    func_020f0a60();
    temp_r0       = data_02145dd4;
    data_02145dd4 = 0;
    return temp_r0;
}
