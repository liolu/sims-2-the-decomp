/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02104330(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020fba08();                            /* extern */
M2C_UNK func_02101eec(s32);                         /* extern */

void func_02104394(void) {
    s32 temp_r0;

    temp_r0 = (s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF;
    if (temp_r0 != 0) {
        func_02101eec(temp_r0);
    }
    func_02104330(1, 1);
    func_020fba08();
}
