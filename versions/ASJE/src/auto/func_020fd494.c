/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fbd64();                                /* extern */
M2C_UNK func_020fbd78(s32);                         /* extern */
M2C_UNK func_020fdc08(M2C_UNK);                     /* extern */

void func_020fd494(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_020fbd64();
    func_020fdc08(arg1);
    func_020fbd78(temp_r4);
}
