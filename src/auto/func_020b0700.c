/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204ca70(M2C_UNK);                         /* extern */
M2C_UNK func_020b0780(void *, M2C_UNK);             /* extern */

void func_020b0700(void *arg0, s32 arg1) {
    s32 temp_r0;

    if ((M2C_FIELD(arg0, s32 *, 0x18) == 1) && (arg1 == M2C_FIELD(arg0, s32 *, 0xC4))) {
        func_020b0780(arg0, 5);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0xC4) == 3) {
        M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (func_0204ca70(0xFF) & 1);
        temp_r0                      = M2C_FIELD(arg0, s32 *, 0xC4);
        if (temp_r0 == arg1) {
            M2C_FIELD(arg0, s32 *, 0xC4) = (s32) (temp_r0 + 1);
        }
    }
    func_020b0780(arg0, 6);
}
