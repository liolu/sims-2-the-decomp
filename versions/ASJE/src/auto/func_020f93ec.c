/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f686c();                                /* extern */
extern M2C_UNK data_0212f324;
extern s32 data_02145e28;
extern s32 data_02145e2c;

void func_020f93ec(void) {
    s32 temp_r0;

    temp_r0       = func_020f686c();
    data_02145e2c = temp_r0;
    data_02145e28 = *((u16 *) ((s8 *) &data_0212f324 + ((temp_r0 >> 4) * 2))) << 0xC;
}
