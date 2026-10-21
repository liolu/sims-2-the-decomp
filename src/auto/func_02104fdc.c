#include "m2c.h"

extern s32 data_02148a8c;

void func_02104fdc(s32 arg0, s32 arg1) {
    M2C_FIELD((data_02148a8c + (arg0 * 4)), s32 *, 0x18) = arg1;
}
