#include "m2c.h"
void func_020b8d80(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0)  = arg1;
    M2C_FIELD(arg0, s32 *, 4)  = 0;
    M2C_FIELD(arg0, s8 *, 8)   = 0;
    M2C_FIELD(arg0, s8 *, 9)   = 0;
    M2C_FIELD(arg0, s8 *, 0xC) = 0;
    M2C_FIELD(arg0, u8 *, 0xA) = 0xFF;
    M2C_FIELD(arg0, u8 *, 0xB) = 0xFF;
}
