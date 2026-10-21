/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020525f0(s32, u8);                     /* extern */
M2C_UNK func_02052800(s32, u8);                     /* extern */

void func_020420a4(void *arg0, void *arg1) {
    u8 temp_r4;

    temp_r4 = M2C_FIELD(arg1, u8 *, 1);
    func_020525f0(M2C_FIELD(arg0, s32 *, 4) + 0x24, M2C_FIELD(arg1, u8 *, 0));
    func_02052800(M2C_FIELD(arg0, s32 *, 4) + 0x24, temp_r4);
}
