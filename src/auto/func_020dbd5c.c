/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

void func_020dbd5c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r2;

    M2C_FIELD(arg0, s32 *, 0xA4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x9C) = arg1;
    temp_r2                      = arg2 & ~0xFFF;
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    M2C_FIELD(arg0, s32 *, 0xA8) = (s32) (arg1 + temp_r2);
    M2C_FIELD(arg0, s32 *, 0x40) = temp_r2;
    M2C_FIELD(arg0, s32 *, 0xA0) = temp_r2;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = arg3;
    M2C_FIELD(arg0, s32 *, 0xBC) = arg4;
}
