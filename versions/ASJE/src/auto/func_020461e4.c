/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fad3c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020fc3b8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020fc4c0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020461e4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020fad3c(arg1, arg3);
    if (arg4 == 0x20) {
        func_020fc4c0(arg0, arg1, arg2, arg3);
        return;
    }
    func_020fc3b8(arg0, arg1, arg2, arg3);
}
