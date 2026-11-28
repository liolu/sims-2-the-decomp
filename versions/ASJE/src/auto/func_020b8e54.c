/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02044480(u16);                         /* extern */
s32 func_02046418();                                /* extern */
M2C_UNK func_020f0c04(s32, s32);                    /* extern */

void *func_020b8e54(void *arg0) {
    if (M2C_FIELD(arg0, volatile s32 *, 0) != 0) {
        func_020f0c04(func_02046418(), M2C_FIELD(arg0, volatile s32 *, 0));
        func_02044480(M2C_FIELD(arg0, volatile u16 *, 4));
        M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    }
    return arg0;
}
