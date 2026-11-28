/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9aa8();                            /* extern */
M2C_UNK func_020fbd78(s32);                         /* extern */

void func_02106f68(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020f9aa8(arg0);
    }
    func_020fbd78(M2C_FIELD(arg1, s32 *, 4));
}
