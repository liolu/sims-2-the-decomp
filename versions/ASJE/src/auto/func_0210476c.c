/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02104708(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020fbde0();                            /* extern */
M2C_UNK func_021022c4(s32);                         /* extern */

void func_0210476c(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_021022c4(temp_r0);
    }
    func_02104708(1, 1);
    func_020fbde0();
}
