/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ecf78();                                /* extern */
u16 func_020ecfa4(void *, u16);                     /* extern */

s32 func_020ecba0(void *arg0) {
    if (func_020ecf78() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 8)   = func_020ecfa4(arg0, M2C_FIELD(arg0, u16 *, 8));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) - 1);
    return 1;
}
