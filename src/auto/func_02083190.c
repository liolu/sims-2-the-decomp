/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204a2c8();                            /* extern */

void func_02083190(void *arg0) {
    s32 temp_r0;

    func_0204a2c8();
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x44);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 0x44) = (s32) (temp_r0 - 1);
    }
}
