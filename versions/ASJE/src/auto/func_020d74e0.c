#include "m2c.h"

extern u8 data_021427b4;

s32 func_020d74e0(u32 arg0) {
    u8 *p;
    if (arg0 != 0xFFFFFFFFU) {
        p = (u8 *) &data_021427b4 + (arg0 & 0xFF) * 68;
        if ((arg0 & 0xFF) < 16U && *(s32 *) p != 0 && *(u16 *) (p + 8) == (arg0 >> 8) &&
            ((u32) (*(u8 *) (p + 11) << 25) >> 26) <= 1U) {
            return 1;
        }
    }
    return 0;
}
