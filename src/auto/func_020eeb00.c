#include "m2c.h"

extern M2C_UNK data_027e1e0c;

void func_020eeb00(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    if (arg2 != 0) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    M2C_FIELD(&data_027e1e0c, s32 *, 0x94) = (s32) (arg0 | (arg1 << 0x10) | (var_r2 << 0xF));
}
