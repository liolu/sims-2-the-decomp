/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_021119c4(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02044cc4;

void *func_0204479c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 != 0) {
        func_021119c4(temp_r0, 8, 8, &func_02044cc4);
    }
    M2C_FIELD(arg0, s32 *, 0)  = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    return arg0;
}
