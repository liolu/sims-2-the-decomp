#include "m2c.h"
extern M2C_UNK data_02139440;
extern s32 data_027e0000;
s16 func_0203d130(s32 arg0) {
    u8 *base;
    base = (u8 *) &data_02139440 + (data_027e0000 * 0x1D8);
    return *(s16 *) (base + (arg0 * 0x74));
}
