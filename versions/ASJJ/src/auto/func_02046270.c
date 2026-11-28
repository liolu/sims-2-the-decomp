/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa964(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020fbfe0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020fc0e8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_02046270(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_020fa964(arg1, arg3);
    if (arg4 == 0x20) {
        func_020fc0e8(arg0, arg1, arg2, arg3);
        return;
    }
    func_020fbfe0(arg0, arg1, arg2, arg3);
}
