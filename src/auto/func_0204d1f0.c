/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02103110(s32, s32);                    /* extern */
M2C_UNK func_021031e4(s32);                         /* extern */
M2C_UNK func_021032a4();                            /* extern */

void func_0204d1f0(s32 arg0, s32 arg1) {
    if ((arg1 & 3) == 3) {
        func_02103110(arg0, arg0 + 0x10);
        return;
    }
    if (arg1 & 1) {
        func_021031e4(arg0 + 0x10);
        return;
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_021032a4(arg0);
}
