#include "m2c.h"

extern s32 data_027e0000;

void func_0204ef60(void) {
    M2C_FIELD(((data_027e0000 << 0xC) + 0x04000000), s16 *, 0x50) = 0;
}
