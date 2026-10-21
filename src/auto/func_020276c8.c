/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ad0();                            /* extern */

void *func_020276c8(void *arg0) {
    func_02018ad0();
    func_02018aa0(arg0, 0x21);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s16 *, 0x14) = 0x60;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    return arg0;
}
