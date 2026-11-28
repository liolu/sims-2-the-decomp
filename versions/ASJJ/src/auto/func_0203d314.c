#include "m2c.h"
extern u8 data_02138f18;
extern s32 data_027e0000;
s32 func_0203d314(s32 arg0) {
    u8 *p;
    p = (u8 *) &data_02138f18 + data_027e0000 * 0x1D8;
    if (((u32) (M2C_FIELD((u8 *) p + arg0 * 0x74, u16 *, 8) << 0x18) >> 0x1F) != 0) {
        return 1;
    }
    return 0;
}
