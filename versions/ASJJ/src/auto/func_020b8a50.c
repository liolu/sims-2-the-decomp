/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204450c(u16);                         /* extern */
s32 func_020464a4();                                /* extern */
M2C_UNK func_020f082c(s32, s32);                    /* extern */

void *func_020b8a50(void *arg0) {
    if (M2C_FIELD(arg0, volatile s32 *, 0) != 0) {
        func_020f082c(func_020464a4(), M2C_FIELD(arg0, volatile s32 *, 0));
        func_0204450c(M2C_FIELD(arg0, volatile u16 *, 4));
        M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    }
    return arg0;
}
