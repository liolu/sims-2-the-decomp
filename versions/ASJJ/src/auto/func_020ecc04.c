/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ecf8c();                                /* extern */
u16 func_020ecfa4(void *, u16);                     /* extern */

s32 func_020ecc04(void *arg0) {
    if (func_020ecf8c() != 0) {
        return 0;
    }
    M2C_FIELD(arg0, u16 *, 0xA) = func_020ecfa4(arg0, M2C_FIELD(arg0, u16 *, 0xA));
    M2C_FIELD(arg0, u16 *, 0xC) = (u16) (M2C_FIELD(arg0, u16 *, 0xC) + 1);
    return 1;
}
