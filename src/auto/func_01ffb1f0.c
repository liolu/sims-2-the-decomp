#include "m2c.h"

extern s32 data_027e0000;
extern u8 *data_027e00c4;

void func_01ffb1f0(s32 arg0) {
    u8 *ip;

    ip = (u8 *) (data_027e0000 * 8) + (u32) data_027e00c4;
    if (arg0 == *(s32 *) (ip + 12)) {
        return;
    }
    *(s32 *) (ip + 12)                        = arg0;
    ip                                        = data_027e00c4;
    *(s32 *) (ip + (data_027e0000 << 3) + 16) = 1;
}
