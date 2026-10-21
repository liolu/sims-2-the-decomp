/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fa160();                            /* extern */
s32 func_020fbea0();                                /* extern */
M2C_UNK func_020fbeb4(s32);                         /* extern */

void func_020fa26c(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020fbea0();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020fa160();
    func_020fbeb4(temp_r4);
}
