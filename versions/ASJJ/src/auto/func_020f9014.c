/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020f6494();                                /* extern */
extern M2C_UNK data_0212ef64;
extern s32 data_02145a88;
extern s32 data_02145a8c;

void func_020f9014(void) {
    s32 temp_r0;

    temp_r0       = func_020f6494();
    data_02145a8c = temp_r0;
    data_02145a88 = *((u16 *) ((s8 *) &data_0212ef64 + ((temp_r0 >> 4) * 2))) << 0xC;
}
