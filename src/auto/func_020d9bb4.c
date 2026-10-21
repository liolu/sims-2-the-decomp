/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020445a0(u16);                             /* extern */

void func_020d9bb4(void *arg0, u16 arg1) {
    M2C_FIELD(arg0, u16 *, 0) = arg1;
    M2C_FIELD(arg0, s32 *, 4) = func_020445a0(M2C_FIELD(arg0, u16 *, 0));
}
