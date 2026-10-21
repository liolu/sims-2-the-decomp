/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206c5bc(s32);                         /* extern */

void func_02067990(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x64) != 1) {
        return;
    }
    func_0206c5bc(M2C_FIELD(arg0, s32 *, 0x38));
}
