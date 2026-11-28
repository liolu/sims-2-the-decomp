/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f0688();                            /* extern */
extern s32 data_02145a34;

s32 func_020f0708(void) {
    s32 temp_r0;

    func_020f0688();
    temp_r0       = data_02145a34;
    data_02145a34 = 0;
    return temp_r0;
}
