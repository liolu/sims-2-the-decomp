/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020444f8(u16);                         /* extern */
s32 func_02046490();                                /* extern */
M2C_UNK func_020f0d40(s32, s32);                    /* extern */

void func_020b8e58(void *arg0) {
    if (M2C_FIELD(arg0, volatile s32 *, 0) == 0) {
        return;
    }
    func_020f0d40(func_02046490(), M2C_FIELD(arg0, volatile s32 *, 0));
    func_020444f8(M2C_FIELD(arg0, volatile u16 *, 4));
    M2C_FIELD(arg0, volatile s32 *, 0) = 0;
}
