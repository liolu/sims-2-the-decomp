/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa024();                            /* extern */
s32 func_020fbd64();                                /* extern */
M2C_UNK func_020fbd78(s32);                         /* extern */

void func_020fa130(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020fbd64();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020fa024();
    func_020fbd78(temp_r4);
}
