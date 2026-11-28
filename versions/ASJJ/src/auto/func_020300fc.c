/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02018a98(void *, M2C_UNK);             /* extern */
M2C_UNK func_02018ac8();                            /* extern */

void *func_020300fc(void *arg0) {
    func_02018ac8();
    func_02018a98(arg0, 0x3B);
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    return arg0;
}
