/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ad0();                            /* extern */

void *func_02026208(void *arg0) {
    func_02018ad0();
    func_02018aa0(arg0, 0x4B);
    M2C_FIELD(arg0, s8 *, 0x10)  = 1;
    M2C_FIELD(arg0, s32 *, 0x18) = 9;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    return arg0;
}
