/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_0213e434;

void func_02040a60(s32 arg0, u8 *arg1) {
    s32 temp_r1;

    temp_r1                         = (*arg1 * 0x2C) + (data_0213e434 + 0x21DC);
    M2C_FIELD(temp_r1, s32 *, 0x14) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x14) | 1);
}
