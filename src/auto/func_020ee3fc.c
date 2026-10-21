#include "m2c.h"

void func_020ee3fc(void *arg0, s32 *arg1, s32 *arg2) {
    M2C_FIELD(arg0, u16 *, 0x10) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) & ~1);
    M2C_FIELD(arg0, u16 *, 0x20) = (u16) (M2C_FIELD(arg0, u16 *, 0x20) & ~1);
    *arg1                        = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8)    = 0;
    *arg2                        = M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
}
