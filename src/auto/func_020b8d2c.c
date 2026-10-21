/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ee53c(s32);                         /* extern */
M2C_UNK func_02111ed8(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_020b8d28;

void *func_020b8d2c(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 8) == 1) {
        func_020ee53c(M2C_FIELD(arg0, s32 *, 0) + 4);
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 != 0) {
        func_02111ed8(temp_r0, 0x14, 8, &func_020b8d28);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    return arg0;
}
