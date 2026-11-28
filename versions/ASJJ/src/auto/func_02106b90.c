/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f96d0();                            /* extern */
M2C_UNK func_020fb9a0(s32);                         /* extern */

void func_02106b90(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020f96d0(arg0);
    }
    func_020fb9a0(M2C_FIELD(arg1, s32 *, 4));
}
