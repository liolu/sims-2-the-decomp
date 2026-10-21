/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020f9be4();                            /* extern */
M2C_UNK func_020fbeb4(s32);                         /* extern */

void func_021070a4(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020f9be4(arg0);
    }
    func_020fbeb4(M2C_FIELD(arg1, s32 *, 4));
}
