/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 data_0213df5c;

void func_02040aa0(s32 arg0, u8 *arg1) {
    s32 temp_r1;

    temp_r1                         = (*arg1 * 0x2C) + (data_0213df5c + 0x21E4);
    M2C_FIELD(temp_r1, s32 *, 0x14) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x14) | 1);
}
