/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f76d8(u16);                         /* extern */
extern u16 data_02145f28;

u16 func_020f6a18(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0   = 0;
    data_02145f28 |= temp_r4;
    func_020f76d8(temp_r4);
    return temp_r4;
}
