/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018aa0(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ad0();                            /* extern */

void *func_0201d844(void *arg0) {
    func_02018ad0();
    func_02018aa0(arg0, 0x23);
    M2C_FIELD(arg0, s8 *, 0x10)  = 2;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    M2C_FIELD(arg0, s8 *, 0x14)  = 0;
    M2C_FIELD(arg0, s8 *, 0x15)  = 1;
    M2C_FIELD(arg0, s8 *, 0x16)  = 0;
    return arg0;
}
