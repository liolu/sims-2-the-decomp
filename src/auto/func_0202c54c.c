/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d4e64(s32, s32);                    /* extern */

void func_0202c54c(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_r0 == -1) {
        return;
    }
    func_020d4e64(temp_r0, M2C_FIELD(arg0, s32 *, 4) + 0x78);
}
