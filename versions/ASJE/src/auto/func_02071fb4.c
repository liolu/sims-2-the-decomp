/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203cb90(M2C_UNK, M2C_UNK);            /* extern */

void func_02071fb4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1C) == 0) {
        return;
    }
    func_0203cb90(1, 0x30);
    M2C_FIELD(arg0, u8 *, 0x1C) = 0U;
}
