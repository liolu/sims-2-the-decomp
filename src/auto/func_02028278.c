/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ad0();                            /* extern */

void *func_02028278(void *arg0) {
    func_02018ad0();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    func_02018aa0(arg0, 0x18);
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s8 *, 0x22)  = 0;
    M2C_FIELD(arg0, s8 *, 0x23)  = 0;
    M2C_FIELD(arg0, s16 *, 0x20) = 3;
    return arg0;
}
