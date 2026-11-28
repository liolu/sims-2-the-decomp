/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fb98c();                                /* extern */
M2C_UNK func_020fb9a0(s32);                         /* extern */
M2C_UNK func_020fd830(M2C_UNK);                     /* extern */

void func_020fd0bc(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020fb98c();
    func_020fd830(arg1);
    func_020fb9a0(temp_r4);
}
