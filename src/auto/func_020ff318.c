/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020fec78(void *, s32);                     /* extern */
M2C_UNK func_020fee08(void *, s32);                 /* extern */
M2C_UNK func_020ff360();                            /* extern */
s32 func_020ff404(s32);                             /* extern */

s32 func_020ff318(void *arg0) {
    func_020fee08(arg0, func_020fec78(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_020ff404(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_020ff360();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
