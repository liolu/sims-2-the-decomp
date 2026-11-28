/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02102fd4(s32, s32);                    /* extern */
M2C_UNK func_021030a8(s32);                         /* extern */
M2C_UNK func_02103168();                            /* extern */

void func_0204d178(s32 arg0, s32 arg1) {
    if ((arg1 & 3) == 3) {
        func_02102fd4(arg0, arg0 + 0x10);
        return;
    }
    if (arg1 & 1) {
        func_021030a8(arg0 + 0x10);
        return;
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02103168(arg0);
}
