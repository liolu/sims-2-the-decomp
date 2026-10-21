/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020444f8(u16);                         /* extern */

void *func_020d9bd4(void *arg0) {
    func_020444f8(M2C_FIELD(arg0, u16 *, 0));
    M2C_FIELD(arg0, u16 *, 0) = 0xFFFFU;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    return arg0;
}
