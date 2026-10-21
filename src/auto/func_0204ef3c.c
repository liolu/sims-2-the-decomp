#include "m2c.h"

extern s32 data_027e0000;

void func_0204ef3c(s32 arg0, s32 arg1) {
    M2C_FIELD(((data_027e0000 << 0xC) + 0x04000000), s16 *, 0x50) = (s16) (arg0 | 0x40 | (arg1 << 8));
}
