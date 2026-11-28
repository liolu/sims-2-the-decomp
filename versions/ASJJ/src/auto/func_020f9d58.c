/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9c4c();                            /* extern */
s32 func_020fb98c();                                /* extern */
M2C_UNK func_020fb9a0(s32);                         /* extern */

void func_020f9d58(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020fb98c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020f9c4c();
    func_020fb9a0(temp_r4);
}
