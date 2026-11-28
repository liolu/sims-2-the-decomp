/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046830();                            /* extern */

void func_0203d5f8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_02046830();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
