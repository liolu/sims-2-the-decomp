/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fcc70(M2C_UNK, s32, M2C_UNK);       /* extern */

s32 func_020ff6a0(void *arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    func_020fcc70(arg1, M2C_FIELD(arg0, s32 *, 0x1C) + arg2, arg3);
    return 0;
}
