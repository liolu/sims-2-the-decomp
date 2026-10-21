/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02111ed8(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK func_02044cb0;

void *func_02044788(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 != 0) {
        func_02111ed8(temp_r0, 8, 8, &func_02044cb0);
    }
    M2C_FIELD(arg0, s32 *, 0)  = 0;
    M2C_FIELD(arg0, s8 *, 0xA) = 0;
    return arg0;
}
