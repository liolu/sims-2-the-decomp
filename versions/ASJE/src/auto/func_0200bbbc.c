/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(s32, M2C_UNK, s32);           /* extern */
s32 func_02046808(s32, M2C_UNK, M2C_UNK);           /* extern */

void func_0200bbbc(void *arg0, s8 arg1) {
    s32 temp_r4;

    if (arg1 == 0) {
        return;
    }
    temp_r4                   = arg1 * 4;
    M2C_FIELD(arg0, s8 *, 6)  = arg1;
    M2C_FIELD(arg0, s32 *, 8) = func_02046808(temp_r4, 0, 4);
    func_0204630c(M2C_FIELD(arg0, s32 *, 8), 0, temp_r4);
}
