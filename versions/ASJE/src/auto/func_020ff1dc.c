/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020feb3c(void *, s32);                     /* extern */
M2C_UNK func_020feccc(void *, s32);                 /* extern */
M2C_UNK func_020ff224();                            /* extern */
s32 func_020ff2c8(s32);                             /* extern */

s32 func_020ff1dc(void *arg0) {
    func_020feccc(arg0, func_020feb3c(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020ff2c8(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020ff224();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
