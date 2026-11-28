/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020445b4(u16);                             /* extern */

void func_020d96a0(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_020445b4(M2C_FIELD(arg0, u16 *, 0));
}
