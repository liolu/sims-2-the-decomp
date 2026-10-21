/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011080(s32, s32, M2C_UNK);           /* extern */

void func_02019724(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x28);
    if (temp_r1 == 0) {
        return;
    }
    func_02011080(M2C_FIELD(arg0, s32 *, 4), temp_r1, 0);
}
