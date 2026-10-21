/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ad0();                            /* extern */

void *func_02034f48(void *arg0) {
    func_02018ad0();
    func_02018aa0(arg0, 0x3D);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = -1;
    M2C_FIELD(arg0, s8 *, 0x18)  = 1;
    M2C_FIELD(arg0, s8 *, 0x19)  = 0;
    return arg0;
}
