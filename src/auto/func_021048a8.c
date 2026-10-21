/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fbf1c();                            /* extern */
M2C_UNK func_02102400(s32);                         /* extern */
M2C_UNK func_02104844(M2C_UNK, M2C_UNK);            /* extern */

void func_021048a8(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02102400(temp_r0);
    }
    func_02104844(1, 1);
    func_020fbf1c();
}
