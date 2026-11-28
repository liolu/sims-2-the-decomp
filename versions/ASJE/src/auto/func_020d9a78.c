/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02044528(u16);                             /* extern */

void func_020d9a78(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_02044528(M2C_FIELD(arg0, u16 *, 0));
}
