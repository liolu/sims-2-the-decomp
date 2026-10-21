#include "m2c.h"

extern s32 *data_0213e434;

s32 func_0200fb30(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (arg2 == 0) {
        temp_r0_2 = *data_0213e434 & 0x40;
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
    }
    temp_r0        = (*data_0213e434 & ~0x80) | (arg1 << 7);
    *data_0213e434 = temp_r0;
    return temp_r0;
}
