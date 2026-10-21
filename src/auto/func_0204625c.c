/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fae78(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020fc4f4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020fc5fc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_0204625c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020fae78(arg1, arg3);
    if (arg4 == 0x20) {
        func_020fc5fc(arg0, arg1, arg2, arg3);
        return;
    }
    func_020fc4f4(arg0, arg1, arg2, arg3);
}
