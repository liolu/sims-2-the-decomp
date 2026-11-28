/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fe764(void *, s32);                     /* extern */
M2C_UNK func_020fe8f4(void *, s32);                 /* extern */
M2C_UNK func_020fee4c();                            /* extern */
s32 func_020feef0(s32);                             /* extern */

s32 func_020fee04(void *arg0) {
    func_020fe8f4(arg0, func_020fe764(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020feef0(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020fee4c();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
