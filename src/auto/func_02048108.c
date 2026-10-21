#include "m2c.h"

void func_02048108(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    void *temp_r2;

    temp_r2                          = arg0 + (arg2 << 5);
    M2C_FIELD(temp_r2, s32 *, 0xDF0) = arg1;
    M2C_FIELD(temp_r2, s32 *, 0xDF4) = arg3;
    M2C_FIELD(temp_r2, s32 *, 0xDF8) = arg4;
    M2C_FIELD(temp_r2, s32 *, 0xDFC) = arg5;
}
