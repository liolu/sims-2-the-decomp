#include "m2c.h"

extern s32 data_0214894c;

void func_02104ea0(s32 arg0, s32 arg1) {
    M2C_FIELD((data_0214894c + (arg0 * 4)), s32 *, 0x18) = arg1;
}
