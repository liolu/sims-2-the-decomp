/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ed48c();                                /* extern */
u16 func_020ed4b8(void *, u16);                     /* extern */

s32 func_020ed0b4(void *arg0) {
    if (func_020ed48c() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = func_020ed4b8(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
