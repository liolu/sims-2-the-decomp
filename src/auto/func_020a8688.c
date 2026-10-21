#include "m2c.h"

void func_020a8688(s32 arg0, void *arg1) {
    M2C_FIELD(arg1, u8 *, 0xA6C) = (u8) (M2C_FIELD(arg1, u8 *, 0xA6C) | 2);
}
